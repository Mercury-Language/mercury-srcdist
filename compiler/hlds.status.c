/*
** Automatically generated from `status.m'
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


/* :- module hlds.status. */
/* :- implementation. */

/*
INIT mercury__hlds__status__init
ENDINIT
*/

#include "hlds.status.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.maybe_error.mih"
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

#line 704 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 704 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 704 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 704 "status.m"
  MR_Word * hlds__status__Status_6);

#line 619 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 619 "status.m"
  MR_Word hlds__status__HeadVar__1_1);

#line 295 "status.m"
static void MR_CALL 
hlds__status__valid_old_status_for_inst_or_mode_2_p_0(
#line 295 "status.m"
  MR_Word hlds__status__OldStatus0_3,
#line 295 "status.m"
  MR_Word * hlds__status__OldStatus_4);


static /* final */ const MR_Box hlds__status_scalar_common_2[3][1];


#line 638 "status.m"
/* sealed */ struct hlds__status__vector_common_type_1_0_s {
#line 638 "status.m"
  const MR_Word hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 638 "status.m"
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

#line 54 "status.m"
void MR_CALL 
hlds__status____Compare____typeclass_status_0_0(
#line 54 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 54 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 54 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 54 "status.m"
{
#line 54 "status.m"
  {
#line 54 "status.m"
    MR_bool hlds__status__succeeded;
#line 54 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 54 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 54 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 54 "status.m"
    if (hlds__status__succeeded)
#line 2682 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "status.m"
    else
#line 54 "status.m"
      {
#line 54 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 54 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 54 "status.m"
        {
#line 54 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
        }
#line 54 "status.m"
      }
#line 54 "status.m"
  }
#line 54 "status.m"
}

#line 54 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0(
#line 54 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 54 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 54 "status.m"
{
#line 54 "status.m"
  {
#line 54 "status.m"
    MR_bool hlds__status__succeeded;
#line 54 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 54 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 54 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 54 "status.m"
    if (hlds__status__succeeded)
#line 54 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 54 "status.m"
    else
#line 54 "status.m"
      {
#line 54 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 54 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2738 "hlds.status.c"
        {
#line 2740 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 54 "status.m"
      }
#line 54 "status.m"
    return hlds__status__succeeded;
#line 54 "status.m"
  }
#line 54 "status.m"
}

#line 42 "status.m"
void MR_CALL 
hlds__status____Compare____type_status_0_0(
#line 42 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 42 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 42 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 42 "status.m"
{
#line 42 "status.m"
  {
#line 42 "status.m"
    MR_bool hlds__status__succeeded;
#line 42 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 42 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 42 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 42 "status.m"
    if (hlds__status__succeeded)
#line 2776 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "status.m"
    else
#line 42 "status.m"
      {
#line 42 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 42 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 42 "status.m"
        {
#line 42 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
        }
#line 42 "status.m"
      }
#line 42 "status.m"
  }
#line 42 "status.m"
}

#line 42 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0(
#line 42 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 42 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 42 "status.m"
{
#line 42 "status.m"
  {
#line 42 "status.m"
    MR_bool hlds__status__succeeded;
#line 42 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 42 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 42 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 42 "status.m"
    if (hlds__status__succeeded)
#line 42 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 42 "status.m"
    else
#line 42 "status.m"
      {
#line 42 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 42 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2832 "hlds.status.c"
        {
#line 2834 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 42 "status.m"
      }
#line 42 "status.m"
    return hlds__status__succeeded;
#line 42 "status.m"
  }
#line 42 "status.m"
}

#line 51 "status.m"
void MR_CALL 
hlds__status____Compare____pred_status_0_0(
#line 51 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 51 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 51 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 51 "status.m"
{
#line 51 "status.m"
  {
#line 51 "status.m"
    MR_bool hlds__status__succeeded;
#line 51 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 51 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 51 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 51 "status.m"
    if (hlds__status__succeeded)
#line 2870 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "status.m"
    else
#line 51 "status.m"
      {
#line 51 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 51 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 51 "status.m"
        {
#line 51 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
        }
#line 51 "status.m"
      }
#line 51 "status.m"
  }
#line 51 "status.m"
}

#line 51 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0(
#line 51 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 51 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 51 "status.m"
{
#line 51 "status.m"
  {
#line 51 "status.m"
    MR_bool hlds__status__succeeded;
#line 51 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 51 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 51 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 51 "status.m"
    if (hlds__status__succeeded)
#line 51 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 51 "status.m"
    else
#line 51 "status.m"
      {
#line 51 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 51 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 2926 "hlds.status.c"
        {
#line 2928 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 51 "status.m"
      }
#line 51 "status.m"
    return hlds__status__succeeded;
#line 51 "status.m"
  }
#line 51 "status.m"
}

#line 112 "status.m"
void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
#line 112 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 112 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 112 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 112 "status.m"
{
#line 112 "status.m"
  while (MR_TRUE)
#line 112 "status.m"
    {
#line 112 "status.m"
      /* tailcall optimized into a loop */
#line 112 "status.m"
      {
#line 112 "status.m"
        MR_bool hlds__status__succeeded;
#line 112 "status.m"
        MR_Integer hlds__status__CastX_48 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 112 "status.m"
        MR_Integer hlds__status__CastY_49 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 112 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_48 == hlds__status__CastY_49);
#line 112 "status.m"
        if (hlds__status__succeeded)
#line 2970 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
        else
#line 112 "status.m"
#line 112 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 112 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
            case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 112 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3060 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3066 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 1:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3148 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3154 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 2:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3236 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3242 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 3:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3324 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3330 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 4:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3412 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3418 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 5:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3500 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3506 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 6:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3588 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3594 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 7:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3676 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3682 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 8:
#line 112 "status.m"
#line 112 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                    case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                        case (MR_Integer) 0:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 1:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 2:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 3:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 4:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 5:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 6:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 7:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                        case (MR_Integer) 8:
#line 112 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "status.m"
                          break;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 1:
#line 3764 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                    case (MR_Integer) 2:
#line 3770 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                      break;
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
            case (MR_Integer) 1:
#line 112 "status.m"
              {
#line 112 "status.m"
                MR_Word hlds__status__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 112 "status.m"
#line 112 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                  case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                      case (MR_Integer) 0:
#line 3803 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 1:
#line 3809 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 2:
#line 3815 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 3:
#line 3821 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 4:
#line 3827 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 5:
#line 3833 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 6:
#line 3839 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 7:
#line 3845 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 8:
#line 3851 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                    }
#line 112 "status.m"
                    break;
#line 112 "status.m"
                  case (MR_Integer) 1:
#line 112 "status.m"
                    {
#line 112 "status.m"
                      MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 112 "status.m"
                      /* direct tailcall eliminated */
#line 112 "status.m"
                      {
#line 112 "status.m"
                        MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_52_52;
#line 112 "status.m"
                        MR_Word hlds__status__HeadVar__3__tmp_copy_3 = hlds__status__V_5_5;

#line 112 "status.m"
                        hlds__status__HeadVar__3_3 = hlds__status__HeadVar__3__tmp_copy_3;
#line 112 "status.m"
                        hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 112 "status.m"
                      }
#line 112 "status.m"
                      continue;
#line 112 "status.m"
                    }
#line 112 "status.m"
                    break;
#line 112 "status.m"
                  case (MR_Integer) 2:
#line 3889 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                    break;
#line 112 "status.m"
                }
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
            case (MR_Integer) 2:
#line 112 "status.m"
              {
#line 112 "status.m"
                MR_Word hlds__status__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 112 "status.m"
#line 112 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                  case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 112 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                      case (MR_Integer) 0:
#line 3920 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 1:
#line 3926 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 2:
#line 3932 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 3:
#line 3938 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 4:
#line 3944 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 5:
#line 3950 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 6:
#line 3956 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 7:
#line 3962 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                      case (MR_Integer) 8:
#line 3968 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "status.m"
                        break;
#line 112 "status.m"
                    }
#line 112 "status.m"
                    break;
#line 112 "status.m"
                  case (MR_Integer) 1:
#line 3978 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "status.m"
                    break;
#line 112 "status.m"
                  case (MR_Integer) 2:
#line 112 "status.m"
                    {
#line 112 "status.m"
                      MR_Word hlds__status__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 112 "status.m"
                      MR_Integer hlds__status__V_54_54 = (MR_Integer) hlds__status__V_53_53;
#line 112 "status.m"
                      MR_Integer hlds__status__V_55_55 = (MR_Integer) hlds__status__V_20_20;

#line 112 "status.m"
                      {
#line 112 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_54_54, hlds__status__V_55_55);
                      }
#line 112 "status.m"
                    }
#line 112 "status.m"
                    break;
#line 112 "status.m"
                }
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
          }
#line 112 "status.m"
      }
#line 112 "status.m"
      break;
#line 112 "status.m"
    }
#line 112 "status.m"
}

#line 112 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0(
#line 112 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 112 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 112 "status.m"
{
#line 112 "status.m"
  while (MR_TRUE)
#line 112 "status.m"
    {
#line 112 "status.m"
      /* tailcall optimized into a loop */
#line 112 "status.m"
      {
#line 112 "status.m"
        MR_bool hlds__status__succeeded;
#line 112 "status.m"
        MR_Integer hlds__status__CastX_25 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
        MR_Integer hlds__status__CastY_26 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_25 == hlds__status__CastY_26);
#line 112 "status.m"
        if (hlds__status__succeeded)
#line 112 "status.m"
          hlds__status__succeeded = MR_TRUE;
#line 112 "status.m"
        else
#line 112 "status.m"
#line 112 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 112 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
            case (MR_Integer) 0:
#line 112 "status.m"
#line 112 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 112 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 112 "status.m"
                case (MR_Integer) 0:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 1:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_10 == hlds__status__CastX_9);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 2:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_11 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_12 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_12 == hlds__status__CastX_11);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 3:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_13 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_14 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_14 == hlds__status__CastX_13);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 4:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_15 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_16 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_16 == hlds__status__CastX_15);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 5:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_17 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_18 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_18 == hlds__status__CastX_17);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 6:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_19 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_20 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_20 == hlds__status__CastX_19);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 7:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_21 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_22 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_22 == hlds__status__CastX_21);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
                case (MR_Integer) 8:
#line 112 "status.m"
                  {
#line 112 "status.m"
                    MR_Integer hlds__status__CastX_23 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 112 "status.m"
                    MR_Integer hlds__status__CastY_24 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 112 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_24 == hlds__status__CastX_23);
#line 112 "status.m"
                  }
#line 112 "status.m"
                  break;
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
            case (MR_Integer) 1:
#line 112 "status.m"
              {
#line 112 "status.m"
                MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "status.m"
                MR_Word hlds__status__V_4_4;

#line 112 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 112 "status.m"
                if (hlds__status__succeeded)
#line 112 "status.m"
                  {
#line 112 "status.m"
                    hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4219 "hlds.status.c"
                    /* direct tailcall eliminated */
#line 4221 "hlds.status.c"
                    {
#line 4223 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__V_3_3;
#line 4225 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_4_4;

#line 4228 "hlds.status.c"
                      hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 4230 "hlds.status.c"
                      hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 4232 "hlds.status.c"
                    }
#line 4234 "hlds.status.c"
                    continue;
#line 112 "status.m"
                  }
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
            case (MR_Integer) 2:
#line 112 "status.m"
              {
#line 112 "status.m"
                MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "status.m"
                MR_Word hlds__status__V_6_6;

#line 112 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 112 "status.m"
                if (hlds__status__succeeded)
#line 112 "status.m"
                  {
#line 112 "status.m"
                    hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4259 "hlds.status.c"
                    hlds__status__succeeded = (hlds__status__V_5_5 == hlds__status__V_6_6);
#line 112 "status.m"
                  }
#line 112 "status.m"
              }
#line 112 "status.m"
              break;
#line 112 "status.m"
          }
#line 112 "status.m"
        return hlds__status__succeeded;
#line 112 "status.m"
      }
#line 112 "status.m"
      break;
#line 112 "status.m"
    }
#line 112 "status.m"
}

#line 64 "status.m"
void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0(
#line 64 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 64 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 64 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 64 "status.m"
{
#line 64 "status.m"
  {
#line 64 "status.m"
    MR_bool hlds__status__succeeded;
#line 64 "status.m"
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 64 "status.m"
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 64 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
#line 64 "status.m"
    if (hlds__status__succeeded)
#line 4304 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "status.m"
    else
#line 64 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 64 "status.m"
      {
#line 64 "status.m"
        MR_Word hlds__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 64 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 64 "status.m"
          {
#line 64 "status.m"
            MR_Word hlds__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 64 "status.m"
            {
#line 64 "status.m"
              hlds__status____Compare____instmode_import_0_0(hlds__status__HeadVar__1_1, hlds__status__V_16_16, hlds__status__V_11_11);
            }
#line 64 "status.m"
          }
#line 64 "status.m"
        else
#line 4331 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 64 "status.m"
      }
#line 64 "status.m"
    else
#line 64 "status.m"
      {
#line 64 "status.m"
        MR_Word hlds__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 64 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4344 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 64 "status.m"
        else
#line 64 "status.m"
          {
#line 64 "status.m"
            MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 64 "status.m"
            MR_Integer hlds__status__V_18_18 = (MR_Integer) hlds__status__V_17_17;
#line 64 "status.m"
            MR_Integer hlds__status__V_19_19 = (MR_Integer) hlds__status__V_5_5;

#line 64 "status.m"
            {
#line 64 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_18_18, hlds__status__V_19_19);
            }
#line 64 "status.m"
          }
#line 64 "status.m"
      }
#line 64 "status.m"
  }
#line 64 "status.m"
}

#line 64 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0(
#line 64 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 64 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 64 "status.m"
{
#line 64 "status.m"
  {
#line 64 "status.m"
    MR_bool hlds__status__succeeded;
#line 64 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 64 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 64 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 64 "status.m"
    if (hlds__status__succeeded)
#line 64 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 64 "status.m"
    else
#line 64 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 64 "status.m"
      {
#line 64 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "status.m"
        MR_Word hlds__status__V_6_6;

#line 64 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 64 "status.m"
        if (hlds__status__succeeded)
#line 64 "status.m"
          {
#line 64 "status.m"
            hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4414 "hlds.status.c"
            {
#line 4416 "hlds.status.c"
              hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
            }
#line 64 "status.m"
          }
#line 64 "status.m"
      }
#line 64 "status.m"
    else
#line 64 "status.m"
      {
#line 64 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "status.m"
        MR_Word hlds__status__V_4_4;

#line 64 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 64 "status.m"
        if (hlds__status__succeeded)
#line 64 "status.m"
          {
#line 64 "status.m"
            hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4440 "hlds.status.c"
            hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 64 "status.m"
          }
#line 64 "status.m"
      }
#line 64 "status.m"
    return hlds__status__succeeded;
#line 64 "status.m"
  }
#line 64 "status.m"
}

#line 48 "status.m"
void MR_CALL 
hlds__status____Compare____mode_status_0_0(
#line 48 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 48 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 48 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 48 "status.m"
{
#line 48 "status.m"
  {
#line 48 "status.m"
    MR_bool hlds__status__succeeded;
#line 48 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 48 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 48 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 48 "status.m"
    if (hlds__status__succeeded)
#line 4477 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "status.m"
    else
#line 48 "status.m"
      {
#line 48 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "status.m"
        MR_Word hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "status.m"
        MR_Word hlds__status__V_8_8;

#line 48 "status.m"
        {
#line 48 "status.m"
          hlds__status____Compare____old_import_status_0_0(&hlds__status__V_8_8, hlds__status__V_4_4, hlds__status__V_6_6);
        }
#line 4499 "hlds.status.c"
        hlds__status__succeeded = (hlds__status__V_8_8 == (MR_Integer) 0);
#line 48 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 48 "status.m"
        if (hlds__status__succeeded)
#line 48 "status.m"
          *hlds__status__HeadVar__1_1 = hlds__status__V_8_8;
#line 48 "status.m"
        else
#line 48 "status.m"
          {
#line 48 "status.m"
            hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_5_5, hlds__status__V_7_7);
          }
#line 48 "status.m"
      }
#line 48 "status.m"
  }
#line 48 "status.m"
}

#line 48 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0(
#line 48 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 48 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 48 "status.m"
{
#line 48 "status.m"
  {
#line 48 "status.m"
    MR_bool hlds__status__succeeded;
#line 48 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 48 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 48 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 48 "status.m"
    if (hlds__status__succeeded)
#line 48 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 48 "status.m"
    else
#line 48 "status.m"
      {
#line 48 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));

#line 4558 "hlds.status.c"
        {
#line 4560 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 48 "status.m"
        if (hlds__status__succeeded)
#line 4565 "hlds.status.c"
          {
#line 4567 "hlds.status.c"
            hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
          }
#line 48 "status.m"
      }
#line 48 "status.m"
    return hlds__status__succeeded;
#line 48 "status.m"
  }
#line 48 "status.m"
}

#line 38 "status.m"
void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0(
#line 38 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 38 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 38 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 38 "status.m"
{
#line 38 "status.m"
  {
#line 38 "status.m"
    MR_bool hlds__status__succeeded;
#line 38 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 38 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 38 "status.m"
    {
#line 38 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
    }
#line 38 "status.m"
  }
#line 38 "status.m"
}

#line 38 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0(
#line 38 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 38 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 38 "status.m"
{
#line 4618 "hlds.status.c"
  {
#line 4620 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 4623 "hlds.status.c"
    return hlds__status__succeeded;
#line 4625 "hlds.status.c"
  }
#line 38 "status.m"
}

#line 256 "status.m"
void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
#line 256 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 256 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 256 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 256 "status.m"
{
#line 256 "status.m"
  {
#line 256 "status.m"
    MR_bool hlds__status__succeeded;
#line 256 "status.m"
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 256 "status.m"
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 256 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
#line 256 "status.m"
    if (hlds__status__succeeded)
#line 4654 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 256 "status.m"
    else
#line 256 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 256 "status.m"
      {
#line 256 "status.m"
        MR_Word hlds__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 256 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 256 "status.m"
          {
#line 256 "status.m"
            MR_Word hlds__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 256 "status.m"
            {
#line 256 "status.m"
              hlds__status____Compare____item_import_0_0(hlds__status__HeadVar__1_1, hlds__status__V_16_16, hlds__status__V_11_11);
            }
#line 256 "status.m"
          }
#line 256 "status.m"
        else
#line 4681 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 256 "status.m"
      }
#line 256 "status.m"
    else
#line 256 "status.m"
      {
#line 256 "status.m"
        MR_Word hlds__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 256 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4694 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 256 "status.m"
        else
#line 256 "status.m"
          {
#line 256 "status.m"
            MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "status.m"
            MR_Integer hlds__status__V_18_18 = (MR_Integer) hlds__status__V_17_17;
#line 256 "status.m"
            MR_Integer hlds__status__V_19_19 = (MR_Integer) hlds__status__V_5_5;

#line 256 "status.m"
            {
#line 256 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_18_18, hlds__status__V_19_19);
            }
#line 256 "status.m"
          }
#line 256 "status.m"
      }
#line 256 "status.m"
  }
#line 256 "status.m"
}

#line 256 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
#line 256 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 256 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 256 "status.m"
{
#line 256 "status.m"
  {
#line 256 "status.m"
    MR_bool hlds__status__succeeded;
#line 256 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 256 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 256 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 256 "status.m"
    if (hlds__status__succeeded)
#line 256 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 256 "status.m"
    else
#line 256 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 256 "status.m"
      {
#line 256 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "status.m"
        MR_Word hlds__status__V_6_6;

#line 256 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 256 "status.m"
        if (hlds__status__succeeded)
#line 256 "status.m"
          {
#line 256 "status.m"
            hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4764 "hlds.status.c"
            {
#line 4766 "hlds.status.c"
              hlds__status__succeeded = hlds__status____Unify____item_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
            }
#line 256 "status.m"
          }
#line 256 "status.m"
      }
#line 256 "status.m"
    else
#line 256 "status.m"
      {
#line 256 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "status.m"
        MR_Word hlds__status__V_4_4;

#line 256 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 256 "status.m"
        if (hlds__status__succeeded)
#line 256 "status.m"
          {
#line 256 "status.m"
            hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4790 "hlds.status.c"
            hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 256 "status.m"
          }
#line 256 "status.m"
      }
#line 256 "status.m"
    return hlds__status__succeeded;
#line 256 "status.m"
  }
#line 256 "status.m"
}

#line 269 "status.m"
void MR_CALL 
hlds__status____Compare____item_import_0_0(
#line 269 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 269 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 269 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 269 "status.m"
{
#line 269 "status.m"
  {
#line 269 "status.m"
    MR_bool hlds__status__succeeded;
#line 269 "status.m"
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 269 "status.m"
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 269 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
#line 269 "status.m"
    if (hlds__status__succeeded)
#line 4827 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "status.m"
    else
#line 269 "status.m"
#line 269 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 269 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
        case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 269 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
            case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
                case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
                    case (MR_Integer) 0:
#line 269 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "status.m"
                      break;
#line 269 "status.m"
                    case (MR_Integer) 1:
#line 269 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "status.m"
                      break;
#line 269 "status.m"
                  }
#line 269 "status.m"
                  break;
#line 269 "status.m"
                case (MR_Integer) 1:
#line 4875 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "status.m"
                  break;
#line 269 "status.m"
              }
#line 269 "status.m"
              break;
#line 269 "status.m"
            case (MR_Integer) 1:
#line 269 "status.m"
#line 269 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
                case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
                    case (MR_Integer) 0:
#line 269 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "status.m"
                      break;
#line 269 "status.m"
                    case (MR_Integer) 1:
#line 269 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "status.m"
                      break;
#line 269 "status.m"
                  }
#line 269 "status.m"
                  break;
#line 269 "status.m"
                case (MR_Integer) 1:
#line 4915 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 269 "status.m"
                  break;
#line 269 "status.m"
              }
#line 269 "status.m"
              break;
#line 269 "status.m"
          }
#line 269 "status.m"
          break;
#line 269 "status.m"
        case (MR_Integer) 1:
#line 269 "status.m"
          {
#line 269 "status.m"
            MR_Word hlds__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 269 "status.m"
#line 269 "status.m"
            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
              case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 269 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
                  case (MR_Integer) 0:
#line 4948 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "status.m"
                    break;
#line 269 "status.m"
                  case (MR_Integer) 1:
#line 4954 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 269 "status.m"
                    break;
#line 269 "status.m"
                }
#line 269 "status.m"
                break;
#line 269 "status.m"
              case (MR_Integer) 1:
#line 269 "status.m"
                {
#line 269 "status.m"
                  MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "status.m"
                  MR_Integer hlds__status__V_14_14 = (MR_Integer) hlds__status__V_13_13;
#line 269 "status.m"
                  MR_Integer hlds__status__V_15_15 = (MR_Integer) hlds__status__V_5_5;

#line 269 "status.m"
                  {
#line 269 "status.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_14_14, hlds__status__V_15_15);
                  }
#line 269 "status.m"
                }
#line 269 "status.m"
                break;
#line 269 "status.m"
            }
#line 269 "status.m"
          }
#line 269 "status.m"
          break;
#line 269 "status.m"
      }
#line 269 "status.m"
  }
#line 269 "status.m"
}

#line 269 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0(
#line 269 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 269 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 269 "status.m"
{
#line 269 "status.m"
  {
#line 269 "status.m"
    MR_bool hlds__status__succeeded;
#line 269 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 269 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 269 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 269 "status.m"
    if (hlds__status__succeeded)
#line 269 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 269 "status.m"
    else
#line 269 "status.m"
#line 269 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 269 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
        case (MR_Integer) 0:
#line 269 "status.m"
#line 269 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 269 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 269 "status.m"
            case (MR_Integer) 0:
#line 269 "status.m"
              {
#line 269 "status.m"
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 269 "status.m"
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 269 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
#line 269 "status.m"
              }
#line 269 "status.m"
              break;
#line 269 "status.m"
            case (MR_Integer) 1:
#line 269 "status.m"
              {
#line 269 "status.m"
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 269 "status.m"
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 269 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 269 "status.m"
              }
#line 269 "status.m"
              break;
#line 269 "status.m"
          }
#line 269 "status.m"
          break;
#line 269 "status.m"
        case (MR_Integer) 1:
#line 269 "status.m"
          {
#line 269 "status.m"
            MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "status.m"
            MR_Word hlds__status__V_4_4;

#line 269 "status.m"
            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 269 "status.m"
            if (hlds__status__succeeded)
#line 269 "status.m"
              {
#line 269 "status.m"
                hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 5084 "hlds.status.c"
                hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 269 "status.m"
              }
#line 269 "status.m"
          }
#line 269 "status.m"
          break;
#line 269 "status.m"
      }
#line 269 "status.m"
    return hlds__status__succeeded;
#line 269 "status.m"
  }
#line 269 "status.m"
}

#line 264 "status.m"
void MR_CALL 
hlds__status____Compare____item_export_0_0(
#line 264 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 264 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 264 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 264 "status.m"
{
#line 264 "status.m"
  {
#line 264 "status.m"
    MR_bool hlds__status__succeeded;
#line 264 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 264 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 264 "status.m"
    {
#line 264 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
    }
#line 264 "status.m"
  }
#line 264 "status.m"
}

#line 264 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
#line 264 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 264 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 264 "status.m"
{
#line 5140 "hlds.status.c"
  {
#line 5142 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5145 "hlds.status.c"
    return hlds__status__succeeded;
#line 5147 "hlds.status.c"
  }
#line 264 "status.m"
}

#line 98 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0(
#line 98 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 98 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 98 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 98 "status.m"
{
#line 98 "status.m"
  {
#line 98 "status.m"
    MR_bool hlds__status__succeeded;
#line 98 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 98 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 98 "status.m"
    {
#line 98 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
    }
#line 98 "status.m"
  }
#line 98 "status.m"
}

#line 98 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0(
#line 98 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 98 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 98 "status.m"
{
#line 5191 "hlds.status.c"
  {
#line 5193 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5196 "hlds.status.c"
    return hlds__status__succeeded;
#line 5198 "hlds.status.c"
  }
#line 98 "status.m"
}

#line 77 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_import_0_0(
#line 77 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 77 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 77 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 77 "status.m"
{
#line 77 "status.m"
  {
#line 77 "status.m"
    MR_bool hlds__status__succeeded;
#line 77 "status.m"
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 77 "status.m"
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 77 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
#line 77 "status.m"
    if (hlds__status__succeeded)
#line 5227 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "status.m"
    else
#line 77 "status.m"
#line 77 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 77 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
        case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 77 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
            case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
                case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
                    case (MR_Integer) 0:
#line 77 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "status.m"
                      break;
#line 77 "status.m"
                    case (MR_Integer) 1:
#line 77 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "status.m"
                      break;
#line 77 "status.m"
                  }
#line 77 "status.m"
                  break;
#line 77 "status.m"
                case (MR_Integer) 1:
#line 5275 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "status.m"
                  break;
#line 77 "status.m"
              }
#line 77 "status.m"
              break;
#line 77 "status.m"
            case (MR_Integer) 1:
#line 77 "status.m"
#line 77 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
                case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
                    case (MR_Integer) 0:
#line 77 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "status.m"
                      break;
#line 77 "status.m"
                    case (MR_Integer) 1:
#line 77 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "status.m"
                      break;
#line 77 "status.m"
                  }
#line 77 "status.m"
                  break;
#line 77 "status.m"
                case (MR_Integer) 1:
#line 5315 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "status.m"
                  break;
#line 77 "status.m"
              }
#line 77 "status.m"
              break;
#line 77 "status.m"
          }
#line 77 "status.m"
          break;
#line 77 "status.m"
        case (MR_Integer) 1:
#line 77 "status.m"
          {
#line 77 "status.m"
            MR_Word hlds__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "status.m"
#line 77 "status.m"
            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
              case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 77 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
                  case (MR_Integer) 0:
#line 5348 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "status.m"
                    break;
#line 77 "status.m"
                  case (MR_Integer) 1:
#line 5354 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "status.m"
                    break;
#line 77 "status.m"
                }
#line 77 "status.m"
                break;
#line 77 "status.m"
              case (MR_Integer) 1:
#line 77 "status.m"
                {
#line 77 "status.m"
                  MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "status.m"
                  MR_Integer hlds__status__V_14_14 = (MR_Integer) hlds__status__V_13_13;
#line 77 "status.m"
                  MR_Integer hlds__status__V_15_15 = (MR_Integer) hlds__status__V_5_5;

#line 77 "status.m"
                  {
#line 77 "status.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_14_14, hlds__status__V_15_15);
                  }
#line 77 "status.m"
                }
#line 77 "status.m"
                break;
#line 77 "status.m"
            }
#line 77 "status.m"
          }
#line 77 "status.m"
          break;
#line 77 "status.m"
      }
#line 77 "status.m"
  }
#line 77 "status.m"
}

#line 77 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0(
#line 77 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 77 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 77 "status.m"
{
#line 77 "status.m"
  {
#line 77 "status.m"
    MR_bool hlds__status__succeeded;
#line 77 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 77 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 77 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 77 "status.m"
    if (hlds__status__succeeded)
#line 77 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 77 "status.m"
    else
#line 77 "status.m"
#line 77 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 77 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
        case (MR_Integer) 0:
#line 77 "status.m"
#line 77 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 77 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "status.m"
            case (MR_Integer) 0:
#line 77 "status.m"
              {
#line 77 "status.m"
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 77 "status.m"
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 77 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
#line 77 "status.m"
              }
#line 77 "status.m"
              break;
#line 77 "status.m"
            case (MR_Integer) 1:
#line 77 "status.m"
              {
#line 77 "status.m"
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 77 "status.m"
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 77 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 77 "status.m"
              }
#line 77 "status.m"
              break;
#line 77 "status.m"
          }
#line 77 "status.m"
          break;
#line 77 "status.m"
        case (MR_Integer) 1:
#line 77 "status.m"
          {
#line 77 "status.m"
            MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "status.m"
            MR_Word hlds__status__V_4_4;

#line 77 "status.m"
            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "status.m"
            if (hlds__status__succeeded)
#line 77 "status.m"
              {
#line 77 "status.m"
                hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 5484 "hlds.status.c"
                hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 77 "status.m"
              }
#line 77 "status.m"
          }
#line 77 "status.m"
          break;
#line 77 "status.m"
      }
#line 77 "status.m"
    return hlds__status__succeeded;
#line 77 "status.m"
  }
#line 77 "status.m"
}

#line 72 "status.m"
void MR_CALL 
hlds__status____Compare____instmode_export_0_0(
#line 72 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 72 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 72 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 72 "status.m"
{
#line 72 "status.m"
  {
#line 72 "status.m"
    MR_bool hlds__status__succeeded;
#line 72 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 72 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 72 "status.m"
    {
#line 72 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
    }
#line 72 "status.m"
  }
#line 72 "status.m"
}

#line 72 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0(
#line 72 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 72 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 72 "status.m"
{
#line 5540 "hlds.status.c"
  {
#line 5542 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 5545 "hlds.status.c"
    return hlds__status__succeeded;
#line 5547 "hlds.status.c"
  }
#line 72 "status.m"
}

#line 57 "status.m"
void MR_CALL 
hlds__status____Compare____instance_status_0_0(
#line 57 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 57 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 57 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 57 "status.m"
{
#line 57 "status.m"
  {
#line 57 "status.m"
    MR_bool hlds__status__succeeded;
#line 57 "status.m"
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 57 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 57 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 57 "status.m"
    if (hlds__status__succeeded)
#line 5576 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "status.m"
    else
#line 57 "status.m"
      {
#line 57 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 57 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 57 "status.m"
        {
#line 57 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
        }
#line 57 "status.m"
      }
#line 57 "status.m"
  }
#line 57 "status.m"
}

#line 57 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0(
#line 57 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 57 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 57 "status.m"
{
#line 57 "status.m"
  {
#line 57 "status.m"
    MR_bool hlds__status__succeeded;
#line 57 "status.m"
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 57 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 57 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 57 "status.m"
    if (hlds__status__succeeded)
#line 57 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 57 "status.m"
    else
#line 57 "status.m"
      {
#line 57 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 57 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 5632 "hlds.status.c"
        {
#line 5634 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 57 "status.m"
      }
#line 57 "status.m"
    return hlds__status__succeeded;
#line 57 "status.m"
  }
#line 57 "status.m"
}

#line 45 "status.m"
void MR_CALL 
hlds__status____Compare____inst_status_0_0(
#line 45 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 45 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 45 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 45 "status.m"
{
#line 45 "status.m"
  {
#line 45 "status.m"
    MR_bool hlds__status__succeeded;
#line 45 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 45 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 45 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 45 "status.m"
    if (hlds__status__succeeded)
#line 5670 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "status.m"
    else
#line 45 "status.m"
      {
#line 45 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));
#line 45 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 45 "status.m"
        MR_Word hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 1)));
#line 45 "status.m"
        MR_Word hlds__status__V_8_8;

#line 45 "status.m"
        {
#line 45 "status.m"
          hlds__status____Compare____old_import_status_0_0(&hlds__status__V_8_8, hlds__status__V_4_4, hlds__status__V_6_6);
        }
#line 5692 "hlds.status.c"
        hlds__status__succeeded = (hlds__status__V_8_8 == (MR_Integer) 0);
#line 45 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 45 "status.m"
        if (hlds__status__succeeded)
#line 45 "status.m"
          *hlds__status__HeadVar__1_1 = hlds__status__V_8_8;
#line 45 "status.m"
        else
#line 45 "status.m"
          {
#line 45 "status.m"
            hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_5_5, hlds__status__V_7_7);
          }
#line 45 "status.m"
      }
#line 45 "status.m"
  }
#line 45 "status.m"
}

#line 45 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0(
#line 45 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 45 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 45 "status.m"
{
#line 45 "status.m"
  {
#line 45 "status.m"
    MR_bool hlds__status__succeeded;
#line 45 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 45 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 45 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 45 "status.m"
    if (hlds__status__succeeded)
#line 45 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 45 "status.m"
    else
#line 45 "status.m"
      {
#line 45 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 45 "status.m"
        MR_Word hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 1)));
#line 45 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 45 "status.m"
        MR_Word hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 1)));

#line 5751 "hlds.status.c"
        {
#line 5753 "hlds.status.c"
          hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_5_5);
        }
#line 45 "status.m"
        if (hlds__status__succeeded)
#line 5758 "hlds.status.c"
          {
#line 5760 "hlds.status.c"
            hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__V_4_4, hlds__status__V_6_6);
          }
#line 45 "status.m"
      }
#line 45 "status.m"
    return hlds__status__succeeded;
#line 45 "status.m"
  }
#line 45 "status.m"
}

#line 704 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 704 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 704 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 704 "status.m"
  MR_Word * hlds__status__Status_6)
#line 704 "status.m"
{
#line 708 "status.m"
  {
#line 708 "status.m"
    MR_bool hlds__status__succeeded;
#line 708 "status.m"
    MR_Word hlds__status__CombinedStatus_7;

#line 717 "status.m"
#line 717 "status.m"
    switch (MR_tag((MR_Word) hlds__status__StatusA_4)) {
#line 717 "status.m"
      default:
#line 717 "status.m"
        hlds__status__succeeded = MR_FALSE;
#line 717 "status.m"
        break;
#line 717 "status.m"
      case (MR_Integer) 0:
#line 717 "status.m"
#line 717 "status.m"
        switch (MR_unmkbody(hlds__status__StatusA_4)) {
#line 717 "status.m"
          default:
#line 717 "status.m"
            hlds__status__succeeded = MR_FALSE;
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 0:
#line 740 "status.m"
            {
#line 740 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 740 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 1:
#line 796 "status.m"
            {
#line 796 "status.m"
              MR_Word hlds__status__Section_30;

#line 796 "status.m"
              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 796 "status.m"
              if (hlds__status__succeeded)
#line 796 "status.m"
                {
#line 796 "status.m"
                  hlds__status__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusB_5, (MR_Integer) 0)));
#line 797 "status.m"
                  hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 796 "status.m"
                }
#line 796 "status.m"
              else
#line 799 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 796 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 796 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 3:
#line 732 "status.m"
            {
#line 732 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 732 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 732 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 5:
#line 786 "status.m"
            {
#line 786 "status.m"
              hlds__status__succeeded = (hlds__status__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 786 "status.m"
              if (hlds__status__succeeded)
#line 787 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 786 "status.m"
              else
#line 789 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 786 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 786 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 7:
#line 733 "status.m"
            {
#line 733 "status.m"
              MR_Word hlds__status__Status3_20;

#line 773 "status.m"
#line 773 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 773 "status.m"
                default:
#line 773 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 773 "status.m"
                  break;
#line 773 "status.m"
                case (MR_Integer) 0:
#line 773 "status.m"
#line 773 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 773 "status.m"
                    default:
#line 773 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 0:
#line 778 "status.m"
                      {
#line 778 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 778 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 778 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 1:
#line 779 "status.m"
                      {
#line 779 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 779 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 779 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 3:
#line 777 "status.m"
                      {
#line 777 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 777 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 777 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 5:
#line 780 "status.m"
                      {
#line 780 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 780 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 780 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 7:
#line 774 "status.m"
                      {
#line 774 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 774 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 774 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                    case (MR_Integer) 8:
#line 776 "status.m"
                      {
#line 776 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 776 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 776 "status.m"
                      }
#line 773 "status.m"
                      break;
#line 773 "status.m"
                  }
#line 773 "status.m"
                  break;
#line 773 "status.m"
                case (MR_Integer) 2:
#line 775 "status.m"
                  {
#line 775 "status.m"
                    hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 775 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 775 "status.m"
                  }
#line 773 "status.m"
                  break;
#line 773 "status.m"
              }
#line 733 "status.m"
              if (hlds__status__succeeded)
#line 733 "status.m"
                {
#line 735 "status.m"
                  hlds__status__succeeded = (hlds__status__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 735 "status.m"
                  if (hlds__status__succeeded)
#line 736 "status.m"
                    hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 735 "status.m"
                  else
#line 738 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__Status3_20;
#line 735 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 733 "status.m"
                }
#line 733 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
          case (MR_Integer) 8:
#line 773 "status.m"
#line 773 "status.m"
            switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 773 "status.m"
              default:
#line 773 "status.m"
                hlds__status__succeeded = MR_FALSE;
#line 773 "status.m"
                break;
#line 773 "status.m"
              case (MR_Integer) 0:
#line 773 "status.m"
#line 773 "status.m"
                switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 773 "status.m"
                  default:
#line 773 "status.m"
                    hlds__status__succeeded = MR_FALSE;
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 0:
#line 778 "status.m"
                    {
#line 778 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 778 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 778 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 1:
#line 779 "status.m"
                    {
#line 779 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 779 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 779 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 3:
#line 777 "status.m"
                    {
#line 777 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 777 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 777 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 5:
#line 780 "status.m"
                    {
#line 780 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 780 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 780 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 7:
#line 774 "status.m"
                    {
#line 774 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 774 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 774 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                  case (MR_Integer) 8:
#line 776 "status.m"
                    {
#line 776 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 776 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 776 "status.m"
                    }
#line 773 "status.m"
                    break;
#line 773 "status.m"
                }
#line 773 "status.m"
                break;
#line 773 "status.m"
              case (MR_Integer) 2:
#line 775 "status.m"
                {
#line 775 "status.m"
                  hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 775 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 775 "status.m"
                }
#line 773 "status.m"
                break;
#line 773 "status.m"
            }
#line 717 "status.m"
            break;
#line 717 "status.m"
        }
#line 717 "status.m"
        break;
#line 717 "status.m"
      case (MR_Integer) 2:
#line 717 "status.m"
        {
#line 717 "status.m"
          MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusA_4, (MR_Integer) 0)));

#line 725 "status.m"
#line 725 "status.m"
          switch (hlds__status__ImportLocn_11) {
#line 725 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 725 "status.m"
            case (MR_Integer) 3:
#line 726 "status.m"
              {
#line 728 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[0]);
#line 726 "status.m"
                hlds__status__succeeded = MR_TRUE;
#line 726 "status.m"
              }
#line 725 "status.m"
              break;
#line 725 "status.m"
            case (MR_Integer) 0:
#line 725 "status.m"
            case (MR_Integer) 2:
#line 725 "status.m"
            case (MR_Integer) 1:
#line 751 "status.m"
#line 751 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 751 "status.m"
                default:
#line 751 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 751 "status.m"
                  break;
#line 751 "status.m"
                case (MR_Integer) 0:
#line 751 "status.m"
#line 751 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 751 "status.m"
                    default:
#line 751 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 751 "status.m"
                      break;
#line 751 "status.m"
                    case (MR_Integer) 0:
#line 761 "status.m"
                      {
#line 761 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 761 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 761 "status.m"
                      }
#line 751 "status.m"
                      break;
#line 751 "status.m"
                    case (MR_Integer) 1:
#line 763 "status.m"
                      {
#line 764 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[1]);
#line 763 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 763 "status.m"
                      }
#line 751 "status.m"
                      break;
#line 751 "status.m"
                    case (MR_Integer) 3:
#line 758 "status.m"
                      {
#line 758 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 758 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 758 "status.m"
                      }
#line 751 "status.m"
                      break;
#line 751 "status.m"
                    case (MR_Integer) 5:
#line 767 "status.m"
                      {
#line 767 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 767 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 767 "status.m"
                      }
#line 751 "status.m"
                      break;
#line 751 "status.m"
                    case (MR_Integer) 8:
#line 754 "status.m"
                      {
#line 755 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[2]);
#line 754 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 754 "status.m"
                      }
#line 751 "status.m"
                      break;
#line 751 "status.m"
                  }
#line 751 "status.m"
                  break;
#line 751 "status.m"
                case (MR_Integer) 2:
#line 752 "status.m"
                  {
#line 752 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 752 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 752 "status.m"
                  }
#line 751 "status.m"
                  break;
#line 751 "status.m"
              }
#line 725 "status.m"
              break;
#line 725 "status.m"
          }
#line 717 "status.m"
        }
#line 717 "status.m"
        break;
#line 717 "status.m"
    }
#line 708 "status.m"
    if (hlds__status__succeeded)
#line 709 "status.m"
      *hlds__status__Status_6 = hlds__status__CombinedStatus_7;
#line 708 "status.m"
    else
#line 711 "status.m"
      {
#line 711 "status.m"
        {
#line 711 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.old_combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 711 "status.m"
          return;
        }
#line 711 "status.m"
      }
#line 708 "status.m"
  }
#line 704 "status.m"
}

#line 619 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 619 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 619 "status.m"
{
#line 621 "status.m"
  while (MR_TRUE)
#line 621 "status.m"
    {
#line 621 "status.m"
      /* tailcall optimized into a loop */
#line 621 "status.m"
      {
#line 621 "status.m"
        MR_bool hlds__status__succeeded;
#line 621 "status.m"
        MR_Word hlds__status__HeadVar__2_2;

#line 621 "status.m"
#line 621 "status.m"
        switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 621 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 621 "status.m"
          case (MR_Integer) 0:
#line 621 "status.m"
#line 621 "status.m"
            switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 621 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 621 "status.m"
              case (MR_Integer) 0:
#line 624 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 1:
#line 625 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 2:
#line 626 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 3:
#line 627 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 4:
#line 628 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 5:
#line 621 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 6:
#line 629 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 7:
#line 622 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 621 "status.m"
                break;
#line 621 "status.m"
              case (MR_Integer) 8:
#line 623 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 621 "status.m"
                break;
#line 621 "status.m"
            }
#line 621 "status.m"
            break;
#line 621 "status.m"
          case (MR_Integer) 1:
#line 630 "status.m"
            {
#line 630 "status.m"
              MR_Word hlds__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 631 "status.m"
              /* direct tailcall eliminated */
#line 631 "status.m"
              {
#line 631 "status.m"
                MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__Status_3;

#line 631 "status.m"
                hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 631 "status.m"
              }
#line 631 "status.m"
              continue;
#line 630 "status.m"
            }
#line 621 "status.m"
            break;
#line 621 "status.m"
          case (MR_Integer) 2:
#line 632 "status.m"
            {
#line 632 "status.m"
              MR_Word hlds__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 638 "status.m"
              hlds__status__HeadVar__2_2 = ((&hlds__status_vector_common_1[0 + hlds__status__ImportLocn_4]))->hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 632 "status.m"
            }
#line 621 "status.m"
            break;
#line 621 "status.m"
        }
#line 621 "status.m"
        return hlds__status__HeadVar__2_2;
#line 621 "status.m"
      }
#line 621 "status.m"
      break;
#line 621 "status.m"
    }
#line 619 "status.m"
}

#line 295 "status.m"
static void MR_CALL 
hlds__status__valid_old_status_for_inst_or_mode_2_p_0(
#line 295 "status.m"
  MR_Word hlds__status__OldStatus0_3,
#line 295 "status.m"
  MR_Word * hlds__status__OldStatus_4)
#line 295 "status.m"
{
#line 305 "status.m"
  {
#line 305 "status.m"
    MR_bool hlds__status__succeeded;

#line 305 "status.m"
#line 305 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus0_3)) {
#line 305 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 305 "status.m"
      case (MR_Integer) 0:
#line 305 "status.m"
#line 305 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus0_3)) {
#line 305 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 305 "status.m"
          case (MR_Integer) 0:
#line 305 "status.m"
          case (MR_Integer) 1:
#line 305 "status.m"
          case (MR_Integer) 3:
#line 305 "status.m"
          case (MR_Integer) 7:
#line 305 "status.m"
          case (MR_Integer) 8:
#line 306 "status.m"
            *hlds__status__OldStatus_4 = hlds__status__OldStatus0_3;
#line 305 "status.m"
            break;
#line 305 "status.m"
          case (MR_Integer) 2:
#line 320 "status.m"
            {
#line 321 "status.m"
              {
#line 321 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_pseudo_imported");
#line 321 "status.m"
                return;
              }
#line 320 "status.m"
            }
#line 305 "status.m"
            break;
#line 305 "status.m"
          case (MR_Integer) 4:
#line 326 "status.m"
            {
#line 327 "status.m"
              {
#line 327 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_opt_exported");
#line 327 "status.m"
                return;
              }
#line 326 "status.m"
            }
#line 305 "status.m"
            break;
#line 305 "status.m"
          case (MR_Integer) 5:
#line 329 "status.m"
            {
#line 330 "status.m"
              {
#line 330 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_abstract_exported");
#line 330 "status.m"
                return;
              }
#line 329 "status.m"
            }
#line 305 "status.m"
            break;
#line 305 "status.m"
          case (MR_Integer) 6:
#line 323 "status.m"
            {
#line 324 "status.m"
              {
#line 324 "status.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_pseudo_exported");
#line 324 "status.m"
                return;
              }
#line 323 "status.m"
            }
#line 305 "status.m"
            break;
#line 305 "status.m"
        }
#line 305 "status.m"
        break;
#line 305 "status.m"
      case (MR_Integer) 1:
#line 332 "status.m"
        {
#line 333 "status.m"
          {
#line 333 "status.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "status_external");
#line 333 "status.m"
            return;
          }
#line 332 "status.m"
        }
#line 305 "status.m"
        break;
#line 305 "status.m"
      case (MR_Integer) 2:
#line 308 "status.m"
        {
#line 308 "status.m"
          MR_Word hlds__status__Locn_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__OldStatus0_3, (MR_Integer) 0)));

#line 315 "status.m"
#line 315 "status.m"
          switch (hlds__status__Locn_5) {
#line 315 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 315 "status.m"
            case (MR_Integer) 3:
#line 315 "status.m"
            case (MR_Integer) 0:
#line 315 "status.m"
            case (MR_Integer) 1:
#line 314 "status.m"
              *hlds__status__OldStatus_4 = hlds__status__OldStatus0_3;
#line 315 "status.m"
              break;
#line 315 "status.m"
            case (MR_Integer) 2:
#line 316 "status.m"
              {
#line 317 "status.m"
                {
#line 317 "status.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.valid_old_status_for_inst_or_mode\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 317 "status.m"
                  return;
                }
#line 316 "status.m"
              }
#line 315 "status.m"
              break;
#line 315 "status.m"
          }
#line 308 "status.m"
        }
#line 305 "status.m"
        break;
#line 305 "status.m"
    }
#line 305 "status.m"
  }
#line 295 "status.m"
}

#line 284 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
#line 284 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 284 "status.m"
  MR_Word * hlds__status__PredStatus_4)
#line 284 "status.m"
{
#line 833 "status.m"
  {
#line 833 "status.m"
    MR_bool hlds__status__succeeded;
#line 833 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 836 "status.m"
    *hlds__status__PredStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 833 "status.m"
  }
#line 284 "status.m"
}

#line 282 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
#line 282 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 282 "status.m"
  MR_Word * hlds__status__InstanceStatus_4)
#line 282 "status.m"
{
#line 828 "status.m"
  {
#line 828 "status.m"
    MR_bool hlds__status__succeeded;
#line 828 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 831 "status.m"
    *hlds__status__InstanceStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 828 "status.m"
  }
#line 282 "status.m"
}

#line 280 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
#line 280 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 280 "status.m"
  MR_Word * hlds__status__TypeClassStatus_4)
#line 280 "status.m"
{
#line 823 "status.m"
  {
#line 823 "status.m"
    MR_bool hlds__status__succeeded;
#line 823 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 826 "status.m"
    *hlds__status__TypeClassStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 823 "status.m"
  }
#line 280 "status.m"
}

#line 278 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
#line 278 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 278 "status.m"
  MR_Word * hlds__status__ModeStatus_4)
#line 278 "status.m"
{
#line 816 "status.m"
  {
#line 816 "status.m"
    MR_bool hlds__status__succeeded;
#line 816 "status.m"
    MR_Word hlds__status__OldImportStatus0_5;
#line 816 "status.m"
    MR_Word hlds__status__OldImportStatus_6;
#line 816 "status.m"
    MR_Word hlds__status__InstModeStatus_7;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_11)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_11)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_11, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus0_5, 0) = ((MR_Box) (hlds__status__ImportLocn_12));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_10) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 819 "status.m"
    {
#line 819 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldImportStatus0_5, &hlds__status__OldImportStatus_6);
    }
#line 843 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 856 "status.m"
      {
#line 856 "status.m"
        MR_Word hlds__status__ItemImport_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 856 "status.m"
        MR_Word hlds__status__InstImport_20;

#line 873 "status.m"
#line 873 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_17)) {
#line 873 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 873 "status.m"
          case (MR_Integer) 0:
#line 873 "status.m"
#line 873 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_17)) {
#line 873 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 873 "status.m"
              case (MR_Integer) 0:
#line 875 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "status.m"
                break;
#line 873 "status.m"
              case (MR_Integer) 1:
#line 878 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 873 "status.m"
                break;
#line 873 "status.m"
            }
#line 873 "status.m"
            break;
#line 873 "status.m"
          case (MR_Integer) 1:
#line 858 "status.m"
            {
#line 858 "status.m"
              MR_Word hlds__status__ImportLocn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_17, (MR_Integer) 0)));
#line 858 "status.m"
              MR_Word hlds__status__InstImportLocn_19;

#line 862 "status.m"
#line 862 "status.m"
              switch (hlds__status__ImportLocn_18) {
#line 862 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 862 "status.m"
                case (MR_Integer) 3:
#line 870 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 2;
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 0:
#line 861 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 0;
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 2:
#line 866 "status.m"
                  {
#line 867 "status.m"
                    {
#line 867 "status.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 867 "status.m"
                      return;
                    }
#line 866 "status.m"
                  }
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 1:
#line 864 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 1;
#line 862 "status.m"
                  break;
#line 862 "status.m"
              }
#line 872 "status.m"
              {
#line 872 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "status.m"
                MR_hl_field(MR_mktag(1), hlds__status__InstImport_20, 0) = ((MR_Box) (hlds__status__InstImportLocn_19));
#line 872 "status.m"
              }
#line 858 "status.m"
            }
#line 873 "status.m"
            break;
#line 873 "status.m"
        }
#line 880 "status.m"
        {
#line 880 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "status.m"
          MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstImport_20));
#line 880 "status.m"
        }
#line 856 "status.m"
      }
#line 843 "status.m"
    else
#line 843 "status.m"
      {
#line 843 "status.m"
        MR_Word hlds__status__ItemExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 843 "status.m"
        MR_Word hlds__status__InstExport_16;

#line 847 "status.m"
#line 847 "status.m"
        switch (hlds__status__ItemExport_15) {
#line 847 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 847 "status.m"
          case (MR_Integer) 2:
#line 852 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 2;
#line 847 "status.m"
            break;
#line 847 "status.m"
          case (MR_Integer) 0:
#line 846 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 0;
#line 847 "status.m"
            break;
#line 847 "status.m"
          case (MR_Integer) 1:
#line 849 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 1;
#line 847 "status.m"
            break;
#line 847 "status.m"
        }
#line 854 "status.m"
        {
#line 854 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 854 "status.m"
          MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstExport_16));
#line 854 "status.m"
        }
#line 843 "status.m"
      }
#line 821 "status.m"
    {
#line 821 "status.m"
      MR_Word base;
#line 821 "status.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "status.m"
      *hlds__status__ModeStatus_4 = base;
#line 821 "status.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__status__OldImportStatus_6));
#line 821 "status.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__status__InstModeStatus_7));
#line 821 "status.m"
    }
#line 816 "status.m"
  }
#line 278 "status.m"
}

#line 276 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
#line 276 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 276 "status.m"
  MR_Word * hlds__status__InstStatus_4)
#line 276 "status.m"
{
#line 809 "status.m"
  {
#line 809 "status.m"
    MR_bool hlds__status__succeeded;
#line 809 "status.m"
    MR_Word hlds__status__OldImportStatus0_5;
#line 809 "status.m"
    MR_Word hlds__status__OldImportStatus_6;
#line 809 "status.m"
    MR_Word hlds__status__InstModeStatus_7;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_11)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_11)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_11, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus0_5, 0) = ((MR_Box) (hlds__status__ImportLocn_12));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_10) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus0_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 812 "status.m"
    {
#line 812 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldImportStatus0_5, &hlds__status__OldImportStatus_6);
    }
#line 843 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 856 "status.m"
      {
#line 856 "status.m"
        MR_Word hlds__status__ItemImport_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 856 "status.m"
        MR_Word hlds__status__InstImport_20;

#line 873 "status.m"
#line 873 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_17)) {
#line 873 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 873 "status.m"
          case (MR_Integer) 0:
#line 873 "status.m"
#line 873 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_17)) {
#line 873 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 873 "status.m"
              case (MR_Integer) 0:
#line 875 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "status.m"
                break;
#line 873 "status.m"
              case (MR_Integer) 1:
#line 878 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 873 "status.m"
                break;
#line 873 "status.m"
            }
#line 873 "status.m"
            break;
#line 873 "status.m"
          case (MR_Integer) 1:
#line 858 "status.m"
            {
#line 858 "status.m"
              MR_Word hlds__status__ImportLocn_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_17, (MR_Integer) 0)));
#line 858 "status.m"
              MR_Word hlds__status__InstImportLocn_19;

#line 862 "status.m"
#line 862 "status.m"
              switch (hlds__status__ImportLocn_18) {
#line 862 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 862 "status.m"
                case (MR_Integer) 3:
#line 870 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 2;
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 0:
#line 861 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 0;
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 2:
#line 866 "status.m"
                  {
#line 867 "status.m"
                    {
#line 867 "status.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
#line 867 "status.m"
                      return;
                    }
#line 866 "status.m"
                  }
#line 862 "status.m"
                  break;
#line 862 "status.m"
                case (MR_Integer) 1:
#line 864 "status.m"
                  hlds__status__InstImportLocn_19 = (MR_Integer) 1;
#line 862 "status.m"
                  break;
#line 862 "status.m"
              }
#line 872 "status.m"
              {
#line 872 "status.m"
                hlds__status__InstImport_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "status.m"
                MR_hl_field(MR_mktag(1), hlds__status__InstImport_20, 0) = ((MR_Box) (hlds__status__InstImportLocn_19));
#line 872 "status.m"
              }
#line 858 "status.m"
            }
#line 873 "status.m"
            break;
#line 873 "status.m"
        }
#line 880 "status.m"
        {
#line 880 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "status.m"
          MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstImport_20));
#line 880 "status.m"
        }
#line 856 "status.m"
      }
#line 843 "status.m"
    else
#line 843 "status.m"
      {
#line 843 "status.m"
        MR_Word hlds__status__ItemExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
#line 843 "status.m"
        MR_Word hlds__status__InstExport_16;

#line 847 "status.m"
#line 847 "status.m"
        switch (hlds__status__ItemExport_15) {
#line 847 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 847 "status.m"
          case (MR_Integer) 2:
#line 852 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 2;
#line 847 "status.m"
            break;
#line 847 "status.m"
          case (MR_Integer) 0:
#line 846 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 0;
#line 847 "status.m"
            break;
#line 847 "status.m"
          case (MR_Integer) 1:
#line 849 "status.m"
            hlds__status__InstExport_16 = (MR_Integer) 1;
#line 847 "status.m"
            break;
#line 847 "status.m"
        }
#line 854 "status.m"
        {
#line 854 "status.m"
          hlds__status__InstModeStatus_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 854 "status.m"
          MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_7, 0) = ((MR_Box) (hlds__status__InstExport_16));
#line 854 "status.m"
        }
#line 843 "status.m"
      }
#line 814 "status.m"
    {
#line 814 "status.m"
      MR_Word base;
#line 814 "status.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "status.m"
      *hlds__status__InstStatus_4 = base;
#line 814 "status.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__status__OldImportStatus_6));
#line 814 "status.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__status__InstModeStatus_7));
#line 814 "status.m"
    }
#line 809 "status.m"
  }
#line 276 "status.m"
}

#line 274 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
#line 274 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 274 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 274 "status.m"
{
#line 804 "status.m"
  {
#line 804 "status.m"
    MR_bool hlds__status__succeeded;
#line 804 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 888 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 900 "status.m"
      {
#line 900 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 904 "status.m"
#line 904 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 904 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
          case (MR_Integer) 0:
#line 904 "status.m"
#line 904 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 904 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "status.m"
              case (MR_Integer) 0:
#line 906 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 904 "status.m"
                break;
#line 904 "status.m"
              case (MR_Integer) 1:
#line 909 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 904 "status.m"
                break;
#line 904 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
          case (MR_Integer) 1:
#line 902 "status.m"
            {
#line 902 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 903 "status.m"
              {
#line 903 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 903 "status.m"
              }
#line 902 "status.m"
            }
#line 904 "status.m"
            break;
#line 904 "status.m"
        }
#line 900 "status.m"
      }
#line 888 "status.m"
    else
#line 888 "status.m"
      {
#line 888 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 892 "status.m"
#line 892 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 892 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 892 "status.m"
          case (MR_Integer) 2:
#line 897 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 0:
#line 891 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 892 "status.m"
            break;
#line 892 "status.m"
          case (MR_Integer) 1:
#line 894 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 892 "status.m"
            break;
#line 892 "status.m"
        }
#line 888 "status.m"
      }
#line 807 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 804 "status.m"
  }
#line 274 "status.m"
}

#line 251 "status.m"
void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
#line 251 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 251 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 251 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 251 "status.m"
{
#line 701 "status.m"
  {
#line 701 "status.m"
    MR_bool hlds__status__succeeded;
#line 701 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 701 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 701 "status.m"
    MR_Word hlds__status__Status_6;

#line 702 "status.m"
    {
#line 702 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 701 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 701 "status.m"
  }
#line 251 "status.m"
}

#line 249 "status.m"
void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
#line 249 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 249 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 249 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 249 "status.m"
{
#line 698 "status.m"
  {
#line 698 "status.m"
    MR_bool hlds__status__succeeded;
#line 698 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 698 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 698 "status.m"
    MR_Word hlds__status__Status_6;

#line 699 "status.m"
    {
#line 699 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 698 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 698 "status.m"
  }
#line 249 "status.m"
}

#line 247 "status.m"
void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
#line 247 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 247 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 247 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 247 "status.m"
{
#line 695 "status.m"
  {
#line 695 "status.m"
    MR_bool hlds__status__succeeded;
#line 695 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 695 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 695 "status.m"
    MR_Word hlds__status__Status_6;

#line 696 "status.m"
    {
#line 696 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 695 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 695 "status.m"
  }
#line 247 "status.m"
}

#line 245 "status.m"
void MR_CALL 
hlds__status__type_combine_status_3_p_0(
#line 245 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 245 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 245 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 245 "status.m"
{
#line 692 "status.m"
  {
#line 692 "status.m"
    MR_bool hlds__status__succeeded;
#line 692 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 692 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 692 "status.m"
    MR_Word hlds__status__Status_6;

#line 693 "status.m"
    {
#line 693 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 692 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 692 "status.m"
  }
#line 245 "status.m"
}

#line 240 "status.m"
void MR_CALL 
hlds__status__instance_make_status_abstract_2_p_0(
#line 240 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 240 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 240 "status.m"
{
#line 674 "status.m"
  {
#line 674 "status.m"
    MR_bool hlds__status__succeeded;
#line 674 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 674 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 681 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 681 "status.m"
    if (hlds__status__succeeded)
#line 682 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 681 "status.m"
    else
#line 683 "status.m"
      {
#line 683 "status.m"
        MR_Word hlds__status__V_7_7;

#line 683 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 683 "status.m"
        if (hlds__status__succeeded)
#line 683 "status.m"
          {
#line 683 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 684 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 683 "status.m"
          }
#line 683 "status.m"
        else
#line 686 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 683 "status.m"
      }
#line 674 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 674 "status.m"
  }
#line 240 "status.m"
}

#line 238 "status.m"
void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
#line 238 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 238 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 238 "status.m"
{
#line 671 "status.m"
  {
#line 671 "status.m"
    MR_bool hlds__status__succeeded;
#line 671 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 671 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 681 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 681 "status.m"
    if (hlds__status__succeeded)
#line 682 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 681 "status.m"
    else
#line 683 "status.m"
      {
#line 683 "status.m"
        MR_Word hlds__status__V_7_7;

#line 683 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 683 "status.m"
        if (hlds__status__succeeded)
#line 683 "status.m"
          {
#line 683 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 684 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 683 "status.m"
          }
#line 683 "status.m"
        else
#line 686 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 683 "status.m"
      }
#line 671 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 671 "status.m"
  }
#line 238 "status.m"
}

#line 237 "status.m"
void MR_CALL 
hlds__status__pred_make_status_abstract_2_p_0(
#line 237 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 237 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 237 "status.m"
{
#line 668 "status.m"
  {
#line 668 "status.m"
    MR_bool hlds__status__succeeded;
#line 668 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 668 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 681 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 681 "status.m"
    if (hlds__status__succeeded)
#line 682 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 681 "status.m"
    else
#line 683 "status.m"
      {
#line 683 "status.m"
        MR_Word hlds__status__V_7_7;

#line 683 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 683 "status.m"
        if (hlds__status__succeeded)
#line 683 "status.m"
          {
#line 683 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 684 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 683 "status.m"
          }
#line 683 "status.m"
        else
#line 686 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 683 "status.m"
      }
#line 668 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 668 "status.m"
  }
#line 237 "status.m"
}

#line 236 "status.m"
void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
#line 236 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 236 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 236 "status.m"
{
#line 666 "status.m"
  {
#line 666 "status.m"
    MR_bool hlds__status__succeeded;
#line 666 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 666 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 681 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 681 "status.m"
    if (hlds__status__succeeded)
#line 682 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 681 "status.m"
    else
#line 683 "status.m"
      {
#line 683 "status.m"
        MR_Word hlds__status__V_7_7;

#line 683 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 683 "status.m"
        if (hlds__status__succeeded)
#line 683 "status.m"
          {
#line 683 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 684 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 683 "status.m"
          }
#line 683 "status.m"
        else
#line 686 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 683 "status.m"
      }
#line 666 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 666 "status.m"
  }
#line 236 "status.m"
}

#line 232 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
#line 232 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 232 "status.m"
{
#line 616 "status.m"
  {
#line 616 "status.m"
    MR_bool hlds__status__succeeded;
#line 616 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 616 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 617 "status.m"
    {
#line 617 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 616 "status.m"
    return hlds__status__HeadVar__2_2;
#line 616 "status.m"
  }
#line 232 "status.m"
}

#line 231 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
#line 231 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 231 "status.m"
{
#line 614 "status.m"
  {
#line 614 "status.m"
    MR_bool hlds__status__succeeded;
#line 614 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 614 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 615 "status.m"
    {
#line 615 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 614 "status.m"
    return hlds__status__HeadVar__2_2;
#line 614 "status.m"
  }
#line 231 "status.m"
}

#line 230 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
#line 230 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 230 "status.m"
{
#line 612 "status.m"
  {
#line 612 "status.m"
    MR_bool hlds__status__succeeded;
#line 612 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 612 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 613 "status.m"
    {
#line 613 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 612 "status.m"
    return hlds__status__HeadVar__2_2;
#line 612 "status.m"
  }
#line 230 "status.m"
}

#line 229 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
#line 229 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 229 "status.m"
{
#line 600 "status.m"
  {
#line 600 "status.m"
    MR_bool hlds__status__succeeded;
#line 600 "status.m"
    MR_Word hlds__status__IsDefnImplSection_4;
#line 600 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 600 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 600 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 600 "status.m"
    MR_Word hlds__status__OldIsDefnImplSection_8;
#line 600 "status.m"
    MR_Word hlds__status__NewIsDefnImplSection_9;

#line 602 "status.m"
    {
#line 602 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 603 "status.m"
    {
#line 603 "status.m"
      hlds__status__OldIsDefnImplSection_8 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_7);
    }
#line 649 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 661 "status.m"
      hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 649 "status.m"
    else
#line 649 "status.m"
      {
#line 649 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 655 "status.m"
#line 655 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 655 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 655 "status.m"
          case (MR_Integer) 2:
#line 657 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 655 "status.m"
            break;
#line 655 "status.m"
          case (MR_Integer) 0:
#line 655 "status.m"
          case (MR_Integer) 1:
#line 654 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 1;
#line 655 "status.m"
            break;
#line 655 "status.m"
        }
#line 649 "status.m"
      }
#line 606 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnImplSection_8 == hlds__status__NewIsDefnImplSection_9);
#line 606 "status.m"
    if (hlds__status__succeeded)
#line 607 "status.m"
      hlds__status__IsDefnImplSection_4 = hlds__status__NewIsDefnImplSection_9;
#line 606 "status.m"
    else
#line 609 "status.m"
      {
#line 609 "status.m"
        {
#line 609 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_defined_in_impl_section\'/1", (MR_String) "mismatch");
        }
#line 609 "status.m"
      }
#line 600 "status.m"
    return hlds__status__IsDefnImplSection_4;
#line 600 "status.m"
  }
#line 229 "status.m"
}

#line 228 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
#line 228 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 228 "status.m"
{
#line 588 "status.m"
  {
#line 588 "status.m"
    MR_bool hlds__status__succeeded;
#line 588 "status.m"
    MR_Word hlds__status__IsDefnImplSection_4;
#line 588 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 588 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 588 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 588 "status.m"
    MR_Word hlds__status__OldIsDefnImplSection_8;
#line 588 "status.m"
    MR_Word hlds__status__NewIsDefnImplSection_9;

#line 590 "status.m"
    {
#line 590 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 591 "status.m"
    {
#line 591 "status.m"
      hlds__status__OldIsDefnImplSection_8 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_7);
    }
#line 649 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 661 "status.m"
      hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 649 "status.m"
    else
#line 649 "status.m"
      {
#line 649 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 655 "status.m"
#line 655 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 655 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 655 "status.m"
          case (MR_Integer) 2:
#line 657 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 0;
#line 655 "status.m"
            break;
#line 655 "status.m"
          case (MR_Integer) 0:
#line 655 "status.m"
          case (MR_Integer) 1:
#line 654 "status.m"
            hlds__status__NewIsDefnImplSection_9 = (MR_Integer) 1;
#line 655 "status.m"
            break;
#line 655 "status.m"
        }
#line 649 "status.m"
      }
#line 594 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnImplSection_8 == hlds__status__NewIsDefnImplSection_9);
#line 594 "status.m"
    if (hlds__status__succeeded)
#line 595 "status.m"
      hlds__status__IsDefnImplSection_4 = hlds__status__NewIsDefnImplSection_9;
#line 594 "status.m"
    else
#line 597 "status.m"
      {
#line 597 "status.m"
        {
#line 597 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_defined_in_impl_section\'/1", (MR_String) "mismatch");
        }
#line 597 "status.m"
      }
#line 588 "status.m"
    return hlds__status__IsDefnImplSection_4;
#line 588 "status.m"
  }
#line 228 "status.m"
}

#line 227 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
#line 227 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 227 "status.m"
{
#line 585 "status.m"
  {
#line 585 "status.m"
    MR_bool hlds__status__succeeded;
#line 585 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 585 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 586 "status.m"
    {
#line 586 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 585 "status.m"
    return hlds__status__HeadVar__2_2;
#line 585 "status.m"
  }
#line 227 "status.m"
}

#line 222 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
#line 222 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 222 "status.m"
{
#line 566 "status.m"
  {
#line 566 "status.m"
    MR_bool hlds__status__succeeded;
#line 566 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 566 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 566 "status.m"
    return hlds__status__HeadVar__2_2;
#line 566 "status.m"
  }
#line 222 "status.m"
}

#line 221 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
#line 221 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 221 "status.m"
{
#line 564 "status.m"
  {
#line 564 "status.m"
    MR_bool hlds__status__succeeded;
#line 564 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 564 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 564 "status.m"
    return hlds__status__HeadVar__2_2;
#line 564 "status.m"
  }
#line 221 "status.m"
}

#line 220 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
#line 220 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 220 "status.m"
{
#line 562 "status.m"
  {
#line 562 "status.m"
    MR_bool hlds__status__succeeded;
#line 562 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 562 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 562 "status.m"
    return hlds__status__HeadVar__2_2;
#line 562 "status.m"
  }
#line 220 "status.m"
}

#line 219 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
#line 219 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 219 "status.m"
{
#line 545 "status.m"
  {
#line 545 "status.m"
    MR_bool hlds__status__succeeded;
#line 545 "status.m"
    MR_Word hlds__status__IsDefnThisModule_4;
#line 545 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 545 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 545 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 545 "status.m"
    MR_Word hlds__status__OldIsDefnThisModule_8;
#line 545 "status.m"
    MR_Word hlds__status__NewIsDefnThisModule_10;

#line 547 "status.m"
    {
#line 547 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 552 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 554 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 0;
#line 552 "status.m"
    else
#line 551 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 1;
#line 556 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnThisModule_8 == hlds__status__NewIsDefnThisModule_10);
#line 556 "status.m"
    if (hlds__status__succeeded)
#line 557 "status.m"
      hlds__status__IsDefnThisModule_4 = hlds__status__NewIsDefnThisModule_10;
#line 556 "status.m"
    else
#line 559 "status.m"
      {
#line 559 "status.m"
        {
#line 559 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_defined_in_this_module\'/1", (MR_String) "mismatch");
        }
#line 559 "status.m"
      }
#line 545 "status.m"
    return hlds__status__IsDefnThisModule_4;
#line 545 "status.m"
  }
#line 219 "status.m"
}

#line 218 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
#line 218 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 218 "status.m"
{
#line 528 "status.m"
  {
#line 528 "status.m"
    MR_bool hlds__status__succeeded;
#line 528 "status.m"
    MR_Word hlds__status__IsDefnThisModule_4;
#line 528 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 528 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 528 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 528 "status.m"
    MR_Word hlds__status__OldIsDefnThisModule_8;
#line 528 "status.m"
    MR_Word hlds__status__NewIsDefnThisModule_10;

#line 530 "status.m"
    {
#line 530 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__OldIsDefnThisModule_8 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 535 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 537 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 0;
#line 535 "status.m"
    else
#line 534 "status.m"
      hlds__status__NewIsDefnThisModule_10 = (MR_Integer) 1;
#line 539 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsDefnThisModule_8 == hlds__status__NewIsDefnThisModule_10);
#line 539 "status.m"
    if (hlds__status__succeeded)
#line 540 "status.m"
      hlds__status__IsDefnThisModule_4 = hlds__status__NewIsDefnThisModule_10;
#line 539 "status.m"
    else
#line 542 "status.m"
      {
#line 542 "status.m"
        {
#line 542 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_defined_in_this_module\'/1", (MR_String) "mismatch");
        }
#line 542 "status.m"
      }
#line 528 "status.m"
    return hlds__status__IsDefnThisModule_4;
#line 528 "status.m"
  }
#line 218 "status.m"
}

#line 217 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
#line 217 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 217 "status.m"
{
#line 525 "status.m"
  {
#line 525 "status.m"
    MR_bool hlds__status__succeeded;
#line 525 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 525 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 525 "status.m"
    return hlds__status__HeadVar__2_2;
#line 525 "status.m"
  }
#line 217 "status.m"
}

#line 210 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
#line 210 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 210 "status.m"
{
#line 515 "status.m"
  {
#line 515 "status.m"
    MR_bool hlds__status__succeeded;
#line 515 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 515 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 515 "status.m"
    MR_Word hlds__status__V_5_5;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 515 "status.m"
    return hlds__status__HeadVar__2_2;
#line 515 "status.m"
  }
#line 210 "status.m"
}

#line 209 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
#line 209 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 209 "status.m"
{
#line 513 "status.m"
  {
#line 513 "status.m"
    MR_bool hlds__status__succeeded;
#line 513 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 513 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 513 "status.m"
    MR_Word hlds__status__V_5_5;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 513 "status.m"
    return hlds__status__HeadVar__2_2;
#line 513 "status.m"
  }
#line 209 "status.m"
}

#line 208 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
#line 208 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 208 "status.m"
{
#line 511 "status.m"
  {
#line 511 "status.m"
    MR_bool hlds__status__succeeded;
#line 511 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 511 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 511 "status.m"
    MR_Word hlds__status__V_5_5;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 511 "status.m"
    return hlds__status__HeadVar__2_2;
#line 511 "status.m"
  }
#line 208 "status.m"
}

#line 207 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
#line 207 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 207 "status.m"
{
#line 494 "status.m"
  {
#line 494 "status.m"
    MR_bool hlds__status__succeeded;
#line 494 "status.m"
    MR_Word hlds__status__IsImported_4;
#line 494 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 494 "status.m"
    MR_Word hlds__status__InstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 494 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 494 "status.m"
    MR_Word hlds__status__OldIsImported_8;
#line 494 "status.m"
    MR_Word hlds__status__NewIsImported_10;
#line 494 "status.m"
    MR_Word hlds__status__V_16_16;

#line 496 "status.m"
    {
#line 496 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__OldIsImported_8 = mercury__bool__not_1_f_0(hlds__status__V_16_16);
    }
#line 501 "status.m"
    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 503 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 1;
#line 501 "status.m"
    else
#line 500 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 0;
#line 505 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsImported_8 == hlds__status__NewIsImported_10);
#line 505 "status.m"
    if (hlds__status__succeeded)
#line 506 "status.m"
      hlds__status__IsImported_4 = hlds__status__NewIsImported_10;
#line 505 "status.m"
    else
#line 508 "status.m"
      {
#line 508 "status.m"
        {
#line 508 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_imported\'/1", (MR_String) "mismatch");
        }
#line 508 "status.m"
      }
#line 494 "status.m"
    return hlds__status__IsImported_4;
#line 494 "status.m"
  }
#line 207 "status.m"
}

#line 206 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
#line 206 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 206 "status.m"
{
#line 477 "status.m"
  {
#line 477 "status.m"
    MR_bool hlds__status__succeeded;
#line 477 "status.m"
    MR_Word hlds__status__IsImported_4;
#line 477 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 477 "status.m"
    MR_Word hlds__status__InstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 477 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 477 "status.m"
    MR_Word hlds__status__OldIsImported_8;
#line 477 "status.m"
    MR_Word hlds__status__NewIsImported_10;
#line 477 "status.m"
    MR_Word hlds__status__V_16_16;

#line 479 "status.m"
    {
#line 479 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_7)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_7)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_16_16 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_16_16 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__OldIsImported_8 = mercury__bool__not_1_f_0(hlds__status__V_16_16);
    }
#line 484 "status.m"
    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 486 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 1;
#line 484 "status.m"
    else
#line 483 "status.m"
      hlds__status__NewIsImported_10 = (MR_Integer) 0;
#line 488 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsImported_8 == hlds__status__NewIsImported_10);
#line 488 "status.m"
    if (hlds__status__succeeded)
#line 489 "status.m"
      hlds__status__IsImported_4 = hlds__status__NewIsImported_10;
#line 488 "status.m"
    else
#line 491 "status.m"
      {
#line 491 "status.m"
        {
#line 491 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_imported\'/1", (MR_String) "mismatch");
        }
#line 491 "status.m"
      }
#line 477 "status.m"
    return hlds__status__IsImported_4;
#line 477 "status.m"
  }
#line 206 "status.m"
}

#line 205 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
#line 205 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 205 "status.m"
{
#line 474 "status.m"
  {
#line 474 "status.m"
    MR_bool hlds__status__succeeded;
#line 474 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 474 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 474 "status.m"
    MR_Word hlds__status__V_5_5;

#line 571 "status.m"
#line 571 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 571 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
      case (MR_Integer) 0:
#line 571 "status.m"
#line 571 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 571 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 571 "status.m"
          case (MR_Integer) 0:
#line 575 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 1:
#line 573 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 2:
#line 574 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 3:
#line 576 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 4:
#line 577 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 5:
#line 578 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 6:
#line 579 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 7:
#line 580 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
          case (MR_Integer) 8:
#line 581 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 571 "status.m"
            break;
#line 571 "status.m"
        }
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 1:
#line 572 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
      case (MR_Integer) 2:
#line 571 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 571 "status.m"
        break;
#line 571 "status.m"
    }
#line 521 "status.m"
    {
#line 521 "status.m"
      hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 474 "status.m"
    return hlds__status__HeadVar__2_2;
#line 474 "status.m"
  }
#line 205 "status.m"
}

#line 197 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
#line 197 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 197 "status.m"
{
#line 436 "status.m"
  {
#line 436 "status.m"
    MR_bool hlds__status__succeeded;
#line 436 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 436 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 443 "status.m"
    MR_Word hlds__status__V_5_5;

#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 436 "status.m"
    return hlds__status__HeadVar__2_2;
#line 436 "status.m"
  }
#line 197 "status.m"
}

#line 196 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
#line 196 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 196 "status.m"
{
#line 434 "status.m"
  {
#line 434 "status.m"
    MR_bool hlds__status__succeeded;
#line 434 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 434 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 443 "status.m"
    MR_Word hlds__status__V_5_5;

#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 434 "status.m"
    return hlds__status__HeadVar__2_2;
#line 434 "status.m"
  }
#line 196 "status.m"
}

#line 195 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
#line 195 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 195 "status.m"
{
#line 432 "status.m"
  {
#line 432 "status.m"
    MR_bool hlds__status__succeeded;
#line 432 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 432 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 443 "status.m"
    MR_Word hlds__status__V_5_5;

#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 432 "status.m"
    return hlds__status__HeadVar__2_2;
#line 432 "status.m"
  }
#line 195 "status.m"
}

#line 194 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
#line 194 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 194 "status.m"
{
#line 420 "status.m"
  {
#line 420 "status.m"
    MR_bool hlds__status__succeeded;
#line 420 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 420 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 420 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 420 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 420 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 420 "status.m"
    MR_Word hlds__status__NewIsExported_9;
#line 443 "status.m"
    MR_Word hlds__status__V_14_14;

#line 422 "status.m"
    {
#line 422 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_14_14 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_14_14 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__OldStatus_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 0;
#line 457 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 469 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 457 "status.m"
    else
#line 457 "status.m"
      {
#line 457 "status.m"
        MR_Word hlds__status__InstModeExport_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 461 "status.m"
#line 461 "status.m"
        switch (hlds__status__InstModeExport_17) {
#line 461 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 461 "status.m"
          case (MR_Integer) 2:
#line 460 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 461 "status.m"
            break;
#line 461 "status.m"
          case (MR_Integer) 0:
#line 461 "status.m"
          case (MR_Integer) 1:
#line 465 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 461 "status.m"
            break;
#line 461 "status.m"
        }
#line 457 "status.m"
      }
#line 426 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 426 "status.m"
    if (hlds__status__succeeded)
#line 427 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 426 "status.m"
    else
#line 429 "status.m"
      {
#line 429 "status.m"
        {
#line 429 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_exported_to_non_submodules\'/1", (MR_String) "mismatch");
        }
#line 429 "status.m"
      }
#line 420 "status.m"
    return hlds__status__IsExported_4;
#line 420 "status.m"
  }
#line 194 "status.m"
}

#line 193 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
#line 193 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 193 "status.m"
{
#line 408 "status.m"
  {
#line 408 "status.m"
    MR_bool hlds__status__succeeded;
#line 408 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 408 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 408 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 408 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 408 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 408 "status.m"
    MR_Word hlds__status__NewIsExported_9;
#line 443 "status.m"
    MR_Word hlds__status__V_14_14;

#line 410 "status.m"
    {
#line 410 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_14_14 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_14_14 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__OldStatus_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__OldIsExported_8 = (MR_Integer) 0;
#line 457 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 469 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 457 "status.m"
    else
#line 457 "status.m"
      {
#line 457 "status.m"
        MR_Word hlds__status__InstModeExport_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 461 "status.m"
#line 461 "status.m"
        switch (hlds__status__InstModeExport_17) {
#line 461 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 461 "status.m"
          case (MR_Integer) 2:
#line 460 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 461 "status.m"
            break;
#line 461 "status.m"
          case (MR_Integer) 0:
#line 461 "status.m"
          case (MR_Integer) 1:
#line 465 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 461 "status.m"
            break;
#line 461 "status.m"
        }
#line 457 "status.m"
      }
#line 414 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 414 "status.m"
    if (hlds__status__succeeded)
#line 415 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 414 "status.m"
    else
#line 417 "status.m"
      {
#line 417 "status.m"
        {
#line 417 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_exported_to_non_submodules\'/1", (MR_String) "mismatch");
        }
#line 417 "status.m"
      }
#line 408 "status.m"
    return hlds__status__IsExported_4;
#line 408 "status.m"
  }
#line 193 "status.m"
}

#line 192 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
#line 192 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 192 "status.m"
{
#line 405 "status.m"
  {
#line 405 "status.m"
    MR_bool hlds__status__succeeded;
#line 405 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 405 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 443 "status.m"
    MR_Word hlds__status__V_5_5;

#line 443 "status.m"
    {
#line 443 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 443 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 443 "status.m"
    if (hlds__status__succeeded)
#line 443 "status.m"
      {
#line 444 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 444 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 443 "status.m"
      }
#line 441 "status.m"
    if (hlds__status__succeeded)
#line 446 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 441 "status.m"
    else
#line 448 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 405 "status.m"
    return hlds__status__HeadVar__2_2;
#line 405 "status.m"
  }
#line 192 "status.m"
}

#line 185 "status.m"
MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
#line 185 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 185 "status.m"
{
#line 391 "status.m"
  {
#line 391 "status.m"
    MR_bool hlds__status__succeeded;
#line 391 "status.m"
    MR_Word hlds__status__HeadVar__2_2;

#line 391 "status.m"
#line 391 "status.m"
    switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 391 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "status.m"
      case (MR_Integer) 0:
#line 391 "status.m"
#line 391 "status.m"
        switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 391 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 391 "status.m"
          case (MR_Integer) 0:
#line 395 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 1:
#line 393 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 2:
#line 394 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 3:
#line 396 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 4:
#line 397 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 5:
#line 398 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 6:
#line 399 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 7:
#line 400 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "status.m"
            break;
#line 391 "status.m"
          case (MR_Integer) 8:
#line 401 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
            break;
#line 391 "status.m"
        }
#line 391 "status.m"
        break;
#line 391 "status.m"
      case (MR_Integer) 1:
#line 392 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
        break;
#line 391 "status.m"
      case (MR_Integer) 2:
#line 391 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "status.m"
        break;
#line 391 "status.m"
    }
#line 391 "status.m"
    return hlds__status__HeadVar__2_2;
#line 391 "status.m"
  }
#line 185 "status.m"
}

#line 183 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
#line 183 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 183 "status.m"
{
#line 367 "status.m"
  {
#line 367 "status.m"
    MR_bool hlds__status__succeeded;
#line 367 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 367 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 368 "status.m"
    {
#line 368 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 367 "status.m"
    return hlds__status__HeadVar__2_2;
#line 367 "status.m"
  }
#line 183 "status.m"
}

#line 182 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
#line 182 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 182 "status.m"
{
#line 365 "status.m"
  {
#line 365 "status.m"
    MR_bool hlds__status__succeeded;
#line 365 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 365 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 366 "status.m"
    {
#line 366 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 365 "status.m"
    return hlds__status__HeadVar__2_2;
#line 365 "status.m"
  }
#line 182 "status.m"
}

#line 181 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
#line 181 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 181 "status.m"
{
#line 363 "status.m"
  {
#line 363 "status.m"
    MR_bool hlds__status__succeeded;
#line 363 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 363 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 364 "status.m"
    {
#line 364 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 363 "status.m"
    return hlds__status__HeadVar__2_2;
#line 363 "status.m"
  }
#line 181 "status.m"
}

#line 180 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
#line 180 "status.m"
  MR_Word hlds__status__ModeStatus_3)
#line 180 "status.m"
{
#line 352 "status.m"
  {
#line 352 "status.m"
    MR_bool hlds__status__succeeded;
#line 352 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 352 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 0)));
#line 352 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ModeStatus_3, (MR_Integer) 1)));
#line 352 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 352 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 352 "status.m"
    MR_Word hlds__status__NewIsExported_9;

#line 354 "status.m"
    {
#line 354 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 355 "status.m"
    {
#line 355 "status.m"
      hlds__status__OldIsExported_8 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 374 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 386 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 374 "status.m"
    else
#line 374 "status.m"
      {
#line 374 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 380 "status.m"
#line 380 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 380 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 380 "status.m"
          case (MR_Integer) 2:
#line 380 "status.m"
          case (MR_Integer) 1:
#line 379 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 380 "status.m"
            break;
#line 380 "status.m"
          case (MR_Integer) 0:
#line 382 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 380 "status.m"
            break;
#line 380 "status.m"
        }
#line 374 "status.m"
      }
#line 357 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 357 "status.m"
    if (hlds__status__succeeded)
#line 358 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 357 "status.m"
    else
#line 360 "status.m"
      {
#line 360 "status.m"
        {
#line 360 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.mode_status_is_exported\'/1", (MR_String) "mismatch");
        }
#line 360 "status.m"
      }
#line 352 "status.m"
    return hlds__status__IsExported_4;
#line 352 "status.m"
  }
#line 180 "status.m"
}

#line 179 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
#line 179 "status.m"
  MR_Word hlds__status__InstStatus_3)
#line 179 "status.m"
{
#line 341 "status.m"
  {
#line 341 "status.m"
    MR_bool hlds__status__succeeded;
#line 341 "status.m"
    MR_Word hlds__status__IsExported_4;
#line 341 "status.m"
    MR_Word hlds__status__OldStatus0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 0)));
#line 341 "status.m"
    MR_Word hlds__status__NewInstModeStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstStatus_3, (MR_Integer) 1)));
#line 341 "status.m"
    MR_Word hlds__status__OldStatus_7;
#line 341 "status.m"
    MR_Word hlds__status__OldIsExported_8;
#line 341 "status.m"
    MR_Word hlds__status__NewIsExported_9;

#line 343 "status.m"
    {
#line 343 "status.m"
      hlds__status__valid_old_status_for_inst_or_mode_2_p_0(hlds__status__OldStatus0_5, &hlds__status__OldStatus_7);
    }
#line 344 "status.m"
    {
#line 344 "status.m"
      hlds__status__OldIsExported_8 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_7);
    }
#line 374 "status.m"
    if (((MR_tag((MR_Word) hlds__status__NewInstModeStatus_6)) == (MR_mktag((MR_Integer) 1))))
#line 386 "status.m"
      hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 374 "status.m"
    else
#line 374 "status.m"
      {
#line 374 "status.m"
        MR_Word hlds__status__InstModeExport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__NewInstModeStatus_6, (MR_Integer) 0)));

#line 380 "status.m"
#line 380 "status.m"
        switch (hlds__status__InstModeExport_15) {
#line 380 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 380 "status.m"
          case (MR_Integer) 2:
#line 380 "status.m"
          case (MR_Integer) 1:
#line 379 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 1;
#line 380 "status.m"
            break;
#line 380 "status.m"
          case (MR_Integer) 0:
#line 382 "status.m"
            hlds__status__NewIsExported_9 = (MR_Integer) 0;
#line 380 "status.m"
            break;
#line 380 "status.m"
        }
#line 374 "status.m"
      }
#line 346 "status.m"
    hlds__status__succeeded = (hlds__status__OldIsExported_8 == hlds__status__NewIsExported_9);
#line 346 "status.m"
    if (hlds__status__succeeded)
#line 347 "status.m"
      hlds__status__IsExported_4 = hlds__status__NewIsExported_9;
#line 346 "status.m"
    else
#line 349 "status.m"
      {
#line 349 "status.m"
        {
#line 349 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "function \140hlds.status.inst_status_is_exported\'/1", (MR_String) "mismatch");
        }
#line 349 "status.m"
      }
#line 341 "status.m"
    return hlds__status__IsExported_4;
#line 341 "status.m"
  }
#line 179 "status.m"
}

#line 178 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
#line 178 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 178 "status.m"
{
#line 338 "status.m"
  {
#line 338 "status.m"
    MR_bool hlds__status__succeeded;
#line 338 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 338 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 339 "status.m"
    {
#line 339 "status.m"
      hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 338 "status.m"
    return hlds__status__HeadVar__2_2;
#line 338 "status.m"
  }
#line 178 "status.m"
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
