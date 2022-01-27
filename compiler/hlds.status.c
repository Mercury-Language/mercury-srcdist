/*
** Automatically generated from `status.m'
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


/* :- module hlds.status. */
/* :- implementation. */

/*
INIT mercury__hlds__status__init
ENDINIT
*/

#include "hlds.status.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_inst_status_0_0[2];

#line 100 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_inst_status_0_0;

#line 103 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_inst_status_0_0[1];

#line 106 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_inst_status_0[1];

#line 109 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_inst_status_0[1];

#line 112 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1];

#line 115 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1];

#line 118 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0;

#line 121 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0;

#line 124 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1;

#line 127 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2;

#line 130 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3];

#line 133 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3];

#line 136 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3];

#line 139 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1];

#line 142 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_0;

#line 145 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_1;

#line 148 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_2;

#line 151 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2];

#line 154 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1];

#line 157 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_instmode_import_0[2];

#line 160 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3];

#line 163 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3];

#line 166 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0;

#line 169 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1;

#line 172 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2;

#line 175 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3];

#line 178 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3];

#line 181 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3];

#line 184 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

#line 187 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

#line 190 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

#line 193 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3];

#line 196 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3];

#line 199 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3];

#line 202 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1];

#line 205 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0;

#line 208 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1;

#line 211 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2;

#line 214 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2];

#line 217 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1];

#line 220 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2];

#line 223 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3];

#line 226 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3];

#line 229 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1];

#line 232 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0;

#line 235 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1];

#line 238 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1;

#line 241 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1];

#line 244 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1];

#line 247 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2];

#line 250 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2];

#line 253 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2];

#line 256 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0;

#line 259 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1;

#line 262 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2];

#line 265 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2];

#line 268 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2];

#line 271 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_mode_status_0_0[2];

#line 274 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_mode_status_0_0;

#line 277 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_mode_status_0_0[1];

#line 280 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_mode_status_0[1];

#line 283 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_mode_status_0[1];

#line 286 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1];

#line 289 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1];

#line 292 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0;

#line 295 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1];

#line 298 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1;

#line 301 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1];

#line 304 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1];

#line 307 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2];

#line 310 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2];

#line 313 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2];

#line 316 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1];

#line 319 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0;

#line 322 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1];

#line 325 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1;

#line 328 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2;

#line 331 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3;

#line 334 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4;

#line 337 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5;

#line 340 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6;

#line 343 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7;

#line 346 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8;

#line 349 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9;

#line 352 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10;

#line 355 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0[9];

#line 358 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1];

#line 361 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1];

#line 364 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3];

#line 367 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_old_import_status_0[11];

#line 370 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_old_import_status_0[11];

#line 373 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1];

#line 376 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0;

#line 379 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1];

#line 382 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0;

#line 385 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1];

#line 388 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0;

#line 391 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 394 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 396 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 399 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 402 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 404 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 406 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 409 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 412 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 414 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 417 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 420 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 422 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 424 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 427 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
#line 430 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 432 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 435 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
#line 438 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 440 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 442 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 445 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
#line 448 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 450 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 453 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
#line 456 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 458 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 460 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 463 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
#line 466 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 468 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 471 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
#line 474 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 476 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 478 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 481 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 484 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 486 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 489 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 492 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 494 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 496 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 499 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 502 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 504 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 507 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 510 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 512 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 514 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 517 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 520 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 522 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 525 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 528 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 530 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 532 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 535 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 538 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 540 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 543 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 546 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 548 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 550 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 553 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 556 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 558 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 561 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 564 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 566 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 568 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 571 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
#line 574 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 576 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 579 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
#line 582 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 584 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 586 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 589 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 592 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 594 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 597 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 600 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 602 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 604 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 607 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 610 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 612 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 615 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 618 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 620 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 622 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 625 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 628 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 630 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 633 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 636 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 638 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 640 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 643 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 646 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 648 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 651 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 654 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 656 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 658 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 703 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 703 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 703 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 703 "status.m"
  MR_Word * hlds__status__Status_6);

#line 618 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 618 "status.m"
  MR_Word hlds__status__HeadVar__1_1);

#line 294 "status.m"
static void MR_CALL 
hlds__status__valid_old_status_for_inst_or_mode_2_p_0(
#line 294 "status.m"
  MR_Word hlds__status__OldStatus0_3,
#line 294 "status.m"
  MR_Word * hlds__status__OldStatus_4);


static /* final */ const MR_Box hlds__status_scalar_common_2[3][1];


#line 637 "status.m"
/* sealed */ struct hlds__status__vector_common_type_1_0_s {
#line 637 "status.m"
  const MR_Word hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 637 "status.m"
};

static /* final */ const struct hlds__status__vector_common_type_1_0_s hlds__status_vector_common_1[4];



static /* final */ const MR_Box hlds__status_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct hlds__status__vector_common_type_1_0_s hlds__status_vector_common_1[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 731 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_inst_status_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0
};

#line 737 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_inst_status_0_0 = {
  (MR_String) "inst_status",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_inst_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 752 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_inst_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_inst_status_0_0
};

#line 757 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_inst_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_inst_status_0_0
  }
};

#line 766 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_inst_status_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_inst_status_0_0
};

#line 771 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = {
  (MR_Integer) 0
};

#line 776 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_inst_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____inst_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____inst_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "inst_status",
  {     hlds__status__hlds__status__du_name_ordered_inst_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_inst_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_inst_status_0
};

#line 793 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1] = {
  (MR_Integer) 0
};

#line 798 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0 = {
  (MR_String) "instance_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 805 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____instance_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instance_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instance_status",
  {     &hlds__status__hlds__status__notag_functor_desc_instance_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_instance_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_instance_status_0
};

#line 822 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0 = {
  (MR_String) "instmode_export_nowhere",
  (MR_Integer) 0
};

#line 828 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1 = {
  (MR_String) "instmode_export_only_submodules",
  (MR_Integer) 1
};

#line 834 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2 = {
  (MR_String) "instmode_export_anywhere",
  (MR_Integer) 2
};

#line 840 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2
};

#line 847 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1
};

#line 854 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 861 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_export_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_export",
  {     hlds__status__hlds__status__enum_name_ordered_instmode_export_0 },
  {     hlds__status__hlds__status__enum_value_ordered_instmode_export_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_instmode_export_0
};

#line 878 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0
};

#line 883 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_0 = {
  (MR_String) "instmode_import_plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_instmode_import_0_0,
  NULL,
  NULL,
  NULL
};

#line 898 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_1 = {
  (MR_String) "instmode_import_abstract",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 913 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_2 = {
  (MR_String) "instmode_import_opt",
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

#line 928 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2
};

#line 934 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

#line 939 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_instmode_import_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1
  }
};

#line 953 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

#line 960 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 967 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_import_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____instmode_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_import",
  {     hlds__status__hlds__status__du_name_ordered_instmode_import_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_instmode_import_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_instmode_import_0
};

#line 984 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0 = {
  (MR_String) "instmode_import_plain_imp",
  (MR_Integer) 0
};

#line 990 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1 = {
  (MR_String) "instmode_import_plain_int",
  (MR_Integer) 1
};

#line 996 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2 = {
  (MR_String) "instmode_import_plain_ancestors_priv_int_file",
  (MR_Integer) 2
};

#line 1002 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2
};

#line 1009 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1
};

#line 1016 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1023 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_import_plain_locn_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_import_plain_locn_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_import_plain_locn",
  {     hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0 },
  {     hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0
};

#line 1040 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0 = {
  (MR_String) "item_export_nowhere",
  (MR_Integer) 0
};

#line 1046 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1 = {
  (MR_String) "item_export_only_submodules",
  (MR_Integer) 1
};

#line 1052 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2 = {
  (MR_String) "item_export_anywhere",
  (MR_Integer) 2
};

#line 1058 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2
};

#line 1065 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1
};

#line 1072 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1079 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_export_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____item_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_export",
  {     hlds__status__hlds__status__enum_name_ordered_item_export_0 },
  {     hlds__status__hlds__status__enum_value_ordered_item_export_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_item_export_0
};

#line 1096 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 1101 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0 = {
  (MR_String) "item_import_int_concrete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_item_import_0_0,
  NULL,
  NULL,
  NULL
};

#line 1116 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1 = {
  (MR_String) "item_import_int_abstract",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1131 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2 = {
  (MR_String) "item_import_opt_int",
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

#line 1146 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 1152 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0
};

#line 1157 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_1
  }
};

#line 1171 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 1178 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1185 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_import_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_import",
  {     hlds__status__hlds__status__du_name_ordered_item_import_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_item_import_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_item_import_0
};

#line 1202 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_export_0
};

#line 1207 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0 = {
  (MR_String) "item_defined_in_this_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_item_mercury_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1222 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_import_0
};

#line 1227 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1 = {
  (MR_String) "item_defined_in_other_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_item_mercury_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 1242 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 1247 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1
};

#line 1252 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1
  }
};

#line 1266 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 1272 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1278 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_mercury_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_mercury_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_mercury_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_mercury_status",
  {     hlds__status__hlds__status__du_name_ordered_item_mercury_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_item_mercury_status_0
};

#line 1295 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  (MR_Integer) 0
};

#line 1301 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  (MR_Integer) 1
};

#line 1307 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 1313 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 1319 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1325 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____maybe_opt_imported_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____maybe_opt_imported_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "maybe_opt_imported",
  {     hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0 },
  {     hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0
};

#line 1342 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_mode_status_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0
};

#line 1348 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_mode_status_0_0 = {
  (MR_String) "mode_status",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_mode_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1363 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_mode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_mode_status_0_0
};

#line 1368 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_mode_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_mode_status_0_0
  }
};

#line 1377 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_mode_status_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_mode_status_0_0
};

#line 1382 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = {
  (MR_Integer) 0
};

#line 1387 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_mode_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____mode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____mode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "mode_status",
  {     hlds__status__hlds__status__du_name_ordered_mode_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_mode_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_mode_status_0
};

#line 1404 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_export_0
};

#line 1409 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0 = {
  (MR_String) "instmode_defined_in_this_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_new_instmode_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1424 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_0
};

#line 1429 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1 = {
  (MR_String) "instmode_defined_in_other_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_new_instmode_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 1444 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

#line 1449 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1
};

#line 1454 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1
  }
};

#line 1468 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

#line 1474 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1480 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_new_instmode_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____new_instmode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____new_instmode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "new_instmode_status",
  {     hlds__status__hlds__status__du_name_ordered_new_instmode_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_new_instmode_status_0
};

#line 1497 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0
};

#line 1502 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0 = {
  (MR_String) "status_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_old_import_status_0_0,
  NULL,
  NULL,
  NULL
};

#line 1517 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 1522 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1 = {
  (MR_String) "status_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_old_import_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 1537 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2 = {
  (MR_String) "status_opt_imported",
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

#line 1552 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3 = {
  (MR_String) "status_abstract_imported",
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

#line 1567 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4 = {
  (MR_String) "status_pseudo_imported",
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

#line 1582 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5 = {
  (MR_String) "status_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1597 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6 = {
  (MR_String) "status_opt_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1612 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7 = {
  (MR_String) "status_abstract_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1627 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8 = {
  (MR_String) "status_pseudo_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1642 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9 = {
  (MR_String) "status_exported_to_submodules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1657 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10 = {
  (MR_String) "status_local",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1672 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0[9] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_2,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_3,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_4,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_5,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_6,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_7,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_8,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_9,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_10
};

#line 1685 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0
};

#line 1690 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1
};

#line 1695 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3] = {
  {
    (MR_Integer) 9,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2
  }
};

#line 1714 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_old_import_status_0[11] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_7,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_3,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_5,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_9,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_10,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_6,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_2,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_8,
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_4
};

#line 1729 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_old_import_status_0[11] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 6
};

#line 1744 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_old_import_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____old_import_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____old_import_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "old_import_status",
  {     hlds__status__hlds__status__du_name_ordered_old_import_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_old_import_status_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_old_import_status_0
};

#line 1761 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = {
  (MR_Integer) 0
};

#line 1766 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1773 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_pred_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____pred_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____pred_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "pred_status",
  {     &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_pred_status_0
};

#line 1790 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = {
  (MR_Integer) 0
};

#line 1795 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1802 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_type_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____type_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____type_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "type_status",
  {     &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_type_status_0
};

#line 1819 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1] = {
  (MR_Integer) 0
};

#line 1824 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 = {
  (MR_String) "typeclass_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1831 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____typeclass_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____typeclass_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "typeclass_status",
  {     &hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_typeclass_status_0
};

#line 1848 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 1851 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1853 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1855 "hlds.status.c"
{
#line 1857 "hlds.status.c"
  {
#line 1859 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1862 "hlds.status.c"
    {
#line 1864 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1867 "hlds.status.c"
    return hlds__status__succeeded;
#line 1869 "hlds.status.c"
  }
#line 1871 "hlds.status.c"
}

#line 1874 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 1877 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1879 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1881 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1883 "hlds.status.c"
{
#line 1885 "hlds.status.c"
  {
#line 1887 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1890 "hlds.status.c"
    {
#line 1892 "hlds.status.c"
      hlds__status____Compare____inst_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1895 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1897 "hlds.status.c"
  }
#line 1899 "hlds.status.c"
}

#line 1902 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 1905 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1907 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1909 "hlds.status.c"
{
#line 1911 "hlds.status.c"
  {
#line 1913 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1916 "hlds.status.c"
    {
#line 1918 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1921 "hlds.status.c"
    return hlds__status__succeeded;
#line 1923 "hlds.status.c"
  }
#line 1925 "hlds.status.c"
}

#line 1928 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 1931 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1933 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1935 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1937 "hlds.status.c"
{
#line 1939 "hlds.status.c"
  {
#line 1941 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1944 "hlds.status.c"
    {
#line 1946 "hlds.status.c"
      hlds__status____Compare____instance_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1949 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1951 "hlds.status.c"
  }
#line 1953 "hlds.status.c"
}

#line 1956 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
#line 1959 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1961 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1963 "hlds.status.c"
{
#line 1965 "hlds.status.c"
  {
#line 1967 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1970 "hlds.status.c"
    {
#line 1972 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1975 "hlds.status.c"
    return hlds__status__succeeded;
#line 1977 "hlds.status.c"
  }
#line 1979 "hlds.status.c"
}

#line 1982 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
#line 1985 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1987 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1989 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1991 "hlds.status.c"
{
#line 1993 "hlds.status.c"
  {
#line 1995 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1998 "hlds.status.c"
    {
#line 2000 "hlds.status.c"
      hlds__status____Compare____instmode_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2003 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2005 "hlds.status.c"
  }
#line 2007 "hlds.status.c"
}

#line 2010 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
#line 2013 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2015 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2017 "hlds.status.c"
{
#line 2019 "hlds.status.c"
  {
#line 2021 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2024 "hlds.status.c"
    {
#line 2026 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2029 "hlds.status.c"
    return hlds__status__succeeded;
#line 2031 "hlds.status.c"
  }
#line 2033 "hlds.status.c"
}

#line 2036 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
#line 2039 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2041 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2043 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2045 "hlds.status.c"
{
#line 2047 "hlds.status.c"
  {
#line 2049 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2052 "hlds.status.c"
    {
#line 2054 "hlds.status.c"
      hlds__status____Compare____instmode_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2057 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2059 "hlds.status.c"
  }
#line 2061 "hlds.status.c"
}

#line 2064 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
#line 2067 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2069 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2071 "hlds.status.c"
{
#line 2073 "hlds.status.c"
  {
#line 2075 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2078 "hlds.status.c"
    {
#line 2080 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_import_plain_locn_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2083 "hlds.status.c"
    return hlds__status__succeeded;
#line 2085 "hlds.status.c"
  }
#line 2087 "hlds.status.c"
}

#line 2090 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
#line 2093 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2095 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2097 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2099 "hlds.status.c"
{
#line 2101 "hlds.status.c"
  {
#line 2103 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2106 "hlds.status.c"
    {
#line 2108 "hlds.status.c"
      hlds__status____Compare____instmode_import_plain_locn_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2111 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2113 "hlds.status.c"
  }
#line 2115 "hlds.status.c"
}

#line 2118 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 2121 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2123 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2125 "hlds.status.c"
{
#line 2127 "hlds.status.c"
  {
#line 2129 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2132 "hlds.status.c"
    {
#line 2134 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2137 "hlds.status.c"
    return hlds__status__succeeded;
#line 2139 "hlds.status.c"
  }
#line 2141 "hlds.status.c"
}

#line 2144 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 2147 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2149 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2151 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2153 "hlds.status.c"
{
#line 2155 "hlds.status.c"
  {
#line 2157 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2160 "hlds.status.c"
    {
#line 2162 "hlds.status.c"
      hlds__status____Compare____item_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2165 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2167 "hlds.status.c"
  }
#line 2169 "hlds.status.c"
}

#line 2172 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 2175 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2177 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2179 "hlds.status.c"
{
#line 2181 "hlds.status.c"
  {
#line 2183 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2186 "hlds.status.c"
    {
#line 2188 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2191 "hlds.status.c"
    return hlds__status__succeeded;
#line 2193 "hlds.status.c"
  }
#line 2195 "hlds.status.c"
}

#line 2198 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 2201 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2203 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2205 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2207 "hlds.status.c"
{
#line 2209 "hlds.status.c"
  {
#line 2211 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2214 "hlds.status.c"
    {
#line 2216 "hlds.status.c"
      hlds__status____Compare____item_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2219 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2221 "hlds.status.c"
  }
#line 2223 "hlds.status.c"
}

#line 2226 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 2229 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2231 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2233 "hlds.status.c"
{
#line 2235 "hlds.status.c"
  {
#line 2237 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2240 "hlds.status.c"
    {
#line 2242 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2245 "hlds.status.c"
    return hlds__status__succeeded;
#line 2247 "hlds.status.c"
  }
#line 2249 "hlds.status.c"
}

#line 2252 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 2255 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2257 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2259 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2261 "hlds.status.c"
{
#line 2263 "hlds.status.c"
  {
#line 2265 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2268 "hlds.status.c"
    {
#line 2270 "hlds.status.c"
      hlds__status____Compare____item_mercury_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2273 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2275 "hlds.status.c"
  }
#line 2277 "hlds.status.c"
}

#line 2280 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 2283 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2285 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2287 "hlds.status.c"
{
#line 2289 "hlds.status.c"
  {
#line 2291 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2294 "hlds.status.c"
    {
#line 2296 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2299 "hlds.status.c"
    return hlds__status__succeeded;
#line 2301 "hlds.status.c"
  }
#line 2303 "hlds.status.c"
}

#line 2306 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 2309 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2311 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2313 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2315 "hlds.status.c"
{
#line 2317 "hlds.status.c"
  {
#line 2319 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2322 "hlds.status.c"
    {
#line 2324 "hlds.status.c"
      hlds__status____Compare____maybe_opt_imported_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2327 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2329 "hlds.status.c"
  }
#line 2331 "hlds.status.c"
}

#line 2334 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 2337 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2339 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2341 "hlds.status.c"
{
#line 2343 "hlds.status.c"
  {
#line 2345 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2348 "hlds.status.c"
    {
#line 2350 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2353 "hlds.status.c"
    return hlds__status__succeeded;
#line 2355 "hlds.status.c"
  }
#line 2357 "hlds.status.c"
}

#line 2360 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 2363 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2365 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2367 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2369 "hlds.status.c"
{
#line 2371 "hlds.status.c"
  {
#line 2373 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2376 "hlds.status.c"
    {
#line 2378 "hlds.status.c"
      hlds__status____Compare____mode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2381 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2383 "hlds.status.c"
  }
#line 2385 "hlds.status.c"
}

#line 2388 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
#line 2391 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2393 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2395 "hlds.status.c"
{
#line 2397 "hlds.status.c"
  {
#line 2399 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2402 "hlds.status.c"
    {
#line 2404 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2407 "hlds.status.c"
    return hlds__status__succeeded;
#line 2409 "hlds.status.c"
  }
#line 2411 "hlds.status.c"
}

#line 2414 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
#line 2417 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2419 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2421 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2423 "hlds.status.c"
{
#line 2425 "hlds.status.c"
  {
#line 2427 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2430 "hlds.status.c"
    {
#line 2432 "hlds.status.c"
      hlds__status____Compare____new_instmode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2435 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2437 "hlds.status.c"
  }
#line 2439 "hlds.status.c"
}

#line 2442 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 2445 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2447 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2449 "hlds.status.c"
{
#line 2451 "hlds.status.c"
  {
#line 2453 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2456 "hlds.status.c"
    {
#line 2458 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2461 "hlds.status.c"
    return hlds__status__succeeded;
#line 2463 "hlds.status.c"
  }
#line 2465 "hlds.status.c"
}

#line 2468 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 2471 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2473 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2475 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2477 "hlds.status.c"
{
#line 2479 "hlds.status.c"
  {
#line 2481 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2484 "hlds.status.c"
    {
#line 2486 "hlds.status.c"
      hlds__status____Compare____old_import_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2489 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2491 "hlds.status.c"
  }
#line 2493 "hlds.status.c"
}

#line 2496 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 2499 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2501 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2503 "hlds.status.c"
{
#line 2505 "hlds.status.c"
  {
#line 2507 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2510 "hlds.status.c"
    {
#line 2512 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2515 "hlds.status.c"
    return hlds__status__succeeded;
#line 2517 "hlds.status.c"
  }
#line 2519 "hlds.status.c"
}

#line 2522 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 2525 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2527 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2529 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2531 "hlds.status.c"
{
#line 2533 "hlds.status.c"
  {
#line 2535 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2538 "hlds.status.c"
    {
#line 2540 "hlds.status.c"
      hlds__status____Compare____pred_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2543 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2545 "hlds.status.c"
  }
#line 2547 "hlds.status.c"
}

#line 2550 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 2553 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2555 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2557 "hlds.status.c"
{
#line 2559 "hlds.status.c"
  {
#line 2561 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2564 "hlds.status.c"
    {
#line 2566 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2569 "hlds.status.c"
    return hlds__status__succeeded;
#line 2571 "hlds.status.c"
  }
#line 2573 "hlds.status.c"
}

#line 2576 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 2579 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2581 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2583 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2585 "hlds.status.c"
{
#line 2587 "hlds.status.c"
  {
#line 2589 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2592 "hlds.status.c"
    {
#line 2594 "hlds.status.c"
      hlds__status____Compare____type_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2597 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2599 "hlds.status.c"
  }
#line 2601 "hlds.status.c"
}

#line 2604 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 2607 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2609 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2611 "hlds.status.c"
{
#line 2613 "hlds.status.c"
  {
#line 2615 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2618 "hlds.status.c"
    {
#line 2620 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2623 "hlds.status.c"
    return hlds__status__succeeded;
#line 2625 "hlds.status.c"
  }
#line 2627 "hlds.status.c"
}

#line 2630 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 2633 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2635 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2637 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2639 "hlds.status.c"
{
#line 2641 "hlds.status.c"
  {
#line 2643 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2646 "hlds.status.c"
    {
#line 2648 "hlds.status.c"
      hlds__status____Compare____typeclass_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2651 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2653 "hlds.status.c"
  }
#line 2655 "hlds.status.c"
}

#line 53 "status.m"
void MR_CALL 
hlds__status____Compare____typeclass_status_0_0(
#line 53 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 53 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 53 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 53 "status.m"
{
#line 53 "status.m"
  {
#line 53 "status.m"
    MR_bool hlds__status__succeeded;
#line 53 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 53 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 53 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 53 "status.m"
    if (hlds__status__succeeded)
#line 2682 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 53 "status.m"
    else
#line 53 "status.m"
      {
#line 53 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 53 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 53 "status.m"
        {
#line 53 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
#line 53 "status.m"
          return;
        }
#line 53 "status.m"
      }
#line 53 "status.m"
  }
#line 53 "status.m"
}

#line 53 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0(
#line 53 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 53 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 53 "status.m"
{
#line 53 "status.m"
  {
#line 53 "status.m"
    MR_bool hlds__status__succeeded;
#line 53 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 53 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 53 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 53 "status.m"
    if (hlds__status__succeeded)
#line 53 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 53 "status.m"
    else
#line 53 "status.m"
      {
#line 53 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 53 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2740 "hlds.status.c"
        {
#line 2742 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 53 "status.m"
      }
#line 53 "status.m"
    return hlds__status__succeeded;
#line 53 "status.m"
  }
#line 53 "status.m"
}

#line 41 "status.m"
void MR_CALL 
hlds__status____Compare____type_status_0_0(
#line 41 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 41 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 41 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 41 "status.m"
{
#line 41 "status.m"
  {
#line 41 "status.m"
    MR_bool hlds__status__succeeded;
#line 41 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 41 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 41 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 41 "status.m"
    if (hlds__status__succeeded)
#line 2778 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "status.m"
    else
#line 41 "status.m"
      {
#line 41 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 41 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 41 "status.m"
        {
#line 41 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
#line 41 "status.m"
          return;
        }
#line 41 "status.m"
      }
#line 41 "status.m"
  }
#line 41 "status.m"
}

#line 41 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0(
#line 41 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 41 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 41 "status.m"
{
#line 41 "status.m"
  {
#line 41 "status.m"
    MR_bool hlds__status__succeeded;
#line 41 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 41 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 41 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 41 "status.m"
    if (hlds__status__succeeded)
#line 41 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 41 "status.m"
    else
#line 41 "status.m"
      {
#line 41 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 41 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2836 "hlds.status.c"
        {
#line 2838 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 41 "status.m"
      }
#line 41 "status.m"
    return hlds__status__succeeded;
#line 41 "status.m"
  }
#line 41 "status.m"
}

#line 50 "status.m"
void MR_CALL 
hlds__status____Compare____pred_status_0_0(
#line 50 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 50 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 50 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 50 "status.m"
{
#line 50 "status.m"
  {
#line 50 "status.m"
    MR_bool hlds__status__succeeded;
#line 50 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 50 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 50 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 50 "status.m"
    if (hlds__status__succeeded)
#line 2874 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "status.m"
    else
#line 50 "status.m"
      {
#line 50 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 50 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 50 "status.m"
        {
#line 50 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
#line 50 "status.m"
          return;
        }
#line 50 "status.m"
      }
#line 50 "status.m"
  }
#line 50 "status.m"
}

#line 50 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0(
#line 50 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 50 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 50 "status.m"
{
#line 50 "status.m"
  {
#line 50 "status.m"
    MR_bool hlds__status__succeeded;
#line 50 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 50 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 50 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 50 "status.m"
    if (hlds__status__succeeded)
#line 50 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 50 "status.m"
    else
#line 50 "status.m"
      {
#line 50 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 50 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2932 "hlds.status.c"
        {
#line 2934 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 50 "status.m"
      }
#line 50 "status.m"
    return hlds__status__succeeded;
#line 50 "status.m"
  }
#line 50 "status.m"
}

#line 111 "status.m"
void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
#line 111 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 111 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 111 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 111 "status.m"
{
#line 111 "status.m"
  while (MR_TRUE)
#line 111 "status.m"
    {
#line 111 "status.m"
      /* tailcall optimized into a loop */
#line 111 "status.m"
      {
#line 111 "status.m"
        MR_bool hlds__status__succeeded;
#line 111 "status.m"
        MR_Integer hlds__status__CastX_48 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 111 "status.m"
        MR_Integer hlds__status__CastY_49 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 111 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_48 == hlds__status__CastY_49);
#line 111 "status.m"
        if (hlds__status__succeeded)
#line 2976 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
        else
#line 111 "status.m"
#line 111 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 111 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
            case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 111 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3066 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3072 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 1:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3154 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3160 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 2:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3242 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3248 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 3:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3330 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3336 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 4:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3418 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3424 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 5:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3506 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3512 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 6:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3594 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3600 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 7:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3682 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3688 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 8:
#line 111 "status.m"
#line 111 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                    case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                        case (MR_Integer) 0:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 1:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 2:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 3:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 4:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 5:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 6:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 7:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                        case (MR_Integer) 8:
#line 111 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "status.m"
                          break;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 1:
#line 3770 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3776 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
            case (MR_Integer) 1:
#line 111 "status.m"
              {
#line 111 "status.m"
                MR_Word hlds__status__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 111 "status.m"
#line 111 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                  case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                      case (MR_Integer) 0:
#line 3809 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 1:
#line 3815 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 2:
#line 3821 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 3:
#line 3827 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 4:
#line 3833 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 5:
#line 3839 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 6:
#line 3845 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 7:
#line 3851 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 8:
#line 3857 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                    }
#line 111 "status.m"
                    break;
#line 111 "status.m"
                  case (MR_Integer) 1:
#line 111 "status.m"
                    {
#line 111 "status.m"
                      MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 111 "status.m"
                      /* direct tailcall eliminated */
#line 111 "status.m"
                      {
#line 111 "status.m"
                        MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_52_52;
#line 111 "status.m"
                        MR_Word hlds__status__HeadVar__3__tmp_copy_3 = hlds__status__V_5_5;

#line 111 "status.m"
                        hlds__status__HeadVar__3_3 = hlds__status__HeadVar__3__tmp_copy_3;
#line 111 "status.m"
                        hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 111 "status.m"
                      }
#line 111 "status.m"
                      continue;
#line 111 "status.m"
                    }
#line 111 "status.m"
                    break;
#line 111 "status.m"
                  case (MR_Integer) 2:
#line 3895 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                    break;
#line 111 "status.m"
                }
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
            case (MR_Integer) 2:
#line 111 "status.m"
              {
#line 111 "status.m"
                MR_Word hlds__status__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 111 "status.m"
#line 111 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                  case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 111 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                      case (MR_Integer) 0:
#line 3926 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 1:
#line 3932 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 2:
#line 3938 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 3:
#line 3944 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 4:
#line 3950 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 5:
#line 3956 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 6:
#line 3962 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 7:
#line 3968 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 8:
#line 3974 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                    }
#line 111 "status.m"
                    break;
#line 111 "status.m"
                  case (MR_Integer) 1:
#line 3984 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                    break;
#line 111 "status.m"
                  case (MR_Integer) 2:
#line 111 "status.m"
                    {
#line 111 "status.m"
                      MR_Word hlds__status__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 111 "status.m"
                      MR_Integer hlds__status__V_54_54 = (MR_Integer) hlds__status__V_53_53;
#line 111 "status.m"
                      MR_Integer hlds__status__V_55_55 = (MR_Integer) hlds__status__V_20_20;

#line 111 "status.m"
                      {
#line 111 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_54_54, hlds__status__V_55_55);
#line 111 "status.m"
                        return;
                      }
#line 111 "status.m"
                    }
#line 111 "status.m"
                    break;
#line 111 "status.m"
                }
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
          }
#line 111 "status.m"
      }
#line 111 "status.m"
      break;
#line 111 "status.m"
    }
#line 111 "status.m"
}

#line 111 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0(
#line 111 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 111 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 111 "status.m"
{
#line 111 "status.m"
  while (MR_TRUE)
#line 111 "status.m"
    {
#line 111 "status.m"
      /* tailcall optimized into a loop */
#line 111 "status.m"
      {
#line 111 "status.m"
        MR_bool hlds__status__succeeded;
#line 111 "status.m"
        MR_Integer hlds__status__CastX_25 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
        MR_Integer hlds__status__CastY_26 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_25 == hlds__status__CastY_26);
#line 111 "status.m"
        if (hlds__status__succeeded)
#line 111 "status.m"
          hlds__status__succeeded = MR_TRUE;
#line 111 "status.m"
        else
#line 111 "status.m"
#line 111 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 111 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
            case (MR_Integer) 0:
#line 111 "status.m"
#line 111 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 111 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 111 "status.m"
                case (MR_Integer) 0:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 1:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_10 == hlds__status__CastX_9);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 2:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_11 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_12 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_12 == hlds__status__CastX_11);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 3:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_13 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_14 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_14 == hlds__status__CastX_13);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 4:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_15 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_16 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_16 == hlds__status__CastX_15);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 5:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_17 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_18 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_18 == hlds__status__CastX_17);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 6:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_19 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_20 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_20 == hlds__status__CastX_19);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 7:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_21 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_22 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_22 == hlds__status__CastX_21);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
                case (MR_Integer) 8:
#line 111 "status.m"
                  {
#line 111 "status.m"
                    MR_Integer hlds__status__CastX_23 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 111 "status.m"
                    MR_Integer hlds__status__CastY_24 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 111 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_24 == hlds__status__CastX_23);
#line 111 "status.m"
                  }
#line 111 "status.m"
                  break;
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
            case (MR_Integer) 1:
#line 111 "status.m"
              {
#line 111 "status.m"
                MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "status.m"
                MR_Word hlds__status__V_4_4;

#line 111 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 111 "status.m"
                if (hlds__status__succeeded)
#line 111 "status.m"
                  {
#line 111 "status.m"
                    hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4227 "hlds.status.c"
                    /* direct tailcall eliminated */
#line 4229 "hlds.status.c"
                    {
#line 4231 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__V_3_3;
#line 4233 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_4_4;

#line 4236 "hlds.status.c"
                      hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 4238 "hlds.status.c"
                      hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 4240 "hlds.status.c"
                    }
#line 4242 "hlds.status.c"
                    continue;
#line 111 "status.m"
                  }
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
            case (MR_Integer) 2:
#line 111 "status.m"
              {
#line 111 "status.m"
                MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "status.m"
                MR_Word hlds__status__V_6_6;

#line 111 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 111 "status.m"
                if (hlds__status__succeeded)
#line 111 "status.m"
                  {
#line 111 "status.m"
                    hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4267 "hlds.status.c"
                    hlds__status__succeeded = (hlds__status__V_5_5 == hlds__status__V_6_6);
#line 111 "status.m"
                  }
#line 111 "status.m"
              }
#line 111 "status.m"
              break;
#line 111 "status.m"
          }
#line 111 "status.m"
        return hlds__status__succeeded;
#line 111 "status.m"
      }
#line 111 "status.m"
      break;
#line 111 "status.m"
    }
#line 111 "status.m"
}

#line 63 "status.m"
void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0(
#line 63 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 63 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 63 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 63 "status.m"
{
#line 63 "status.m"
  {
#line 63 "status.m"
    MR_bool hlds__status__succeeded;
#line 63 "status.m"
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 63 "status.m"
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 63 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
#line 63 "status.m"
    if (hlds__status__succeeded)
#line 4312 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 63 "status.m"
    else
#line 63 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 63 "status.m"
      {
#line 63 "status.m"
        MR_Word hlds__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 63 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 63 "status.m"
          {
#line 63 "status.m"
            MR_Word hlds__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 63 "status.m"
            {
#line 63 "status.m"
              hlds__status____Compare____instmode_import_0_0(hlds__status__HeadVar__1_1, hlds__status__V_16_16, hlds__status__V_11_11);
#line 63 "status.m"
              return;
            }
#line 63 "status.m"
          }
#line 63 "status.m"
        else
#line 4341 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 63 "status.m"
      }
#line 63 "status.m"
    else
#line 63 "status.m"
      {
#line 63 "status.m"
        MR_Word hlds__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 63 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4354 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 63 "status.m"
        else
#line 63 "status.m"
          {
#line 63 "status.m"
            MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 63 "status.m"
            MR_Integer hlds__status__V_18_18 = (MR_Integer) hlds__status__V_17_17;
#line 63 "status.m"
            MR_Integer hlds__status__V_19_19 = (MR_Integer) hlds__status__V_5_5;

#line 63 "status.m"
            {
#line 63 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_18_18, hlds__status__V_19_19);
#line 63 "status.m"
              return;
            }
#line 63 "status.m"
          }
#line 63 "status.m"
      }
#line 63 "status.m"
  }
#line 63 "status.m"
}

#line 63 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0(
#line 63 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 63 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 63 "status.m"
{
#line 63 "status.m"
  {
#line 63 "status.m"
    MR_bool hlds__status__succeeded;
#line 63 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 63 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 63 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 63 "status.m"
    if (hlds__status__succeeded)
#line 63 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 63 "status.m"
    else
#line 63 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 63 "status.m"
      {
#line 63 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "status.m"
        MR_Word hlds__status__V_6_6;

#line 63 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 63 "status.m"
        if (hlds__status__succeeded)
#line 63 "status.m"
          {
#line 63 "status.m"
            hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4426 "hlds.status.c"
            {
#line 4428 "hlds.status.c"
              return hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
            }
#line 63 "status.m"
          }
#line 63 "status.m"
      }
#line 63 "status.m"
    else
#line 63 "status.m"
      {
#line 63 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "status.m"
        MR_Word hlds__status__V_4_4;

#line 63 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 63 "status.m"
        if (hlds__status__succeeded)
#line 63 "status.m"
          {
#line 63 "status.m"
            hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4452 "hlds.status.c"
            hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 63 "status.m"
          }
#line 63 "status.m"
      }
#line 63 "status.m"
    return hlds__status__succeeded;
#line 63 "status.m"
  }
#line 63 "status.m"
}

#line 47 "status.m"
void MR_CALL 
hlds__status____Compare____mode_status_0_0(
#line 47 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 47 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 47 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 47 "status.m"
{
#line 47 "status.m"
  {
#line 47 "status.m"
    MR_bool hlds__status__succeeded;
#line 47 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 47 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 47 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 47 "status.m"
    if (hlds__status__succeeded)
#line 4489 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "status.m"
    else
#line 47 "status.m"
      {
#line 47 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "status.m"
        MR_Word hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "status.m"
        MR_Word hlds__status__V_8_8;

#line 47 "status.m"
        {
#line 47 "status.m"
          hlds__status____Compare____old_import_status_0_0(&hlds__status__V_8_8, hlds__status__V_4_4, hlds__status__V_6_6);
        }
#line 4511 "hlds.status.c"
        hlds__status__succeeded = (hlds__status__V_8_8 == (MR_Integer) 0);
#line 47 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 47 "status.m"
        if (hlds__status__succeeded)
#line 47 "status.m"
          *hlds__status__HeadVar__1_1 = hlds__status__V_8_8;
#line 47 "status.m"
        else
#line 47 "status.m"
          {
#line 47 "status.m"
            hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_5_5, hlds__status__V_7_7);
#line 47 "status.m"
            return;
          }
#line 47 "status.m"
      }
#line 47 "status.m"
  }
#line 47 "status.m"
}

#line 47 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0(
#line 47 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 47 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 47 "status.m"
{
#line 47 "status.m"
  {
#line 47 "status.m"
    MR_bool hlds__status__succeeded;
#line 47 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 47 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 47 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 47 "status.m"
    if (hlds__status__succeeded)
#line 47 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 47 "status.m"
    else
#line 47 "status.m"
      {
#line 47 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));

#line 4572 "hlds.status.c"
        {
#line 4574 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 47 "status.m"
        if (hlds__status__succeeded)
#line 4579 "hlds.status.c"
          {
#line 4581 "hlds.status.c"
            return hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
          }
#line 47 "status.m"
      }
#line 47 "status.m"
    return hlds__status__succeeded;
#line 47 "status.m"
  }
#line 47 "status.m"
}

#line 37 "status.m"
void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0(
#line 37 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 37 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 37 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 37 "status.m"
{
#line 37 "status.m"
  {
#line 37 "status.m"
    MR_bool hlds__status__succeeded;
#line 37 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 37 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 37 "status.m"
    {
#line 37 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
#line 37 "status.m"
      return;
    }
#line 37 "status.m"
  }
#line 37 "status.m"
}

#line 37 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0(
#line 37 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 37 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 37 "status.m"
{
#line 4634 "hlds.status.c"
  {
#line 4636 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 4639 "hlds.status.c"
    return hlds__status__succeeded;
#line 4641 "hlds.status.c"
  }
#line 37 "status.m"
}

#line 255 "status.m"
void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
#line 255 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 255 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 255 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 255 "status.m"
{
#line 255 "status.m"
  {
#line 255 "status.m"
    MR_bool hlds__status__succeeded;
#line 255 "status.m"
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 255 "status.m"
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 255 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
#line 255 "status.m"
    if (hlds__status__succeeded)
#line 4670 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "status.m"
    else
#line 255 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 255 "status.m"
      {
#line 255 "status.m"
        MR_Word hlds__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 255 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 255 "status.m"
          {
#line 255 "status.m"
            MR_Word hlds__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 255 "status.m"
            {
#line 255 "status.m"
              hlds__status____Compare____item_import_0_0(hlds__status__HeadVar__1_1, hlds__status__V_16_16, hlds__status__V_11_11);
#line 255 "status.m"
              return;
            }
#line 255 "status.m"
          }
#line 255 "status.m"
        else
#line 4699 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 255 "status.m"
      }
#line 255 "status.m"
    else
#line 255 "status.m"
      {
#line 255 "status.m"
        MR_Word hlds__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 255 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4712 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 255 "status.m"
        else
#line 255 "status.m"
          {
#line 255 "status.m"
            MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "status.m"
            MR_Integer hlds__status__V_18_18 = (MR_Integer) hlds__status__V_17_17;
#line 255 "status.m"
            MR_Integer hlds__status__V_19_19 = (MR_Integer) hlds__status__V_5_5;

#line 255 "status.m"
            {
#line 255 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_18_18, hlds__status__V_19_19);
#line 255 "status.m"
              return;
            }
#line 255 "status.m"
          }
#line 255 "status.m"
      }
#line 255 "status.m"
  }
#line 255 "status.m"
}

#line 255 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
#line 255 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 255 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 255 "status.m"
{
#line 255 "status.m"
  {
#line 255 "status.m"
    MR_bool hlds__status__succeeded;
#line 255 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 255 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 255 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 255 "status.m"
    if (hlds__status__succeeded)
#line 255 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 255 "status.m"
    else
#line 255 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 255 "status.m"
      {
#line 255 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "status.m"
        MR_Word hlds__status__V_6_6;

#line 255 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 255 "status.m"
        if (hlds__status__succeeded)
#line 255 "status.m"
          {
#line 255 "status.m"
            hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4784 "hlds.status.c"
            {
#line 4786 "hlds.status.c"
              return hlds__status__succeeded = hlds__status____Unify____item_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
            }
#line 255 "status.m"
          }
#line 255 "status.m"
      }
#line 255 "status.m"
    else
#line 255 "status.m"
      {
#line 255 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "status.m"
        MR_Word hlds__status__V_4_4;

#line 255 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 255 "status.m"
        if (hlds__status__succeeded)
#line 255 "status.m"
          {
#line 255 "status.m"
            hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4810 "hlds.status.c"
            hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 255 "status.m"
          }
#line 255 "status.m"
      }
#line 255 "status.m"
    return hlds__status__succeeded;
#line 255 "status.m"
  }
#line 255 "status.m"
}

#line 268 "status.m"
void MR_CALL 
hlds__status____Compare____item_import_0_0(
#line 268 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 268 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 268 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 268 "status.m"
{
#line 268 "status.m"
  {
#line 268 "status.m"
    MR_bool hlds__status__succeeded;
#line 268 "status.m"
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 268 "status.m"
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 268 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
#line 268 "status.m"
    if (hlds__status__succeeded)
#line 4847 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "status.m"
    else
#line 268 "status.m"
#line 268 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 268 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
        case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 268 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
            case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
                case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
                    case (MR_Integer) 0:
#line 268 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "status.m"
                      break;
#line 268 "status.m"
                    case (MR_Integer) 1:
#line 268 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "status.m"
                      break;
#line 268 "status.m"
                  }
#line 268 "status.m"
                  break;
#line 268 "status.m"
                case (MR_Integer) 1:
#line 4895 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "status.m"
                  break;
#line 268 "status.m"
              }
#line 268 "status.m"
              break;
#line 268 "status.m"
            case (MR_Integer) 1:
#line 268 "status.m"
#line 268 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
                case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
                    case (MR_Integer) 0:
#line 268 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "status.m"
                      break;
#line 268 "status.m"
                    case (MR_Integer) 1:
#line 268 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "status.m"
                      break;
#line 268 "status.m"
                  }
#line 268 "status.m"
                  break;
#line 268 "status.m"
                case (MR_Integer) 1:
#line 4935 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "status.m"
                  break;
#line 268 "status.m"
              }
#line 268 "status.m"
              break;
#line 268 "status.m"
          }
#line 268 "status.m"
          break;
#line 268 "status.m"
        case (MR_Integer) 1:
#line 268 "status.m"
          {
#line 268 "status.m"
            MR_Word hlds__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 268 "status.m"
#line 268 "status.m"
            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
              case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 268 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
                  case (MR_Integer) 0:
#line 4968 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "status.m"
                    break;
#line 268 "status.m"
                  case (MR_Integer) 1:
#line 4974 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "status.m"
                    break;
#line 268 "status.m"
                }
#line 268 "status.m"
                break;
#line 268 "status.m"
              case (MR_Integer) 1:
#line 268 "status.m"
                {
#line 268 "status.m"
                  MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "status.m"
                  MR_Integer hlds__status__V_14_14 = (MR_Integer) hlds__status__V_13_13;
#line 268 "status.m"
                  MR_Integer hlds__status__V_15_15 = (MR_Integer) hlds__status__V_5_5;

#line 268 "status.m"
                  {
#line 268 "status.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_14_14, hlds__status__V_15_15);
#line 268 "status.m"
                    return;
                  }
#line 268 "status.m"
                }
#line 268 "status.m"
                break;
#line 268 "status.m"
            }
#line 268 "status.m"
          }
#line 268 "status.m"
          break;
#line 268 "status.m"
      }
#line 268 "status.m"
  }
#line 268 "status.m"
}

#line 268 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0(
#line 268 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 268 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 268 "status.m"
{
#line 268 "status.m"
  {
#line 268 "status.m"
    MR_bool hlds__status__succeeded;
#line 268 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 268 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 268 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 268 "status.m"
    if (hlds__status__succeeded)
#line 268 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 268 "status.m"
    else
#line 268 "status.m"
#line 268 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 268 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
        case (MR_Integer) 0:
#line 268 "status.m"
#line 268 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 268 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "status.m"
            case (MR_Integer) 0:
#line 268 "status.m"
              {
#line 268 "status.m"
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 268 "status.m"
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 268 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
#line 268 "status.m"
              }
#line 268 "status.m"
              break;
#line 268 "status.m"
            case (MR_Integer) 1:
#line 268 "status.m"
              {
#line 268 "status.m"
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 268 "status.m"
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 268 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 268 "status.m"
              }
#line 268 "status.m"
              break;
#line 268 "status.m"
          }
#line 268 "status.m"
          break;
#line 268 "status.m"
        case (MR_Integer) 1:
#line 268 "status.m"
          {
#line 268 "status.m"
            MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "status.m"
            MR_Word hlds__status__V_4_4;

#line 268 "status.m"
            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 268 "status.m"
            if (hlds__status__succeeded)
#line 268 "status.m"
              {
#line 268 "status.m"
                hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 5106 "hlds.status.c"
                hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 268 "status.m"
              }
#line 268 "status.m"
          }
#line 268 "status.m"
          break;
#line 268 "status.m"
      }
#line 268 "status.m"
    return hlds__status__succeeded;
#line 268 "status.m"
  }
#line 268 "status.m"
}

#line 263 "status.m"
void MR_CALL 
hlds__status____Compare____item_export_0_0(
#line 263 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 263 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 263 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 263 "status.m"
{
#line 263 "status.m"
  {
#line 263 "status.m"
    MR_bool hlds__status__succeeded;
#line 263 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 263 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 263 "status.m"
    {
#line 263 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
#line 263 "status.m"
      return;
    }
#line 263 "status.m"
  }
#line 263 "status.m"
}

#line 263 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
#line 263 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 263 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 263 "status.m"
{
#line 5164 "hlds.status.c"
  {
#line 5166 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5169 "hlds.status.c"
    return hlds__status__succeeded;
#line 5171 "hlds.status.c"
  }
#line 263 "status.m"
}

#line 97 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0(
#line 97 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 97 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 97 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 97 "status.m"
{
#line 97 "status.m"
  {
#line 97 "status.m"
    MR_bool hlds__status__succeeded;
#line 97 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 97 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 97 "status.m"
    {
#line 97 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
#line 97 "status.m"
      return;
    }
#line 97 "status.m"
  }
#line 97 "status.m"
}

#line 97 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0(
#line 97 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 97 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 97 "status.m"
{
#line 5217 "hlds.status.c"
  {
#line 5219 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5222 "hlds.status.c"
    return hlds__status__succeeded;
#line 5224 "hlds.status.c"
  }
#line 97 "status.m"
}

#line 76 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_import_0_0(
#line 76 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 76 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 76 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 76 "status.m"
{
#line 76 "status.m"
  {
#line 76 "status.m"
    MR_bool hlds__status__succeeded;
#line 76 "status.m"
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 76 "status.m"
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 76 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
#line 76 "status.m"
    if (hlds__status__succeeded)
#line 5253 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "status.m"
    else
#line 76 "status.m"
#line 76 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 76 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
        case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 76 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
            case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
                case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
                    case (MR_Integer) 0:
#line 76 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "status.m"
                      break;
#line 76 "status.m"
                    case (MR_Integer) 1:
#line 76 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "status.m"
                      break;
#line 76 "status.m"
                  }
#line 76 "status.m"
                  break;
#line 76 "status.m"
                case (MR_Integer) 1:
#line 5301 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "status.m"
                  break;
#line 76 "status.m"
              }
#line 76 "status.m"
              break;
#line 76 "status.m"
            case (MR_Integer) 1:
#line 76 "status.m"
#line 76 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
                case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
                    case (MR_Integer) 0:
#line 76 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "status.m"
                      break;
#line 76 "status.m"
                    case (MR_Integer) 1:
#line 76 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "status.m"
                      break;
#line 76 "status.m"
                  }
#line 76 "status.m"
                  break;
#line 76 "status.m"
                case (MR_Integer) 1:
#line 5341 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "status.m"
                  break;
#line 76 "status.m"
              }
#line 76 "status.m"
              break;
#line 76 "status.m"
          }
#line 76 "status.m"
          break;
#line 76 "status.m"
        case (MR_Integer) 1:
#line 76 "status.m"
          {
#line 76 "status.m"
            MR_Word hlds__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "status.m"
#line 76 "status.m"
            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
              case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 76 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
                  case (MR_Integer) 0:
#line 5374 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "status.m"
                    break;
#line 76 "status.m"
                  case (MR_Integer) 1:
#line 5380 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "status.m"
                    break;
#line 76 "status.m"
                }
#line 76 "status.m"
                break;
#line 76 "status.m"
              case (MR_Integer) 1:
#line 76 "status.m"
                {
#line 76 "status.m"
                  MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "status.m"
                  MR_Integer hlds__status__V_14_14 = (MR_Integer) hlds__status__V_13_13;
#line 76 "status.m"
                  MR_Integer hlds__status__V_15_15 = (MR_Integer) hlds__status__V_5_5;

#line 76 "status.m"
                  {
#line 76 "status.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_14_14, hlds__status__V_15_15);
#line 76 "status.m"
                    return;
                  }
#line 76 "status.m"
                }
#line 76 "status.m"
                break;
#line 76 "status.m"
            }
#line 76 "status.m"
          }
#line 76 "status.m"
          break;
#line 76 "status.m"
      }
#line 76 "status.m"
  }
#line 76 "status.m"
}

#line 76 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0(
#line 76 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 76 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 76 "status.m"
{
#line 76 "status.m"
  {
#line 76 "status.m"
    MR_bool hlds__status__succeeded;
#line 76 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 76 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 76 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 76 "status.m"
    if (hlds__status__succeeded)
#line 76 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 76 "status.m"
    else
#line 76 "status.m"
#line 76 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 76 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
        case (MR_Integer) 0:
#line 76 "status.m"
#line 76 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 76 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "status.m"
            case (MR_Integer) 0:
#line 76 "status.m"
              {
#line 76 "status.m"
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 76 "status.m"
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 76 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
#line 76 "status.m"
              }
#line 76 "status.m"
              break;
#line 76 "status.m"
            case (MR_Integer) 1:
#line 76 "status.m"
              {
#line 76 "status.m"
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 76 "status.m"
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 76 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 76 "status.m"
              }
#line 76 "status.m"
              break;
#line 76 "status.m"
          }
#line 76 "status.m"
          break;
#line 76 "status.m"
        case (MR_Integer) 1:
#line 76 "status.m"
          {
#line 76 "status.m"
            MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "status.m"
            MR_Word hlds__status__V_4_4;

#line 76 "status.m"
            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "status.m"
            if (hlds__status__succeeded)
#line 76 "status.m"
              {
#line 76 "status.m"
                hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 5512 "hlds.status.c"
                hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 76 "status.m"
              }
#line 76 "status.m"
          }
#line 76 "status.m"
          break;
#line 76 "status.m"
      }
#line 76 "status.m"
    return hlds__status__succeeded;
#line 76 "status.m"
  }
#line 76 "status.m"
}

#line 71 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_export_0_0(
#line 71 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 71 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 71 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 71 "status.m"
{
#line 71 "status.m"
  {
#line 71 "status.m"
    MR_bool hlds__status__succeeded;
#line 71 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 71 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 71 "status.m"
    {
#line 71 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
#line 71 "status.m"
      return;
    }
#line 71 "status.m"
  }
#line 71 "status.m"
}

#line 71 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0(
#line 71 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 71 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 71 "status.m"
{
#line 5570 "hlds.status.c"
  {
#line 5572 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5575 "hlds.status.c"
    return hlds__status__succeeded;
#line 5577 "hlds.status.c"
  }
#line 71 "status.m"
}

#line 56 "status.m"
void MR_CALL 
hlds__status____Compare____instance_status_0_0(
#line 56 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 56 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 56 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 56 "status.m"
{
#line 56 "status.m"
  {
#line 56 "status.m"
    MR_bool hlds__status__succeeded;
#line 56 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 56 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 56 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 56 "status.m"
    if (hlds__status__succeeded)
#line 5606 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "status.m"
    else
#line 56 "status.m"
      {
#line 56 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 56 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 56 "status.m"
        {
#line 56 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
#line 56 "status.m"
          return;
        }
#line 56 "status.m"
      }
#line 56 "status.m"
  }
#line 56 "status.m"
}

#line 56 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0(
#line 56 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 56 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 56 "status.m"
{
#line 56 "status.m"
  {
#line 56 "status.m"
    MR_bool hlds__status__succeeded;
#line 56 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 56 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 56 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 56 "status.m"
    if (hlds__status__succeeded)
#line 56 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 56 "status.m"
    else
#line 56 "status.m"
      {
#line 56 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 56 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 5664 "hlds.status.c"
        {
#line 5666 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 56 "status.m"
      }
#line 56 "status.m"
    return hlds__status__succeeded;
#line 56 "status.m"
  }
#line 56 "status.m"
}

#line 44 "status.m"
void MR_CALL 
hlds__status____Compare____inst_status_0_0(
#line 44 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 44 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 44 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 44 "status.m"
{
#line 44 "status.m"
  {
#line 44 "status.m"
    MR_bool hlds__status__succeeded;
#line 44 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 44 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 44 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 44 "status.m"
    if (hlds__status__succeeded)
#line 5702 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "status.m"
    else
#line 44 "status.m"
      {
#line 44 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "status.m"
        MR_Word hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 1)));
#line 44 "status.m"
        MR_Word hlds__status__V_8_8;

#line 44 "status.m"
        {
#line 44 "status.m"
          hlds__status____Compare____old_import_status_0_0(&hlds__status__V_8_8, hlds__status__V_4_4, hlds__status__V_6_6);
        }
#line 5724 "hlds.status.c"
        hlds__status__succeeded = (hlds__status__V_8_8 == (MR_Integer) 0);
#line 44 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 44 "status.m"
        if (hlds__status__succeeded)
#line 44 "status.m"
          *hlds__status__HeadVar__1_1 = hlds__status__V_8_8;
#line 44 "status.m"
        else
#line 44 "status.m"
          {
#line 44 "status.m"
            hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_5_5, hlds__status__V_7_7);
#line 44 "status.m"
            return;
          }
#line 44 "status.m"
      }
#line 44 "status.m"
  }
#line 44 "status.m"
}

#line 44 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0(
#line 44 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 44 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 44 "status.m"
{
#line 44 "status.m"
  {
#line 44 "status.m"
    MR_bool hlds__status__succeeded;
#line 44 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 44 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 44 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 44 "status.m"
    if (hlds__status__succeeded)
#line 44 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 44 "status.m"
    else
#line 44 "status.m"
      {
#line 44 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 1)));
#line 44 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));

#line 5785 "hlds.status.c"
        {
#line 5787 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 44 "status.m"
        if (hlds__status__succeeded)
#line 5792 "hlds.status.c"
          {
#line 5794 "hlds.status.c"
            return hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
          }
#line 44 "status.m"
      }
#line 44 "status.m"
    return hlds__status__succeeded;
#line 44 "status.m"
  }
#line 44 "status.m"
}

#line 703 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 703 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 703 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 703 "status.m"
  MR_Word * hlds__status__Status_6)
#line 703 "status.m"
{
#line 709 "status.m"
  {
#line 709 "status.m"
    MR_bool hlds__status__succeeded;
#line 709 "status.m"
    MR_Word hlds__status__CombinedStatus_7;

#line 716 "status.m"
#line 716 "status.m"
    switch (MR_tag((MR_Word) hlds__status__StatusA_4)) {
#line 716 "status.m"
      default:
#line 716 "status.m"
        hlds__status__succeeded = MR_FALSE;
#line 716 "status.m"
        break;
#line 716 "status.m"
      case (MR_Integer) 0:
#line 716 "status.m"
#line 716 "status.m"
        switch (MR_unmkbody(hlds__status__StatusA_4)) {
#line 716 "status.m"
          default:
#line 716 "status.m"
            hlds__status__succeeded = MR_FALSE;
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 0:
#line 739 "status.m"
            {
#line 739 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 739 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 1:
#line 797 "status.m"
            {
#line 795 "status.m"
              MR_Word hlds__status__Section_30;

#line 795 "status.m"
              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 795 "status.m"
              if (hlds__status__succeeded)
#line 795 "status.m"
                {
#line 795 "status.m"
                  hlds__status__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusB_5, (MR_Integer) 0)));
#line 796 "status.m"
                  hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 795 "status.m"
                }
#line 795 "status.m"
              else
#line 798 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 797 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 797 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 3:
#line 731 "status.m"
            {
#line 731 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 731 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 731 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 5:
#line 787 "status.m"
            {
#line 785 "status.m"
              hlds__status__succeeded = (hlds__status__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 787 "status.m"
              if (hlds__status__succeeded)
#line 786 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 787 "status.m"
              else
#line 788 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 787 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 787 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 7:
#line 732 "status.m"
            {
#line 732 "status.m"
              MR_Word hlds__status__Status3_20;

#line 772 "status.m"
#line 772 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 772 "status.m"
                default:
#line 772 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 772 "status.m"
                  break;
#line 772 "status.m"
                case (MR_Integer) 0:
#line 772 "status.m"
#line 772 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 772 "status.m"
                    default:
#line 772 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 0:
#line 777 "status.m"
                      {
#line 777 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 777 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 777 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 1:
#line 778 "status.m"
                      {
#line 778 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 778 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 778 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 3:
#line 776 "status.m"
                      {
#line 776 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 776 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 776 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 5:
#line 779 "status.m"
                      {
#line 779 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 779 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 779 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 7:
#line 773 "status.m"
                      {
#line 773 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 773 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 773 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                    case (MR_Integer) 8:
#line 775 "status.m"
                      {
#line 775 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 775 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 775 "status.m"
                      }
#line 772 "status.m"
                      break;
#line 772 "status.m"
                  }
#line 772 "status.m"
                  break;
#line 772 "status.m"
                case (MR_Integer) 2:
#line 774 "status.m"
                  {
#line 774 "status.m"
                    hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 774 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 774 "status.m"
                  }
#line 772 "status.m"
                  break;
#line 772 "status.m"
              }
#line 732 "status.m"
              if (hlds__status__succeeded)
#line 732 "status.m"
                {
#line 734 "status.m"
                  hlds__status__succeeded = (hlds__status__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 736 "status.m"
                  if (hlds__status__succeeded)
#line 735 "status.m"
                    hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 736 "status.m"
                  else
#line 737 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__Status3_20;
#line 736 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 732 "status.m"
                }
#line 732 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
          case (MR_Integer) 8:
#line 772 "status.m"
#line 772 "status.m"
            switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 772 "status.m"
              default:
#line 772 "status.m"
                hlds__status__succeeded = MR_FALSE;
#line 772 "status.m"
                break;
#line 772 "status.m"
              case (MR_Integer) 0:
#line 772 "status.m"
#line 772 "status.m"
                switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 772 "status.m"
                  default:
#line 772 "status.m"
                    hlds__status__succeeded = MR_FALSE;
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 0:
#line 777 "status.m"
                    {
#line 777 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 777 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 777 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 1:
#line 778 "status.m"
                    {
#line 778 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 778 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 778 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 3:
#line 776 "status.m"
                    {
#line 776 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 776 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 776 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 5:
#line 779 "status.m"
                    {
#line 779 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 779 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 779 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 7:
#line 773 "status.m"
                    {
#line 773 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 773 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 773 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                  case (MR_Integer) 8:
#line 775 "status.m"
                    {
#line 775 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 775 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 775 "status.m"
                    }
#line 772 "status.m"
                    break;
#line 772 "status.m"
                }
#line 772 "status.m"
                break;
#line 772 "status.m"
              case (MR_Integer) 2:
#line 774 "status.m"
                {
#line 774 "status.m"
                  hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 774 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 774 "status.m"
                }
#line 772 "status.m"
                break;
#line 772 "status.m"
            }
#line 716 "status.m"
            break;
#line 716 "status.m"
        }
#line 716 "status.m"
        break;
#line 716 "status.m"
      case (MR_Integer) 2:
#line 716 "status.m"
        {
#line 716 "status.m"
          MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusA_4, (MR_Integer) 0)));

#line 724 "status.m"
#line 724 "status.m"
          switch (hlds__status__ImportLocn_11) {
#line 724 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 724 "status.m"
            case (MR_Integer) 3:
#line 725 "status.m"
              {
#line 727 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[0]);
#line 725 "status.m"
                hlds__status__succeeded = MR_TRUE;
#line 725 "status.m"
              }
#line 724 "status.m"
              break;
#line 724 "status.m"
            case (MR_Integer) 0:
#line 724 "status.m"
            case (MR_Integer) 2:
#line 724 "status.m"
            case (MR_Integer) 1:
#line 750 "status.m"
#line 750 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 750 "status.m"
                default:
#line 750 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 750 "status.m"
                  break;
#line 750 "status.m"
                case (MR_Integer) 0:
#line 750 "status.m"
#line 750 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 750 "status.m"
                    default:
#line 750 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 750 "status.m"
                      break;
#line 750 "status.m"
                    case (MR_Integer) 0:
#line 760 "status.m"
                      {
#line 760 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 760 "status.m"
                      }
#line 750 "status.m"
                      break;
#line 750 "status.m"
                    case (MR_Integer) 1:
#line 762 "status.m"
                      {
#line 763 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[1]);
#line 762 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 762 "status.m"
                      }
#line 750 "status.m"
                      break;
#line 750 "status.m"
                    case (MR_Integer) 3:
#line 757 "status.m"
                      {
#line 757 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 757 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 757 "status.m"
                      }
#line 750 "status.m"
                      break;
#line 750 "status.m"
                    case (MR_Integer) 5:
#line 766 "status.m"
                      {
#line 766 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 766 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 766 "status.m"
                      }
#line 750 "status.m"
                      break;
#line 750 "status.m"
                    case (MR_Integer) 8:
#line 753 "status.m"
                      {
#line 754 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[2]);
#line 753 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 753 "status.m"
                      }
#line 750 "status.m"
                      break;
#line 750 "status.m"
                  }
#line 750 "status.m"
                  break;
#line 750 "status.m"
                case (MR_Integer) 2:
#line 751 "status.m"
                  {
#line 751 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 751 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 751 "status.m"
                  }
#line 750 "status.m"
                  break;
#line 750 "status.m"
              }
#line 724 "status.m"
              break;
#line 724 "status.m"
          }
#line 716 "status.m"
        }
#line 716 "status.m"
        break;
#line 716 "status.m"
    }
#line 709 "status.m"
    if (hlds__status__succeeded)
#line 708 "status.m"
      *hlds__status__Status_6 = hlds__status__CombinedStatus_7;
#line 709 "status.m"
    else
#line 710 "status.m"
      {
#line 710 "status.m"
        {
#line 710 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.old_combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 710 "status.m"
          return;
        }
#line 710 "status.m"
      }
#line 709 "status.m"
  }
#line 703 "status.m"
}

#line 618 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 618 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 618 "status.m"
{
#line 620 "status.m"
  while (MR_TRUE)
#line 620 "status.m"
    {
#line 620 "status.m"
      /* tailcall optimized into a loop */
#line 620 "status.m"
      {
#line 620 "status.m"
        MR_bool hlds__status__succeeded;
#line 620 "status.m"
        MR_Word hlds__status__HeadVar__2_2;

#line 620 "status.m"
#line 620 "status.m"
        switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 620 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 620 "status.m"
          case (MR_Integer) 0:
#line 620 "status.m"
#line 620 "status.m"
            switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 620 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 620 "status.m"
              case (MR_Integer) 0:
#line 623 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 1:
#line 624 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 2:
#line 625 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 3:
#line 626 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 4:
#line 627 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 5:
#line 620 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 6:
#line 628 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 7:
#line 621 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 620 "status.m"
                break;
#line 620 "status.m"
              case (MR_Integer) 8:
#line 622 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 620 "status.m"
                break;
#line 620 "status.m"
            }
#line 620 "status.m"
            break;
#line 620 "status.m"
          case (MR_Integer) 1:
#line 629 "status.m"
            {
#line 629 "status.m"
              MR_Word hlds__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 630 "status.m"
              /* direct tailcall eliminated */
#line 630 "status.m"
              {
#line 630 "status.m"
                MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__Status_3;

#line 630 "status.m"
                hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 630 "status.m"
              }
#line 630 "status.m"
              continue;
#line 629 "status.m"
            }
#line 620 "status.m"
            break;
#line 620 "status.m"
          case (MR_Integer) 2:
#line 631 "status.m"
            {
#line 631 "status.m"
              MR_Word hlds__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 637 "status.m"
              hlds__status__HeadVar__2_2 = ((&hlds__status_vector_common_1[0 + hlds__status__ImportLocn_4]))->hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 631 "status.m"
            }
#line 620 "status.m"
            break;
#line 620 "status.m"
        }
#line 620 "status.m"
        return hlds__status__HeadVar__2_2;
#line 620 "status.m"
      }
#line 620 "status.m"
      break;
#line 620 "status.m"
    }
#line 618 "status.m"
}

#line 294 "status.m"
static void MR_CALL 
hlds__status__valid_old_status_for_inst_or_mode_2_p_0(
#line 294 "status.m"
  MR_Word hlds__status__OldStatus0_3,
#line 294 "status.m"
  MR_Word * hlds__status__OldStatus_4)
#line 294 "status.m"
{
#line 304 "status.m"
  {
#line 304 "status.m"
    MR_bool hlds__status__succeeded;

#line 304 "status.m"
#line 304 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus0_3)) {
#line 304 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 304 "status.m"
      case (MR_Integer) 0:
#line 304 "status.m"
#line 304 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus0_3)) {
#line 304 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 304 "status.m"
          case (MR_Integer) 0:
#line 304 "status.m"
          case (MR_Integer) 1:
#line 304 "status.m"
          case (MR_Integer) 3:
#line 304 "status.m"
          case (MR_Integer) 7:
#line 304 "status.m"
          case (MR_Integer) 8:
#line 305 "status.m"
            *hlds__status__OldStatus_4 = hlds__status__OldStatus0_3;
#line 304 "status.m"
            break;
#line 304 "status.m"
          case (MR_Integer) 2:
#line 319 "status.m"
            {
#line 320 "status.m"
              {
#line 320 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_pseudo_imported");
#line 320 "status.m"
                return;
              }
#line 319 "status.m"
            }
#line 304 "status.m"
            break;
#line 304 "status.m"
          case (MR_Integer) 4:
#line 325 "status.m"
            {
#line 326 "status.m"
              {
#line 326 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_opt_exported");
#line 326 "status.m"
                return;
              }
#line 325 "status.m"
            }
#line 304 "status.m"
            break;
#line 304 "status.m"
          case (MR_Integer) 5:
#line 328 "status.m"
            {
#line 329 "status.m"
              {
#line 329 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_abstract_exported");
#line 329 "status.m"
                return;
              }
#line 328 "status.m"
            }
#line 304 "status.m"
            break;
#line 304 "status.m"
          case (MR_Integer) 6:
#line 322 "status.m"
            {
#line 323 "status.m"
              {
#line 323 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_pseudo_exported");
#line 323 "status.m"
                return;
              }
#line 322 "status.m"
            }
#line 304 "status.m"
            break;
#line 304 "status.m"
        }
#line 304 "status.m"
        break;
#line 304 "status.m"
      case (MR_Integer) 1:
#line 331 "status.m"
        {
#line 332 "status.m"
          {
#line 332 "status.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_external");
#line 332 "status.m"
            return;
          }
#line 331 "status.m"
        }
#line 304 "status.m"
        break;
#line 304 "status.m"
      case (MR_Integer) 2:
#line 307 "status.m"
        {
#line 307 "status.m"
          MR_Word hlds__status__Locn_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__OldStatus0_3, (MR_Integer) 0)));

#line 314 "status.m"
#line 314 "status.m"
          switch (hlds__status__Locn_5) {
#line 314 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 314 "status.m"
            case (MR_Integer) 3:
#line 314 "status.m"
            case (MR_Integer) 0:
#line 314 "status.m"
            case (MR_Integer) 1:
#line 313 "status.m"
              *hlds__status__OldStatus_4 = hlds__status__OldStatus0_3;
#line 314 "status.m"
              break;
#line 314 "status.m"
            case (MR_Integer) 2:
#line 315 "status.m"
              {
#line 316 "status.m"
                {
#line 316 "status.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 316 "status.m"
                  return;
                }
#line 315 "status.m"
              }
#line 314 "status.m"
              break;
#line 314 "status.m"
          }
#line 307 "status.m"
        }
#line 304 "status.m"
        break;
#line 304 "status.m"
    }
#line 304 "status.m"
  }
#line 294 "status.m"
}

#line 283 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
#line 283 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 283 "status.m"
  MR_Word * hlds__status__PredStatus_4)
#line 283 "status.m"
{
#line 832 "status.m"
  {
#line 832 "status.m"
    MR_bool hlds__status__succeeded;
#line 832 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 835 "status.m"
    *hlds__status__PredStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 832 "status.m"
  }
#line 283 "status.m"
}

#line 281 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
#line 281 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 281 "status.m"
  MR_Word * hlds__status__InstanceStatus_4)
#line 281 "status.m"
{
#line 827 "status.m"
  {
#line 827 "status.m"
    MR_bool hlds__status__succeeded;
#line 827 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 830 "status.m"
    *hlds__status__InstanceStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 827 "status.m"
  }
#line 281 "status.m"
}

#line 279 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
#line 279 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 279 "status.m"
  MR_Word * hlds__status__TypeClassStatus_4)
#line 279 "status.m"
{
#line 822 "status.m"
  {
#line 822 "status.m"
    MR_bool hlds__status__succeeded;
#line 822 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 825 "status.m"
    *hlds__status__TypeClassStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 822 "status.m"
  }
#line 279 "status.m"
}

#line 277 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
#line 277 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 277 "status.m"
  MR_Word * hlds__status__ModeStatus_4)
#line 277 "status.m"
{
#line 815 "status.m"
  {
#line 815 "status.m"
    MR_bool hlds__status__succeeded;
#line 815 "status.m"
    MR_Word hlds__status__OldImportStatus0_5;
#line 815 "status.m"
    MR_Word hlds__status__OldImportStatus_6;
#line 815 "status.m"
    MR_Word hlds__status__InstModeStatus_7;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_11)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_11)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_11, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus0_5, 0) = ((MR_Box) (hlds__status__ImportLocn_12));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_10) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 818 "status.m"
    {
#line 818 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldImportStatus0_5, &hlds__status__OldImportStatus_6);
    }
#line 842 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 855 "status.m"
      {
#line 855 "status.m"
        MR_Word hlds__status__ItemImport_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 855 "status.m"
        MR_Word hlds__status__InstImport_20;

#line 872 "status.m"
#line 872 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_17)) {
#line 872 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 872 "status.m"
          case (MR_Integer) 0:
#line 872 "status.m"
#line 872 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_17)) {
#line 872 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 872 "status.m"
              case (MR_Integer) 0:
#line 874 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "status.m"
                break;
#line 872 "status.m"
              case (MR_Integer) 1:
#line 877 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 872 "status.m"
                break;
#line 872 "status.m"
            }
#line 872 "status.m"
            break;
#line 872 "status.m"
          case (MR_Integer) 1:
#line 857 "status.m"
            {
#line 857 "status.m"
              MR_Word hlds__status__ImportLocn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_17, (MR_Integer) 0)));
#line 857 "status.m"
              MR_Word hlds__status__InstImportLocn_19;

#line 861 "status.m"
#line 861 "status.m"
              switch (hlds__status__ImportLocn_18) {
#line 861 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 861 "status.m"
                case (MR_Integer) 3:
#line 869 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 2;
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 0:
#line 860 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 0;
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 2:
#line 865 "status.m"
                  {
#line 866 "status.m"
                    {
#line 866 "status.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 866 "status.m"
                      return;
                    }
#line 865 "status.m"
                  }
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 1:
#line 863 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 1;
#line 861 "status.m"
                  break;
#line 861 "status.m"
              }
#line 871 "status.m"
              {
#line 871 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "status.m"
                MR_hl_field(MR_mktag(1), hlds__status__InstImport_20, 0) = ((MR_Box) (hlds__status__InstImportLocn_19));
#line 871 "status.m"
              }
#line 857 "status.m"
            }
#line 872 "status.m"
            break;
#line 872 "status.m"
        }
#line 879 "status.m"
        {
#line 879 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "status.m"
          MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstImport_20));
#line 879 "status.m"
        }
#line 855 "status.m"
      }
#line 842 "status.m"
    else
#line 842 "status.m"
      {
#line 842 "status.m"
        MR_Word hlds__status__ItemExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 842 "status.m"
        MR_Word hlds__status__InstExport_16;

#line 846 "status.m"
#line 846 "status.m"
        switch (hlds__status__ItemExport_15) {
#line 846 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 846 "status.m"
          case (MR_Integer) 2:
#line 851 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 2;
#line 846 "status.m"
            break;
#line 846 "status.m"
          case (MR_Integer) 0:
#line 845 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 0;
#line 846 "status.m"
            break;
#line 846 "status.m"
          case (MR_Integer) 1:
#line 848 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 1;
#line 846 "status.m"
            break;
#line 846 "status.m"
        }
#line 853 "status.m"
        {
#line 853 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "status.m"
          MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstExport_16));
#line 853 "status.m"
        }
#line 842 "status.m"
      }
#line 820 "status.m"
    {
#line 820 "status.m"
      MR_Word base;
#line 820 "status.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 820 "status.m"
      *hlds__status__ModeStatus_4 = base;
#line 820 "status.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__status__OldImportStatus_6));
#line 820 "status.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__status__InstModeStatus_7));
#line 820 "status.m"
    }
#line 815 "status.m"
  }
#line 277 "status.m"
}

#line 275 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
#line 275 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 275 "status.m"
  MR_Word * hlds__status__InstStatus_4)
#line 275 "status.m"
{
#line 808 "status.m"
  {
#line 808 "status.m"
    MR_bool hlds__status__succeeded;
#line 808 "status.m"
    MR_Word hlds__status__OldImportStatus0_5;
#line 808 "status.m"
    MR_Word hlds__status__OldImportStatus_6;
#line 808 "status.m"
    MR_Word hlds__status__InstModeStatus_7;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_11)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_11)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_11, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus0_5, 0) = ((MR_Box) (hlds__status__ImportLocn_12));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_10) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 811 "status.m"
    {
#line 811 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldImportStatus0_5, &hlds__status__OldImportStatus_6);
    }
#line 842 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 855 "status.m"
      {
#line 855 "status.m"
        MR_Word hlds__status__ItemImport_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 855 "status.m"
        MR_Word hlds__status__InstImport_20;

#line 872 "status.m"
#line 872 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_17)) {
#line 872 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 872 "status.m"
          case (MR_Integer) 0:
#line 872 "status.m"
#line 872 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_17)) {
#line 872 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 872 "status.m"
              case (MR_Integer) 0:
#line 874 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "status.m"
                break;
#line 872 "status.m"
              case (MR_Integer) 1:
#line 877 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 872 "status.m"
                break;
#line 872 "status.m"
            }
#line 872 "status.m"
            break;
#line 872 "status.m"
          case (MR_Integer) 1:
#line 857 "status.m"
            {
#line 857 "status.m"
              MR_Word hlds__status__ImportLocn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_17, (MR_Integer) 0)));
#line 857 "status.m"
              MR_Word hlds__status__InstImportLocn_19;

#line 861 "status.m"
#line 861 "status.m"
              switch (hlds__status__ImportLocn_18) {
#line 861 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 861 "status.m"
                case (MR_Integer) 3:
#line 869 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 2;
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 0:
#line 860 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 0;
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 2:
#line 865 "status.m"
                  {
#line 866 "status.m"
                    {
#line 866 "status.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 866 "status.m"
                      return;
                    }
#line 865 "status.m"
                  }
#line 861 "status.m"
                  break;
#line 861 "status.m"
                case (MR_Integer) 1:
#line 863 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 1;
#line 861 "status.m"
                  break;
#line 861 "status.m"
              }
#line 871 "status.m"
              {
#line 871 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "status.m"
                MR_hl_field(MR_mktag(1), hlds__status__InstImport_20, 0) = ((MR_Box) (hlds__status__InstImportLocn_19));
#line 871 "status.m"
              }
#line 857 "status.m"
            }
#line 872 "status.m"
            break;
#line 872 "status.m"
        }
#line 879 "status.m"
        {
#line 879 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "status.m"
          MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstImport_20));
#line 879 "status.m"
        }
#line 855 "status.m"
      }
#line 842 "status.m"
    else
#line 842 "status.m"
      {
#line 842 "status.m"
        MR_Word hlds__status__ItemExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 842 "status.m"
        MR_Word hlds__status__InstExport_16;

#line 846 "status.m"
#line 846 "status.m"
        switch (hlds__status__ItemExport_15) {
#line 846 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 846 "status.m"
          case (MR_Integer) 2:
#line 851 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 2;
#line 846 "status.m"
            break;
#line 846 "status.m"
          case (MR_Integer) 0:
#line 845 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 0;
#line 846 "status.m"
            break;
#line 846 "status.m"
          case (MR_Integer) 1:
#line 848 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 1;
#line 846 "status.m"
            break;
#line 846 "status.m"
        }
#line 853 "status.m"
        {
#line 853 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "status.m"
          MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstExport_16));
#line 853 "status.m"
        }
#line 842 "status.m"
      }
#line 813 "status.m"
    {
#line 813 "status.m"
      MR_Word base;
#line 813 "status.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "status.m"
      *hlds__status__InstStatus_4 = base;
#line 813 "status.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__status__OldImportStatus_6));
#line 813 "status.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__status__InstModeStatus_7));
#line 813 "status.m"
    }
#line 808 "status.m"
  }
#line 275 "status.m"
}

#line 273 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
#line 273 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 273 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 273 "status.m"
{
#line 803 "status.m"
  {
#line 803 "status.m"
    MR_bool hlds__status__succeeded;
#line 803 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 887 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 899 "status.m"
      {
#line 899 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 903 "status.m"
#line 903 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 903 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
          case (MR_Integer) 0:
#line 903 "status.m"
#line 903 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 903 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 903 "status.m"
              case (MR_Integer) 0:
#line 905 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 903 "status.m"
                break;
#line 903 "status.m"
              case (MR_Integer) 1:
#line 908 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "status.m"
                break;
#line 903 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
          case (MR_Integer) 1:
#line 901 "status.m"
            {
#line 901 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 902 "status.m"
              {
#line 902 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 902 "status.m"
              }
#line 901 "status.m"
            }
#line 903 "status.m"
            break;
#line 903 "status.m"
        }
#line 899 "status.m"
      }
#line 887 "status.m"
    else
#line 887 "status.m"
      {
#line 887 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 891 "status.m"
#line 891 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 891 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "status.m"
          case (MR_Integer) 2:
#line 896 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 0:
#line 890 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 891 "status.m"
            break;
#line 891 "status.m"
          case (MR_Integer) 1:
#line 893 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 891 "status.m"
            break;
#line 891 "status.m"
        }
#line 887 "status.m"
      }
#line 806 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 803 "status.m"
  }
#line 273 "status.m"
}

#line 250 "status.m"
void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
#line 250 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 250 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 250 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 250 "status.m"
{
#line 700 "status.m"
  {
#line 700 "status.m"
    MR_bool hlds__status__succeeded;
#line 700 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 700 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 700 "status.m"
    MR_Word hlds__status__Status_6;

#line 701 "status.m"
    {
#line 701 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 700 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 700 "status.m"
  }
#line 250 "status.m"
}

#line 248 "status.m"
void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
#line 248 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 248 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 248 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 248 "status.m"
{
#line 697 "status.m"
  {
#line 697 "status.m"
    MR_bool hlds__status__succeeded;
#line 697 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 697 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 697 "status.m"
    MR_Word hlds__status__Status_6;

#line 698 "status.m"
    {
#line 698 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 697 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 697 "status.m"
  }
#line 248 "status.m"
}

#line 246 "status.m"
void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
#line 246 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 246 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 246 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 246 "status.m"
{
#line 694 "status.m"
  {
#line 694 "status.m"
    MR_bool hlds__status__succeeded;
#line 694 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 694 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 694 "status.m"
    MR_Word hlds__status__Status_6;

#line 695 "status.m"
    {
#line 695 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 694 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 694 "status.m"
  }
#line 246 "status.m"
}

#line 244 "status.m"
void MR_CALL 
hlds__status__type_combine_status_3_p_0(
#line 244 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 244 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 244 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 244 "status.m"
{
#line 691 "status.m"
  {
#line 691 "status.m"
    MR_bool hlds__status__succeeded;
#line 691 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 691 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 691 "status.m"
    MR_Word hlds__status__Status_6;

#line 692 "status.m"
    {
#line 692 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 691 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 691 "status.m"
  }
#line 244 "status.m"
}

#line 239 "status.m"
void MR_CALL 
hlds__status__instance_make_status_abstract_2_p_0(
#line 239 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 239 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 239 "status.m"
{
#line 673 "status.m"
  {
#line 673 "status.m"
    MR_bool hlds__status__succeeded;
#line 673 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 673 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 680 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 682 "status.m"
    if (hlds__status__succeeded)
#line 681 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 682 "status.m"
    else
#line 684 "status.m"
      {
#line 682 "status.m"
        MR_Word hlds__status__V_7_7;

#line 682 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 682 "status.m"
        if (hlds__status__succeeded)
#line 682 "status.m"
          {
#line 682 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 683 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 682 "status.m"
          }
#line 682 "status.m"
        else
#line 685 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 684 "status.m"
      }
#line 673 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 673 "status.m"
  }
#line 239 "status.m"
}

#line 237 "status.m"
void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
#line 237 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 237 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 237 "status.m"
{
#line 670 "status.m"
  {
#line 670 "status.m"
    MR_bool hlds__status__succeeded;
#line 670 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 670 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 680 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 682 "status.m"
    if (hlds__status__succeeded)
#line 681 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 682 "status.m"
    else
#line 684 "status.m"
      {
#line 682 "status.m"
        MR_Word hlds__status__V_7_7;

#line 682 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 682 "status.m"
        if (hlds__status__succeeded)
#line 682 "status.m"
          {
#line 682 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 683 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 682 "status.m"
          }
#line 682 "status.m"
        else
#line 685 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 684 "status.m"
      }
#line 670 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 670 "status.m"
  }
#line 237 "status.m"
}

#line 236 "status.m"
void MR_CALL 
hlds__status__pred_make_status_abstract_2_p_0(
#line 236 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 236 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 236 "status.m"
{
#line 667 "status.m"
  {
#line 667 "status.m"
    MR_bool hlds__status__succeeded;
#line 667 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 667 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 680 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 682 "status.m"
    if (hlds__status__succeeded)
#line 681 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 682 "status.m"
    else
#line 684 "status.m"
      {
#line 682 "status.m"
        MR_Word hlds__status__V_7_7;

#line 682 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 682 "status.m"
        if (hlds__status__succeeded)
#line 682 "status.m"
          {
#line 682 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 683 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 682 "status.m"
          }
#line 682 "status.m"
        else
#line 685 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 684 "status.m"
      }
#line 667 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 667 "status.m"
  }
#line 236 "status.m"
}

#line 235 "status.m"
void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
#line 235 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 235 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 235 "status.m"
{
#line 665 "status.m"
  {
#line 665 "status.m"
    MR_bool hlds__status__succeeded;
#line 665 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 665 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 680 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 682 "status.m"
    if (hlds__status__succeeded)
#line 681 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 682 "status.m"
    else
#line 684 "status.m"
      {
#line 682 "status.m"
        MR_Word hlds__status__V_7_7;

#line 682 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 682 "status.m"
        if (hlds__status__succeeded)
#line 682 "status.m"
          {
#line 682 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 683 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 682 "status.m"
          }
#line 682 "status.m"
        else
#line 685 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 684 "status.m"
      }
#line 665 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 665 "status.m"
  }
#line 235 "status.m"
}

#line 231 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
#line 231 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 231 "status.m"
{
#line 615 "status.m"
  {
#line 615 "status.m"
    MR_bool hlds__status__succeeded;
#line 615 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 615 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 616 "status.m"
    {
#line 616 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 615 "status.m"
    return hlds__status__HeadVar__2_2;
#line 615 "status.m"
  }
#line 231 "status.m"
}

#line 230 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
#line 230 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 230 "status.m"
{
#line 613 "status.m"
  {
#line 613 "status.m"
    MR_bool hlds__status__succeeded;
#line 613 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 613 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 614 "status.m"
    {
#line 614 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 613 "status.m"
    return hlds__status__HeadVar__2_2;
#line 613 "status.m"
  }
#line 230 "status.m"
}

#line 229 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
#line 229 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 229 "status.m"
{
#line 611 "status.m"
  {
#line 611 "status.m"
    MR_bool hlds__status__succeeded;
#line 611 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 611 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 612 "status.m"
    {
#line 612 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 611 "status.m"
    return hlds__status__HeadVar__2_2;
#line 611 "status.m"
  }
#line 229 "status.m"
}

#line 228 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
#line 228 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 228 "status.m"
{
#line 599 "status.m"
  {
#line 599 "status.m"
    MR_bool hlds__status__succeeded;
#line 599 "status.m"
    MR_Word hlds__status__IsDefnImplSection_4;
#line 599 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 599 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 599 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 599 "status.m"
    MR_Word hlds__status__OldIsDefnImplSection_8;
#line 599 "status.m"
    MR_Word hlds__status__NewIsDefnImplSection_9;

#line 601 "status.m"
    {
#line 601 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 602 "status.m"
    {
#line 602 "status.m"
      hlds__status__OldIsDefnImplSection_8 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_7);
    }
#line 648 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 660 "status.m"
      hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 648 "status.m"
    else
#line 648 "status.m"
      {
#line 648 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 654 "status.m"
#line 654 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 654 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 654 "status.m"
          case (MR_Integer) 2:
#line 656 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 654 "status.m"
            break;
#line 654 "status.m"
          case (MR_Integer) 0:
#line 654 "status.m"
          case (MR_Integer) 1:
#line 653 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 1;
#line 654 "status.m"
            break;
#line 654 "status.m"
        }
#line 648 "status.m"
      }
#line 605 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnImplSection_8 == hlds__status__NewIsDefnImplSection_9);
#line 607 "status.m"
    if (hlds__status__succeeded)
#line 606 "status.m"
      hlds__status__IsDefnImplSection_4 = hlds__status__NewIsDefnImplSection_9;
#line 607 "status.m"
    else
#line 608 "status.m"
      {
#line 608 "status.m"
        {
#line 608 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_defined_in_impl_section\'/1", (MR_String) "mismatch");
        }
#line 608 "status.m"
      }
#line 599 "status.m"
    return hlds__status__IsDefnImplSection_4;
#line 599 "status.m"
  }
#line 228 "status.m"
}

#line 227 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
#line 227 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 227 "status.m"
{
#line 587 "status.m"
  {
#line 587 "status.m"
    MR_bool hlds__status__succeeded;
#line 587 "status.m"
    MR_Word hlds__status__IsDefnImplSection_4;
#line 587 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 587 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 587 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 587 "status.m"
    MR_Word hlds__status__OldIsDefnImplSection_8;
#line 587 "status.m"
    MR_Word hlds__status__NewIsDefnImplSection_9;

#line 589 "status.m"
    {
#line 589 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 590 "status.m"
    {
#line 590 "status.m"
      hlds__status__OldIsDefnImplSection_8 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_7);
    }
#line 648 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 660 "status.m"
      hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 648 "status.m"
    else
#line 648 "status.m"
      {
#line 648 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 654 "status.m"
#line 654 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 654 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 654 "status.m"
          case (MR_Integer) 2:
#line 656 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 654 "status.m"
            break;
#line 654 "status.m"
          case (MR_Integer) 0:
#line 654 "status.m"
          case (MR_Integer) 1:
#line 653 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 1;
#line 654 "status.m"
            break;
#line 654 "status.m"
        }
#line 648 "status.m"
      }
#line 593 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnImplSection_8 == hlds__status__NewIsDefnImplSection_9);
#line 595 "status.m"
    if (hlds__status__succeeded)
#line 594 "status.m"
      hlds__status__IsDefnImplSection_4 = hlds__status__NewIsDefnImplSection_9;
#line 595 "status.m"
    else
#line 596 "status.m"
      {
#line 596 "status.m"
        {
#line 596 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_defined_in_impl_section\'/1", (MR_String) "mismatch");
        }
#line 596 "status.m"
      }
#line 587 "status.m"
    return hlds__status__IsDefnImplSection_4;
#line 587 "status.m"
  }
#line 227 "status.m"
}

#line 226 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
#line 226 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 226 "status.m"
{
#line 584 "status.m"
  {
#line 584 "status.m"
    MR_bool hlds__status__succeeded;
#line 584 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 584 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 585 "status.m"
    {
#line 585 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 584 "status.m"
    return hlds__status__HeadVar__2_2;
#line 584 "status.m"
  }
#line 226 "status.m"
}

#line 221 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
#line 221 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 221 "status.m"
{
#line 565 "status.m"
  {
#line 565 "status.m"
    MR_bool hlds__status__succeeded;
#line 565 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 565 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 565 "status.m"
    return hlds__status__HeadVar__2_2;
#line 565 "status.m"
  }
#line 221 "status.m"
}

#line 220 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
#line 220 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 220 "status.m"
{
#line 563 "status.m"
  {
#line 563 "status.m"
    MR_bool hlds__status__succeeded;
#line 563 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 563 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 563 "status.m"
    return hlds__status__HeadVar__2_2;
#line 563 "status.m"
  }
#line 220 "status.m"
}

#line 219 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
#line 219 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 219 "status.m"
{
#line 561 "status.m"
  {
#line 561 "status.m"
    MR_bool hlds__status__succeeded;
#line 561 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 561 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 561 "status.m"
    return hlds__status__HeadVar__2_2;
#line 561 "status.m"
  }
#line 219 "status.m"
}

#line 218 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
#line 218 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 218 "status.m"
{
#line 544 "status.m"
  {
#line 544 "status.m"
    MR_bool hlds__status__succeeded;
#line 544 "status.m"
    MR_Word hlds__status__IsDefnThisModule_4;
#line 544 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 544 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 544 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 544 "status.m"
    MR_Word hlds__status__OldIsDefnThisModule_8;
#line 544 "status.m"
    MR_Word hlds__status__NewIsDefnThisModule_10;

#line 546 "status.m"
    {
#line 546 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 551 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 553 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 0;
#line 551 "status.m"
    else
#line 550 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 1;
#line 555 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnThisModule_8 == hlds__status__NewIsDefnThisModule_10);
#line 557 "status.m"
    if (hlds__status__succeeded)
#line 556 "status.m"
      hlds__status__IsDefnThisModule_4 = hlds__status__NewIsDefnThisModule_10;
#line 557 "status.m"
    else
#line 558 "status.m"
      {
#line 558 "status.m"
        {
#line 558 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_defined_in_this_module\'/1", (MR_String) "mismatch");
        }
#line 558 "status.m"
      }
#line 544 "status.m"
    return hlds__status__IsDefnThisModule_4;
#line 544 "status.m"
  }
#line 218 "status.m"
}

#line 217 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
#line 217 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 217 "status.m"
{
#line 527 "status.m"
  {
#line 527 "status.m"
    MR_bool hlds__status__succeeded;
#line 527 "status.m"
    MR_Word hlds__status__IsDefnThisModule_4;
#line 527 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 527 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 527 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 527 "status.m"
    MR_Word hlds__status__OldIsDefnThisModule_8;
#line 527 "status.m"
    MR_Word hlds__status__NewIsDefnThisModule_10;

#line 529 "status.m"
    {
#line 529 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 534 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 536 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 0;
#line 534 "status.m"
    else
#line 533 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 1;
#line 538 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnThisModule_8 == hlds__status__NewIsDefnThisModule_10);
#line 540 "status.m"
    if (hlds__status__succeeded)
#line 539 "status.m"
      hlds__status__IsDefnThisModule_4 = hlds__status__NewIsDefnThisModule_10;
#line 540 "status.m"
    else
#line 541 "status.m"
      {
#line 541 "status.m"
        {
#line 541 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_defined_in_this_module\'/1", (MR_String) "mismatch");
        }
#line 541 "status.m"
      }
#line 527 "status.m"
    return hlds__status__IsDefnThisModule_4;
#line 527 "status.m"
  }
#line 217 "status.m"
}

#line 216 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
#line 216 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 216 "status.m"
{
#line 524 "status.m"
  {
#line 524 "status.m"
    MR_bool hlds__status__succeeded;
#line 524 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 524 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 524 "status.m"
    return hlds__status__HeadVar__2_2;
#line 524 "status.m"
  }
#line 216 "status.m"
}

#line 209 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
#line 209 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 209 "status.m"
{
#line 514 "status.m"
  {
#line 514 "status.m"
    MR_bool hlds__status__succeeded;
#line 514 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 514 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 514 "status.m"
    MR_Word hlds__status__V_5_5;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 514 "status.m"
    return hlds__status__HeadVar__2_2;
#line 514 "status.m"
  }
#line 209 "status.m"
}

#line 208 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
#line 208 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 208 "status.m"
{
#line 512 "status.m"
  {
#line 512 "status.m"
    MR_bool hlds__status__succeeded;
#line 512 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 512 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 512 "status.m"
    MR_Word hlds__status__V_5_5;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 512 "status.m"
    return hlds__status__HeadVar__2_2;
#line 512 "status.m"
  }
#line 208 "status.m"
}

#line 207 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
#line 207 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 207 "status.m"
{
#line 510 "status.m"
  {
#line 510 "status.m"
    MR_bool hlds__status__succeeded;
#line 510 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 510 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 510 "status.m"
    MR_Word hlds__status__V_5_5;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 510 "status.m"
    return hlds__status__HeadVar__2_2;
#line 510 "status.m"
  }
#line 207 "status.m"
}

#line 206 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
#line 206 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 206 "status.m"
{
#line 493 "status.m"
  {
#line 493 "status.m"
    MR_bool hlds__status__succeeded;
#line 493 "status.m"
    MR_Word hlds__status__IsImported_4;
#line 493 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 493 "status.m"
    MR_Word hlds__status__InstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 493 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 493 "status.m"
    MR_Word hlds__status__OldIsImported_8;
#line 493 "status.m"
    MR_Word hlds__status__NewIsImported_10;
#line 493 "status.m"
    MR_Word hlds__status__V_16_16;

#line 495 "status.m"
    {
#line 495 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      hlds__status__OldIsImported_8 = mercury__bool__not_1_f_0(hlds__status__V_16_16);
    }
#line 500 "status.m"
    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 502 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 1;
#line 500 "status.m"
    else
#line 499 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 0;
#line 504 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsImported_8 == hlds__status__NewIsImported_10);
#line 506 "status.m"
    if (hlds__status__succeeded)
#line 505 "status.m"
      hlds__status__IsImported_4 = hlds__status__NewIsImported_10;
#line 506 "status.m"
    else
#line 507 "status.m"
      {
#line 507 "status.m"
        {
#line 507 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_imported\'/1", (MR_String) "mismatch");
        }
#line 507 "status.m"
      }
#line 493 "status.m"
    return hlds__status__IsImported_4;
#line 493 "status.m"
  }
#line 206 "status.m"
}

#line 205 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
#line 205 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 205 "status.m"
{
#line 476 "status.m"
  {
#line 476 "status.m"
    MR_bool hlds__status__succeeded;
#line 476 "status.m"
    MR_Word hlds__status__IsImported_4;
#line 476 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 476 "status.m"
    MR_Word hlds__status__InstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 476 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 476 "status.m"
    MR_Word hlds__status__OldIsImported_8;
#line 476 "status.m"
    MR_Word hlds__status__NewIsImported_10;
#line 476 "status.m"
    MR_Word hlds__status__V_16_16;

#line 478 "status.m"
    {
#line 478 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      hlds__status__OldIsImported_8 = mercury__bool__not_1_f_0(hlds__status__V_16_16);
    }
#line 483 "status.m"
    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 485 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 1;
#line 483 "status.m"
    else
#line 482 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 0;
#line 487 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsImported_8 == hlds__status__NewIsImported_10);
#line 489 "status.m"
    if (hlds__status__succeeded)
#line 488 "status.m"
      hlds__status__IsImported_4 = hlds__status__NewIsImported_10;
#line 489 "status.m"
    else
#line 490 "status.m"
      {
#line 490 "status.m"
        {
#line 490 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_imported\'/1", (MR_String) "mismatch");
        }
#line 490 "status.m"
      }
#line 476 "status.m"
    return hlds__status__IsImported_4;
#line 476 "status.m"
  }
#line 205 "status.m"
}

#line 204 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
#line 204 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 204 "status.m"
{
#line 473 "status.m"
  {
#line 473 "status.m"
    MR_bool hlds__status__succeeded;
#line 473 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 473 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 473 "status.m"
    MR_Word hlds__status__V_5_5;

#line 570 "status.m"
#line 570 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 570 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
      case (MR_Integer) 0:
#line 570 "status.m"
#line 570 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 570 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "status.m"
          case (MR_Integer) 0:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 1:
#line 572 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 2:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 3:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 4:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 5:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 6:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 7:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
          case (MR_Integer) 8:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 570 "status.m"
            break;
#line 570 "status.m"
        }
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 1:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
      case (MR_Integer) 2:
#line 570 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 570 "status.m"
        break;
#line 570 "status.m"
    }
#line 520 "status.m"
    {
#line 520 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 473 "status.m"
    return hlds__status__HeadVar__2_2;
#line 473 "status.m"
  }
#line 204 "status.m"
}

#line 196 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
#line 196 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 196 "status.m"
{
#line 435 "status.m"
  {
#line 435 "status.m"
    MR_bool hlds__status__succeeded;
#line 435 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 435 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 442 "status.m"
    MR_Word hlds__status__V_5_5;

#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 435 "status.m"
    return hlds__status__HeadVar__2_2;
#line 435 "status.m"
  }
#line 196 "status.m"
}

#line 195 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
#line 195 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 195 "status.m"
{
#line 433 "status.m"
  {
#line 433 "status.m"
    MR_bool hlds__status__succeeded;
#line 433 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 433 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 442 "status.m"
    MR_Word hlds__status__V_5_5;

#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 433 "status.m"
    return hlds__status__HeadVar__2_2;
#line 433 "status.m"
  }
#line 195 "status.m"
}

#line 194 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
#line 194 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 194 "status.m"
{
#line 431 "status.m"
  {
#line 431 "status.m"
    MR_bool hlds__status__succeeded;
#line 431 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 431 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 442 "status.m"
    MR_Word hlds__status__V_5_5;

#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 431 "status.m"
    return hlds__status__HeadVar__2_2;
#line 431 "status.m"
  }
#line 194 "status.m"
}

#line 193 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
#line 193 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 193 "status.m"
{
#line 419 "status.m"
  {
#line 419 "status.m"
    MR_bool hlds__status__succeeded;
#line 419 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 419 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 419 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 419 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 419 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 419 "status.m"
    MR_Word hlds__status__NewIsExported_9;
#line 442 "status.m"
    MR_Word hlds__status__V_14_14;

#line 421 "status.m"
    {
#line 421 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_14_14 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_14_14 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__OldStatus_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 0;
#line 456 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 468 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 456 "status.m"
    else
#line 456 "status.m"
      {
#line 456 "status.m"
        MR_Word hlds__status__InstModeExport_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 460 "status.m"
#line 460 "status.m"
        switch (hlds__status__InstModeExport_17) {
#line 460 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 460 "status.m"
          case (MR_Integer) 2:
#line 459 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 460 "status.m"
            break;
#line 460 "status.m"
          case (MR_Integer) 0:
#line 460 "status.m"
          case (MR_Integer) 1:
#line 464 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 460 "status.m"
            break;
#line 460 "status.m"
        }
#line 456 "status.m"
      }
#line 425 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 427 "status.m"
    if (hlds__status__succeeded)
#line 426 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 427 "status.m"
    else
#line 428 "status.m"
      {
#line 428 "status.m"
        {
#line 428 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_exported_to_non_submodules\'/1", (MR_String) "mismatch");
        }
#line 428 "status.m"
      }
#line 419 "status.m"
    return hlds__status__IsExported_4;
#line 419 "status.m"
  }
#line 193 "status.m"
}

#line 192 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
#line 192 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 192 "status.m"
{
#line 407 "status.m"
  {
#line 407 "status.m"
    MR_bool hlds__status__succeeded;
#line 407 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 407 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 407 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 407 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 407 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 407 "status.m"
    MR_Word hlds__status__NewIsExported_9;
#line 442 "status.m"
    MR_Word hlds__status__V_14_14;

#line 409 "status.m"
    {
#line 409 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_14_14 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_14_14 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__OldStatus_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 0;
#line 456 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 468 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 456 "status.m"
    else
#line 456 "status.m"
      {
#line 456 "status.m"
        MR_Word hlds__status__InstModeExport_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 460 "status.m"
#line 460 "status.m"
        switch (hlds__status__InstModeExport_17) {
#line 460 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 460 "status.m"
          case (MR_Integer) 2:
#line 459 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 460 "status.m"
            break;
#line 460 "status.m"
          case (MR_Integer) 0:
#line 460 "status.m"
          case (MR_Integer) 1:
#line 464 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 460 "status.m"
            break;
#line 460 "status.m"
        }
#line 456 "status.m"
      }
#line 413 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 415 "status.m"
    if (hlds__status__succeeded)
#line 414 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 415 "status.m"
    else
#line 416 "status.m"
      {
#line 416 "status.m"
        {
#line 416 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_exported_to_non_submodules\'/1", (MR_String) "mismatch");
        }
#line 416 "status.m"
      }
#line 407 "status.m"
    return hlds__status__IsExported_4;
#line 407 "status.m"
  }
#line 192 "status.m"
}

#line 191 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
#line 191 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 191 "status.m"
{
#line 404 "status.m"
  {
#line 404 "status.m"
    MR_bool hlds__status__succeeded;
#line 404 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 404 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 442 "status.m"
    MR_Word hlds__status__V_5_5;

#line 442 "status.m"
    {
#line 442 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 442 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 442 "status.m"
    if (hlds__status__succeeded)
#line 442 "status.m"
      {
#line 443 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 443 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 442 "status.m"
      }
#line 440 "status.m"
    if (hlds__status__succeeded)
#line 445 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 440 "status.m"
    else
#line 447 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 404 "status.m"
    return hlds__status__HeadVar__2_2;
#line 404 "status.m"
  }
#line 191 "status.m"
}

#line 184 "status.m"
MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
#line 184 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 184 "status.m"
{
#line 390 "status.m"
  {
#line 390 "status.m"
    MR_bool hlds__status__succeeded;
#line 390 "status.m"
    MR_Word hlds__status__HeadVar__2_2;

#line 390 "status.m"
#line 390 "status.m"
    switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 390 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "status.m"
      case (MR_Integer) 0:
#line 390 "status.m"
#line 390 "status.m"
        switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 390 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 390 "status.m"
          case (MR_Integer) 0:
#line 394 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 1:
#line 392 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 2:
#line 393 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 3:
#line 395 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 4:
#line 396 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 5:
#line 397 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 6:
#line 398 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 7:
#line 399 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 390 "status.m"
            break;
#line 390 "status.m"
          case (MR_Integer) 8:
#line 400 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
            break;
#line 390 "status.m"
        }
#line 390 "status.m"
        break;
#line 390 "status.m"
      case (MR_Integer) 1:
#line 391 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
        break;
#line 390 "status.m"
      case (MR_Integer) 2:
#line 390 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 390 "status.m"
        break;
#line 390 "status.m"
    }
#line 390 "status.m"
    return hlds__status__HeadVar__2_2;
#line 390 "status.m"
  }
#line 184 "status.m"
}

#line 182 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
#line 182 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 182 "status.m"
{
#line 366 "status.m"
  {
#line 366 "status.m"
    MR_bool hlds__status__succeeded;
#line 366 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 366 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 367 "status.m"
    {
#line 367 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 366 "status.m"
    return hlds__status__HeadVar__2_2;
#line 366 "status.m"
  }
#line 182 "status.m"
}

#line 181 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
#line 181 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 181 "status.m"
{
#line 364 "status.m"
  {
#line 364 "status.m"
    MR_bool hlds__status__succeeded;
#line 364 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 364 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 365 "status.m"
    {
#line 365 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 364 "status.m"
    return hlds__status__HeadVar__2_2;
#line 364 "status.m"
  }
#line 181 "status.m"
}

#line 180 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
#line 180 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 180 "status.m"
{
#line 362 "status.m"
  {
#line 362 "status.m"
    MR_bool hlds__status__succeeded;
#line 362 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 362 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 363 "status.m"
    {
#line 363 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 362 "status.m"
    return hlds__status__HeadVar__2_2;
#line 362 "status.m"
  }
#line 180 "status.m"
}

#line 179 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
#line 179 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 179 "status.m"
{
#line 351 "status.m"
  {
#line 351 "status.m"
    MR_bool hlds__status__succeeded;
#line 351 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 351 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 351 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 351 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 351 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 351 "status.m"
    MR_Word hlds__status__NewIsExported_9;

#line 353 "status.m"
    {
#line 353 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 354 "status.m"
    {
#line 354 "status.m"
      hlds__status__OldIsExported_8 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 373 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 385 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 373 "status.m"
    else
#line 373 "status.m"
      {
#line 373 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 379 "status.m"
#line 379 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 379 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 379 "status.m"
          case (MR_Integer) 2:
#line 379 "status.m"
          case (MR_Integer) 1:
#line 378 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 379 "status.m"
            break;
#line 379 "status.m"
          case (MR_Integer) 0:
#line 381 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 379 "status.m"
            break;
#line 379 "status.m"
        }
#line 373 "status.m"
      }
#line 356 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 358 "status.m"
    if (hlds__status__succeeded)
#line 357 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 358 "status.m"
    else
#line 359 "status.m"
      {
#line 359 "status.m"
        {
#line 359 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_exported\'/1", (MR_String) "mismatch");
        }
#line 359 "status.m"
      }
#line 351 "status.m"
    return hlds__status__IsExported_4;
#line 351 "status.m"
  }
#line 179 "status.m"
}

#line 178 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
#line 178 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 178 "status.m"
{
#line 340 "status.m"
  {
#line 340 "status.m"
    MR_bool hlds__status__succeeded;
#line 340 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 340 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 340 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 340 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 340 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 340 "status.m"
    MR_Word hlds__status__NewIsExported_9;

#line 342 "status.m"
    {
#line 342 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 343 "status.m"
    {
#line 343 "status.m"
      hlds__status__OldIsExported_8 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 373 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 385 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 373 "status.m"
    else
#line 373 "status.m"
      {
#line 373 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 379 "status.m"
#line 379 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 379 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 379 "status.m"
          case (MR_Integer) 2:
#line 379 "status.m"
          case (MR_Integer) 1:
#line 378 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 379 "status.m"
            break;
#line 379 "status.m"
          case (MR_Integer) 0:
#line 381 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 379 "status.m"
            break;
#line 379 "status.m"
        }
#line 373 "status.m"
      }
#line 345 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 347 "status.m"
    if (hlds__status__succeeded)
#line 346 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 347 "status.m"
    else
#line 348 "status.m"
      {
#line 348 "status.m"
        {
#line 348 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_exported\'/1", (MR_String) "mismatch");
        }
#line 348 "status.m"
      }
#line 340 "status.m"
    return hlds__status__IsExported_4;
#line 340 "status.m"
  }
#line 178 "status.m"
}

#line 177 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
#line 177 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 177 "status.m"
{
#line 337 "status.m"
  {
#line 337 "status.m"
    MR_bool hlds__status__succeeded;
#line 337 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 337 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 338 "status.m"
    {
#line 338 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 337 "status.m"
    return hlds__status__HeadVar__2_2;
#line 337 "status.m"
  }
#line 177 "status.m"
}

void mercury__hlds__status__init(void)
{
}

void mercury__hlds__status__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_inst_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instance_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instmode_export_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instmode_import_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_export_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_import_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_mode_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_old_import_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_pred_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_type_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_typeclass_status_0);
}

void mercury__hlds__status__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.status. */
