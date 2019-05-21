/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_0;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_1;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_2;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_instmode_import_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_item_export_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_item_export_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_export_0[3];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1;

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_item_import_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_item_import_0[3];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1];

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

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instmode_status_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instmode_status_0[2];

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1];

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
  MR_Word hlds__status__StatusA_4,
  MR_Word hlds__status__StatusB_5,
  MR_Word * hlds__status__Status_6);

static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1);

static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3);


static /* final */ const MR_Box hlds__status_scalar_common_2[3][1];


/* sealed */ struct hlds__status__vector_common_type_1_0_s {
  const MR_Word hlds__status__vector_common_type_1_0__vct_1_f_0;
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



static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0 = {
  (MR_String) "inst_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_inst_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_instance_status_0 = {
  (MR_String) "instance_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0 = {
  (MR_String) "instmode_export_nowhere",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1 = {
  (MR_String) "instmode_export_only_submodules",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2 = {
  (MR_String) "instmode_export_anywhere",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_instmode_import_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_0 = {
  (MR_String) "instmode_import_plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_instmode_import_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_1 = {
  (MR_String) "instmode_import_abstract",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_instmode_import_0_2 = {
  (MR_String) "instmode_import_opt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_instmode_import_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_instmode_import_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_instmode_import_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_instmode_import_0[3] = {
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_1,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_2,
  &hlds__status__hlds__status__du_functor_desc_instmode_import_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_import_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0 = {
  (MR_String) "instmode_import_plain_imp",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1 = {
  (MR_String) "instmode_import_plain_int",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2 = {
  (MR_String) "instmode_import_plain_ancestors_priv_int_file",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_value_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_plain_locn_0[3] = {
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instmode_import_plain_locn_0_1
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_plain_locn_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instmode_import_plain_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0 = {
  (MR_String) "item_export_nowhere",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1 = {
  (MR_String) "item_export_only_submodules",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2 = {
  (MR_String) "item_export_anywhere",
  (MR_Integer) 2
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_0 = {
  (MR_String) "item_import_int_concrete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_item_import_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_1 = {
  (MR_String) "item_import_int_abstract",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_import_0_2 = {
  (MR_String) "item_import_opt_int",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_export_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0 = {
  (MR_String) "item_defined_in_this_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_item_mercury_status_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_import_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1 = {
  (MR_String) "item_defined_in_other_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_item_mercury_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0 = {
  (MR_String) "mode_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_new_instmode_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_mode_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_export_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0 = {
  (MR_String) "instmode_defined_in_this_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_new_instmode_status_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instmode_import_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1 = {
  (MR_String) "instmode_defined_in_other_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_new_instmode_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1] = {
  &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1
};

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_0 = {
  (MR_String) "status_external",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__status__hlds__status__field_types_old_import_status_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_1 = {
  (MR_String) "status_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__status__hlds__status__field_types_old_import_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_2 = {
  (MR_String) "status_opt_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_3 = {
  (MR_String) "status_abstract_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_4 = {
  (MR_String) "status_pseudo_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_5 = {
  (MR_String) "status_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_6 = {
  (MR_String) "status_opt_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_7 = {
  (MR_String) "status_abstract_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_8 = {
  (MR_String) "status_pseudo_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_9 = {
  (MR_String) "status_exported_to_submodules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_old_import_status_0_10 = {
  (MR_String) "status_local",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 9,
    MR_SECTAG_LOCAL,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_pred_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_type_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_status_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_typeclass_status_0 = {
  (MR_String) "typeclass_status",
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_old_import_status_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

void MR_CALL 
hlds__status____Compare____typeclass_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____type_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____pred_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____mode_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0(
  MR_Word hlds__status__HeadVar__2_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__status__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

        hlds__status____Compare____item_import_0_0(hlds__status__HeadVar__1_1, hlds__status__Var_16, hlds__status__ArgY1_11);
      }
      else
        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word hlds__status__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word hlds__status__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__status__Var_18 = (MR_Integer) hlds__status__Var_17;
        MR_Integer hlds__status__Var_19 = (MR_Integer) hlds__status__ArgY1_5;

        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Var_18, hlds__status__Var_19);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__status__ArgY1_6;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__status__succeeded)
      {
        hlds__status__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
        hlds__status__succeeded = hlds__status____Unify____item_import_0_0(hlds__status__ArgX1_5, hlds__status__ArgY1_6);
      }
    }
    else
    {
      MR_Word hlds__status__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__status__ArgY1_4;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (hlds__status__succeeded)
      {
        hlds__status__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
        hlds__status__succeeded = (hlds__status__ArgX1_3 == hlds__status__ArgY1_4);
      }
    }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_import_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__status__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer hlds__status__Var_14 = (MR_Integer) hlds__status__Var_13;
                  MR_Integer hlds__status__Var_15 = (MR_Integer) hlds__status__ArgY1_5;

                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Var_14, hlds__status__Var_15);
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
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__status__ArgY1_4;

            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__status__succeeded)
            {
              hlds__status__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
              hlds__status__succeeded = (hlds__status__ArgX1_3 == hlds__status__ArgY1_4);
            }
          }
          break;
      }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____item_export_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
  MR_Word hlds__status__HeadVar__2_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0(
  MR_Word hlds__status__HeadVar__2_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instmode_export_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_Integer hlds__status__Cast_HeadVar1_4 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__Cast_HeadVar2_5 = (MR_Integer) hlds__status__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Cast_HeadVar1_4, hlds__status__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0(
  MR_Word hlds__status__HeadVar__2_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded = (hlds__status__HeadVar__2_1 == hlds__status__HeadVar__2_2);

    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status____Compare____instance_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____old_import_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__status__succeeded;
      MR_Integer hlds__status__CastX_48 = (MR_Integer) hlds__status__HeadVar__2_2;
      MR_Integer hlds__status__CastY_49 = (MR_Integer) hlds__status__HeadVar__3_3;

      hlds__status__succeeded = (hlds__status__CastX_48 == hlds__status__CastY_49);
      if (hlds__status__succeeded)
        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
      else
        switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 2:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 4:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 5:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 6:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 7:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 8:
                switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 5:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 8:
                        *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__status__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__status__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__status__next_value_of_HeadVar__2_2 = hlds__status__Var_52;
                      MR_Word hlds__status__next_value_of_HeadVar__3_3 = hlds__status__ArgY1_5;

                      hlds__status__HeadVar__2_2 = hlds__status__next_value_of_HeadVar__2_2;
                      hlds__status__HeadVar__3_3 = hlds__status__next_value_of_HeadVar__3_3;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__status__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__status__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
                    MR_Integer hlds__status__Var_54 = (MR_Integer) hlds__status__Var_53;
                    MR_Integer hlds__status__Var_55 = (MR_Integer) hlds__status__ArgY1_20;

                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Var_54, hlds__status__Var_55);
                  }
                  break;
              }
            }
            break;
        }
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool hlds__status__succeeded;
      MR_Integer hlds__status__CastX_25 = (MR_Integer) hlds__status__HeadVar__1_1;
      MR_Integer hlds__status__CastY_26 = (MR_Integer) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = (hlds__status__CastX_25 == hlds__status__CastY_26);
      if (hlds__status__succeeded)
        hlds__status__succeeded = MR_TRUE;
      else
        switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_10 == hlds__status__CastX_9);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer hlds__status__CastX_11 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_12 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_12 == hlds__status__CastX_11);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer hlds__status__CastX_13 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_14 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_14 == hlds__status__CastX_13);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer hlds__status__CastX_15 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_16 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_16 == hlds__status__CastX_15);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer hlds__status__CastX_17 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_18 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_18 == hlds__status__CastX_17);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer hlds__status__CastX_19 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_20 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_20 == hlds__status__CastX_19);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer hlds__status__CastX_21 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_22 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_22 == hlds__status__CastX_21);
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer hlds__status__CastX_23 = (MR_Integer) hlds__status__HeadVar__1_1;
                  MR_Integer hlds__status__CastY_24 = (MR_Integer) hlds__status__HeadVar__2_2;

                  hlds__status__succeeded = (hlds__status__CastY_24 == hlds__status__CastX_23);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__status__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word hlds__status__ArgY1_4;

              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__status__succeeded)
              {
                hlds__status__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__status__next_value_of_HeadVar__1_1 = hlds__status__ArgX1_3;
                  MR_Word hlds__status__next_value_of_HeadVar__2_2 = hlds__status__ArgY1_4;

                  hlds__status__HeadVar__1_1 = hlds__status__next_value_of_HeadVar__1_1;
                  hlds__status__HeadVar__2_2 = hlds__status__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__status__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word hlds__status__ArgY1_6;

              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
              if (hlds__status__succeeded)
              {
                hlds__status__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
                hlds__status__succeeded = (hlds__status__ArgX1_5 == hlds__status__ArgY1_6);
              }
            }
            break;
        }
      return hlds__status__succeeded;
    }
    break;
  }
}

void MR_CALL 
hlds__status____Compare____inst_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_6 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_7 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_6 == hlds__status__CastY_7);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__ArgX1_4 = (MR_Word) hlds__status__HeadVar__2_2;
      MR_Word hlds__status__ArgY1_5 = (MR_Word) hlds__status__HeadVar__3_3;

      hlds__status____Compare____new_instmode_status_0_0(hlds__status__HeadVar__1_1, hlds__status__ArgX1_4, hlds__status__ArgY1_5);
    }
  }
}

void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_12 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_13 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_12 == hlds__status__CastY_13);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__status__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));

        hlds__status____Compare____instmode_import_0_0(hlds__status__HeadVar__1_1, hlds__status__Var_16, hlds__status__ArgY1_11);
      }
      else
        *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word hlds__status__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) hlds__status__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word hlds__status__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer hlds__status__Var_18 = (MR_Integer) hlds__status__Var_17;
        MR_Integer hlds__status__Var_19 = (MR_Integer) hlds__status__ArgY1_5;

        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Var_18, hlds__status__Var_19);
      }
    }
  }
}

void MR_CALL 
hlds__status____Compare____instmode_import_0_0(
  MR_Word * hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word hlds__status__HeadVar__3_3)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_10 = (MR_Integer) hlds__status__HeadVar__2_2;
    MR_Integer hlds__status__CastY_11 = (MR_Integer) hlds__status__HeadVar__3_3;

    hlds__status__succeeded = (hlds__status__CastX_10 == hlds__status__CastY_11);
    if (hlds__status__succeeded)
      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__status__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__status__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__status__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__status__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__status__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *hlds__status__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__status__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer hlds__status__Var_14 = (MR_Integer) hlds__status__Var_13;
                  MR_Integer hlds__status__Var_15 = (MR_Integer) hlds__status__ArgY1_5;

                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__status__HeadVar__1_1, hlds__status__Var_14, hlds__status__Var_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_5 == hlds__status__CastY_6);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    {
      MR_Word hlds__status__ArgX1_3 = (MR_Word) hlds__status__HeadVar__1_1;
      MR_Word hlds__status__ArgY1_4 = (MR_Word) hlds__status__HeadVar__2_2;

      hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(hlds__status__ArgX1_3, hlds__status__ArgY1_4);
    }
    return hlds__status__succeeded;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_7 == hlds__status__CastY_8);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__status__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__status__ArgY1_6;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__status__succeeded)
      {
        hlds__status__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
        hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(hlds__status__ArgX1_5, hlds__status__ArgY1_6);
      }
    }
    else
    {
      MR_Word hlds__status__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word hlds__status__ArgY1_4;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (hlds__status__succeeded)
      {
        hlds__status__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
        hlds__status__succeeded = (hlds__status__ArgX1_3 == hlds__status__ArgY1_4);
      }
    }
    return hlds__status__succeeded;
  }
}

MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Integer hlds__status__CastX_9 = (MR_Integer) hlds__status__HeadVar__1_1;
    MR_Integer hlds__status__CastY_10 = (MR_Integer) hlds__status__HeadVar__2_2;

    hlds__status__succeeded = (hlds__status__CastX_9 == hlds__status__CastY_10);
    if (hlds__status__succeeded)
      hlds__status__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__status__CastX_5 = (MR_Integer) hlds__status__HeadVar__1_1;
                MR_Integer hlds__status__CastY_6 = (MR_Integer) hlds__status__HeadVar__2_2;

                hlds__status__succeeded = (hlds__status__CastY_6 == hlds__status__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__status__CastX_7 = (MR_Integer) hlds__status__HeadVar__1_1;
                MR_Integer hlds__status__CastY_8 = (MR_Integer) hlds__status__HeadVar__2_2;

                hlds__status__succeeded = (hlds__status__CastY_8 == hlds__status__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__status__ArgY1_4;

            hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__status__succeeded)
            {
              hlds__status__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__2_2, (MR_Integer) 0)));
              hlds__status__succeeded = (hlds__status__ArgX1_3 == hlds__status__ArgY1_4);
            }
          }
          break;
      }
    return hlds__status__succeeded;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__PredStatus_4)
{
  {
    MR_Word hlds__status__OldImportStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
            case (MR_Integer) 1:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

            {
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          break;
        case (MR_Integer) 0:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
          break;
        case (MR_Integer) 1:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
          break;
      }
    }
    *hlds__status__PredStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__InstanceStatus_4)
{
  {
    MR_Word hlds__status__OldImportStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
            case (MR_Integer) 1:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

            {
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          break;
        case (MR_Integer) 0:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
          break;
        case (MR_Integer) 1:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
          break;
      }
    }
    *hlds__status__InstanceStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__TypeClassStatus_4)
{
  {
    MR_Word hlds__status__OldImportStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
            case (MR_Integer) 1:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

            {
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          break;
        case (MR_Integer) 0:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
          break;
        case (MR_Integer) 1:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
          break;
      }
    }
    *hlds__status__TypeClassStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__ModeStatus_4)
{
  {
    MR_Word hlds__status__InstModeStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
      MR_Word hlds__status__InstImport_13;

      switch (MR_tag((MR_Word) hlds__status__ItemImport_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_10, (MR_Integer) 0)));
            MR_Word hlds__status__InstImportLocn_12;

            switch (hlds__status__ImportLocn_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                hlds__status__InstImportLocn_12 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                hlds__status__InstImportLocn_12 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                hlds__status__InstImportLocn_12 = (MR_Integer) 1;
                break;
            }
            {
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__status__InstImport_13, 0) = ((MR_Box) (hlds__status__InstImportLocn_12));
            }
          }
          break;
      }
      {
        hlds__status__InstModeStatus_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_5, 0) = ((MR_Box) (hlds__status__InstImport_13));
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
      MR_Word hlds__status__InstExport_9;

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__InstExport_9 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          hlds__status__InstExport_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          hlds__status__InstExport_9 = (MR_Integer) 1;
          break;
      }
      {
        hlds__status__InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, 0) = ((MR_Box) (hlds__status__InstExport_9));
      }
    }
    *hlds__status__ModeStatus_4 = (MR_Word) hlds__status__InstModeStatus_5;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__InstStatus_4)
{
  {
    MR_Word hlds__status__InstModeStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
      MR_Word hlds__status__InstImport_13;

      switch (MR_tag((MR_Word) hlds__status__ItemImport_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_10, (MR_Integer) 0)));
            MR_Word hlds__status__InstImportLocn_12;

            switch (hlds__status__ImportLocn_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                hlds__status__InstImportLocn_12 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                hlds__status__InstImportLocn_12 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.item_mercury_status_to_instmode_status\'/2", (MR_String) "import_locn_import_by_ancestor");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                hlds__status__InstImportLocn_12 = (MR_Integer) 1;
                break;
            }
            {
              hlds__status__InstImport_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__status__InstImport_13, 0) = ((MR_Box) (hlds__status__InstImportLocn_12));
            }
          }
          break;
      }
      {
        hlds__status__InstModeStatus_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__status__InstModeStatus_5, 0) = ((MR_Box) (hlds__status__InstImport_13));
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));
      MR_Word hlds__status__InstExport_9;

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__InstExport_9 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
          hlds__status__InstExport_9 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          hlds__status__InstExport_9 = (MR_Integer) 1;
          break;
      }
      {
        hlds__status__InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, 0) = ((MR_Box) (hlds__status__InstExport_9));
      }
    }
    *hlds__status__InstStatus_4 = (MR_Word) hlds__status__InstModeStatus_5;
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
  MR_Word hlds__status__ItemMercuryStatus_3,
  MR_Word * hlds__status__TypeStatus_4)
{
  {
    MR_Word hlds__status__OldImportStatus_5;

    if (((MR_tag((MR_Word) hlds__status__ItemMercuryStatus_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word hlds__status__ItemImport_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) hlds__status__ItemImport_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__ItemImport_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
            case (MR_Integer) 1:
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__ImportLocn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__ItemImport_9, (MR_Integer) 0)));

            {
              hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__status__OldImportStatus_5, 0) = ((MR_Box) (hlds__status__ImportLocn_10));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word hlds__status__ItemExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__ItemMercuryStatus_3, (MR_Integer) 0)));

      switch (hlds__status__ItemExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          break;
        case (MR_Integer) 0:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
          break;
        case (MR_Integer) 1:
          hlds__status__OldImportStatus_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
          break;
      }
    }
    *hlds__status__TypeStatus_4 = (MR_Word) hlds__status__OldImportStatus_5;
  }
}

void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word * hlds__status__HeadVar__3_3)
{
  {
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_6;

    hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
  }
}

void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word * hlds__status__HeadVar__3_3)
{
  {
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_6;

    hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
  }
}

void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word * hlds__status__HeadVar__3_3)
{
  {
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_6;

    hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
  }
}

void MR_CALL 
hlds__status__type_combine_status_3_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word hlds__status__HeadVar__2_2,
  MR_Word * hlds__status__HeadVar__3_3)
{
  {
    MR_Word hlds__status__StatusA_4 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__StatusB_5 = (MR_Word) hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_6;

    hlds__status__old_combine_status_3_p_0(hlds__status__StatusA_4, hlds__status__StatusB_5, &hlds__status__Status_6);
    *hlds__status__HeadVar__3_3 = (MR_Word) hlds__status__Status_6;
  }
}

static void MR_CALL 
hlds__status__old_combine_status_3_p_0(
  MR_Word hlds__status__StatusA_4,
  MR_Word hlds__status__StatusB_5,
  MR_Word * hlds__status__Status_6)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__CombinedStatus_7;

    switch (MR_tag((MR_Word) hlds__status__StatusA_4)) {
      default:
        hlds__status__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__StatusA_4)) {
          default:
            hlds__status__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              hlds__status__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__status__Section_30;

              hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
              if (hlds__status__succeeded)
              {
                hlds__status__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusB_5, (MR_Integer) 0)));
                hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
              }
              else
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              hlds__status__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              hlds__status__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              hlds__status__succeeded = (hlds__status__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              if (hlds__status__succeeded)
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              else
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              hlds__status__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__status__Status3_20;

              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
                default:
                  hlds__status__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
                    default:
                      hlds__status__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__status__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                    hlds__status__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (hlds__status__succeeded)
              {
                hlds__status__succeeded = (hlds__status__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                if (hlds__status__succeeded)
                  hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                else
                  hlds__status__CombinedStatus_7 = hlds__status__Status3_20;
                hlds__status__succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 8:
            switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
              default:
                hlds__status__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__status__StatusB_5)) {
                  default:
                    hlds__status__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                      hlds__status__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                  hlds__status__succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__status__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__StatusA_4, (MR_Integer) 0)));

          switch (hlds__status__ImportLocn_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              {
                hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[0]);
                hlds__status__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__status__StatusB_5)) {
                default:
                  hlds__status__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__status__StatusB_5)) {
                    default:
                      hlds__status__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 0:
                      {
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[1]);
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        hlds__status__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__status_scalar_common_2[2]);
                        hlds__status__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__status__CombinedStatus_7 = hlds__status__StatusB_5;
                    hlds__status__succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
    if (hlds__status__succeeded)
      *hlds__status__Status_6 = hlds__status__CombinedStatus_7;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.status", (MR_String) "predicate \140hlds.status.old_combine_status\'/3", (MR_String) "unexpected status for type definition");
        return;
      }
    }
  }
}

void MR_CALL 
hlds__status__instance_make_status_abstract_2_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word * hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__AbstractStatus_4;

    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    if (hlds__status__succeeded)
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
    else
    {
      MR_Word hlds__status__Var_7;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__status__succeeded)
      {
        hlds__status__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
        hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      else
        hlds__status__AbstractStatus_4 = hlds__status__Status_3;
    }
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
  }
}

void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word * hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__AbstractStatus_4;

    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    if (hlds__status__succeeded)
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
    else
    {
      MR_Word hlds__status__Var_7;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__status__succeeded)
      {
        hlds__status__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
        hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      else
        hlds__status__AbstractStatus_4 = hlds__status__Status_3;
    }
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
  }
}

void MR_CALL 
hlds__status__pred_make_status_abstract_2_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word * hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__AbstractStatus_4;

    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    if (hlds__status__succeeded)
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
    else
    {
      MR_Word hlds__status__Var_7;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__status__succeeded)
      {
        hlds__status__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
        hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      else
        hlds__status__AbstractStatus_4 = hlds__status__Status_3;
    }
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
  }
}

void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
  MR_Word hlds__status__HeadVar__1_1,
  MR_Word * hlds__status__HeadVar__2_2)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__AbstractStatus_4;

    hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    if (hlds__status__succeeded)
      hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
    else
    {
      MR_Word hlds__status__Var_7;

      hlds__status__succeeded = ((MR_tag((MR_Word) hlds__status__Status_3)) == (MR_mktag((MR_Integer) 2)));
      if (hlds__status__succeeded)
      {
        hlds__status__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__Status_3, (MR_Integer) 0)));
        hlds__status__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      }
      else
        hlds__status__AbstractStatus_4 = hlds__status__Status_3;
    }
    *hlds__status__HeadVar__2_2 = (MR_Word) hlds__status__AbstractStatus_4;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__ModeStatus_3)
{
  {
    MR_Word hlds__status__IsDefnImplSection_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__ModeStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsDefnImplSection_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__IsDefnImplSection_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          hlds__status__IsDefnImplSection_4 = (MR_Integer) 1;
          break;
      }
    }
    return hlds__status__IsDefnImplSection_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__InstStatus_3)
{
  {
    MR_Word hlds__status__IsDefnImplSection_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__InstStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsDefnImplSection_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__IsDefnImplSection_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          hlds__status__IsDefnImplSection_4 = (MR_Integer) 1;
          break;
      }
    }
    return hlds__status__IsDefnImplSection_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__status__old_status_defined_in_impl_section_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word hlds__status__HeadVar__2_2;

      switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__status__HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              hlds__status__HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              hlds__status__HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              hlds__status__HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              hlds__status__HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              hlds__status__HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              hlds__status__HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 7:
              hlds__status__HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              hlds__status__HeadVar__2_2 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__status__Status_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word hlds__status__next_value_of_HeadVar__1_1 = hlds__status__Status_3;

              hlds__status__HeadVar__1_1 = hlds__status__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__status__ImportLocn_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__status__HeadVar__1_1, (MR_Integer) 0)));

            hlds__status__HeadVar__2_2 = ((&hlds__status_vector_common_1[0 + hlds__status__ImportLocn_4]))->hlds__status__vector_common_type_1_0__vct_1_f_0;
          }
          break;
      }
      return hlds__status__HeadVar__2_2;
    }
    break;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__ModeStatus_3)
{
  {
    MR_Word hlds__status__IsDefnThisModule_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__ModeStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsDefnThisModule_4 = (MR_Integer) 0;
    else
      hlds__status__IsDefnThisModule_4 = (MR_Integer) 1;
    return hlds__status__IsDefnThisModule_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__InstStatus_3)
{
  {
    MR_Word hlds__status__IsDefnThisModule_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__InstStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsDefnThisModule_4 = (MR_Integer) 0;
    else
      hlds__status__IsDefnThisModule_4 = (MR_Integer) 1;
    return hlds__status__IsDefnThisModule_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
    }
    hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__Var_5);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
    }
    hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__Var_5);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
    }
    hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__Var_5);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
  MR_Word hlds__status__ModeStatus_3)
{
  {
    MR_Word hlds__status__IsImported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__ModeStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsImported_4 = (MR_Integer) 1;
    else
      hlds__status__IsImported_4 = (MR_Integer) 0;
    return hlds__status__IsImported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
  MR_Word hlds__status__InstStatus_3)
{
  {
    MR_Word hlds__status__IsImported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__InstStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsImported_4 = (MR_Integer) 1;
    else
      hlds__status__IsImported_4 = (MR_Integer) 0;
    return hlds__status__IsImported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    switch (MR_tag((MR_Word) hlds__status__OldStatus_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__OldStatus_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__Var_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__Var_5 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__Var_5 = (MR_Integer) 0;
        break;
    }
    hlds__status__HeadVar__2_2 = mercury__bool__not_1_f_0(hlds__status__Var_5);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    hlds__status__Var_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    hlds__status__succeeded = (hlds__status__Var_5 == (MR_Integer) 1);
    if (hlds__status__succeeded)
    {
      hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      hlds__status__succeeded = !(hlds__status__succeeded);
    }
    if (hlds__status__succeeded)
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    hlds__status__Var_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    hlds__status__succeeded = (hlds__status__Var_5 == (MR_Integer) 1);
    if (hlds__status__succeeded)
    {
      hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      hlds__status__succeeded = !(hlds__status__succeeded);
    }
    if (hlds__status__succeeded)
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    hlds__status__Var_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    hlds__status__succeeded = (hlds__status__Var_5 == (MR_Integer) 1);
    if (hlds__status__succeeded)
    {
      hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      hlds__status__succeeded = !(hlds__status__succeeded);
    }
    if (hlds__status__succeeded)
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__ModeStatus_3)
{
  {
    MR_Word hlds__status__IsExported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__ModeStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          hlds__status__IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return hlds__status__IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__InstStatus_3)
{
  {
    MR_Word hlds__status__IsExported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__InstStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          hlds__status__IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          hlds__status__IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return hlds__status__IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_bool hlds__status__succeeded;
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__Status_3 = (MR_Word) hlds__status__HeadVar__1_1;
    MR_Word hlds__status__Var_5;

    hlds__status__Var_5 = hlds__status__old_status_is_exported_1_f_0(hlds__status__Status_3);
    hlds__status__succeeded = (hlds__status__Var_5 == (MR_Integer) 1);
    if (hlds__status__succeeded)
    {
      hlds__status__succeeded = (hlds__status__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      hlds__status__succeeded = !(hlds__status__succeeded);
    }
    if (hlds__status__succeeded)
      hlds__status__HeadVar__2_2 = (MR_Integer) 1;
    else
      hlds__status__HeadVar__2_2 = (MR_Integer) 0;
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
  MR_Word hlds__status__ModeStatus_3)
{
  {
    MR_Word hlds__status__IsExported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__ModeStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          hlds__status__IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          hlds__status__IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return hlds__status__IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
  MR_Word hlds__status__InstStatus_3)
{
  {
    MR_Word hlds__status__IsExported_4;
    MR_Word hlds__status__InstModeStatus_5 = (MR_Word) hlds__status__InstStatus_3;

    if (((MR_tag((MR_Word) hlds__status__InstModeStatus_5)) == (MR_mktag((MR_Integer) 1))))
      hlds__status__IsExported_4 = (MR_Integer) 0;
    else
    {
      MR_Word hlds__status__InstModeExport_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__status__InstModeStatus_5, (MR_Integer) 0)));

      switch (hlds__status__InstModeExport_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          hlds__status__IsExported_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          hlds__status__IsExported_4 = (MR_Integer) 0;
          break;
      }
    }
    return hlds__status__IsExported_4;
  }
}

MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;
    MR_Word hlds__status__OldStatus_3 = (MR_Word) hlds__status__HeadVar__1_1;

    hlds__status__HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(hlds__status__OldStatus_3);
    return hlds__status__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
  MR_Word hlds__status__HeadVar__1_1)
{
  {
    MR_Word hlds__status__HeadVar__2_2;

    switch (MR_tag((MR_Word) hlds__status__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(hlds__status__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            hlds__status__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            hlds__status__HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        hlds__status__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return hlds__status__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____inst_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____instance_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____instmode_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____instmode_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____instmode_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____instmode_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_plain_locn_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____instmode_import_plain_locn_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____instmode_import_plain_locn_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____instmode_import_plain_locn_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____item_export_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____item_import_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____item_mercury_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____maybe_opt_imported_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____mode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____new_instmode_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____new_instmode_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____old_import_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____pred_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____type_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
  MR_Box hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2)
{
  {
    MR_bool hlds__status__succeeded;

    hlds__status__succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) hlds__status__wrapper_arg_1), ((MR_Word) hlds__status__wrapper_arg_2));
    return hlds__status__succeeded;
  }
}

static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
  MR_Box * hlds__status__wrapper_arg_1,
  MR_Box hlds__status__wrapper_arg_2,
  MR_Box hlds__status__wrapper_arg_3)
{
  {
    MR_Word hlds__status__conv0_HeadVar__1_1;

    hlds__status____Compare____typeclass_status_0_0(&hlds__status__conv0_HeadVar__1_1, ((MR_Word) hlds__status__wrapper_arg_2), ((MR_Word) hlds__status__wrapper_arg_3));
    *hlds__status__wrapper_arg_1 = ((MR_Box) (hlds__status__conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__status__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.status. */
