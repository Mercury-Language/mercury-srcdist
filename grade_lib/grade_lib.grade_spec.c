/*
** Automatically generated from `grade_spec.m'
** by the Mercury compiler,
** version rotd-2024-12-13
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


// :- module grade_lib.grade_spec.
// :- implementation.

/*
INIT mercury__grade_lib__grade_spec__init
ENDINIT
*/

#include "grade_lib.grade_spec.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_if_spec_0_0[2];

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_if_spec_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_if_spec_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_if_spec_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_if_spec_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_if_spec_0[1];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_if_spec_0[1];

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_implication_spec_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_implication_spec_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_implication_spec_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_implication_spec_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_implication_spec_0[1];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_implication_spec_0[1];

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_requirement_spec_0_0[2];

static const MR_ConstString grade_lib__grade_spec__grade_lib__grade_spec__field_names_requirement_spec_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_requirement_spec_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_requirement_spec_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_requirement_spec_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_requirement_spec_0[1];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_requirement_spec_0[1];

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_2;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_3;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_4;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_5;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_6;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_7;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_8;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_9;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_10;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_11;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_12;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_13;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_14;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_15;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_16;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_17;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_18;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_19;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_20;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_21;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_22;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_23;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_24;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_25;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_26;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_27;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_28;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_29;

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_id_0[30];

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_id_0[30];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_id_0[30];

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_spec__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_solver_var_spec_0_0[2];

static const MR_ConstString grade_lib__grade_spec__grade_lib__grade_spec__field_names_solver_var_spec_0_0[2];

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_solver_var_spec_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_solver_var_spec_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_solver_var_spec_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_solver_var_spec_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_solver_var_spec_0[1];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_spec_0[1];

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_2;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_3;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_4;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_5;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_6;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_7;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_8;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_9;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_10;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_11;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_12;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_13;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_14;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_15;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_16;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_17;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_18;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_19;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_20;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_21;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_22;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_23;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_24;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_25;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_26;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_27;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_28;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_29;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_30;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_31;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_32;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_33;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_34;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_35;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_36;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_37;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_38;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_39;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_40;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_41;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_42;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_43;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_44;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_45;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_46;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_47;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_48;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_49;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_50;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_51;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_52;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_53;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_54;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_55;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_56;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_57;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_58;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_59;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_60;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_61;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_62;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_63;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_64;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_65;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_66;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_67;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_68;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_69;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_70;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_71;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_72;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_73;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_74;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_75;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_76;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_77;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_78;

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_value_id_0[79];

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_value_id_0[79];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_value_id_0[79];

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_specs_version_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_specs_version_0[2];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_specs_version_0[2];

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_then_spec_0_0[2];

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_then_spec_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_then_spec_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_then_spec_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_then_spec_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_then_spec_0[1];

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_then_spec_0[1];

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____if_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____if_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____implication_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____implication_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____requirement_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____requirement_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_value_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_value_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____specs_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____specs_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____then_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_spec____Compare____then_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_spec_scalar_common_1[447][2];

static /* final */ const MR_Box grade_lib__grade_spec_scalar_common_2[35][1];




static /* final */ const MR_Box grade_lib__grade_spec_scalar_common_1[447][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 44)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[1])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[5])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[16])))
  },
  /* row  18 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[19])))
  },
  /* row  21 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[22])))
  },
  /* row  24 */
  {
    (MR_Box) ((MR_Unsigned) 2U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[26])))
  },
  /* row  28 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[29])))
  },
  /* row  31 */
  {
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[32])))
  },
  /* row  34 */
  {
    (MR_Box) ((MR_Unsigned) 5U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[35])))
  },
  /* row  37 */
  {
    (MR_Box) ((MR_Unsigned) 6U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[39])))
  },
  /* row  41 */
  {
    (MR_Box) ((MR_Unsigned) 7U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[46])))
  },
  /* row  48 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 73)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Integer) 72)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[49])))
  },
  /* row  51 */
  {
    (MR_Box) ((MR_Unsigned) 27U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[53])))
  },
  /* row  55 */
  {
    (MR_Box) ((MR_Unsigned) 9U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Integer) 31)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[56])))
  },
  /* row  58 */
  {
    (MR_Box) ((MR_Unsigned) 11U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Integer) 36)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 35)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Integer) 34)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[62])))
  },
  /* row  64 */
  {
    (MR_Box) ((MR_Unsigned) 12U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[66])))
  },
  /* row  68 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 76)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Integer) 77)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[70])))
  },
  /* row  72 */
  {
    (MR_Box) ((MR_Unsigned) 29U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[72])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Integer) 75)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Integer) 74)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[74])))
  },
  /* row  76 */
  {
    (MR_Box) ((MR_Unsigned) 28U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[73])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Integer) 71)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Integer) 70)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[78])))
  },
  /* row  80 */
  {
    (MR_Box) ((MR_Unsigned) 26U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[77])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_Integer) 69)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Integer) 68)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[82])))
  },
  /* row  84 */
  {
    (MR_Box) ((MR_Unsigned) 25U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[81])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Integer) 66)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[86])))
  },
  /* row  88 */
  {
    (MR_Box) ((MR_Unsigned) 24U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[85])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_Integer) 65)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[90])))
  },
  /* row  92 */
  {
    (MR_Box) ((MR_Unsigned) 23U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[89])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_Integer) 62)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[94])))
  },
  /* row  96 */
  {
    (MR_Box) ((MR_Unsigned) 22U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[96])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[93])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Integer) 61)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Integer) 60)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[99])))
  },
  /* row 101 */
  {
    (MR_Box) ((MR_Unsigned) 21U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[101])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[97])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Integer) 58)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Integer) 57)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[104])))
  },
  /* row 106 */
  {
    (MR_Box) ((MR_Unsigned) 20U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[106])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[102])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Integer) 55)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Integer) 54)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[108])))
  },
  /* row 110 */
  {
    (MR_Box) ((MR_Unsigned) 19U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[110])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[107])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Integer) 53)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[112])))
  },
  /* row 114 */
  {
    (MR_Box) ((MR_Unsigned) 18U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[111])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Integer) 50)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[116])))
  },
  /* row 118 */
  {
    (MR_Box) ((MR_Unsigned) 17U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[118])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[115])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Integer) 49)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Integer) 48)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[120])))
  },
  /* row 122 */
  {
    (MR_Box) ((MR_Unsigned) 16U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[122])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[119])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Integer) 47)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Integer) 46)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[124])))
  },
  /* row 126 */
  {
    (MR_Box) ((MR_Unsigned) 15U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[123])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    (MR_Box) ((MR_Unsigned) 4U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[0])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[129]))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_String) "Unboxed double precision floats require pointer-sized doubles.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[130]))
  },
  /* row 132 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[131])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    (MR_Box) ((MR_Unsigned) 29U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[69])))
  },
  /* row 134 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[1])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[133]))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_String) "Single precision floats are available when requested.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[134]))
  },
  /* row 136 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[135])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[132])))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 138 */
  {
    (MR_Box) ((MR_Unsigned) 7U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[1])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_String) "Single precision floats are available only when targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[139]))
  },
  /* row 141 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[140])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[136])))
  },
  /* row 142 */
  {
    (MR_Box) ((MR_Unsigned) 6U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[35])))
  },
  /* row 143 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[2])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_String) "Region based memory management requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[143]))
  },
  /* row 145 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[144])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[141])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[65])))
  },
  /* row 147 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[3])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[147]))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_String) "Source-to-source debugging does not work for multithreaded programs.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[148]))
  },
  /* row 150 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[149])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[145])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    (MR_Box) ((MR_Unsigned) 6U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[3])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[152]))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) "Source-to-source debugging does not make sense for the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[153]))
  },
  /* row 155 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[154])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[150])))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 157 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[4])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_String) "Declarative debugging does not work for multithreaded programs.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[158]))
  },
  /* row 160 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[159])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[155])))
  },
  /* row 161 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[5])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_String) "Debugging does not work for multithreaded programs.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[161]))
  },
  /* row 163 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[162])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[160])))
  },
  /* row 164 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[4])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_String) "Declarative debugging requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[164]))
  },
  /* row 166 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[165])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[163])))
  },
  /* row 167 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[5])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_String) "Debugging requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[167]))
  },
  /* row 169 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[168])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[166])))
  },
  /* row 170 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[6])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with thread safety.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[170]))
  },
  /* row 172 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[171])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[169])))
  },
  /* row 173 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[7])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with thread safety.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[173]))
  },
  /* row 175 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[174])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[172])))
  },
  /* row 176 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[6])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_String) "Term size profiling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[176]))
  },
  /* row 178 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[177])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[175])))
  },
  /* row 179 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[7])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_String) "Term size profiling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[179]))
  },
  /* row 181 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[180])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[178])))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[8])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[183]))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_String) "Threadscope style profiling requires thread safe code.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[184]))
  },
  /* row 186 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[185])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[181])))
  },
  /* row 187 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[8])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 188 */
  {
    ((MR_Box) ((MR_String) "Threadscope style profiling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[187]))
  },
  /* row 189 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[188])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[186])))
  },
  /* row 190 */
  {
    (MR_Box) ((MR_Unsigned) 16U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[120])))
  },
  /* row 191 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[9])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[190]))
  },
  /* row 192 */
  {
    ((MR_Box) ((MR_String) "Mprof memory profiling requires mprof call profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[191]))
  },
  /* row 193 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[192])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[189])))
  },
  /* row 194 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[9])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 195 */
  {
    ((MR_Box) ((MR_String) "Mprof memory profiling requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[194]))
  },
  /* row 196 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[195])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[193])))
  },
  /* row 197 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[10])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[190]))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_String) "Mprof time profiling requires mprof call profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[197]))
  },
  /* row 199 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[198])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[196])))
  },
  /* row 200 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[10])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_String) "Mprof time profiling requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[200]))
  },
  /* row 202 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[201])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[199])))
  },
  /* row 203 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[11])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_String) "Mprof call profiling does not work for multithreaded programs.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[203]))
  },
  /* row 205 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[204])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[202])))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    (MR_Box) ((MR_Unsigned) 12U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[206])))
  },
  /* row 208 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[11])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[207]))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_String) "Mprof call profiling interferes with minimal model tabling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[208]))
  },
  /* row 210 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[209])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[205])))
  },
  /* row 211 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[11])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_String) "Mprof call profiling requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[211]))
  },
  /* row 213 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[212])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[210])))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 215 */
  {
    (MR_Box) ((MR_Unsigned) 18U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[214])))
  },
  /* row 216 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[215]))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with mprof memory profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[216]))
  },
  /* row 218 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[217])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[213])))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Integer) 50)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 220 */
  {
    (MR_Box) ((MR_Unsigned) 17U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[219])))
  },
  /* row 221 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[220]))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with mprof time profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[221]))
  },
  /* row 223 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[222])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[218])))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Integer) 48)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 225 */
  {
    (MR_Box) ((MR_Unsigned) 16U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[224])))
  },
  /* row 226 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[225]))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with mprof call profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[226]))
  },
  /* row 228 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[227])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[223])))
  },
  /* row 229 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_String) "Deep profiling does not work for multithreaded programs.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[229]))
  },
  /* row 231 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[230])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[228])))
  },
  /* row 232 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[207]))
  },
  /* row 233 */
  {
    ((MR_Box) ((MR_String) "Deep profiling interferes with minimal model tabling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[232]))
  },
  /* row 234 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[233])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[231])))
  },
  /* row 235 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[12])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_String) "Deep profiling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[235]))
  },
  /* row 237 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[236])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[234])))
  },
  /* row 238 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[13])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_String) "History gc conflicts with threading.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[238]))
  },
  /* row 240 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[239])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[237])))
  },
  /* row 241 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[13])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 242 */
  {
    ((MR_Box) ((MR_String) "History gc requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[241]))
  },
  /* row 243 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[242])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[240])))
  },
  /* row 244 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[14])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_String) "Accurate gc conflicts with threading.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[244]))
  },
  /* row 246 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[245])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[243])))
  },
  /* row 247 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[14])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 248 */
  {
    ((MR_Box) ((MR_String) "Accurate gc requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[247]))
  },
  /* row 249 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[248])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[246])))
  },
  /* row 250 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[15])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 251 */
  {
    ((MR_Box) ((MR_String) "Boehm-Demers-Weiser debug gc requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[250]))
  },
  /* row 252 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[251])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[249])))
  },
  /* row 253 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[16])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 254 */
  {
    ((MR_Box) ((MR_String) "Boehm-Demers-Weiser gc requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[253]))
  },
  /* row 255 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[254])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[252])))
  },
  /* row 256 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[17])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 257 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling does not respect thread safety.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[256]))
  },
  /* row 258 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[257])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[255])))
  },
  /* row 259 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[18])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 260 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling does not respect thread safety.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[259]))
  },
  /* row 261 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[260])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[258])))
  },
  /* row 262 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 263 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[262])))
  },
  /* row 264 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[263])))
  },
  /* row 265 */
  {
    (MR_Box) ((MR_Unsigned) 14U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[264])))
  },
  /* row 266 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[19])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[265]))
  },
  /* row 267 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires Boehm-Demers-Weiser gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[266]))
  },
  /* row 268 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[267])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[261])))
  },
  /* row 269 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[20])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[265]))
  },
  /* row 270 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires Boehm-Demers-Weiser gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[269]))
  },
  /* row 271 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[270])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[268])))
  },
  /* row 272 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[17])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[265]))
  },
  /* row 273 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires Boehm-Demers-Weiser gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[272]))
  },
  /* row 274 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[273])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[271])))
  },
  /* row 275 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[18])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[265]))
  },
  /* row 276 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires Boehm-Demers-Weiser gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[275]))
  },
  /* row 277 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[276])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[274])))
  },
  /* row 278 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[19])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 279 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[278]))
  },
  /* row 280 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[279])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[277])))
  },
  /* row 281 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[20])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 282 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[281]))
  },
  /* row 283 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[282])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[280])))
  },
  /* row 284 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[17])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 285 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[284]))
  },
  /* row 286 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[285])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[283])))
  },
  /* row 287 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[18])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 288 */
  {
    ((MR_Box) ((MR_String) "Minimal model tabling requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[287]))
  },
  /* row 289 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[288])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[286])))
  },
  /* row 290 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[21])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[207]))
  },
  /* row 291 */
  {
    ((MR_Box) ((MR_String) "Trailing interferes with minimal model tabling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[290]))
  },
  /* row 292 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[291])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[289])))
  },
  /* row 293 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[21])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 294 */
  {
    ((MR_Box) ((MR_String) "Trailing requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[293]))
  },
  /* row 295 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[294])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[292])))
  },
  /* row 296 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[22])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 297 */
  {
    ((MR_Box) ((MR_String) "Stack extension requires the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[296]))
  },
  /* row 298 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[297])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[295])))
  },
  /* row 299 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[23])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[142]))
  },
  /* row 300 */
  {
    ((MR_Box) ((MR_String) "Stack segments require the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[299]))
  },
  /* row 301 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[300])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[298])))
  },
  /* row 302 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[25])))
  },
  /* row 303 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[24])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[302]))
  },
  /* row 304 */
  {
    ((MR_Box) ((MR_String) "Using 3 low tag bits needs at least 3 low tag bits to be available.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[303]))
  },
  /* row 305 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[304])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[301])))
  },
  /* row 306 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[26])))
  },
  /* row 307 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[25])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[306]))
  },
  /* row 308 */
  {
    ((MR_Box) ((MR_String) "Using 2 low tag bits needs at least 2 low tag bits to be available.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[307]))
  },
  /* row 309 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[308])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[305])))
  },
  /* row 310 */
  {
    ((MR_Box) ((MR_Integer) 76)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 311 */
  {
    (MR_Box) ((MR_Unsigned) 29U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[310])))
  },
  /* row 312 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[311]))
  },
  /* row 313 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code always uses boxed double-precision floats.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[312]))
  },
  /* row 314 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[313])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[309])))
  },
  /* row 315 */
  {
    ((MR_Box) ((MR_Integer) 66)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 316 */
  {
    (MR_Box) ((MR_Unsigned) 24U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[315])))
  },
  /* row 317 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[316]))
  },
  /* row 318 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports region based memory management.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[317]))
  },
  /* row 319 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[318])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[314])))
  },
  /* row 320 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 321 */
  {
    (MR_Box) ((MR_Unsigned) 23U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[320])))
  },
  /* row 322 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[321]))
  },
  /* row 323 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports target language debugging.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[322]))
  },
  /* row 324 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[323])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[319])))
  },
  /* row 325 */
  {
    ((MR_Box) ((MR_Integer) 62)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 326 */
  {
    (MR_Box) ((MR_Unsigned) 22U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[325])))
  },
  /* row 327 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[326]))
  },
  /* row 328 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports source-to-source debugging.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[327]))
  },
  /* row 329 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[328])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[324])))
  },
  /* row 330 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 331 */
  {
    (MR_Box) ((MR_Unsigned) 21U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[330])))
  },
  /* row 332 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[331]))
  },
  /* row 333 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports debugging.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[332]))
  },
  /* row 334 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[333])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[329])))
  },
  /* row 335 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 336 */
  {
    (MR_Box) ((MR_Unsigned) 20U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[335])))
  },
  /* row 337 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[336]))
  },
  /* row 338 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports term size profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[337]))
  },
  /* row 339 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[338])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[334])))
  },
  /* row 340 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[225]))
  },
  /* row 341 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports mprof-style profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[340]))
  },
  /* row 342 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[341])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[339])))
  },
  /* row 343 */
  {
    ((MR_Box) ((MR_Integer) 46)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 344 */
  {
    (MR_Box) ((MR_Unsigned) 15U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[343])))
  },
  /* row 345 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[344]))
  },
  /* row 346 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports deep profiling.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[345]))
  },
  /* row 347 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[346])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[342])))
  },
  /* row 348 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 349 */
  {
    (MR_Box) ((MR_Unsigned) 14U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[348])))
  },
  /* row 350 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[349]))
  },
  /* row 351 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code always uses the Boehm garbage collector.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[350]))
  },
  /* row 352 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[351])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[347])))
  },
  /* row 353 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[157]))
  },
  /* row 354 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never supports thread safety.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[353]))
  },
  /* row 355 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[354])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[352])))
  },
  /* row 356 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[207]))
  },
  /* row 357 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never uses minimal model.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[356]))
  },
  /* row 358 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[357])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[355])))
  },
  /* row 359 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 360 */
  {
    (MR_Box) ((MR_Unsigned) 11U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[359])))
  },
  /* row 361 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[360]))
  },
  /* row 362 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code never uses a trail.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[361]))
  },
  /* row 363 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[362])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[358])))
  },
  /* row 364 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 365 */
  {
    (MR_Box) ((MR_Unsigned) 9U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[364])))
  },
  /* row 366 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[365]))
  },
  /* row 367 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code uses 2 low tag bits.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[366]))
  },
  /* row 368 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[367])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[363])))
  },
  /* row 369 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 370 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[369])))
  },
  /* row 371 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[370])))
  },
  /* row 372 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[371])))
  },
  /* row 373 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[372]))
  },
  /* row 374 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code always uses none, reg, asm_fast or hlc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[373]))
  },
  /* row 375 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[374])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[368])))
  },
  /* row 376 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[26])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 377 */
  {
    ((MR_Box) ((MR_String) "Pregenerated code always targets C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[376]))
  },
  /* row 378 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[377])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[375])))
  },
  /* row 379 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 380 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[379])))
  },
  /* row 381 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[380])))
  },
  /* row 382 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[381])))
  },
  /* row 383 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[382])))
  },
  /* row 384 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[27])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[383]))
  },
  /* row 385 */
  {
    ((MR_Box) ((MR_String) "Using gcc asm labels requires them to be available.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[384]))
  },
  /* row 386 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[385])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[378])))
  },
  /* row 387 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 388 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[387])))
  },
  /* row 389 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[388])))
  },
  /* row 390 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[28])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[389]))
  },
  /* row 391 */
  {
    ((MR_Box) ((MR_String) "Using gcc nonlocal gotos requires them to be available.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[390]))
  },
  /* row 392 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[391])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[386])))
  },
  /* row 393 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[43])))
  },
  /* row 394 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[393])))
  },
  /* row 395 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[29])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[394]))
  },
  /* row 396 */
  {
    ((MR_Box) ((MR_String) "Using gcc register extensions requires them to be available.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[395]))
  },
  /* row 397 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[396])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[392])))
  },
  /* row 398 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[65])))
  },
  /* row 399 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[30])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[398]))
  },
  /* row 400 */
  {
    ((MR_Box) ((MR_String) "Generating Java implies using the Java threading model.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[399]))
  },
  /* row 401 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[400])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[397])))
  },
  /* row 402 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[31])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[398]))
  },
  /* row 403 */
  {
    ((MR_Box) ((MR_String) "Generating C# implies using the C# threading model.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[402]))
  },
  /* row 404 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[403])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[401])))
  },
  /* row 405 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[182])))
  },
  /* row 406 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[405])))
  },
  /* row 407 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[32])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[406]))
  },
  /* row 408 */
  {
    ((MR_Box) ((MR_String) "C does not have its own native threading model.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[407]))
  },
  /* row 409 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[408])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[404])))
  },
  /* row 410 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 411 */
  {
    (MR_Box) ((MR_Unsigned) 14U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[410])))
  },
  /* row 412 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[30])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[411]))
  },
  /* row 413 */
  {
    ((MR_Box) ((MR_String) "Targeting Java requires target native gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[412]))
  },
  /* row 414 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[413])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[409])))
  },
  /* row 415 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[31])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[411]))
  },
  /* row 416 */
  {
    ((MR_Box) ((MR_String) "Targeting C# requires target native gc.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[415]))
  },
  /* row 417 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[416])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[414])))
  },
  /* row 418 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 419 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[418])))
  },
  /* row 420 */
  {
    ((MR_Box) ((MR_Integer) 44)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[419])))
  },
  /* row 421 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[420])))
  },
  /* row 422 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[421])))
  },
  /* row 423 */
  {
    (MR_Box) ((MR_Unsigned) 14U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[422])))
  },
  /* row 424 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[32])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[423]))
  },
  /* row 425 */
  {
    ((MR_Box) ((MR_String) "C does not have a native garbage collector.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[424]))
  },
  /* row 426 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[425])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[417])))
  },
  /* row 427 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[30])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[152]))
  },
  /* row 428 */
  {
    ((MR_Box) ((MR_String) "Targeting Java requires the MLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[427]))
  },
  /* row 429 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[428])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[426])))
  },
  /* row 430 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[31])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[152]))
  },
  /* row 431 */
  {
    ((MR_Box) ((MR_String) "Targeting C# requires the MLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[430]))
  },
  /* row 432 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[431])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[429])))
  },
  /* row 433 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 434 */
  {
    (MR_Box) ((MR_Unsigned) 8U),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[433])))
  },
  /* row 435 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[33])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[434]))
  },
  /* row 436 */
  {
    ((MR_Box) ((MR_String) "The use of gcc extensions makes sense only for the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[435]))
  },
  /* row 437 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[436])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[432])))
  },
  /* row 438 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[34])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[321]))
  },
  /* row 439 */
  {
    ((MR_Box) ((MR_String) "The .c_debug grade component is not supported by the LLDS backend.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[438]))
  },
  /* row 440 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[439])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[437])))
  },
  /* row 441 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[34])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[138]))
  },
  /* row 442 */
  {
    ((MR_Box) ((MR_String) "Using the LLDS backend requires targeting C.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[441]))
  },
  /* row 443 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[442])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[440])))
  },
  /* row 444 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_2[33])),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[41]))
  },
  /* row 445 */
  {
    ((MR_Box) ((MR_String) "Using the MLDS backend requires targeting C, C# or Java.")),
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[444]))
  },
  /* row 446 */
  {
    ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[445])),
    ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[443])))
  },
};

static /* final */ const MR_Box grade_lib__grade_spec_scalar_common_2[35][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 29U << 7)) | (MR_Unsigned) 77U)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 28U << 7)) | (MR_Unsigned) 75U)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 24U << 7)) | (MR_Unsigned) 67U)) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 22U << 7)) | (MR_Unsigned) 63U)) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 21U << 7)) | (MR_Unsigned) 61U)) },
  /* row   5 */
  { (MR_Box) (((((MR_Unsigned) 21U << 7)) | (MR_Unsigned) 60U)) },
  /* row   6 */
  { (MR_Box) (((((MR_Unsigned) 20U << 7)) | (MR_Unsigned) 58U)) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 20U << 7)) | (MR_Unsigned) 57U)) },
  /* row   8 */
  { (MR_Box) (((((MR_Unsigned) 19U << 7)) | (MR_Unsigned) 55U)) },
  /* row   9 */
  { (MR_Box) (((((MR_Unsigned) 18U << 7)) | (MR_Unsigned) 53U)) },
  /* row  10 */
  { (MR_Box) (((((MR_Unsigned) 17U << 7)) | (MR_Unsigned) 51U)) },
  /* row  11 */
  { (MR_Box) (((((MR_Unsigned) 16U << 7)) | (MR_Unsigned) 49U)) },
  /* row  12 */
  { (MR_Box) (((((MR_Unsigned) 15U << 7)) | (MR_Unsigned) 47U)) },
  /* row  13 */
  { (MR_Box) (((((MR_Unsigned) 14U << 7)) | (MR_Unsigned) 45U)) },
  /* row  14 */
  { (MR_Box) (((((MR_Unsigned) 14U << 7)) | (MR_Unsigned) 44U)) },
  /* row  15 */
  { (MR_Box) (((((MR_Unsigned) 14U << 7)) | (MR_Unsigned) 42U)) },
  /* row  16 */
  { (MR_Box) (((((MR_Unsigned) 14U << 7)) | (MR_Unsigned) 41U)) },
  /* row  17 */
  { (MR_Box) (((((MR_Unsigned) 12U << 7)) | (MR_Unsigned) 34U)) },
  /* row  18 */
  { (MR_Box) (((((MR_Unsigned) 12U << 7)) | (MR_Unsigned) 33U)) },
  /* row  19 */
  { (MR_Box) (((((MR_Unsigned) 12U << 7)) | (MR_Unsigned) 36U)) },
  /* row  20 */
  { (MR_Box) (((((MR_Unsigned) 12U << 7)) | (MR_Unsigned) 35U)) },
  /* row  21 */
  { (MR_Box) (((((MR_Unsigned) 11U << 7)) | (MR_Unsigned) 31U)) },
  /* row  22 */
  { (MR_Box) (((((MR_Unsigned) 10U << 7)) | (MR_Unsigned) 29U)) },
  /* row  23 */
  { (MR_Box) (((((MR_Unsigned) 10U << 7)) | (MR_Unsigned) 28U)) },
  /* row  24 */
  { (MR_Box) (((((MR_Unsigned) 9U << 7)) | (MR_Unsigned) 26U)) },
  /* row  25 */
  { (MR_Box) (((((MR_Unsigned) 9U << 7)) | (MR_Unsigned) 25U)) },
  /* row  26 */
  { (MR_Box) (((((MR_Unsigned) 27U << 7)) | (MR_Unsigned) 73U)) },
  /* row  27 */
  { (MR_Box) (((((MR_Unsigned) 2U << 7)) | (MR_Unsigned) 4U)) },
  /* row  28 */
  { (MR_Box) (((((MR_Unsigned) 1U << 7)) | (MR_Unsigned) 2U)) },
  /* row  29 */
  { (MR_Box) (((MR_Unsigned) 0U << 7)) },
  /* row  30 */
  { (MR_Box) (((((MR_Unsigned) 7U << 7)) | (MR_Unsigned) 17U)) },
  /* row  31 */
  { (MR_Box) (((((MR_Unsigned) 7U << 7)) | (MR_Unsigned) 16U)) },
  /* row  32 */
  { (MR_Box) (((((MR_Unsigned) 7U << 7)) | (MR_Unsigned) 15U)) },
  /* row  33 */
  { (MR_Box) (((((MR_Unsigned) 6U << 7)) | (MR_Unsigned) 13U)) },
  /* row  34 */
  { (MR_Box) (((((MR_Unsigned) 6U << 7)) | (MR_Unsigned) 14U)) },
};





static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_if_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_if_spec_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  }
};

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_if_spec_0_0 = {
  (MR_String) "being",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_spec__grade_lib__grade_spec__field_types_if_spec_0_0,
  NULL,
  grade_lib__grade_spec__grade_lib__grade_spec__field_locns_if_spec_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_if_spec_0_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_if_spec_0_0 };

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_if_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_if_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_if_spec_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_if_spec_0_0 };

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_if_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_if_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_spec____Unify____if_spec_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____if_spec_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "if_spec",
  { grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_if_spec_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_if_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_if_spec_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_implication_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_if_spec_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_then_spec_0)
};

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_implication_spec_0_0 = {
  (MR_String) "implies_that",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_spec__grade_lib__grade_spec__field_types_implication_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_implication_spec_0_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_implication_spec_0_0 };

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_implication_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_implication_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_implication_spec_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_implication_spec_0_0 };

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_implication_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_implication_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_spec____Unify____implication_spec_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____implication_spec_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "implication_spec",
  { grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_implication_spec_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_implication_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_implication_spec_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_requirement_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_implication_spec_0)
};

static const MR_ConstString grade_lib__grade_spec__grade_lib__grade_spec__field_names_requirement_spec_0_0[2] = {
  (MR_String) "rs_explanation",
  (MR_String) "rs_implication"
};

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_requirement_spec_0_0 = {
  (MR_String) "requirement_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_spec__grade_lib__grade_spec__field_types_requirement_spec_0_0,
  grade_lib__grade_spec__grade_lib__grade_spec__field_names_requirement_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_requirement_spec_0_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_requirement_spec_0_0 };

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_requirement_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_requirement_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_requirement_spec_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_requirement_spec_0_0 };

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_requirement_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_requirement_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_spec____Unify____requirement_spec_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____requirement_spec_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "requirement_spec",
  { grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_requirement_spec_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_requirement_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_requirement_spec_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_0 = {
  (MR_String) "svar_ac_gcc_regs_avail",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_1 = {
  (MR_String) "svar_ac_gcc_gotos_avail",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_2 = {
  (MR_String) "svar_ac_gcc_labels_avail",
  INT32_C(2)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_3 = {
  (MR_String) "svar_ac_low_tag_bits_avail",
  INT32_C(3)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_4 = {
  (MR_String) "svar_ac_size_of_double",
  INT32_C(4)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_5 = {
  (MR_String) "svar_ac_merc_file",
  INT32_C(5)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_6 = {
  (MR_String) "svar_backend",
  INT32_C(6)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_7 = {
  (MR_String) "svar_target",
  INT32_C(7)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_8 = {
  (MR_String) "svar_gcc_conf",
  INT32_C(8)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_9 = {
  (MR_String) "svar_low_tag_bits_use",
  INT32_C(9)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_10 = {
  (MR_String) "svar_stack_len",
  INT32_C(10)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_11 = {
  (MR_String) "svar_trail",
  INT32_C(11)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_12 = {
  (MR_String) "svar_minmodel",
  INT32_C(12)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_13 = {
  (MR_String) "svar_thread_safe",
  INT32_C(13)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_14 = {
  (MR_String) "svar_gc",
  INT32_C(14)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_15 = {
  (MR_String) "svar_deep_prof",
  INT32_C(15)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_16 = {
  (MR_String) "svar_mprof_call",
  INT32_C(16)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_17 = {
  (MR_String) "svar_mprof_time",
  INT32_C(17)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_18 = {
  (MR_String) "svar_mprof_memory",
  INT32_C(18)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_19 = {
  (MR_String) "svar_tscope_prof",
  INT32_C(19)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_20 = {
  (MR_String) "svar_term_size_prof",
  INT32_C(20)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_21 = {
  (MR_String) "svar_debug",
  INT32_C(21)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_22 = {
  (MR_String) "svar_ssdebug",
  INT32_C(22)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_23 = {
  (MR_String) "svar_target_debug",
  INT32_C(23)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_24 = {
  (MR_String) "svar_rbmm",
  INT32_C(24)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_25 = {
  (MR_String) "svar_rbmm_debug",
  INT32_C(25)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_26 = {
  (MR_String) "svar_rbmm_prof",
  INT32_C(26)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_27 = {
  (MR_String) "svar_pregen",
  INT32_C(27)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_28 = {
  (MR_String) "svar_request_single_prec_float",
  INT32_C(28)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_29 = {
  (MR_String) "svar_merc_float",
  INT32_C(29)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_id_0[30] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_1,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_2,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_3,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_4,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_5,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_6,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_7,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_8,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_9,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_10,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_11,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_12,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_13,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_14,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_15,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_16,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_17,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_18,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_19,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_20,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_21,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_22,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_23,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_24,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_25,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_26,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_27,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_28,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_29
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_id_0[30] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_1,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_2,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_3,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_5,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_4,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_6,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_21,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_15,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_14,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_8,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_9,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_29,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_12,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_16,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_18,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_17,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_27,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_24,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_25,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_26,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_28,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_22,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_10,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_7,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_23,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_20,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_13,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_11,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_id_0_19
};

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_id_0[30] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 24,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 23,
  (MR_Integer) 28,
  (MR_Integer) 13,
  (MR_Integer) 27,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 16,
  (MR_Integer) 15,
  (MR_Integer) 29,
  (MR_Integer) 26,
  (MR_Integer) 7,
  (MR_Integer) 22,
  (MR_Integer) 25,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 20,
  (MR_Integer) 17,
  (MR_Integer) 21,
  (MR_Integer) 12
};

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_spec____Unify____solver_var_id_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____solver_var_id_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "solver_var_id",
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_id_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_id_0 },
  (MR_Integer) 30,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_id_0,

};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_spec__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0) }
};

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_solver_var_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_ConstString grade_lib__grade_spec__grade_lib__grade_spec__field_names_solver_var_spec_0_0[2] = {
  (MR_String) "svs_var",
  (MR_String) "svs_values"
};

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_solver_var_spec_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_solver_var_spec_0_0 = {
  (MR_String) "solver_var_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_spec__grade_lib__grade_spec__field_types_solver_var_spec_0_0,
  grade_lib__grade_spec__grade_lib__grade_spec__field_names_solver_var_spec_0_0,
  grade_lib__grade_spec__grade_lib__grade_spec__field_locns_solver_var_spec_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_solver_var_spec_0_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_solver_var_spec_0_0 };

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_solver_var_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_solver_var_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_solver_var_spec_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_solver_var_spec_0_0 };

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_spec____Unify____solver_var_spec_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____solver_var_spec_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "solver_var_spec",
  { grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_solver_var_spec_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_solver_var_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_spec_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_0 = {
  (MR_String) "svalue_ac_gcc_regs_avail_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_1 = {
  (MR_String) "svalue_ac_gcc_regs_avail_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_2 = {
  (MR_String) "svalue_ac_gcc_gotos_avail_no",
  INT32_C(2)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_3 = {
  (MR_String) "svalue_ac_gcc_gotos_avail_yes",
  INT32_C(3)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_4 = {
  (MR_String) "svalue_ac_gcc_labels_avail_no",
  INT32_C(4)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_5 = {
  (MR_String) "svalue_ac_gcc_labels_avail_yes",
  INT32_C(5)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_6 = {
  (MR_String) "svalue_ac_low_tag_bits_avail_0",
  INT32_C(6)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_7 = {
  (MR_String) "svalue_ac_low_tag_bits_avail_2",
  INT32_C(7)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_8 = {
  (MR_String) "svalue_ac_low_tag_bits_avail_3",
  INT32_C(8)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_9 = {
  (MR_String) "svalue_ac_size_of_double_eq_ptr",
  INT32_C(9)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_10 = {
  (MR_String) "svalue_ac_size_of_double_ne_ptr",
  INT32_C(10)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_11 = {
  (MR_String) "svalue_ac_merc_file_no",
  INT32_C(11)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_12 = {
  (MR_String) "svalue_ac_merc_file_yes",
  INT32_C(12)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_13 = {
  (MR_String) "svalue_backend_mlds",
  INT32_C(13)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_14 = {
  (MR_String) "svalue_backend_llds",
  INT32_C(14)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_15 = {
  (MR_String) "svalue_target_c",
  INT32_C(15)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_16 = {
  (MR_String) "svalue_target_csharp",
  INT32_C(16)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_17 = {
  (MR_String) "svalue_target_java",
  INT32_C(17)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_18 = {
  (MR_String) "svalue_gcc_conf_none",
  INT32_C(18)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_19 = {
  (MR_String) "svalue_gcc_conf_reg",
  INT32_C(19)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_20 = {
  (MR_String) "svalue_gcc_conf_jump",
  INT32_C(20)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_21 = {
  (MR_String) "svalue_gcc_conf_fast",
  INT32_C(21)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_22 = {
  (MR_String) "svalue_gcc_conf_asm_jump",
  INT32_C(22)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_23 = {
  (MR_String) "svalue_gcc_conf_asm_fast",
  INT32_C(23)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_24 = {
  (MR_String) "svalue_low_tag_bits_use_0",
  INT32_C(24)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_25 = {
  (MR_String) "svalue_low_tag_bits_use_2",
  INT32_C(25)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_26 = {
  (MR_String) "svalue_low_tag_bits_use_3",
  INT32_C(26)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_27 = {
  (MR_String) "svalue_stack_len_std",
  INT32_C(27)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_28 = {
  (MR_String) "svalue_stack_len_segments",
  INT32_C(28)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_29 = {
  (MR_String) "svalue_stack_len_extend",
  INT32_C(29)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_30 = {
  (MR_String) "svalue_trail_no",
  INT32_C(30)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_31 = {
  (MR_String) "svalue_trail_yes",
  INT32_C(31)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_32 = {
  (MR_String) "svalue_minmodel_no",
  INT32_C(32)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_33 = {
  (MR_String) "svalue_minmodel_stack_copy",
  INT32_C(33)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_34 = {
  (MR_String) "svalue_minmodel_stack_copy_debug",
  INT32_C(34)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_35 = {
  (MR_String) "svalue_minmodel_own_stack",
  INT32_C(35)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_36 = {
  (MR_String) "svalue_minmodel_own_stack_debug",
  INT32_C(36)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_37 = {
  (MR_String) "svalue_thread_safe_c_no",
  INT32_C(37)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_38 = {
  (MR_String) "svalue_thread_safe_c_yes",
  INT32_C(38)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_39 = {
  (MR_String) "svalue_thread_safe_target_native",
  INT32_C(39)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_40 = {
  (MR_String) "svalue_gc_none",
  INT32_C(40)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_41 = {
  (MR_String) "svalue_gc_bdw",
  INT32_C(41)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_42 = {
  (MR_String) "svalue_gc_bdw_debug",
  INT32_C(42)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_43 = {
  (MR_String) "svalue_gc_target_native",
  INT32_C(43)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_44 = {
  (MR_String) "svalue_gc_accurate",
  INT32_C(44)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_45 = {
  (MR_String) "svalue_gc_history",
  INT32_C(45)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_46 = {
  (MR_String) "svalue_deep_prof_no",
  INT32_C(46)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_47 = {
  (MR_String) "svalue_deep_prof_yes",
  INT32_C(47)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_48 = {
  (MR_String) "svalue_mprof_call_no",
  INT32_C(48)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_49 = {
  (MR_String) "svalue_mprof_call_yes",
  INT32_C(49)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_50 = {
  (MR_String) "svalue_mprof_time_no",
  INT32_C(50)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_51 = {
  (MR_String) "svalue_mprof_time_yes",
  INT32_C(51)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_52 = {
  (MR_String) "svalue_mprof_memory_no",
  INT32_C(52)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_53 = {
  (MR_String) "svalue_mprof_memory_yes",
  INT32_C(53)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_54 = {
  (MR_String) "svalue_tscope_prof_no",
  INT32_C(54)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_55 = {
  (MR_String) "svalue_tscope_prof_yes",
  INT32_C(55)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_56 = {
  (MR_String) "svalue_term_size_prof_no",
  INT32_C(56)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_57 = {
  (MR_String) "svalue_term_size_prof_cells",
  INT32_C(57)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_58 = {
  (MR_String) "svalue_term_size_prof_words",
  INT32_C(58)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_59 = {
  (MR_String) "svalue_debug_none",
  INT32_C(59)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_60 = {
  (MR_String) "svalue_debug_debug",
  INT32_C(60)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_61 = {
  (MR_String) "svalue_debug_decldebug",
  INT32_C(61)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_62 = {
  (MR_String) "svalue_ssdebug_no",
  INT32_C(62)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_63 = {
  (MR_String) "svalue_ssdebug_yes",
  INT32_C(63)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_64 = {
  (MR_String) "svalue_target_debug_no",
  INT32_C(64)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_65 = {
  (MR_String) "svalue_target_debug_yes",
  INT32_C(65)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_66 = {
  (MR_String) "svalue_rbmm_no",
  INT32_C(66)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_67 = {
  (MR_String) "svalue_rbmm_yes",
  INT32_C(67)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_68 = {
  (MR_String) "svalue_rbmm_debug_no",
  INT32_C(68)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_69 = {
  (MR_String) "svalue_rbmm_debug_yes",
  INT32_C(69)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_70 = {
  (MR_String) "svalue_rbmm_prof_no",
  INT32_C(70)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_71 = {
  (MR_String) "svalue_rbmm_prof_yes",
  INT32_C(71)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_72 = {
  (MR_String) "svalue_pregen_no",
  INT32_C(72)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_73 = {
  (MR_String) "svalue_pregen_yes",
  INT32_C(73)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_74 = {
  (MR_String) "svalue_request_single_prec_float_no",
  INT32_C(74)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_75 = {
  (MR_String) "svalue_request_single_prec_float_yes",
  INT32_C(75)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_76 = {
  (MR_String) "svalue_merc_float_is_boxed_c_double",
  INT32_C(76)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_77 = {
  (MR_String) "svalue_merc_float_is_unboxed_c_double",
  INT32_C(77)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_78 = {
  (MR_String) "svalue_merc_float_is_unboxed_c_float",
  INT32_C(78)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_value_id_0[79] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_1,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_2,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_3,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_4,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_5,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_6,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_7,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_8,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_9,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_10,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_11,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_12,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_13,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_14,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_15,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_16,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_17,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_18,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_19,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_20,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_21,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_22,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_23,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_24,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_25,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_26,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_27,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_28,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_29,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_30,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_31,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_32,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_33,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_34,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_35,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_36,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_37,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_38,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_39,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_40,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_41,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_42,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_43,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_44,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_45,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_46,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_47,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_48,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_49,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_50,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_51,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_52,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_53,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_54,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_55,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_56,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_57,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_58,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_59,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_60,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_61,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_62,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_63,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_64,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_65,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_66,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_67,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_68,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_69,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_70,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_71,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_72,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_73,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_74,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_75,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_76,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_77,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_78
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_value_id_0[79] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_2,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_3,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_4,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_5,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_1,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_6,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_7,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_8,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_11,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_12,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_9,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_10,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_14,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_13,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_60,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_61,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_59,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_46,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_47,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_44,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_41,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_42,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_45,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_40,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_43,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_23,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_22,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_21,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_20,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_18,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_19,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_24,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_25,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_26,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_76,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_77,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_78,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_32,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_35,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_36,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_33,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_34,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_48,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_49,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_52,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_53,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_50,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_51,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_72,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_73,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_68,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_69,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_66,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_70,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_71,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_67,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_74,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_75,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_62,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_63,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_29,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_28,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_27,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_15,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_16,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_64,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_65,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_17,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_57,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_56,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_58,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_37,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_38,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_39,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_30,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_31,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_54,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_solver_var_value_id_0_55
};

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_value_id_0[79] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 64,
  (MR_Integer) 65,
  (MR_Integer) 68,
  (MR_Integer) 30,
  (MR_Integer) 31,
  (MR_Integer) 29,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 26,
  (MR_Integer) 32,
  (MR_Integer) 33,
  (MR_Integer) 34,
  (MR_Integer) 63,
  (MR_Integer) 62,
  (MR_Integer) 61,
  (MR_Integer) 75,
  (MR_Integer) 76,
  (MR_Integer) 38,
  (MR_Integer) 41,
  (MR_Integer) 42,
  (MR_Integer) 39,
  (MR_Integer) 40,
  (MR_Integer) 72,
  (MR_Integer) 73,
  (MR_Integer) 74,
  (MR_Integer) 24,
  (MR_Integer) 21,
  (MR_Integer) 22,
  (MR_Integer) 25,
  (MR_Integer) 20,
  (MR_Integer) 23,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 43,
  (MR_Integer) 44,
  (MR_Integer) 47,
  (MR_Integer) 48,
  (MR_Integer) 45,
  (MR_Integer) 46,
  (MR_Integer) 77,
  (MR_Integer) 78,
  (MR_Integer) 70,
  (MR_Integer) 69,
  (MR_Integer) 71,
  (MR_Integer) 17,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 59,
  (MR_Integer) 60,
  (MR_Integer) 66,
  (MR_Integer) 67,
  (MR_Integer) 53,
  (MR_Integer) 56,
  (MR_Integer) 51,
  (MR_Integer) 52,
  (MR_Integer) 54,
  (MR_Integer) 55,
  (MR_Integer) 49,
  (MR_Integer) 50,
  (MR_Integer) 57,
  (MR_Integer) 58,
  (MR_Integer) 35,
  (MR_Integer) 36,
  (MR_Integer) 37
};

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_spec____Unify____solver_var_value_id_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____solver_var_value_id_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "solver_var_value_id",
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_solver_var_value_id_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_solver_var_value_id_0 },
  (MR_Integer) 79,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_solver_var_value_id_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_0 = {
  (MR_String) "specs_version_0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_1 = {
  (MR_String) "specs_version_1",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_specs_version_0[2] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_specs_version_0[2] = {
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_0,
  &grade_lib__grade_spec__grade_lib__grade_spec__enum_functor_desc_specs_version_0_1
};

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_specs_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_specs_version_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_spec____Unify____specs_version_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____specs_version_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "specs_version",
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_name_ordered_specs_version_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__enum_ordinal_ordered_specs_version_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_specs_version_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_spec__grade_lib__grade_spec__field_types_then_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_DuArgLocn grade_lib__grade_spec__grade_lib__grade_spec__field_locns_then_spec_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_then_spec_0_0 = {
  (MR_String) "is_one_of",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_spec__grade_lib__grade_spec__field_types_then_spec_0_0,
  NULL,
  grade_lib__grade_spec__grade_lib__grade_spec__field_locns_then_spec_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_then_spec_0_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_then_spec_0_0 };

static const MR_DuPtagLayout grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_then_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_spec__grade_lib__grade_spec__du_stag_ordered_then_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_then_spec_0[1] = { &grade_lib__grade_spec__grade_lib__grade_spec__du_functor_desc_then_spec_0_0 };

static const MR_Integer grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_then_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_then_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_spec____Unify____then_spec_0_0_10001)),
  ((MR_Box) (grade_lib__grade_spec____Compare____then_spec_0_0_10001)),
  (MR_String) "grade_lib.grade_spec",
  (MR_String) "then_spec",
  { grade_lib__grade_spec__grade_lib__grade_spec__du_name_ordered_then_spec_0 },
  { grade_lib__grade_spec__grade_lib__grade_spec__du_ptag_ordered_then_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_spec__grade_lib__grade_spec__functor_number_map_then_spec_0,

};

void MR_CALL 
grade_lib__grade_spec____Compare____specs_version_0_0(
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
grade_lib__grade_spec____Unify____specs_version_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_value_id_0_0(
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
grade_lib__grade_spec____Unify____solver_var_value_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_spec_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_spec_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&grade_lib__grade_spec_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_id_0_0(
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
grade_lib__grade_spec____Unify____solver_var_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____requirement_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      grade_lib__grade_spec____Compare____implication_spec_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
grade_lib__grade_spec____Unify____requirement_spec_0_0(
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
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = grade_lib__grade_spec____Unify____implication_spec_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____implication_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    grade_lib__grade_spec____Compare____if_spec_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      grade_lib__grade_spec____Compare____then_spec_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
grade_lib__grade_spec____Compare____then_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_spec_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
grade_lib__grade_spec____Unify____implication_spec_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = grade_lib__grade_spec____Unify____if_spec_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = grade_lib__grade_spec____Unify____then_spec_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
grade_lib__grade_spec____Unify____then_spec_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&grade_lib__grade_spec_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_spec____Compare____if_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_spec____Unify____if_spec_0_0(
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
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_Word MR_CALL 
grade_lib__grade_spec__init_requirement_specs_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[446]));
}

MR_Word MR_CALL 
grade_lib__grade_spec__init_solver_var_specs_1_f_0(
  MR_Word SpecsVersion_3)
{
  MR_Word Specs_4;
  MR_Word StackLenPrefOrder_5;
  MR_Word GcPrefOrder_6;
  MR_Word Var_50;
  MR_Word Var_58;
  MR_Word Var_66;
  MR_Word Var_76;
  MR_Word Var_84;
  MR_Word Var_92;
  MR_Word Var_100;
  MR_Word Var_110;
  MR_Word Var_126;
  MR_Word Var_134;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_147;
  MR_Word Var_155;
  MR_Word Var_169;
  MR_Word Var_179;
  MR_Word Var_180;

  switch (SpecsVersion_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        StackLenPrefOrder_5 = (MR_Word) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[3]));
        GcPrefOrder_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[9]));
      }
      break;
    case (MR_Integer) 1:
      {
        StackLenPrefOrder_5 = (MR_Word) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[11]));
        GcPrefOrder_6 = (MR_Word) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[15]));
      }
      break;
  }
  {
    Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_145, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 10));
    MR_hl_field(0, Var_145, 1) = ((MR_Box) (StackLenPrefOrder_5));
  }
  {
    Var_180 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_180, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 14));
    MR_hl_field(0, Var_180, 1) = ((MR_Box) (GcPrefOrder_6));
  }
  {
    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
    MR_hl_field(1, Var_179, 1) = ((MR_Box) (MR_mkword(1, &grade_lib__grade_spec_scalar_common_1[127])));
  }
  {
    Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_169, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[68]));
    MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_179));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[64]));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_169));
  }
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[58]));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_155));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[55]));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[51]));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[48]));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[41]));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[37]));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[34]));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[31]));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[28]));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_76));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[24]));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[21]));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_58));
  }
  {
    Specs_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_4, 0) = ((MR_Box) (&grade_lib__grade_spec_scalar_common_1[18]));
    MR_hl_field(1, Specs_4, 1) = ((MR_Box) (Var_50));
  }
  return Specs_4;
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____if_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____if_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____if_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____if_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____implication_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____implication_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____implication_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____implication_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____requirement_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____requirement_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____requirement_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____requirement_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____solver_var_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____solver_var_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____solver_var_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____solver_var_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____solver_var_value_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____solver_var_value_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____solver_var_value_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____solver_var_value_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____specs_version_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____specs_version_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____specs_version_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____specs_version_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_spec____Unify____then_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_spec____Unify____then_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_spec____Compare____then_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_spec____Compare____then_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__grade_lib__grade_spec__init(void)
{
}

void mercury__grade_lib__grade_spec__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_if_spec_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_implication_spec_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_requirement_spec_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_spec_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_specs_version_0);
	MR_register_type_ctor_info(&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_then_spec_0);
}

void mercury__grade_lib__grade_spec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_spec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_spec.
