/*
** Automatically generated from `status.m'
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
#include "libs.op_mode.mih"
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




#line 98 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_inst_status_0_0[2];

#line 101 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_inst_status_0_0;

#line 104 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_inst_status_0_0[1];

#line 107 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_inst_status_0[1];

#line 110 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_inst_status_0[1];

#line 113 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1];

#line 116 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1];

#line 119 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0;

#line 122 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0;

#line 125 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1;

#line 128 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2;

#line 131 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3];

#line 134 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3];

#line 137 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3];

#line 140 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1];

#line 143 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_0;

#line 146 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_1;

#line 149 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_2;

#line 152 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2];

#line 155 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1];

#line 158 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_instmode_import_0[2];

#line 161 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3];

#line 164 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3];

#line 167 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0;

#line 170 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1;

#line 173 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2;

#line 176 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3];

#line 179 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3];

#line 182 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3];

#line 185 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

#line 188 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

#line 191 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

#line 194 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3];

#line 197 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3];

#line 200 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3];

#line 203 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1];

#line 206 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0;

#line 209 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1;

#line 212 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2;

#line 215 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2];

#line 218 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1];

#line 221 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2];

#line 224 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3];

#line 227 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3];

#line 230 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1];

#line 233 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0;

#line 236 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1];

#line 239 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1;

#line 242 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1];

#line 245 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1];

#line 248 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2];

#line 251 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2];

#line 254 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2];

#line 257 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0;

#line 260 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1;

#line 263 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2];

#line 266 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2];

#line 269 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2];

#line 272 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_mode_status_0_0[2];

#line 275 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_mode_status_0_0;

#line 278 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_mode_status_0_0[1];

#line 281 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_mode_status_0[1];

#line 284 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_mode_status_0[1];

#line 287 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1];

#line 290 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1];

#line 293 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0;

#line 296 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1];

#line 299 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1;

#line 302 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1];

#line 305 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1];

#line 308 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2];

#line 311 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2];

#line 314 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2];

#line 317 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1];

#line 320 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0;

#line 323 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1];

#line 326 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1;

#line 329 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2;

#line 332 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3;

#line 335 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4;

#line 338 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5;

#line 341 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6;

#line 344 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7;

#line 347 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8;

#line 350 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9;

#line 353 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10;

#line 356 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0[9];

#line 359 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1];

#line 362 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1];

#line 365 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3];

#line 368 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_old_import_status_0[11];

#line 371 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_old_import_status_0[11];

#line 374 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1];

#line 377 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0;

#line 380 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1];

#line 383 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0;

#line 386 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1];

#line 389 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0;

#line 392 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 395 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 397 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 400 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 403 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 405 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 407 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 410 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 413 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 415 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 418 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 421 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 423 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 425 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 428 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
#line 431 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 433 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 436 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
#line 439 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 441 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 443 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 446 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
#line 449 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 451 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 454 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
#line 457 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 459 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 461 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 464 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
#line 467 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 469 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 472 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
#line 475 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 477 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 479 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 482 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 485 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 487 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 490 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 493 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 495 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 497 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 500 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 503 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 505 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 508 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 511 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 513 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 515 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 518 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 521 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 523 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 526 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 529 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 531 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 533 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 536 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 539 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 541 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 544 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 547 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 549 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 551 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 554 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 557 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 559 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 562 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 565 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 567 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 569 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 572 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
#line 575 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 577 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 580 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
#line 583 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 585 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 587 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 590 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 593 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 595 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 598 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 601 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 603 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 605 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 608 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 611 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 613 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 616 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 619 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 621 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 623 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 626 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 629 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 631 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 634 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 637 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 639 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 641 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 644 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 647 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 649 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 652 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 655 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 657 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 659 "hlds.status.c"
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



#line 732 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_inst_status_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0
};

#line 738 "hlds.status.c"
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

#line 753 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_inst_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_inst_status_0_0
};

#line 758 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_inst_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_inst_status_0_0
  }
};

#line 767 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_inst_status_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_inst_status_0_0
};

#line 772 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = {
  (MR_Integer) 0
};

#line 777 "hlds.status.c"
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

#line 794 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1] = {
  (MR_Integer) 0
};

#line 799 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0 = {
  (MR_String) "instance_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 806 "hlds.status.c"
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

#line 823 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0 = {
  (MR_String) "instmode_export_nowhere",
  (MR_Integer) 0
};

#line 829 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1 = {
  (MR_String) "instmode_export_only_submodules",
  (MR_Integer) 1
};

#line 835 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2 = {
  (MR_String) "instmode_export_anywhere",
  (MR_Integer) 2
};

#line 841 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2
};

#line 848 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1
};

#line 855 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 862 "hlds.status.c"
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

#line 879 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0
};

#line 884 "hlds.status.c"
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

#line 899 "hlds.status.c"
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

#line 914 "hlds.status.c"
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

#line 929 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2
};

#line 935 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

#line 940 "hlds.status.c"
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

#line 954 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

#line 961 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 968 "hlds.status.c"
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

#line 985 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0 = {
  (MR_String) "instmode_import_plain_imp",
  (MR_Integer) 0
};

#line 991 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1 = {
  (MR_String) "instmode_import_plain_int",
  (MR_Integer) 1
};

#line 997 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2 = {
  (MR_String) "instmode_import_plain_ancestors_priv_int_file",
  (MR_Integer) 2
};

#line 1003 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2
};

#line 1010 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1
};

#line 1017 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1024 "hlds.status.c"
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

#line 1041 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0 = {
  (MR_String) "item_export_nowhere",
  (MR_Integer) 0
};

#line 1047 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1 = {
  (MR_String) "item_export_only_submodules",
  (MR_Integer) 1
};

#line 1053 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2 = {
  (MR_String) "item_export_anywhere",
  (MR_Integer) 2
};

#line 1059 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2
};

#line 1066 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1
};

#line 1073 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1080 "hlds.status.c"
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

#line 1097 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 1102 "hlds.status.c"
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

#line 1117 "hlds.status.c"
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

#line 1132 "hlds.status.c"
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

#line 1147 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 1153 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0
};

#line 1158 "hlds.status.c"
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

#line 1172 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 1179 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1186 "hlds.status.c"
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

#line 1203 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_export_0
};

#line 1208 "hlds.status.c"
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

#line 1223 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_import_0
};

#line 1228 "hlds.status.c"
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

#line 1243 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 1248 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1
};

#line 1253 "hlds.status.c"
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

#line 1267 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 1273 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1279 "hlds.status.c"
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

#line 1296 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  (MR_Integer) 0
};

#line 1302 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  (MR_Integer) 1
};

#line 1308 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 1314 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 1320 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1326 "hlds.status.c"
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

#line 1343 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_mode_status_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0
};

#line 1349 "hlds.status.c"
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

#line 1364 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_mode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_mode_status_0_0
};

#line 1369 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_mode_status_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_mode_status_0_0
  }
};

#line 1378 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_mode_status_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_mode_status_0_0
};

#line 1383 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = {
  (MR_Integer) 0
};

#line 1388 "hlds.status.c"
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

#line 1405 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_export_0
};

#line 1410 "hlds.status.c"
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

#line 1425 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_0
};

#line 1430 "hlds.status.c"
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

#line 1445 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

#line 1450 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1
};

#line 1455 "hlds.status.c"
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

#line 1469 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

#line 1475 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1481 "hlds.status.c"
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

#line 1498 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0
};

#line 1503 "hlds.status.c"
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

#line 1518 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 1523 "hlds.status.c"
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

#line 1538 "hlds.status.c"
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

#line 1553 "hlds.status.c"
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

#line 1568 "hlds.status.c"
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

#line 1583 "hlds.status.c"
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

#line 1598 "hlds.status.c"
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

#line 1613 "hlds.status.c"
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

#line 1628 "hlds.status.c"
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

#line 1643 "hlds.status.c"
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

#line 1658 "hlds.status.c"
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

#line 1673 "hlds.status.c"
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

#line 1686 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0
};

#line 1691 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1
};

#line 1696 "hlds.status.c"
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

#line 1715 "hlds.status.c"
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

#line 1730 "hlds.status.c"
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

#line 1745 "hlds.status.c"
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

#line 1762 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = {
  (MR_Integer) 0
};

#line 1767 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1774 "hlds.status.c"
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

#line 1791 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = {
  (MR_Integer) 0
};

#line 1796 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1803 "hlds.status.c"
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

#line 1820 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1] = {
  (MR_Integer) 0
};

#line 1825 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 = {
  (MR_String) "typeclass_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1832 "hlds.status.c"
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

#line 1849 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 1852 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1854 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1856 "hlds.status.c"
{
#line 1858 "hlds.status.c"
  {
#line 1860 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1863 "hlds.status.c"
    {
#line 1865 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1868 "hlds.status.c"
    return hlds__status__succeeded;
#line 1870 "hlds.status.c"
  }
#line 1872 "hlds.status.c"
}

#line 1875 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 1878 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1880 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1882 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1884 "hlds.status.c"
{
#line 1886 "hlds.status.c"
  {
#line 1888 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1891 "hlds.status.c"
    {
#line 1893 "hlds.status.c"
      hlds__status____Compare____inst_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1896 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1898 "hlds.status.c"
  }
#line 1900 "hlds.status.c"
}

#line 1903 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 1906 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1908 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1910 "hlds.status.c"
{
#line 1912 "hlds.status.c"
  {
#line 1914 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1917 "hlds.status.c"
    {
#line 1919 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1922 "hlds.status.c"
    return hlds__status__succeeded;
#line 1924 "hlds.status.c"
  }
#line 1926 "hlds.status.c"
}

#line 1929 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 1932 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1934 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1936 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1938 "hlds.status.c"
{
#line 1940 "hlds.status.c"
  {
#line 1942 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1945 "hlds.status.c"
    {
#line 1947 "hlds.status.c"
      hlds__status____Compare____instance_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1950 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1952 "hlds.status.c"
  }
#line 1954 "hlds.status.c"
}

#line 1957 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
#line 1960 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1962 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1964 "hlds.status.c"
{
#line 1966 "hlds.status.c"
  {
#line 1968 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1971 "hlds.status.c"
    {
#line 1973 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1976 "hlds.status.c"
    return hlds__status__succeeded;
#line 1978 "hlds.status.c"
  }
#line 1980 "hlds.status.c"
}

#line 1983 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
#line 1986 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1988 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1990 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1992 "hlds.status.c"
{
#line 1994 "hlds.status.c"
  {
#line 1996 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1999 "hlds.status.c"
    {
#line 2001 "hlds.status.c"
      hlds__status____Compare____instmode_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2004 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2006 "hlds.status.c"
  }
#line 2008 "hlds.status.c"
}

#line 2011 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
#line 2014 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2016 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2018 "hlds.status.c"
{
#line 2020 "hlds.status.c"
  {
#line 2022 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2025 "hlds.status.c"
    {
#line 2027 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2030 "hlds.status.c"
    return hlds__status__succeeded;
#line 2032 "hlds.status.c"
  }
#line 2034 "hlds.status.c"
}

#line 2037 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
#line 2040 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2042 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2044 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2046 "hlds.status.c"
{
#line 2048 "hlds.status.c"
  {
#line 2050 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2053 "hlds.status.c"
    {
#line 2055 "hlds.status.c"
      hlds__status____Compare____instmode_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2058 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2060 "hlds.status.c"
  }
#line 2062 "hlds.status.c"
}

#line 2065 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
#line 2068 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2070 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2072 "hlds.status.c"
{
#line 2074 "hlds.status.c"
  {
#line 2076 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2079 "hlds.status.c"
    {
#line 2081 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instmode_import_plain_locn_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2084 "hlds.status.c"
    return hlds__status__succeeded;
#line 2086 "hlds.status.c"
  }
#line 2088 "hlds.status.c"
}

#line 2091 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
#line 2094 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2096 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2098 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2100 "hlds.status.c"
{
#line 2102 "hlds.status.c"
  {
#line 2104 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2107 "hlds.status.c"
    {
#line 2109 "hlds.status.c"
      hlds__status____Compare____instmode_import_plain_locn_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2112 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2114 "hlds.status.c"
  }
#line 2116 "hlds.status.c"
}

#line 2119 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 2122 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2124 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2126 "hlds.status.c"
{
#line 2128 "hlds.status.c"
  {
#line 2130 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2133 "hlds.status.c"
    {
#line 2135 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2138 "hlds.status.c"
    return hlds__status__succeeded;
#line 2140 "hlds.status.c"
  }
#line 2142 "hlds.status.c"
}

#line 2145 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 2148 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2150 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2152 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2154 "hlds.status.c"
{
#line 2156 "hlds.status.c"
  {
#line 2158 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2161 "hlds.status.c"
    {
#line 2163 "hlds.status.c"
      hlds__status____Compare____item_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2166 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2168 "hlds.status.c"
  }
#line 2170 "hlds.status.c"
}

#line 2173 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 2176 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2178 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2180 "hlds.status.c"
{
#line 2182 "hlds.status.c"
  {
#line 2184 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2187 "hlds.status.c"
    {
#line 2189 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2192 "hlds.status.c"
    return hlds__status__succeeded;
#line 2194 "hlds.status.c"
  }
#line 2196 "hlds.status.c"
}

#line 2199 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 2202 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2204 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2206 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2208 "hlds.status.c"
{
#line 2210 "hlds.status.c"
  {
#line 2212 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2215 "hlds.status.c"
    {
#line 2217 "hlds.status.c"
      hlds__status____Compare____item_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2220 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2222 "hlds.status.c"
  }
#line 2224 "hlds.status.c"
}

#line 2227 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 2230 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2232 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2234 "hlds.status.c"
{
#line 2236 "hlds.status.c"
  {
#line 2238 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2241 "hlds.status.c"
    {
#line 2243 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2246 "hlds.status.c"
    return hlds__status__succeeded;
#line 2248 "hlds.status.c"
  }
#line 2250 "hlds.status.c"
}

#line 2253 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 2256 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2258 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2260 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2262 "hlds.status.c"
{
#line 2264 "hlds.status.c"
  {
#line 2266 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2269 "hlds.status.c"
    {
#line 2271 "hlds.status.c"
      hlds__status____Compare____item_mercury_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2274 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2276 "hlds.status.c"
  }
#line 2278 "hlds.status.c"
}

#line 2281 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 2284 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2286 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2288 "hlds.status.c"
{
#line 2290 "hlds.status.c"
  {
#line 2292 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2295 "hlds.status.c"
    {
#line 2297 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2300 "hlds.status.c"
    return hlds__status__succeeded;
#line 2302 "hlds.status.c"
  }
#line 2304 "hlds.status.c"
}

#line 2307 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 2310 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2312 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2314 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2316 "hlds.status.c"
{
#line 2318 "hlds.status.c"
  {
#line 2320 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2323 "hlds.status.c"
    {
#line 2325 "hlds.status.c"
      hlds__status____Compare____maybe_opt_imported_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2328 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2330 "hlds.status.c"
  }
#line 2332 "hlds.status.c"
}

#line 2335 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 2338 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2340 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2342 "hlds.status.c"
{
#line 2344 "hlds.status.c"
  {
#line 2346 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2349 "hlds.status.c"
    {
#line 2351 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2354 "hlds.status.c"
    return hlds__status__succeeded;
#line 2356 "hlds.status.c"
  }
#line 2358 "hlds.status.c"
}

#line 2361 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 2364 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2366 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2368 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2370 "hlds.status.c"
{
#line 2372 "hlds.status.c"
  {
#line 2374 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2377 "hlds.status.c"
    {
#line 2379 "hlds.status.c"
      hlds__status____Compare____mode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2382 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2384 "hlds.status.c"
  }
#line 2386 "hlds.status.c"
}

#line 2389 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
#line 2392 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2394 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2396 "hlds.status.c"
{
#line 2398 "hlds.status.c"
  {
#line 2400 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2403 "hlds.status.c"
    {
#line 2405 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2408 "hlds.status.c"
    return hlds__status__succeeded;
#line 2410 "hlds.status.c"
  }
#line 2412 "hlds.status.c"
}

#line 2415 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
#line 2418 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2420 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2422 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2424 "hlds.status.c"
{
#line 2426 "hlds.status.c"
  {
#line 2428 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2431 "hlds.status.c"
    {
#line 2433 "hlds.status.c"
      hlds__status____Compare____new_instmode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2436 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2438 "hlds.status.c"
  }
#line 2440 "hlds.status.c"
}

#line 2443 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 2446 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2448 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2450 "hlds.status.c"
{
#line 2452 "hlds.status.c"
  {
#line 2454 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2457 "hlds.status.c"
    {
#line 2459 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2462 "hlds.status.c"
    return hlds__status__succeeded;
#line 2464 "hlds.status.c"
  }
#line 2466 "hlds.status.c"
}

#line 2469 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 2472 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2474 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2476 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2478 "hlds.status.c"
{
#line 2480 "hlds.status.c"
  {
#line 2482 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2485 "hlds.status.c"
    {
#line 2487 "hlds.status.c"
      hlds__status____Compare____old_import_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2490 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2492 "hlds.status.c"
  }
#line 2494 "hlds.status.c"
}

#line 2497 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 2500 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2502 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2504 "hlds.status.c"
{
#line 2506 "hlds.status.c"
  {
#line 2508 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2511 "hlds.status.c"
    {
#line 2513 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2516 "hlds.status.c"
    return hlds__status__succeeded;
#line 2518 "hlds.status.c"
  }
#line 2520 "hlds.status.c"
}

#line 2523 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 2526 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2528 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2530 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2532 "hlds.status.c"
{
#line 2534 "hlds.status.c"
  {
#line 2536 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2539 "hlds.status.c"
    {
#line 2541 "hlds.status.c"
      hlds__status____Compare____pred_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2544 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2546 "hlds.status.c"
  }
#line 2548 "hlds.status.c"
}

#line 2551 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 2554 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2556 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2558 "hlds.status.c"
{
#line 2560 "hlds.status.c"
  {
#line 2562 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2565 "hlds.status.c"
    {
#line 2567 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2570 "hlds.status.c"
    return hlds__status__succeeded;
#line 2572 "hlds.status.c"
  }
#line 2574 "hlds.status.c"
}

#line 2577 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 2580 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2582 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2584 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2586 "hlds.status.c"
{
#line 2588 "hlds.status.c"
  {
#line 2590 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2593 "hlds.status.c"
    {
#line 2595 "hlds.status.c"
      hlds__status____Compare____type_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2598 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2600 "hlds.status.c"
  }
#line 2602 "hlds.status.c"
}

#line 2605 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 2608 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 2610 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 2612 "hlds.status.c"
{
#line 2614 "hlds.status.c"
  {
#line 2616 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 2619 "hlds.status.c"
    {
#line 2621 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 2624 "hlds.status.c"
    return hlds__status__succeeded;
#line 2626 "hlds.status.c"
  }
#line 2628 "hlds.status.c"
}

#line 2631 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 2634 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 2636 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 2638 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 2640 "hlds.status.c"
{
#line 2642 "hlds.status.c"
  {
#line 2644 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 2647 "hlds.status.c"
    {
#line 2649 "hlds.status.c"
      hlds__status____Compare____typeclass_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 2652 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 2654 "hlds.status.c"
  }
#line 2656 "hlds.status.c"
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
#line 2683 "hlds.status.c"
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

#line 2739 "hlds.status.c"
        {
#line 2741 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
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
#line 2777 "hlds.status.c"
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

#line 2833 "hlds.status.c"
        {
#line 2835 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
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
#line 2871 "hlds.status.c"
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

#line 2927 "hlds.status.c"
        {
#line 2929 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
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
#line 2971 "hlds.status.c"
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
#line 3061 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3067 "hlds.status.c"
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
#line 3149 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3155 "hlds.status.c"
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
#line 3237 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3243 "hlds.status.c"
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
#line 3325 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3331 "hlds.status.c"
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
#line 3413 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3419 "hlds.status.c"
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
#line 3501 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3507 "hlds.status.c"
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
#line 3589 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3595 "hlds.status.c"
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
#line 3677 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3683 "hlds.status.c"
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
#line 3765 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "status.m"
                      break;
#line 111 "status.m"
                    case (MR_Integer) 2:
#line 3771 "hlds.status.c"
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
#line 3804 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 1:
#line 3810 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 2:
#line 3816 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 3:
#line 3822 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 4:
#line 3828 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 5:
#line 3834 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 6:
#line 3840 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 7:
#line 3846 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 8:
#line 3852 "hlds.status.c"
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
#line 3890 "hlds.status.c"
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
#line 3921 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 1:
#line 3927 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 2:
#line 3933 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 3:
#line 3939 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 4:
#line 3945 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 5:
#line 3951 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 6:
#line 3957 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 7:
#line 3963 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                      case (MR_Integer) 8:
#line 3969 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "status.m"
                        break;
#line 111 "status.m"
                    }
#line 111 "status.m"
                    break;
#line 111 "status.m"
                  case (MR_Integer) 1:
#line 3979 "hlds.status.c"
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
#line 4220 "hlds.status.c"
                    /* direct tailcall eliminated */
#line 4222 "hlds.status.c"
                    {
#line 4224 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__V_3_3;
#line 4226 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_4_4;

#line 4229 "hlds.status.c"
                      hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 4231 "hlds.status.c"
                      hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 4233 "hlds.status.c"
                    }
#line 4235 "hlds.status.c"
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
#line 4260 "hlds.status.c"
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
#line 4305 "hlds.status.c"
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
            }
#line 63 "status.m"
          }
#line 63 "status.m"
        else
#line 4332 "hlds.status.c"
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
#line 4345 "hlds.status.c"
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
#line 4415 "hlds.status.c"
            {
#line 4417 "hlds.status.c"
              hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
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
#line 4441 "hlds.status.c"
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
#line 4478 "hlds.status.c"
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
#line 4500 "hlds.status.c"
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

#line 4559 "hlds.status.c"
        {
#line 4561 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 47 "status.m"
        if (hlds__status__succeeded)
#line 4566 "hlds.status.c"
          {
#line 4568 "hlds.status.c"
            hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
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
#line 4619 "hlds.status.c"
  {
#line 4621 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 4624 "hlds.status.c"
    return hlds__status__succeeded;
#line 4626 "hlds.status.c"
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
#line 4655 "hlds.status.c"
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
            }
#line 255 "status.m"
          }
#line 255 "status.m"
        else
#line 4682 "hlds.status.c"
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
#line 4695 "hlds.status.c"
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
#line 4765 "hlds.status.c"
            {
#line 4767 "hlds.status.c"
              hlds__status__succeeded = hlds__status____Unify____item_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
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
#line 4791 "hlds.status.c"
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
#line 4828 "hlds.status.c"
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
#line 4876 "hlds.status.c"
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
#line 4916 "hlds.status.c"
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
#line 4949 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "status.m"
                    break;
#line 268 "status.m"
                  case (MR_Integer) 1:
#line 4955 "hlds.status.c"
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
#line 5085 "hlds.status.c"
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
#line 5141 "hlds.status.c"
  {
#line 5143 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5146 "hlds.status.c"
    return hlds__status__succeeded;
#line 5148 "hlds.status.c"
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
#line 5192 "hlds.status.c"
  {
#line 5194 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5197 "hlds.status.c"
    return hlds__status__succeeded;
#line 5199 "hlds.status.c"
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
#line 5228 "hlds.status.c"
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
#line 5276 "hlds.status.c"
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
#line 5316 "hlds.status.c"
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
#line 5349 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "status.m"
                    break;
#line 76 "status.m"
                  case (MR_Integer) 1:
#line 5355 "hlds.status.c"
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
#line 5485 "hlds.status.c"
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
#line 5541 "hlds.status.c"
  {
#line 5543 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5546 "hlds.status.c"
    return hlds__status__succeeded;
#line 5548 "hlds.status.c"
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
#line 5577 "hlds.status.c"
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

#line 5633 "hlds.status.c"
        {
#line 5635 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
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
#line 5671 "hlds.status.c"
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
#line 5693 "hlds.status.c"
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

#line 5752 "hlds.status.c"
        {
#line 5754 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 44 "status.m"
        if (hlds__status__succeeded)
#line 5759 "hlds.status.c"
          {
#line 5761 "hlds.status.c"
            hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
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
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
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
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
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
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
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
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
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
