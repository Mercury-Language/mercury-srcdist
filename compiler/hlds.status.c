/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version rotd-2020-05-31
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hlds.status.
// :- implementation.

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
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
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
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0;

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_item_import_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_item_mercury_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instmode_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instmode_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_old_import_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0[9];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_old_import_status_0[11];

static const MR_Integer hlds__status__hlds__status__functor_number_map_old_import_status_0[11];

static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0;

static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0;

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0;

static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5,
  MR_Word * Status_6);

static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__status_scalar_common_2[4][1];


/* sealed */ struct hlds__status__vector_common_type_1_0_s {
  const MR_Word hlds__status__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct hlds__status__vector_common_type_1_0_s hlds__status_vector_common_1[5];



static /* final */ const MR_Box hlds__status_scalar_common_2[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};


static /* final */ const struct hlds__status__vector_common_type_1_0_s hlds__status_vector_common_1[5] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0 = {
  (MR_String) "inst_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_inst_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____inst_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____inst_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "inst_status",
  {     &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_inst_status_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0 = {
  (MR_String) "instance_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____instance_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instance_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instance_status",
  {     &hlds__status__hlds__status__notag_functor_desc_instance_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_instance_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_instance_status_0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0 = {
  (MR_String) "instmode_export_nowhere",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1 = {
  (MR_String) "instmode_export_only_submodules",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2 = {
  (MR_String) "instmode_export_anywhere",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_export_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_export",
  {     hlds__status__hlds__status__enum_name_ordered_instmode_export_0 },
  {     hlds__status__hlds__status__enum_value_ordered_instmode_export_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_instmode_export_0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_0 = {
  (MR_String) "instmode_import_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_1 = {
  (MR_String) "instmode_import_abstract",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_2 = {
  (MR_String) "instmode_import_opt",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_2
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_import_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_import",
  {     hlds__status__hlds__status__enum_name_ordered_instmode_import_0 },
  {     hlds__status__hlds__status__enum_value_ordered_instmode_import_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_instmode_import_0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0 = {
  (MR_String) "item_export_nowhere",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1 = {
  (MR_String) "item_export_only_submodules",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2 = {
  (MR_String) "item_export_anywhere",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_item_export_0_1
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_export_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____item_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_export",
  {     hlds__status__hlds__status__enum_name_ordered_item_export_0 },
  {     hlds__status__hlds__status__enum_value_ordered_item_export_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_item_export_0
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)
};

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_item_import_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0 = {
  (MR_String) "item_import_int_concrete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_item_import_0_0,
  NULL,
  hlds__status__hlds__status__field_locns_item_import_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1 = {
  (MR_String) "item_import_int_abstract",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2 = {
  (MR_String) "item_import_opt_int",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_item_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_0,
  &hlds__status__hlds__status__du_functor_desc_item_import_0_2
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_import_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_import",
  {     hlds__status__hlds__status__du_name_ordered_item_import_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_item_import_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_item_import_0
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_export_0)
};

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_item_mercury_status_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0 = {
  (MR_String) "item_defined_in_this_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_item_mercury_status_0_0,
  NULL,
  hlds__status__hlds__status__field_locns_item_mercury_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_import_0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1 = {
  (MR_String) "item_defined_in_other_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__status__hlds__status__field_types_item_mercury_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_mercury_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_mercury_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_item_mercury_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_mercury_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_mercury_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_mercury_status",
  {     hlds__status__hlds__status__du_name_ordered_item_mercury_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_item_mercury_status_0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0,
  &hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____maybe_opt_imported_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____maybe_opt_imported_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "maybe_opt_imported",
  {     hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0 },
  {     hlds__status__hlds__status__enum_value_ordered_maybe_opt_imported_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0 = {
  (MR_String) "mode_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_mode_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____mode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____mode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "mode_status",
  {     &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_mode_status_0
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instmode_export_0)
};

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instmode_status_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0 = {
  (MR_String) "instmode_defined_in_this_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_new_instmode_status_0_0,
  NULL,
  hlds__status__hlds__status__field_locns_new_instmode_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instmode_import_0)
};

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instmode_status_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1 = {
  (MR_String) "instmode_defined_in_other_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__status__hlds__status__field_types_new_instmode_status_0_1,
  NULL,
  hlds__status__hlds__status__field_locns_new_instmode_status_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_new_instmode_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____new_instmode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____new_instmode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "new_instmode_status",
  {     hlds__status__hlds__status__du_name_ordered_new_instmode_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_new_instmode_status_0
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0 = {
  (MR_String) "status_external",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_old_import_status_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)
};

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_old_import_status_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1 = {
  (MR_String) "status_imported",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__status__hlds__status__field_types_old_import_status_0_1,
  NULL,
  hlds__status__hlds__status__field_locns_old_import_status_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2 = {
  (MR_String) "status_opt_imported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3 = {
  (MR_String) "status_abstract_imported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4 = {
  (MR_String) "status_pseudo_imported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5 = {
  (MR_String) "status_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6 = {
  (MR_String) "status_opt_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7 = {
  (MR_String) "status_abstract_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8 = {
  (MR_String) "status_pseudo_exported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9 = {
  (MR_String) "status_exported_to_submodules",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10 = {
  (MR_String) "status_local",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

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

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1] = {
  &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3] = {
  {
    UINT32_C(9),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2,
    INT8_C(-1)
  }
};

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

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_old_import_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____old_import_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____old_import_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "old_import_status",
  {     hlds__status__hlds__status__du_name_ordered_old_import_status_0 },
  {     hlds__status__hlds__status__du_ptag_ordered_old_import_status_0 },
  (MR_Integer) 11,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_old_import_status_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_pred_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____pred_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____pred_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "pred_status",
  {     &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_pred_status_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____type_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____type_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "type_status",
  {     &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_type_status_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 = {
  (MR_String) "typeclass_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____typeclass_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____typeclass_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "typeclass_status",
  {     &hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 },
  {     &hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_typeclass_status_0
};

void MR_CALL 
hlds__status____Compare____typeclass_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____old_import_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____old_import_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____type_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____old_import_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____old_import_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____pred_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____old_import_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____old_import_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____mode_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____new_instmode_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____new_instmode_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        hlds__status____Compare____item_import_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Var_18 = (MR_Integer) (Var_17);
        MR_Integer Var_19 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_18 < Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_18 > Var_19);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__status____Unify____item_import_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Integer Var_14 = (MR_Integer) (Var_13);
                  MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_14 < Var_15);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_14 > Var_15);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instmode_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instmode_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instance_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____old_import_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 6:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 7:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 8:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word next_value_of_HeadVar__2_2 = Var_52;
                  MR_Word next_value_of_HeadVar__3_3 = ArgY1_5;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Integer Var_54 = (MR_Integer) (Var_53);
                  MR_Integer Var_55 = (MR_Integer) (ArgY1_20);

                  succeeded = (Var_54 < Var_55);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_54 > Var_55);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____old_import_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_20 == CastX_19);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_22 == CastX_21);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_24 == CastX_23);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = ArgX1_3;
              next_value_of_HeadVar__2_2 = ArgY1_4;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__status____Compare____inst_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__status____Compare____new_instmode_status_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Var_18 = (MR_Integer) (Var_16);
        MR_Integer Var_19 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_18 < Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_18 > Var_19);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Var_20 = (MR_Integer) (Var_17);
        MR_Integer Var_21 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_20 < Var_21);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_20 > Var_21);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__status____Unify____new_instmode_status_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * PredStatus_4)
{
  {
    MR_Word OldImportStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_9, (MR_Integer) 0))) & (MR_Integer) 7);

            {
              OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 12U);
          break;
        case (MR_Integer) 0:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 32U);
          break;
        case (MR_Integer) 1:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 28U);
          break;
      }
    }
    *PredStatus_4 = (MR_Word) (OldImportStatus_5);
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * InstanceStatus_4)
{
  {
    MR_Word OldImportStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_9, (MR_Integer) 0))) & (MR_Integer) 7);

            {
              OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 12U);
          break;
        case (MR_Integer) 0:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 32U);
          break;
        case (MR_Integer) 1:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 28U);
          break;
      }
    }
    *InstanceStatus_4 = (MR_Word) (OldImportStatus_5);
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * TypeClassStatus_4)
{
  {
    MR_Word OldImportStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_9, (MR_Integer) 0))) & (MR_Integer) 7);

            {
              OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 12U);
          break;
        case (MR_Integer) 0:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 32U);
          break;
        case (MR_Integer) 1:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 28U);
          break;
      }
    }
    *TypeClassStatus_4 = (MR_Word) (OldImportStatus_5);
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * ModeStatus_4)
{
  {
    MR_Word InstModeStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));
      MR_Word InstImport_12;

      switch (MR_tag((MR_Word) ItemImport_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              InstImport_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              InstImport_12 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          InstImport_12 = (MR_Integer) 0;
          break;
      }
      {
        InstModeStatus_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstImport_12));
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word InstExport_9;

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          InstExport_9 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          InstExport_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          InstExport_9 = (MR_Integer) 1;
          break;
      }
      {
        InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstExport_9));
      }
    }
    *ModeStatus_4 = (MR_Word) (InstModeStatus_5);
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * InstStatus_4)
{
  {
    MR_Word InstModeStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));
      MR_Word InstImport_12;

      switch (MR_tag((MR_Word) ItemImport_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              InstImport_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              InstImport_12 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          InstImport_12 = (MR_Integer) 0;
          break;
      }
      {
        InstModeStatus_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstImport_12));
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word InstExport_9;

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          InstExport_9 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          InstExport_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          InstExport_9 = (MR_Integer) 1;
          break;
      }
      {
        InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstExport_9));
      }
    }
    *InstStatus_4 = (MR_Word) (InstModeStatus_5);
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * TypeStatus_4)
{
  {
    MR_Word OldImportStatus_5;

    if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 1:
              OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_9, (MR_Integer) 0))) & (MR_Integer) 7);

            {
              OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ItemExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 12U);
          break;
        case (MR_Integer) 0:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 32U);
          break;
        case (MR_Integer) 1:
          OldImportStatus_5 = (MR_Word) ((MR_Unsigned) 28U);
          break;
      }
    }
    *TypeStatus_4 = (MR_Word) (OldImportStatus_5);
  }
}

void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word Status_6;

    hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &Status_6);
    *HeadVar__3_3 = (MR_Word) (Status_6);
  }
}

void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word Status_6;

    hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &Status_6);
    *HeadVar__3_3 = (MR_Word) (Status_6);
  }
}

void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word Status_6;

    hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &Status_6);
    *HeadVar__3_3 = (MR_Word) (Status_6);
  }
}

void MR_CALL 
hlds__status__type_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
    MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
    MR_Word Status_6;

    hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &Status_6);
    *HeadVar__3_3 = (MR_Word) (Status_6);
  }
}

static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5,
  MR_Word * Status_6)
{
  {
    MR_bool succeeded;
    MR_Word CombinedStatus_7;

    switch (MR_tag((MR_Word) StatusA_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(StatusA_4)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = ((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 2);
              if (succeeded)
                CombinedStatus_7 = StatusB_5;
              else
                CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 4U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 12U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              succeeded = (StatusB_5 == (MR_Word) ((MR_Unsigned) 12U));
              if (succeeded)
                CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 12U);
              else
                CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Status3_20;

              switch (MR_tag((MR_Word) StatusB_5)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(StatusB_5)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 32U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 32U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 12U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 20U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 28U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        Status3_20 = (MR_Word) ((MR_Unsigned) 32U);
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Status3_20 = (MR_Word) ((MR_Unsigned) 32U);
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = (Status3_20 == (MR_Word) ((MR_Unsigned) 32U));
                if (succeeded)
                  CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 28U);
                else
                  CombinedStatus_7 = Status3_20;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 8:
            switch (MR_tag((MR_Word) StatusB_5)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(StatusB_5)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 12U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 20U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 28U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 32U);
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ImportLocn_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StatusA_4, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (ImportLocn_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
              {
                CombinedStatus_7 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[0]));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                CombinedStatus_7 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[1]));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) StatusB_5)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(StatusB_5)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 0U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        CombinedStatus_7 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[2]));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 12U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        CombinedStatus_7 = (MR_Word) ((MR_Unsigned) 20U);
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        CombinedStatus_7 = (MR_Word) (MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[3]));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    CombinedStatus_7 = StatusB_5;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    if (succeeded)
      *Status_6 = CombinedStatus_7;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.old_combine_status\'/3", (MR_String) "unexpected status for type definition");
        return;
      }
  }
}

void MR_CALL 
hlds__status__instance_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word AbstractStatus_4;

    succeeded = (Status_3 == (MR_Word) ((MR_Unsigned) 12U));
    if (succeeded)
      AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 20U);
    else
    {
      succeeded = ((MR_tag((MR_Word) Status_3)) == (MR_Integer) 2);
      if (succeeded)
        AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
        AbstractStatus_4 = Status_3;
    }
    *HeadVar__2_2 = (MR_Word) (AbstractStatus_4);
  }
}

void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word AbstractStatus_4;

    succeeded = (Status_3 == (MR_Word) ((MR_Unsigned) 12U));
    if (succeeded)
      AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 20U);
    else
    {
      succeeded = ((MR_tag((MR_Word) Status_3)) == (MR_Integer) 2);
      if (succeeded)
        AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
        AbstractStatus_4 = Status_3;
    }
    *HeadVar__2_2 = (MR_Word) (AbstractStatus_4);
  }
}

void MR_CALL 
hlds__status__pred_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word AbstractStatus_4;

    succeeded = (Status_3 == (MR_Word) ((MR_Unsigned) 12U));
    if (succeeded)
      AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 20U);
    else
    {
      succeeded = ((MR_tag((MR_Word) Status_3)) == (MR_Integer) 2);
      if (succeeded)
        AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
        AbstractStatus_4 = Status_3;
    }
    *HeadVar__2_2 = (MR_Word) (AbstractStatus_4);
  }
}

void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word AbstractStatus_4;

    succeeded = (Status_3 == (MR_Word) ((MR_Unsigned) 12U));
    if (succeeded)
      AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 20U);
    else
    {
      succeeded = ((MR_tag((MR_Word) Status_3)) == (MR_Integer) 2);
      if (succeeded)
        AbstractStatus_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
        AbstractStatus_4 = Status_3;
    }
    *HeadVar__2_2 = (MR_Word) (AbstractStatus_4);
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
  MR_Word ModeStatus_3)
{
  {
    MR_Word IsDefnImplSection_4;
    MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsDefnImplSection_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          IsDefnImplSection_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          IsDefnImplSection_4 = (MR_Integer) 1;
          break;
      }
    }
    return IsDefnImplSection_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
  MR_Word InstStatus_3)
{
  {
    MR_Word IsDefnImplSection_4;
    MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsDefnImplSection_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          IsDefnImplSection_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          IsDefnImplSection_4 = (MR_Integer) 1;
          break;
      }
    }
    return IsDefnImplSection_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word next_value_of_HeadVar__1_1 = Status_3;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ImportLocn_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

          HeadVar__2_2 = ((&hlds__status_vector_common_1[0 + ImportLocn_4]))->hlds__status__vector_common_type_1_0__vct_1_f_0;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
  MR_Word ModeStatus_3)
{
  {
    MR_Word IsDefnThisModule_4;
    MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsDefnThisModule_4 = (MR_Integer) 0;
    else
      IsDefnThisModule_4 = (MR_Integer) 1;
    return IsDefnThisModule_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
  MR_Word InstStatus_3)
{
  {
    MR_Word IsDefnThisModule_4;
    MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsDefnThisModule_4 = (MR_Integer) 0;
    else
      IsDefnThisModule_4 = (MR_Integer) 1;
    return IsDefnThisModule_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Var_5 = (MR_Integer) 0;
        break;
    }
    HeadVar__2_2 = mercury__bool__not_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Var_5 = (MR_Integer) 0;
        break;
    }
    HeadVar__2_2 = mercury__bool__not_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Var_5 = (MR_Integer) 0;
        break;
    }
    HeadVar__2_2 = mercury__bool__not_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
  MR_Word ModeStatus_3)
{
  {
    MR_Word IsImported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsImported_4 = (MR_Integer) 1;
    else
      IsImported_4 = (MR_Integer) 0;
    return IsImported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
  MR_Word InstStatus_3)
{
  {
    MR_Word IsImported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsImported_4 = (MR_Integer) 1;
    else
      IsImported_4 = (MR_Integer) 0;
    return IsImported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    switch (MR_tag((MR_Word) OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Var_5 = (MR_Integer) 0;
        break;
    }
    HeadVar__2_2 = mercury__bool__not_1_f_0(Var_5);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    Var_5 = hlds__status__old_status_is_exported_1_f_0(Status_3);
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    Var_5 = hlds__status__old_status_is_exported_1_f_0(Status_3);
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    Var_5 = hlds__status__old_status_is_exported_1_f_0(Status_3);
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
  MR_Word ModeStatus_3)
{
  {
    MR_Word IsExported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
  MR_Word InstStatus_3)
{
  {
    MR_Word IsExported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_5;

    Var_5 = hlds__status__old_status_is_exported_1_f_0(Status_3);
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
      HeadVar__2_2 = (MR_Integer) 0;
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
  MR_Word ModeStatus_3)
{
  {
    MR_Word IsExported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
  MR_Word InstStatus_3)
{
  {
    MR_Word IsExported_4;
    MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

    if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
      IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word InstModeExport_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstModeStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

    HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____inst_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____instance_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____instmode_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____instmode_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____instmode_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____instmode_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____item_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____item_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____item_mercury_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____maybe_opt_imported_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____mode_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____new_instmode_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____new_instmode_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____old_import_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____pred_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__status____Compare____typeclass_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__status__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.status.
