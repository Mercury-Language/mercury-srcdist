/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 97 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1];

#line 100 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0;

#line 103 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1];

#line 106 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0;

#line 109 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

#line 112 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

#line 115 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

#line 118 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3];

#line 121 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3];

#line 124 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3];

#line 127 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1];

#line 130 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0;

#line 133 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1;

#line 136 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2;

#line 139 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2];

#line 142 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1];

#line 145 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2];

#line 148 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3];

#line 151 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3];

#line 154 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1];

#line 157 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0;

#line 160 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1];

#line 163 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1;

#line 166 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1];

#line 169 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1];

#line 172 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2];

#line 175 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2];

#line 178 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2];

#line 181 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0;

#line 184 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1;

#line 187 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2];

#line 190 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2];

#line 193 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2];

#line 196 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1];

#line 199 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0;

#line 202 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1];

#line 205 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0;

#line 208 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1];

#line 211 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1;

#line 214 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2;

#line 217 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3;

#line 220 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4;

#line 223 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5;

#line 226 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6;

#line 229 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7;

#line 232 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8;

#line 235 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9;

#line 238 "hlds.status.c"
static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10;

#line 241 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0[9];

#line 244 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1];

#line 247 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1];

#line 250 "hlds.status.c"
static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3];

#line 253 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_old_import_status_0[11];

#line 256 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_old_import_status_0[11];

#line 259 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1];

#line 262 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0;

#line 265 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1];

#line 268 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0;

#line 271 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1];

#line 274 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0;

#line 277 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 280 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 282 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 285 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 288 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 290 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 292 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 295 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 298 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 300 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 303 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 306 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 308 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 310 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 313 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 316 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 318 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 321 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 324 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 326 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 328 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 331 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 334 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 336 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 339 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 342 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 344 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 346 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 349 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 352 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 354 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 357 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 360 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 362 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 364 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 367 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 370 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 372 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 375 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 378 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 380 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 382 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 385 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 388 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 390 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 393 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 396 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 398 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 400 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 403 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 406 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 408 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 411 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 414 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 416 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 418 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 421 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 424 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 426 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 429 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 432 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 434 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 436 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 439 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 442 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 444 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 447 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 450 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 452 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 454 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 457 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 460 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 462 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2);

#line 465 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 468 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 470 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 472 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3);

#line 446 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 446 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 446 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 446 "status.m"
  MR_Word * hlds__status__Status_6);

#line 371 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 371 "status.m"
  MR_Word hlds__status__HeadVar__1_1);


static /* final */ const MR_Box hlds__status_scalar_common_2[3][1];


#line 390 "status.m"
/* sealed */ struct hlds__status__vector_common_type_1_0_s {
#line 390 "status.m"
  const MR_Word hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 390 "status.m"
};

static /* final */ const struct hlds__status__vector_common_type_1_0_s hlds__status_vector_common_1[4];



static /* final */ const MR_Box hlds__status_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 3))
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



#line 537 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = {
  (MR_Integer) 0
};

#line 542 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0 = {
  (MR_String) "inst_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 549 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_inst_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____inst_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____inst_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "inst_status",
  {     &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_inst_status_0
};

#line 566 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1] = {
  (MR_Integer) 0
};

#line 571 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0 = {
  (MR_String) "instance_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 578 "hlds.status.c"
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

#line 595 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0 = {
  (MR_String) "item_export_nowhere",
  (MR_Integer) 0
};

#line 601 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1 = {
  (MR_String) "item_export_only_submodules",
  (MR_Integer) 1
};

#line 607 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2 = {
  (MR_String) "item_export_anywhere",
  (MR_Integer) 2
};

#line 613 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2
};

#line 620 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1
};

#line 627 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 634 "hlds.status.c"
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

#line 651 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 656 "hlds.status.c"
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

#line 671 "hlds.status.c"
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

#line 686 "hlds.status.c"
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

#line 701 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 707 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0
};

#line 712 "hlds.status.c"
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

#line 726 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

#line 733 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 740 "hlds.status.c"
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

#line 757 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_export_0
};

#line 762 "hlds.status.c"
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

#line 777 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_import_0
};

#line 782 "hlds.status.c"
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

#line 797 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 802 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1
};

#line 807 "hlds.status.c"
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

#line 821 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

#line 827 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 833 "hlds.status.c"
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

#line 850 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  (MR_Integer) 0
};

#line 856 "hlds.status.c"
static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  (MR_Integer) 1
};

#line 862 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 868 "hlds.status.c"
static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

#line 874 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 880 "hlds.status.c"
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

#line 897 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = {
  (MR_Integer) 0
};

#line 902 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0 = {
  (MR_String) "mode_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 909 "hlds.status.c"
const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_mode_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____mode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____mode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "mode_status",
  {     &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__status__hlds__status__functor_number_map_mode_status_0
};

#line 926 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0
};

#line 931 "hlds.status.c"
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

#line 946 "hlds.status.c"
static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 951 "hlds.status.c"
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

#line 966 "hlds.status.c"
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

#line 981 "hlds.status.c"
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

#line 996 "hlds.status.c"
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

#line 1011 "hlds.status.c"
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

#line 1026 "hlds.status.c"
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

#line 1041 "hlds.status.c"
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

#line 1056 "hlds.status.c"
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

#line 1071 "hlds.status.c"
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

#line 1086 "hlds.status.c"
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

#line 1101 "hlds.status.c"
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

#line 1114 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0
};

#line 1119 "hlds.status.c"
static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1
};

#line 1124 "hlds.status.c"
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

#line 1143 "hlds.status.c"
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

#line 1158 "hlds.status.c"
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

#line 1173 "hlds.status.c"
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

#line 1190 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = {
  (MR_Integer) 0
};

#line 1195 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1202 "hlds.status.c"
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

#line 1219 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = {
  (MR_Integer) 0
};

#line 1224 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1231 "hlds.status.c"
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

#line 1248 "hlds.status.c"
static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1] = {
  (MR_Integer) 0
};

#line 1253 "hlds.status.c"
static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 = {
  (MR_String) "typeclass_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL
};

#line 1260 "hlds.status.c"
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

#line 1277 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
#line 1280 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1282 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1284 "hlds.status.c"
{
#line 1286 "hlds.status.c"
  {
#line 1288 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1291 "hlds.status.c"
    {
#line 1293 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1296 "hlds.status.c"
    return hlds__status__succeeded;
#line 1298 "hlds.status.c"
  }
#line 1300 "hlds.status.c"
}

#line 1303 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
#line 1306 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1308 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1310 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1312 "hlds.status.c"
{
#line 1314 "hlds.status.c"
  {
#line 1316 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1319 "hlds.status.c"
    {
#line 1321 "hlds.status.c"
      hlds__status____Compare____inst_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1324 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1326 "hlds.status.c"
  }
#line 1328 "hlds.status.c"
}

#line 1331 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
#line 1334 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1336 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1338 "hlds.status.c"
{
#line 1340 "hlds.status.c"
  {
#line 1342 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1345 "hlds.status.c"
    {
#line 1347 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1350 "hlds.status.c"
    return hlds__status__succeeded;
#line 1352 "hlds.status.c"
  }
#line 1354 "hlds.status.c"
}

#line 1357 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
#line 1360 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1362 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1364 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1366 "hlds.status.c"
{
#line 1368 "hlds.status.c"
  {
#line 1370 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1373 "hlds.status.c"
    {
#line 1375 "hlds.status.c"
      hlds__status____Compare____instance_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1378 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1380 "hlds.status.c"
  }
#line 1382 "hlds.status.c"
}

#line 1385 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
#line 1388 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1390 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1392 "hlds.status.c"
{
#line 1394 "hlds.status.c"
  {
#line 1396 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1399 "hlds.status.c"
    {
#line 1401 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1404 "hlds.status.c"
    return hlds__status__succeeded;
#line 1406 "hlds.status.c"
  }
#line 1408 "hlds.status.c"
}

#line 1411 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
#line 1414 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1416 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1418 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1420 "hlds.status.c"
{
#line 1422 "hlds.status.c"
  {
#line 1424 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1427 "hlds.status.c"
    {
#line 1429 "hlds.status.c"
      hlds__status____Compare____item_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1432 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1434 "hlds.status.c"
  }
#line 1436 "hlds.status.c"
}

#line 1439 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
#line 1442 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1444 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1446 "hlds.status.c"
{
#line 1448 "hlds.status.c"
  {
#line 1450 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1453 "hlds.status.c"
    {
#line 1455 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1458 "hlds.status.c"
    return hlds__status__succeeded;
#line 1460 "hlds.status.c"
  }
#line 1462 "hlds.status.c"
}

#line 1465 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
#line 1468 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1470 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1472 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1474 "hlds.status.c"
{
#line 1476 "hlds.status.c"
  {
#line 1478 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1481 "hlds.status.c"
    {
#line 1483 "hlds.status.c"
      hlds__status____Compare____item_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1486 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1488 "hlds.status.c"
  }
#line 1490 "hlds.status.c"
}

#line 1493 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
#line 1496 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1498 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1500 "hlds.status.c"
{
#line 1502 "hlds.status.c"
  {
#line 1504 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1507 "hlds.status.c"
    {
#line 1509 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1512 "hlds.status.c"
    return hlds__status__succeeded;
#line 1514 "hlds.status.c"
  }
#line 1516 "hlds.status.c"
}

#line 1519 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
#line 1522 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1524 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1526 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1528 "hlds.status.c"
{
#line 1530 "hlds.status.c"
  {
#line 1532 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1535 "hlds.status.c"
    {
#line 1537 "hlds.status.c"
      hlds__status____Compare____item_mercury_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1540 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1542 "hlds.status.c"
  }
#line 1544 "hlds.status.c"
}

#line 1547 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
#line 1550 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1552 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1554 "hlds.status.c"
{
#line 1556 "hlds.status.c"
  {
#line 1558 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1561 "hlds.status.c"
    {
#line 1563 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1566 "hlds.status.c"
    return hlds__status__succeeded;
#line 1568 "hlds.status.c"
  }
#line 1570 "hlds.status.c"
}

#line 1573 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
#line 1576 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1578 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1580 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1582 "hlds.status.c"
{
#line 1584 "hlds.status.c"
  {
#line 1586 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1589 "hlds.status.c"
    {
#line 1591 "hlds.status.c"
      hlds__status____Compare____maybe_opt_imported_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1594 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1596 "hlds.status.c"
  }
#line 1598 "hlds.status.c"
}

#line 1601 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
#line 1604 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1606 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1608 "hlds.status.c"
{
#line 1610 "hlds.status.c"
  {
#line 1612 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1615 "hlds.status.c"
    {
#line 1617 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1620 "hlds.status.c"
    return hlds__status__succeeded;
#line 1622 "hlds.status.c"
  }
#line 1624 "hlds.status.c"
}

#line 1627 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
#line 1630 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1632 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1634 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1636 "hlds.status.c"
{
#line 1638 "hlds.status.c"
  {
#line 1640 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1643 "hlds.status.c"
    {
#line 1645 "hlds.status.c"
      hlds__status____Compare____mode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1648 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1650 "hlds.status.c"
  }
#line 1652 "hlds.status.c"
}

#line 1655 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
#line 1658 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1660 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1662 "hlds.status.c"
{
#line 1664 "hlds.status.c"
  {
#line 1666 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1669 "hlds.status.c"
    {
#line 1671 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1674 "hlds.status.c"
    return hlds__status__succeeded;
#line 1676 "hlds.status.c"
  }
#line 1678 "hlds.status.c"
}

#line 1681 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
#line 1684 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1686 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1688 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1690 "hlds.status.c"
{
#line 1692 "hlds.status.c"
  {
#line 1694 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1697 "hlds.status.c"
    {
#line 1699 "hlds.status.c"
      hlds__status____Compare____old_import_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1702 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1704 "hlds.status.c"
  }
#line 1706 "hlds.status.c"
}

#line 1709 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
#line 1712 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1714 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1716 "hlds.status.c"
{
#line 1718 "hlds.status.c"
  {
#line 1720 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1723 "hlds.status.c"
    {
#line 1725 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1728 "hlds.status.c"
    return hlds__status__succeeded;
#line 1730 "hlds.status.c"
  }
#line 1732 "hlds.status.c"
}

#line 1735 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
#line 1738 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1740 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1742 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1744 "hlds.status.c"
{
#line 1746 "hlds.status.c"
  {
#line 1748 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1751 "hlds.status.c"
    {
#line 1753 "hlds.status.c"
      hlds__status____Compare____pred_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1756 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1758 "hlds.status.c"
  }
#line 1760 "hlds.status.c"
}

#line 1763 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
#line 1766 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1768 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1770 "hlds.status.c"
{
#line 1772 "hlds.status.c"
  {
#line 1774 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1777 "hlds.status.c"
    {
#line 1779 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1782 "hlds.status.c"
    return hlds__status__succeeded;
#line 1784 "hlds.status.c"
  }
#line 1786 "hlds.status.c"
}

#line 1789 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
#line 1792 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1794 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1796 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1798 "hlds.status.c"
{
#line 1800 "hlds.status.c"
  {
#line 1802 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1805 "hlds.status.c"
    {
#line 1807 "hlds.status.c"
      hlds__status____Compare____type_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1810 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1812 "hlds.status.c"
  }
#line 1814 "hlds.status.c"
}

#line 1817 "hlds.status.c"
static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
#line 1820 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_1,
#line 1822 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2)
#line 1824 "hlds.status.c"
{
#line 1826 "hlds.status.c"
  {
#line 1828 "hlds.status.c"
    MR_bool hlds__status__succeeded;

#line 1831 "hlds.status.c"
    {
#line 1833 "hlds.status.c"
      hlds__status__succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    }
#line 1836 "hlds.status.c"
    return hlds__status__succeeded;
#line 1838 "hlds.status.c"
  }
#line 1840 "hlds.status.c"
}

#line 1843 "hlds.status.c"
static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
#line 1846 "hlds.status.c"
  MR_Box * hlds__status__wrapper_arg_1,
#line 1848 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_2,
#line 1850 "hlds.status.c"
  MR_Box hlds__status__wrapper_arg_3)
#line 1852 "hlds.status.c"
{
#line 1854 "hlds.status.c"
  {
#line 1856 "hlds.status.c"
    MR_Word hlds__status__conv0_HeadVar__1_1;

#line 1859 "hlds.status.c"
    {
#line 1861 "hlds.status.c"
      hlds__status____Compare____typeclass_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    }
#line 1864 "hlds.status.c"
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
#line 1866 "hlds.status.c"
  }
#line 1868 "hlds.status.c"
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
#line 1895 "hlds.status.c"
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

#line 1953 "hlds.status.c"
        {
#line 1955 "hlds.status.c"
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
#line 1991 "hlds.status.c"
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

#line 2049 "hlds.status.c"
        {
#line 2051 "hlds.status.c"
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
#line 2087 "hlds.status.c"
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

#line 2145 "hlds.status.c"
        {
#line 2147 "hlds.status.c"
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

#line 66 "status.m"
void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
#line 66 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 66 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 66 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 66 "status.m"
{
#line 66 "status.m"
  while (MR_TRUE)
#line 66 "status.m"
    {
#line 66 "status.m"
      /* tailcall optimized into a loop */
#line 66 "status.m"
      {
#line 66 "status.m"
        MR_bool hlds__status__succeeded;
#line 66 "status.m"
        MR_Integer hlds__status__CastX_48 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 66 "status.m"
        MR_Integer hlds__status__CastY_49 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 66 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_48 == hlds__status__CastY_49);
#line 66 "status.m"
        if (hlds__status__succeeded)
#line 2189 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
        else
#line 66 "status.m"
#line 66 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 66 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
            case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 66 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2279 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2285 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 1:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2367 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2373 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 2:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2455 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2461 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 3:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2543 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2549 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 4:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2631 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2637 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 5:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2719 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2725 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 6:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2807 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2813 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 7:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2895 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2901 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 8:
#line 66 "status.m"
#line 66 "status.m"
                  switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                    case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                      switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                        case (MR_Integer) 0:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 1:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 2:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 3:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 4:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 5:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 6:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 7:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                        case (MR_Integer) 8:
#line 66 "status.m"
                          *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "status.m"
                          break;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 1:
#line 2983 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                    case (MR_Integer) 2:
#line 2989 "hlds.status.c"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                      break;
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
            case (MR_Integer) 1:
#line 66 "status.m"
              {
#line 66 "status.m"
                MR_Word hlds__status__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 66 "status.m"
#line 66 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                  case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                      case (MR_Integer) 0:
#line 3022 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 1:
#line 3028 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 2:
#line 3034 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 3:
#line 3040 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 4:
#line 3046 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 5:
#line 3052 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 6:
#line 3058 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 7:
#line 3064 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 8:
#line 3070 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                    }
#line 66 "status.m"
                    break;
#line 66 "status.m"
                  case (MR_Integer) 1:
#line 66 "status.m"
                    {
#line 66 "status.m"
                      MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "status.m"
                      /* direct tailcall eliminated */
#line 66 "status.m"
                      {
#line 66 "status.m"
                        MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_52_52;
#line 66 "status.m"
                        MR_Word hlds__status__HeadVar__3__tmp_copy_3 = hlds__status__V_5_5;

#line 66 "status.m"
                        hlds__status__HeadVar__3_3 = hlds__status__HeadVar__3__tmp_copy_3;
#line 66 "status.m"
                        hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 66 "status.m"
                      }
#line 66 "status.m"
                      continue;
#line 66 "status.m"
                    }
#line 66 "status.m"
                    break;
#line 66 "status.m"
                  case (MR_Integer) 2:
#line 3108 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                    break;
#line 66 "status.m"
                }
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
            case (MR_Integer) 2:
#line 66 "status.m"
              {
#line 66 "status.m"
                MR_Word hlds__status__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 66 "status.m"
#line 66 "status.m"
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                  case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 66 "status.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                      case (MR_Integer) 0:
#line 3139 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 1:
#line 3145 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 2:
#line 3151 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 3:
#line 3157 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 4:
#line 3163 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 5:
#line 3169 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 6:
#line 3175 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 7:
#line 3181 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                      case (MR_Integer) 8:
#line 3187 "hlds.status.c"
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "status.m"
                        break;
#line 66 "status.m"
                    }
#line 66 "status.m"
                    break;
#line 66 "status.m"
                  case (MR_Integer) 1:
#line 3197 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "status.m"
                    break;
#line 66 "status.m"
                  case (MR_Integer) 2:
#line 66 "status.m"
                    {
#line 66 "status.m"
                      MR_Word hlds__status__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 66 "status.m"
                      MR_Integer hlds__status__V_54_54 = (MR_Integer) hlds__status__V_53_53;
#line 66 "status.m"
                      MR_Integer hlds__status__V_55_55 = (MR_Integer) hlds__status__V_20_20;

#line 66 "status.m"
                      {
#line 66 "status.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_54_54, hlds__status__V_55_55);
#line 66 "status.m"
                        return;
                      }
#line 66 "status.m"
                    }
#line 66 "status.m"
                    break;
#line 66 "status.m"
                }
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
          }
#line 66 "status.m"
      }
#line 66 "status.m"
      break;
#line 66 "status.m"
    }
#line 66 "status.m"
}

#line 66 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0(
#line 66 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 66 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 66 "status.m"
{
#line 66 "status.m"
  while (MR_TRUE)
#line 66 "status.m"
    {
#line 66 "status.m"
      /* tailcall optimized into a loop */
#line 66 "status.m"
      {
#line 66 "status.m"
        MR_bool hlds__status__succeeded;
#line 66 "status.m"
        MR_Integer hlds__status__CastX_25 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
        MR_Integer hlds__status__CastY_26 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
        hlds__status__succeeded = (hlds__status__CastX_25 == hlds__status__CastY_26);
#line 66 "status.m"
        if (hlds__status__succeeded)
#line 66 "status.m"
          hlds__status__succeeded = MR_TRUE;
#line 66 "status.m"
        else
#line 66 "status.m"
#line 66 "status.m"
          switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 66 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
            case (MR_Integer) 0:
#line 66 "status.m"
#line 66 "status.m"
              switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 66 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 66 "status.m"
                case (MR_Integer) 0:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 1:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_10 == hlds__status__CastX_9);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 2:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_11 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_12 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_12 == hlds__status__CastX_11);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 3:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_13 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_14 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_14 == hlds__status__CastX_13);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 4:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_15 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_16 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_16 == hlds__status__CastX_15);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 5:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_17 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_18 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_18 == hlds__status__CastX_17);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 6:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_19 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_20 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_20 == hlds__status__CastX_19);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 7:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_21 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_22 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_22 == hlds__status__CastX_21);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
                case (MR_Integer) 8:
#line 66 "status.m"
                  {
#line 66 "status.m"
                    MR_Integer hlds__status__CastX_23 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 66 "status.m"
                    MR_Integer hlds__status__CastY_24 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 66 "status.m"
                    hlds__status__succeeded = (hlds__status__CastY_24 == hlds__status__CastX_23);
#line 66 "status.m"
                  }
#line 66 "status.m"
                  break;
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
            case (MR_Integer) 1:
#line 66 "status.m"
              {
#line 66 "status.m"
                MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "status.m"
                MR_Word hlds__status__V_4_4;

#line 66 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 66 "status.m"
                if (hlds__status__succeeded)
#line 66 "status.m"
                  {
#line 66 "status.m"
                    hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3440 "hlds.status.c"
                    /* direct tailcall eliminated */
#line 3442 "hlds.status.c"
                    {
#line 3444 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__V_3_3;
#line 3446 "hlds.status.c"
                      MR_Word hlds__status__HeadVar__2__tmp_copy_2 = hlds__status__V_4_4;

#line 3449 "hlds.status.c"
                      hlds__status__HeadVar__2_2 = hlds__status__HeadVar__2__tmp_copy_2;
#line 3451 "hlds.status.c"
                      hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 3453 "hlds.status.c"
                    }
#line 3455 "hlds.status.c"
                    continue;
#line 66 "status.m"
                  }
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
            case (MR_Integer) 2:
#line 66 "status.m"
              {
#line 66 "status.m"
                MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "status.m"
                MR_Word hlds__status__V_6_6;

#line 66 "status.m"
                hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 66 "status.m"
                if (hlds__status__succeeded)
#line 66 "status.m"
                  {
#line 66 "status.m"
                    hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3480 "hlds.status.c"
                    hlds__status__succeeded = (hlds__status__V_5_5 == hlds__status__V_6_6);
#line 66 "status.m"
                  }
#line 66 "status.m"
              }
#line 66 "status.m"
              break;
#line 66 "status.m"
          }
#line 66 "status.m"
        return hlds__status__succeeded;
#line 66 "status.m"
      }
#line 66 "status.m"
      break;
#line 66 "status.m"
    }
#line 66 "status.m"
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
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 47 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 47 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 47 "status.m"
    if (hlds__status__succeeded)
#line 3525 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "status.m"
    else
#line 47 "status.m"
      {
#line 47 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 47 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 47 "status.m"
        {
#line 47 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
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
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 47 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 47 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 47 "status.m"
    if (hlds__status__succeeded)
#line 47 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 47 "status.m"
    else
#line 47 "status.m"
      {
#line 47 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 47 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 3583 "hlds.status.c"
        {
#line 3585 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
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
#line 3638 "hlds.status.c"
  {
#line 3640 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 3643 "hlds.status.c"
    return hlds__status__succeeded;
#line 3645 "hlds.status.c"
  }
#line 37 "status.m"
}

#line 216 "status.m"
void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
#line 216 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 216 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 216 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 216 "status.m"
{
#line 216 "status.m"
  {
#line 216 "status.m"
    MR_bool hlds__status__succeeded;
#line 216 "status.m"
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 216 "status.m"
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 216 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
#line 216 "status.m"
    if (hlds__status__succeeded)
#line 3674 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "status.m"
    else
#line 216 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 216 "status.m"
      {
#line 216 "status.m"
        MR_Word hlds__status__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 216 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 216 "status.m"
          {
#line 216 "status.m"
            MR_Word hlds__status__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

#line 216 "status.m"
            {
#line 216 "status.m"
              hlds__status____Compare____item_import_0_0(hlds__status__HeadVar__1_1, hlds__status__V_16_16, hlds__status__V_11_11);
#line 216 "status.m"
              return;
            }
#line 216 "status.m"
          }
#line 216 "status.m"
        else
#line 3703 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 216 "status.m"
      }
#line 216 "status.m"
    else
#line 216 "status.m"
      {
#line 216 "status.m"
        MR_Word hlds__status__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 216 "status.m"
        if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3716 "hlds.status.c"
          *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 216 "status.m"
        else
#line 216 "status.m"
          {
#line 216 "status.m"
            MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "status.m"
            MR_Integer hlds__status__V_18_18 = (MR_Integer) hlds__status__V_17_17;
#line 216 "status.m"
            MR_Integer hlds__status__V_19_19 = (MR_Integer) hlds__status__V_5_5;

#line 216 "status.m"
            {
#line 216 "status.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_18_18, hlds__status__V_19_19);
#line 216 "status.m"
              return;
            }
#line 216 "status.m"
          }
#line 216 "status.m"
      }
#line 216 "status.m"
  }
#line 216 "status.m"
}

#line 216 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
#line 216 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 216 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 216 "status.m"
{
#line 216 "status.m"
  {
#line 216 "status.m"
    MR_bool hlds__status__succeeded;
#line 216 "status.m"
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 216 "status.m"
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 216 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
#line 216 "status.m"
    if (hlds__status__succeeded)
#line 216 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 216 "status.m"
    else
#line 216 "status.m"
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 216 "status.m"
      {
#line 216 "status.m"
        MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "status.m"
        MR_Word hlds__status__V_6_6;

#line 216 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 216 "status.m"
        if (hlds__status__succeeded)
#line 216 "status.m"
          {
#line 216 "status.m"
            hlds__status__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3788 "hlds.status.c"
            {
#line 3790 "hlds.status.c"
              return hlds__status__succeeded = hlds__status____Unify____item_import_0_0(hlds__status__V_5_5, hlds__status__V_6_6);
            }
#line 216 "status.m"
          }
#line 216 "status.m"
      }
#line 216 "status.m"
    else
#line 216 "status.m"
      {
#line 216 "status.m"
        MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "status.m"
        MR_Word hlds__status__V_4_4;

#line 216 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 216 "status.m"
        if (hlds__status__succeeded)
#line 216 "status.m"
          {
#line 216 "status.m"
            hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 3814 "hlds.status.c"
            hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 216 "status.m"
          }
#line 216 "status.m"
      }
#line 216 "status.m"
    return hlds__status__succeeded;
#line 216 "status.m"
  }
#line 216 "status.m"
}

#line 229 "status.m"
void MR_CALL 
hlds__status____Compare____item_import_0_0(
#line 229 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 229 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 229 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 229 "status.m"
{
#line 229 "status.m"
  {
#line 229 "status.m"
    MR_bool hlds__status__succeeded;
#line 229 "status.m"
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 229 "status.m"
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 229 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
#line 229 "status.m"
    if (hlds__status__succeeded)
#line 3851 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "status.m"
    else
#line 229 "status.m"
#line 229 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
#line 229 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
        case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
#line 229 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
            case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
                case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
                    case (MR_Integer) 0:
#line 229 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "status.m"
                      break;
#line 229 "status.m"
                    case (MR_Integer) 1:
#line 229 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 229 "status.m"
                      break;
#line 229 "status.m"
                  }
#line 229 "status.m"
                  break;
#line 229 "status.m"
                case (MR_Integer) 1:
#line 3899 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 229 "status.m"
                  break;
#line 229 "status.m"
              }
#line 229 "status.m"
              break;
#line 229 "status.m"
            case (MR_Integer) 1:
#line 229 "status.m"
#line 229 "status.m"
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
                case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
                    case (MR_Integer) 0:
#line 229 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 229 "status.m"
                      break;
#line 229 "status.m"
                    case (MR_Integer) 1:
#line 229 "status.m"
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "status.m"
                      break;
#line 229 "status.m"
                  }
#line 229 "status.m"
                  break;
#line 229 "status.m"
                case (MR_Integer) 1:
#line 3939 "hlds.status.c"
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
#line 229 "status.m"
                  break;
#line 229 "status.m"
              }
#line 229 "status.m"
              break;
#line 229 "status.m"
          }
#line 229 "status.m"
          break;
#line 229 "status.m"
        case (MR_Integer) 1:
#line 229 "status.m"
          {
#line 229 "status.m"
            MR_Word hlds__status__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

#line 229 "status.m"
#line 229 "status.m"
            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
              case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
#line 229 "status.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
                  case (MR_Integer) 0:
#line 3972 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 229 "status.m"
                    break;
#line 229 "status.m"
                  case (MR_Integer) 1:
#line 3978 "hlds.status.c"
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
#line 229 "status.m"
                    break;
#line 229 "status.m"
                }
#line 229 "status.m"
                break;
#line 229 "status.m"
              case (MR_Integer) 1:
#line 229 "status.m"
                {
#line 229 "status.m"
                  MR_Word hlds__status__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "status.m"
                  MR_Integer hlds__status__V_14_14 = (MR_Integer) hlds__status__V_13_13;
#line 229 "status.m"
                  MR_Integer hlds__status__V_15_15 = (MR_Integer) hlds__status__V_5_5;

#line 229 "status.m"
                  {
#line 229 "status.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__V_14_14, hlds__status__V_15_15);
#line 229 "status.m"
                    return;
                  }
#line 229 "status.m"
                }
#line 229 "status.m"
                break;
#line 229 "status.m"
            }
#line 229 "status.m"
          }
#line 229 "status.m"
          break;
#line 229 "status.m"
      }
#line 229 "status.m"
  }
#line 229 "status.m"
}

#line 229 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0(
#line 229 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 229 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 229 "status.m"
{
#line 229 "status.m"
  {
#line 229 "status.m"
    MR_bool hlds__status__succeeded;
#line 229 "status.m"
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 229 "status.m"
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 229 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
#line 229 "status.m"
    if (hlds__status__succeeded)
#line 229 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 229 "status.m"
    else
#line 229 "status.m"
#line 229 "status.m"
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 229 "status.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
        case (MR_Integer) 0:
#line 229 "status.m"
#line 229 "status.m"
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 229 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 229 "status.m"
            case (MR_Integer) 0:
#line 229 "status.m"
              {
#line 229 "status.m"
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 229 "status.m"
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 229 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
#line 229 "status.m"
              }
#line 229 "status.m"
              break;
#line 229 "status.m"
            case (MR_Integer) 1:
#line 229 "status.m"
              {
#line 229 "status.m"
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 229 "status.m"
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 229 "status.m"
                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
#line 229 "status.m"
              }
#line 229 "status.m"
              break;
#line 229 "status.m"
          }
#line 229 "status.m"
          break;
#line 229 "status.m"
        case (MR_Integer) 1:
#line 229 "status.m"
          {
#line 229 "status.m"
            MR_Word hlds__status__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "status.m"
            MR_Word hlds__status__V_4_4;

#line 229 "status.m"
            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 229 "status.m"
            if (hlds__status__succeeded)
#line 229 "status.m"
              {
#line 229 "status.m"
                hlds__status__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
#line 4110 "hlds.status.c"
                hlds__status__succeeded = (hlds__status__V_3_3 == hlds__status__V_4_4);
#line 229 "status.m"
              }
#line 229 "status.m"
          }
#line 229 "status.m"
          break;
#line 229 "status.m"
      }
#line 229 "status.m"
    return hlds__status__succeeded;
#line 229 "status.m"
  }
#line 229 "status.m"
}

#line 224 "status.m"
void MR_CALL 
hlds__status____Compare____item_export_0_0(
#line 224 "status.m"
  MR_Word * hlds__status__HeadVar__1_1,
#line 224 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 224 "status.m"
  MR_Word hlds__status__HeadVar__3_3)
#line 224 "status.m"
{
#line 224 "status.m"
  {
#line 224 "status.m"
    MR_bool hlds__status__succeeded;
#line 224 "status.m"
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 224 "status.m"
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 224 "status.m"
    {
#line 224 "status.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
#line 224 "status.m"
      return;
    }
#line 224 "status.m"
  }
#line 224 "status.m"
}

#line 224 "status.m"
MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
#line 224 "status.m"
  MR_Word hlds__status__HeadVar__2_1,
#line 224 "status.m"
  MR_Word hlds__status__HeadVar__2_2)
#line 224 "status.m"
{
#line 4168 "hlds.status.c"
  {
#line 4170 "hlds.status.c"
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

#line 4173 "hlds.status.c"
    return hlds__status__succeeded;
#line 4175 "hlds.status.c"
  }
#line 224 "status.m"
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
#line 4204 "hlds.status.c"
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

#line 4262 "hlds.status.c"
        {
#line 4264 "hlds.status.c"
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
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
#line 44 "status.m"
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

#line 44 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
#line 44 "status.m"
    if (hlds__status__succeeded)
#line 4300 "hlds.status.c"
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "status.m"
    else
#line 44 "status.m"
      {
#line 44 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;
#line 44 "status.m"
        MR_Word hlds__status__V_5_5 = (MR_Word) hlds__status__HeadVar__3_3;

#line 44 "status.m"
        {
#line 44 "status.m"
          hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__V_4_4, hlds__status__V_5_5);
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
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
#line 44 "status.m"
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

#line 44 "status.m"
    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
#line 44 "status.m"
    if (hlds__status__succeeded)
#line 44 "status.m"
      hlds__status__succeeded = MR_TRUE;
#line 44 "status.m"
    else
#line 44 "status.m"
      {
#line 44 "status.m"
        MR_Word hlds__status__V_3_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 44 "status.m"
        MR_Word hlds__status__V_4_4 = (MR_Word) hlds__status__HeadVar__2_2;

#line 4358 "hlds.status.c"
        {
#line 4360 "hlds.status.c"
          return hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__V_3_3, hlds__status__V_4_4);
        }
#line 44 "status.m"
      }
#line 44 "status.m"
    return hlds__status__succeeded;
#line 44 "status.m"
  }
#line 44 "status.m"
}

#line 446 "status.m"
static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
#line 446 "status.m"
  MR_Word hlds__status__StatusA_4,
#line 446 "status.m"
  MR_Word hlds__status__StatusB_5,
#line 446 "status.m"
  MR_Word * hlds__status__Status_6)
#line 446 "status.m"
{
#line 452 "status.m"
  {
#line 452 "status.m"
    MR_bool hlds__status__succeeded;
#line 452 "status.m"
    MR_Word hlds__status__CombinedStatus_7;

#line 459 "status.m"
#line 459 "status.m"
    switch (MR_tag((MR_Word) hlds__status__StatusA_4)) {
#line 459 "status.m"
      default:
#line 459 "status.m"
        hlds__status__succeeded = MR_FALSE;
#line 459 "status.m"
        break;
#line 459 "status.m"
      case (MR_Integer) 0:
#line 459 "status.m"
#line 459 "status.m"
        switch (MR_unmkbody(hlds__status__StatusA_4)) {
#line 459 "status.m"
          default:
#line 459 "status.m"
            hlds__status__succeeded = MR_FALSE;
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 0:
#line 482 "status.m"
            {
#line 482 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 482 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 1:
#line 540 "status.m"
            {
#line 538 "status.m"
              MR_Word hlds__status__Section_30;

#line 538 "status.m"
              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 538 "status.m"
              if (hlds__status__succeeded)
#line 538 "status.m"
                {
#line 538 "status.m"
                  hlds__status__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusB_5, (MR_Integer) 0)));
#line 539 "status.m"
                  hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 538 "status.m"
                }
#line 538 "status.m"
              else
#line 541 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 540 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 540 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 3:
#line 474 "status.m"
            {
#line 474 "status.m"
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 474 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 474 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 5:
#line 530 "status.m"
            {
#line 528 "status.m"
              hlds__status__succeeded = (hlds__status__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 530 "status.m"
              if (hlds__status__succeeded)
#line 529 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 530 "status.m"
              else
#line 531 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 530 "status.m"
              hlds__status__succeeded = MR_TRUE;
#line 530 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 7:
#line 475 "status.m"
            {
#line 475 "status.m"
              MR_Word hlds__status__Status3_20;

#line 515 "status.m"
#line 515 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 515 "status.m"
                default:
#line 515 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 515 "status.m"
                  break;
#line 515 "status.m"
                case (MR_Integer) 0:
#line 515 "status.m"
#line 515 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 515 "status.m"
                    default:
#line 515 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 0:
#line 520 "status.m"
                      {
#line 520 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 520 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 520 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 1:
#line 521 "status.m"
                      {
#line 521 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 521 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 521 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 3:
#line 519 "status.m"
                      {
#line 519 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 519 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 519 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 5:
#line 522 "status.m"
                      {
#line 522 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 522 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 522 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 7:
#line 516 "status.m"
                      {
#line 516 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 516 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 516 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                    case (MR_Integer) 8:
#line 518 "status.m"
                      {
#line 518 "status.m"
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 518 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 518 "status.m"
                      }
#line 515 "status.m"
                      break;
#line 515 "status.m"
                  }
#line 515 "status.m"
                  break;
#line 515 "status.m"
                case (MR_Integer) 2:
#line 517 "status.m"
                  {
#line 517 "status.m"
                    hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 517 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 517 "status.m"
                  }
#line 515 "status.m"
                  break;
#line 515 "status.m"
              }
#line 475 "status.m"
              if (hlds__status__succeeded)
#line 475 "status.m"
                {
#line 477 "status.m"
                  hlds__status__succeeded = (hlds__status__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 479 "status.m"
                  if (hlds__status__succeeded)
#line 478 "status.m"
                    hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 479 "status.m"
                  else
#line 480 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__Status3_20;
#line 479 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 475 "status.m"
                }
#line 475 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
          case (MR_Integer) 8:
#line 515 "status.m"
#line 515 "status.m"
            switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 515 "status.m"
              default:
#line 515 "status.m"
                hlds__status__succeeded = MR_FALSE;
#line 515 "status.m"
                break;
#line 515 "status.m"
              case (MR_Integer) 0:
#line 515 "status.m"
#line 515 "status.m"
                switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 515 "status.m"
                  default:
#line 515 "status.m"
                    hlds__status__succeeded = MR_FALSE;
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 0:
#line 520 "status.m"
                    {
#line 520 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 520 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 520 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 1:
#line 521 "status.m"
                    {
#line 521 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 521 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 521 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 3:
#line 519 "status.m"
                    {
#line 519 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 519 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 519 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 5:
#line 522 "status.m"
                    {
#line 522 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 522 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 522 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 7:
#line 516 "status.m"
                    {
#line 516 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 516 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 516 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                  case (MR_Integer) 8:
#line 518 "status.m"
                    {
#line 518 "status.m"
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 518 "status.m"
                      hlds__status__succeeded = MR_TRUE;
#line 518 "status.m"
                    }
#line 515 "status.m"
                    break;
#line 515 "status.m"
                }
#line 515 "status.m"
                break;
#line 515 "status.m"
              case (MR_Integer) 2:
#line 517 "status.m"
                {
#line 517 "status.m"
                  hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 517 "status.m"
                  hlds__status__succeeded = MR_TRUE;
#line 517 "status.m"
                }
#line 515 "status.m"
                break;
#line 515 "status.m"
            }
#line 459 "status.m"
            break;
#line 459 "status.m"
        }
#line 459 "status.m"
        break;
#line 459 "status.m"
      case (MR_Integer) 2:
#line 459 "status.m"
        {
#line 459 "status.m"
          MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusA_4, (MR_Integer) 0)));

#line 467 "status.m"
#line 467 "status.m"
          switch (hlds__status__ImportLocn_11) {
#line 467 "status.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 467 "status.m"
            case (MR_Integer) 2:
#line 467 "status.m"
            case (MR_Integer) 0:
#line 467 "status.m"
            case (MR_Integer) 1:
#line 493 "status.m"
#line 493 "status.m"
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
#line 493 "status.m"
                default:
#line 493 "status.m"
                  hlds__status__succeeded = MR_FALSE;
#line 493 "status.m"
                  break;
#line 493 "status.m"
                case (MR_Integer) 0:
#line 493 "status.m"
#line 493 "status.m"
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
#line 493 "status.m"
                    default:
#line 493 "status.m"
                      hlds__status__succeeded = MR_FALSE;
#line 493 "status.m"
                      break;
#line 493 "status.m"
                    case (MR_Integer) 0:
#line 503 "status.m"
                      {
#line 503 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 503 "status.m"
                      }
#line 493 "status.m"
                      break;
#line 493 "status.m"
                    case (MR_Integer) 1:
#line 505 "status.m"
                      {
#line 506 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[0]);
#line 505 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 505 "status.m"
                      }
#line 493 "status.m"
                      break;
#line 493 "status.m"
                    case (MR_Integer) 3:
#line 500 "status.m"
                      {
#line 500 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 500 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 500 "status.m"
                      }
#line 493 "status.m"
                      break;
#line 493 "status.m"
                    case (MR_Integer) 5:
#line 509 "status.m"
                      {
#line 509 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 509 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 509 "status.m"
                      }
#line 493 "status.m"
                      break;
#line 493 "status.m"
                    case (MR_Integer) 8:
#line 496 "status.m"
                      {
#line 497 "status.m"
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[1]);
#line 496 "status.m"
                        hlds__status__succeeded = MR_TRUE;
#line 496 "status.m"
                      }
#line 493 "status.m"
                      break;
#line 493 "status.m"
                  }
#line 493 "status.m"
                  break;
#line 493 "status.m"
                case (MR_Integer) 2:
#line 494 "status.m"
                  {
#line 494 "status.m"
                    hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
#line 494 "status.m"
                    hlds__status__succeeded = MR_TRUE;
#line 494 "status.m"
                  }
#line 493 "status.m"
                  break;
#line 493 "status.m"
              }
#line 467 "status.m"
              break;
#line 467 "status.m"
            case (MR_Integer) 3:
#line 468 "status.m"
              {
#line 470 "status.m"
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[2]);
#line 468 "status.m"
                hlds__status__succeeded = MR_TRUE;
#line 468 "status.m"
              }
#line 467 "status.m"
              break;
#line 467 "status.m"
          }
#line 459 "status.m"
        }
#line 459 "status.m"
        break;
#line 459 "status.m"
    }
#line 452 "status.m"
    if (hlds__status__succeeded)
#line 451 "status.m"
      *hlds__status__Status_6 = hlds__status__CombinedStatus_7;
#line 452 "status.m"
    else
#line 453 "status.m"
      {
#line 453 "status.m"
        {
#line 453 "status.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.old_combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 453 "status.m"
          return;
        }
#line 453 "status.m"
      }
#line 452 "status.m"
  }
#line 446 "status.m"
}

#line 371 "status.m"
static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
#line 371 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 371 "status.m"
{
#line 373 "status.m"
  while (MR_TRUE)
#line 373 "status.m"
    {
#line 373 "status.m"
      /* tailcall optimized into a loop */
#line 373 "status.m"
      {
#line 373 "status.m"
        MR_bool hlds__status__succeeded;
#line 373 "status.m"
        MR_Word hlds__status__HeadVar__2_2;

#line 373 "status.m"
#line 373 "status.m"
        switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
#line 373 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 373 "status.m"
          case (MR_Integer) 0:
#line 373 "status.m"
#line 373 "status.m"
            switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
#line 373 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 373 "status.m"
              case (MR_Integer) 0:
#line 376 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 1:
#line 377 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 2:
#line 378 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 3:
#line 379 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 4:
#line 380 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 5:
#line 373 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 6:
#line 381 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 7:
#line 374 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 373 "status.m"
                break;
#line 373 "status.m"
              case (MR_Integer) 8:
#line 375 "status.m"
                hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 373 "status.m"
                break;
#line 373 "status.m"
            }
#line 373 "status.m"
            break;
#line 373 "status.m"
          case (MR_Integer) 1:
#line 382 "status.m"
            {
#line 382 "status.m"
              MR_Word hlds__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 383 "status.m"
              /* direct tailcall eliminated */
#line 383 "status.m"
              {
#line 383 "status.m"
                MR_Word hlds__status__HeadVar__1__tmp_copy_1 = hlds__status__Status_3;

#line 383 "status.m"
                hlds__status__HeadVar__1_1 = hlds__status__HeadVar__1__tmp_copy_1;
#line 383 "status.m"
              }
#line 383 "status.m"
              continue;
#line 382 "status.m"
            }
#line 373 "status.m"
            break;
#line 373 "status.m"
          case (MR_Integer) 2:
#line 384 "status.m"
            {
#line 384 "status.m"
              MR_Word hlds__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

#line 390 "status.m"
              hlds__status__HeadVar__2_2 = ((&hlds__status_vector_common_1[0 + hlds__status__ImportLocn_4]))->hlds__status__vector_common_type_1_0__vct_1_f_0;
#line 384 "status.m"
            }
#line 373 "status.m"
            break;
#line 373 "status.m"
        }
#line 373 "status.m"
        return hlds__status__HeadVar__2_2;
#line 373 "status.m"
      }
#line 373 "status.m"
      break;
#line 373 "status.m"
    }
#line 371 "status.m"
}

#line 244 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
#line 244 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 244 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 244 "status.m"
{
#line 571 "status.m"
  {
#line 571 "status.m"
    MR_bool hlds__status__succeeded;
#line 571 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 574 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 571 "status.m"
  }
#line 244 "status.m"
}

#line 242 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
#line 242 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 242 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 242 "status.m"
{
#line 566 "status.m"
  {
#line 566 "status.m"
    MR_bool hlds__status__succeeded;
#line 566 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 569 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 566 "status.m"
  }
#line 242 "status.m"
}

#line 240 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
#line 240 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 240 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 240 "status.m"
{
#line 561 "status.m"
  {
#line 561 "status.m"
    MR_bool hlds__status__succeeded;
#line 561 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 564 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 561 "status.m"
  }
#line 240 "status.m"
}

#line 238 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
#line 238 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 238 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 238 "status.m"
{
#line 556 "status.m"
  {
#line 556 "status.m"
    MR_bool hlds__status__succeeded;
#line 556 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 559 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 556 "status.m"
  }
#line 238 "status.m"
}

#line 236 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
#line 236 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 236 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 236 "status.m"
{
#line 551 "status.m"
  {
#line 551 "status.m"
    MR_bool hlds__status__succeeded;
#line 551 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 554 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 551 "status.m"
  }
#line 236 "status.m"
}

#line 234 "status.m"
void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
#line 234 "status.m"
  MR_Word hlds__status__ItemMercuryStatus_3,
#line 234 "status.m"
  MR_Word * hlds__status__TypeStatus_4)
#line 234 "status.m"
{
#line 546 "status.m"
  {
#line 546 "status.m"
    MR_bool hlds__status__succeeded;
#line 546 "status.m"
    MR_Word hlds__status__OldImportStatus_5;

#line 581 "status.m"
    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
#line 593 "status.m"
      {
#line 593 "status.m"
        MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 597 "status.m"
#line 597 "status.m"
        switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
#line 597 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
          case (MR_Integer) 0:
#line 597 "status.m"
#line 597 "status.m"
            switch (MR_unmkbody(hlds__status__ItemImport_9)) {
#line 597 "status.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 597 "status.m"
              case (MR_Integer) 0:
#line 599 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 597 "status.m"
                break;
#line 597 "status.m"
              case (MR_Integer) 1:
#line 602 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "status.m"
                break;
#line 597 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
          case (MR_Integer) 1:
#line 595 "status.m"
            {
#line 595 "status.m"
              MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

#line 596 "status.m"
              {
#line 596 "status.m"
                hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "status.m"
                MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
#line 596 "status.m"
              }
#line 595 "status.m"
            }
#line 597 "status.m"
            break;
#line 597 "status.m"
        }
#line 593 "status.m"
      }
#line 581 "status.m"
    else
#line 581 "status.m"
      {
#line 581 "status.m"
        MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

#line 585 "status.m"
#line 585 "status.m"
        switch (hlds__status__ItemExport_8) {
#line 585 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 585 "status.m"
          case (MR_Integer) 2:
#line 590 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 0:
#line 584 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 585 "status.m"
            break;
#line 585 "status.m"
          case (MR_Integer) 1:
#line 587 "status.m"
            hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 585 "status.m"
            break;
#line 585 "status.m"
        }
#line 581 "status.m"
      }
#line 549 "status.m"
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
#line 546 "status.m"
  }
#line 234 "status.m"
}

#line 211 "status.m"
void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
#line 211 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 211 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 211 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 211 "status.m"
{
#line 443 "status.m"
  {
#line 443 "status.m"
    MR_bool hlds__status__succeeded;
#line 443 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 443 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 443 "status.m"
    MR_Word hlds__status__Status_6;

#line 444 "status.m"
    {
#line 444 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 443 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 443 "status.m"
  }
#line 211 "status.m"
}

#line 209 "status.m"
void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
#line 209 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 209 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 209 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 209 "status.m"
{
#line 440 "status.m"
  {
#line 440 "status.m"
    MR_bool hlds__status__succeeded;
#line 440 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 440 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 440 "status.m"
    MR_Word hlds__status__Status_6;

#line 441 "status.m"
    {
#line 441 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 440 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 440 "status.m"
  }
#line 209 "status.m"
}

#line 207 "status.m"
void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
#line 207 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 207 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 207 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 207 "status.m"
{
#line 437 "status.m"
  {
#line 437 "status.m"
    MR_bool hlds__status__succeeded;
#line 437 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 437 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 437 "status.m"
    MR_Word hlds__status__Status_6;

#line 438 "status.m"
    {
#line 438 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 437 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 437 "status.m"
  }
#line 207 "status.m"
}

#line 205 "status.m"
void MR_CALL 
hlds__status__mode_combine_status_3_p_0(
#line 205 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 205 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 205 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 205 "status.m"
{
#line 434 "status.m"
  {
#line 434 "status.m"
    MR_bool hlds__status__succeeded;
#line 434 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 434 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 434 "status.m"
    MR_Word hlds__status__Status_6;

#line 435 "status.m"
    {
#line 435 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 434 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 434 "status.m"
  }
#line 205 "status.m"
}

#line 203 "status.m"
void MR_CALL 
hlds__status__inst_combine_status_3_p_0(
#line 203 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 203 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 203 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 203 "status.m"
{
#line 431 "status.m"
  {
#line 431 "status.m"
    MR_bool hlds__status__succeeded;
#line 431 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 431 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 431 "status.m"
    MR_Word hlds__status__Status_6;

#line 432 "status.m"
    {
#line 432 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 431 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 431 "status.m"
  }
#line 203 "status.m"
}

#line 201 "status.m"
void MR_CALL 
hlds__status__type_combine_status_3_p_0(
#line 201 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 201 "status.m"
  MR_Word hlds__status__HeadVar__2_2,
#line 201 "status.m"
  MR_Word * hlds__status__HeadVar__3_3)
#line 201 "status.m"
{
#line 428 "status.m"
  {
#line 428 "status.m"
    MR_bool hlds__status__succeeded;
#line 428 "status.m"
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
#line 428 "status.m"
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
#line 428 "status.m"
    MR_Word hlds__status__Status_6;

#line 429 "status.m"
    {
#line 429 "status.m"
      hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    }
#line 428 "status.m"
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
#line 428 "status.m"
  }
#line 201 "status.m"
}

#line 196 "status.m"
void MR_CALL 
hlds__status__instance_make_status_abstract_2_p_0(
#line 196 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 196 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 196 "status.m"
{
#line 410 "status.m"
  {
#line 410 "status.m"
    MR_bool hlds__status__succeeded;
#line 410 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 410 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 410 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 410 "status.m"
  }
#line 196 "status.m"
}

#line 194 "status.m"
void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
#line 194 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 194 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 194 "status.m"
{
#line 407 "status.m"
  {
#line 407 "status.m"
    MR_bool hlds__status__succeeded;
#line 407 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 407 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 407 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 407 "status.m"
  }
#line 194 "status.m"
}

#line 193 "status.m"
void MR_CALL 
hlds__status__pred_make_status_abstract_2_p_0(
#line 193 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 193 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 193 "status.m"
{
#line 404 "status.m"
  {
#line 404 "status.m"
    MR_bool hlds__status__succeeded;
#line 404 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 404 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 404 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 404 "status.m"
  }
#line 193 "status.m"
}

#line 192 "status.m"
void MR_CALL 
hlds__status__mode_make_status_abstract_2_p_0(
#line 192 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 192 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 192 "status.m"
{
#line 402 "status.m"
  {
#line 402 "status.m"
    MR_bool hlds__status__succeeded;
#line 402 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 402 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 402 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 402 "status.m"
  }
#line 192 "status.m"
}

#line 191 "status.m"
void MR_CALL 
hlds__status__inst_make_status_abstract_2_p_0(
#line 191 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 191 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 191 "status.m"
{
#line 400 "status.m"
  {
#line 400 "status.m"
    MR_bool hlds__status__succeeded;
#line 400 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 400 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 400 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 400 "status.m"
  }
#line 191 "status.m"
}

#line 190 "status.m"
void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
#line 190 "status.m"
  MR_Word hlds__status__HeadVar__1_1,
#line 190 "status.m"
  MR_Word * hlds__status__HeadVar__2_2)
#line 190 "status.m"
{
#line 398 "status.m"
  {
#line 398 "status.m"
    MR_bool hlds__status__succeeded;
#line 398 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 398 "status.m"
    MR_Word hlds__status__AbstractStatus_4;

#line 417 "status.m"
    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 419 "status.m"
    if (hlds__status__succeeded)
#line 418 "status.m"
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 419 "status.m"
    else
#line 421 "status.m"
      {
#line 419 "status.m"
        MR_Word hlds__status__V_7_7;

#line 419 "status.m"
        hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 419 "status.m"
        if (hlds__status__succeeded)
#line 419 "status.m"
          {
#line 419 "status.m"
            hlds__status__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
#line 420 "status.m"
            hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 419 "status.m"
          }
#line 419 "status.m"
        else
#line 422 "status.m"
          hlds__status__AbstractStatus_4 = hlds__status__Status_3;
#line 421 "status.m"
      }
#line 398 "status.m"
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
#line 398 "status.m"
  }
#line 190 "status.m"
}

#line 186 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
#line 186 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 186 "status.m"
{
#line 368 "status.m"
  {
#line 368 "status.m"
    MR_bool hlds__status__succeeded;
#line 368 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 368 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 369 "status.m"
    {
#line 369 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 368 "status.m"
    return hlds__status__HeadVar__2_2;
#line 368 "status.m"
  }
#line 186 "status.m"
}

#line 185 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
#line 185 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 185 "status.m"
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
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 366 "status.m"
    return hlds__status__HeadVar__2_2;
#line 366 "status.m"
  }
#line 185 "status.m"
}

#line 184 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
#line 184 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 184 "status.m"
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
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 364 "status.m"
    return hlds__status__HeadVar__2_2;
#line 364 "status.m"
  }
#line 184 "status.m"
}

#line 183 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
#line 183 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 183 "status.m"
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
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 362 "status.m"
    return hlds__status__HeadVar__2_2;
#line 362 "status.m"
  }
#line 183 "status.m"
}

#line 182 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
#line 182 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 182 "status.m"
{
#line 360 "status.m"
  {
#line 360 "status.m"
    MR_bool hlds__status__succeeded;
#line 360 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 360 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 361 "status.m"
    {
#line 361 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 360 "status.m"
    return hlds__status__HeadVar__2_2;
#line 360 "status.m"
  }
#line 182 "status.m"
}

#line 181 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
#line 181 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 181 "status.m"
{
#line 358 "status.m"
  {
#line 358 "status.m"
    MR_bool hlds__status__succeeded;
#line 358 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 358 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 359 "status.m"
    {
#line 359 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    }
#line 358 "status.m"
    return hlds__status__HeadVar__2_2;
#line 358 "status.m"
  }
#line 181 "status.m"
}

#line 176 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
#line 176 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 176 "status.m"
{
#line 339 "status.m"
  {
#line 339 "status.m"
    MR_bool hlds__status__succeeded;
#line 339 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 339 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 339 "status.m"
    return hlds__status__HeadVar__2_2;
#line 339 "status.m"
  }
#line 176 "status.m"
}

#line 175 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
#line 175 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 175 "status.m"
{
#line 337 "status.m"
  {
#line 337 "status.m"
    MR_bool hlds__status__succeeded;
#line 337 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 337 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 337 "status.m"
    return hlds__status__HeadVar__2_2;
#line 337 "status.m"
  }
#line 175 "status.m"
}

#line 174 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
#line 174 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 174 "status.m"
{
#line 335 "status.m"
  {
#line 335 "status.m"
    MR_bool hlds__status__succeeded;
#line 335 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 335 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 335 "status.m"
    return hlds__status__HeadVar__2_2;
#line 335 "status.m"
  }
#line 174 "status.m"
}

#line 173 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
#line 173 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 173 "status.m"
{
#line 333 "status.m"
  {
#line 333 "status.m"
    MR_bool hlds__status__succeeded;
#line 333 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 333 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 333 "status.m"
    return hlds__status__HeadVar__2_2;
#line 333 "status.m"
  }
#line 173 "status.m"
}

#line 172 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
#line 172 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 172 "status.m"
{
#line 331 "status.m"
  {
#line 331 "status.m"
    MR_bool hlds__status__succeeded;
#line 331 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 331 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 331 "status.m"
    return hlds__status__HeadVar__2_2;
#line 331 "status.m"
  }
#line 172 "status.m"
}

#line 171 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
#line 171 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 171 "status.m"
{
#line 329 "status.m"
  {
#line 329 "status.m"
    MR_bool hlds__status__succeeded;
#line 329 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 329 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 329 "status.m"
    return hlds__status__HeadVar__2_2;
#line 329 "status.m"
  }
#line 171 "status.m"
}

#line 164 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
#line 164 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 164 "status.m"
{
#line 319 "status.m"
  {
#line 319 "status.m"
    MR_bool hlds__status__succeeded;
#line 319 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 319 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 319 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 319 "status.m"
    return hlds__status__HeadVar__2_2;
#line 319 "status.m"
  }
#line 164 "status.m"
}

#line 163 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
#line 163 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 163 "status.m"
{
#line 317 "status.m"
  {
#line 317 "status.m"
    MR_bool hlds__status__succeeded;
#line 317 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 317 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 317 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 317 "status.m"
    return hlds__status__HeadVar__2_2;
#line 317 "status.m"
  }
#line 163 "status.m"
}

#line 162 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
#line 162 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 162 "status.m"
{
#line 315 "status.m"
  {
#line 315 "status.m"
    MR_bool hlds__status__succeeded;
#line 315 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 315 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 315 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 315 "status.m"
    return hlds__status__HeadVar__2_2;
#line 315 "status.m"
  }
#line 162 "status.m"
}

#line 161 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
#line 161 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 161 "status.m"
{
#line 313 "status.m"
  {
#line 313 "status.m"
    MR_bool hlds__status__succeeded;
#line 313 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 313 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 313 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 313 "status.m"
    return hlds__status__HeadVar__2_2;
#line 313 "status.m"
  }
#line 161 "status.m"
}

#line 160 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
#line 160 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 160 "status.m"
{
#line 311 "status.m"
  {
#line 311 "status.m"
    MR_bool hlds__status__succeeded;
#line 311 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 311 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 311 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 311 "status.m"
    return hlds__status__HeadVar__2_2;
#line 311 "status.m"
  }
#line 160 "status.m"
}

#line 159 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
#line 159 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 159 "status.m"
{
#line 309 "status.m"
  {
#line 309 "status.m"
    MR_bool hlds__status__succeeded;
#line 309 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 309 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 309 "status.m"
    MR_Word hlds__status__V_5_5;

#line 344 "status.m"
#line 344 "status.m"
    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
#line 344 "status.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
      case (MR_Integer) 0:
#line 344 "status.m"
#line 344 "status.m"
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
#line 344 "status.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "status.m"
          case (MR_Integer) 0:
#line 348 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 1:
#line 346 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 2:
#line 347 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 3:
#line 349 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 4:
#line 350 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 5:
#line 351 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 6:
#line 352 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 7:
#line 353 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
          case (MR_Integer) 8:
#line 354 "status.m"
            hlds__status__V_5_5 = (MR_Integer) 1;
#line 344 "status.m"
            break;
#line 344 "status.m"
        }
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 1:
#line 345 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
      case (MR_Integer) 2:
#line 344 "status.m"
        hlds__status__V_5_5 = (MR_Integer) 0;
#line 344 "status.m"
        break;
#line 344 "status.m"
    }
#line 325 "status.m"
    {
#line 325 "status.m"
      return hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__V_5_5);
    }
#line 309 "status.m"
    return hlds__status__HeadVar__2_2;
#line 309 "status.m"
  }
#line 159 "status.m"
}

#line 151 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
#line 151 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 151 "status.m"
{
#line 292 "status.m"
  {
#line 292 "status.m"
    MR_bool hlds__status__succeeded;
#line 292 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 292 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 292 "status.m"
    return hlds__status__HeadVar__2_2;
#line 292 "status.m"
  }
#line 151 "status.m"
}

#line 150 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
#line 150 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 150 "status.m"
{
#line 290 "status.m"
  {
#line 290 "status.m"
    MR_bool hlds__status__succeeded;
#line 290 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 290 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 290 "status.m"
    return hlds__status__HeadVar__2_2;
#line 290 "status.m"
  }
#line 150 "status.m"
}

#line 149 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
#line 149 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 149 "status.m"
{
#line 288 "status.m"
  {
#line 288 "status.m"
    MR_bool hlds__status__succeeded;
#line 288 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 288 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 288 "status.m"
    return hlds__status__HeadVar__2_2;
#line 288 "status.m"
  }
#line 149 "status.m"
}

#line 148 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
#line 148 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 148 "status.m"
{
#line 286 "status.m"
  {
#line 286 "status.m"
    MR_bool hlds__status__succeeded;
#line 286 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 286 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 286 "status.m"
    return hlds__status__HeadVar__2_2;
#line 286 "status.m"
  }
#line 148 "status.m"
}

#line 147 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
#line 147 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 147 "status.m"
{
#line 284 "status.m"
  {
#line 284 "status.m"
    MR_bool hlds__status__succeeded;
#line 284 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 284 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 284 "status.m"
    return hlds__status__HeadVar__2_2;
#line 284 "status.m"
  }
#line 147 "status.m"
}

#line 146 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
#line 146 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 146 "status.m"
{
#line 282 "status.m"
  {
#line 282 "status.m"
    MR_bool hlds__status__succeeded;
#line 282 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 282 "status.m"
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
#line 299 "status.m"
    MR_Word hlds__status__V_5_5;

#line 299 "status.m"
    {
#line 299 "status.m"
      hlds__status__V_5_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    }
#line 299 "status.m"
    hlds__status__succeeded = (hlds__status__V_5_5 == (MR_Integer) 1);
#line 299 "status.m"
    if (hlds__status__succeeded)
#line 299 "status.m"
      {
#line 300 "status.m"
        hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 300 "status.m"
        hlds__status__succeeded = !(hlds__status__succeeded);
#line 299 "status.m"
      }
#line 297 "status.m"
    if (hlds__status__succeeded)
#line 302 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 297 "status.m"
    else
#line 304 "status.m"
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 282 "status.m"
    return hlds__status__HeadVar__2_2;
#line 282 "status.m"
  }
#line 146 "status.m"
}

#line 139 "status.m"
MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
#line 139 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 139 "status.m"
{
#line 268 "status.m"
  {
#line 268 "status.m"
    MR_bool hlds__status__succeeded;
#line 268 "status.m"
    MR_Word hlds__status__HeadVar__2_2;

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
#line 272 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 1:
#line 270 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 2:
#line 271 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 3:
#line 273 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 4:
#line 274 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 5:
#line 275 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 6:
#line 276 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 7:
#line 277 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
#line 268 "status.m"
            break;
#line 268 "status.m"
          case (MR_Integer) 8:
#line 278 "status.m"
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
            break;
#line 268 "status.m"
        }
#line 268 "status.m"
        break;
#line 268 "status.m"
      case (MR_Integer) 1:
#line 269 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
        break;
#line 268 "status.m"
      case (MR_Integer) 2:
#line 268 "status.m"
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
#line 268 "status.m"
        break;
#line 268 "status.m"
    }
#line 268 "status.m"
    return hlds__status__HeadVar__2_2;
#line 268 "status.m"
  }
#line 139 "status.m"
}

#line 137 "status.m"
MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
#line 137 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 137 "status.m"
{
#line 265 "status.m"
  {
#line 265 "status.m"
    MR_bool hlds__status__succeeded;
#line 265 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 265 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 266 "status.m"
    {
#line 266 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 265 "status.m"
    return hlds__status__HeadVar__2_2;
#line 265 "status.m"
  }
#line 137 "status.m"
}

#line 136 "status.m"
MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
#line 136 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 136 "status.m"
{
#line 263 "status.m"
  {
#line 263 "status.m"
    MR_bool hlds__status__succeeded;
#line 263 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 263 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 264 "status.m"
    {
#line 264 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 263 "status.m"
    return hlds__status__HeadVar__2_2;
#line 263 "status.m"
  }
#line 136 "status.m"
}

#line 135 "status.m"
MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
#line 135 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 135 "status.m"
{
#line 261 "status.m"
  {
#line 261 "status.m"
    MR_bool hlds__status__succeeded;
#line 261 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 261 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 262 "status.m"
    {
#line 262 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 261 "status.m"
    return hlds__status__HeadVar__2_2;
#line 261 "status.m"
  }
#line 135 "status.m"
}

#line 134 "status.m"
MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
#line 134 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 134 "status.m"
{
#line 259 "status.m"
  {
#line 259 "status.m"
    MR_bool hlds__status__succeeded;
#line 259 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 259 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 260 "status.m"
    {
#line 260 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 259 "status.m"
    return hlds__status__HeadVar__2_2;
#line 259 "status.m"
  }
#line 134 "status.m"
}

#line 133 "status.m"
MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
#line 133 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 133 "status.m"
{
#line 257 "status.m"
  {
#line 257 "status.m"
    MR_bool hlds__status__succeeded;
#line 257 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 257 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 258 "status.m"
    {
#line 258 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 257 "status.m"
    return hlds__status__HeadVar__2_2;
#line 257 "status.m"
  }
#line 133 "status.m"
}

#line 132 "status.m"
MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
#line 132 "status.m"
  MR_Word hlds__status__HeadVar__1_1)
#line 132 "status.m"
{
#line 255 "status.m"
  {
#line 255 "status.m"
    MR_bool hlds__status__succeeded;
#line 255 "status.m"
    MR_Word hlds__status__HeadVar__2_2;
#line 255 "status.m"
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

#line 256 "status.m"
    {
#line 256 "status.m"
      return hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    }
#line 255 "status.m"
    return hlds__status__HeadVar__2_2;
#line 255 "status.m"
  }
#line 132 "status.m"
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
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_export_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_import_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0);
	MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_mode_status_0);
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
