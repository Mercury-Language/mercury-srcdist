/*
** Automatically generated from `prog_io_util.m'
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


/* :- module parse_tree.prog_io_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_util__init
ENDINIT
*/

#include "parse_tree.prog_io_util.mih"


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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5];

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1;

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3];

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1;

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String parse_tree__prog_io_util__Op_5,
  MR_Word parse_tree__prog_io_util__Term_6,
  MR_Word parse_tree__prog_io_util__List0_7,
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_util__Name_4,
  MR_Word parse_tree__prog_io_util__Args_5,
  MR_Word * parse_tree__prog_io_util__KnownInst_6);

static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_util__Name_4,
  MR_Word parse_tree__prog_io_util__Args_5,
  MR_Word * parse_tree__prog_io_util__KnownType_6);

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_44,
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
  MR_Word parse_tree__prog_io_util__VarSet_7,
  MR_String parse_tree__prog_io_util__Expected_8,
  MR_Word parse_tree__prog_io_util__Term_9,
  MR_Word * parse_tree__prog_io_util__Spec_10);

static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7,
  MR_Word * parse_tree__prog_io_util__Spec_8);

static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7,
  MR_Word * parse_tree__prog_io_util__Spec_8);

static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
  MR_Word parse_tree__prog_io_util__Parser_5,
  MR_Word parse_tree__prog_io_util__Head_6,
  MR_Word parse_tree__prog_io_util__Tail_7,
  MR_Word * parse_tree__prog_io_util__Result_8);

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_util__InstTerm_5,
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
  void * parse_tree__prog_io_util__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
  void * parse_tree__prog_io_util__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
  void * parse_tree__prog_io_util__env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__Disj_6,
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
  MR_Word * parse_tree__prog_io_util__Inst_8);

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_util__DetTerm_7,
  MR_Word * parse_tree__prog_io_util__Inst_8);

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_util__DetTerm_7,
  MR_Word * parse_tree__prog_io_util__Mode_8);

static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__Args_2,
  MR_Word * parse_tree__prog_io_util__Term_3);

static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__prog_io_util__closure_arg,
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
  MR_Word parse_tree__prog_io_util__Types_3,
  MR_Word * parse_tree__prog_io_util__Terms_4);

static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__VarSet_2,
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7);

static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7);

static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
  MR_Word parse_tree__prog_io_util__Term_6,
  MR_Word parse_tree__prog_io_util__VarSet_7,
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
  MR_Word * parse_tree__prog_io_util__Result_10);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[21][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[31][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_6[1][5];


/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

/* sealed */ struct parse_tree__prog_io_util__vector_common_type_7_0_s {
  const MR_String parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_7_0_s parse_tree__prog_io_util_vector_common_7[32];



static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io_util__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[31][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "impure"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "semipure"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[16])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[17])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[18])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[19])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[20])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};


static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32] = {
  /* row 0 */
  {
    (MR_String) "semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
  /* row 2 */
  {
    (MR_String) "multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "cc_nondet",
    (MR_Integer) 2,
    (MR_Integer) 5
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "multidet",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    (MR_String) "det",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_7_0_s parse_tree__prog_io_util_vector_common_7[32] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "semipure",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "float",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_Integer) 5
  },
  /* row 5 */
  {
    (MR_String) "impure",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 10 */
  {
    (MR_String) "{}",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    (MR_String) "pure",
    (MR_Integer) -1
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 28 */
  {
    (MR_String) "=",
    (MR_Integer) -1
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "pred",
    (MR_Integer) -1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "allow_constrained_inst_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1 = {
  (MR_String) "kcik_constrained",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_compound_inst_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_purity",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_apply",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
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

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_inst_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2 = {
  (MR_String) "known_type_bad_arity",
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

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_type_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_pred_or_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0 = {
  (MR_String) "osdc_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1 = {
  (MR_String) "osdc_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2 = {
  (MR_String) "osdc_dot_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3 = {
  (MR_String) "osdc_colon_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_dot_colon_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0 = {
  (MR_String) "os_ordinary_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1 = {
  (MR_String) "os_state_var",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "parser",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2pvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2pvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2pvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2pvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2tvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2tvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2tvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

    {
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String parse_tree__prog_io_util__Op_5,
  MR_Word parse_tree__prog_io_util__Term_6,
  MR_Word parse_tree__prog_io_util__List0_7,
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__L_9;
        MR_Word parse_tree__prog_io_util__R_10;
        MR_Word parse_tree__prog_io_util__V_14_14;
        MR_Word parse_tree__prog_io_util__V_15_15;
        MR_Word parse_tree__prog_io_util__V_16_16;
        MR_Word parse_tree__prog_io_util__V_17_17;
        MR_String parse_tree__prog_io_util__V_21_21;
        MR_Word parse_tree__prog_io_util___Context_11;

        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__RHead_12;
            MR_Word parse_tree__prog_io_util__RTail_13;
            MR_Word parse_tree__prog_io_util__V_18_18;
            MR_Word parse_tree__prog_io_util__V_19_19;

            {
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
            {
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
            }
            continue;
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_io_util__OneOrMore_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_util__Name_4,
  MR_Word parse_tree__prog_io_util__Args_5,
  MR_Word * parse_tree__prog_io_util__KnownInst_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      MR_Integer parse_tree__prog_io_util__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 0)) {
        case (MR_Integer) 61:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "=<"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "any"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 98:
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(6, parse_tree__prog_io_util__Name_4, (MR_String) "bound_unique"))
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 99:
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 4;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(10, parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any"))
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 5;
                break;
            }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "free"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 103:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "ground"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 105:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "is"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) {
              case (MR_Integer) 99:
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 15)) == (MR_Integer) 100))))
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 16)) {
                    case (MR_Integer) 0:
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(17, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any"))
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 10;
                      break;
                  }
                break;
              case (MR_Integer) 117:
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) {
                    case (MR_Integer) 0:
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(14, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any"))
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 12;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "not_reached"))
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 117:
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) {
              case (MR_Integer) 0:
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(7, parse_tree__prog_io_util__Name_4, (MR_String) "unique_any"))
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 15;
                break;
            }
          break;
      }
      switch (parse_tree__prog_io_util__case_num_0) {
        default:
          parse_tree__prog_io_util__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            /* case "=<" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_util__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word parse_tree__prog_io_util__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 1)));
                    MR_Box parse_tree__prog_io_util__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 0));

                    if ((parse_tree__prog_io_util__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__prog_io_util__V_44_44;

                        {
                          parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = parse_tree__prog_io_util__V_181_181;
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 1) = parse_tree__prog_io_util__V_193_193;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
                        }
                      }
                    else
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            /* case "any" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[19]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            /* case "bound" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_util__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_util__V_39_39;

                    {
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_39_39, 0) = parse_tree__prog_io_util__V_183_183;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
                    }
                  }
                else
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            /* case "bound_unique" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_util__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_util__V_36_36;

                    {
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = parse_tree__prog_io_util__V_185_185;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                    }
                  }
                else
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            /* case "clobbered" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[20]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            /* case "clobbered_any" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[21]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            /* case "free" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[22]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            /* case "ground" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[23]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            /* case "is" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word parse_tree__prog_io_util__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word parse_tree__prog_io_util__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 1)));
                    MR_Box parse_tree__prog_io_util__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 0));

                    if ((parse_tree__prog_io_util__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__prog_io_util__V_50_50;

                        {
                          parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 0) = parse_tree__prog_io_util__V_187_187;
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 1) = parse_tree__prog_io_util__V_195_195;
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__KnownInst_6 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
                        }
                      }
                    else
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            /* case "mostly_clobbered" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[24]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            /* case "mostly_clobbered_any" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[25]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            /* case "mostly_unique" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[26]);
              }
            else
              {
                MR_Word parse_tree__prog_io_util__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_util__V_54_54;

                    {
                      parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 1) = parse_tree__prog_io_util__V_189_189;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
                    }
                  }
                else
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            /* case "mostly_unique_any" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[27]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            /* case "not_reached" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[28]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            /* case "unique" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[29]);
              }
            else
              {
                MR_Word parse_tree__prog_io_util__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                if ((parse_tree__prog_io_util__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__prog_io_util__V_60_60;

                    {
                      parse_tree__prog_io_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 1) = parse_tree__prog_io_util__V_191_191;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownInst_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
                    }
                  }
                else
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            /* case "unique_any" */
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[30]);
            else
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
          break;
      }
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__prog_io_util__Name_4,
  MR_Word parse_tree__prog_io_util__Args_5,
  MR_Word * parse_tree__prog_io_util__KnownType_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__slot_0;
    MR_String parse_tree__prog_io_util__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string6(parse_tree__prog_io_util__Name_4)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_7[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_0;
        /* did we find a match? */
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__Name_4) == 0))))
          {
            /* we found a match; dispatch to the corresponding code */
            switch (parse_tree__prog_io_util__slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "" */
                  {
                    MR_Word parse_tree__prog_io_util__V_21_21;

                    {
                      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
                    }
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "string" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[18]);
                    }
                  else
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "semipure" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_util__V_145_145 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_util__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_util__V_95_95;

                          {
                            parse_tree__prog_io_util__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 1) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 2) = parse_tree__prog_io_util__V_145_145;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_util__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_95_95));
                          }
                        }
                      else
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "float" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[14]);
                    }
                  else
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "character" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[12]);
                    }
                  else
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  /* case "impure" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_util__V_141_141 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_util__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_util__V_23_23;

                          {
                            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 2) = parse_tree__prog_io_util__V_141_141;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_util__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
                          }
                        }
                      else
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  /* case "int" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[16]);
                    }
                  else
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  /* case "{}" */
                  {
                    MR_Word parse_tree__prog_io_util__V_32_32;

                    {
                      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
                    }
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 24:
                {
                  /* case "pure" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_util__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_util__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__prog_io_util__V_63_63;

                          {
                            parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 2) = parse_tree__prog_io_util__V_143_143;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_util__KnownType_6 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
                          }
                        }
                      else
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 28:
                {
                  /* case "=" */
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word parse_tree__prog_io_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__prog_io_util__V_139_139 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

                      if ((parse_tree__prog_io_util__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Word parse_tree__prog_io_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 1)));
                          MR_Box parse_tree__prog_io_util__V_147_147 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 0));

                          if ((parse_tree__prog_io_util__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__prog_io_util__V_28_28;

                              {
                                parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = parse_tree__prog_io_util__V_139_139;
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = parse_tree__prog_io_util__V_147_147;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__prog_io_util__KnownType_6 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
                              }
                            }
                          else
                            *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  /* case "pred" */
                  {
                    MR_Word parse_tree__prog_io_util__V_25_25;

                    {
                      parse_tree__prog_io_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__KnownType_6 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25_25));
                    }
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                  }
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_7[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_1;
          }
      }
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
    parse_tree__prog_io_util__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0(
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0(
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
            }
          }
        else
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__V_4_4;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
            {
              parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__V_6_6;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
            {
              parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
                  }
                }
                break;
              case (MR_Integer) 3:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
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
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_4_4;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_6_6;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_8_8;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_10_10;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
              }
          }
          break;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
    MR_Word parse_tree__prog_io_util__TypeInfo_13_13;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
    }
    {
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
    }
    {
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
    }
    {
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_13_13, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
    MR_Word parse_tree__prog_io_util__TypeInfo_12_12;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
    }
    {
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
    }
    {
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
    }
    {
      parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_12_12, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
    }
    {
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
    }
    {
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_11_11, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
    }
    {
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
    }
    {
      parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_10_10, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0(
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[0], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

    {
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[0], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
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
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_4_4;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_6_6;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
              }
          }
          break;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
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
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_4_4;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_6_6;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
              }
          }
          break;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_92_92, parse_tree__prog_io_util__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_util__V_87_87 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_88_88 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__prog_io_util__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_util__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_util__V_23_23;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_88_88, parse_tree__prog_io_util__V_21_21);
                  }
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == (MR_Integer) 0);
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
                  if (parse_tree__prog_io_util__succeeded)
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_23_23;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_87_87, parse_tree__prog_io_util__V_22_22);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_89_89, parse_tree__prog_io_util__V_40_40);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_util__V_90_90 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
                MR_Word parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Box parse_tree__prog_io_util__V_59_59 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word parse_tree__prog_io_util__V_60_60;
                          MR_Integer parse_tree__prog_io_util__V_93_93 = (MR_Integer) parse_tree__prog_io_util__V_91_91;
                          MR_Integer parse_tree__prog_io_util__V_94_94 = (MR_Integer) parse_tree__prog_io_util__V_58_58;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_93_93, parse_tree__prog_io_util__V_94_94);
                          }
                          parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_60_60 == (MR_Integer) 0);
                          parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
                          if (parse_tree__prog_io_util__succeeded)
                            *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_60_60;
                          else
                            {
                              mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_90_90, parse_tree__prog_io_util__V_59_59);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_io_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__prog_io_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_86_86, parse_tree__prog_io_util__V_75_75);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_4_4;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_7_7;
            MR_Box parse_tree__prog_io_util__V_8_8;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_8_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__V_10_10;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
                MR_Word parse_tree__prog_io_util__V_13_13;
                MR_Box parse_tree__prog_io_util__V_14_14;

                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_11_11 == parse_tree__prog_io_util__V_13_13);
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_14_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__prog_io_util__V_16_16;

                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__prog_io_util__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_util__V_8_8;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_83_83, parse_tree__prog_io_util__V_6_6);
                  }
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_8_8 == (MR_Integer) 0);
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
                  if (parse_tree__prog_io_util__succeeded)
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_8_8;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_82_82, parse_tree__prog_io_util__V_7_7);
                    }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_util__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__prog_io_util__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__prog_io_util__V_30_30;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_81_81, parse_tree__prog_io_util__V_28_28);
                  }
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == (MR_Integer) 0);
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
                  if (parse_tree__prog_io_util__succeeded)
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_30_30;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_80_80, parse_tree__prog_io_util__V_29_29);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__prog_io_util__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Box parse_tree__prog_io_util__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_79_79, parse_tree__prog_io_util__V_47_47);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_util__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__prog_io_util__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_85_85, parse_tree__prog_io_util__V_61_61);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__prog_io_util__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box parse_tree__prog_io_util__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_84_84, parse_tree__prog_io_util__V_75_75);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
    if (parse_tree__prog_io_util__succeeded)
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box parse_tree__prog_io_util__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_util__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_5_5;
            MR_Box parse_tree__prog_io_util__V_6_6;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_5_5);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_4_4, parse_tree__prog_io_util__V_6_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__prog_io_util__V_9_9;
            MR_Box parse_tree__prog_io_util__V_10_10;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_9_9);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__prog_io_util__V_12_12;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
                {
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__prog_io_util__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__prog_io_util__V_14_14;

                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__prog_io_util__V_16_16;

                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
                    {
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_44,
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
  MR_Word parse_tree__prog_io_util__VarSet_7,
  MR_String parse_tree__prog_io_util__Expected_8,
  MR_Word parse_tree__prog_io_util__Term_9,
  MR_Word * parse_tree__prog_io_util__Spec_10)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_45_45;
    MR_String parse_tree__prog_io_util__TermStr_11;
    MR_Word parse_tree__prog_io_util__Pieces_12;
    MR_Word parse_tree__prog_io_util__V_13_13;
    MR_Word parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_16_16;
    MR_Word parse_tree__prog_io_util__V_19_19;
    MR_Word parse_tree__prog_io_util__V_20_20;
    MR_Word parse_tree__prog_io_util__V_21_21;
    MR_Word parse_tree__prog_io_util__V_24_24;
    MR_Word parse_tree__prog_io_util__V_27_27;
    MR_Word parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_37_37;
    MR_Word parse_tree__prog_io_util__V_38_38;
    MR_Word parse_tree__prog_io_util__V_39_39;
    MR_Word parse_tree__prog_io_util__V_40_40;
    MR_Word parse_tree__prog_io_util__V_41_41;

    {
      parse_tree__prog_io_util__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_44, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
    parse_tree__prog_io_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_util__V_13_13 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_45_45, parse_tree__prog_io_util__ContextPieces_6);
    }
    {
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
    }
    {
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
    }
    {
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
    }
    {
      parse_tree__prog_io_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
    }
    {
      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
    }
    {
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
    }
    {
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
    }
    {
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
    }
    {
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_45_45, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
    }
    {
      parse_tree__prog_io_util__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_44, parse_tree__prog_io_util__Term_9);
    }
    {
      parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
    }
    {
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
    }
    {
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_io_util__Spec_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7,
  MR_Word * parse_tree__prog_io_util__Spec_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_35_35;
    MR_String parse_tree__prog_io_util__TermStr_9;
    MR_Word parse_tree__prog_io_util__Pieces_10;
    MR_Word parse_tree__prog_io_util__V_11_11;
    MR_Word parse_tree__prog_io_util__V_12_12;
    MR_Word parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_17_17;
    MR_Word parse_tree__prog_io_util__V_18_18;
    MR_Word parse_tree__prog_io_util__V_27_27;
    MR_Word parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_29_29;
    MR_Word parse_tree__prog_io_util__V_30_30;
    MR_Word parse_tree__prog_io_util__V_31_31;

    {
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
    parse_tree__prog_io_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_util__V_11_11 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__ContextPieces_5);
    }
    {
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
    }
    {
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
    }
    {
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
    }
    {
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
    }
    {
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
    }
    {
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__Term_7);
    }
    {
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
    }
    {
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
    }
    {
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_io_util__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7,
  MR_Word * parse_tree__prog_io_util__Spec_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_35_35;
    MR_String parse_tree__prog_io_util__TermStr_9;
    MR_Word parse_tree__prog_io_util__Pieces_10;
    MR_Word parse_tree__prog_io_util__V_11_11;
    MR_Word parse_tree__prog_io_util__V_12_12;
    MR_Word parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_17_17;
    MR_Word parse_tree__prog_io_util__V_18_18;
    MR_Word parse_tree__prog_io_util__V_27_27;
    MR_Word parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_29_29;
    MR_Word parse_tree__prog_io_util__V_30_30;
    MR_Word parse_tree__prog_io_util__V_31_31;

    {
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
    parse_tree__prog_io_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_util__V_11_11 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__ContextPieces_5);
    }
    {
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
    }
    {
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
    }
    {
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
    }
    {
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
    }
    {
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
    }
    {
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__Term_7);
    }
    {
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
    }
    {
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
    }
    {
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__prog_io_util__Spec_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
  MR_Word parse_tree__prog_io_util__Parser_5,
  MR_Word parse_tree__prog_io_util__Head_6,
  MR_Word parse_tree__prog_io_util__Tail_7,
  MR_Word * parse_tree__prog_io_util__Result_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__HeadResult_9;
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

    {
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
      else
        {
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
          MR_Word parse_tree__prog_io_util__V_23_23;

          {
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_io_util__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
          }
        }
    else
      {
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__TailResult_14;

        {
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_22_22;

                {
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__Result_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
                }
              }
            else
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
          }
        else
          {
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
            else
              {
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_21_21;

                {
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__Result_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_util__InstTerm_5,
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__Functor_7;
    MR_Word parse_tree__prog_io_util__Args0_8;
    MR_Word parse_tree__prog_io_util__Args1_12;
    MR_Word parse_tree__prog_io_util__ConsId_14;
    MR_Word parse_tree__prog_io_util__Args_21;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
          default:
            parse_tree__prog_io_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
              MR_Word parse_tree__prog_io_util__SymName_11;
              MR_Integer parse_tree__prog_io_util__Arity_13;
              MR_Word parse_tree__prog_io_util__V_22_22;

              {
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
              if (parse_tree__prog_io_util__succeeded)
                {
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
                  {
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
                  {
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
                  {
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
                  }
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Integer parse_tree__prog_io_util__Arity_23;

              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
              {
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
              default:
                parse_tree__prog_io_util__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Integer parse_tree__prog_io_util__Arity_23;

                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
                  {
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
                  {
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
                }
                break;
            }
            break;
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            {
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
            if (parse_tree__prog_io_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__BoundInst_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__H_8;
        MR_Word parse_tree__prog_io_util__T_9;

        {
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            {
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
            if (parse_tree__prog_io_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
  void * parse_tree__prog_io_util__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
  void * parse_tree__prog_io_util__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

    {
      MR_Word parse_tree__prog_io_util__V_16_16;
      MR_Word parse_tree__prog_io_util__V_18_18;
      MR_Word parse_tree__prog_io_util__V_19_19;

      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
        {
          {
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
          }
          {
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
              {
                {
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
                }
                {
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
                  {
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
                    {
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
                    }
                }
              }
          }
        }
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
  void * parse_tree__prog_io_util__env_ptr_arg)
{
  {
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__prog_io_util__V_12_12;

          {
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
        }
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__Disj_6,
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
  MR_Word * parse_tree__prog_io_util__Inst_8)
{
  {
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

    {
      MR_Word parse_tree__prog_io_util__Functors0_10;
      MR_Word parse_tree__prog_io_util__V_21_21;
      MR_Word parse_tree__prog_io_util__V_31_31;
      MR_Word parse_tree__prog_io_util__H0_38;
      MR_Word parse_tree__prog_io_util__T0_39;
      MR_Word parse_tree__prog_io_util__H_40;
      MR_Word parse_tree__prog_io_util__T_41;

      {
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
      {
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
        {
          {
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
            {
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
              {
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
              }
              {
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
              {
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
                {
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__prog_io_util__Inst_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
                  }
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
                }
            }
        }
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_util__DetTerm_7,
  MR_Word * parse_tree__prog_io_util__Inst_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
    MR_Word parse_tree__prog_io_util__V_27_27;
    MR_Word parse_tree__prog_io_util__V_11_11;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
              {
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_53_53;
                MR_Word parse_tree__prog_io_util__FuncTerm_18;
                MR_Word parse_tree__prog_io_util__RetModeTerm_19;
                MR_String parse_tree__prog_io_util__FuncTermFunctor_20;
                MR_Word parse_tree__prog_io_util__ArgModesTerms_21;
                MR_Word parse_tree__prog_io_util__V_28_28;
                MR_Word parse_tree__prog_io_util__V_29_29;
                MR_Word parse_tree__prog_io_util__V_30_30;
                MR_Word parse_tree__prog_io_util__V_31_31;
                MR_Word parse_tree__prog_io_util__V_32_32;
                MR_Word parse_tree__prog_io_util__V_34_34;
                MR_Word parse_tree__prog_io_util__V_35_35;
                MR_Word parse_tree__prog_io_util__V_36_36;
                MR_String parse_tree__prog_io_util__DetString_51;
                MR_Word parse_tree__prog_io_util__V_22_22;
                MR_Word parse_tree__prog_io_util__V_23_23;

                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 0)));
                                parse_tree__prog_io_util__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 1)));
                                parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 2)));
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_util__succeeded)
                                      {
                                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
                                        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__prog_io_util__succeeded)
                                          {
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__prog_io_util__succeeded)
                                              {
                                                parse_tree__prog_io_util__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
                                                parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                parse_tree__prog_io_util__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
                                                parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_55;
                                                    MR_Word parse_tree__prog_io_util__RetMode_56;
                                                    MR_Word parse_tree__prog_io_util__FuncInst_57;
                                                    MR_Word parse_tree__prog_io_util__V_58_58;
                                                    MR_Word parse_tree__prog_io_util__ArgModes_60;
                                                    MR_Word parse_tree__prog_io_util__Detism_61;

                                                    {
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_61);
                                                    }
                                                    if (parse_tree__prog_io_util__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_55);
                                                        }
                                                        if (parse_tree__prog_io_util__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_56);
                                                            }
                                                            if (parse_tree__prog_io_util__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_56));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_55, parse_tree__prog_io_util__V_58_58, &parse_tree__prog_io_util__ArgModes_60);
                                                                }
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_util__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_60));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_61));
                                                                }
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_57);
                                                                {
                                                                  MR_Word base;
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
                                                                }
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "any_func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_24;
                                                    MR_Word parse_tree__prog_io_util__RetMode_25;
                                                    MR_Word parse_tree__prog_io_util__FuncInst_26;
                                                    MR_Word parse_tree__prog_io_util__V_33_33;
                                                    MR_Word parse_tree__prog_io_util__V_37_37;
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
                                                    MR_Word parse_tree__prog_io_util__ArgModes_50;
                                                    MR_Word parse_tree__prog_io_util__Detism_52;

                                                    {
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_52);
                                                    }
                                                    if (parse_tree__prog_io_util__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_24);
                                                        }
                                                        if (parse_tree__prog_io_util__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_25);
                                                            }
                                                            if (parse_tree__prog_io_util__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_25));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_24, parse_tree__prog_io_util__V_33_33, &parse_tree__prog_io_util__ArgModes_50);
                                                                }
                                                                parse_tree__prog_io_util__V_37_37 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_util__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_50));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_52));
                                                                }
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_26);
                                                                {
                                                                  MR_Word base;
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
                                                                }
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
              {
                MR_Word parse_tree__prog_io_util__ArgModes_13;
                MR_String parse_tree__prog_io_util__DetString_14;
                MR_Word parse_tree__prog_io_util__Detism_16;
                MR_Word parse_tree__prog_io_util__PredInst_17;
                MR_Word parse_tree__prog_io_util__V_41_41;
                MR_Word parse_tree__prog_io_util__V_42_42;
                MR_Word parse_tree__prog_io_util__V_43_43;
                MR_Word parse_tree__prog_io_util__V_44_44;
                MR_Word parse_tree__prog_io_util__V_15_15;

                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
                                {
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__V_43_43 = (MR_Integer) 0;
                                    parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__prog_io_util__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
                                    }
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
                                      {
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                          *parse_tree__prog_io_util__Inst_8 = base;
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
                                        }
                                      }
                                    else
                                      {
                                        MR_Word parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          *parse_tree__prog_io_util__Inst_8 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
                                        }
                                      }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              parse_tree__prog_io_util__succeeded = MR_FALSE;
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
  MR_Word parse_tree__prog_io_util__DetTerm_7,
  MR_Word * parse_tree__prog_io_util__Mode_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
    MR_Word parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_11_11;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
              {
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_57_57;
                MR_Word parse_tree__prog_io_util__FuncTerm_19;
                MR_Word parse_tree__prog_io_util__RetModeTerm_20;
                MR_String parse_tree__prog_io_util__FuncTermFunctor_21;
                MR_Word parse_tree__prog_io_util__ArgModesTerms_22;
                MR_Word parse_tree__prog_io_util__V_29_29;
                MR_Word parse_tree__prog_io_util__V_30_30;
                MR_Word parse_tree__prog_io_util__V_31_31;
                MR_Word parse_tree__prog_io_util__V_32_32;
                MR_Word parse_tree__prog_io_util__V_33_33;
                MR_Word parse_tree__prog_io_util__V_35_35;
                MR_Word parse_tree__prog_io_util__V_36_36;
                MR_Word parse_tree__prog_io_util__V_37_37;
                MR_String parse_tree__prog_io_util__DetString_54;
                MR_Word parse_tree__prog_io_util__Inst_56;
                MR_Word parse_tree__prog_io_util__V_23_23;
                MR_Word parse_tree__prog_io_util__V_24_24;

                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 0)));
                                parse_tree__prog_io_util__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 1)));
                                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 2)));
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_util__succeeded)
                                      {
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
                                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__prog_io_util__succeeded)
                                          {
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                                            if (parse_tree__prog_io_util__succeeded)
                                              {
                                                parse_tree__prog_io_util__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
                                                parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                parse_tree__prog_io_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
                                                parse_tree__prog_io_util__V_36_36 = (MR_Integer) 1;
                                                parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
                                                    MR_Word parse_tree__prog_io_util__V_41_41;
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_59;
                                                    MR_Word parse_tree__prog_io_util__RetMode_60;
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_61;
                                                    MR_Word parse_tree__prog_io_util__V_62_62;
                                                    MR_Word parse_tree__prog_io_util__ArgModes_64;
                                                    MR_Word parse_tree__prog_io_util__Detism_65;

                                                    {
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_65);
                                                    }
                                                    if (parse_tree__prog_io_util__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_59);
                                                        }
                                                        if (parse_tree__prog_io_util__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_60);
                                                            }
                                                            if (parse_tree__prog_io_util__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_60));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_59, parse_tree__prog_io_util__V_62_62, &parse_tree__prog_io_util__ArgModes_64);
                                                                }
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_util__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_64));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_65));
                                                                }
                                                                parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_61);
                                                                {
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
                                                                }
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "any_func") == 0))
                                                  {
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_25;
                                                    MR_Word parse_tree__prog_io_util__RetMode_26;
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_27;
                                                    MR_Word parse_tree__prog_io_util__V_34_34;
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
                                                    MR_Word parse_tree__prog_io_util__ArgModes_53;
                                                    MR_Word parse_tree__prog_io_util__Detism_55;

                                                    {
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_55);
                                                    }
                                                    if (parse_tree__prog_io_util__succeeded)
                                                      {
                                                        {
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_25);
                                                        }
                                                        if (parse_tree__prog_io_util__succeeded)
                                                          {
                                                            {
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_26);
                                                            }
                                                            if (parse_tree__prog_io_util__succeeded)
                                                              {
                                                                {
                                                                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_26));
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
                                                                }
                                                                {
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_25, parse_tree__prog_io_util__V_34_34, &parse_tree__prog_io_util__ArgModes_53);
                                                                }
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Integer) 0;
                                                                {
                                                                  parse_tree__prog_io_util__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_53));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_55));
                                                                }
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_27);
                                                                {
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
                                                                }
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                              }
                                                          }
                                                      }
                                                  }
                                                else
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
                                                if (parse_tree__prog_io_util__succeeded)
                                                  {
                                                    {
                                                      MR_Word base;
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                      *parse_tree__prog_io_util__Mode_8 = base;
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
                                                    }
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
              {
                MR_Word parse_tree__prog_io_util__ArgModes_13;
                MR_String parse_tree__prog_io_util__DetString_14;
                MR_Word parse_tree__prog_io_util__Detism_16;
                MR_Word parse_tree__prog_io_util__PredInstInfo_17;
                MR_Word parse_tree__prog_io_util__Inst_18;
                MR_Word parse_tree__prog_io_util__V_43_43;
                MR_Word parse_tree__prog_io_util__V_44_44;
                MR_Word parse_tree__prog_io_util__V_45_45;
                MR_Word parse_tree__prog_io_util__V_46_46;
                MR_Word parse_tree__prog_io_util__V_15_15;

                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
                                {
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__V_45_45 = (MR_Integer) 0;
                                    parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    {
                                      parse_tree__prog_io_util__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
                                    }
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
                                      {
                                        MR_Word parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

                                        {
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
                                        }
                                      }
                                    else
                                      {
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

                                        {
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
                                        }
                                      }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      *parse_tree__prog_io_util__Mode_8 = base;
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              parse_tree__prog_io_util__succeeded = MR_FALSE;
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__Args_2,
  MR_Word * parse_tree__prog_io_util__Term_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__Context_13;
        MR_Word parse_tree__prog_io_util__QualTerm_14;
        MR_Word parse_tree__prog_io_util__Term0_15;
        MR_Word parse_tree__prog_io_util__V_17_17;
        MR_Word parse_tree__prog_io_util__V_20_20;
        MR_Word parse_tree__prog_io_util__V_21_21;

        {
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
        {
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
        }
        {
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
        }
        {
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_util__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[10]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
        }
      }
    else
      {
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Context_7;
        MR_Word parse_tree__prog_io_util__V_8_8;

        {
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_util__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
        }
      }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
  MR_Box parse_tree__prog_io_util__closure_arg,
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
{
  {
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
    MR_Word parse_tree__prog_io_util__conv0_Term_4;

    {
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_Term_4);
    }
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_Term_4));
  }
}

static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
  MR_Word parse_tree__prog_io_util__Types_3,
  MR_Word * parse_tree__prog_io_util__Terms_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
    }
  }
}

static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word parse_tree__prog_io_util__VarSet_2,
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__prog_io_util__succeeded;

        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__prog_io_util__STATE_VARIABLE_Specs_7 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
            *parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
          }
        else
          {
            MR_Word parse_tree__prog_io_util__Term_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__prog_io_util__Terms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__prog_io_util__TermResult_22;
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;

            {
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_16, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__TermResult_22);
            }
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TermResult_22)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__TermSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

                {
                  parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__TermSpecs_24, parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6);
                }
                parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
              }
            else
              {
                MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

                {
                  parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4));
                }
                parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_17;
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;

              parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6;
              parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4;
              parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__Term_7)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Result_8;
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_38_38;
    MR_String parse_tree__prog_io_util__TermStr_9;
    MR_Word parse_tree__prog_io_util__Pieces_10;
    MR_Word parse_tree__prog_io_util__Spec_11;
    MR_Word parse_tree__prog_io_util__V_12_12;
    MR_Word parse_tree__prog_io_util__V_13_13;
    MR_Word parse_tree__prog_io_util__V_15_15;
    MR_Word parse_tree__prog_io_util__V_18_18;
    MR_Word parse_tree__prog_io_util__V_19_19;
    MR_Word parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_29_29;
    MR_Word parse_tree__prog_io_util__V_30_30;
    MR_Word parse_tree__prog_io_util__V_31_31;
    MR_Word parse_tree__prog_io_util__V_32_32;
    MR_Word parse_tree__prog_io_util__V_35_35;

    {
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_37_37, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
    parse_tree__prog_io_util__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__prog_io_util__V_12_12 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_38_38, parse_tree__prog_io_util__ContextPieces_5);
    }
    {
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
    }
    {
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
    }
    {
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10])));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
    }
    {
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
    }
    {
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_38_38, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_13_13);
    }
    {
      parse_tree__prog_io_util__V_30_30 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_37_37, parse_tree__prog_io_util__Term_7);
    }
    {
      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
    }
    {
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
    }
    {
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
    }
    {
      parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_11));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_io_util__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
    }
    return parse_tree__prog_io_util__Result_8;
  }
}

static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
  MR_Word parse_tree__prog_io_util__Term_6,
  MR_Word parse_tree__prog_io_util__VarSet_7,
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
  MR_Word * parse_tree__prog_io_util__Result_10)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundTypeKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_io_util__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_util__ArgsResult_12;

          {
            parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_11, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__ContextPieces_8, &parse_tree__prog_io_util__ArgsResult_12);
          }
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_12)) == (MR_mktag((MR_Integer) 0))))
            *parse_tree__prog_io_util__Result_10 = (MR_Word) parse_tree__prog_io_util__ArgsResult_12;
          else
            {
              MR_Word parse_tree__prog_io_util__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_12, (MR_Integer) 0)));
              MR_Word parse_tree__prog_io_util__V_76_76;

              {
                parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_13));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_util__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_io_util__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_util__Arg2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
          MR_Word parse_tree__prog_io_util__RetType_23;
          MR_Word parse_tree__prog_io_util__ArgTypes_81;
          MR_Word parse_tree__prog_io_util__FuncArgs_21;
          MR_Word parse_tree__prog_io_util__V_41_41;
          MR_String parse_tree__prog_io_util__V_42_42;
          MR_Word parse_tree__prog_io_util__V_22_22;

          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_19)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__prog_io_util__succeeded)
            {
              parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 0)));
              parse_tree__prog_io_util__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 1)));
              parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 2)));
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__prog_io_util__succeeded)
                {
                  parse_tree__prog_io_util__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
                  parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_42_42, (MR_String) "func") == 0);
                  if (parse_tree__prog_io_util__succeeded)
                    {
                      {
                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_21, &parse_tree__prog_io_util__ArgTypes_81);
                      }
                      if (parse_tree__prog_io_util__succeeded)
                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_20, &parse_tree__prog_io_util__RetType_23);
                        }
                    }
                }
            }
          if (parse_tree__prog_io_util__succeeded)
            {
              MR_Word parse_tree__prog_io_util__V_43_43;
              MR_Word parse_tree__prog_io_util__V_44_44;

              {
                parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_23));
              }
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_81));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 4) = NULL;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_util__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
              }
            }
          else
            {
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_io_util__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_util__ArgTypes_78;

          {
            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_79, &parse_tree__prog_io_util__ArgTypes_78);
          }
          if (parse_tree__prog_io_util__succeeded)
            {
              MR_Word parse_tree__prog_io_util__V_47_47;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_io_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_78));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 4) = NULL;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__prog_io_util__Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_47_47));
              }
            }
          else
            {
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_util__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_util__SubTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_util__ResultPrime_29;
              MR_String parse_tree__prog_io_util__Name_26;
              MR_Word parse_tree__prog_io_util__V_30_30;
              MR_Word parse_tree__prog_io_util__Args_94;
              MR_Word parse_tree__prog_io_util__V_27_27;

              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__SubTerm_25)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__prog_io_util__succeeded)
                {
                  parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 0)));
                  parse_tree__prog_io_util__Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 1)));
                  parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 2)));
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__prog_io_util__succeeded)
                    {
                      parse_tree__prog_io_util__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "=") == 0))
                        {
                          MR_Word parse_tree__prog_io_util__V_34_34;
                          MR_Word parse_tree__prog_io_util__V_35_35;
                          MR_Word parse_tree__prog_io_util__V_36_36;
                          MR_String parse_tree__prog_io_util__V_37_37;
                          MR_Word parse_tree__prog_io_util__V_38_38;
                          MR_Word parse_tree__prog_io_util__V_39_39;
                          MR_Word parse_tree__prog_io_util__ArgTypes_83;
                          MR_Word parse_tree__prog_io_util__Arg1_84;
                          MR_Word parse_tree__prog_io_util__Arg2_85;
                          MR_Word parse_tree__prog_io_util__FuncArgs_86;
                          MR_Word parse_tree__prog_io_util__RetType_87;
                          MR_Word parse_tree__prog_io_util__V_28_28;

                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_94)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__prog_io_util__succeeded)
                            {
                              parse_tree__prog_io_util__Arg1_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_94, (MR_Integer) 0)));
                              parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_94, (MR_Integer) 1)));
                              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__prog_io_util__succeeded)
                                {
                                  parse_tree__prog_io_util__Arg2_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
                                  parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
                                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (parse_tree__prog_io_util__succeeded)
                                    {
                                      parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_84)) == (MR_mktag((MR_Integer) 0)));
                                      if (parse_tree__prog_io_util__succeeded)
                                        {
                                          parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 0)));
                                          parse_tree__prog_io_util__FuncArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 1)));
                                          parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 2)));
                                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
                                          if (parse_tree__prog_io_util__succeeded)
                                            {
                                              parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
                                              parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "func") == 0);
                                              if (parse_tree__prog_io_util__succeeded)
                                                {
                                                  {
                                                    parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_86, &parse_tree__prog_io_util__ArgTypes_83);
                                                  }
                                                  if (parse_tree__prog_io_util__succeeded)
                                                    {
                                                      {
                                                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_85, &parse_tree__prog_io_util__RetType_87);
                                                      }
                                                      if (parse_tree__prog_io_util__succeeded)
                                                        {
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                                                          {
                                                            parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_87));
                                                          }
                                                          {
                                                            parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_83));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 2) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 4) = NULL;
                                                          }
                                                          {
                                                            parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
                                                          }
                                                          parse_tree__prog_io_util__succeeded = MR_TRUE;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "pred") == 0))
                        {
                          MR_Word parse_tree__prog_io_util__V_31_31;
                          MR_Word parse_tree__prog_io_util__V_32_32;
                          MR_Word parse_tree__prog_io_util__ArgTypes_88;

                          {
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_94, &parse_tree__prog_io_util__ArgTypes_88);
                          }
                          if (parse_tree__prog_io_util__succeeded)
                            {
                              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
                              {
                                parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_88));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 4) = NULL;
                              }
                              {
                                parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
                              }
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
                            }
                        }
                      else
                        parse_tree__prog_io_util__succeeded = MR_FALSE;
                    }
                }
              if (parse_tree__prog_io_util__succeeded)
                *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ResultPrime_29;
              else
                {
                  *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_112_112 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_113_113;
              MR_String parse_tree__prog_io_util__TermStr_16;
              MR_Word parse_tree__prog_io_util__Pieces_17;
              MR_Word parse_tree__prog_io_util__Spec_18;
              MR_Word parse_tree__prog_io_util__V_51_51;
              MR_Word parse_tree__prog_io_util__V_52_52;
              MR_Word parse_tree__prog_io_util__V_54_54;
              MR_Word parse_tree__prog_io_util__V_57_57;
              MR_Word parse_tree__prog_io_util__V_58_58;
              MR_Word parse_tree__prog_io_util__V_67_67;
              MR_Word parse_tree__prog_io_util__V_68_68;
              MR_Word parse_tree__prog_io_util__V_69_69;
              MR_Word parse_tree__prog_io_util__V_70_70;
              MR_Word parse_tree__prog_io_util__V_71_71;
              MR_Word parse_tree__prog_io_util__V_74_74;

              {
                parse_tree__prog_io_util__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_112_112, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
              }
              parse_tree__prog_io_util__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__prog_io_util__V_51_51 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_113_113, parse_tree__prog_io_util__ContextPieces_8);
              }
              {
                parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_16));
              }
              {
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
              }
              {
                parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10])));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
              }
              {
                parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
              }
              {
                parse_tree__prog_io_util__Pieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_113_113, parse_tree__prog_io_util__V_51_51, parse_tree__prog_io_util__V_52_52);
              }
              {
                parse_tree__prog_io_util__V_69_69 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_112_112, parse_tree__prog_io_util__Term_6);
              }
              {
                parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_17));
              }
              {
                parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
              }
              {
                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__prog_io_util__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
              }
              {
                parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_18));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_util__Result_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__Terms_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__V_19_19;
    MR_Word parse_tree__prog_io_util__V_20_20;
    MR_String parse_tree__prog_io_util__V_21_21;
    MR_Word parse_tree__prog_io_util__V_18_18;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
                MR_Word parse_tree__prog_io_util__TailTerm_6;
                MR_Word parse_tree__prog_io_util__TailTerms_8;
                MR_Word parse_tree__prog_io_util__V_16_16;
                MR_Word parse_tree__prog_io_util__V_17_17;

                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            {
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  *parse_tree__prog_io_util__Terms_4 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
                                }
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
  MR_Word parse_tree__prog_io_util__Parser_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__HeadResult_10;
        MR_Word parse_tree__prog_io_util__TailResult_11;
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

        {
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
        {
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_20_20;

                {
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
                }
              }
            else
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
          }
        else
          {
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
            else
              {
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_19_19;

                {
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
                }
              }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
  MR_Word parse_tree__prog_io_util__Parser_4,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word * parse_tree__prog_io_util__Result_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__List_7;
    MR_Word parse_tree__prog_io_util__Head_12;
    MR_Word parse_tree__prog_io_util__Tail_13;
    MR_Word parse_tree__prog_io_util__V_15_15;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
    {
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
    }
    {
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
  MR_Word parse_tree__prog_io_util__Parser_4,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word * parse_tree__prog_io_util__Result_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Head_7;
    MR_Word parse_tree__prog_io_util__Tail_8;
    MR_Word parse_tree__prog_io_util__V_9_9;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
    {
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__List_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Head_5;
    MR_Word parse_tree__prog_io_util__Tail_6;
    MR_Word parse_tree__prog_io_util__V_8_8;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_io_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
  MR_Word parse_tree__prog_io_util__Context_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__Term_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
    else
      {
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__Tail_12;
        MR_Word parse_tree__prog_io_util__V_14_14;
        MR_Word parse_tree__prog_io_util__V_17_17;
        MR_Word parse_tree__prog_io_util__V_18_18;

        {
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
        }
        {
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
        {
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__prog_io_util__Term_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
        }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__List_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Head_5;
    MR_Word parse_tree__prog_io_util__Tail_6;
    MR_Word parse_tree__prog_io_util__V_8_8;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_io_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__List_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Head_5;
    MR_Word parse_tree__prog_io_util__Tail_6;
    MR_Word parse_tree__prog_io_util__V_8_8;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__prog_io_util__List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
    }
  }
}

void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Integer parse_tree__prog_io_util__slot_0;
    MR_String parse_tree__prog_io_util__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
        /* did we find a match? */
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
          {
            /* we found a match; look up the results */
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
            parse_tree__prog_io_util__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
          }
      }
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
    parse_tree__prog_io_util__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_inst_name_1_p_0(
  MR_String parse_tree__prog_io_util__Name_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__V_3_3;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_mode_name_1_p_0(
  MR_String parse_tree__prog_io_util__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) ">>") == 0))
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "is") == 0))
      parse_tree__prog_io_util__succeeded = MR_TRUE;
    else
      parse_tree__prog_io_util__succeeded = MR_FALSE;
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_util__Term_2,
  MR_Word * parse_tree__prog_io_util__Inst_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_util__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_io_util__Name_16;
        MR_Word parse_tree__prog_io_util___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_io_util__KnownInstKind_17;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_13, (MR_Integer) 0)));
            {
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_16, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__KnownInstKind_17);
            }
            if (parse_tree__prog_io_util__succeeded)
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word parse_tree__prog_io_util__CompoundInstKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));

                  switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundInstKind_18)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word parse_tree__prog_io_util__BeforeIsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
                        MR_Word parse_tree__prog_io_util__DetTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__BeforeIsTerm_19, parse_tree__prog_io_util__DetTerm_20, parse_tree__prog_io_util__Inst_3);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word parse_tree__prog_io_util__TypeInfo_53_53;
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_54_54;
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_55_55;
                        MR_Word parse_tree__prog_io_util__VarTerm_22;
                        MR_Word parse_tree__prog_io_util__SubInstTerm_23;
                        MR_Word parse_tree__prog_io_util__Var_24;
                        MR_Word parse_tree__prog_io_util__SubInst_26;
                        MR_Word parse_tree__prog_io_util__V_35_35;
                        MR_Word parse_tree__prog_io_util__V_36_36;
                        MR_Word parse_tree__prog_io_util__V_37_37;
                        MR_Word parse_tree__prog_io_util__V_25_25;

                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__VarTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
                            parse_tree__prog_io_util__SubInstTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_22)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 0)));
                                parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 1)));
                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
                                {
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__SubInstTerm_23, &parse_tree__prog_io_util__SubInst_26);
                                }
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
                                    parse_tree__prog_io_util__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                                    parse_tree__prog_io_util__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
                                    {
                                      parse_tree__prog_io_util__V_37_37 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_54_54, parse_tree__prog_io_util__TypeCtorInfo_55_55, parse_tree__prog_io_util__Var_24);
                                    }
                                    {
                                      parse_tree__prog_io_util__V_36_36 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_53_53, ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *parse_tree__prog_io_util__Inst_3 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__SubInst_26));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word parse_tree__prog_io_util__DisjTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));

                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_21, (MR_Integer) 0, parse_tree__prog_io_util__Inst_3);
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word parse_tree__prog_io_util__DisjTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

                            {
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_45, (MR_Integer) 1, parse_tree__prog_io_util__Inst_3);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word parse_tree__prog_io_util__DisjTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

                            {
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_46, (MR_Integer) 2, parse_tree__prog_io_util__Inst_3);
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
              else
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 1))))
                {
                  *parse_tree__prog_io_util__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
                }
              else
                parse_tree__prog_io_util__succeeded = MR_FALSE;
            else
              {
                MR_Word parse_tree__prog_io_util__QualifiedName_27;
                MR_Word parse_tree__prog_io_util__Args1_28;
                MR_Word parse_tree__prog_io_util__InstPrime_31;
                MR_Word parse_tree__prog_io_util__BuiltinModule_29;
                MR_String parse_tree__prog_io_util__UnqualifiedName_30;
                MR_Word parse_tree__prog_io_util__V_41_41;
                MR_String parse_tree__prog_io_util__V_42_42;
                MR_Word parse_tree__prog_io_util__KnownInstKind_47;
                MR_Word parse_tree__prog_io_util__V_58_58;
                MR_Word parse_tree__prog_io_util__V_43_43;
                MR_Word parse_tree__prog_io_util__V_32_32;
                MR_Word parse_tree__prog_io_util__V_33_33;

                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_13, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__QualifiedName_27, &parse_tree__prog_io_util__Args1_28);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    {
                      parse_tree__prog_io_util__BuiltinModule_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    parse_tree__prog_io_util__V_42_42 = (MR_String) "";
                    parse_tree__prog_io_util__V_41_41 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
                    {
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_27, parse_tree__prog_io_util__V_41_41, &parse_tree__prog_io_util__V_58_58);
                    }
                    {
                      parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_29, parse_tree__prog_io_util__V_58_58);
                    }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        {
                          parse_tree__prog_io_util__UnqualifiedName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_27);
                        }
                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__UnqualifiedName_30, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__KnownInstKind_47);
                        }
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_47)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__InstPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_47, (MR_Integer) 0)));
                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__InstPrime_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 1)));
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__prog_io_util__succeeded)
                                      {
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 1)));
                                      }
                                  }
                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
                              }
                          }
                      }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        *parse_tree__prog_io_util__Inst_3 = parse_tree__prog_io_util__InstPrime_31;
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_util__Args_34;
                        MR_Word parse_tree__prog_io_util__V_44_44;

                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__Args_34);
                        }
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            {
                              parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_27));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_34));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *parse_tree__prog_io_util__Inst_3 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
                            }
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__prog_io_util__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__V_9;
        MR_Word parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_7, &parse_tree__prog_io_util__V_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_util__Inst_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_9));
        }
        parse_tree__prog_io_util__succeeded = MR_TRUE;
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__Inst_8;
        MR_Word parse_tree__prog_io_util__Insts_9;

        {
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Term_6, &parse_tree__prog_io_util__Inst_8);
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            {
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Terms_7, &parse_tree__prog_io_util__Insts_9);
            }
            if (parse_tree__prog_io_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Insts_9));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word * parse_tree__prog_io_util__Mode_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
    MR_Word parse_tree__prog_io_util__TermArgs_8;
    MR_Word parse_tree__prog_io_util__V_9_9;
    MR_String parse_tree__prog_io_util__V_19_19;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) ">>") == 0);
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__InstTermA_10;
            MR_Word parse_tree__prog_io_util__InstTermB_11;
            MR_Word parse_tree__prog_io_util__InstA_12;
            MR_Word parse_tree__prog_io_util__InstB_13;
            MR_Word parse_tree__prog_io_util__V_20_20;
            MR_Word parse_tree__prog_io_util__V_21_21;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
                parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
                        }
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            {
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                            }
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                  *parse_tree__prog_io_util__Mode_6 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
                                }
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_String parse_tree__prog_io_util__V_22_22;

            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "is") == 0);
              }
            if (parse_tree__prog_io_util__succeeded)
              {
                MR_Word parse_tree__prog_io_util__BeforeIsTerm_14;
                MR_Word parse_tree__prog_io_util__DetTerm_15;
                MR_Word parse_tree__prog_io_util__V_23_23;
                MR_Word parse_tree__prog_io_util__V_24_24;

                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__BeforeIsTerm_14, parse_tree__prog_io_util__DetTerm_15, parse_tree__prog_io_util__Mode_6);
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__Name_16;
                MR_Word parse_tree__prog_io_util__Args_17;
                MR_Word parse_tree__prog_io_util__ConvertedArgs_18;

                {
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_16, &parse_tree__prog_io_util__Args_17);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    {
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_17, &parse_tree__prog_io_util__ConvertedArgs_18);
                    }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__Mode_6 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_16));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_18));
                        }
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__prog_io_util__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__H_8;
        MR_Word parse_tree__prog_io_util__T_9;

        {
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            {
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
            if (parse_tree__prog_io_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
  MR_Word parse_tree__prog_io_util__Term0_4,
  MR_Word * parse_tree__prog_io_util__Purity_5,
  MR_Word * parse_tree__prog_io_util__Term_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__Term1_8;
    MR_Word parse_tree__prog_io_util__Purity0_10;
    MR_String parse_tree__prog_io_util__PurityName_7;
    MR_Word parse_tree__prog_io_util__V_11_11;
    MR_Word parse_tree__prog_io_util__V_12_12;
    MR_Word parse_tree__prog_io_util__V_13_13;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
      }
    else
      {
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
  MR_Word parse_tree__prog_io_util__Type_3,
  MR_Word * parse_tree__prog_io_util__Term_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__Context_5;

    {
      parse_tree__prog_io_util__Context_5 = mercury__term__context_init_0_f_0();
    }
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__prog_io_util__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_util__Var_8;
          MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));

          {
            parse_tree__prog_io_util__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__prog_io_util__Term_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_io_util__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
          MR_Word parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
          MR_Word parse_tree__prog_io_util__ArgTerms_12;
          MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

          {
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_10, &parse_tree__prog_io_util__ArgTerms_12);
          }
          {
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_9, parse_tree__prog_io_util__ArgTerms_12, parse_tree__prog_io_util__Term_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__prog_io_util__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
          MR_String parse_tree__prog_io_util__Name_14;
          MR_Word parse_tree__prog_io_util__V_45_45;

          {
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_13, &parse_tree__prog_io_util__Name_14);
          }
          {
            parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__prog_io_util__Term_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__prog_io_util__Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_util__ArgTerms_51;
              MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

              {
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_50, &parse_tree__prog_io_util__ArgTerms_51);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_util__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_51));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__prog_io_util__MaybeRet_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_util__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));
              MR_Word parse_tree__prog_io_util__Term2_22;
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_util__ArgTerms_49;

              {
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_49);
              }
              if ((parse_tree__prog_io_util__MaybeRet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
                  }
                }
              else
                {
                  MR_Word parse_tree__prog_io_util__Ret_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_15, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_io_util__Term1_20;
                  MR_Word parse_tree__prog_io_util__RetTerm_21;
                  MR_Word parse_tree__prog_io_util__V_42_42;
                  MR_Word parse_tree__prog_io_util__V_43_43;

                  {
                    parse_tree__prog_io_util__Term1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
                  }
                  {
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_18, &parse_tree__prog_io_util__RetTerm_21);
                  }
                  {
                    parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_21));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_20));
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
                  }
                  {
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
                  }
                }
              switch (parse_tree__prog_io_util__Purity_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__prog_io_util__Context_72;
                    MR_Word parse_tree__prog_io_util__V_75_75;

                    {
                      parse_tree__prog_io_util__Context_72 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_util__Term_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_72));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__Term2_22;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_io_util__Context_65;
                    MR_Word parse_tree__prog_io_util__V_68_68;

                    {
                      parse_tree__prog_io_util__Context_65 = mercury__term__context_init_0_f_0();
                    }
                    {
                      parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_util__Term_4 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_65));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__prog_io_util__V_32_32;
              MR_Word parse_tree__prog_io_util__V_33_33;
              MR_Word parse_tree__prog_io_util__TVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
              MR_Word parse_tree__prog_io_util__Var_53;
              MR_Word parse_tree__prog_io_util__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
              MR_Word parse_tree__prog_io_util__ArgTerms_55;
              MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));

              {
                parse_tree__prog_io_util__Var_53 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_52);
              }
              {
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_54, &parse_tree__prog_io_util__ArgTerms_55);
              }
              {
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_53));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
              }
              {
                parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__prog_io_util__Term_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_type_name_1_p_0(
  MR_String parse_tree__prog_io_util__Name_2)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      MR_Word parse_tree__prog_io_util__V_3_3;

      {
        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
      }
    }
    if (!(parse_tree__prog_io_util__succeeded))
      parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_2, (MR_String) "func") == 0);
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_types_4_p_0(
  MR_Word parse_tree__prog_io_util__Terms_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
  MR_Word * parse_tree__prog_io_util__Result_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__RevTypes_9;
    MR_Word parse_tree__prog_io_util__Specs_10;

    {
      parse_tree__prog_io_util__parse_types_acc_7_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__RevTypes_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__Specs_10);
    }
    if ((parse_tree__prog_io_util__Specs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__prog_io_util__V_15_15;

        {
          parse_tree__prog_io_util__V_15_15 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_util__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__prog_io_util__Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_10));
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_types_2_p_0(
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__Types_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__VarSet_5;
    MR_Word parse_tree__prog_io_util__ContextPieces_6;
    MR_Word parse_tree__prog_io_util__V_7_7;

    {
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__prog_io_util__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, &parse_tree__prog_io_util__V_7_7);
    }
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_type_4_p_0(
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
  MR_Word * parse_tree__prog_io_util__Result_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__prog_io_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__prog_io_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_12, (MR_Integer) 0)));
              MR_Word parse_tree__prog_io_util__KnownTypeKind_22;

              {
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_21, parse_tree__prog_io_util__ArgTerms_13, &parse_tree__prog_io_util__KnownTypeKind_22);
              }
              if (parse_tree__prog_io_util__succeeded)
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__KnownTypeKind_22)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_util__Result_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__prog_io_util__CompoundTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

                      {
                        parse_tree__prog_io_util__parse_compound_type_5_p_0(parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__CompoundTypeKind_24, parse_tree__prog_io_util__Result_8);
                      }
                    }
                    break;
                }
              else
                {
                  MR_Word parse_tree__prog_io_util__NameResult_25;

                  {
                    parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_25);
                  }
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_25)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__prog_io_util__Specs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_util__Result_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_35));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_util__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));
                      MR_Word parse_tree__prog_io_util__SymNameArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 1)));
                      MR_Word parse_tree__prog_io_util__SymNameArgsResult_28;

                      {
                        parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__SymNameArgTerms_27, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__SymNameArgsResult_28);
                      }
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28)) == (MR_mktag((MR_Integer) 0))))
                        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28;
                      else
                        {
                          MR_Word parse_tree__prog_io_util__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__SymNameArgsResult_28, (MR_Integer) 0)));
                          MR_Word parse_tree__prog_io_util__V_31_31;

                          {
                            parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_26));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_29));
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__prog_io_util__Result_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
            break;
          case (MR_Integer) 3:
            {
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Var_11;
        MR_Word parse_tree__prog_io_util__V_33_33;
        MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
        }
        {
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_util__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_type_2_p_0(
  MR_Word parse_tree__prog_io_util__Term_3,
  MR_Word * parse_tree__prog_io_util__Type_4)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;
    MR_Word parse_tree__prog_io_util__VarSet_5;
    MR_Word parse_tree__prog_io_util__ContextPieces_6;
    MR_Word parse_tree__prog_io_util__V_7_7;

    {
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__prog_io_util__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, &parse_tree__prog_io_util__V_7_7);
    }
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__prog_io_util__succeeded)
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_general_5_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_28,
  MR_Word parse_tree__prog_io_util__MaybeModuleName_6,
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_7,
  MR_Word parse_tree__prog_io_util__VarSet_8,
  MR_Word parse_tree__prog_io_util__ContextPieces_9,
  MR_Word * parse_tree__prog_io_util__PredAndArgsResult_10)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
    MR_Word parse_tree__prog_io_util__Result_18;
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
    MR_Word parse_tree__prog_io_util__V_22_22;
    MR_String parse_tree__prog_io_util__V_23_23;
    MR_Word parse_tree__prog_io_util__V_24_24;
    MR_Word parse_tree__prog_io_util__V_25_25;
    MR_Word parse_tree__prog_io_util__V_26_26;
    MR_Word parse_tree__prog_io_util__V_13_13;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
        {
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
        }
      }
    else
      {
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    {
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

        {
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
      }
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
    else
      {
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
        MR_Word parse_tree__prog_io_util__V_27_27;

        {
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_20,
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_5,
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
  MR_Word * parse_tree__prog_io_util__SymName_7,
  MR_Word * parse_tree__prog_io_util__ArgTerms_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
    MR_Word parse_tree__prog_io_util__V_16_16;
    MR_Word parse_tree__prog_io_util__V_13_13;
    MR_String parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_15_15;
    MR_Word parse_tree__prog_io_util__V_17_17;
    MR_Word parse_tree__prog_io_util__V_11_11;
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

        {
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            {
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
            }
            {
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
      }
    else
      {
        {
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
        if (parse_tree__prog_io_util__succeeded)
          {
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
            parse_tree__prog_io_util__succeeded = MR_TRUE;
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_17,
  MR_Word parse_tree__prog_io_util__PorFPredAndArityTerm_5,
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
  MR_Word * parse_tree__prog_io_util__SymName_7,
  MR_Integer * parse_tree__prog_io_util__Arity_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
    MR_Word parse_tree__prog_io_util__Args_10;
    MR_Word parse_tree__prog_io_util__Arg_12;
    MR_Word parse_tree__prog_io_util__ModuleName_13;
    MR_Word parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_15_15;
    MR_String parse_tree__prog_io_util__V_16_16;
    MR_Word parse_tree__prog_io_util__V_11_11;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
              {
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
            else
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
              {
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
            else
              parse_tree__prog_io_util__succeeded = MR_FALSE;
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
                        {
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_4,
  MR_Word * parse_tree__prog_io_util__SymName_5,
  MR_Integer * parse_tree__prog_io_util__Arity_6)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded;

    {
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
    return parse_tree__prog_io_util__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
  MR_Word parse_tree__prog_io_util__ModuleName_5,
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_6,
  MR_Word * parse_tree__prog_io_util__SymName_7,
  MR_Integer * parse_tree__prog_io_util__Arity_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
    MR_Word parse_tree__prog_io_util__V_13_13;
    MR_String parse_tree__prog_io_util__V_14_14;
    MR_Word parse_tree__prog_io_util__V_15_15;
    MR_Word parse_tree__prog_io_util__V_16_16;
    MR_Word parse_tree__prog_io_util__V_17_17;
    MR_Word parse_tree__prog_io_util__V_18_18;
    MR_Word parse_tree__prog_io_util__V_19_19;
    MR_Word parse_tree__prog_io_util__V_11_11;
    MR_Word parse_tree__prog_io_util__V_12_12;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            {
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__prog_io_util__succeeded)
                                      {
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return parse_tree__prog_io_util__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_96,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__V_40_40;
    MR_String parse_tree__prog_io_util__V_41_41;
    MR_Word parse_tree__prog_io_util__V_42_42;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
        MR_Word parse_tree__prog_io_util__Tail_11;
        MR_Word parse_tree__prog_io_util__V_47_47;
        MR_String parse_tree__prog_io_util__V_48_48;
        MR_Word parse_tree__prog_io_util__V_49_49;
        MR_Word parse_tree__prog_io_util__V_50_50;
        MR_Word parse_tree__prog_io_util__V_51_51;
        MR_Word parse_tree__prog_io_util__V_12_12;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
            parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_50_50)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_23;
            MR_Word parse_tree__prog_io_util__MaybeTailVars_25;
            MR_Word parse_tree__prog_io_util__VarKind0_15;
            MR_Word parse_tree__prog_io_util__VarKind_26;
            MR_Word parse_tree__prog_io_util__TailVars_27;
            MR_Word parse_tree__prog_io_util__TailStateVars_28;
            MR_Word parse_tree__prog_io_util__TailDotVars_29;
            MR_Word parse_tree__prog_io_util__TailColonVars_30;

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
                MR_Word parse_tree__prog_io_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_127_127;
                MR_Word parse_tree__prog_io_util__V_128_128;
                MR_String parse_tree__prog_io_util__V_129_129;
                MR_Word parse_tree__prog_io_util__V_131_131;
                MR_Word parse_tree__prog_io_util__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
                MR_Word parse_tree__prog_io_util__V_130_130;

                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_125_125)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 0)));
                    parse_tree__prog_io_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 1)));
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_126_126)) == (MR_mktag((MR_Integer) 0)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_126_126, (MR_Integer) 0)));
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_128_128)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 0)));
                                parse_tree__prog_io_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 1)));
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!") == 0))
                                  {
                                    {
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                                else
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!.") == 0))
                                  {
                                    {
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                                else
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!:") == 0))
                                  {
                                    {
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                                else
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
              }
            else
              {
                MR_Word parse_tree__prog_io_util__HeadSpec_24;
                MR_Word parse_tree__prog_io_util__V_68_68;

                {
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_24);
                }
                {
                  parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_24));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
                }
              }
            {
              parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_25);
            }
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__VarKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_25)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__TailVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 0)));
                    parse_tree__prog_io_util__TailStateVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 1)));
                    parse_tree__prog_io_util__TailDotVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 2)));
                    parse_tree__prog_io_util__TailColonVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 3)));
                  }
              }
            if (parse_tree__prog_io_util__succeeded)
              switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word parse_tree__prog_io_util__V_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));
                    MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

                    {
                      parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                    }
                    {
                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__V_31, parse_tree__prog_io_util__TailVars_27);
                    }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        MR_Word parse_tree__prog_io_util__Spec_32;
                        MR_Word parse_tree__prog_io_util__V_76_76;

                        {
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_32);
                        }
                        {
                          parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_32));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_util__Vars_33;

                        {
                          parse_tree__prog_io_util__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_33));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__prog_io_util__SV_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

                      {
                        parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                      }
                      {
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__prog_io_util__succeeded))
                      {
                        {
                          MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

                          {
                            parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                          }
                          {
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__prog_io_util__succeeded))
                          {
                            MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

                            {
                              parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                            }
                            {
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        MR_Word parse_tree__prog_io_util__V_74_74;
                        MR_Word parse_tree__prog_io_util__Spec_84;

                        {
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_84);
                        }
                        {
                          parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_84));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_util__StateVars_35;

                        {
                          parse_tree__prog_io_util__StateVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_34));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_35));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word parse_tree__prog_io_util__SV_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

                      {
                        parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                      }
                      {
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__prog_io_util__succeeded))
                      {
                        {
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

                          {
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                          }
                          {
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__prog_io_util__succeeded))
                          {
                            MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

                            {
                              parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                            }
                            {
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        MR_Word parse_tree__prog_io_util__V_72_72;
                        MR_Word parse_tree__prog_io_util__Spec_87;

                        {
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_87);
                        }
                        {
                          parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_87));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_util__DotVars_36;

                        {
                          parse_tree__prog_io_util__DotVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_90));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_36));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word parse_tree__prog_io_util__SV_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

                    {
                      MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

                      {
                        parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                      }
                      {
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailStateVars_28);
                      }
                    }
                    if (!(parse_tree__prog_io_util__succeeded))
                      {
                        {
                          MR_Word parse_tree__prog_io_util__TypeInfo_114_114;

                          {
                            parse_tree__prog_io_util__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                          }
                          {
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_114_114, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailDotVars_29);
                          }
                        }
                        if (!(parse_tree__prog_io_util__succeeded))
                          {
                            MR_Word parse_tree__prog_io_util__TypeInfo_116_116;

                            {
                              parse_tree__prog_io_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                            }
                            {
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_116_116, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailColonVars_30);
                            }
                          }
                      }
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        MR_Word parse_tree__prog_io_util__V_70_70;
                        MR_Word parse_tree__prog_io_util__Spec_91;

                        {
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_91);
                        }
                        {
                          parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__prog_io_util__ColonVars_37;

                        {
                          parse_tree__prog_io_util__ColonVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_94));
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_37));
                        }
                      }
                  }
                  break;
              }
            else
              {
                MR_Word parse_tree__prog_io_util__TypeInfo_118_118;
                MR_Word parse_tree__prog_io_util__TypeInfo_120_120;
                MR_Word parse_tree__prog_io_util__TypeInfo_122_122;
                MR_Word parse_tree__prog_io_util__HeadSpecs_38;
                MR_Word parse_tree__prog_io_util__TailSpecs_39;
                MR_Word parse_tree__prog_io_util__V_78_78;

                {
                  parse_tree__prog_io_util__TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                }
                {
                  parse_tree__prog_io_util__HeadSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_118_118, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23);
                }
                {
                  parse_tree__prog_io_util__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
                }
                {
                  parse_tree__prog_io_util__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_120_120));
                }
                {
                  parse_tree__prog_io_util__TailSpecs_39 = parse_tree__maybe_error__get_any_errors4_1_f_0(parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_25);
                }
                {
                  parse_tree__prog_io_util__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_38, parse_tree__prog_io_util__TailSpecs_39);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
                }
              }
          }
        else
          {
            MR_Word parse_tree__prog_io_util__V_80_80;
            MR_Word parse_tree__prog_io_util__Spec_95;

            {
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_95);
            }
            {
              parse_tree__prog_io_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_95));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_util__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_80_80));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_62,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__V_32_32;
    MR_String parse_tree__prog_io_util__V_33_33;
    MR_Word parse_tree__prog_io_util__V_34_34;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_33_33, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9]);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
        MR_Word parse_tree__prog_io_util__TailTerm_11;
        MR_Word parse_tree__prog_io_util__V_37_37;
        MR_String parse_tree__prog_io_util__V_38_38;
        MR_Word parse_tree__prog_io_util__V_39_39;
        MR_Word parse_tree__prog_io_util__V_40_40;
        MR_Word parse_tree__prog_io_util__V_41_41;
        MR_Word parse_tree__prog_io_util__V_12_12;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
            parse_tree__prog_io_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_37_37)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_38_38, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_19;
            MR_Word parse_tree__prog_io_util__MaybeTailVars_21;
            MR_Word parse_tree__prog_io_util__VarKind0_15;
            MR_Word parse_tree__prog_io_util__VarKind_22;
            MR_Word parse_tree__prog_io_util__TailVars_23;
            MR_Word parse_tree__prog_io_util__TailStateVars_24;

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__SV0_16;
                MR_Word parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_String parse_tree__prog_io_util__V_43_43;
                MR_Word parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
                MR_Word parse_tree__prog_io_util__V_45_45;
                MR_Word parse_tree__prog_io_util__V_46_46;
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
                MR_Word parse_tree__prog_io_util__V_17_17;

                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_43_43, (MR_String) "!") == 0);
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__prog_io_util__succeeded)
                              {
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__prog_io_util__succeeded)
                                  {
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
                                    {
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
                                    }
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
                }
                parse_tree__prog_io_util__succeeded = MR_TRUE;
              }
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
              }
            else
              {
                MR_Word parse_tree__prog_io_util__HeadSpec_20;
                MR_Word parse_tree__prog_io_util__V_48_48;

                {
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_20);
                }
                {
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_20));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
                }
              }
            {
              parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_21);
            }
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__VarKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__TailVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 0)));
                    parse_tree__prog_io_util__TailStateVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 1)));
                  }
              }
            if (parse_tree__prog_io_util__succeeded)
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_22)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word parse_tree__prog_io_util__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_io_util__TypeInfo_64_64;

                  {
                    parse_tree__prog_io_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
                  }
                  {
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_64_64, parse_tree__prog_io_util__V_25, parse_tree__prog_io_util__TailVars_23);
                  }
                  if (parse_tree__prog_io_util__succeeded)
                    {
                      MR_Word parse_tree__prog_io_util__Spec_26;
                      MR_Word parse_tree__prog_io_util__V_52_52;

                      {
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_26);
                      }
                      {
                        parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_util__Vars_27;

                      {
                        parse_tree__prog_io_util__Vars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_27));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__prog_io_util__SV_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
                  MR_Word parse_tree__prog_io_util__TypeInfo_66_66;

                  {
                    parse_tree__prog_io_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
                  }
                  {
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_66_66, parse_tree__prog_io_util__SV_28, parse_tree__prog_io_util__TailStateVars_24);
                  }
                  if (parse_tree__prog_io_util__succeeded)
                    {
                      MR_Word parse_tree__prog_io_util__V_50_50;
                      MR_Word parse_tree__prog_io_util__Spec_58;

                      {
                        parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_58);
                      }
                      {
                        parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_58));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__prog_io_util__StateVars_29;

                      {
                        parse_tree__prog_io_util__StateVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_28));
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_29));
                      }
                    }
                }
            else
              {
                MR_Word parse_tree__prog_io_util__TypeInfo_68_68;
                MR_Word parse_tree__prog_io_util__TypeInfo_70_70;
                MR_Word parse_tree__prog_io_util__TypeInfo_72_72;
                MR_Word parse_tree__prog_io_util__HeadSpecs_30;
                MR_Word parse_tree__prog_io_util__TailSpecs_31;
                MR_Word parse_tree__prog_io_util__V_54_54;

                {
                  parse_tree__prog_io_util__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
                }
                {
                  parse_tree__prog_io_util__HeadSpecs_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_68_68, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19);
                }
                {
                  parse_tree__prog_io_util__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
                }
                {
                  parse_tree__prog_io_util__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_70_70));
                }
                {
                  parse_tree__prog_io_util__TailSpecs_31 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_util__TypeInfo_72_72, parse_tree__prog_io_util__TypeInfo_72_72, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_21);
                }
                {
                  parse_tree__prog_io_util__V_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_30, parse_tree__prog_io_util__TailSpecs_31);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
                }
              }
          }
        else
          {
            MR_Word parse_tree__prog_io_util__V_56_56;
            MR_Word parse_tree__prog_io_util__Spec_61;

            {
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_61);
            }
            {
              parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_61));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_util__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_46,
  MR_Word parse_tree__prog_io_util__Term_5,
  MR_Word parse_tree__prog_io_util__VarSet_6,
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__V_27_27;
    MR_String parse_tree__prog_io_util__V_28_28;
    MR_Word parse_tree__prog_io_util__V_29_29;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
        MR_Word parse_tree__prog_io_util__TailTerm_11;
        MR_Word parse_tree__prog_io_util__V_31_31;
        MR_String parse_tree__prog_io_util__V_32_32;
        MR_Word parse_tree__prog_io_util__V_33_33;
        MR_Word parse_tree__prog_io_util__V_34_34;
        MR_Word parse_tree__prog_io_util__V_35_35;
        MR_Word parse_tree__prog_io_util__V_12_12;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_32_32, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
            MR_Word parse_tree__prog_io_util__HeadVar_21;
            MR_Word parse_tree__prog_io_util__TailVars_22;

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__HeadSpec_19;
                MR_Word parse_tree__prog_io_util__V_37_37;

                {
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_19);
                }
                {
                  parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_19));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
                }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
                }
              }
            {
              parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
              }
            if (parse_tree__prog_io_util__succeeded)
              {
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;

                {
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
                }
                {
                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TypeInfo_48_48, parse_tree__prog_io_util__HeadVar_21, parse_tree__prog_io_util__TailVars_22);
                }
                if (parse_tree__prog_io_util__succeeded)
                  {
                    MR_Word parse_tree__prog_io_util__Spec_23;
                    MR_Word parse_tree__prog_io_util__V_39_39;

                    {
                      parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                    }
                    {
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__prog_io_util__Vars_24;

                    {
                      parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__TypeInfo_50_50;
                MR_Word parse_tree__prog_io_util__TypeInfo_52_52;
                MR_Word parse_tree__prog_io_util__HeadSpecs_25;
                MR_Word parse_tree__prog_io_util__TailSpecs_26;
                MR_Word parse_tree__prog_io_util__V_41_41;

                {
                  parse_tree__prog_io_util__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
                }
                {
                  parse_tree__prog_io_util__HeadSpecs_25 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_50_50, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15);
                }
                {
                  parse_tree__prog_io_util__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_50_50));
                }
                {
                  parse_tree__prog_io_util__TailSpecs_26 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_52_52, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_20);
                }
                {
                  parse_tree__prog_io_util__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_25, parse_tree__prog_io_util__TailSpecs_26);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
                }
              }
          }
        else
          {
            MR_Word parse_tree__prog_io_util__V_43_43;
            MR_Word parse_tree__prog_io_util__Spec_45;

            {
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_45);
            }
            {
              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_45));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_util__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__prog_io_util__parse_list_of_vars_4_p_0(
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
  MR_Word parse_tree__prog_io_util__VarSet_5,
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
  MR_Word parse_tree__prog_io_util__Term_7,
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
{
  {
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__prog_io_util__V_24_24;
    MR_String parse_tree__prog_io_util__V_25_25;
    MR_Word parse_tree__prog_io_util__V_26_26;
    MR_Word parse_tree__prog_io_util__V_9_9;

    if (parse_tree__prog_io_util__succeeded)
      {
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 0)));
        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 1)));
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 2)));
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_25_25, (MR_String) "[]") == 0);
              }
          }
      }
    if (parse_tree__prog_io_util__succeeded)
      {
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
      }
    else
      {
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
        MR_Word parse_tree__prog_io_util__TailTerm_11;
        MR_Word parse_tree__prog_io_util__V_28_28;
        MR_String parse_tree__prog_io_util__V_29_29;
        MR_Word parse_tree__prog_io_util__V_30_30;
        MR_Word parse_tree__prog_io_util__V_31_31;
        MR_Word parse_tree__prog_io_util__V_32_32;
        MR_Word parse_tree__prog_io_util__V_12_12;

        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_7)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__prog_io_util__succeeded)
          {
            parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 0)));
            parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 1)));
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 2)));
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[|]") == 0);
                if (parse_tree__prog_io_util__succeeded)
                  {
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__prog_io_util__succeeded)
                      {
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__prog_io_util__succeeded)
                          {
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
                            parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__prog_io_util__succeeded)
          {
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
            MR_Word parse_tree__prog_io_util__HeadVar_21;
            MR_Word parse_tree__prog_io_util__TailVars_22;

            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__prog_io_util__Spec_19;
                MR_Word parse_tree__prog_io_util__V_34_34;

                {
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__VarSet_5, (MR_String) "a variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_19);
                }
                {
                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_19));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
                }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

                {
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
                }
              }
            {
              parse_tree__prog_io_util__parse_list_of_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__TailTerm_11, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__prog_io_util__succeeded)
              {
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__prog_io_util__succeeded)
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
              }
            if (parse_tree__prog_io_util__succeeded)
              {
                MR_Word parse_tree__prog_io_util__V_36_36;

                {
                  parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
                }
              }
            else
              {
                MR_Word parse_tree__prog_io_util__TypeInfo_46_46;
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;
                MR_Word parse_tree__prog_io_util__Specs_23;
                MR_Word parse_tree__prog_io_util__V_37_37;
                MR_Word parse_tree__prog_io_util__V_38_38;

                {
                  parse_tree__prog_io_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_46_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_43));
                }
                {
                  parse_tree__prog_io_util__V_37_37 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_46_46, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15);
                }
                {
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_46_46));
                }
                {
                  parse_tree__prog_io_util__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_48_48, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_20);
                }
                {
                  parse_tree__prog_io_util__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_37_37, parse_tree__prog_io_util__V_38_38);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_23));
                }
              }
          }
        else
          {
            MR_Word parse_tree__prog_io_util__V_40_40;
            MR_Word parse_tree__prog_io_util__Spec_42;

            {
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__VarSet_5, (MR_String) "a list of variables", parse_tree__prog_io_util__Term_7, &parse_tree__prog_io_util__Spec_42);
            }
            {
              parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_42));
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_io_util__MaybeVars_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
            }
          }
      }
  }
}

void mercury__parse_tree__prog_io_util__init(void)
{
}

void mercury__parse_tree__prog_io_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_parser_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2pvar_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2tvar_0);
}

void mercury__parse_tree__prog_io_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_util. */
