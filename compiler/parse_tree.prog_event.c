/*
** Automatically generated from `prog_event.m'
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


/* :- module parse_tree.prog_event. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_event__init
ENDINIT
*/

#include "parse_tree.prog_event.mih"


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
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0;

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

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0[2];

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
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__806__1_2_p_0(
  MR_Word parse_tree__prog_event__Kind_7,
  MR_Word parse_tree__prog_event__HeadVar__2_33);

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__644__1_3_p_0(
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_String parse_tree__prog_event__HeadVar__2_113,
  MR_Word * parse_tree__prog_event__HeadVar__3_114);

static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__532__1_2_f_0(
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
  MR_String parse_tree__prog_event__HeadVar__2_141);

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
  MR_Word parse_tree__prog_event__HeadVar__2_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
  MR_Word parse_tree__prog_event__Attribute_3,
  MR_Word * parse_tree__prog_event__HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
  MR_Word parse_tree__prog_event__Attribute_3,
  MR_Word * parse_tree__prog_event__HeadVar__2_2);

static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg);

static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
  MR_Word parse_tree__prog_event__Type_3);

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
  MR_Word parse_tree__prog_event__Attr_3);

static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
  MR_Word parse_tree__prog_event__Spec_3);

static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
  MR_Word parse_tree__prog_event__SpecA_4,
  MR_Word parse_tree__prog_event__SpecB_5,
  MR_Word * parse_tree__prog_event__Result_6);

static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
  MR_Word parse_tree__prog_event__Spec_4,
  MR_Integer parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8,
  MR_Integer * parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9);

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5,
  MR_Word * parse_tree__prog_event__HeadVar__6_6);

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
  MR_Word parse_tree__prog_event__AttrNameMap_7,
  MR_String parse_tree__prog_event__AttrName_8,
  MR_Word parse_tree__prog_event__Ancestors_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24,
  MR_Word * parse_tree__prog_event__PrevSynthOrder_11);

static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
  MR_Word parse_tree__prog_event__Term_3);

static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_Word parse_tree__prog_event__AttrTypeMap_4,
  MR_Integer parse_tree__prog_event__AttrNum_5,
  MR_Word parse_tree__prog_event__HeadVar__6_6,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10);

static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Integer parse_tree__prog_event__AttrLineNumber_3,
  MR_Word parse_tree__prog_event__KeyMap_4,
  MR_String parse_tree__prog_event__SynthAttrName_5,
  MR_Word parse_tree__prog_event__SynthAttrKey_6,
  MR_Word parse_tree__prog_event__HeadVar__7_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11);

static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_Word parse_tree__prog_event__KeyMap_4,
  MR_Word parse_tree__prog_event__HeadVar__5_5,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11);

static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Integer parse_tree__prog_event__EventLineNumber_3,
  MR_Word parse_tree__prog_event__HeadVar__4_4,
  MR_Integer parse_tree__prog_event__AttrNum_5,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_KeyMap_13,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_15,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17);

static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1);

static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
  MR_Word parse_tree__prog_event__AttrMap_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word * parse_tree__prog_event__HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
  MR_String parse_tree__prog_event__FileName_7,
  MR_Word parse_tree__prog_event__SpecTerm_8,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37);

static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
  MR_String parse_tree__prog_event__FileName_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6);

static void MR_CALL 
parse_tree__prog_event__read_specs_file_5_p_0(
  MR_String parse_tree__prog_event__SpecsFileName_1,
  MR_String parse_tree__prog_event__TermFileName_2,
  MR_String * parse_tree__prog_event__Problem_3);

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box * parse_tree__prog_event__wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1);

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box * parse_tree__prog_event__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[14][3];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[4][6];

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[8][5];




static /* final */ const MR_Box parse_tree__prog_event_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "eof in term specification file"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The previous event specification is here."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by synthesized attributes."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is assigned inconsistent types"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in its synthesis."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Circular dependency among"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the synthesized attributes of event"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Duplicate event specification for event"))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Event"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has more than one attribute named"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Attribute"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be synthesized"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by non-function attribute"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of event"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "uses nonexistent attribute"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not use the function attribute"))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[20])))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_5[1])),
    ((MR_Box) (parse_tree__prog_event__derive_event_set_data_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[1])),
    ((MR_Box) (parse_tree__prog_event__event_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_event__event_arg_modes_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[4])),
    ((MR_Box) (parse_tree__prog_event__convert_term_to_type_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[5])),
    ((MR_Box) (parse_tree__prog_event__describe_event_spec_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_event_scalar_common_6[7])),
    ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[8])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[19])))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_event_scalar_common_6[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "parse_tree.prog_event.mh"
#line 181 "prog_event.m"


MR_String
read_specs_file_2(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name)
{
    int         spec_fd;
    MR_String   problem;
    char        errbuf[MR_STRERROR_BUF_SIZE];

    /*
    ** There are race conditions between opening the file, stat'ing the file
    ** and reading the contents of the file, but the Unix API doesn't really
    ** allow these race conditions to be resolved.
    */

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

    /* XXX we don't handle successful but partial reads */
    do {
        num_bytes_read = read(spec_fd, spec_buf, size);
    } while (num_bytes_read == -1 && MR_is_eintr(errno));
    if (num_bytes_read != size) {
        problem = MR_make_string(alloc_id, "could not read in %s",
            specs_file_name);
    } else {
        MR_EventSet event_set;

        /* NULL terminate the string we have read in. */
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

                /*
                ** Our caller tests Problem against the empty string, not NULL.
                */
                problem = MR_make_string(alloc_id, "");
            }
        }
    }
    return problem;
}



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_event__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_dep_rel_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_dep_rel",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__digraph__ti_digraph_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0[4] = {
  (MR_String) "attr_info_number",
  (MR_String) "attr_info_name",
  (MR_String) "attr_info_linenumber",
  (MR_String) "attr_info_type"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0 = {
  (MR_String) "attr_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_attr_info_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_attr_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_attr_info_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_attr_info_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_info_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_info",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_attr_info_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_attr_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_attr_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_event__digraph__ti_digraph_key_1builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_key_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_key_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_key_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_key_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_name_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_name_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_name_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_num_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_num_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_num_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_num_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_event____Unify____attr_type_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____attr_type_map_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "attr_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_event__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0 = {
  (MR_String) "event_attr_pure_function",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_event__parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1 = {
  (MR_String) "event_attr_impure_function",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_function_kind",
  {     parse_tree__prog_event__parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_function_kind_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[2] = {
  (MR_String) "func_attr_name",
  (MR_String) "arg_attr_names"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 = {
  (MR_String) "event_attr_synth_call_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_synth_call_term",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0[3] = {
  (MR_String) "attr_name",
  (MR_String) "attr_linenum",
  (MR_String) "attr_type"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 = {
  (MR_String) "event_attr_term",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_attr_term_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_term_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_term",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_term_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_term_0
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0 = {
  (MR_String) "event_attr_type_ordinary",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1 = {
  (MR_String) "event_attr_type_synthesized",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2 = {
  (MR_String) "event_attr_type_function",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_0_2
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 = {
  (MR_String) "event_attr_type_term",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_attr_type_term_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_attr_type_term",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_attr_type_term_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_attr_type_term_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0[2] = {
  (MR_String) "event_set_name",
  (MR_String) "event_set_specs"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 = {
  (MR_String) "event_set_spec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_set_spec_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_set_spec_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_set_spec_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_set_spec_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_set_spec_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_set_spec",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_set_spec_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_set_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_set_spec_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_term_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_event__list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0
};

static const MR_ConstString parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0[4] = {
  (MR_String) "event_name",
  (MR_String) "event_num",
  (MR_String) "event_linenumber",
  (MR_String) "event_attrs"
};

static const MR_DuFunctorDesc parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 = {
  (MR_String) "event_spec_term",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_event__parse_tree__prog_event__field_types_event_spec_term_0_0,
  parse_tree__prog_event__parse_tree__prog_event__field_names_event_spec_term_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0
};

static const MR_DuPtagLayout parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_event__parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0[1] = {
  &parse_tree__prog_event__parse_tree__prog_event__du_functor_desc_event_spec_term_0_0
};

static const MR_Integer parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_event____Unify____event_spec_term_0_0_10001)),
  ((MR_Box) (parse_tree__prog_event____Compare____event_spec_term_0_0_10001)),
  (MR_String) "parse_tree.prog_event",
  (MR_String) "event_spec_term",
  {     parse_tree__prog_event__parse_tree__prog_event__du_name_ordered_event_spec_term_0 },
  {     parse_tree__prog_event__parse_tree__prog_event__du_ptag_ordered_event_spec_term_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_event__parse_tree__prog_event__functor_number_map_event_spec_term_0
};

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_dep_rel_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_dep_rel_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_info_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_info_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_key_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_key_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_key_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_key_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_name_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_name_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_num_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_num_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____attr_type_map_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____attr_type_map_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_function_kind_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_attr_function_kind_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_attr_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_attr_type_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_attr_type_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_set_spec_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_set_spec_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0_10001(
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_spec_term_0_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0_10001(
  MR_Box * parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_event__conv0_HeadVar__1_1;

    {
      parse_tree__prog_event____Compare____event_spec_term_0_0(&parse_tree__prog_event__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_event__wrapper_arg_2), ((MR_Word) parse_tree__prog_event__wrapper_arg_3));
    }
    *parse_tree__prog_event__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_event__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__806__1_2_p_0(
  MR_Word parse_tree__prog_event__Kind_7,
  MR_Word parse_tree__prog_event__HeadVar__2_33)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_data____Unify____kind_0_0(parse_tree__prog_event__Kind_7, parse_tree__prog_event__HeadVar__2_33);
    }
    return parse_tree__prog_event__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__644__1_3_p_0(
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_String parse_tree__prog_event__HeadVar__2_113,
  MR_Word * parse_tree__prog_event__HeadVar__3_114)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Box parse_tree__prog_event__conv0_HeadVar__3_114;

    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__HeadVar__2_113)), &parse_tree__prog_event__conv0_HeadVar__3_114);
    }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__HeadVar__3_114 = ((MR_Word) parse_tree__prog_event__conv0_HeadVar__3_114);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_event__IntroducedFrom__func__build_dep_map__532__1_2_f_0(
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
  MR_String parse_tree__prog_event__HeadVar__2_141)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__HeadVar__3_142;
    MR_Box parse_tree__prog_event__conv0_HeadVar__3_142;

    {
      parse_tree__prog_event__conv0_HeadVar__3_142 = mercury__map__lookup_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__HeadVar__2_141)));
    }
    parse_tree__prog_event__HeadVar__3_142 = ((MR_Word) parse_tree__prog_event__conv0_HeadVar__3_142);
    return parse_tree__prog_event__HeadVar__3_142;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_spec_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_15 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_16 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_15 == parse_tree__prog_event__CastY_16);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_String parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_event__V_12_12;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_12_12, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_12_12 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_12_12;
        else
          {
            MR_Word parse_tree__prog_event__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_13_13, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_9_9);
            }
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_13_13 == (MR_Integer) 0);
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
            if (parse_tree__prog_event__succeeded)
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_13_13;
            else
              {
                MR_Word parse_tree__prog_event__V_14_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_14_14, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                }
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_14_14 == (MR_Integer) 0);
                parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
                if (parse_tree__prog_event__succeeded)
                  *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[5], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_7_7)), ((MR_Box) (parse_tree__prog_event__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_spec_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_event__TypeInfo_13_13;
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));
        MR_String parse_tree__prog_event__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));

        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_7_7) == 0);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_4_4 == parse_tree__prog_event__V_8_8);
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_5_5 == parse_tree__prog_event__V_9_9);
                if (parse_tree__prog_event__succeeded)
                  {
                    parse_tree__prog_event__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_event_scalar_common_1[5];
                    {
                      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_event__V_6_6)), ((MR_Box) (parse_tree__prog_event__V_10_10)));
                    }
                  }
              }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_set_spec_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[4], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_set_spec_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[4];
            {
              parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[3], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[3];
            {
              parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_type_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_29 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_30 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_29 == parse_tree__prog_event__CastY_30);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_event__V_36_36 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_event__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__3_3), (MR_Integer) 0);

                  {
                    parse_tree__prog_event____Compare____event_attr_type_term_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_36_36, parse_tree__prog_event__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_event__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_event__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_event__V_18_18;

                  {
                    parse_tree__prog_event____Compare____event_attr_type_term_0_0(&parse_tree__prog_event__V_18_18, parse_tree__prog_event__V_38_38, parse_tree__prog_event__V_16_16);
                  }
                  parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_18_18 == (MR_Integer) 0);
                  parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
                  if (parse_tree__prog_event__succeeded)
                    *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_18_18;
                  else
                    {
                      parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_37_37, parse_tree__prog_event__V_17_17);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_event__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_event__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_event__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__prog_event__V_39_39 = (MR_Integer) parse_tree__prog_event__V_35_35;
                  MR_Integer parse_tree__prog_event__V_40_40 = (MR_Integer) parse_tree__prog_event__V_28_28;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_39_39, parse_tree__prog_event__V_40_40);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_type_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_event__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_event__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__1_1), (MR_Integer) 0);
            MR_Word parse_tree__prog_event__V_4_4;

            parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__HeadVar__2_2), (MR_Integer) 0);
                {
                  parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__V_7_7;
            MR_Word parse_tree__prog_event__V_8_8;

            parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
                {
                  parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_term_0_0(parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_7_7);
                }
                if (parse_tree__prog_event__succeeded)
                  {
                    parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_8_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__V_10_10;

            parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_9_9 == parse_tree__prog_event__V_10_10);
              }
          }
          break;
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_13 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_12 == parse_tree__prog_event__CastY_13);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_String parse_tree__prog_event__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_10_10;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_10_10, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_7_7);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_10_10 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_10_10;
        else
          {
            MR_Word parse_tree__prog_event__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_11_11, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_8_8);
            }
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_11_11 == (MR_Integer) 0);
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
            if (parse_tree__prog_event__succeeded)
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_11_11;
            else
              {
                parse_tree__prog_event____Compare____event_attr_type_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));

        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_6_6) == 0);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_4_4 == parse_tree__prog_event__V_7_7);
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_8_8);
              }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_synth_call_term_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_9 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_10 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_9 == parse_tree__prog_event__CastY_10);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_8_8, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_6_6);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[2], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__V_5_5)), ((MR_Box) (parse_tree__prog_event__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_synth_call_term_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_7 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_8 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_7 == parse_tree__prog_event__CastY_8);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_event__TypeInfo_9_9;
        MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));

        parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_3_3, parse_tree__prog_event__V_5_5) == 0);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__TypeInfo_9_9 = (MR_Word) &parse_tree__prog_event_scalar_common_1[2];
            {
              parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_event__TypeInfo_9_9, ((MR_Box) (parse_tree__prog_event__V_4_4)), ((MR_Box) (parse_tree__prog_event__V_6_6)));
            }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____event_attr_function_kind_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__Cast_HeadVar1_4, parse_tree__prog_event__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____event_attr_function_kind_0_0(
  MR_Word parse_tree__prog_event__HeadVar__2_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded = (parse_tree__prog_event__HeadVar__2_1 == parse_tree__prog_event__HeadVar__2_2);

    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_type_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[3], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_type_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[3], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_num_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[2], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_num_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[2], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_name_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[1], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_name_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[1], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_map_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[0], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_map_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_2[0], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_key_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_key_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[0], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_info_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_15 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;
    MR_Integer parse_tree__prog_event__CastY_16 = (MR_Integer) parse_tree__prog_event__HeadVar__3_3;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_15 == parse_tree__prog_event__CastY_16);
    if (parse_tree__prog_event__succeeded)
      *parse_tree__prog_event__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_event__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 0)));
        MR_String parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_event__V_12_12;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_12_12, parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8);
        }
        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_12_12 == (MR_Integer) 0);
        parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
        if (parse_tree__prog_event__succeeded)
          *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_12_12;
        else
          {
            MR_Word parse_tree__prog_event__V_13_13;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_event__V_13_13, parse_tree__prog_event__V_5_5, parse_tree__prog_event__V_9_9);
            }
            parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_13_13 == (MR_Integer) 0);
            parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
            if (parse_tree__prog_event__succeeded)
              *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_13_13;
            else
              {
                MR_Word parse_tree__prog_event__V_14_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_event__V_14_14, parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                }
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_14_14 == (MR_Integer) 0);
                parse_tree__prog_event__succeeded = !(parse_tree__prog_event__succeeded);
                if (parse_tree__prog_event__succeeded)
                  *parse_tree__prog_event__HeadVar__1_1 = parse_tree__prog_event__V_14_14;
                else
                  {
                    parse_tree__prog_event____Compare____event_attr_type_0_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_7_7, parse_tree__prog_event__V_11_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_info_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__CastX_11 = (MR_Integer) parse_tree__prog_event__HeadVar__1_1;
    MR_Integer parse_tree__prog_event__CastY_12 = (MR_Integer) parse_tree__prog_event__HeadVar__2_2;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__CastX_11 == parse_tree__prog_event__CastY_12);
    if (parse_tree__prog_event__succeeded)
      parse_tree__prog_event__succeeded = MR_TRUE;
    else
      {
        MR_Integer parse_tree__prog_event__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_event__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 3)));

        parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_3_3 == parse_tree__prog_event__V_7_7);
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__V_4_4, parse_tree__prog_event__V_8_8) == 0);
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_5_5 == parse_tree__prog_event__V_9_9);
                if (parse_tree__prog_event__succeeded)
                  {
                    parse_tree__prog_event__succeeded = parse_tree__prog_event____Unify____event_attr_type_0_0(parse_tree__prog_event__V_6_6, parse_tree__prog_event__V_10_10);
                  }
              }
          }
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event____Compare____attr_dep_rel_0_0(
  MR_Word * parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_4 = parse_tree__prog_event__HeadVar__2_2;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_5 = parse_tree__prog_event__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[1], parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event____Unify____attr_dep_rel_0_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Cast_HeadVar1_3 = parse_tree__prog_event__HeadVar__1_1;
    MR_Word parse_tree__prog_event__Cast_HeadVar2_4 = parse_tree__prog_event__HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_event_scalar_common_1[1], ((MR_Box) (parse_tree__prog_event__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_event__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_mode_2_p_0(
  MR_Word parse_tree__prog_event__Attribute_3,
  MR_Word * parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__V_8_8;
    MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 0)));
    MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 2)));

    *parse_tree__prog_event__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 3)));
    parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 4)));
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return parse_tree__prog_event__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__project_event_arg_type_2_p_0(
  MR_Word parse_tree__prog_event__Attribute_3,
  MR_Word * parse_tree__prog_event__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__V_8_8;
    MR_Integer parse_tree__prog_event__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 0)));
    MR_String parse_tree__prog_event__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__V_7_7;

    *parse_tree__prog_event__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 2)));
    parse_tree__prog_event__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 3)));
    parse_tree__prog_event__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attribute_3, (MR_Integer) 4)));
    parse_tree__prog_event__succeeded = (parse_tree__prog_event__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return parse_tree__prog_event__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_String parse_tree__prog_event__conv0_Desc_4;

    {
      parse_tree__prog_event__conv0_Desc_4 = parse_tree__prog_event__describe_attr_type_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Desc_4));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__806__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 4))));
    }
    return parse_tree__prog_event__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_attr_type_1_f_0(
  MR_Word parse_tree__prog_event__Type_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_String parse_tree__prog_event__Desc_4;

    switch (MR_tag((MR_Word) parse_tree__prog_event__Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_event", (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "type not constructed by prog_event");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_event__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_event__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 1)));
          MR_Word parse_tree__prog_event__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_3, (MR_Integer) 2)));
          MR_String parse_tree__prog_event__ArgTypeDescs_8;
          MR_Word parse_tree__prog_event__V_29_29;
          MR_String parse_tree__prog_event__V_41_41;

          {
            parse_tree__prog_event__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_29_29, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_6[6]));
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_29_29, 1) = ((MR_Box) (parse_tree__prog_event__describe_attr_type_1_f_0_1));
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_29_29, 3) = ((MR_Box) (parse_tree__prog_event__Kind_7));
            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_29_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(parse_tree__prog_event__V_29_29, (MR_String) "parse_tree.prog_event", (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "not kind_star");
          }
          if ((parse_tree__prog_event__ArgTypes_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__prog_event__ArgTypeDescs_8 = (MR_String) "";
          else
            {
              MR_String parse_tree__prog_event__V_35_35;
              MR_String parse_tree__prog_event__V_36_36;
              MR_Word parse_tree__prog_event__V_38_38;

              {
                parse_tree__prog_event__V_38_38 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[13], parse_tree__prog_event__ArgTypes_6);
              }
              {
                parse_tree__prog_event__V_36_36 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_event__V_38_38);
              }
              {
                parse_tree__prog_event__V_35_35 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_36_36, (MR_String) ")");
              }
              {
                parse_tree__prog_event__ArgTypeDescs_8 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_35_35);
              }
            }
          {
            parse_tree__prog_event__V_41_41 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__prog_event__SymName_5);
          }
          {
            parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_41_41, parse_tree__prog_event__ArgTypeDescs_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_event__BuiltinType_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__Type_3, (MR_Integer) 0)));

          {
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_event__BuiltinType_11, &parse_tree__prog_event__Desc_4);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_event__Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_event", (MR_String) "function \140parse_tree.prog_event.describe_attr_type\'/1", (MR_String) "type not constructed by prog_event");
              }
            }
            break;
          case (MR_Integer) 1:
            parse_tree__prog_event__Desc_4 = (MR_String) "function";
            break;
        }
        break;
    }
    return parse_tree__prog_event__Desc_4;
  }
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_attr_1_f_0(
  MR_Word parse_tree__prog_event__Attr_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_String parse_tree__prog_event__Desc_4;
    MR_String parse_tree__prog_event__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__MaybeSynthCall_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 4)));
    MR_String parse_tree__prog_event__TypeDesc_10;
    MR_String parse_tree__prog_event__SynthCallDesc_11;
    MR_String parse_tree__prog_event__V_26_26;
    MR_String parse_tree__prog_event__V_28_28;
    MR_Integer parse_tree__prog_event___Num_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_event___Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Attr_3, (MR_Integer) 3)));

    {
      parse_tree__prog_event__TypeDesc_10 = parse_tree__prog_event__describe_attr_type_1_f_0(parse_tree__prog_event__Type_7);
    }
    if ((parse_tree__prog_event__MaybeSynthCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__prog_event__SynthCallDesc_11 = (MR_String) "";
    else
      {
        MR_Word parse_tree__prog_event__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word parse_tree__prog_event__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word parse_tree__prog_event__SynthCall_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__MaybeSynthCall_9, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__FuncAttrNameNum_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__ArgAttrNameNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 1)));
        MR_String parse_tree__prog_event__ArgAttrDesc_16;
        MR_Word parse_tree__prog_event__V_18_18;
        MR_String parse_tree__prog_event__V_20_20;
        MR_String parse_tree__prog_event__V_21_21;
        MR_String parse_tree__prog_event__V_22_22;
        MR_String parse_tree__prog_event__V_24_24;
        MR_Word parse_tree__prog_event___Order_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_12, (MR_Integer) 2)));
        MR_Box parse_tree__prog_event__conv0_V_21_21;

        {
          parse_tree__prog_event__V_18_18 = mercury__assoc_list__keys_1_f_0(parse_tree__prog_event__TypeCtorInfo_29_29, parse_tree__prog_event__TypeCtorInfo_30_30, parse_tree__prog_event__ArgAttrNameNums_14);
        }
        {
          parse_tree__prog_event__ArgAttrDesc_16 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_event__V_18_18);
        }
        {
          parse_tree__prog_event__conv0_V_21_21 = mercury__pair__fst_1_f_0(parse_tree__prog_event__TypeCtorInfo_29_29, parse_tree__prog_event__TypeCtorInfo_30_30, parse_tree__prog_event__FuncAttrNameNum_13);
        }
        parse_tree__prog_event__V_21_21 = ((MR_String) parse_tree__prog_event__conv0_V_21_21);
        {
          parse_tree__prog_event__V_24_24 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__ArgAttrDesc_16, (MR_String) ")");
        }
        {
          parse_tree__prog_event__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_24_24);
        }
        {
          parse_tree__prog_event__V_20_20 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__V_21_21, parse_tree__prog_event__V_22_22);
        }
        {
          parse_tree__prog_event__SynthCallDesc_11 = mercury__string__f_43_43_2_f_0((MR_String) " synthesized by ", parse_tree__prog_event__V_20_20);
        }
      }
    {
      parse_tree__prog_event__V_28_28 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__TypeDesc_10, parse_tree__prog_event__SynthCallDesc_11);
    }
    {
      parse_tree__prog_event__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", parse_tree__prog_event__V_28_28);
    }
    {
      parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__Name_6, parse_tree__prog_event__V_26_26);
    }
    return parse_tree__prog_event__Desc_4;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_String parse_tree__prog_event__conv0_Desc_4;

    {
      parse_tree__prog_event__conv0_Desc_4 = parse_tree__prog_event__describe_event_attr_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Desc_4));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
parse_tree__prog_event__describe_event_spec_1_f_0(
  MR_Word parse_tree__prog_event__Spec_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_String parse_tree__prog_event__Desc_4;
    MR_String parse_tree__prog_event__EventName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__Attrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 3)));
    MR_String parse_tree__prog_event__AttrDescs_10;
    MR_Word parse_tree__prog_event__V_12_12;
    MR_String parse_tree__prog_event__V_15_15;
    MR_String parse_tree__prog_event__V_16_16;
    MR_String parse_tree__prog_event__V_18_18;
    MR_Integer parse_tree__prog_event___EventNumber_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_event___EventLineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event___SynthAttrNumOrder_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_3, (MR_Integer) 4)));

    {
      parse_tree__prog_event__V_12_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[12], parse_tree__prog_event__Attrs_8);
    }
    {
      parse_tree__prog_event__AttrDescs_10 = mercury__string__join_list_2_f_0((MR_String) ",\n", parse_tree__prog_event__V_12_12);
    }
    {
      parse_tree__prog_event__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__AttrDescs_10, (MR_String) ")\n");
    }
    {
      parse_tree__prog_event__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "(", parse_tree__prog_event__V_18_18);
    }
    {
      parse_tree__prog_event__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__EventName_6, parse_tree__prog_event__V_16_16);
    }
    {
      parse_tree__prog_event__Desc_4 = mercury__string__f_43_43_2_f_0((MR_String) "event ", parse_tree__prog_event__V_15_15);
    }
    return parse_tree__prog_event__Desc_4;
  }
}

static void MR_CALL 
parse_tree__prog_event__compare_event_specs_by_num_3_p_0(
  MR_Word parse_tree__prog_event__SpecA_4,
  MR_Word parse_tree__prog_event__SpecB_5,
  MR_Word * parse_tree__prog_event__Result_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 0)));
    MR_String parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 3)));
    MR_Word parse_tree__prog_event__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecA_4, (MR_Integer) 4)));
    MR_String parse_tree__prog_event__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_event__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 3)));
    MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecB_5, (MR_Integer) 4)));

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_event__Result_6, parse_tree__prog_event__V_7_7, parse_tree__prog_event__V_8_8);
    }
  }
}

static void MR_CALL 
parse_tree__prog_event__update_max_num_attr_3_p_0(
  MR_Word parse_tree__prog_event__Spec_4,
  MR_Integer parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8,
  MR_Integer * parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__AllAttrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 3)));
    MR_Integer parse_tree__prog_event__NumAttr_7;
    MR_Integer parse_tree__prog_event__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 0)));
    MR_String parse_tree__prog_event__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_event__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Spec_4, (MR_Integer) 4)));

    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, parse_tree__prog_event__AllAttrs_6, &parse_tree__prog_event__NumAttr_7);
    }
    {
      *parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_9 = mercury__int__max_2_f_0(parse_tree__prog_event__STATE_VARIABLE_MaxNumAttr_0_8, parse_tree__prog_event__NumAttr_7);
    }
  }
}

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__HeadVar__3_3,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5,
  MR_Word * parse_tree__prog_event__HeadVar__6_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_event__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
      }
    else
      {
        MR_String parse_tree__prog_event__ArgName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__ArgNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__PrevSynthOrderArg_18;
        MR_Word parse_tree__prog_event__PrevSynthOrderArgs_19;
        MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22;

        {
          parse_tree__prog_event__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__HeadVar__3_3);
        }
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
          }
        else
          {
            MR_Word parse_tree__prog_event__AttrInfo_32;
            MR_Box parse_tree__prog_event__conv0_AttrInfo_32;

            {
              parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__HeadVar__1_1, ((MR_Box) (parse_tree__prog_event__ArgName_13)), &parse_tree__prog_event__conv0_AttrInfo_32);
            }
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__AttrInfo_32 = ((MR_Word) parse_tree__prog_event__conv0_AttrInfo_32);
                parse_tree__prog_event__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_event__succeeded)
              {
                MR_Word parse_tree__prog_event__AttrTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 3)));
                MR_Integer parse_tree__prog_event__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 0)));
                MR_String parse_tree__prog_event__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 1)));
                MR_Integer parse_tree__prog_event__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) parse_tree__prog_event__AttrTerm_33)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__prog_event__TypeCtorInfo_36_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                      MR_Word parse_tree__prog_event__SynthCall_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_33, (MR_Integer) 1)));
                      MR_String parse_tree__prog_event__FuncAttrName_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_37, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_event__ArgAttrNames_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_37, (MR_Integer) 1)));
                      MR_Word parse_tree__prog_event__SubAncestors_40;
                      MR_Word parse_tree__prog_event__SubPrevSynthOrder_41;
                      MR_Integer parse_tree__prog_event__AttrNum_42;
                      MR_Word parse_tree__prog_event__V_43_43;
                      MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44;
                      MR_Word parse_tree__prog_event__V_46_46;
                      MR_Word parse_tree__prog_event__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_33, (MR_Integer) 0)));
                      MR_String parse_tree__prog_event__V_56_56;
                      MR_Integer parse_tree__prog_event__V_57_57;
                      MR_Word parse_tree__prog_event__V_58_58;

                      {
                        mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_54, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__HeadVar__3_3, &parse_tree__prog_event__SubAncestors_40);
                      }
                      {
                        parse_tree__prog_event__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_43_43, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_38));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_43_43, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNames_39));
                      }
                      {
                        parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__V_43_43, parse_tree__prog_event__SubAncestors_40, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44, &parse_tree__prog_event__SubPrevSynthOrder_41);
                      }
                      {
                        mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_54, ((MR_Box) (parse_tree__prog_event__ArgName_13)), parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_44, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22);
                      }
                      parse_tree__prog_event__AttrNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 0)));
                      parse_tree__prog_event__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 1)));
                      parse_tree__prog_event__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 2)));
                      parse_tree__prog_event__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_32, (MR_Integer) 3)));
                      {
                        parse_tree__prog_event__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_42));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__prog_event__PrevSynthOrderArg_18 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__SubPrevSynthOrder_41, parse_tree__prog_event__V_46_46);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
                    }
                    break;
                }
              }
            else
              {
                parse_tree__prog_event__PrevSynthOrderArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_4;
              }
          }
        {
          parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__HeadVar__1_1, parse_tree__prog_event__ArgNames_14, parse_tree__prog_event__HeadVar__3_3, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_22_22, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_5, &parse_tree__prog_event__PrevSynthOrderArgs_19);
        }
        {
          *parse_tree__prog_event__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__PrevSynthOrderArg_18, parse_tree__prog_event__PrevSynthOrderArgs_19);
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(
  MR_Word parse_tree__prog_event__AttrNameMap_7,
  MR_String parse_tree__prog_event__AttrName_8,
  MR_Word parse_tree__prog_event__Ancestors_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24,
  MR_Word * parse_tree__prog_event__PrevSynthOrder_11)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    {
      parse_tree__prog_event__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__Ancestors_9);
    }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
      }
    else
      {
        MR_Word parse_tree__prog_event__AttrInfo_12;
        MR_Box parse_tree__prog_event__conv0_AttrInfo_12;

        {
          parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_7, ((MR_Box) (parse_tree__prog_event__AttrName_8)), &parse_tree__prog_event__conv0_AttrInfo_12);
        }
        if (parse_tree__prog_event__succeeded)
          {
            parse_tree__prog_event__AttrInfo_12 = ((MR_Word) parse_tree__prog_event__conv0_AttrInfo_12);
            parse_tree__prog_event__succeeded = MR_TRUE;
          }
        if (parse_tree__prog_event__succeeded)
          {
            MR_Word parse_tree__prog_event__AttrTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 3)));
            MR_Integer parse_tree__prog_event__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 0)));
            MR_String parse_tree__prog_event__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 1)));
            MR_Integer parse_tree__prog_event__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 2)));

            switch (MR_tag((MR_Word) parse_tree__prog_event__AttrTerm_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_Word parse_tree__prog_event__SynthCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_13, (MR_Integer) 1)));
                  MR_String parse_tree__prog_event__FuncAttrName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_17, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_event__ArgAttrNames_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_17, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_event__SubAncestors_20;
                  MR_Word parse_tree__prog_event__SubPrevSynthOrder_21;
                  MR_Integer parse_tree__prog_event__AttrNum_22;
                  MR_Word parse_tree__prog_event__V_25_25;
                  MR_Word parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26;
                  MR_Word parse_tree__prog_event__V_28_28;
                  MR_Word parse_tree__prog_event__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTerm_13, (MR_Integer) 0)));
                  MR_String parse_tree__prog_event__V_38_38;
                  MR_Integer parse_tree__prog_event__V_39_39;
                  MR_Word parse_tree__prog_event__V_40_40;

                  {
                    mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_36, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__Ancestors_9, &parse_tree__prog_event__SubAncestors_20);
                  }
                  {
                    parse_tree__prog_event__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_25_25, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_18));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_25_25, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNames_19));
                  }
                  {
                    parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_p_0(parse_tree__prog_event__AttrNameMap_7, parse_tree__prog_event__V_25_25, parse_tree__prog_event__SubAncestors_20, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23, &parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26, &parse_tree__prog_event__SubPrevSynthOrder_21);
                  }
                  {
                    mercury__set__insert_3_p_0(parse_tree__prog_event__TypeCtorInfo_36_36, ((MR_Box) (parse_tree__prog_event__AttrName_8)), parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_26_26, parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24);
                  }
                  parse_tree__prog_event__AttrNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 0)));
                  parse_tree__prog_event__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 1)));
                  parse_tree__prog_event__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 2)));
                  parse_tree__prog_event__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_12, (MR_Integer) 3)));
                  {
                    parse_tree__prog_event__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_28_28, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_22));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    *parse_tree__prog_event__PrevSynthOrder_11 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__SubPrevSynthOrder_21, parse_tree__prog_event__V_28_28);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
                }
                break;
            }
          }
        else
          {
            *parse_tree__prog_event__PrevSynthOrder_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_24 = parse_tree__prog_event__STATE_VARIABLE_AlreadyComputed_0_23;
          }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv0_Type_4;

    {
      parse_tree__prog_event__conv0_Type_4 = parse_tree__prog_event__convert_term_to_type_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv0_Type_4));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_event__convert_term_to_type_1_f_0(
  MR_Word parse_tree__prog_event__Term_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__Type_4;
    MR_String parse_tree__prog_event__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Term_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_event__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__Term_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__BuiltinType_7;

    parse_tree__prog_event__succeeded = (parse_tree__prog_event__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_event__BuiltinType_7, parse_tree__prog_event__Name_5);
      }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__Type_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), parse_tree__prog_event__Type_4, 0) = ((MR_Box) (parse_tree__prog_event__BuiltinType_7));
      }
    else
      {
        MR_Word parse_tree__prog_event__SymName_8;
        MR_Word parse_tree__prog_event__ArgTypes_9;

        {
          parse_tree__prog_event__SymName_8 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__prog_event__Name_5);
        }
        {
          parse_tree__prog_event__ArgTypes_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_attr_type_term_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[11], parse_tree__prog_event__Args_6);
        }
        {
          parse_tree__prog_event__Type_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 0) = ((MR_Box) (parse_tree__prog_event__SymName_8));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 1) = ((MR_Box) (parse_tree__prog_event__ArgTypes_9));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Type_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    return parse_tree__prog_event__Type_4;
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Integer parse_tree__prog_event__conv5_HeadVar__2_2;

    {
      parse_tree__prog_event__conv5_HeadVar__2_2 = parse_tree__prog_event__attr_info_number_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv5_HeadVar__2_2));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv4_HeadVar__3_114;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__644__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_String) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv4_HeadVar__3_114);
    }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv4_HeadVar__3_114));
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event__convert_terms_to_attrs_10_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_Word parse_tree__prog_event__AttrTypeMap_4,
  MR_Integer parse_tree__prog_event__AttrNum_5,
  MR_Word parse_tree__prog_event__HeadVar__6_6,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_event__succeeded;

        if ((parse_tree__prog_event__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
            *parse_tree__prog_event__STATE_VARIABLE_RevAttrs_8 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
          }
        else
          {
            MR_Word parse_tree__prog_event__AttrTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__AttrTerms_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__6_6, (MR_Integer) 1)));
            MR_String parse_tree__prog_event__AttrName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 0)));
            MR_Integer parse_tree__prog_event__AttrLineNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__AttrTypeTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_27, (MR_Integer) 2)));
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94;
            MR_Integer parse_tree__prog_event__V_95_95;

            switch (MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_event__AttrType_35;
                  MR_Word parse_tree__prog_event__EventAttr_36;
                  MR_Word parse_tree__prog_event__V_92_92;
                  MR_Box parse_tree__prog_event__conv1_AttrType_35;

                  {
                    mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv1_AttrType_35);
                  }
                  parse_tree__prog_event__AttrType_35 = ((MR_Word) parse_tree__prog_event__conv1_AttrType_35);
                  {
                    parse_tree__prog_event__V_92_92 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
                  {
                    parse_tree__prog_event__EventAttr_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_35));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 3) = ((MR_Box) (parse_tree__prog_event__V_92_92));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_36));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
                  }
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  MR_Word parse_tree__prog_event__SynthCallTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_33, (MR_Integer) 1)));
                  MR_String parse_tree__prog_event__FuncAttrName_39;
                  MR_Word parse_tree__prog_event__ArgAttrNames_40;
                  MR_Word parse_tree__prog_event__AttrType_101;
                  MR_Word parse_tree__prog_event__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_33, (MR_Integer) 0)));
                  MR_Box parse_tree__prog_event__conv2_AttrType_101;
                  MR_Integer parse_tree__prog_event__FuncAttrNum_42;
                  MR_Word parse_tree__prog_event__ArgAttrInfos_43;
                  MR_Word parse_tree__prog_event__TypeCtorInfo_112_112;
                  MR_Word parse_tree__prog_event__FuncAttrInfo_41;
                  MR_Word parse_tree__prog_event__V_84_84;
                  MR_Box parse_tree__prog_event__conv3_FuncAttrInfo_41;

                  {
                    mercury__map__lookup_3_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv2_AttrType_101);
                  }
                  parse_tree__prog_event__AttrType_101 = ((MR_Word) parse_tree__prog_event__conv2_AttrType_101);
                  parse_tree__prog_event__FuncAttrName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_38, (MR_Integer) 0)));
                  parse_tree__prog_event__ArgAttrNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_38, (MR_Integer) 1)));
                  parse_tree__prog_event__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
                  {
                    parse_tree__prog_event__succeeded = mercury__map__search_2_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_112_112, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__FuncAttrName_39)), &parse_tree__prog_event__conv3_FuncAttrInfo_41);
                  }
                  if (parse_tree__prog_event__succeeded)
                    {
                      parse_tree__prog_event__FuncAttrInfo_41 = ((MR_Word) parse_tree__prog_event__conv3_FuncAttrInfo_41);
                      parse_tree__prog_event__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_event__succeeded)
                    {
                      {
                        parse_tree__prog_event__FuncAttrNum_42 = parse_tree__prog_event__attr_info_number_1_f_0(parse_tree__prog_event__FuncAttrInfo_41);
                      }
                      {
                        parse_tree__prog_event__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_5[3]));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__convert_terms_to_attrs_10_p_0_1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 3) = ((MR_Box) (parse_tree__prog_event__AttrNameMap_3));
                      }
                      {
                        parse_tree__prog_event__succeeded = mercury__list__map_3_p_2(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_112_112, parse_tree__prog_event__V_84_84, parse_tree__prog_event__ArgAttrNames_40, &parse_tree__prog_event__ArgAttrInfos_43);
                      }
                    }
                  if (parse_tree__prog_event__succeeded)
                    {
                      MR_Word parse_tree__prog_event__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                      MR_Word parse_tree__prog_event__ArgAttrNums_44;
                      MR_Word parse_tree__prog_event__ArgAttrNameNums_45;
                      MR_Word parse_tree__prog_event__PrevSynthAttrOrder_47;
                      MR_Word parse_tree__prog_event__SynthCall_48;
                      MR_Word parse_tree__prog_event__V_86_86;
                      MR_Word parse_tree__prog_event__V_87_87;
                      MR_Word parse_tree__prog_event__V_88_88;
                      MR_Word parse_tree__prog_event__V_89_89;
                      MR_Word parse_tree__prog_event__V_90_90;
                      MR_Word parse_tree__prog_event__EventAttr_99;
                      MR_Word parse_tree__prog_event__V_46_46;

                      {
                        parse_tree__prog_event__ArgAttrNums_44 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__TypeCtorInfo_118_118, (MR_Word) &parse_tree__prog_event_scalar_common_2[10], parse_tree__prog_event__ArgAttrInfos_43);
                      }
                      {
                        parse_tree__prog_event__ArgAttrNameNums_45 = mercury__assoc_list__from_corresponding_lists_2_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_118_118, parse_tree__prog_event__ArgAttrNames_40, parse_tree__prog_event__ArgAttrNums_44);
                      }
                      {
                        parse_tree__prog_event__V_86_86 = mercury__set__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
                      }
                      {
                        parse_tree__prog_event__V_87_87 = mercury__set__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
                      }
                      {
                        parse_tree__prog_event__compute_prev_synth_attr_order_6_p_0(parse_tree__prog_event__AttrNameMap_3, parse_tree__prog_event__AttrName_31, parse_tree__prog_event__V_86_86, parse_tree__prog_event__V_87_87, &parse_tree__prog_event__V_46_46, &parse_tree__prog_event__PrevSynthAttrOrder_47);
                      }
                      {
                        parse_tree__prog_event__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_39));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_88_88, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrNum_42));
                      }
                      {
                        parse_tree__prog_event__SynthCall_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 0) = ((MR_Box) (parse_tree__prog_event__V_88_88));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 1) = ((MR_Box) (parse_tree__prog_event__ArgAttrNameNums_45));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCall_48, 2) = ((MR_Box) (parse_tree__prog_event__PrevSynthAttrOrder_47));
                      }
                      {
                        parse_tree__prog_event__V_89_89 = parse_tree__prog_mode__in_mode_0_f_0();
                      }
                      {
                        parse_tree__prog_event__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_90_90, 0) = ((MR_Box) (parse_tree__prog_event__SynthCall_48));
                      }
                      {
                        parse_tree__prog_event__EventAttr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_101));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 3) = ((MR_Box) (parse_tree__prog_event__V_89_89));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_99, 4) = ((MR_Box) (parse_tree__prog_event__V_90_90));
                      }
                      {
                        parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_99));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
                      }
                    }
                  else
                    parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_event__AttrType_104;
                  MR_Box parse_tree__prog_event__conv0_AttrType_104;

                  {
                    parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__AttrTypeMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_31)), &parse_tree__prog_event__conv0_AttrType_104);
                  }
                  if (parse_tree__prog_event__succeeded)
                    {
                      parse_tree__prog_event__AttrType_104 = ((MR_Word) parse_tree__prog_event__conv0_AttrType_104);
                      parse_tree__prog_event__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_event__succeeded)
                    {
                      MR_Word parse_tree__prog_event__V_56_56;
                      MR_Word parse_tree__prog_event__EventAttr_103;

                      {
                        parse_tree__prog_event__V_56_56 = parse_tree__prog_mode__in_mode_0_f_0();
                      }
                      {
                        parse_tree__prog_event__EventAttr_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 2) = ((MR_Box) (parse_tree__prog_event__AttrType_104));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 3) = ((MR_Box) (parse_tree__prog_event__V_56_56));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventAttr_103, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 0) = ((MR_Box) (parse_tree__prog_event__EventAttr_103));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7));
                      }
                      parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9;
                    }
                  else
                    {
                      MR_Word parse_tree__prog_event__Pieces_50;
                      MR_Word parse_tree__prog_event__ErrorSpec_51;
                      MR_Word parse_tree__prog_event__V_61_61;
                      MR_Word parse_tree__prog_event__V_62_62;
                      MR_Word parse_tree__prog_event__V_63_63;
                      MR_Word parse_tree__prog_event__V_66_66;
                      MR_Word parse_tree__prog_event__V_67_67;
                      MR_Word parse_tree__prog_event__V_76_76;
                      MR_Word parse_tree__prog_event__V_77_77;
                      MR_Word parse_tree__prog_event__V_78_78;
                      MR_Word parse_tree__prog_event__V_79_79;
                      MR_Word parse_tree__prog_event__V_80_80;

                      {
                        parse_tree__prog_event__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_62_62, 1) = ((MR_Box) (parse_tree__prog_event__EventName_1));
                      }
                      {
                        parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_67_67, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_31));
                      }
                      {
                        parse_tree__prog_event__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__V_67_67));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
                      }
                      {
                        parse_tree__prog_event__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[33])));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_63_63, 1) = ((MR_Box) (parse_tree__prog_event__V_66_66));
                      }
                      {
                        parse_tree__prog_event__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_61_61, 0) = ((MR_Box) (parse_tree__prog_event__V_62_62));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_61_61, 1) = ((MR_Box) (parse_tree__prog_event__V_63_63));
                      }
                      {
                        parse_tree__prog_event__Pieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[26])));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_50, 1) = ((MR_Box) (parse_tree__prog_event__V_61_61));
                      }
                      {
                        parse_tree__prog_event__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_78_78, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_78_78, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_32));
                      }
                      {
                        parse_tree__prog_event__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_80_80, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_50));
                      }
                      {
                        parse_tree__prog_event__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_79_79, 0) = ((MR_Box) (parse_tree__prog_event__V_80_80));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__prog_event__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_77_77, 0) = ((MR_Box) (parse_tree__prog_event__V_78_78));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_77_77, 1) = ((MR_Box) (parse_tree__prog_event__V_79_79));
                      }
                      {
                        parse_tree__prog_event__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_76_76, 0) = ((MR_Box) (parse_tree__prog_event__V_77_77));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__prog_event__ErrorSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_51, 2) = ((MR_Box) (parse_tree__prog_event__V_76_76));
                      }
                      {
                        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_51));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9));
                      }
                      parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7;
                    }
                }
                break;
            }
            parse_tree__prog_event__V_95_95 = (parse_tree__prog_event__AttrNum_5 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer parse_tree__prog_event__AttrNum__tmp_copy_5 = parse_tree__prog_event__V_95_95;
              MR_Word parse_tree__prog_event__HeadVar__6__tmp_copy_6 = parse_tree__prog_event__AttrTerms_28;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0__tmp_copy_7 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_94_94;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_9 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_83_83;

              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_9 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_9;
              parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0_7 = parse_tree__prog_event__STATE_VARIABLE_RevAttrs_0__tmp_copy_7;
              parse_tree__prog_event__HeadVar__6_6 = parse_tree__prog_event__HeadVar__6__tmp_copy_6;
              parse_tree__prog_event__AttrNum_5 = parse_tree__prog_event__AttrNum__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_event__record_arg_dependencies_11_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Integer parse_tree__prog_event__AttrLineNumber_3,
  MR_Word parse_tree__prog_event__KeyMap_4,
  MR_String parse_tree__prog_event__SynthAttrName_5,
  MR_Word parse_tree__prog_event__SynthAttrKey_6,
  MR_Word parse_tree__prog_event__HeadVar__7_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_event__succeeded;

        if ((parse_tree__prog_event__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_9 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
          }
        else
          {
            MR_String parse_tree__prog_event__AttrName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__7_7, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__AttrNames_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__7_7, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
            MR_Word parse_tree__prog_event__AttrKey_34;
            MR_Box parse_tree__prog_event__conv0_AttrKey_34;

            {
              parse_tree__prog_event__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__KeyMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_30)), &parse_tree__prog_event__conv0_AttrKey_34);
            }
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__AttrKey_34 = ((MR_Word) parse_tree__prog_event__conv0_AttrKey_34);
                parse_tree__prog_event__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_event__succeeded)
              {
                {
                  mercury__digraph__add_edge_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_event__AttrKey_34, parse_tree__prog_event__SynthAttrKey_6, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8, &parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41);
                }
                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
              }
            else
              {
                MR_Word parse_tree__prog_event__Pieces_35;
                MR_Word parse_tree__prog_event__ErrorSpec_36;
                MR_Word parse_tree__prog_event__V_44_44;
                MR_Word parse_tree__prog_event__V_45_45;
                MR_Word parse_tree__prog_event__V_46_46;
                MR_Word parse_tree__prog_event__V_49_49;
                MR_Word parse_tree__prog_event__V_50_50;
                MR_Word parse_tree__prog_event__V_51_51;
                MR_Word parse_tree__prog_event__V_54_54;
                MR_Word parse_tree__prog_event__V_55_55;
                MR_Word parse_tree__prog_event__V_64_64;
                MR_Word parse_tree__prog_event__V_65_65;
                MR_Word parse_tree__prog_event__V_66_66;
                MR_Word parse_tree__prog_event__V_67_67;
                MR_Word parse_tree__prog_event__V_68_68;

                {
                  parse_tree__prog_event__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_45_45, 1) = ((MR_Box) (parse_tree__prog_event__SynthAttrName_5));
                }
                {
                  parse_tree__prog_event__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_50_50, 1) = ((MR_Box) (parse_tree__prog_event__EventName_1));
                }
                {
                  parse_tree__prog_event__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_55_55, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_30));
                }
                {
                  parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[18])));
                }
                {
                  parse_tree__prog_event__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 1) = ((MR_Box) (parse_tree__prog_event__V_54_54));
                }
                {
                  parse_tree__prog_event__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_49_49, 0) = ((MR_Box) (parse_tree__prog_event__V_50_50));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_49_49, 1) = ((MR_Box) (parse_tree__prog_event__V_51_51));
                }
                {
                  parse_tree__prog_event__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[31])));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_46_46, 1) = ((MR_Box) (parse_tree__prog_event__V_49_49));
                }
                {
                  parse_tree__prog_event__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_44_44, 0) = ((MR_Box) (parse_tree__prog_event__V_45_45));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_44_44, 1) = ((MR_Box) (parse_tree__prog_event__V_46_46));
                }
                {
                  parse_tree__prog_event__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_event__V_44_44));
                }
                {
                  parse_tree__prog_event__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_3));
                }
                {
                  parse_tree__prog_event__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_68_68, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_35));
                }
                {
                  parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (parse_tree__prog_event__V_68_68));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_event__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 0) = ((MR_Box) (parse_tree__prog_event__V_66_66));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 1) = ((MR_Box) (parse_tree__prog_event__V_67_67));
                }
                {
                  parse_tree__prog_event__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (parse_tree__prog_event__V_65_65));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_event__ErrorSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_36, 2) = ((MR_Box) (parse_tree__prog_event__V_64_64));
                }
                {
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_36));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
                }
                parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_event__HeadVar__7__tmp_copy_7 = parse_tree__prog_event__AttrNames_31;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_41_41;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;

              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10;
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8;
              parse_tree__prog_event__HeadVar__7_7 = parse_tree__prog_event__HeadVar__7__tmp_copy_7;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv2_HeadVar__3_142;

    {
      parse_tree__prog_event__conv2_HeadVar__3_142 = parse_tree__prog_event__IntroducedFrom__func__build_dep_map__532__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__closure, (MR_Integer) 3))), ((MR_String) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv2_HeadVar__3_142));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_event__build_dep_map_11_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Word parse_tree__prog_event__AttrNameMap_3,
  MR_Word parse_tree__prog_event__KeyMap_4,
  MR_Word parse_tree__prog_event__HeadVar__5_5,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_event__succeeded;

        if ((parse_tree__prog_event__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_11 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_9 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
            *parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_7 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
          }
        else
          {
            MR_Word parse_tree__prog_event__TypeCtorInfo_135_135 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word parse_tree__prog_event__AttrTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__AttrTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__5_5, (MR_Integer) 1)));
            MR_String parse_tree__prog_event__AttrName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 0)));
            MR_Integer parse_tree__prog_event__AttrLineNumber_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__AttrTypeTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_29, (MR_Integer) 2)));
            MR_Word parse_tree__prog_event__AttrKey_37;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121;
            MR_Box parse_tree__prog_event__conv0_AttrKey_37;

            {
              mercury__bimap__lookup_3_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], parse_tree__prog_event__KeyMap_4, ((MR_Box) (parse_tree__prog_event__AttrName_34)), &parse_tree__prog_event__conv0_AttrKey_37);
            }
            parse_tree__prog_event__AttrKey_37 = ((MR_Word) parse_tree__prog_event__conv0_AttrKey_37);
            switch (MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
                  parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__SynthCallTerm_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_36, (MR_Integer) 1)));
                  MR_String parse_tree__prog_event__FuncAttrName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_39, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_event__ArgAttrNames_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SynthCallTerm_39, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_event__AttrErrorSpecs_42;
                  MR_Word parse_tree__prog_event___TypeTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_36, (MR_Integer) 0)));

                  {
                    parse_tree__prog_event__record_arg_dependencies_11_p_0(parse_tree__prog_event__EventName_1, parse_tree__prog_event__FileName_2, parse_tree__prog_event__AttrLineNumber_35, parse_tree__prog_event__KeyMap_4, parse_tree__prog_event__AttrName_34, parse_tree__prog_event__AttrKey_37, parse_tree__prog_event__ArgAttrNames_41, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8, &parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_event__AttrErrorSpecs_42);
                  }
                  if ((parse_tree__prog_event__AttrErrorSpecs_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word parse_tree__prog_event__AttrType_45;
                      MR_Box parse_tree__prog_event__conv1_AttrType_45;

                      {
                        parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__AttrName_34)), &parse_tree__prog_event__conv1_AttrType_45);
                      }
                      if (parse_tree__prog_event__succeeded)
                        {
                          parse_tree__prog_event__AttrType_45 = ((MR_Word) parse_tree__prog_event__conv1_AttrType_45);
                          parse_tree__prog_event__succeeded = MR_TRUE;
                        }
                      if (parse_tree__prog_event__succeeded)
                        {
                          MR_Word parse_tree__prog_event__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                          MR_Word parse_tree__prog_event__ArgTypes_46;
                          MR_Word parse_tree__prog_event__V_64_64;
                          MR_Word parse_tree__prog_event__FuncAttrInfo_47;
                          MR_Word parse_tree__prog_event__FuncAttrPurity_48;
                          MR_Word parse_tree__prog_event__V_65_65;
                          MR_Box parse_tree__prog_event__conv3_FuncAttrInfo_47;
                          MR_Integer parse_tree__prog_event__V_129_129;
                          MR_String parse_tree__prog_event__V_130_130;
                          MR_Integer parse_tree__prog_event__V_131_131;

                          {
                            parse_tree__prog_event__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (&parse_tree__prog_event_scalar_common_5[2]));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (parse_tree__prog_event__build_dep_map_11_p_0_1));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_64_64, 3) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6));
                          }
                          {
                            parse_tree__prog_event__ArgTypes_46 = mercury__list__map_2_f_0(parse_tree__prog_event__TypeCtorInfo_135_135, parse_tree__prog_event__TypeCtorInfo_140_140, parse_tree__prog_event__V_64_64, parse_tree__prog_event__ArgAttrNames_41);
                          }
                          {
                            parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrNameMap_3, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), &parse_tree__prog_event__conv3_FuncAttrInfo_47);
                          }
                          if (parse_tree__prog_event__succeeded)
                            {
                              parse_tree__prog_event__FuncAttrInfo_47 = ((MR_Word) parse_tree__prog_event__conv3_FuncAttrInfo_47);
                              parse_tree__prog_event__succeeded = MR_TRUE;
                            }
                          if (parse_tree__prog_event__succeeded)
                            {
                              parse_tree__prog_event__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 0)));
                              parse_tree__prog_event__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 1)));
                              parse_tree__prog_event__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 2)));
                              parse_tree__prog_event__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 3)));
                              parse_tree__prog_event__succeeded = ((MR_tag((MR_Word) parse_tree__prog_event__V_65_65)) == (MR_mktag((MR_Integer) 2)));
                              if (parse_tree__prog_event__succeeded)
                                parse_tree__prog_event__FuncAttrPurity_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__V_65_65, (MR_Integer) 0)));
                            }
                          if (parse_tree__prog_event__succeeded)
                            {
                              MR_Word parse_tree__prog_event__FuncPurity_49;
                              MR_Word parse_tree__prog_event__FuncAttrType_50;
                              MR_Word parse_tree__prog_event__OldFuncAttrType_51;
                              MR_Box parse_tree__prog_event__conv4_OldFuncAttrType_51;

                              switch (parse_tree__prog_event__FuncAttrPurity_48) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  parse_tree__prog_event__FuncPurity_49 = (MR_Integer) 2;
                                  break;
                                case (MR_Integer) 0:
                                  parse_tree__prog_event__FuncPurity_49 = (MR_Integer) 0;
                                  break;
                              }
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              {
                                parse_tree__prog_type__construct_higher_order_func_type_5_p_0(parse_tree__prog_event__FuncPurity_49, parse_tree__prog_event__ArgTypes_46, parse_tree__prog_event__AttrType_45, &parse_tree__prog_event__FuncAttrType_50);
                              }
                              {
                                parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, parse_tree__prog_event__TypeCtorInfo_140_140, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), &parse_tree__prog_event__conv4_OldFuncAttrType_51);
                              }
                              if (parse_tree__prog_event__succeeded)
                                {
                                  parse_tree__prog_event__OldFuncAttrType_51 = ((MR_Word) parse_tree__prog_event__conv4_OldFuncAttrType_51);
                                  parse_tree__prog_event__succeeded = MR_TRUE;
                                }
                              if (parse_tree__prog_event__succeeded)
                                {
                                  {
                                    parse_tree__prog_event__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_event__FuncAttrType_50, parse_tree__prog_event__OldFuncAttrType_51);
                                  }
                                  if (parse_tree__prog_event__succeeded)
                                    parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
                                  else
                                    {
                                      MR_Integer parse_tree__prog_event__FuncAttrLineNumber_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 2)));
                                      MR_Word parse_tree__prog_event__Pieces_53;
                                      MR_Word parse_tree__prog_event__ErrorSpec_54;
                                      MR_Word parse_tree__prog_event__V_69_69;
                                      MR_Word parse_tree__prog_event__V_70_70;
                                      MR_Word parse_tree__prog_event__V_82_82;
                                      MR_Word parse_tree__prog_event__V_83_83;
                                      MR_Word parse_tree__prog_event__V_84_84;
                                      MR_Word parse_tree__prog_event__V_85_85;
                                      MR_Word parse_tree__prog_event__V_86_86;
                                      MR_Integer parse_tree__prog_event__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 0)));
                                      MR_String parse_tree__prog_event__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 1)));
                                      MR_Word parse_tree__prog_event__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__FuncAttrInfo_47, (MR_Integer) 3)));

                                      {
                                        parse_tree__prog_event__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                        MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_70_70, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_40));
                                      }
                                      {
                                        parse_tree__prog_event__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_69_69, 0) = ((MR_Box) (parse_tree__prog_event__V_70_70));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[16])));
                                      }
                                      {
                                        parse_tree__prog_event__Pieces_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_53, 1) = ((MR_Box) (parse_tree__prog_event__V_69_69));
                                      }
                                      {
                                        parse_tree__prog_event__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrLineNumber_52));
                                      }
                                      {
                                        parse_tree__prog_event__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_86_86, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_53));
                                      }
                                      {
                                        parse_tree__prog_event__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_85_85, 0) = ((MR_Box) (parse_tree__prog_event__V_86_86));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        parse_tree__prog_event__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_83_83, 0) = ((MR_Box) (parse_tree__prog_event__V_84_84));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_83_83, 1) = ((MR_Box) (parse_tree__prog_event__V_85_85));
                                      }
                                      {
                                        parse_tree__prog_event__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 0) = ((MR_Box) (parse_tree__prog_event__V_83_83));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        parse_tree__prog_event__ErrorSpec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                        MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_54, 2) = ((MR_Box) (parse_tree__prog_event__V_82_82));
                                      }
                                      {
                                        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_54));
                                        MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
                                      }
                                    }
                                  parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
                                }
                              else
                                {
                                  {
                                    mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, parse_tree__prog_event__TypeCtorInfo_140_140, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), ((MR_Box) (parse_tree__prog_event__FuncAttrType_50)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120);
                                  }
                                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
                                }
                            }
                          else
                            {
                              MR_Word parse_tree__prog_event__V_93_93;
                              MR_Word parse_tree__prog_event__V_94_94;
                              MR_Word parse_tree__prog_event__V_95_95;
                              MR_Word parse_tree__prog_event__V_98_98;
                              MR_Word parse_tree__prog_event__V_101_101;
                              MR_Word parse_tree__prog_event__V_102_102;
                              MR_Word parse_tree__prog_event__V_111_111;
                              MR_Word parse_tree__prog_event__V_112_112;
                              MR_Word parse_tree__prog_event__V_113_113;
                              MR_Word parse_tree__prog_event__V_114_114;
                              MR_Word parse_tree__prog_event__V_115_115;
                              MR_Word parse_tree__prog_event__Pieces_125;
                              MR_Word parse_tree__prog_event__ErrorSpec_126;

                              {
                                parse_tree__prog_event__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_94_94, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_34));
                              }
                              {
                                parse_tree__prog_event__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_102_102, 1) = ((MR_Box) (parse_tree__prog_event__FuncAttrName_40));
                              }
                              {
                                parse_tree__prog_event__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_101_101, 0) = ((MR_Box) (parse_tree__prog_event__V_102_102));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
                              }
                              {
                                parse_tree__prog_event__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_98_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[30])));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_98_98, 1) = ((MR_Box) (parse_tree__prog_event__V_101_101));
                              }
                              {
                                parse_tree__prog_event__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[29])));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 1) = ((MR_Box) (parse_tree__prog_event__V_98_98));
                              }
                              {
                                parse_tree__prog_event__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 0) = ((MR_Box) (parse_tree__prog_event__V_94_94));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 1) = ((MR_Box) (parse_tree__prog_event__V_95_95));
                              }
                              {
                                parse_tree__prog_event__Pieces_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[28])));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_125, 1) = ((MR_Box) (parse_tree__prog_event__V_93_93));
                              }
                              {
                                parse_tree__prog_event__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_113_113, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_113_113, 1) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_35));
                              }
                              {
                                parse_tree__prog_event__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_115_115, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_125));
                              }
                              {
                                parse_tree__prog_event__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_114_114, 0) = ((MR_Box) (parse_tree__prog_event__V_115_115));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                parse_tree__prog_event__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_112_112, 0) = ((MR_Box) (parse_tree__prog_event__V_113_113));
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_112_112, 1) = ((MR_Box) (parse_tree__prog_event__V_114_114));
                              }
                              {
                                parse_tree__prog_event__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_111_111, 0) = ((MR_Box) (parse_tree__prog_event__V_112_112));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                parse_tree__prog_event__ErrorSpec_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_126, 2) = ((MR_Box) (parse_tree__prog_event__V_111_111));
                              }
                              {
                                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_126));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10));
                              }
                              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
                            }
                        }
                      else
                        {
                          parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
                          parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
                        }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_event__V_119_119;

                      {
                        parse_tree__prog_event__V_119_119 = parse_tree__builtin_lib_types__void_type_0_f_0();
                      }
                      {
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_135_135, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__FuncAttrName_40)), ((MR_Box) (parse_tree__prog_event__V_119_119)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120);
                      }
                      {
                        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_event__AttrErrorSpecs_42, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6;
                  parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8;
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_event__HeadVar__5__tmp_copy_5 = parse_tree__prog_event__AttrTerms_30;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_6 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_120_120;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_62_62;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_121_121;

              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_10 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_10;
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_8 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_8;
              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_6 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_6;
              parse_tree__prog_event__HeadVar__5_5 = parse_tree__prog_event__HeadVar__5__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_event__build_plain_type_map_17_p_0(
  MR_String parse_tree__prog_event__EventName_1,
  MR_String parse_tree__prog_event__FileName_2,
  MR_Integer parse_tree__prog_event__EventLineNumber_3,
  MR_Word parse_tree__prog_event__HeadVar__4_4,
  MR_Integer parse_tree__prog_event__AttrNum_5,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_KeyMap_13,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_DepRel_15,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_event__succeeded;

        if ((parse_tree__prog_event__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_17 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16;
            *parse_tree__prog_event__STATE_VARIABLE_DepRel_15 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14;
            *parse_tree__prog_event__STATE_VARIABLE_KeyMap_13 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12;
            *parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_11 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
            *parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_9 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8;
            *parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_7 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6;
          }
        else
          {
            MR_Word parse_tree__prog_event__TypeCtorInfo_116_116;
            MR_Word parse_tree__prog_event__TypeCtorInfo_117_117;
            MR_Word parse_tree__prog_event__AttrTerm_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__AttrTerms_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__4_4, (MR_Integer) 1)));
            MR_String parse_tree__prog_event__AttrName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 0)));
            MR_Integer parse_tree__prog_event__AttrLineNumber_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__AttrTypeTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrTerm_43, (MR_Integer) 2)));
            MR_Word parse_tree__prog_event__AttrInfo_55;
            MR_Word parse_tree__prog_event__AttrKey_56;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106;
            MR_Integer parse_tree__prog_event__V_107_107;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78;

            {
              parse_tree__prog_event__AttrInfo_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_5));
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_52));
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 2) = ((MR_Box) (parse_tree__prog_event__AttrLineNumber_53));
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__AttrInfo_55, 3) = ((MR_Box) (parse_tree__prog_event__AttrTypeTerm_54));
            }
            parse_tree__prog_event__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(parse_tree__prog_event__TypeCtorInfo_116_116, parse_tree__prog_event__AttrNum_5, ((MR_Box) (parse_tree__prog_event__AttrInfo_55)), parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6, &parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76);
            }
            parse_tree__prog_event__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__digraph__add_vertex_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__AttrKey_56, parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14, &parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77);
            }
            {
              parse_tree__prog_event__succeeded = mercury__bimap__insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_event_scalar_common_1[0], ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__AttrKey_56)), parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12, &parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78);
            }
            if (parse_tree__prog_event__succeeded)
              {
                parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_78_78;
                {
                  mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, parse_tree__prog_event__TypeCtorInfo_116_116, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__AttrInfo_55)), parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8, &parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79);
                }
                parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16;
              }
            else
              {
                MR_Word parse_tree__prog_event__Pieces_57;
                MR_Word parse_tree__prog_event__ErrorSpec_58;
                MR_Word parse_tree__prog_event__V_82_82;
                MR_Word parse_tree__prog_event__V_83_83;
                MR_Word parse_tree__prog_event__V_84_84;
                MR_Word parse_tree__prog_event__V_87_87;
                MR_Word parse_tree__prog_event__V_88_88;
                MR_Word parse_tree__prog_event__V_97_97;
                MR_Word parse_tree__prog_event__V_98_98;
                MR_Word parse_tree__prog_event__V_99_99;
                MR_Word parse_tree__prog_event__V_100_100;
                MR_Word parse_tree__prog_event__V_101_101;

                {
                  parse_tree__prog_event__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_83_83, 1) = ((MR_Box) (parse_tree__prog_event__EventName_1));
                }
                {
                  parse_tree__prog_event__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_88_88, 1) = ((MR_Box) (parse_tree__prog_event__AttrName_52));
                }
                {
                  parse_tree__prog_event__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_87_87, 0) = ((MR_Box) (parse_tree__prog_event__V_88_88));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
                }
                {
                  parse_tree__prog_event__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[27])));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_84_84, 1) = ((MR_Box) (parse_tree__prog_event__V_87_87));
                }
                {
                  parse_tree__prog_event__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 0) = ((MR_Box) (parse_tree__prog_event__V_83_83));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_82_82, 1) = ((MR_Box) (parse_tree__prog_event__V_84_84));
                }
                {
                  parse_tree__prog_event__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[26])));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_event__V_82_82));
                }
                {
                  parse_tree__prog_event__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_99_99, 0) = ((MR_Box) (parse_tree__prog_event__FileName_2));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_99_99, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_3));
                }
                {
                  parse_tree__prog_event__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_101_101, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_57));
                }
                {
                  parse_tree__prog_event__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_100_100, 0) = ((MR_Box) (parse_tree__prog_event__V_101_101));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_event__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_98_98, 0) = ((MR_Box) (parse_tree__prog_event__V_99_99));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_98_98, 1) = ((MR_Box) (parse_tree__prog_event__V_100_100));
                }
                {
                  parse_tree__prog_event__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_97_97, 0) = ((MR_Box) (parse_tree__prog_event__V_98_98));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_event__ErrorSpec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_58, 2) = ((MR_Box) (parse_tree__prog_event__V_97_97));
                }
                {
                  parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_58));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16));
                }
                parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12;
                parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8;
              }
            switch (MR_tag((MR_Word) parse_tree__prog_event__AttrTypeTerm_54)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_event__TypeTerm_59 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_event__AttrTypeTerm_54), (MR_Integer) 0);
                  MR_Word parse_tree__prog_event__Type_61;
                  MR_Word parse_tree__prog_event___OldType_62;
                  MR_Box parse_tree__prog_event__conv0__OldType_62;

                  {
                    parse_tree__prog_event__Type_61 = parse_tree__prog_event__convert_term_to_type_1_f_0(parse_tree__prog_event__TypeTerm_59);
                  }
                  {
                    parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__conv0__OldType_62);
                  }
                  if (parse_tree__prog_event__succeeded)
                    {
                      parse_tree__prog_event___OldType_62 = ((MR_Word) parse_tree__prog_event__conv0__OldType_62);
                      parse_tree__prog_event__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_event__succeeded)
                    parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
                  else
                    {
                      {
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__Type_61)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__TypeTerm_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_54, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_event__Type_129;
                  MR_Word parse_tree__prog_event___SynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__AttrTypeTerm_54, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_event___OldType_121;
                  MR_Box parse_tree__prog_event__conv1__OldType_121;

                  {
                    parse_tree__prog_event__Type_129 = parse_tree__prog_event__convert_term_to_type_1_f_0(parse_tree__prog_event__TypeTerm_128);
                  }
                  {
                    parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, ((MR_Box) (parse_tree__prog_event__AttrName_52)), &parse_tree__prog_event__conv1__OldType_121);
                  }
                  if (parse_tree__prog_event__succeeded)
                    {
                      parse_tree__prog_event___OldType_121 = ((MR_Word) parse_tree__prog_event__conv1__OldType_121);
                      parse_tree__prog_event__succeeded = MR_TRUE;
                    }
                  if (parse_tree__prog_event__succeeded)
                    parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
                  else
                    {
                      {
                        mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_117_117, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (parse_tree__prog_event__AttrName_52)), ((MR_Box) (parse_tree__prog_event__Type_129)), parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10, &parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10;
                break;
            }
            parse_tree__prog_event__V_107_107 = (parse_tree__prog_event__AttrNum_5 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_event__HeadVar__4__tmp_copy_4 = parse_tree__prog_event__AttrTerms_44;
              MR_Integer parse_tree__prog_event__AttrNum__tmp_copy_5 = parse_tree__prog_event__V_107_107;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0__tmp_copy_6 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_76_76;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0__tmp_copy_8 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_79_79;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_10 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_106_106;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_KeyMap_0__tmp_copy_12 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_105_105;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_14 = parse_tree__prog_event__STATE_VARIABLE_DepRel_77_77;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_16 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_104_104;

              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_16 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_16;
              parse_tree__prog_event__STATE_VARIABLE_DepRel_0_14 = parse_tree__prog_event__STATE_VARIABLE_DepRel_0__tmp_copy_14;
              parse_tree__prog_event__STATE_VARIABLE_KeyMap_0_12 = parse_tree__prog_event__STATE_VARIABLE_KeyMap_0__tmp_copy_12;
              parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0_10 = parse_tree__prog_event__STATE_VARIABLE_AttrTypeMap_0__tmp_copy_10;
              parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0_8 = parse_tree__prog_event__STATE_VARIABLE_AttrNameMap_0__tmp_copy_8;
              parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0_6 = parse_tree__prog_event__STATE_VARIABLE_AttrNumMap_0__tmp_copy_6;
              parse_tree__prog_event__AttrNum_5 = parse_tree__prog_event__AttrNum__tmp_copy_5;
              parse_tree__prog_event__HeadVar__4_4 = parse_tree__prog_event__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
parse_tree__prog_event__attr_info_number_1_f_0(
  MR_Word parse_tree__prog_event__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Integer parse_tree__prog_event__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 0)));
    MR_String parse_tree__prog_event__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_event__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__HeadVar__1_1, (MR_Integer) 3)));

    return parse_tree__prog_event__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(
  MR_Word parse_tree__prog_event__AttrMap_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word * parse_tree__prog_event__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

    if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_event__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String parse_tree__prog_event__AttrName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_event__AttrNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__SynthAttrNumsTail_9;
        MR_Integer parse_tree__prog_event__AttrNum_10;
        MR_Word parse_tree__prog_event__AttrType_13;
        MR_Word parse_tree__prog_event__V_18_18;
        MR_Box parse_tree__prog_event__conv0_V_18_18;
        MR_String parse_tree__prog_event__V_11_11;
        MR_Integer parse_tree__prog_event__V_12_12;

        {
          parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(parse_tree__prog_event__AttrMap_1, parse_tree__prog_event__AttrNames_7, &parse_tree__prog_event__SynthAttrNumsTail_9);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0, parse_tree__prog_event__AttrMap_1, ((MR_Box) (parse_tree__prog_event__AttrName_6)), &parse_tree__prog_event__conv0_V_18_18);
        }
        parse_tree__prog_event__V_18_18 = ((MR_Word) parse_tree__prog_event__conv0_V_18_18);
        parse_tree__prog_event__AttrNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 0)));
        parse_tree__prog_event__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 1)));
        parse_tree__prog_event__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 2)));
        parse_tree__prog_event__AttrType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_18_18, (MR_Integer) 3)));
        switch (MR_tag((MR_Word) parse_tree__prog_event__AttrType_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__prog_event__HeadVar__3_3 = parse_tree__prog_event__SynthAttrNumsTail_9;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_event__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__AttrNum_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_event__SynthAttrNumsTail_9));
            }
            break;
          case (MR_Integer) 2:
            *parse_tree__prog_event__HeadVar__3_3 = parse_tree__prog_event__SynthAttrNumsTail_9;
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_event__convert_term_to_spec_map_6_p_0(
  MR_String parse_tree__prog_event__FileName_7,
  MR_Word parse_tree__prog_event__SpecTerm_8,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_attr_info_0;
    MR_Word parse_tree__prog_event__TypeCtorInfo_110_110;
    MR_String parse_tree__prog_event__EventName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 0)));
    MR_Integer parse_tree__prog_event__EventNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 1)));
    MR_Integer parse_tree__prog_event__EventLineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 2)));
    MR_Word parse_tree__prog_event__AttrTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__SpecTerm_8, (MR_Integer) 3)));
    MR_Word parse_tree__prog_event__AttrNameMap_16;
    MR_Word parse_tree__prog_event__AttrTypeMap0_17;
    MR_Word parse_tree__prog_event__KeyMap_18;
    MR_Word parse_tree__prog_event__DepRel0_19;
    MR_Word parse_tree__prog_event__AttrTypeMap_20;
    MR_Word parse_tree__prog_event__DepRel_21;
    MR_Word parse_tree__prog_event__RevAttrs_22;
    MR_Word parse_tree__prog_event__SynthAttrNumOrder_24;
    MR_Word parse_tree__prog_event__Attrs_27;
    MR_Word parse_tree__prog_event__EventSpec_28;
    MR_Word parse_tree__prog_event__V_39_39;
    MR_Word parse_tree__prog_event__V_40_40;
    MR_Word parse_tree__prog_event__V_41_41;
    MR_Word parse_tree__prog_event__V_42_42;
    MR_Word parse_tree__prog_event__V_43_43;
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44;
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45;
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48;
    MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
    MR_Word parse_tree__prog_event___AttrNumMap_15;
    MR_Word parse_tree__prog_event__AllAttrNameOrder_23;
    MR_Word parse_tree__prog_event__OldEventSpec_29;
    MR_Box parse_tree__prog_event__conv0_OldEventSpec_29;

    {
      parse_tree__prog_event__V_39_39 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_event__TypeCtorInfo_109_109);
    }
    parse_tree__prog_event__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__prog_event__V_40_40 = mercury__map__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__TypeCtorInfo_109_109);
    }
    {
      parse_tree__prog_event__V_41_41 = mercury__map__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
    {
      parse_tree__prog_event__V_42_42 = mercury__bimap__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_event_scalar_common_1[0]);
    }
    {
      parse_tree__prog_event__V_43_43 = mercury__digraph__init_0_f_0(parse_tree__prog_event__TypeCtorInfo_110_110);
    }
    {
      parse_tree__prog_event__build_plain_type_map_17_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__EventLineNumber_13, parse_tree__prog_event__AttrTerms_14, (MR_Integer) 0, parse_tree__prog_event__V_39_39, &parse_tree__prog_event___AttrNumMap_15, parse_tree__prog_event__V_40_40, &parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__V_41_41, &parse_tree__prog_event__AttrTypeMap0_17, parse_tree__prog_event__V_42_42, &parse_tree__prog_event__KeyMap_18, parse_tree__prog_event__V_43_43, &parse_tree__prog_event__DepRel0_19, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_36, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44);
    }
    {
      parse_tree__prog_event__build_dep_map_11_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__KeyMap_18, parse_tree__prog_event__AttrTerms_14, parse_tree__prog_event__AttrTypeMap0_17, &parse_tree__prog_event__AttrTypeMap_20, parse_tree__prog_event__DepRel0_19, &parse_tree__prog_event__DepRel_21, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_44_44, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45);
    }
    {
      parse_tree__prog_event__convert_terms_to_attrs_10_p_0(parse_tree__prog_event__EventName_11, parse_tree__prog_event__FileName_7, parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__AttrTypeMap_20, (MR_Integer) 0, parse_tree__prog_event__AttrTerms_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_event__RevAttrs_22, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_45_45, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48);
    }
    {
      parse_tree__prog_event__succeeded = mercury__digraph__tsort_2_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, parse_tree__prog_event__DepRel_21, &parse_tree__prog_event__AllAttrNameOrder_23);
    }
    if (parse_tree__prog_event__succeeded)
      {
        {
          parse_tree__prog_event__keep_only_synth_attr_nums_3_p_0(parse_tree__prog_event__AttrNameMap_16, parse_tree__prog_event__AllAttrNameOrder_23, &parse_tree__prog_event__SynthAttrNumOrder_24);
        }
        parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48;
      }
    else
      {
        MR_Word parse_tree__prog_event__Pieces_25;
        MR_Word parse_tree__prog_event__CircErrorSpec_26;
        MR_Word parse_tree__prog_event__V_51_51;
        MR_Word parse_tree__prog_event__V_54_54;
        MR_Word parse_tree__prog_event__V_55_55;
        MR_Word parse_tree__prog_event__V_64_64;
        MR_Word parse_tree__prog_event__V_65_65;
        MR_Word parse_tree__prog_event__V_66_66;
        MR_Word parse_tree__prog_event__V_67_67;
        MR_Word parse_tree__prog_event__V_68_68;

        {
          parse_tree__prog_event__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_55_55, 1) = ((MR_Box) (parse_tree__prog_event__EventName_11));
        }
        {
          parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
        }
        {
          parse_tree__prog_event__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_51_51, 1) = ((MR_Box) (parse_tree__prog_event__V_54_54));
        }
        {
          parse_tree__prog_event__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[22])));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_25, 1) = ((MR_Box) (parse_tree__prog_event__V_51_51));
        }
        {
          parse_tree__prog_event__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_66_66, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
        }
        {
          parse_tree__prog_event__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_68_68, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_25));
        }
        {
          parse_tree__prog_event__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 0) = ((MR_Box) (parse_tree__prog_event__V_68_68));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 0) = ((MR_Box) (parse_tree__prog_event__V_66_66));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_65_65, 1) = ((MR_Box) (parse_tree__prog_event__V_67_67));
        }
        {
          parse_tree__prog_event__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 0) = ((MR_Box) (parse_tree__prog_event__V_65_65));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__CircErrorSpec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__CircErrorSpec_26, 2) = ((MR_Box) (parse_tree__prog_event__V_64_64));
        }
        {
          parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 0) = ((MR_Box) (parse_tree__prog_event__CircErrorSpec_26));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_48_48));
        }
        parse_tree__prog_event__SynthAttrNumOrder_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    {
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, parse_tree__prog_event__RevAttrs_22, &parse_tree__prog_event__Attrs_27);
    }
    {
      parse_tree__prog_event__EventSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 0) = ((MR_Box) (parse_tree__prog_event__EventNumber_12));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 1) = ((MR_Box) (parse_tree__prog_event__EventName_11));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 2) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 3) = ((MR_Box) (parse_tree__prog_event__Attrs_27));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_28, 4) = ((MR_Box) (parse_tree__prog_event__SynthAttrNumOrder_24));
    }
    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34, ((MR_Box) (parse_tree__prog_event__EventName_11)), &parse_tree__prog_event__conv0_OldEventSpec_29);
    }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__OldEventSpec_29 = ((MR_Word) parse_tree__prog_event__conv0_OldEventSpec_29);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_event__succeeded)
      {
        MR_Integer parse_tree__prog_event__OldLineNumber_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 2)));
        MR_Word parse_tree__prog_event__Pieces1_31;
        MR_Word parse_tree__prog_event__DuplErrorSpec_33;
        MR_Word parse_tree__prog_event__V_74_74;
        MR_Word parse_tree__prog_event__V_75_75;
        MR_Word parse_tree__prog_event__V_89_89;
        MR_Word parse_tree__prog_event__V_90_90;
        MR_Word parse_tree__prog_event__V_91_91;
        MR_Word parse_tree__prog_event__V_92_92;
        MR_Word parse_tree__prog_event__V_93_93;
        MR_Word parse_tree__prog_event__V_95_95;
        MR_Word parse_tree__prog_event__V_96_96;
        MR_Word parse_tree__prog_event__V_97_97;
        MR_Integer parse_tree__prog_event__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 0)));
        MR_String parse_tree__prog_event__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 1)));
        MR_Word parse_tree__prog_event__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 3)));
        MR_Word parse_tree__prog_event__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__OldEventSpec_29, (MR_Integer) 4)));

        {
          parse_tree__prog_event__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_75_75, 1) = ((MR_Box) (parse_tree__prog_event__EventName_11));
        }
        {
          parse_tree__prog_event__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_74_74, 0) = ((MR_Box) (parse_tree__prog_event__V_75_75));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[10])));
        }
        {
          parse_tree__prog_event__Pieces1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces1_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_event_scalar_common_1[24])));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces1_31, 1) = ((MR_Box) (parse_tree__prog_event__V_74_74));
        }
        {
          parse_tree__prog_event__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_91_91, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_91_91, 1) = ((MR_Box) (parse_tree__prog_event__EventLineNumber_13));
        }
        {
          parse_tree__prog_event__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_93_93, 0) = ((MR_Box) (parse_tree__prog_event__Pieces1_31));
        }
        {
          parse_tree__prog_event__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_92_92, 0) = ((MR_Box) (parse_tree__prog_event__V_93_93));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_90_90, 0) = ((MR_Box) (parse_tree__prog_event__V_91_91));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_90_90, 1) = ((MR_Box) (parse_tree__prog_event__V_92_92));
        }
        {
          parse_tree__prog_event__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_97_97, 0) = ((MR_Box) (parse_tree__prog_event__FileName_7));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_97_97, 1) = ((MR_Box) (parse_tree__prog_event__OldLineNumber_30));
        }
        {
          parse_tree__prog_event__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_96_96, 0) = ((MR_Box) (parse_tree__prog_event__V_97_97));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[25])));
        }
        {
          parse_tree__prog_event__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 0) = ((MR_Box) (parse_tree__prog_event__V_96_96));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 0) = ((MR_Box) (parse_tree__prog_event__V_90_90));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 1) = ((MR_Box) (parse_tree__prog_event__V_95_95));
        }
        {
          parse_tree__prog_event__DuplErrorSpec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__DuplErrorSpec_33, 2) = ((MR_Box) (parse_tree__prog_event__V_89_89));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__DuplErrorSpec_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71));
        }
        *parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34;
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0(parse_tree__prog_event__TypeCtorInfo_110_110, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, ((MR_Box) (parse_tree__prog_event__EventName_11)), ((MR_Box) (parse_tree__prog_event__EventSpec_28)), parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_34, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_35);
        }
        *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_37 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_71_71;
      }
  }
}

static void MR_CALL 
parse_tree__prog_event__convert_list_to_spec_map_6_p_0(
  MR_String parse_tree__prog_event__FileName_1,
  MR_Word parse_tree__prog_event__HeadVar__2_2,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4,
  MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5,
  MR_Word * parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_event__succeeded;

        if ((parse_tree__prog_event__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_6 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5;
            *parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_4 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3;
          }
        else
          {
            MR_Word parse_tree__prog_event__SpecTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__SpecTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23;
            MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24;

            {
              parse_tree__prog_event__convert_term_to_spec_map_6_p_0(parse_tree__prog_event__FileName_1, parse_tree__prog_event__SpecTerm_15, parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3, &parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23, parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5, &parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_event__HeadVar__2__tmp_copy_2 = parse_tree__prog_event__SpecTerms_16;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0__tmp_copy_3 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_23_23;
              MR_Word parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_5 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_24_24;

              parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0_5 = parse_tree__prog_event__STATE_VARIABLE_ErrorSpecs_0__tmp_copy_5;
              parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0_3 = parse_tree__prog_event__STATE_VARIABLE_EventSpecMap_0__tmp_copy_3;
              parse_tree__prog_event__HeadVar__2_2 = parse_tree__prog_event__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__prog_event__read_specs_file_5_p_0(
  MR_String parse_tree__prog_event__SpecsFileName_1,
  MR_String parse_tree__prog_event__TermFileName_2,
  MR_String * parse_tree__prog_event__Problem_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;

{
#define MR_PROC_LABEL parse_tree__prog_event__read_specs_file_5_p_0

	MR_String SpecsFileName;
	MR_String TermFileName;
	MR_String Problem;

	SpecsFileName =  parse_tree__prog_event__SpecsFileName_1 ;
	TermFileName =  parse_tree__prog_event__TermFileName_2 ;
		{

    /*
    ** We need to save/restore MR_hp so that we can allocate the return
    ** value on Mercury's heap if necessary.
    */
    MR_save_transient_hp();
    Problem = read_specs_file_2(MR_ALLOC_ID, SpecsFileName, TermFileName);
    MR_restore_transient_hp();


		;}
#undef MR_PROC_LABEL
	 *parse_tree__prog_event__Problem_3  = Problem;
}
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv1_HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event__project_event_arg_mode_2_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv1_HeadVar__2_2);
    }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_HeadVar__2_2));
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_event__event_arg_modes_3_p_0(
  MR_Word parse_tree__prog_event__EventSpecMap_4,
  MR_String parse_tree__prog_event__EventName_5,
  MR_Word * parse_tree__prog_event__ArgModes_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__TypeCtorInfo_11_11;
    MR_Word parse_tree__prog_event__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_event__Attributes_7;
    MR_Word parse_tree__prog_event__V_8_8;
    MR_Word parse_tree__prog_event__EventSpec_16;
    MR_Box parse_tree__prog_event__conv0_EventSpec_16;
    MR_Integer parse_tree__prog_event__V_17_17;
    MR_String parse_tree__prog_event__V_18_18;
    MR_Integer parse_tree__prog_event__V_19_19;
    MR_Word parse_tree__prog_event__V_20_20;

    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_16);
    }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__EventSpec_16 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_16);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 0)));
        parse_tree__prog_event__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 1)));
        parse_tree__prog_event__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 2)));
        parse_tree__prog_event__Attributes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 3)));
        parse_tree__prog_event__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 4)));
        parse_tree__prog_event__V_8_8 = (MR_Word) &parse_tree__prog_event_scalar_common_2[9];
        parse_tree__prog_event__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
        parse_tree__prog_event__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__filter_map_3_p_0(parse_tree__prog_event__TypeCtorInfo_11_11, parse_tree__prog_event__TypeCtorInfo_12_12, parse_tree__prog_event__V_8_8, parse_tree__prog_event__Attributes_7, parse_tree__prog_event__ArgModes_6);
        }
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box * parse_tree__prog_event__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv1_HeadVar__2_2;

    {
      parse_tree__prog_event__succeeded = parse_tree__prog_event__project_event_arg_type_2_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), &parse_tree__prog_event__conv1_HeadVar__2_2);
    }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_HeadVar__2_2));
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_event__event_arg_types_3_p_0(
  MR_Word parse_tree__prog_event__EventSpecMap_4,
  MR_String parse_tree__prog_event__EventName_5,
  MR_Word * parse_tree__prog_event__ArgTypes_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__TypeCtorInfo_11_11;
    MR_Word parse_tree__prog_event__TypeCtorInfo_12_12;
    MR_Word parse_tree__prog_event__Attributes_7;
    MR_Word parse_tree__prog_event__V_8_8;
    MR_Word parse_tree__prog_event__EventSpec_16;
    MR_Box parse_tree__prog_event__conv0_EventSpec_16;
    MR_Integer parse_tree__prog_event__V_17_17;
    MR_String parse_tree__prog_event__V_18_18;
    MR_Integer parse_tree__prog_event__V_19_19;
    MR_Word parse_tree__prog_event__V_20_20;

    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_16);
    }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__EventSpec_16 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_16);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 0)));
        parse_tree__prog_event__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 1)));
        parse_tree__prog_event__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 2)));
        parse_tree__prog_event__Attributes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 3)));
        parse_tree__prog_event__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_16, (MR_Integer) 4)));
        parse_tree__prog_event__V_8_8 = (MR_Word) &parse_tree__prog_event_scalar_common_2[8];
        parse_tree__prog_event__TypeCtorInfo_11_11 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
        parse_tree__prog_event__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        {
          mercury__list__filter_map_3_p_0(parse_tree__prog_event__TypeCtorInfo_11_11, parse_tree__prog_event__TypeCtorInfo_12_12, parse_tree__prog_event__V_8_8, parse_tree__prog_event__Attributes_7, parse_tree__prog_event__ArgTypes_6);
        }
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_event__event_attributes_3_p_0(
  MR_Word parse_tree__prog_event__EventSpecMap_4,
  MR_String parse_tree__prog_event__EventName_5,
  MR_Word * parse_tree__prog_event__Attributes_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__EventSpec_7;
    MR_Box parse_tree__prog_event__conv0_EventSpec_7;
    MR_Integer parse_tree__prog_event__V_8_8;
    MR_String parse_tree__prog_event__V_9_9;
    MR_Integer parse_tree__prog_event__V_10_10;
    MR_Word parse_tree__prog_event__V_11_11;

    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_7);
    }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__EventSpec_7 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_7);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 0)));
        parse_tree__prog_event__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 1)));
        parse_tree__prog_event__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 2)));
        *parse_tree__prog_event__Attributes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 3)));
        parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 4)));
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_event__event_number_3_p_0(
  MR_Word parse_tree__prog_event__EventSpecMap_4,
  MR_String parse_tree__prog_event__EventName_5,
  MR_Integer * parse_tree__prog_event__EventNumber_6)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__EventSpec_7;
    MR_Box parse_tree__prog_event__conv0_EventSpec_7;
    MR_String parse_tree__prog_event__V_8_8;
    MR_Integer parse_tree__prog_event__V_9_9;
    MR_Word parse_tree__prog_event__V_10_10;
    MR_Word parse_tree__prog_event__V_11_11;

    {
      parse_tree__prog_event__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, parse_tree__prog_event__EventSpecMap_4, ((MR_Box) (parse_tree__prog_event__EventName_5)), &parse_tree__prog_event__conv0_EventSpec_7);
    }
    if (parse_tree__prog_event__succeeded)
      {
        parse_tree__prog_event__EventSpec_7 = ((MR_Word) parse_tree__prog_event__conv0_EventSpec_7);
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    if (parse_tree__prog_event__succeeded)
      {
        *parse_tree__prog_event__EventNumber_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 0)));
        parse_tree__prog_event__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 1)));
        parse_tree__prog_event__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 2)));
        parse_tree__prog_event__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 3)));
        parse_tree__prog_event__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSpec_7, (MR_Integer) 4)));
        parse_tree__prog_event__succeeded = MR_TRUE;
      }
    return parse_tree__prog_event__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_3(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box * parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Integer parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9;

    {
      parse_tree__prog_event__update_max_num_attr_3_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Integer) parse_tree__prog_event__wrapper_arg_2), &parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9);
    }
    *parse_tree__prog_event__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_event__conv2_STATE_VARIABLE_MaxNumAttr_9));
  }
}

static MR_Box MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_2(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1)
{
  {
    MR_Box parse_tree__prog_event__wrapper_arg_2;
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_String parse_tree__prog_event__conv1_Desc_4;

    {
      parse_tree__prog_event__conv1_Desc_4 = parse_tree__prog_event__describe_event_spec_1_f_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1));
    }
    parse_tree__prog_event__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_event__conv1_Desc_4));
    return parse_tree__prog_event__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0_1(
  MR_Box parse_tree__prog_event__closure_arg,
  MR_Box parse_tree__prog_event__wrapper_arg_1,
  MR_Box parse_tree__prog_event__wrapper_arg_2,
  MR_Box * parse_tree__prog_event__wrapper_arg_3)
{
  {
    MR_Box parse_tree__prog_event__closure = parse_tree__prog_event__closure_arg;
    MR_Word parse_tree__prog_event__conv0_Result_6;

    {
      parse_tree__prog_event__compare_event_specs_by_num_3_p_0(((MR_Word) parse_tree__prog_event__wrapper_arg_1), ((MR_Word) parse_tree__prog_event__wrapper_arg_2), &parse_tree__prog_event__conv0_Result_6);
    }
    *parse_tree__prog_event__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_event__conv0_Result_6));
  }
}

MR_Word MR_CALL 
parse_tree__prog_event__derive_event_set_data_1_f_0(
  MR_Word parse_tree__prog_event__EventSet_3)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_Word parse_tree__prog_event__EventSetData_4;
    MR_Word parse_tree__prog_event__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word parse_tree__prog_event__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
    MR_String parse_tree__prog_event__EventSetName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSet_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_event__EventSpecMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSet_3, (MR_Integer) 1)));
    MR_Word parse_tree__prog_event__EventSpecList_7;
    MR_Word parse_tree__prog_event__SortedEventSpecList_8;
    MR_Word parse_tree__prog_event__EventDescStrings_9;
    MR_String parse_tree__prog_event__EventDescs_10;
    MR_String parse_tree__prog_event__Desc_11;
    MR_Integer parse_tree__prog_event__MaxNumAttr_12;
    MR_String parse_tree__prog_event__V_16_16;
    MR_String parse_tree__prog_event__V_17_17;
    MR_Box parse_tree__prog_event__conv3_MaxNumAttr_12;

    {
      mercury__map__values_2_p_0(parse_tree__prog_event__TypeCtorInfo_21_21, parse_tree__prog_event__TypeCtorInfo_22_22, parse_tree__prog_event__EventSpecMap_6, &parse_tree__prog_event__EventSpecList_7);
    }
    {
      mercury__list__sort_3_p_0(parse_tree__prog_event__TypeCtorInfo_22_22, (MR_Word) &parse_tree__prog_event_scalar_common_2[5], parse_tree__prog_event__EventSpecList_7, &parse_tree__prog_event__SortedEventSpecList_8);
    }
    {
      parse_tree__prog_event__EventDescStrings_9 = mercury__list__map_2_f_0(parse_tree__prog_event__TypeCtorInfo_22_22, parse_tree__prog_event__TypeCtorInfo_21_21, (MR_Word) &parse_tree__prog_event_scalar_common_2[6], parse_tree__prog_event__SortedEventSpecList_8);
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_event__EventDescStrings_9, &parse_tree__prog_event__EventDescs_10);
    }
    {
      parse_tree__prog_event__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__prog_event__EventDescs_10);
    }
    {
      parse_tree__prog_event__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_event__EventSetName_5, parse_tree__prog_event__V_17_17);
    }
    {
      parse_tree__prog_event__Desc_11 = mercury__string__f_43_43_2_f_0((MR_String) "event set ", parse_tree__prog_event__V_16_16);
    }
    {
      mercury__list__foldl_4_p_0(parse_tree__prog_event__TypeCtorInfo_22_22, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &parse_tree__prog_event_scalar_common_2[7], parse_tree__prog_event__EventSpecList_7, ((MR_Box) ((MR_Integer) -1)), &parse_tree__prog_event__conv3_MaxNumAttr_12);
    }
    parse_tree__prog_event__MaxNumAttr_12 = ((MR_Integer) parse_tree__prog_event__conv3_MaxNumAttr_12);
    {
      parse_tree__prog_event__EventSetData_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 0) = ((MR_Box) (parse_tree__prog_event__EventSetName_5));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 1) = ((MR_Box) (parse_tree__prog_event__Desc_11));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 2) = ((MR_Box) (parse_tree__prog_event__SortedEventSpecList_8));
      MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetData_4, 3) = ((MR_Box) (parse_tree__prog_event__MaxNumAttr_12));
    }
    return parse_tree__prog_event__EventSetData_4;
  }
}

void MR_CALL 
parse_tree__prog_event__read_event_set_6_p_0(
  MR_String parse_tree__prog_event__SpecsFileName_7,
  MR_String * parse_tree__prog_event__EventSetName_8,
  MR_Word * parse_tree__prog_event__EventSpecMap_9,
  MR_Word * parse_tree__prog_event__ErrorSpecs_10)
{
  {
    MR_bool parse_tree__prog_event__succeeded;
    MR_String parse_tree__prog_event__TermFileName_12;
    MR_String parse_tree__prog_event__Problem_13;
    MR_Word parse_tree__prog_event___RemoveRes_24;

    {
      mercury__io__make_temp_3_p_0(&parse_tree__prog_event__TermFileName_12);
    }
    {
      parse_tree__prog_event__read_specs_file_5_p_0(parse_tree__prog_event__SpecsFileName_7, parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event__Problem_13);
    }
    parse_tree__prog_event__succeeded = (strcmp(parse_tree__prog_event__Problem_13, (MR_String) "") == 0);
    if (parse_tree__prog_event__succeeded)
      {
        MR_Word parse_tree__prog_event__TermOpenRes_14;

        {
          mercury__io__open_input_4_p_0(parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event__TermOpenRes_14);
        }
        if (((MR_tag((MR_Word) parse_tree__prog_event__TermOpenRes_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__prog_event__TermOpenError_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__TermOpenRes_14, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__V_30_30;
            MR_String parse_tree__prog_event__V_31_31;
            MR_Word parse_tree__prog_event__V_37_37;
            MR_Word parse_tree__prog_event__V_38_38;
            MR_Word parse_tree__prog_event__V_42_42;
            MR_Word parse_tree__prog_event__V_43_43;
            MR_Word parse_tree__prog_event__Pieces_101;
            MR_Word parse_tree__prog_event__ErrorSpec_102;

            *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
            {
              *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
            }
            {
              parse_tree__prog_event__V_31_31 = mercury__io__error_message_1_f_0(parse_tree__prog_event__TermOpenError_23);
            }
            {
              parse_tree__prog_event__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_30_30, 1) = ((MR_Box) (parse_tree__prog_event__V_31_31));
            }
            {
              parse_tree__prog_event__Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_101, 0) = ((MR_Box) (parse_tree__prog_event__V_30_30));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
            }
            {
              parse_tree__prog_event__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_43_43, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_101));
            }
            {
              parse_tree__prog_event__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_42_42, 0) = ((MR_Box) (parse_tree__prog_event__V_43_43));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_event__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_38_38, 3) = ((MR_Box) (parse_tree__prog_event__V_42_42));
            }
            {
              parse_tree__prog_event__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_37_37, 0) = ((MR_Box) (parse_tree__prog_event__V_38_38));
              MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__prog_event__ErrorSpec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_102, 2) = ((MR_Box) (parse_tree__prog_event__V_37_37));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_event__ErrorSpecs_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_102));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word parse_tree__prog_event__TermStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__TermOpenRes_14, (MR_Integer) 0)));
            MR_Word parse_tree__prog_event__TermReadRes_16;

            {
              mercury__io__read_4_p_0((MR_Word) &parse_tree__prog_event__parse_tree__prog_event__type_ctor_info_event_set_spec_0, parse_tree__prog_event__TermStream_15, &parse_tree__prog_event__TermReadRes_16);
            }
            switch (MR_tag((MR_Word) parse_tree__prog_event__TermReadRes_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
                  {
                    *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                  }
                  *parse_tree__prog_event__ErrorSpecs_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[21]);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_event__EventSetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_event__EventSpecsTerm_18;
                  MR_Word parse_tree__prog_event__V_79_79;

                  *parse_tree__prog_event__EventSetName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetTerm_17, (MR_Integer) 0)));
                  parse_tree__prog_event__EventSpecsTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_event__EventSetTerm_17, (MR_Integer) 1)));
                  {
                    parse_tree__prog_event__V_79_79 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                  }
                  {
                    parse_tree__prog_event__convert_list_to_spec_map_6_p_0(parse_tree__prog_event__SpecsFileName_7, parse_tree__prog_event__EventSpecsTerm_18, parse_tree__prog_event__V_79_79, parse_tree__prog_event__EventSpecMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_event__ErrorSpecs_10);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String parse_tree__prog_event__TermReadMsg_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 0)));
                  MR_Integer parse_tree__prog_event__LineNumber_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__prog_event__TermReadRes_16, (MR_Integer) 1)));
                  MR_Word parse_tree__prog_event__V_48_48;
                  MR_Word parse_tree__prog_event__V_54_54;
                  MR_Word parse_tree__prog_event__V_55_55;
                  MR_Word parse_tree__prog_event__V_56_56;
                  MR_Word parse_tree__prog_event__V_57_57;
                  MR_Word parse_tree__prog_event__V_58_58;
                  MR_Word parse_tree__prog_event__Pieces_99;
                  MR_Word parse_tree__prog_event__ErrorSpec_100;

                  *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
                  {
                    *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
                  }
                  {
                    parse_tree__prog_event__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_48_48, 1) = ((MR_Box) (parse_tree__prog_event__TermReadMsg_21));
                  }
                  {
                    parse_tree__prog_event__Pieces_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_99, 0) = ((MR_Box) (parse_tree__prog_event__V_48_48));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
                  }
                  {
                    parse_tree__prog_event__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_56_56, 0) = ((MR_Box) (parse_tree__prog_event__TermFileName_12));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_56_56, 1) = ((MR_Box) (parse_tree__prog_event__LineNumber_22));
                  }
                  {
                    parse_tree__prog_event__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_58_58, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_99));
                  }
                  {
                    parse_tree__prog_event__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_57_57, 0) = ((MR_Box) (parse_tree__prog_event__V_58_58));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_event__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_55_55, 0) = ((MR_Box) (parse_tree__prog_event__V_56_56));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_55_55, 1) = ((MR_Box) (parse_tree__prog_event__V_57_57));
                  }
                  {
                    parse_tree__prog_event__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 0) = ((MR_Box) (parse_tree__prog_event__V_55_55));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_event__ErrorSpec_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_100, 2) = ((MR_Box) (parse_tree__prog_event__V_54_54));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_event__ErrorSpecs_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_100));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
            {
              mercury__io__close_input_3_p_0(parse_tree__prog_event__TermStream_15);
            }
          }
      }
    else
      {
        MR_Word parse_tree__prog_event__V_82_82;
        MR_Word parse_tree__prog_event__V_88_88;
        MR_Word parse_tree__prog_event__V_89_89;
        MR_Word parse_tree__prog_event__V_93_93;
        MR_Word parse_tree__prog_event__V_94_94;
        MR_Word parse_tree__prog_event__Pieces_103;
        MR_Word parse_tree__prog_event__ErrorSpec_104;

        *parse_tree__prog_event__EventSetName_8 = (MR_String) "";
        {
          *parse_tree__prog_event__EventSpecMap_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
        {
          parse_tree__prog_event__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__prog_event__V_82_82, 1) = ((MR_Box) (parse_tree__prog_event__Problem_13));
        }
        {
          parse_tree__prog_event__Pieces_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_103, 0) = ((MR_Box) (parse_tree__prog_event__V_82_82));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__Pieces_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_event_scalar_common_1[6])));
        }
        {
          parse_tree__prog_event__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__V_94_94, 0) = ((MR_Box) (parse_tree__prog_event__Pieces_103));
        }
        {
          parse_tree__prog_event__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 0) = ((MR_Box) (parse_tree__prog_event__V_94_94));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_89_89, 3) = ((MR_Box) (parse_tree__prog_event__V_93_93));
        }
        {
          parse_tree__prog_event__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_88_88, 0) = ((MR_Box) (parse_tree__prog_event__V_89_89));
          MR_hl_field(MR_mktag(1), parse_tree__prog_event__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_event__ErrorSpec_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__prog_event__ErrorSpec_104, 2) = ((MR_Box) (parse_tree__prog_event__V_88_88));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_event__ErrorSpecs_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_event__ErrorSpec_104));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      mercury__io__remove_file_4_p_0(parse_tree__prog_event__TermFileName_12, &parse_tree__prog_event___RemoveRes_24);
    }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_event. */
