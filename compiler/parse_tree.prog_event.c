/*
** Automatically generated from `prog_event.m'
** by the Mercury compiler,
** version rotd-2023-12-08
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


// :- module parse_tree.prog_event.
// :- implementation.

/*
INIT mercury__parse_tree__prog_event__init
ENDINIT
*/

#include "parse_tree.prog_event.mih"


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
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0[4];

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_ordinal_ordered_event_attr_function_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0[2];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[2];

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0[3];

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1[2];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2[1];

static const MR_DuArgLocn parse_tree__prog_event__parse_tree__prog_event__field_locns_event_attr_type_0_2[1];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[3];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0[3];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0[2];

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0;

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0[4];

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0[1];

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0[1];

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__904__1_2_p_0(
  MR_Word Kind_7,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__742__1_3_p_0(
  MR_Word AttrNameMap_3,
  MR_String HeadVar__2_105,
  MR_Word * HeadVar__3_106);

static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__630__1_2_f_0(
  MR_Word STATE_VARIABLE_AttrTypeMap_0_6,
  MR_String HeadVar__2_130);

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
  MR_Word Attribute_3,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
  MR_Word Attribute_3,
  MR_Word * HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
  MR_Word Attr_3);

static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
  MR_Word Type_3);

static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
  MR_Word Spec_3);

static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
  MR_Word SpecA_4,
  MR_Word SpecB_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
  MR_Word Spec_4,
  MR_Integer STATE_VARIABLE_MaxNumAttr_0_8,
  MR_Integer * STATE_VARIABLE_MaxNumAttr_9);

static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__prog_event__acc_self_dependent_nodes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSelfRecSccs_0_7,
  MR_Word * STATE_VARIABLE_RevSelfRecSccs_8);

static MR_bool MR_CALL 
parse_tree__prog_event__two_or_more_attrs_in_scc_1_p_0(
  MR_Word Scc_2);

static void MR_CALL 
parse_tree__prog_event__read_specs_file_2_5_p_0(
  MR_String SpecsFileName_1,
  MR_String TermFileName_2,
  MR_String * Problem_3);

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
  MR_String FileName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_EventSpecMap_0_3,
  MR_Word * STATE_VARIABLE_EventSpecMap_4,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_5,
  MR_Word * STATE_VARIABLE_ErrorSpecs_6);

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
  MR_String FileName_7,
  MR_Word SpecTerm_8,
  MR_Word STATE_VARIABLE_EventSpecMap_0_43,
  MR_Word * STATE_VARIABLE_EventSpecMap_44,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_45,
  MR_Word * STATE_VARIABLE_ErrorSpecs_46);

static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Word AttrNameMap_3,
  MR_Word AttrTypeMap_4,
  MR_Integer AttrNum_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevAttrs_0_7,
  MR_Word * STATE_VARIABLE_RevAttrs_8,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_9,
  MR_Word * STATE_VARIABLE_ErrorSpecs_10);

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
  MR_Word AttrNameMap_7,
  MR_String AttrName_8,
  MR_Word Ancestors_9,
  MR_Word STATE_VARIABLE_AlreadyComputed_0_23,
  MR_Word * STATE_VARIABLE_AlreadyComputed_24,
  MR_Word * PrevSynthOrder_11);

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AlreadyComputed_0_4,
  MR_Word * STATE_VARIABLE_AlreadyComputed_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Word AttrNameMap_3,
  MR_Word KeyMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_AttrTypeMap_0_6,
  MR_Word * STATE_VARIABLE_AttrTypeMap_7,
  MR_Word STATE_VARIABLE_DepRel_0_8,
  MR_Word * STATE_VARIABLE_DepRel_9,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * STATE_VARIABLE_ErrorSpecs_11);

static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Integer AttrLineNumber_3,
  MR_Word KeyMap_4,
  MR_String SynthAttrName_5,
  MR_Word SynthAttrKey_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_DepRel_0_8,
  MR_Word * STATE_VARIABLE_DepRel_9,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * STATE_VARIABLE_ErrorSpecs_11);

static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Integer EventLineNumber_3,
  MR_Word HeadVar__4_4,
  MR_Integer AttrNum_5,
  MR_Word STATE_VARIABLE_AttrNumMap_0_6,
  MR_Word * STATE_VARIABLE_AttrNumMap_7,
  MR_Word STATE_VARIABLE_AttrNameMap_0_8,
  MR_Word * STATE_VARIABLE_AttrNameMap_9,
  MR_Word STATE_VARIABLE_AttrTypeMap_0_10,
  MR_Word * STATE_VARIABLE_AttrTypeMap_11,
  MR_Word STATE_VARIABLE_KeyMap_0_12,
  MR_Word * STATE_VARIABLE_KeyMap_13,
  MR_Word STATE_VARIABLE_DepRel_0_14,
  MR_Word * STATE_VARIABLE_DepRel_15,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_16,
  MR_Word * STATE_VARIABLE_ErrorSpecs_17);

static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
  MR_Word Term_3);

static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
  MR_Word AttrMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_event__acc_circular_synth_attr_error_5_p_0(
  MR_Word Context_6,
  MR_String EventName_7,
  MR_Word Scc_8,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_17,
  MR_Word * STATE_VARIABLE_ErrorSpecs_18);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[40][2];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[16][3];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[8][5];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[5][6];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[2][4];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[1][8];




static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "eof in term specification file."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Duplicate event specification for event"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The previous event specification is here."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Circular dependency among the synthesized attributes"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Synthesized attribute"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "depends on itself."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Synthesized attributes"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "depend on each other."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Event"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has more than one attribute named"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Attribute"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by synthesized attributes."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is assigned inconsistent types"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be synthesized"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by non-function attribute"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "uses nonexistent attribute"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in its synthesis."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not use the function attribute"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__prog_event_scalar_common_5[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_event__convert_term_to_type_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_event__convert_term_to_spec_map_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_event__convert_term_to_spec_map_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_4[3])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_4[4])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[3])),
    ((MR_Box) (parse_tree__prog_event__event_arg_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[4])),
    ((MR_Box) (parse_tree__prog_event__event_arg_modes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[5])),
    ((MR_Box) (parse_tree__prog_event__describe_event_spec_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[7])),
    ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[8][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_event__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.read_event_set\'/6")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_event__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.prog_event.mh"
#line 223 "prog_event.m"


MR_String
read_specs_file_2(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name)
{
    int         spec_fd;
    MR_String   problem;
    char        errbuf[MR_STRERROR_BUF_SIZE];

    // There are race conditions between opening the file, stat'ing the file
    // and reading the contents of the file, but the Unix API doesn't really
    // allow these race conditions to be resolved.

    spec_fd = open(specs_file_name, O_RDONLY);
    if (spec_fd < 0) {
        problem = MR_make_string(alloc_id, "could not open %s: %s",
            specs_file_name, MR_strerror(errno, errbuf, sizeof(errbuf)));
    } else {
        problem = read_specs_file_3(alloc_id, specs_file_name,
            term_file_name, spec_fd);
        (void) close(spec_fd);
    }
    return problem;
}

MR_String
read_specs_file_3(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd)
{
    struct stat stat_buf;
    MR_String   problem;

    if (fstat(spec_fd, &stat_buf) != 0) {
        problem = MR_make_string(alloc_id, "could not stat %s",
            specs_file_name);
    } else {
        char        *spec_buf;

        spec_buf = malloc(stat_buf.st_size + 1);
        if (spec_buf == NULL) {
            problem = MR_make_string(alloc_id,
                "could not allocate memory for a copy of %s",
                specs_file_name);
        } else {
            problem = read_specs_file_4(alloc_id, specs_file_name,
                term_file_name, spec_fd, stat_buf.st_size, spec_buf);
            free(spec_buf);
        }
    }
    return problem;
}

MR_String
read_specs_file_4(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd, size_t size, char *spec_buf)
{
    size_t      num_bytes_read;
    MR_String   problem;

    // XXX We don't handle successful but partial reads.
    do {
        num_bytes_read = read(spec_fd, spec_buf, size);
    } while (num_bytes_read == -1 && MR_is_eintr(errno));
    if (num_bytes_read != size) {
        problem = MR_make_string(alloc_id, "could not read in %s",
            specs_file_name);
    } else {
        MR_EventSet event_set;

        // NULL terminate the string we have read in.
        spec_buf[num_bytes_read] = '\0';
        event_set = MR_read_event_set(specs_file_name, spec_buf);
        if (event_set == NULL) {
            problem = MR_make_string(alloc_id, "could not parse %s",
                specs_file_name);
        } else {
            FILE *term_fp;
            char errbuf[MR_STRERROR_BUF_SIZE];

            term_fp = fopen(term_file_name, "w");
            if (term_fp == NULL) {
                problem = MR_make_string(alloc_id, "could not open %s: %s",
                    term_file_name,
                    MR_strerror(errno, errbuf, sizeof(errbuf)));
            } else {
                MR_print_event_set(term_fp, event_set);
                fclose(term_fp);

                // Our caller tests Problem against the empty string, not NULL.
                problem = MR_make_string(alloc_id, "");
            }
        }
    }
    return problem;
}



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_event__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_dep_rel_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_dep_rel",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0)
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0[4] = {
  (MR_String) "attr_info_number",
  (MR_String) "attr_info_name",
  (MR_String) "attr_info_linenumber",
  (MR_String) "attr_info_type"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0 = {
  (MR_String) "attr_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_info_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_info",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_name_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_name_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_name_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_num_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_num_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_num_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_num_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_type_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_type_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_type_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_type_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0 = {
  (MR_String) "event_attr_pure_function",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1 = {
  (MR_String) "event_attr_impure_function",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_ordinal_ordered_event_attr_function_kind_0[2] = {
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0,
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0[2] = {
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1,
  &parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_function_kind",
  { parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0 },
  { parse_tree__prog_event__parse_tree__prog_event__enum_ordinal_ordered_event_attr_function_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[2] = {
  (MR_String) "func_attr_name",
  (MR_String) "arg_attr_names"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 = {
  (MR_String) "event_attr_synth_call_term",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_synth_call_term",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0)
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0[3] = {
  (MR_String) "attr_name",
  (MR_String) "attr_linenum",
  (MR_String) "attr_type"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 = {
  (MR_String) "event_attr_term",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_term",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0) };

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0 = {
  (MR_String) "event_attr_type_ordinary",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0)
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1 = {
  (MR_String) "event_attr_type_synthesized",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0) };

static const MR_DuArgLocn parse_tree__prog_event__parse_tree__prog_event__field_locns_event_attr_type_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2 = {
  (MR_String) "event_attr_type_function",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2,
  NULL,
  parse_tree__prog_event__parse_tree__prog_event__field_locns_event_attr_type_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1 };

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0[3] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2,
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0,
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0)
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 = {
  (MR_String) "event_attr_type_term",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type_term",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0)
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0[2] = {
  (MR_String) "event_set_name",
  (MR_String) "event_set_specs"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 = {
  (MR_String) "event_set_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_set_spec_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_set_spec_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_set_spec",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0)
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0[4] = {
  (MR_String) "event_name",
  (MR_String) "event_num",
  (MR_String) "event_linenumber",
  (MR_String) "event_attrs"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 = {
  (MR_String) "event_spec_term",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 };

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0[1] = { &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 };

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_spec_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_spec_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_spec_term",
  { parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0 },
  { parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0,

};

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__904__1_2_p_0(
  MR_Word Kind_7,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_7, HeadVar__2_29);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__742__1_3_p_0(
  MR_Word AttrNameMap_3,
  MR_String HeadVar__2_105,
  MR_Word * HeadVar__3_106)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_106;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrNameMap_3, ((MR_Box) (HeadVar__2_105)), &conv0_HeadVar__3_106);
  if (succeeded)
  {
    *HeadVar__3_106 = ((MR_Word) (conv0_HeadVar__3_106));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__630__1_2_f_0(
  MR_Word STATE_VARIABLE_AttrTypeMap_0_6,
  MR_String HeadVar__2_130)
{
  MR_Word HeadVar__3_131;
  MR_Box conv0_HeadVar__3_131;

  conv0_HeadVar__3_131 = mercury__map__lookup_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (HeadVar__2_130)));
  HeadVar__3_131 = ((MR_Word) (conv0_HeadVar__3_131));
  return HeadVar__3_131;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&parse_tree__prog_event_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__prog_event_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_event____Compare____event_attr_type_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
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

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__prog_event____Compare____event_attr_type_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_36 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                parse_tree__prog_event____Compare____event_attr_type_term_0_0(HeadVar__1_1, Var_36, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_16;

                parse_tree__prog_event____Compare____event_attr_type_term_0_0(&SubResult1_16, Var_38, ArgY1_15);
                succeeded = (SubResult1_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_16;
                else
                  parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(HeadVar__1_1, Var_37, ArgY2_18);
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
          MR_Word Var_35 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_39 = (MR_Integer) (Var_35);
                MR_Integer Var_40 = (MR_Integer) (ArgY1_28);

                succeeded = (Var_39 < Var_40);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_39 > Var_40);
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

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(ArgX2_7, ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_9 == ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__prog_event_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__prog_event_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
  MR_Word Attribute_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_8;

  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Attribute_3, (MR_Integer) 3))));
  Var_8 = ((MR_Word) ((MR_hl_field(0, Attribute_3, (MR_Integer) 4))));
  succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
  MR_Word Attribute_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_8;

  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Attribute_3, (MR_Integer) 2))));
  Var_8 = ((MR_Word) ((MR_hl_field(0, Attribute_3, (MR_Integer) 4))));
  succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
  MR_Word Attr_3)
{
  MR_String Desc_4;
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, Attr_3, (MR_Integer) 1))));
  MR_Word Type_7 = ((MR_Word) ((MR_hl_field(0, Attr_3, (MR_Integer) 2))));
  MR_Word MaybeSynthCall_9 = ((MR_Word) ((MR_hl_field(0, Attr_3, (MR_Integer) 4))));
  MR_String TypeDesc_10;
  MR_String SynthCallDesc_11;
  MR_String Var_26;
  MR_String Var_28;

  TypeDesc_10 = parse_tree__prog_event__describe_attr_type_1_f_0(Type_7);
  if ((MaybeSynthCall_9 == (MR_Word) ((MR_Unsigned) 0U)))
    SynthCallDesc_11 = (MR_String) "";
  else
  {
    MR_Word SynthCall_12 = ((MR_Word) ((MR_hl_field(1, MaybeSynthCall_9, (MR_Integer) 0))));
    MR_Word FuncAttrNameNum_13 = ((MR_Word) ((MR_hl_field(0, SynthCall_12, (MR_Integer) 0))));
    MR_Word ArgAttrNameNums_14 = ((MR_Word) ((MR_hl_field(0, SynthCall_12, (MR_Integer) 1))));
    MR_String ArgAttrDesc_16;
    MR_Word Var_18;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_22;
    MR_String Var_24;
    MR_Box conv0_Var_21;

    Var_18 = mercury__assoc_list__keys_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgAttrNameNums_14);
    ArgAttrDesc_16 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_18);
    conv0_Var_21 = mercury__pair__fst_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FuncAttrNameNum_13);
    Var_21 = ((MR_String) (conv0_Var_21));
    Var_24 = mercury__string__f_43_43_2_f_0(ArgAttrDesc_16, (MR_String) ")");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_24);
    Var_20 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
    SynthCallDesc_11 = mercury__string__f_43_43_2_f_0((MR_String) " synthesized by ", Var_20);
  }
  Var_28 = mercury__string__f_43_43_2_f_0(TypeDesc_10, SynthCallDesc_11);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_28);
  Desc_4 = mercury__string__f_43_43_2_f_0(Name_6, Var_26);
  return Desc_4;
}

static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Desc_4;

  conv0_Desc_4 = parse_tree__prog_event__describe_attr_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Desc_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__904__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
  MR_Word Type_3)
{
  MR_bool succeeded;
  MR_String Desc_4;

  switch (MR_tag((MR_Word) Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "type not constructed by prog_event");
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 0))));
        MR_Word ArgTypes_6 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 1))));
        MR_Word Kind_7 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 2))));
        MR_String ArgTypeDescs_8;
        MR_Word Var_26;
        MR_String Var_37;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_3[6]));
          MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_1));
          MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_26, 3) = ((MR_Box) (Kind_7));
          MR_hl_field(0, Var_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_26, (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "not kind_star");
        if ((ArgTypes_6 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgTypeDescs_8 = (MR_String) "";
        else
        {
          MR_String Var_31;
          MR_String Var_32;
          MR_Word Var_34;

          Var_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[15]), ArgTypes_6);
          Var_32 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_34);
          Var_31 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) ")");
          ArgTypeDescs_8 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_31);
        }
        Var_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
        Desc_4 = mercury__string__f_43_43_2_f_0(Var_37, ArgTypeDescs_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_11 = ((MR_Word) ((MR_hl_field(2, Type_3, (MR_Integer) 0))));

        parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_11, &Desc_4);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "type not constructed by prog_event");
          break;
        case (MR_Integer) 1:
          Desc_4 = (MR_String) "function";
          break;
      }
      break;
  }
  return Desc_4;
}

static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Desc_4;

  conv0_Desc_4 = parse_tree__prog_event__describe_event_attr_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Desc_4));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
  MR_Word Spec_3)
{
  MR_String Desc_4;
  MR_String EventName_6 = ((MR_String) ((MR_hl_field(0, Spec_3, (MR_Integer) 1))));
  MR_Word Attrs_8 = ((MR_Word) ((MR_hl_field(0, Spec_3, (MR_Integer) 3))));
  MR_String AttrDescs_10;
  MR_Word Var_12;
  MR_String Var_15;
  MR_String Var_16;
  MR_String Var_18;

  Var_12 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[14]), Attrs_8);
  AttrDescs_10 = mercury__string__join_list_2_f_0((MR_String) ",\n", Var_12);
  Var_18 = mercury__string__f_43_43_2_f_0(AttrDescs_10, (MR_String) ")\n");
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_18);
  Var_15 = mercury__string__f_43_43_2_f_0(EventName_6, Var_16);
  Desc_4 = mercury__string__f_43_43_2_f_0((MR_String) "event ", Var_15);
  return Desc_4;
}

static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
  MR_Word SpecA_4,
  MR_Word SpecB_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(0, SpecA_4, (MR_Integer) 0))));
  MR_Integer Var_8 = ((MR_Integer) ((MR_hl_field(0, SpecB_5, (MR_Integer) 0))));

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *Result_6 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *Result_6 = (MR_Integer) 2;
    else
      *Result_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
  MR_Word Spec_4,
  MR_Integer STATE_VARIABLE_MaxNumAttr_0_8,
  MR_Integer * STATE_VARIABLE_MaxNumAttr_9)
{
  MR_Word AllAttrs_6 = ((MR_Word) ((MR_hl_field(0, Spec_4, (MR_Integer) 3))));
  MR_Integer NumAttr_7;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), AllAttrs_6, &NumAttr_7);
  *STATE_VARIABLE_MaxNumAttr_9 = mercury__int__max_2_f_0(STATE_VARIABLE_MaxNumAttr_0_8, NumAttr_7);
}

static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__prog_event__acc_self_dependent_nodes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevSelfRecSccs_0_7,
  MR_Word * STATE_VARIABLE_RevSelfRecSccs_8)
{
  MR_bool succeeded;
  MR_String From_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String To_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = (strcmp(From_4, To_5) == 0);
  if (succeeded)
  {
    MR_Word Var_10;

    Var_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (From_4)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevSelfRecSccs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevSelfRecSccs_0_7));
    }
  }
  else
    *STATE_VARIABLE_RevSelfRecSccs_8 = STATE_VARIABLE_RevSelfRecSccs_0_7;
}

static MR_bool MR_CALL 
parse_tree__prog_event__two_or_more_attrs_in_scc_1_p_0(
  MR_Word Scc_2)
{
  MR_bool succeeded;
  MR_Integer Var_3;

  Var_3 = mercury__set__count_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Scc_2);
  succeeded = (Var_3 > (MR_Integer) 1);
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event__read_specs_file_2_5_p_0(
  MR_String SpecsFileName_1,
  MR_String TermFileName_2,
  MR_String * Problem_3)
{
{
#define MR_PROC_LABEL parse_tree__prog_event__read_specs_file_2_5_p_0

	MR_String SpecsFileName;
	MR_String TermFileName;
	MR_String Problem;

	SpecsFileName = SpecsFileName_1 ;
	TermFileName = TermFileName_2 ;
		{

    // We need to save/restore MR_hp so that we can allocate the return
    // value on Mercury's heap if necessary.
    MR_save_transient_hp();
    Problem = read_specs_file_2(MR_ALLOC_ID, SpecsFileName, TermFileName);
    MR_restore_transient_hp();


		;}
#undef MR_PROC_LABEL
	*Problem_3  = Problem;
}
}

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = parse_tree__prog_event__project_event_arg_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0(
  MR_Word EventSpecMap_4,
  MR_String EventName_5,
  MR_Word * ArgModes_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_11_11;
  MR_Word TypeCtorInfo_12_12;
  MR_Word Attributes_7;
  MR_Word Var_8;
  MR_Word EventSpec_13;
  MR_Box conv0_EventSpec_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap_4, ((MR_Box) (EventName_5)), &conv0_EventSpec_13);
  if (succeeded)
  {
    EventSpec_13 = ((MR_Word) (conv0_EventSpec_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Attributes_7 = ((MR_Word) ((MR_hl_field(0, EventSpec_13, (MR_Integer) 3))));
    Var_8 = (MR_Word) (&parse_tree__prog_event_scalar_common_2[13]);
    TypeCtorInfo_11_11 = (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0);
    TypeCtorInfo_12_12 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
    mercury__list__filter_map_3_p_0(TypeCtorInfo_11_11, TypeCtorInfo_12_12, Var_8, Attributes_7, ArgModes_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = parse_tree__prog_event__project_event_arg_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0(
  MR_Word EventSpecMap_4,
  MR_String EventName_5,
  MR_Word * ArgTypes_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_11_11;
  MR_Word TypeCtorInfo_12_12;
  MR_Word Attributes_7;
  MR_Word Var_8;
  MR_Word EventSpec_13;
  MR_Box conv0_EventSpec_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap_4, ((MR_Box) (EventName_5)), &conv0_EventSpec_13);
  if (succeeded)
  {
    EventSpec_13 = ((MR_Word) (conv0_EventSpec_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Attributes_7 = ((MR_Word) ((MR_hl_field(0, EventSpec_13, (MR_Integer) 3))));
    Var_8 = (MR_Word) (&parse_tree__prog_event_scalar_common_2[12]);
    TypeCtorInfo_11_11 = (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0);
    TypeCtorInfo_12_12 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__list__filter_map_3_p_0(TypeCtorInfo_11_11, TypeCtorInfo_12_12, Var_8, Attributes_7, ArgTypes_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_event__event_attributes_3_p_0(
  MR_Word EventSpecMap_4,
  MR_String EventName_5,
  MR_Word * Attributes_6)
{
  MR_bool succeeded;
  MR_Word EventSpec_7;
  MR_Box conv0_EventSpec_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap_4, ((MR_Box) (EventName_5)), &conv0_EventSpec_7);
  if (succeeded)
  {
    EventSpec_7 = ((MR_Word) (conv0_EventSpec_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Attributes_6 = ((MR_Word) ((MR_hl_field(0, EventSpec_7, (MR_Integer) 3))));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_event__event_number_3_p_0(
  MR_Word EventSpecMap_4,
  MR_String EventName_5,
  MR_Integer * EventNumber_6)
{
  MR_bool succeeded;
  MR_Word EventSpec_7;
  MR_Box conv0_EventSpec_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap_4, ((MR_Box) (EventName_5)), &conv0_EventSpec_7);
  if (succeeded)
  {
    EventSpec_7 = ((MR_Word) (conv0_EventSpec_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *EventNumber_6 = ((MR_Integer) ((MR_hl_field(0, EventSpec_7, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_MaxNumAttr_9;

  parse_tree__prog_event__update_max_num_attr_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_MaxNumAttr_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_MaxNumAttr_9));
}

static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Desc_4;

  conv1_Desc_4 = parse_tree__prog_event__describe_event_spec_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Desc_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  parse_tree__prog_event__compare_event_specs_by_num_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

MR_Word MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0(
  MR_Word EventSet_3)
{
  MR_Word EventSetData_4;
  MR_String EventSetName_5 = ((MR_String) ((MR_hl_field(0, EventSet_3, (MR_Integer) 0))));
  MR_Word EventSpecMap_6 = ((MR_Word) ((MR_hl_field(0, EventSet_3, (MR_Integer) 1))));
  MR_Word EventSpecList_7;
  MR_Word SortedEventSpecList_8;
  MR_Word EventDescStrings_9;
  MR_String EventDescs_10;
  MR_String Desc_11;
  MR_Integer MaxNumAttr_12;
  MR_String Var_16;
  MR_String Var_17;
  MR_Box conv3_MaxNumAttr_12;

  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecMap_6, &EventSpecList_7);
  mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[9]), EventSpecList_7, &SortedEventSpecList_8);
  EventDescStrings_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[10]), SortedEventSpecList_8);
  mercury__string__append_list_2_p_0(EventDescStrings_9, &EventDescs_10);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\n", EventDescs_10);
  Var_16 = mercury__string__f_43_43_2_f_0(EventSetName_5, Var_17);
  Desc_11 = mercury__string__f_43_43_2_f_0((MR_String) "event set ", Var_16);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[11]), EventSpecList_7, ((MR_Box) ((MR_Integer) -1)), &conv3_MaxNumAttr_12);
  MaxNumAttr_12 = ((MR_Integer) (conv3_MaxNumAttr_12));
  {
    EventSetData_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventSetData_4, 0) = ((MR_Box) (EventSetName_5));
    MR_hl_field(0, EventSetData_4, 1) = ((MR_Box) (Desc_11));
    MR_hl_field(0, EventSetData_4, 2) = ((MR_Box) (SortedEventSpecList_8));
    MR_hl_field(0, EventSetData_4, 3) = ((MR_Box) (MaxNumAttr_12));
  }
  return EventSetData_4;
}

void MR_CALL 
parse_tree__prog_event__read_event_set_6_p_0(
  MR_String SpecsFileName_7,
  MR_String * EventSetName_8,
  MR_Word * EventSpecMap_9,
  MR_Word * ErrorSpecs_10)
{
  MR_bool succeeded;
  MR_Word TempFileResult_77;

  mercury__io__file__make_temp_file_3_p_0(&TempFileResult_77);
  if (((MR_tag((MR_Word) TempFileResult_77)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_23;
    MR_Word Var_52;
    MR_Word Pieces_62;
    MR_Word ErrorSpec_63;
    MR_String Var_102;
    MR_Word Error_104 = ((MR_Word) ((MR_hl_field(1, TempFileResult_77, (MR_Integer) 0))));

    Var_102 = mercury__io__error_message_1_f_0(Error_104);
    ErrorMessage_23 = mercury__string__f_43_43_2_f_0((MR_String) "could not create temporary file: ", Var_102);
    *EventSetName_8 = (MR_String) "";
    *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (ErrorMessage_23));
    }
    {
      Pieces_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_62, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Pieces_62, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])));
    }
    {
      ErrorSpec_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ErrorSpec_63, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.read_event_set\'/6"));
      MR_hl_field(2, ErrorSpec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, ErrorSpec_63, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(2, ErrorSpec_63, 3) = ((MR_Box) (Pieces_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ErrorSpecs_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ErrorSpec_63));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_String TempFileName_78 = ((MR_String) ((MR_hl_field(0, TempFileResult_77, (MR_Integer) 0))));
    MR_String Problem_110;

{
#define MR_PROC_LABEL parse_tree__prog_event__read_event_set_6_p_0

	MR_String SpecsFileName;
	MR_String TermFileName;
	MR_String Problem;

	SpecsFileName = SpecsFileName_7 ;
	TermFileName = TempFileName_78 ;
		{

    // We need to save/restore MR_hp so that we can allocate the return
    // value on Mercury's heap if necessary.
    MR_save_transient_hp();
    Problem = read_specs_file_2(MR_ALLOC_ID, SpecsFileName, TermFileName);
    MR_restore_transient_hp();


		;}
#undef MR_PROC_LABEL
	Problem_110  = Problem;
}
    succeeded = (strcmp(Problem_110, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word OpenResult_80;

      mercury__io__open_input_4_p_0(TempFileName_78, &OpenResult_80);
      if (((MR_tag((MR_Word) OpenResult_80)) == (MR_Integer) 1))
      {
        MR_Word Error_82 = ((MR_Word) ((MR_hl_field(1, OpenResult_80, (MR_Integer) 0))));
        MR_String Var_96;
        MR_String Var_106;
        MR_String Var_107;
        MR_String ErrorMessage_113;
        MR_Word Var_114;
        MR_Word Pieces_120;
        MR_Word ErrorSpec_121;
        MR_Word Var_83;

        Var_96 = mercury__io__error_message_1_f_0(Error_82);
        Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", Var_96);
        Var_107 = mercury__string__f_43_43_2_f_0(TempFileName_78, Var_106);
        ErrorMessage_113 = mercury__string__f_43_43_2_f_0((MR_String) "could not open \140", Var_107);
        mercury__io__file__remove_file_4_p_0(TempFileName_78, &Var_83);
        *EventSetName_8 = (MR_String) "";
        *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
        {
          Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_114, 1) = ((MR_Box) (ErrorMessage_113));
        }
        {
          Pieces_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_120, 0) = ((MR_Box) (Var_114));
          MR_hl_field(1, Pieces_120, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])));
        }
        {
          ErrorSpec_121 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ErrorSpec_121, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.read_event_set\'/6"));
          MR_hl_field(2, ErrorSpec_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, ErrorSpec_121, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(2, ErrorSpec_121, 3) = ((MR_Box) (Pieces_120));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ErrorSpecs_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ErrorSpec_121));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word TermStream_14 = ((MR_Word) ((MR_hl_field(0, OpenResult_80, (MR_Integer) 0))));
        MR_Word TermReadRes_15;
        MR_Word _RemoveRes_22;

        mercury__io__read_4_p_0((MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0), TermStream_14, &TermReadRes_15);
        switch (MR_tag((MR_Word) TermReadRes_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *EventSetName_8 = (MR_String) "";
              *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
              *ErrorSpecs_10 = (MR_Word) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[39]));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word EventSetTerm_16 = ((MR_Word) ((MR_hl_field(1, TermReadRes_15, (MR_Integer) 0))));
              MR_Word EventSpecsTerm_17;
              MR_Word Var_30;

              *EventSetName_8 = ((MR_String) ((MR_hl_field(0, EventSetTerm_16, (MR_Integer) 0))));
              EventSpecsTerm_17 = ((MR_Word) ((MR_hl_field(0, EventSetTerm_16, (MR_Integer) 1))));
              Var_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
              parse_tree__prog_event__convert_list_to_spec_map_6_p_0(SpecsFileName_7, EventSpecsTerm_17, Var_30, EventSpecMap_9, (MR_Word) ((MR_Unsigned) 0U), ErrorSpecs_10);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String TermReadMsg_20 = ((MR_String) ((MR_hl_field(2, TermReadRes_15, (MR_Integer) 0))));
              MR_Integer LineNumber_21 = ((MR_Integer) ((MR_hl_field(2, TermReadRes_15, (MR_Integer) 1))));
              MR_Word Var_41;
              MR_Word Var_48;
              MR_Word Pieces_60;
              MR_Word ErrorSpec_61;

              *EventSetName_8 = (MR_String) "";
              *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
              {
                Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_41, 1) = ((MR_Box) (TermReadMsg_20));
              }
              {
                Pieces_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_60, 0) = ((MR_Box) (Var_41));
                MR_hl_field(1, Pieces_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])));
              }
              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_48, 0) = ((MR_Box) (TempFileName_78));
                MR_hl_field(0, Var_48, 1) = ((MR_Box) (LineNumber_21));
              }
              {
                ErrorSpec_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorSpec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.read_event_set\'/6"));
                MR_hl_field(1, ErrorSpec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, ErrorSpec_61, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, ErrorSpec_61, 3) = ((MR_Box) (Var_48));
                MR_hl_field(1, ErrorSpec_61, 4) = ((MR_Box) (Pieces_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *ErrorSpecs_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ErrorSpec_61));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        mercury__io__close_input_3_p_0(TermStream_14);
        mercury__io__file__remove_file_4_p_0(TempFileName_78, &_RemoveRes_22);
      }
    }
    else
    {
      MR_Word Var_151;
      MR_Word Pieces_157;
      MR_Word ErrorSpec_158;
      MR_Word Var_85;

      mercury__io__file__remove_file_4_p_0(TempFileName_78, &Var_85);
      *EventSetName_8 = (MR_String) "";
      *EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      {
        Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_151, 1) = ((MR_Box) (Problem_110));
      }
      {
        Pieces_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_157, 0) = ((MR_Box) (Var_151));
        MR_hl_field(1, Pieces_157, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[9])));
      }
      {
        ErrorSpec_158 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, ErrorSpec_158, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.read_event_set\'/6"));
        MR_hl_field(2, ErrorSpec_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, ErrorSpec_158, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(2, ErrorSpec_158, 3) = ((MR_Box) (Pieces_157));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ErrorSpecs_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ErrorSpec_158));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
  MR_String FileName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_EventSpecMap_0_3,
  MR_Word * STATE_VARIABLE_EventSpecMap_4,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_5,
  MR_Word * STATE_VARIABLE_ErrorSpecs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorSpecs_6 = STATE_VARIABLE_ErrorSpecs_0_5;
      *STATE_VARIABLE_EventSpecMap_4 = STATE_VARIABLE_EventSpecMap_0_3;
    }
    else
    {
      MR_Word SpecTerm_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SpecTerms_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_EventSpecMap_23_23;
      MR_Word STATE_VARIABLE_ErrorSpecs_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_EventSpecMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_ErrorSpecs_0_5;

      parse_tree__prog_event__convert_term_to_spec_map_6_p_0(FileName_1, SpecTerm_15, STATE_VARIABLE_EventSpecMap_0_3, &STATE_VARIABLE_EventSpecMap_23_23, STATE_VARIABLE_ErrorSpecs_0_5, &STATE_VARIABLE_ErrorSpecs_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SpecTerms_16;
      next_value_of_STATE_VARIABLE_EventSpecMap_0_3 = STATE_VARIABLE_EventSpecMap_23_23;
      next_value_of_STATE_VARIABLE_ErrorSpecs_0_5 = STATE_VARIABLE_ErrorSpecs_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_EventSpecMap_0_3 = next_value_of_STATE_VARIABLE_EventSpecMap_0_3;
      STATE_VARIABLE_ErrorSpecs_0_5 = next_value_of_STATE_VARIABLE_ErrorSpecs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ErrorSpecs_18;

  parse_tree__prog_event__acc_circular_synth_attr_error_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ErrorSpecs_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ErrorSpecs_18));
}

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RevSelfRecSccs_8;

  parse_tree__prog_event__acc_self_dependent_nodes_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_RevSelfRecSccs_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_RevSelfRecSccs_8));
}

static MR_bool MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__prog_event__two_or_more_attrs_in_scc_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
  MR_String FileName_7,
  MR_Word SpecTerm_8,
  MR_Word STATE_VARIABLE_EventSpecMap_0_43,
  MR_Word * STATE_VARIABLE_EventSpecMap_44,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_45,
  MR_Word * STATE_VARIABLE_ErrorSpecs_46)
{
  MR_bool succeeded;
  MR_String EventName_11 = ((MR_String) ((MR_hl_field(0, SpecTerm_8, (MR_Integer) 0))));
  MR_Integer EventNumber_12 = ((MR_Integer) ((MR_hl_field(0, SpecTerm_8, (MR_Integer) 1))));
  MR_Integer EventLineNumber_13 = ((MR_Integer) ((MR_hl_field(0, SpecTerm_8, (MR_Integer) 2))));
  MR_Word AttrTerms_14 = ((MR_Word) ((MR_hl_field(0, SpecTerm_8, (MR_Integer) 3))));
  MR_Word AttrNameMap_16;
  MR_Word AttrTypeMap0_17;
  MR_Word KeyMap_18;
  MR_Word DepRel0_19;
  MR_Word AttrTypeMap_20;
  MR_Word DepRel_21;
  MR_Word RevAttrs_22;
  MR_Word SynthAttrNumOrder_24;
  MR_Word Attrs_34;
  MR_Word EventSpec_35;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_ErrorSpecs_53_53;
  MR_Word STATE_VARIABLE_ErrorSpecs_54_54;
  MR_Word STATE_VARIABLE_ErrorSpecs_57_57;
  MR_Word STATE_VARIABLE_ErrorSpecs_62_62;
  MR_Word _AttrNumMap_15;
  MR_Word AllAttrNameOrder_23;
  MR_Word OldEventSpec_36;
  MR_Box conv4_OldEventSpec_36;

  Var_48 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0));
  Var_49 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0));
  Var_50 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  Var_51 = mercury__bimap__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_1[0]));
  Var_52 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  parse_tree__prog_event__build_plain_type_map_17_p_0(EventName_11, FileName_7, EventLineNumber_13, AttrTerms_14, (MR_Integer) 0, Var_48, &_AttrNumMap_15, Var_49, &AttrNameMap_16, Var_50, &AttrTypeMap0_17, Var_51, &KeyMap_18, Var_52, &DepRel0_19, STATE_VARIABLE_ErrorSpecs_0_45, &STATE_VARIABLE_ErrorSpecs_53_53);
  parse_tree__prog_event__build_dep_map_11_p_0(EventName_11, FileName_7, AttrNameMap_16, KeyMap_18, AttrTerms_14, AttrTypeMap0_17, &AttrTypeMap_20, DepRel0_19, &DepRel_21, STATE_VARIABLE_ErrorSpecs_53_53, &STATE_VARIABLE_ErrorSpecs_54_54);
  parse_tree__prog_event__convert_terms_to_attrs_10_p_0(EventName_11, FileName_7, AttrNameMap_16, AttrTypeMap_20, (MR_Integer) 0, AttrTerms_14, (MR_Word) ((MR_Unsigned) 0U), &RevAttrs_22, STATE_VARIABLE_ErrorSpecs_54_54, &STATE_VARIABLE_ErrorSpecs_57_57);
  succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DepRel_21, &AllAttrNameOrder_23);
  if (succeeded)
  {
    parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(AttrNameMap_16, AllAttrNameOrder_23, &SynthAttrNumOrder_24);
    STATE_VARIABLE_ErrorSpecs_62_62 = STATE_VARIABLE_ErrorSpecs_57_57;
  }
  else
  {
    MR_Word Context_25;
    MR_Word Sccs_26;
    MR_Word TooLargeSccs_27;
    MR_Word DepRelEdges_28;
    MR_Word RevSelfRecSccs_29;
    MR_Word SelfRecSccs_30;
    MR_Word BadSccs_31;
    MR_Box conv1_RevSelfRecSccs_29;

    {
      Context_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Context_25, 0) = ((MR_Box) (FileName_7));
      MR_hl_field(0, Context_25, 1) = ((MR_Box) (EventLineNumber_13));
    }
    Sccs_26 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DepRel_21);
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_event_scalar_common_2[7]), Sccs_26, &TooLargeSccs_27);
    mercury__digraph__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DepRel_21, &DepRelEdges_28);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_event_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_event_scalar_common_2[8]), DepRelEdges_28, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_RevSelfRecSccs_29);
    RevSelfRecSccs_29 = ((MR_Word) (conv1_RevSelfRecSccs_29));
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[1]), RevSelfRecSccs_29, &SelfRecSccs_30);
    BadSccs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[1]), TooLargeSccs_27, SelfRecSccs_30);
    if ((BadSccs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_63;

      Var_63 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      parse_tree__prog_event__acc_circular_synth_attr_error_5_p_0(Context_25, EventName_11, Var_63, STATE_VARIABLE_ErrorSpecs_57_57, &STATE_VARIABLE_ErrorSpecs_62_62);
    }
    else
    {
      MR_Word Var_61;
      MR_Box conv3_STATE_VARIABLE_ErrorSpecs_62_62;

      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_6[0]));
        MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__prog_event__convert_term_to_spec_map_6_p_0_3));
        MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_61, 3) = ((MR_Box) (Context_25));
        MR_hl_field(0, Var_61, 4) = ((MR_Box) (EventName_11));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_event_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_event_scalar_common_1[3]), Var_61, BadSccs_31, ((MR_Box) (STATE_VARIABLE_ErrorSpecs_57_57)), &conv3_STATE_VARIABLE_ErrorSpecs_62_62);
      STATE_VARIABLE_ErrorSpecs_62_62 = ((MR_Word) (conv3_STATE_VARIABLE_ErrorSpecs_62_62));
    }
    SynthAttrNumOrder_24 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), RevAttrs_22, &Attrs_34);
  {
    EventSpec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventSpec_35, 0) = ((MR_Box) (EventNumber_12));
    MR_hl_field(0, EventSpec_35, 1) = ((MR_Box) (EventName_11));
    MR_hl_field(0, EventSpec_35, 2) = ((MR_Box) (EventLineNumber_13));
    MR_hl_field(0, EventSpec_35, 3) = ((MR_Box) (Attrs_34));
    MR_hl_field(0, EventSpec_35, 4) = ((MR_Box) (SynthAttrNumOrder_24));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), STATE_VARIABLE_EventSpecMap_0_43, ((MR_Box) (EventName_11)), &conv4_OldEventSpec_36);
  if (succeeded)
  {
    OldEventSpec_36 = ((MR_Word) (conv4_OldEventSpec_36));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer OldLineNumber_37 = ((MR_Integer) ((MR_hl_field(0, OldEventSpec_36, (MR_Integer) 2))));
    MR_Word Pieces1_38;
    MR_Word EventContext_40;
    MR_Word OldContext_41;
    MR_Word DuplErrorSpec_42;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;

    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (EventName_11));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[14])));
    }
    {
      Pieces1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[12])));
      MR_hl_field(1, Pieces1_38, 1) = ((MR_Box) (Var_67));
    }
    {
      EventContext_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EventContext_40, 0) = ((MR_Box) (FileName_7));
      MR_hl_field(0, EventContext_40, 1) = ((MR_Box) (EventLineNumber_13));
    }
    {
      OldContext_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldContext_41, 0) = ((MR_Box) (FileName_7));
      MR_hl_field(0, OldContext_41, 1) = ((MR_Box) (OldLineNumber_37));
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_84, 0) = ((MR_Box) (EventContext_40));
      MR_hl_field(0, Var_84, 1) = ((MR_Box) (Pieces1_38));
    }
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_86, 0) = ((MR_Box) (OldContext_41));
      MR_hl_field(0, Var_86, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[16])));
    }
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_85));
    }
    {
      DuplErrorSpec_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuplErrorSpec_42, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.convert_term_to_spec_map\'/6"));
      MR_hl_field(0, DuplErrorSpec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, DuplErrorSpec_42, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, DuplErrorSpec_42, 3) = ((MR_Box) (Var_83));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ErrorSpecs_46 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DuplErrorSpec_42));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_62_62));
    }
    *STATE_VARIABLE_EventSpecMap_44 = STATE_VARIABLE_EventSpecMap_0_43;
  }
  else
  {
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), ((MR_Box) (EventName_11)), ((MR_Box) (EventSpec_35)), STATE_VARIABLE_EventSpecMap_0_43, STATE_VARIABLE_EventSpecMap_44);
    *STATE_VARIABLE_ErrorSpecs_46 = STATE_VARIABLE_ErrorSpecs_62_62;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = parse_tree__prog_event__attr_info_number_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_106;

  succeeded = parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__742__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv4_HeadVar__3_106);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_106));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Word AttrNameMap_3,
  MR_Word AttrTypeMap_4,
  MR_Integer AttrNum_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_RevAttrs_0_7,
  MR_Word * STATE_VARIABLE_RevAttrs_8,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_9,
  MR_Word * STATE_VARIABLE_ErrorSpecs_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorSpecs_10 = STATE_VARIABLE_ErrorSpecs_0_9;
      *STATE_VARIABLE_RevAttrs_8 = STATE_VARIABLE_RevAttrs_0_7;
    }
    else
    {
      MR_Word AttrTerm_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word AttrTerms_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_String AttrName_31 = ((MR_String) ((MR_hl_field(0, AttrTerm_27, (MR_Integer) 0))));
      MR_Integer AttrLineNumber_32 = ((MR_Integer) ((MR_hl_field(0, AttrTerm_27, (MR_Integer) 1))));
      MR_Word AttrTypeTerm_33 = ((MR_Word) ((MR_hl_field(0, AttrTerm_27, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_RevAttrs_58_58;
      MR_Word STATE_VARIABLE_ErrorSpecs_89_89;
      MR_Integer Var_90;
      MR_Integer next_value_of_AttrNum_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_RevAttrs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_ErrorSpecs_0_9;

      switch (MR_tag((MR_Word) AttrTypeTerm_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AttrType_35;
            MR_Word EventAttr_36;
            MR_Word Var_56;
            MR_Box conv1_AttrType_35;

            mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), AttrTypeMap_4, ((MR_Box) (AttrName_31)), &conv1_AttrType_35);
            AttrType_35 = ((MR_Word) (conv1_AttrType_35));
            Var_56 = parse_tree__prog_mode__in_mode_0_f_0();
            {
              EventAttr_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, EventAttr_36, 0) = ((MR_Box) (AttrNum_5));
              MR_hl_field(0, EventAttr_36, 1) = ((MR_Box) (AttrName_31));
              MR_hl_field(0, EventAttr_36, 2) = ((MR_Box) (AttrType_35));
              MR_hl_field(0, EventAttr_36, 3) = ((MR_Box) (Var_56));
              MR_hl_field(0, EventAttr_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              STATE_VARIABLE_RevAttrs_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 0) = ((MR_Box) (EventAttr_36));
              MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevAttrs_0_7));
            }
            STATE_VARIABLE_ErrorSpecs_89_89 = STATE_VARIABLE_ErrorSpecs_0_9;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SynthCallTerm_38 = ((MR_Word) ((MR_hl_field(1, AttrTypeTerm_33, (MR_Integer) 1))));
            MR_String FuncAttrName_39;
            MR_Word ArgAttrNames_40;
            MR_Word AttrType_96;
            MR_Box conv2_AttrType_96;
            MR_Integer FuncAttrNum_42;
            MR_Word ArgAttrInfos_43;
            MR_Word FuncAttrInfo_41;
            MR_Word Var_59;
            MR_Box conv3_FuncAttrInfo_41;

            mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), AttrTypeMap_4, ((MR_Box) (AttrName_31)), &conv2_AttrType_96);
            AttrType_96 = ((MR_Word) (conv2_AttrType_96));
            FuncAttrName_39 = ((MR_String) ((MR_hl_field(0, SynthCallTerm_38, (MR_Integer) 0))));
            ArgAttrNames_40 = ((MR_Word) ((MR_hl_field(0, SynthCallTerm_38, (MR_Integer) 1))));
            succeeded = mercury__map__search_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrNameMap_3, ((MR_Box) (FuncAttrName_39)), &conv3_FuncAttrInfo_41);
            if (succeeded)
            {
              FuncAttrInfo_41 = ((MR_Word) (conv3_FuncAttrInfo_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              FuncAttrNum_42 = ((MR_Integer) ((MR_hl_field(0, FuncAttrInfo_41, (MR_Integer) 0))));
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_4[1]));
                MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1));
                MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_59, 3) = ((MR_Box) (AttrNameMap_3));
              }
              succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), Var_59, ArgAttrNames_40, &ArgAttrInfos_43);
            }
            if (succeeded)
            {
              MR_Word ArgAttrNums_44;
              MR_Word ArgAttrNameNums_45;
              MR_Word PrevSynthAttrOrder_47;
              MR_Word SynthCall_48;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word EventAttr_94;
              MR_Word Var_46;

              ArgAttrNums_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[6]), ArgAttrInfos_43);
              ArgAttrNameNums_45 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgAttrNames_40, ArgAttrNums_44);
              Var_61 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              Var_62 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(AttrNameMap_3, AttrName_31, Var_61, Var_62, &Var_46, &PrevSynthAttrOrder_47);
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (FuncAttrName_39));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) (FuncAttrNum_42));
              }
              {
                SynthCall_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SynthCall_48, 0) = ((MR_Box) (Var_63));
                MR_hl_field(0, SynthCall_48, 1) = ((MR_Box) (ArgAttrNameNums_45));
                MR_hl_field(0, SynthCall_48, 2) = ((MR_Box) (PrevSynthAttrOrder_47));
              }
              Var_64 = parse_tree__prog_mode__in_mode_0_f_0();
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (SynthCall_48));
              }
              {
                EventAttr_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, EventAttr_94, 0) = ((MR_Box) (AttrNum_5));
                MR_hl_field(0, EventAttr_94, 1) = ((MR_Box) (AttrName_31));
                MR_hl_field(0, EventAttr_94, 2) = ((MR_Box) (AttrType_96));
                MR_hl_field(0, EventAttr_94, 3) = ((MR_Box) (Var_64));
                MR_hl_field(0, EventAttr_94, 4) = ((MR_Box) (Var_65));
              }
              {
                STATE_VARIABLE_RevAttrs_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 0) = ((MR_Box) (EventAttr_94));
                MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevAttrs_0_7));
              }
            }
            else
              STATE_VARIABLE_RevAttrs_58_58 = STATE_VARIABLE_RevAttrs_0_7;
            STATE_VARIABLE_ErrorSpecs_89_89 = STATE_VARIABLE_ErrorSpecs_0_9;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word AttrType_99;
            MR_Box conv0_AttrType_99;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), AttrTypeMap_4, ((MR_Box) (AttrName_31)), &conv0_AttrType_99);
            if (succeeded)
            {
              AttrType_99 = ((MR_Word) (conv0_AttrType_99));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_67;
              MR_Word EventAttr_98;

              Var_67 = parse_tree__prog_mode__in_mode_0_f_0();
              {
                EventAttr_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, EventAttr_98, 0) = ((MR_Box) (AttrNum_5));
                MR_hl_field(0, EventAttr_98, 1) = ((MR_Box) (AttrName_31));
                MR_hl_field(0, EventAttr_98, 2) = ((MR_Box) (AttrType_99));
                MR_hl_field(0, EventAttr_98, 3) = ((MR_Box) (Var_67));
                MR_hl_field(0, EventAttr_98, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                STATE_VARIABLE_RevAttrs_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 0) = ((MR_Box) (EventAttr_98));
                MR_hl_field(1, STATE_VARIABLE_RevAttrs_58_58, 1) = ((MR_Box) (STATE_VARIABLE_RevAttrs_0_7));
              }
              STATE_VARIABLE_ErrorSpecs_89_89 = STATE_VARIABLE_ErrorSpecs_0_9;
            }
            else
            {
              MR_Word Pieces_50;
              MR_Word ErrorSpec_51;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_88;

              {
                Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_73, 1) = ((MR_Box) (EventName_1));
              }
              {
                Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_78, 1) = ((MR_Box) (AttrName_31));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[14])));
              }
              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[38])));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
              }
              {
                Pieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[26])));
                MR_hl_field(1, Pieces_50, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_88, 0) = ((MR_Box) (FileName_2));
                MR_hl_field(0, Var_88, 1) = ((MR_Box) (AttrLineNumber_32));
              }
              {
                ErrorSpec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ErrorSpec_51, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.convert_terms_to_attrs\'/10"));
                MR_hl_field(1, ErrorSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, ErrorSpec_51, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(1, ErrorSpec_51, 3) = ((MR_Box) (Var_88));
                MR_hl_field(1, ErrorSpec_51, 4) = ((MR_Box) (Pieces_50));
              }
              {
                STATE_VARIABLE_ErrorSpecs_89_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_89_89, 0) = ((MR_Box) (ErrorSpec_51));
                MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_89_89, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_9));
              }
              STATE_VARIABLE_RevAttrs_58_58 = STATE_VARIABLE_RevAttrs_0_7;
            }
          }
          break;
      }
      Var_90 = (MR_Integer) ((MR_Unsigned) AttrNum_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_AttrNum_5 = Var_90;
      next_value_of_HeadVar__6_6 = AttrTerms_28;
      next_value_of_STATE_VARIABLE_RevAttrs_0_7 = STATE_VARIABLE_RevAttrs_58_58;
      next_value_of_STATE_VARIABLE_ErrorSpecs_0_9 = STATE_VARIABLE_ErrorSpecs_89_89;
      AttrNum_5 = next_value_of_AttrNum_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_RevAttrs_0_7 = next_value_of_STATE_VARIABLE_RevAttrs_0_7;
      STATE_VARIABLE_ErrorSpecs_0_9 = next_value_of_STATE_VARIABLE_ErrorSpecs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
  MR_Word AttrNameMap_7,
  MR_String AttrName_8,
  MR_Word Ancestors_9,
  MR_Word STATE_VARIABLE_AlreadyComputed_0_23,
  MR_Word * STATE_VARIABLE_AlreadyComputed_24,
  MR_Word * PrevSynthOrder_11)
{
  MR_bool succeeded;

  succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (AttrName_8)), Ancestors_9);
  if (succeeded)
  {
    *PrevSynthOrder_11 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_AlreadyComputed_24 = STATE_VARIABLE_AlreadyComputed_0_23;
  }
  else
  {
    MR_Word AttrInfo_12;
    MR_Box conv0_AttrInfo_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrNameMap_7, ((MR_Box) (AttrName_8)), &conv0_AttrInfo_12);
    if (succeeded)
    {
      AttrInfo_12 = ((MR_Word) (conv0_AttrInfo_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AttrTerm_13 = ((MR_Word) ((MR_hl_field(0, AttrInfo_12, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) AttrTerm_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *PrevSynthOrder_11 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_AlreadyComputed_24 = STATE_VARIABLE_AlreadyComputed_0_23;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SynthCall_17 = ((MR_Word) ((MR_hl_field(1, AttrTerm_13, (MR_Integer) 1))));
            MR_String FuncAttrName_18 = ((MR_String) ((MR_hl_field(0, SynthCall_17, (MR_Integer) 0))));
            MR_Word ArgAttrNames_19 = ((MR_Word) ((MR_hl_field(0, SynthCall_17, (MR_Integer) 1))));
            MR_Word SubAncestors_20;
            MR_Word SubPrevSynthOrder_21;
            MR_Integer AttrNum_22;
            MR_Word Var_25;
            MR_Word STATE_VARIABLE_AlreadyComputed_26_26;
            MR_Word Var_28;

            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (AttrName_8)), Ancestors_9, &SubAncestors_20);
            {
              Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_25, 0) = ((MR_Box) (FuncAttrName_18));
              MR_hl_field(1, Var_25, 1) = ((MR_Box) (ArgAttrNames_19));
            }
            parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(AttrNameMap_7, Var_25, SubAncestors_20, STATE_VARIABLE_AlreadyComputed_0_23, &STATE_VARIABLE_AlreadyComputed_26_26, &SubPrevSynthOrder_21);
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (AttrName_8)), STATE_VARIABLE_AlreadyComputed_26_26, STATE_VARIABLE_AlreadyComputed_24);
            AttrNum_22 = ((MR_Integer) ((MR_hl_field(0, AttrInfo_12, (MR_Integer) 0))));
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (AttrNum_22));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *PrevSynthOrder_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SubPrevSynthOrder_21, Var_28);
          }
          break;
        case (MR_Integer) 2:
          {
            *PrevSynthOrder_11 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_AlreadyComputed_24 = STATE_VARIABLE_AlreadyComputed_0_23;
          }
          break;
      }
    }
    else
    {
      *PrevSynthOrder_11 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_AlreadyComputed_24 = STATE_VARIABLE_AlreadyComputed_0_23;
    }
  }
}

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_AlreadyComputed_0_4,
  MR_Word * STATE_VARIABLE_AlreadyComputed_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_AlreadyComputed_5 = STATE_VARIABLE_AlreadyComputed_0_4;
  }
  else
  {
    MR_String ArgName_13 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgNames_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PrevSynthOrderArg_18;
    MR_Word PrevSynthOrderArgs_19;
    MR_Word STATE_VARIABLE_AlreadyComputed_22_22;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_13)), HeadVar__3_3);
    if (succeeded)
    {
      PrevSynthOrderArg_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_AlreadyComputed_22_22 = STATE_VARIABLE_AlreadyComputed_0_4;
    }
    else
    {
      MR_Word AttrInfo_24;
      MR_Box conv0_AttrInfo_24;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), HeadVar__1_1, ((MR_Box) (ArgName_13)), &conv0_AttrInfo_24);
      if (succeeded)
      {
        AttrInfo_24 = ((MR_Word) (conv0_AttrInfo_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word AttrTerm_25 = ((MR_Word) ((MR_hl_field(0, AttrInfo_24, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) AttrTerm_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              PrevSynthOrderArg_18 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_AlreadyComputed_22_22 = STATE_VARIABLE_AlreadyComputed_0_4;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SynthCall_29 = ((MR_Word) ((MR_hl_field(1, AttrTerm_25, (MR_Integer) 1))));
              MR_String FuncAttrName_30 = ((MR_String) ((MR_hl_field(0, SynthCall_29, (MR_Integer) 0))));
              MR_Word ArgAttrNames_31 = ((MR_Word) ((MR_hl_field(0, SynthCall_29, (MR_Integer) 1))));
              MR_Word SubAncestors_32;
              MR_Word SubPrevSynthOrder_33;
              MR_Integer AttrNum_34;
              MR_Word Var_35;
              MR_Word STATE_VARIABLE_AlreadyComputed_26_36;
              MR_Word Var_37;

              mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_13)), HeadVar__3_3, &SubAncestors_32);
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (FuncAttrName_30));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (ArgAttrNames_31));
              }
              parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(HeadVar__1_1, Var_35, SubAncestors_32, STATE_VARIABLE_AlreadyComputed_0_4, &STATE_VARIABLE_AlreadyComputed_26_36, &SubPrevSynthOrder_33);
              mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgName_13)), STATE_VARIABLE_AlreadyComputed_26_36, &STATE_VARIABLE_AlreadyComputed_22_22);
              AttrNum_34 = ((MR_Integer) ((MR_hl_field(0, AttrInfo_24, (MR_Integer) 0))));
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (AttrNum_34));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              PrevSynthOrderArg_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SubPrevSynthOrder_33, Var_37);
            }
            break;
          case (MR_Integer) 2:
            {
              PrevSynthOrderArg_18 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_AlreadyComputed_22_22 = STATE_VARIABLE_AlreadyComputed_0_4;
            }
            break;
        }
      }
      else
      {
        PrevSynthOrderArg_18 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_AlreadyComputed_22_22 = STATE_VARIABLE_AlreadyComputed_0_4;
      }
    }
    parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(HeadVar__1_1, ArgNames_14, HeadVar__3_3, STATE_VARIABLE_AlreadyComputed_22_22, STATE_VARIABLE_AlreadyComputed_5, &PrevSynthOrderArgs_19);
    *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PrevSynthOrderArg_18, PrevSynthOrderArgs_19);
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_131;

  conv2_HeadVar__3_131 = parse_tree__prog_event__IntroducedFrom__func__build_dep_map__630__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_131));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Word AttrNameMap_3,
  MR_Word KeyMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_AttrTypeMap_0_6,
  MR_Word * STATE_VARIABLE_AttrTypeMap_7,
  MR_Word STATE_VARIABLE_DepRel_0_8,
  MR_Word * STATE_VARIABLE_DepRel_9,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * STATE_VARIABLE_ErrorSpecs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorSpecs_11 = STATE_VARIABLE_ErrorSpecs_0_10;
      *STATE_VARIABLE_DepRel_9 = STATE_VARIABLE_DepRel_0_8;
      *STATE_VARIABLE_AttrTypeMap_7 = STATE_VARIABLE_AttrTypeMap_0_6;
    }
    else
    {
      MR_Word AttrTerm_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word AttrTerms_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_String AttrName_34 = ((MR_String) ((MR_hl_field(0, AttrTerm_29, (MR_Integer) 0))));
      MR_Integer AttrLineNumber_35 = ((MR_Integer) ((MR_hl_field(0, AttrTerm_29, (MR_Integer) 1))));
      MR_Word AttrTypeTerm_36 = ((MR_Word) ((MR_hl_field(0, AttrTerm_29, (MR_Integer) 2))));
      MR_Word AttrKey_37;
      MR_Word STATE_VARIABLE_DepRel_62_62;
      MR_Word STATE_VARIABLE_AttrTypeMap_65_65;
      MR_Word STATE_VARIABLE_ErrorSpecs_66_66;
      MR_Box conv0_AttrKey_37;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_AttrTypeMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DepRel_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ErrorSpecs_0_10;

      mercury__bimap__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_1[0]), KeyMap_4, ((MR_Box) (AttrName_34)), &conv0_AttrKey_37);
      AttrKey_37 = ((MR_Word) (conv0_AttrKey_37));
      switch (MR_tag((MR_Word) AttrTypeTerm_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_AttrTypeMap_65_65 = STATE_VARIABLE_AttrTypeMap_0_6;
            STATE_VARIABLE_DepRel_62_62 = STATE_VARIABLE_DepRel_0_8;
            STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SynthCallTerm_39 = ((MR_Word) ((MR_hl_field(1, AttrTypeTerm_36, (MR_Integer) 1))));
            MR_String FuncAttrName_40 = ((MR_String) ((MR_hl_field(0, SynthCallTerm_39, (MR_Integer) 0))));
            MR_Word ArgAttrNames_41 = ((MR_Word) ((MR_hl_field(0, SynthCallTerm_39, (MR_Integer) 1))));
            MR_Word AttrErrorSpecs_42;

            parse_tree__prog_event__record_arg_dependencies_11_p_0(EventName_1, FileName_2, AttrLineNumber_35, KeyMap_4, AttrName_34, AttrKey_37, ArgAttrNames_41, STATE_VARIABLE_DepRel_0_8, &STATE_VARIABLE_DepRel_62_62, (MR_Word) ((MR_Unsigned) 0U), &AttrErrorSpecs_42);
            if ((AttrErrorSpecs_42 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word AttrType_45;
              MR_Box conv1_AttrType_45;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (AttrName_34)), &conv1_AttrType_45);
              if (succeeded)
              {
                AttrType_45 = ((MR_Word) (conv1_AttrType_45));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word ArgTypes_46;
                MR_Word Var_67;
                MR_Word FuncAttrInfo_47;
                MR_Word FuncAttrPurity_48;
                MR_Word Var_68;
                MR_Box conv3_FuncAttrInfo_47;

                {
                  Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_4[0]));
                  MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__prog_event__build_dep_map_11_p_0_1));
                  MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_67, 3) = ((MR_Box) (STATE_VARIABLE_AttrTypeMap_0_6));
                }
                ArgTypes_46 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_67, ArgAttrNames_41);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrNameMap_3, ((MR_Box) (FuncAttrName_40)), &conv3_FuncAttrInfo_47);
                if (succeeded)
                {
                  FuncAttrInfo_47 = ((MR_Word) (conv3_FuncAttrInfo_47));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  Var_68 = ((MR_Word) ((MR_hl_field(0, FuncAttrInfo_47, (MR_Integer) 3))));
                  succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 2);
                  if (succeeded)
                    FuncAttrPurity_48 = ((MR_Unsigned) ((MR_hl_field(2, Var_68, (MR_Integer) 0))) & (MR_Integer) 1);
                }
                if (succeeded)
                {
                  MR_Word FuncPurity_49;
                  MR_Word FuncAttrType_50;
                  MR_Word OldFuncAttrType_51;
                  MR_Box conv4_OldFuncAttrType_51;

                  switch (FuncAttrPurity_48) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      FuncPurity_49 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 0:
                      FuncPurity_49 = (MR_Integer) 0;
                      break;
                  }
                  parse_tree__prog_type_construct__construct_higher_order_func_type_5_p_0(FuncPurity_49, ArgTypes_46, AttrType_45, &FuncAttrType_50);
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (FuncAttrName_40)), &conv4_OldFuncAttrType_51);
                  if (succeeded)
                  {
                    OldFuncAttrType_51 = ((MR_Word) (conv4_OldFuncAttrType_51));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(FuncAttrType_50, OldFuncAttrType_51);
                    if (succeeded)
                      STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
                    else
                    {
                      MR_Integer FuncAttrLine_52 = ((MR_Integer) ((MR_hl_field(0, FuncAttrInfo_47, (MR_Integer) 2))));
                      MR_Word Pieces_53;
                      MR_Word ErrorSpec_54;
                      MR_Word Var_72;
                      MR_Word Var_73;
                      MR_Word Var_86;

                      {
                        Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, Var_73, 1) = ((MR_Box) (FuncAttrName_40));
                      }
                      {
                        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
                        MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[32])));
                      }
                      {
                        Pieces_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Pieces_53, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[28])));
                        MR_hl_field(1, Pieces_53, 1) = ((MR_Box) (Var_72));
                      }
                      {
                        Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_86, 0) = ((MR_Box) (FileName_2));
                        MR_hl_field(0, Var_86, 1) = ((MR_Box) (FuncAttrLine_52));
                      }
                      {
                        ErrorSpec_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ErrorSpec_54, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.build_dep_map\'/11"));
                        MR_hl_field(1, ErrorSpec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, ErrorSpec_54, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                        MR_hl_field(1, ErrorSpec_54, 3) = ((MR_Box) (Var_86));
                        MR_hl_field(1, ErrorSpec_54, 4) = ((MR_Box) (Pieces_53));
                      }
                      {
                        STATE_VARIABLE_ErrorSpecs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 0) = ((MR_Box) (ErrorSpec_54));
                        MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_10));
                      }
                    }
                    STATE_VARIABLE_AttrTypeMap_65_65 = STATE_VARIABLE_AttrTypeMap_0_6;
                  }
                  else
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (FuncAttrName_40)), ((MR_Box) (FuncAttrType_50)), STATE_VARIABLE_AttrTypeMap_0_6, &STATE_VARIABLE_AttrTypeMap_65_65);
                    STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
                  }
                }
                else
                {
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_96;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_Word Var_110;
                  MR_Word Pieces_115;
                  MR_Word ErrorSpec_116;

                  {
                    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_92, 1) = ((MR_Box) (AttrName_34));
                  }
                  {
                    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_100, 1) = ((MR_Box) (FuncAttrName_40));
                  }
                  {
                    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
                    MR_hl_field(1, Var_99, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[14])));
                  }
                  {
                    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[34])));
                    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[33])));
                    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
                  }
                  {
                    Pieces_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Pieces_115, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[28])));
                    MR_hl_field(1, Pieces_115, 1) = ((MR_Box) (Var_91));
                  }
                  {
                    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_110, 0) = ((MR_Box) (FileName_2));
                    MR_hl_field(0, Var_110, 1) = ((MR_Box) (AttrLineNumber_35));
                  }
                  {
                    ErrorSpec_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ErrorSpec_116, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.build_dep_map\'/11"));
                    MR_hl_field(1, ErrorSpec_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, ErrorSpec_116, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(1, ErrorSpec_116, 3) = ((MR_Box) (Var_110));
                    MR_hl_field(1, ErrorSpec_116, 4) = ((MR_Box) (Pieces_115));
                  }
                  {
                    STATE_VARIABLE_ErrorSpecs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 0) = ((MR_Box) (ErrorSpec_116));
                    MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_10));
                  }
                  STATE_VARIABLE_AttrTypeMap_65_65 = STATE_VARIABLE_AttrTypeMap_0_6;
                }
              }
              else
              {
                STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
                STATE_VARIABLE_AttrTypeMap_65_65 = STATE_VARIABLE_AttrTypeMap_0_6;
              }
            }
            else
            {
              MR_Word Var_64;

              Var_64 = parse_tree__builtin_lib_types__void_type_0_f_0();
              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (FuncAttrName_40)), ((MR_Box) (Var_64)), STATE_VARIABLE_AttrTypeMap_0_6, &STATE_VARIABLE_AttrTypeMap_65_65);
              STATE_VARIABLE_ErrorSpecs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AttrErrorSpecs_42, STATE_VARIABLE_ErrorSpecs_0_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_AttrTypeMap_65_65 = STATE_VARIABLE_AttrTypeMap_0_6;
            STATE_VARIABLE_DepRel_62_62 = STATE_VARIABLE_DepRel_0_8;
            STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = AttrTerms_30;
      next_value_of_STATE_VARIABLE_AttrTypeMap_0_6 = STATE_VARIABLE_AttrTypeMap_65_65;
      next_value_of_STATE_VARIABLE_DepRel_0_8 = STATE_VARIABLE_DepRel_62_62;
      next_value_of_STATE_VARIABLE_ErrorSpecs_0_10 = STATE_VARIABLE_ErrorSpecs_66_66;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_AttrTypeMap_0_6 = next_value_of_STATE_VARIABLE_AttrTypeMap_0_6;
      STATE_VARIABLE_DepRel_0_8 = next_value_of_STATE_VARIABLE_DepRel_0_8;
      STATE_VARIABLE_ErrorSpecs_0_10 = next_value_of_STATE_VARIABLE_ErrorSpecs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Integer AttrLineNumber_3,
  MR_Word KeyMap_4,
  MR_String SynthAttrName_5,
  MR_Word SynthAttrKey_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_DepRel_0_8,
  MR_Word * STATE_VARIABLE_DepRel_9,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * STATE_VARIABLE_ErrorSpecs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorSpecs_11 = STATE_VARIABLE_ErrorSpecs_0_10;
      *STATE_VARIABLE_DepRel_9 = STATE_VARIABLE_DepRel_0_8;
    }
    else
    {
      MR_String AttrName_30 = ((MR_String) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word AttrNames_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DepRel_41_41;
      MR_Word STATE_VARIABLE_ErrorSpecs_66_66;
      MR_Word AttrKey_34;
      MR_Box conv0_AttrKey_34;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_DepRel_0_8;
      MR_Word next_value_of_STATE_VARIABLE_ErrorSpecs_0_10;

      succeeded = mercury__bimap__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_1[0]), KeyMap_4, ((MR_Box) (AttrName_30)), &conv0_AttrKey_34);
      if (succeeded)
      {
        AttrKey_34 = ((MR_Word) (conv0_AttrKey_34));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AttrKey_34, SynthAttrKey_6, STATE_VARIABLE_DepRel_0_8, &STATE_VARIABLE_DepRel_41_41);
        STATE_VARIABLE_ErrorSpecs_66_66 = STATE_VARIABLE_ErrorSpecs_0_10;
      }
      else
      {
        MR_Word Pieces_35;
        MR_Word ErrorSpec_36;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_65;

        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (SynthAttrName_5));
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (EventName_1));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (AttrName_30));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[37])));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[35])));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[18])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
        }
        {
          Pieces_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[28])));
          MR_hl_field(1, Pieces_35, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) (FileName_2));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (AttrLineNumber_3));
        }
        {
          ErrorSpec_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ErrorSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.record_arg_dependencies\'/11"));
          MR_hl_field(1, ErrorSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, ErrorSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, ErrorSpec_36, 3) = ((MR_Box) (Var_65));
          MR_hl_field(1, ErrorSpec_36, 4) = ((MR_Box) (Pieces_35));
        }
        {
          STATE_VARIABLE_ErrorSpecs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 0) = ((MR_Box) (ErrorSpec_36));
          MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_10));
        }
        STATE_VARIABLE_DepRel_41_41 = STATE_VARIABLE_DepRel_0_8;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = AttrNames_31;
      next_value_of_STATE_VARIABLE_DepRel_0_8 = STATE_VARIABLE_DepRel_41_41;
      next_value_of_STATE_VARIABLE_ErrorSpecs_0_10 = STATE_VARIABLE_ErrorSpecs_66_66;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_DepRel_0_8 = next_value_of_STATE_VARIABLE_DepRel_0_8;
      STATE_VARIABLE_ErrorSpecs_0_10 = next_value_of_STATE_VARIABLE_ErrorSpecs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
  MR_String EventName_1,
  MR_String FileName_2,
  MR_Integer EventLineNumber_3,
  MR_Word HeadVar__4_4,
  MR_Integer AttrNum_5,
  MR_Word STATE_VARIABLE_AttrNumMap_0_6,
  MR_Word * STATE_VARIABLE_AttrNumMap_7,
  MR_Word STATE_VARIABLE_AttrNameMap_0_8,
  MR_Word * STATE_VARIABLE_AttrNameMap_9,
  MR_Word STATE_VARIABLE_AttrTypeMap_0_10,
  MR_Word * STATE_VARIABLE_AttrTypeMap_11,
  MR_Word STATE_VARIABLE_KeyMap_0_12,
  MR_Word * STATE_VARIABLE_KeyMap_13,
  MR_Word STATE_VARIABLE_DepRel_0_14,
  MR_Word * STATE_VARIABLE_DepRel_15,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_16,
  MR_Word * STATE_VARIABLE_ErrorSpecs_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrorSpecs_17 = STATE_VARIABLE_ErrorSpecs_0_16;
      *STATE_VARIABLE_DepRel_15 = STATE_VARIABLE_DepRel_0_14;
      *STATE_VARIABLE_KeyMap_13 = STATE_VARIABLE_KeyMap_0_12;
      *STATE_VARIABLE_AttrTypeMap_11 = STATE_VARIABLE_AttrTypeMap_0_10;
      *STATE_VARIABLE_AttrNameMap_9 = STATE_VARIABLE_AttrNameMap_0_8;
      *STATE_VARIABLE_AttrNumMap_7 = STATE_VARIABLE_AttrNumMap_0_6;
    }
    else
    {
      MR_Word AttrTerm_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word AttrTerms_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_String AttrName_52 = ((MR_String) ((MR_hl_field(0, AttrTerm_43, (MR_Integer) 0))));
      MR_Integer AttrLineNumber_53 = ((MR_Integer) ((MR_hl_field(0, AttrTerm_43, (MR_Integer) 1))));
      MR_Word AttrTypeTerm_54 = ((MR_Word) ((MR_hl_field(0, AttrTerm_43, (MR_Integer) 2))));
      MR_Word AttrInfo_55;
      MR_Word AttrKey_56;
      MR_Word STATE_VARIABLE_AttrNumMap_76_76;
      MR_Word STATE_VARIABLE_DepRel_77_77;
      MR_Word STATE_VARIABLE_AttrNameMap_79_79;
      MR_Word STATE_VARIABLE_ErrorSpecs_99_99;
      MR_Word STATE_VARIABLE_KeyMap_100_100;
      MR_Word STATE_VARIABLE_AttrTypeMap_101_101;
      MR_Integer Var_102;
      MR_Word STATE_VARIABLE_KeyMap_78_78;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Integer next_value_of_AttrNum_5;
      MR_Word next_value_of_STATE_VARIABLE_AttrNumMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_AttrNameMap_0_8;
      MR_Word next_value_of_STATE_VARIABLE_AttrTypeMap_0_10;
      MR_Word next_value_of_STATE_VARIABLE_KeyMap_0_12;
      MR_Word next_value_of_STATE_VARIABLE_DepRel_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ErrorSpecs_0_16;

      {
        AttrInfo_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AttrInfo_55, 0) = ((MR_Box) (AttrNum_5));
        MR_hl_field(0, AttrInfo_55, 1) = ((MR_Box) (AttrName_52));
        MR_hl_field(0, AttrInfo_55, 2) = ((MR_Box) (AttrLineNumber_53));
        MR_hl_field(0, AttrInfo_55, 3) = ((MR_Box) (AttrTypeTerm_54));
      }
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrNum_5, ((MR_Box) (AttrInfo_55)), STATE_VARIABLE_AttrNumMap_0_6, &STATE_VARIABLE_AttrNumMap_76_76);
      mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (AttrName_52)), &AttrKey_56, STATE_VARIABLE_DepRel_0_14, &STATE_VARIABLE_DepRel_77_77);
      succeeded = mercury__bimap__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event_scalar_common_1[0]), ((MR_Box) (AttrName_52)), ((MR_Box) (AttrKey_56)), STATE_VARIABLE_KeyMap_0_12, &STATE_VARIABLE_KeyMap_78_78);
      if (succeeded)
      {
        STATE_VARIABLE_KeyMap_100_100 = STATE_VARIABLE_KeyMap_78_78;
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), ((MR_Box) (AttrName_52)), ((MR_Box) (AttrInfo_55)), STATE_VARIABLE_AttrNameMap_0_8, &STATE_VARIABLE_AttrNameMap_79_79);
        STATE_VARIABLE_ErrorSpecs_99_99 = STATE_VARIABLE_ErrorSpecs_0_16;
      }
      else
      {
        MR_Word Pieces_57;
        MR_Word ErrorSpec_58;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_98;

        {
          Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_83, 1) = ((MR_Box) (EventName_1));
        }
        {
          Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_88, 1) = ((MR_Box) (AttrName_52));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[14])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[27])));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
        }
        {
          Pieces_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[26])));
          MR_hl_field(1, Pieces_57, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_98, 0) = ((MR_Box) (FileName_2));
          MR_hl_field(0, Var_98, 1) = ((MR_Box) (EventLineNumber_3));
        }
        {
          ErrorSpec_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ErrorSpec_58, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.build_plain_type_map\'/17"));
          MR_hl_field(1, ErrorSpec_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, ErrorSpec_58, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(1, ErrorSpec_58, 3) = ((MR_Box) (Var_98));
          MR_hl_field(1, ErrorSpec_58, 4) = ((MR_Box) (Pieces_57));
        }
        {
          STATE_VARIABLE_ErrorSpecs_99_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_99_99, 0) = ((MR_Box) (ErrorSpec_58));
          MR_hl_field(1, STATE_VARIABLE_ErrorSpecs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_16));
        }
        STATE_VARIABLE_KeyMap_100_100 = STATE_VARIABLE_KeyMap_0_12;
        STATE_VARIABLE_AttrNameMap_79_79 = STATE_VARIABLE_AttrNameMap_0_8;
      }
      switch (MR_tag((MR_Word) AttrTypeTerm_54)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeTerm_59 = (MR_Word) ((MR_Word) (AttrTypeTerm_54));
            MR_Word Type_61;
            MR_Box conv0__OldType_62;

            Type_61 = parse_tree__prog_event__convert_term_to_type_1_f_0(TypeTerm_59);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (AttrName_52)), &conv0__OldType_62);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              STATE_VARIABLE_AttrTypeMap_101_101 = STATE_VARIABLE_AttrTypeMap_0_10;
            else
              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (AttrName_52)), ((MR_Box) (Type_61)), STATE_VARIABLE_AttrTypeMap_0_10, &STATE_VARIABLE_AttrTypeMap_101_101);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeTerm_123 = ((MR_Word) ((MR_hl_field(1, AttrTypeTerm_54, (MR_Integer) 0))));
            MR_Word Type_124;
            MR_Box conv1__OldType_116;

            Type_124 = parse_tree__prog_event__convert_term_to_type_1_f_0(TypeTerm_123);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (AttrName_52)), &conv1__OldType_116);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              STATE_VARIABLE_AttrTypeMap_101_101 = STATE_VARIABLE_AttrTypeMap_0_10;
            else
              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (AttrName_52)), ((MR_Box) (Type_124)), STATE_VARIABLE_AttrTypeMap_0_10, &STATE_VARIABLE_AttrTypeMap_101_101);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_AttrTypeMap_101_101 = STATE_VARIABLE_AttrTypeMap_0_10;
          break;
      }
      Var_102 = (MR_Integer) ((MR_Unsigned) AttrNum_5 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = AttrTerms_44;
      next_value_of_AttrNum_5 = Var_102;
      next_value_of_STATE_VARIABLE_AttrNumMap_0_6 = STATE_VARIABLE_AttrNumMap_76_76;
      next_value_of_STATE_VARIABLE_AttrNameMap_0_8 = STATE_VARIABLE_AttrNameMap_79_79;
      next_value_of_STATE_VARIABLE_AttrTypeMap_0_10 = STATE_VARIABLE_AttrTypeMap_101_101;
      next_value_of_STATE_VARIABLE_KeyMap_0_12 = STATE_VARIABLE_KeyMap_100_100;
      next_value_of_STATE_VARIABLE_DepRel_0_14 = STATE_VARIABLE_DepRel_77_77;
      next_value_of_STATE_VARIABLE_ErrorSpecs_0_16 = STATE_VARIABLE_ErrorSpecs_99_99;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      AttrNum_5 = next_value_of_AttrNum_5;
      STATE_VARIABLE_AttrNumMap_0_6 = next_value_of_STATE_VARIABLE_AttrNumMap_0_6;
      STATE_VARIABLE_AttrNameMap_0_8 = next_value_of_STATE_VARIABLE_AttrNameMap_0_8;
      STATE_VARIABLE_AttrTypeMap_0_10 = next_value_of_STATE_VARIABLE_AttrTypeMap_0_10;
      STATE_VARIABLE_KeyMap_0_12 = next_value_of_STATE_VARIABLE_KeyMap_0_12;
      STATE_VARIABLE_DepRel_0_14 = next_value_of_STATE_VARIABLE_DepRel_0_14;
      STATE_VARIABLE_ErrorSpecs_0_16 = next_value_of_STATE_VARIABLE_ErrorSpecs_0_16;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_4;

  conv0_Type_4 = parse_tree__prog_event__convert_term_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Type_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Type_4;
  MR_String Name_5 = ((MR_String) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
  MR_Word Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
  MR_Word BuiltinType_7;

  succeeded = (Args_6 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = parse_tree__prog_data__builtin_type_name_2_p_1(&BuiltinType_7, Name_5);
  if (succeeded)
    {
      Type_4 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Type_4, 0) = ((MR_Box) (BuiltinType_7));
    }
  else
  {
    MR_Word SymName_8;
    MR_Word ArgTypes_9;

    SymName_8 = mdbcomp__sym_name__string_to_sym_name_1_f_0(Name_5);
    ArgTypes_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_event_scalar_common_2[5]), Args_6);
    {
      Type_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Type_4, 0) = ((MR_Box) (SymName_8));
      MR_hl_field(1, Type_4, 1) = ((MR_Box) (ArgTypes_9));
      MR_hl_field(1, Type_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Type_4;
}

static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
  MR_Word AttrMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String AttrName_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word AttrNames_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SynthAttrNumsTail_9;
    MR_Integer AttrNum_10;
    MR_Word AttrType_13;
    MR_Word Var_18;
    MR_Box conv0_Var_18;

    parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(AttrMap_1, AttrNames_7, &SynthAttrNumsTail_9);
    mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0), AttrMap_1, ((MR_Box) (AttrName_6)), &conv0_Var_18);
    Var_18 = ((MR_Word) (conv0_Var_18));
    AttrNum_10 = ((MR_Integer) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
    AttrType_13 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 3))));
    switch (MR_tag((MR_Word) AttrType_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = SynthAttrNumsTail_9;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (AttrNum_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (SynthAttrNumsTail_9));
        }
        break;
      case (MR_Integer) 2:
        *HeadVar__3_3 = SynthAttrNumsTail_9;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_event__acc_circular_synth_attr_error_5_p_0(
  MR_Word Context_6,
  MR_String EventName_7,
  MR_Word Scc_8,
  MR_Word STATE_VARIABLE_ErrorSpecs_0_17,
  MR_Word * STATE_VARIABLE_ErrorSpecs_18)
{
  MR_Word Attrs_10;
  MR_Word Pieces_14;
  MR_Word CircErrorSpec_16;

  Attrs_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Scc_8);
  if ((Attrs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (EventName_7));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[14])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[18])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[17])));
      MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_56));
    }
  }
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, Attrs_10, (MR_Integer) 1))));
    MR_String Var_73 = ((MR_String) ((MR_hl_field(1, Attrs_10, (MR_Integer) 0))));

    if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;

      {
        Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_42, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_47, 1) = ((MR_Box) (EventName_7));
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[21])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[18])));
        MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[19])));
        MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_41));
      }
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;

      Var_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Scc_8);
      Var_25 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(Var_26);
      {
        Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_31, 1) = ((MR_Box) (EventName_7));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[25])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__prog_event_scalar_common_1[18])));
        MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
      }
      Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_27);
      Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__prog_event_scalar_common_1[23])), Var_24);
    }
  }
  {
    CircErrorSpec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CircErrorSpec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.prog_event.acc_circular_synth_attr_error\'/5"));
    MR_hl_field(1, CircErrorSpec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, CircErrorSpec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(1, CircErrorSpec_16, 3) = ((MR_Box) (Context_6));
    MR_hl_field(1, CircErrorSpec_16, 4) = ((MR_Box) (Pieces_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_ErrorSpecs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (CircErrorSpec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSpecs_0_17));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_dep_rel_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_dep_rel_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_key_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_key_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_name_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_name_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_num_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_num_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____attr_type_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____attr_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_attr_function_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_attr_function_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_attr_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_attr_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_attr_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_attr_type_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_set_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_set_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_event____Unify____event_spec_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_event____Compare____event_spec_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_event__init(void)
{
}

void mercury__parse_tree__prog_event__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_dep_rel_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_name_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_num_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_type_map_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0);
	MR_register_type_ctor_info(&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0);
}

void mercury__parse_tree__prog_event__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_event__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_event.
