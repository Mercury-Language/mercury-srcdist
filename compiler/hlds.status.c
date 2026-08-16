/*
** Automatically generated from `status.m'
** by the Mercury compiler,
** version rotd-2026-08-16
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


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "recompilation.item_types.mih"




static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_2;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_3;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instance_export_0[4];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instance_export_0[4];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_export_0[4];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_import_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_import_0_1;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instance_import_0[2];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instance_import_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_import_0[2];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_export_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instmode_export_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_export_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_export_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instmode_import_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instmode_import_0[3];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instmode_import_0[3];

static const MR_Integer hlds__status__hlds__status__functor_number_map_instmode_import_0[3];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_item_export_0_2;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_item_export_0[3];

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

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_maybe_opt_imported_0[2];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1];

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instance_status_0_0[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instance_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instance_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instance_status_0_1[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instance_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instance_status_0_1;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instance_status_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instance_status_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instance_status_0[2];

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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_typeclass_status_0_0[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_typeclass_status_0_0[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_0;

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_typeclass_status_0_1[1];

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_typeclass_status_0_1[1];

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_1;

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_1[1];

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_typeclass_status_0[2];

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_typeclass_status_0[2];

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_typeclass_status_0[2];

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

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_2;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_3;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_typeclass_export_0[4];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_typeclass_export_0[4];

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_export_0[4];

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_0;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_1;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_2;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_3;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_4;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_5;

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_6;

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_typeclass_import_0[7];

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_typeclass_import_0[7];

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_import_0[7];

static MR_bool MR_CALL 
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
hlds__status____Unify____instance_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instance_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____instance_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____instance_import_0_0_10001(
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
hlds__status____Unify____new_instance_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____new_instance_status_0_0_10001(
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
hlds__status____Unify____new_typeclass_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____new_typeclass_status_0_0_10001(
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
hlds__status____Unify____typeclass_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____typeclass_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__status____Compare____typeclass_import_0_0_10001(
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


static /* final */ const MR_Box hlds__status_scalar_common_1[6][1];


struct hlds__status__vector_common_type_2_0_s {
  const MR_Word hlds__status__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct hlds__status__vector_common_type_2_0_s hlds__status_vector_common_2[15];

struct hlds__status__vector_common_type_3_0_s {
  const MR_Word hlds__status__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct hlds__status__vector_common_type_3_0_s hlds__status_vector_common_3[24];

struct hlds__status__vector_common_type_4_0_s {
  const MR_Word hlds__status__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__status__vector_common_type_4_0_s hlds__status_vector_common_4[5];



static /* final */ const MR_Box hlds__status_scalar_common_1[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 6U) },
};


static /* final */ const struct hlds__status__vector_common_type_2_0_s hlds__status_vector_common_2[15] = {
  /* row   0 */   { (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[4])) },
  /* row   1 */   { (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[3])) },
  /* row   2 */   { (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[2])) },
  /* row   3 */   { (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[1])) },
  /* row   4 */   { (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[0])) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 20U) },
  /* row  10 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row  11 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row  12 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row  13 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row  14 */   { (MR_Word) ((MR_Unsigned) 16U) },
};

static /* final */ const struct hlds__status__vector_common_type_3_0_s hlds__status_vector_common_3[24] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 1 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 0 },
  /* row  10 */   { (MR_Integer) 1 },
  /* row  11 */   { (MR_Integer) 1 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 0 },
  /* row  14 */   { (MR_Integer) 1 },
  /* row  15 */   { (MR_Integer) 1 },
  /* row  16 */   { (MR_Integer) 1 },
  /* row  17 */   { (MR_Integer) 1 },
  /* row  18 */   { (MR_Integer) 1 },
  /* row  19 */   { (MR_Integer) 0 },
  /* row  20 */   { (MR_Integer) 1 },
  /* row  21 */   { (MR_Integer) 1 },
  /* row  22 */   { (MR_Integer) 1 },
  /* row  23 */   { (MR_Integer) 0 },
};

static /* final */ const struct hlds__status__vector_common_type_4_0_s hlds__status_vector_common_4[5] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 4 },
  /* row   3 */   { (MR_Integer) 2 },
  /* row   4 */   { (MR_Integer) 3 },
};




static const MR_Integer hlds__status__hlds__status__functor_number_map_inst_status_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_inst_status_0 = {
  (MR_String) "inst_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_inst_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____inst_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____inst_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "inst_status",
  { &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  { &hlds__status__hlds__status__notag_functor_desc_inst_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_inst_status_0,

};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_0 = {
  (MR_String) "instance_export_gen_none_sub_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_1 = {
  (MR_String) "instance_export_gen_none_sub_abs",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_2 = {
  (MR_String) "instance_export_gen_abs_sub_abs",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_export_0_3 = {
  (MR_String) "instance_export_full_opt",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instance_export_0[4] = {
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_3
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instance_export_0[4] = {
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_3,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instance_export_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_export_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_export_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instance_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instance_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instance_export",
  { hlds__status__hlds__status__enum_name_ordered_instance_export_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_instance_export_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_instance_export_0,

};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_import_0_0 = {
  (MR_String) "instance_import_full_opt",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_instance_import_0_1 = {
  (MR_String) "instance_import_abstract",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instance_import_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_instance_import_0_0,
  &hlds__status__hlds__status__enum_functor_desc_instance_import_0_1
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_instance_import_0[2] = {
  &hlds__status__hlds__status__enum_functor_desc_instance_import_0_1,
  &hlds__status__hlds__status__enum_functor_desc_instance_import_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_instance_import_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_import_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instance_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instance_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instance_import",
  { hlds__status__hlds__status__enum_name_ordered_instance_import_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_instance_import_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_instance_import_0,

};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_instance_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__status____Unify____instance_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instance_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instance_status",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_instance_status_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instmode_export_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_export",
  { hlds__status__hlds__status__enum_name_ordered_instmode_export_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_instmode_export_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_instmode_export_0,

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

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_instmode_import_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____instmode_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____instmode_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "instmode_import",
  { hlds__status__hlds__status__enum_name_ordered_instmode_import_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_instmode_import_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_instmode_import_0,

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

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_item_export_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____item_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_export",
  { hlds__status__hlds__status__enum_name_ordered_item_export_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_item_export_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_item_export_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_import_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_import_locn_0) };

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

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_import_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_item_import_0_0 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_import_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_import_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_import",
  { hlds__status__hlds__status__du_name_ordered_item_import_0 },
  { hlds__status__hlds__status__du_ptag_ordered_item_import_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_item_import_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_export_0) };

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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_item_mercury_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_import_0) };

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

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0[1] = { &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_0 };

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_item_mercury_status_0_1 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_item_mercury_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____item_mercury_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____item_mercury_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "item_mercury_status",
  { hlds__status__hlds__status__du_name_ordered_item_mercury_status_0 },
  { hlds__status__hlds__status__du_ptag_ordered_item_mercury_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_item_mercury_status_0,

};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_0 = {
  (MR_String) "is_not_opt_imported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_maybe_opt_imported_0_1 = {
  (MR_String) "is_opt_imported",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_maybe_opt_imported_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____maybe_opt_imported_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____maybe_opt_imported_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "maybe_opt_imported",
  { hlds__status__hlds__status__enum_name_ordered_maybe_opt_imported_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_maybe_opt_imported_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_maybe_opt_imported_0,

};

static const MR_Integer hlds__status__hlds__status__functor_number_map_mode_status_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_mode_status_0 = {
  (MR_String) "mode_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_mode_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____mode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____mode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "mode_status",
  { &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  { &hlds__status__hlds__status__notag_functor_desc_mode_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_mode_status_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instance_status_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instance_export_0) };

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instance_status_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instance_status_0_0 = {
  (MR_String) "instance_defined_in_this_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_new_instance_status_0_0,
  NULL,
  hlds__status__hlds__status__field_locns_new_instance_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instance_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instance_import_0) };

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_instance_status_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_instance_status_0_1 = {
  (MR_String) "instance_defined_in_other_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__status__hlds__status__field_types_new_instance_status_0_1,
  NULL,
  hlds__status__hlds__status__field_locns_new_instance_status_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_0[1] = { &hlds__status__hlds__status__du_functor_desc_new_instance_status_0_0 };

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_new_instance_status_0_1 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instance_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instance_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_instance_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_new_instance_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_new_instance_status_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_instance_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_new_instance_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____new_instance_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____new_instance_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "new_instance_status",
  { hlds__status__hlds__status__du_name_ordered_new_instance_status_0 },
  { hlds__status__hlds__status__du_ptag_ordered_new_instance_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_new_instance_status_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instmode_export_0) };

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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_instmode_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instmode_import_0) };

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

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0[1] = { &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_0 };

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_new_instmode_status_0_1 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_instmode_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____new_instmode_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____new_instmode_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "new_instmode_status",
  { hlds__status__hlds__status__du_name_ordered_new_instmode_status_0 },
  { hlds__status__hlds__status__du_ptag_ordered_new_instmode_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_new_instmode_status_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_typeclass_status_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_typeclass_export_0) };

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_typeclass_status_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_0 = {
  (MR_String) "typeclass_defined_in_this_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__status__hlds__status__field_types_new_typeclass_status_0_0,
  NULL,
  hlds__status__hlds__status__field_locns_new_typeclass_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_new_typeclass_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_typeclass_import_0) };

static const MR_DuArgLocn hlds__status__hlds__status__field_locns_new_typeclass_status_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_1 = {
  (MR_String) "typeclass_defined_in_other_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__status__hlds__status__field_types_new_typeclass_status_0_1,
  NULL,
  hlds__status__hlds__status__field_locns_new_typeclass_status_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_0[1] = { &hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_0 };

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_1 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_new_typeclass_status_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_new_typeclass_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_name_ordered_new_typeclass_status_0[2] = {
  &hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_1,
  &hlds__status__hlds__status__du_functor_desc_new_typeclass_status_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_new_typeclass_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_new_typeclass_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____new_typeclass_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____new_typeclass_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "new_typeclass_status",
  { hlds__status__hlds__status__du_name_ordered_new_typeclass_status_0 },
  { hlds__status__hlds__status__du_ptag_ordered_new_typeclass_status_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_new_typeclass_status_0,

};

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0) };

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

static const MR_PseudoTypeInfo hlds__status__hlds__status__field_types_old_import_status_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_import_locn_0) };

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

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1[1] = { &hlds__status__hlds__status__du_functor_desc_old_import_status_0_0 };

static const MR_DuFunctorDescPtr hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2[1] = { &hlds__status__hlds__status__du_functor_desc_old_import_status_0_1 };

static const MR_DuPtagLayout hlds__status__hlds__status__du_ptag_ordered_old_import_status_0[3] = {
  {
    UINT32_C(9),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__status__hlds__status__du_stag_ordered_old_import_status_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__status____Unify____old_import_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____old_import_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "old_import_status",
  { hlds__status__hlds__status__du_name_ordered_old_import_status_0 },
  { hlds__status__hlds__status__du_ptag_ordered_old_import_status_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_old_import_status_0,

};

static const MR_Integer hlds__status__hlds__status__functor_number_map_pred_status_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_pred_status_0 = {
  (MR_String) "pred_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_pred_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____pred_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____pred_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "pred_status",
  { &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  { &hlds__status__hlds__status__notag_functor_desc_pred_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_pred_status_0,

};

static const MR_Integer hlds__status__hlds__status__functor_number_map_type_status_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__status__hlds__status__notag_functor_desc_type_status_0 = {
  (MR_String) "type_status",
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_old_import_status_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__status____Unify____type_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____type_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "type_status",
  { &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  { &hlds__status__hlds__status__notag_functor_desc_type_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__status__hlds__status__functor_number_map_type_status_0,

};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_0 = {
  (MR_String) "typeclass_export_gen_none_sub_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_1 = {
  (MR_String) "typeclass_export_gen_none_sub_full",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_2 = {
  (MR_String) "typeclass_export_gen_abs_sub_full",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_3 = {
  (MR_String) "typeclass_export_gen_full_sub_full",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_typeclass_export_0[4] = {
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_0,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_3
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_typeclass_export_0[4] = {
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_2,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_3,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_1,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_export_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_export_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_export_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____typeclass_export_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____typeclass_export_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "typeclass_export",
  { hlds__status__hlds__status__enum_name_ordered_typeclass_export_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_typeclass_export_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_typeclass_export_0,

};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_0 = {
  (MR_String) "typeclass_import_full_own_int",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_1 = {
  (MR_String) "typeclass_import_full_own_imp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_2 = {
  (MR_String) "typeclass_import_full_int0_int",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_3 = {
  (MR_String) "typeclass_import_full_int0_imp",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_4 = {
  (MR_String) "typeclass_import_full_by_ancestor",
  INT32_C(4)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_5 = {
  (MR_String) "typeclass_import_full_opt",
  INT32_C(5)
};

static const MR_EnumFunctorDesc hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_6 = {
  (MR_String) "typeclass_import_abstract",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_ordinal_ordered_typeclass_import_0[7] = {
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_0,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_1,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_2,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_3,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_4,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_5,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_6
};

static const MR_EnumFunctorDescPtr hlds__status__hlds__status__enum_name_ordered_typeclass_import_0[7] = {
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_6,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_4,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_3,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_2,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_5,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_1,
  &hlds__status__hlds__status__enum_functor_desc_typeclass_import_0_0
};

static const MR_Integer hlds__status__hlds__status__functor_number_map_typeclass_import_0[7] = {
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_import_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__status____Unify____typeclass_import_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____typeclass_import_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "typeclass_import",
  { hlds__status__hlds__status__enum_name_ordered_typeclass_import_0 },
  { hlds__status__hlds__status__enum_ordinal_ordered_typeclass_import_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  hlds__status__hlds__status__functor_number_map_typeclass_import_0,

};

const MR_TypeCtorInfo_Struct hlds__status__hlds__status__type_ctor_info_typeclass_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__status____Unify____typeclass_status_0_0_10001)),
  ((MR_Box) (hlds__status____Compare____typeclass_status_0_0_10001)),
  (MR_String) "hlds.status",
  (MR_String) "typeclass_status",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_new_typeclass_status_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__status____Compare____typeclass_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  hlds__status____Compare____new_typeclass_status_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = hlds__status____Unify____new_typeclass_status_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
hlds__status____Compare____typeclass_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____typeclass_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____typeclass_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____typeclass_export_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____type_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

void MR_CALL 
hlds__status____Compare____pred_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

void MR_CALL 
hlds__status____Compare____old_import_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_8 == CastY_9);
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
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
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
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                MR_Word next_value_of_HeadVar__2_2 = ArgX1_4;
                MR_Word next_value_of_HeadVar__3_3 = ArgY1_5;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 7);
                MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 7);
                MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
                MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

                succeeded = (Var_12 < Var_13);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_12 > Var_13);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

void MR_CALL 
hlds__status____Compare____new_typeclass_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 7);
      MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
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
}

MR_bool MR_CALL 
hlds__status____Unify____new_typeclass_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 7);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__status____Compare____mode_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      hlds__status____Compare____item_import_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_12 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_13 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_12 < Var_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_12 > Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = hlds__status____Unify____item_import_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__status____Compare____item_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 7);
              MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_9 < Var_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_9 > Var_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 7);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 7);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__status____Compare____item_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____instmode_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____instmode_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____instance_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  hlds__status____Compare____new_instance_status_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
hlds__status____Compare____new_instance_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
      MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
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
}

MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = hlds__status____Unify____new_instance_status_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
hlds__status____Unify____new_instance_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__status____Compare____instance_import_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____instance_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____instance_export_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__status____Unify____instance_export_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__status____Compare____inst_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
      MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
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
}

MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__status__item_mercury_status_to_pred_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * PredStatus_4)
{
  MR_Word OldImportStatus_5;

  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_7 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));

    switch (MR_tag((MR_Word) ItemImport_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_7)) {
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
          MR_Word ImportLocn_8 = ((MR_Unsigned) ((MR_hl_field(1, ItemImport_7, 0))) & (MR_Integer) 7);

          {
            OldImportStatus_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_8));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ItemExport_6 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);

    switch (ItemExport_6) {
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

void MR_CALL 
hlds__status__item_mercury_status_to_instance_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * InstanceStatus_4)
{
  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_7 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));
    MR_Word InstanceImport_9;

    switch (MR_tag((MR_Word) ItemImport_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InstanceImport_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            InstanceImport_9 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        InstanceImport_9 = (MR_Integer) 1;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstanceStatus_4 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (InstanceImport_9));
    }
  }
  else
  {
    MR_Word ItemExport_5 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);
    MR_Word InstanceExport_6;

    switch (ItemExport_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        InstanceExport_6 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        InstanceExport_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        InstanceExport_6 = (MR_Integer) 1;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *InstanceStatus_4 = base;
      MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (InstanceExport_6));
    }
  }
}

void MR_CALL 
hlds__status__item_mercury_status_to_typeclass_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * TypeClassStatus_4)
{
  MR_bool succeeded;
  MR_Word NewTypeClassStatus_5;
  MR_Word OldImportStatus_6;
  MR_Word OldNewTypeClassStatus_7;

  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word TypeClassImport_14;
    MR_Word ItemImport_16 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));

    switch (MR_tag((MR_Word) ItemImport_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TypeClassImport_14 = (MR_Integer) 6;
            break;
          case (MR_Integer) 1:
            TypeClassImport_14 = (MR_Integer) 5;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImportLocn_13 = ((MR_Unsigned) ((MR_hl_field(1, ItemImport_16, 0))) & (MR_Integer) 7);

          TypeClassImport_14 = ((&hlds__status_vector_common_4[0 + ImportLocn_13]))->hlds__status__vector_common_type_4_0__vct_4_f_0;
        }
        break;
    }
    {
      NewTypeClassStatus_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NewTypeClassStatus_5, 0) = (MR_Box) ((MR_Unsigned) (TypeClassImport_14));
    }
    switch (MR_tag((MR_Word) ItemImport_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OldImportStatus_6 = (MR_Word) ((MR_Unsigned) 4U);
            break;
          case (MR_Integer) 1:
            OldImportStatus_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImportLocn_17 = ((MR_Unsigned) ((MR_hl_field(1, ItemImport_16, 0))) & (MR_Integer) 7);

          {
            OldImportStatus_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, OldImportStatus_6, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_17));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word TypeClassExport_11;
    MR_Word ItemExport_15 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);

    switch (ItemExport_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          TypeClassExport_11 = (MR_Integer) 3;
          OldImportStatus_6 = (MR_Word) ((MR_Unsigned) 12U);
        }
        break;
      case (MR_Integer) 0:
        {
          TypeClassExport_11 = (MR_Integer) 0;
          OldImportStatus_6 = (MR_Word) ((MR_Unsigned) 32U);
        }
        break;
      case (MR_Integer) 1:
        {
          TypeClassExport_11 = (MR_Integer) 1;
          OldImportStatus_6 = (MR_Word) ((MR_Unsigned) 28U);
        }
        break;
    }
    {
      NewTypeClassStatus_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewTypeClassStatus_5, 0) = (MR_Box) ((MR_Unsigned) (TypeClassExport_11));
    }
  }
  OldNewTypeClassStatus_7 = hlds__status__new_typeclass_status_to_old_1_f_0(NewTypeClassStatus_5);
  succeeded = hlds__status____Unify____old_import_status_0_0(OldNewTypeClassStatus_7, OldImportStatus_6);
  if (succeeded)
    *TypeClassStatus_4 = NewTypeClassStatus_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.item_mercury_status_to_typeclass_status\'/2", (MR_String) "disagreement");
      return;
    }
}

void MR_CALL 
hlds__status__item_mercury_status_to_mode_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * ModeStatus_4)
{
  MR_Word InstModeStatus_5;

  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_8 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));
    MR_Word InstImport_10;

    switch (MR_tag((MR_Word) ItemImport_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InstImport_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            InstImport_10 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        InstImport_10 = (MR_Integer) 0;
        break;
    }
    {
      InstModeStatus_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstImport_10));
    }
  }
  else
  {
    MR_Word ItemExport_6 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);
    MR_Word InstExport_7;

    switch (ItemExport_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        InstExport_7 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        InstExport_7 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        InstExport_7 = (MR_Integer) 1;
        break;
    }
    {
      InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstExport_7));
    }
  }
  *ModeStatus_4 = (MR_Word) (InstModeStatus_5);
}

void MR_CALL 
hlds__status__item_mercury_status_to_inst_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * InstStatus_4)
{
  MR_Word InstModeStatus_5;

  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_8 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));
    MR_Word InstImport_10;

    switch (MR_tag((MR_Word) ItemImport_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InstImport_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            InstImport_10 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        InstImport_10 = (MR_Integer) 0;
        break;
    }
    {
      InstModeStatus_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstImport_10));
    }
  }
  else
  {
    MR_Word ItemExport_6 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);
    MR_Word InstExport_7;

    switch (ItemExport_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        InstExport_7 = (MR_Integer) 2;
        break;
      case (MR_Integer) 0:
        InstExport_7 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        InstExport_7 = (MR_Integer) 1;
        break;
    }
    {
      InstModeStatus_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InstModeStatus_5, 0) = (MR_Box) ((MR_Unsigned) (InstExport_7));
    }
  }
  *InstStatus_4 = (MR_Word) (InstModeStatus_5);
}

void MR_CALL 
hlds__status__item_mercury_status_to_type_status_2_p_0(
  MR_Word ItemMercuryStatus_3,
  MR_Word * TypeStatus_4)
{
  MR_Word OldImportStatus_5;

  if (((MR_tag((MR_Word) ItemMercuryStatus_3)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_7 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_3, 0))));

    switch (MR_tag((MR_Word) ItemImport_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_7)) {
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
          MR_Word ImportLocn_8 = ((MR_Unsigned) ((MR_hl_field(1, ItemImport_7, 0))) & (MR_Integer) 7);

          {
            OldImportStatus_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, OldImportStatus_5, 0) = (MR_Box) ((MR_Unsigned) (ImportLocn_8));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ItemExport_6 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_3, 0))) & (MR_Integer) 3);

    switch (ItemExport_6) {
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

void MR_CALL 
hlds__status__instance_combine_status_3_p_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5,
  MR_Word * Status_6)
{
  MR_bool succeeded;
  MR_Word NewStatus_8;
  MR_Word OldStatusA_9;
  MR_Word OldStatusB_10;
  MR_Word OldNewStatus_11;
  MR_Word OldStatus_13;
  MR_Word CombinedStatus_7;
  MR_Word OldCombinedStatus_12;

  if (((MR_tag((MR_Word) StatusA_4)) == (MR_Integer) 1))
  {
    succeeded = ((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      CombinedStatus_7 = StatusA_4;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(0, StatusA_4, 0))) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 1))
      CombinedStatus_7 = StatusA_4;
    else
    {
      MR_Word ExportB_23 = ((MR_Unsigned) ((MR_hl_field(0, StatusB_5, 0))) & (MR_Integer) 3);
      MR_Word Export_24;

      switch (Var_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          Export_24 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          {
            succeeded = (ExportB_23 == (MR_Integer) 3);
            if (succeeded)
              Export_24 = (MR_Integer) 3;
            else
              Export_24 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 1:
          switch (ExportB_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              Export_24 = ExportB_23;
              break;
            case (MR_Integer) 0:
              Export_24 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 0:
          Export_24 = ExportB_23;
          break;
      }
      {
        CombinedStatus_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CombinedStatus_7, 0) = (MR_Box) ((MR_Unsigned) (Export_24));
      }
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
    NewStatus_8 = CombinedStatus_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.instance_combine_status\'/3", (MR_String) "unexpected status for new instance definition");
      return;
    }
  OldStatusA_9 = hlds__status__new_instance_status_to_old_1_f_0(StatusA_4);
  OldStatusB_10 = hlds__status__new_instance_status_to_old_1_f_0(StatusB_5);
  OldNewStatus_11 = hlds__status__new_instance_status_to_old_1_f_0(NewStatus_8);
  succeeded = hlds__status__old_combine_status_3_p_0(OldStatusA_9, OldStatusB_10, &OldCombinedStatus_12);
  if (succeeded)
    OldStatus_13 = OldCombinedStatus_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.instance_combine_status\'/3", (MR_String) "unexpected status for old instance definition");
      return;
    }
  succeeded = hlds__status____Unify____old_import_status_0_0(OldStatus_13, OldNewStatus_11);
  if (succeeded)
    *Status_6 = NewStatus_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.instance_combine_status\'/3", (MR_String) "disagreement");
      return;
    }
}

void MR_CALL 
hlds__status__typeclass_combine_status_3_p_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5,
  MR_Word * Status_6)
{
  MR_bool succeeded;
  MR_Word NewStatus_8;
  MR_Word OldStatusA_9;
  MR_Word OldStatusB_10;
  MR_Word OldNewStatus_11;
  MR_Word OldStatus_13;
  MR_Word CombinedStatus_7;
  MR_Word OldCombinedStatus_12;

  if (((MR_tag((MR_Word) StatusA_4)) == (MR_Integer) 1))
  {
    MR_Word Var_33 = ((MR_Unsigned) ((MR_hl_field(1, StatusA_4, 0))) & (MR_Integer) 7);

    if (((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 1))
    {
      MR_Word ImportB_21 = ((MR_Unsigned) ((MR_hl_field(1, StatusB_5, 0))) & (MR_Integer) 7);
      MR_Word Import_22;

      switch (Var_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 6:
          {
            switch (ImportB_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 6:
              case (MR_Integer) 5:
                Import_22 = Var_33;
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                Import_22 = ImportB_21;
                break;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 1:
        case (MR_Integer) 0:
          switch (ImportB_21) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 6:
              {
                Import_22 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 4:
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                Import_22 = ImportB_21;
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
          {
            Import_22 = Var_33;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        {
          CombinedStatus_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CombinedStatus_7, 0) = (MR_Box) ((MR_Unsigned) (Import_22));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ExportB_23;

      switch (Var_33) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 4:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        ExportB_23 = ((MR_Unsigned) ((MR_hl_field(0, StatusB_5, 0))) & (MR_Integer) 3);
        switch (ExportB_23) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              CombinedStatus_7 = (MR_Word) (&hlds__status_scalar_common_1[0]);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              CombinedStatus_7 = (MR_Word) (&hlds__status_scalar_common_1[2]);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 0:
            {
              CombinedStatus_7 = (MR_Word) (MR_mkword(1, &hlds__status_scalar_common_1[4]));
              succeeded = MR_TRUE;
            }
            break;
        }
      }
    }
  }
  else
  {
    MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(0, StatusA_4, 0))) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 1))
      CombinedStatus_7 = StatusA_4;
    else
    {
      MR_Word ExportB_30 = ((MR_Unsigned) ((MR_hl_field(0, StatusB_5, 0))) & (MR_Integer) 3);
      MR_Word Export_31;

      switch (Var_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            succeeded = (ExportB_30 == (MR_Integer) 3);
            if (succeeded)
              Export_31 = (MR_Integer) 3;
            else
              Export_31 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 3:
          Export_31 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          switch (ExportB_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 1:
              Export_31 = ExportB_30;
              break;
            case (MR_Integer) 0:
              Export_31 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 0:
          Export_31 = ExportB_30;
          break;
      }
      {
        CombinedStatus_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CombinedStatus_7, 0) = (MR_Box) ((MR_Unsigned) (Export_31));
      }
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
    NewStatus_8 = CombinedStatus_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.typeclass_combine_status\'/3", (MR_String) "unexpected status for new typeclass definition");
      return;
    }
  OldStatusA_9 = hlds__status__new_typeclass_status_to_old_1_f_0(StatusA_4);
  OldStatusB_10 = hlds__status__new_typeclass_status_to_old_1_f_0(StatusB_5);
  OldNewStatus_11 = hlds__status__new_typeclass_status_to_old_1_f_0(NewStatus_8);
  succeeded = hlds__status__old_combine_status_3_p_0(OldStatusA_9, OldStatusB_10, &OldCombinedStatus_12);
  if (succeeded)
    OldStatus_13 = OldCombinedStatus_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.typeclass_combine_status\'/3", (MR_String) "unexpected status for old typeclass definition");
      return;
    }
  succeeded = hlds__status____Unify____old_import_status_0_0(OldStatus_13, OldNewStatus_11);
  if (succeeded)
    *Status_6 = NewStatus_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.typeclass_combine_status\'/3", (MR_String) "disagreement");
      return;
    }
}

void MR_CALL 
hlds__status__pred_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
  MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Status_6;
  MR_Word CombinedStatus_7;

  succeeded = hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &CombinedStatus_7);
  if (succeeded)
    Status_6 = CombinedStatus_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.pred_combine_status\'/3", (MR_String) "unexpected status for pred definition");
      return;
    }
  *HeadVar__3_3 = (MR_Word) (Status_6);
}

void MR_CALL 
hlds__status__type_combine_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word StatusA_4 = (MR_Word) (HeadVar__1_1);
  MR_Word StatusB_5 = (MR_Word) (HeadVar__2_2);
  MR_Word Status_6;
  MR_Word CombinedStatus_7;

  succeeded = hlds__status__old_combine_status_3_p_0(StatusA_4, StatusB_5, &CombinedStatus_7);
  if (succeeded)
    Status_6 = CombinedStatus_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.type_combine_status\'/3", (MR_String) "unexpected status for type definition");
      return;
    }
  *HeadVar__3_3 = (MR_Word) (Status_6);
}

static MR_bool MR_CALL 
hlds__status__old_combine_status_3_p_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5,
  MR_Word * Status_6)
{
  MR_bool succeeded;

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
            *Status_6 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = ((MR_tag((MR_Word) StatusB_5)) == (MR_Integer) 2);
            if (succeeded)
              *Status_6 = StatusB_5;
            else
              *Status_6 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *Status_6 = (MR_Word) ((MR_Unsigned) 12U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            succeeded = (StatusB_5 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
              *Status_6 = (MR_Word) ((MR_Unsigned) 12U);
            else
              *Status_6 = (MR_Word) ((MR_Unsigned) 20U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Status3_9;

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
                      Status3_9 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Status3_9 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      Status3_9 = (MR_Word) ((MR_Unsigned) 12U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      Status3_9 = (MR_Word) ((MR_Unsigned) 20U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      Status3_9 = (MR_Word) ((MR_Unsigned) 28U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      Status3_9 = (MR_Word) ((MR_Unsigned) 32U);
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  Status3_9 = (MR_Word) ((MR_Unsigned) 32U);
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              succeeded = (Status3_9 == (MR_Word) ((MR_Unsigned) 32U));
              if (succeeded)
                *Status_6 = (MR_Word) ((MR_Unsigned) 28U);
              else
                *Status_6 = Status3_9;
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
                    *Status_6 = (MR_Word) ((MR_Unsigned) 32U);
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *Status_6 = (MR_Word) ((MR_Unsigned) 32U);
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *Status_6 = (MR_Word) ((MR_Unsigned) 12U);
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    *Status_6 = (MR_Word) ((MR_Unsigned) 20U);
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    *Status_6 = (MR_Word) ((MR_Unsigned) 28U);
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    *Status_6 = (MR_Word) ((MR_Unsigned) 32U);
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                *Status_6 = (MR_Word) ((MR_Unsigned) 32U);
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ImportLocnA_7 = ((MR_Unsigned) ((MR_hl_field(2, StatusA_4, 0))) & (MR_Integer) 7);

        switch (ImportLocnA_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
            {
              *Status_6 = (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[1]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *Status_6 = (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[2]));
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
                      *Status_6 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Status_6 = (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[4]));
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      *Status_6 = (MR_Word) ((MR_Unsigned) 12U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      *Status_6 = (MR_Word) ((MR_Unsigned) 20U);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      *Status_6 = (MR_Word) (MR_mkword(2, &hlds__status_scalar_common_1[3]));
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  *Status_6 = StatusB_5;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
hlds__status__typeclass_make_status_abstract_2_p_0(
  MR_Word Status_3,
  MR_Word * AbstractStatus_4)
{
  MR_bool succeeded;
  MR_Word OldStatus_5;
  MR_Word OldAbstractStatus_6;
  MR_Word NewAbstractStatus_7;
  MR_Word OldNewAbstractStatus_8;

  OldStatus_5 = hlds__status__new_typeclass_status_to_old_1_f_0(Status_3);
  succeeded = (OldStatus_5 == (MR_Word) ((MR_Unsigned) 12U));
  if (succeeded)
    OldAbstractStatus_6 = (MR_Word) ((MR_Unsigned) 20U);
  else
  {
    succeeded = ((MR_tag((MR_Word) OldStatus_5)) == (MR_Integer) 2);
    if (succeeded)
      OldAbstractStatus_6 = (MR_Word) ((MR_Unsigned) 4U);
    else
      OldAbstractStatus_6 = OldStatus_5;
  }
  if (((MR_tag((MR_Word) Status_3)) == (MR_Integer) 1))
  {
    MR_Word Import_14 = ((MR_Unsigned) ((MR_hl_field(1, Status_3, 0))) & (MR_Integer) 7);

    switch (Import_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 6:
      case (MR_Integer) 5:
        NewAbstractStatus_7 = Status_3;
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        NewAbstractStatus_7 = (MR_Word) (MR_mkword(1, &hlds__status_scalar_common_1[5]));
        break;
    }
  }
  else
  {
    MR_Word Export_12 = ((MR_Unsigned) ((MR_hl_field(0, Status_3, 0))) & (MR_Integer) 3);

    switch (Export_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        NewAbstractStatus_7 = Status_3;
        break;
      case (MR_Integer) 3:
        NewAbstractStatus_7 = (MR_Word) (&hlds__status_scalar_common_1[0]);
        break;
    }
  }
  OldNewAbstractStatus_8 = hlds__status__new_typeclass_status_to_old_1_f_0(NewAbstractStatus_7);
  succeeded = hlds__status____Unify____old_import_status_0_0(OldAbstractStatus_6, OldNewAbstractStatus_8);
  if (succeeded)
    *AbstractStatus_4 = NewAbstractStatus_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.status.typeclass_make_status_abstract\'/2", (MR_String) "disagreement");
      return;
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
            MR_Word ArgY1_4;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
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
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 7);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 7);
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
hlds__status__pred_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

void MR_CALL 
hlds__status__type_make_status_abstract_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_impl_section_1_f_0(
  MR_Word InstanceStatus_3)
{
  MR_bool succeeded;
  MR_Word InImplSection_4;
  MR_Word OldStatus_5;
  MR_Word OldInImplSection_6;
  MR_Word NewInImplSection_7;

  OldStatus_5 = hlds__status__new_instance_status_to_old_1_f_0(InstanceStatus_3);
  OldInImplSection_6 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_5);
  if (((MR_tag((MR_Word) InstanceStatus_3)) == (MR_Integer) 1))
    NewInImplSection_7 = (MR_Integer) 0;
  else
  {
    MR_Word Export_9 = ((MR_Unsigned) ((MR_hl_field(0, InstanceStatus_3, 0))) & (MR_Integer) 3);

    NewInImplSection_7 = ((&hlds__status_vector_common_3[20 + Export_9]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldInImplSection_6)), ((MR_Box) (NewInImplSection_7)));
  if (succeeded)
    InImplSection_4 = OldInImplSection_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return InImplSection_4;
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_impl_section_1_f_0(
  MR_Word TypeClassStatus_3)
{
  MR_bool succeeded;
  MR_Word InImplSection_4;
  MR_Word OldStatus_5;
  MR_Word OldInImplSection_6;
  MR_Word NewInImplSection_7;

  OldStatus_5 = hlds__status__new_typeclass_status_to_old_1_f_0(TypeClassStatus_3);
  OldInImplSection_6 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_5);
  if (((MR_tag((MR_Word) TypeClassStatus_3)) == (MR_Integer) 1))
    NewInImplSection_7 = (MR_Integer) 0;
  else
  {
    MR_Word Export_9 = ((MR_Unsigned) ((MR_hl_field(0, TypeClassStatus_3, 0))) & (MR_Integer) 3);

    NewInImplSection_7 = ((&hlds__status_vector_common_3[16 + Export_9]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldInImplSection_6)), ((MR_Box) (NewInImplSection_7)));
  if (succeeded)
    InImplSection_4 = OldInImplSection_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return InImplSection_4;
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_impl_section_1_f_0(
  MR_Word ModeStatus_3)
{
  MR_Word IsDefnImplSection_4;
  MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsDefnImplSection_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_impl_section_1_f_0(
  MR_Word InstStatus_3)
{
  MR_Word IsDefnImplSection_4;
  MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsDefnImplSection_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__type_status_defined_in_impl_section_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__status__old_status_defined_in_impl_section_1_f_0(OldStatus_3);
  return HeadVar__2_2;
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
          MR_Word Status_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word next_value_of_HeadVar__1_1 = Status_3;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

MR_Word MR_CALL 
hlds__status__instance_status_defined_in_this_module_1_f_0(
  MR_Word Status_3)
{
  MR_Word IsDefnThisModule_4;

  if (((MR_tag((MR_Word) Status_3)) == (MR_Integer) 1))
    IsDefnThisModule_4 = (MR_Integer) 0;
  else
    IsDefnThisModule_4 = (MR_Integer) 1;
  return IsDefnThisModule_4;
}

MR_Word MR_CALL 
hlds__status__typeclass_status_defined_in_this_module_1_f_0(
  MR_Word Status_3)
{
  MR_Word IsDefnThisModule_4;

  if (((MR_tag((MR_Word) Status_3)) == (MR_Integer) 1))
    IsDefnThisModule_4 = (MR_Integer) 0;
  else
    IsDefnThisModule_4 = (MR_Integer) 1;
  return IsDefnThisModule_4;
}

MR_Word MR_CALL 
hlds__status__pred_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_Word MR_CALL 
hlds__status__mode_status_defined_in_this_module_1_f_0(
  MR_Word ModeStatus_3)
{
  MR_Word IsDefnThisModule_4;
  MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsDefnThisModule_4 = (MR_Integer) 0;
  else
    IsDefnThisModule_4 = (MR_Integer) 1;
  return IsDefnThisModule_4;
}

MR_Word MR_CALL 
hlds__status__inst_status_defined_in_this_module_1_f_0(
  MR_Word InstStatus_3)
{
  MR_Word IsDefnThisModule_4;
  MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsDefnThisModule_4 = (MR_Integer) 0;
  else
    IsDefnThisModule_4 = (MR_Integer) 1;
  return IsDefnThisModule_4;
}

MR_Word MR_CALL 
hlds__status__type_status_defined_in_this_module_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_Word MR_CALL 
hlds__status__instance_status_is_imported_1_f_0(
  MR_Word Status_3)
{
  MR_Word IsImported_4;

  if (((MR_tag((MR_Word) Status_3)) == (MR_Integer) 1))
    IsImported_4 = (MR_Integer) 1;
  else
    IsImported_4 = (MR_Integer) 0;
  return IsImported_4;
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_imported_1_f_0(
  MR_Word Status_3)
{
  MR_Word IsImported_4;

  if (((MR_tag((MR_Word) Status_3)) == (MR_Integer) 1))
    IsImported_4 = (MR_Integer) 1;
  else
    IsImported_4 = (MR_Integer) 0;
  return IsImported_4;
}

MR_Word MR_CALL 
hlds__status__pred_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_4;

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 7:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          Var_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      Var_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      Var_4 = (MR_Integer) 0;
      break;
  }
  HeadVar__2_2 = mercury__bool__not_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__mode_status_is_imported_1_f_0(
  MR_Word ModeStatus_3)
{
  MR_Word IsImported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsImported_4 = (MR_Integer) 1;
  else
    IsImported_4 = (MR_Integer) 0;
  return IsImported_4;
}

MR_Word MR_CALL 
hlds__status__inst_status_is_imported_1_f_0(
  MR_Word InstStatus_3)
{
  MR_Word IsImported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsImported_4 = (MR_Integer) 1;
  else
    IsImported_4 = (MR_Integer) 0;
  return IsImported_4;
}

MR_Word MR_CALL 
hlds__status__type_status_is_imported_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_4;

  switch (MR_tag((MR_Word) OldStatus_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OldStatus_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 6:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 7:
          Var_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 8:
          Var_4 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      Var_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      Var_4 = (MR_Integer) 0;
      break;
  }
  HeadVar__2_2 = mercury__bool__not_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_to_non_submodules_1_f_0(
  MR_Word InstanceStatus_3)
{
  MR_bool succeeded;
  MR_Word IsExported_4;
  MR_Word OldStatus_5;
  MR_Word OldIsExported_6;
  MR_Word NewIsExported_7;
  MR_Word Var_9;

  OldStatus_5 = hlds__status__new_instance_status_to_old_1_f_0(InstanceStatus_3);
  Var_9 = hlds__status__old_status_is_exported_1_f_0(OldStatus_5);
  succeeded = (Var_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (OldStatus_5 != (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
    OldIsExported_6 = (MR_Integer) 1;
  else
    OldIsExported_6 = (MR_Integer) 0;
  if (((MR_tag((MR_Word) InstanceStatus_3)) == (MR_Integer) 1))
    NewIsExported_7 = (MR_Integer) 0;
  else
  {
    MR_Word Export_10 = ((MR_Unsigned) ((MR_hl_field(0, InstanceStatus_3, 0))) & (MR_Integer) 3);

    NewIsExported_7 = ((&hlds__status_vector_common_3[12 + Export_10]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldIsExported_6)), ((MR_Box) (NewIsExported_7)));
  if (succeeded)
    IsExported_4 = OldIsExported_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return IsExported_4;
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_to_non_submodules_1_f_0(
  MR_Word TypeClassStatus_3)
{
  MR_bool succeeded;
  MR_Word IsExported_4;
  MR_Word OldStatus_5;
  MR_Word OldIsExported_6;
  MR_Word NewIsExported_7;
  MR_Word Var_9;

  OldStatus_5 = hlds__status__new_typeclass_status_to_old_1_f_0(TypeClassStatus_3);
  Var_9 = hlds__status__old_status_is_exported_1_f_0(OldStatus_5);
  succeeded = (Var_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (OldStatus_5 != (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
    OldIsExported_6 = (MR_Integer) 1;
  else
    OldIsExported_6 = (MR_Integer) 0;
  if (((MR_tag((MR_Word) TypeClassStatus_3)) == (MR_Integer) 1))
    NewIsExported_7 = (MR_Integer) 0;
  else
  {
    MR_Word Export_10 = ((MR_Unsigned) ((MR_hl_field(0, TypeClassStatus_3, 0))) & (MR_Integer) 3);

    NewIsExported_7 = ((&hlds__status_vector_common_3[8 + Export_10]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldIsExported_6)), ((MR_Box) (NewIsExported_7)));
  if (succeeded)
    IsExported_4 = OldIsExported_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return IsExported_4;
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_4;

  Var_4 = hlds__status__old_status_is_exported_1_f_0(Status_3);
  succeeded = (Var_4 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
    HeadVar__2_2 = (MR_Integer) 1;
  else
    HeadVar__2_2 = (MR_Integer) 0;
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_to_non_submodules_1_f_0(
  MR_Word ModeStatus_3)
{
  MR_Word IsExported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsExported_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(
  MR_Word InstStatus_3)
{
  MR_Word IsExported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsExported_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__type_status_is_exported_to_non_submodules_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word Status_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_4;

  Var_4 = hlds__status__old_status_is_exported_1_f_0(Status_3);
  succeeded = (Var_4 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Status_3 != (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
    HeadVar__2_2 = (MR_Integer) 1;
  else
    HeadVar__2_2 = (MR_Integer) 0;
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__instance_status_is_exported_1_f_0(
  MR_Word InstanceStatus_3)
{
  MR_bool succeeded;
  MR_Word IsExported_4;
  MR_Word OldStatus_5;
  MR_Word OldIsExported_6;
  MR_Word NewIsExported_7;

  OldStatus_5 = hlds__status__new_instance_status_to_old_1_f_0(InstanceStatus_3);
  OldIsExported_6 = hlds__status__old_status_is_exported_1_f_0(OldStatus_5);
  if (((MR_tag((MR_Word) InstanceStatus_3)) == (MR_Integer) 1))
    NewIsExported_7 = (MR_Integer) 0;
  else
  {
    MR_Word InstanceExport_9 = ((MR_Unsigned) ((MR_hl_field(0, InstanceStatus_3, 0))) & (MR_Integer) 3);

    NewIsExported_7 = ((&hlds__status_vector_common_3[4 + InstanceExport_9]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldIsExported_6)), ((MR_Box) (NewIsExported_7)));
  if (succeeded)
    IsExported_4 = OldIsExported_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return IsExported_4;
}

MR_Word MR_CALL 
hlds__status__new_instance_status_to_old_1_f_0(
  MR_Word New_3)
{
  MR_Word Old_4;

  if (((MR_tag((MR_Word) New_3)) == (MR_Integer) 1))
  {
    MR_Word Import_6 = ((MR_Unsigned) ((MR_hl_field(1, New_3, 0))) & (MR_Integer) 1);

    switch (Import_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Old_4 = (MR_Word) ((MR_Unsigned) 4U);
        break;
      case (MR_Integer) 0:
        Old_4 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
  else
  {
    MR_Word Export_5 = ((MR_Unsigned) ((MR_hl_field(0, New_3, 0))) & (MR_Integer) 3);

    Old_4 = ((&hlds__status_vector_common_2[11 + Export_5]))->hlds__status__vector_common_type_2_0__vct_2_f_0;
  }
  return Old_4;
}

MR_Word MR_CALL 
hlds__status__typeclass_status_is_exported_1_f_0(
  MR_Word TypeClassStatus_3)
{
  MR_bool succeeded;
  MR_Word IsExported_4;
  MR_Word OldStatus_5;
  MR_Word OldIsExported_6;
  MR_Word NewIsExported_7;

  OldStatus_5 = hlds__status__new_typeclass_status_to_old_1_f_0(TypeClassStatus_3);
  OldIsExported_6 = hlds__status__old_status_is_exported_1_f_0(OldStatus_5);
  if (((MR_tag((MR_Word) TypeClassStatus_3)) == (MR_Integer) 1))
    NewIsExported_7 = (MR_Integer) 0;
  else
  {
    MR_Word TypeClassExport_9 = ((MR_Unsigned) ((MR_hl_field(0, TypeClassStatus_3, 0))) & (MR_Integer) 3);

    NewIsExported_7 = ((&hlds__status_vector_common_3[0 + TypeClassExport_9]))->hlds__status__vector_common_type_3_0__vct_3_f_0;
  }
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (OldIsExported_6)), ((MR_Box) (NewIsExported_7)));
  if (succeeded)
    IsExported_4 = OldIsExported_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.status.return_if_agreed\'/2", (MR_String) "disagreement");
  return IsExported_4;
}

MR_Word MR_CALL 
hlds__status__new_typeclass_status_to_old_1_f_0(
  MR_Word New_3)
{
  MR_Word Old_4;

  if (((MR_tag((MR_Word) New_3)) == (MR_Integer) 1))
  {
    MR_Word Import_6 = ((MR_Unsigned) ((MR_hl_field(1, New_3, 0))) & (MR_Integer) 7);

    Old_4 = ((&hlds__status_vector_common_2[0 + Import_6]))->hlds__status__vector_common_type_2_0__vct_2_f_0;
  }
  else
  {
    MR_Word Export_5 = ((MR_Unsigned) ((MR_hl_field(0, New_3, 0))) & (MR_Integer) 3);

    Old_4 = ((&hlds__status_vector_common_2[7 + Export_5]))->hlds__status__vector_common_type_2_0__vct_2_f_0;
  }
  return Old_4;
}

MR_Word MR_CALL 
hlds__status__pred_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__mode_status_is_exported_1_f_0(
  MR_Word ModeStatus_3)
{
  MR_Word IsExported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (ModeStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsExported_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__inst_status_is_exported_1_f_0(
  MR_Word InstStatus_3)
{
  MR_Word IsExported_4;
  MR_Word InstModeStatus_5 = (MR_Word) (InstStatus_3);

  if (((MR_tag((MR_Word) InstModeStatus_5)) == (MR_Integer) 1))
    IsExported_4 = (MR_Integer) 0;
  else
  {
    MR_Word InstModeExport_6 = ((MR_Unsigned) ((MR_hl_field(0, InstModeStatus_5, 0))) & (MR_Integer) 3);

    switch (InstModeExport_6) {
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

MR_Word MR_CALL 
hlds__status__type_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word OldStatus_3 = (MR_Word) (HeadVar__1_1);

  HeadVar__2_2 = hlds__status__old_status_is_exported_1_f_0(OldStatus_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__status__old_status_is_exported_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_bool MR_CALL 
hlds__status____Unify____inst_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____inst_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____inst_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____inst_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____instance_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____instance_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____instance_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____instance_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____instance_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____instance_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____instance_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____instance_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____instance_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____instance_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____instance_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____instance_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____instmode_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____instmode_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____instmode_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____instmode_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____instmode_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____instmode_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____instmode_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____item_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____item_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____item_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____item_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____item_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____item_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____item_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____item_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____item_mercury_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____item_mercury_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____item_mercury_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____item_mercury_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____maybe_opt_imported_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____maybe_opt_imported_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____maybe_opt_imported_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____maybe_opt_imported_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____mode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____mode_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____mode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____mode_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____new_instance_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____new_instance_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____new_instance_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____new_instance_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____new_instmode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____new_instmode_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____new_instmode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____new_instmode_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____new_typeclass_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____new_typeclass_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____new_typeclass_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____new_typeclass_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____old_import_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____old_import_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____old_import_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____old_import_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____pred_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____pred_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____pred_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____pred_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_export_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____typeclass_export_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____typeclass_export_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____typeclass_export_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____typeclass_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____typeclass_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____typeclass_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__status____Unify____typeclass_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__status____Unify____typeclass_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__status____Compare____typeclass_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__status____Compare____typeclass_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instance_export_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instance_import_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instance_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instmode_export_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_instmode_import_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_export_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_import_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_maybe_opt_imported_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_mode_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_new_instance_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_new_instmode_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_new_typeclass_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_old_import_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_pred_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_type_status_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_typeclass_export_0);
  MR_register_type_ctor_info(&hlds__status__hlds__status__type_ctor_info_typeclass_import_0);
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
