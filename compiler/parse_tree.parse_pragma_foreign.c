/*
** Automatically generated from `parse_pragma_foreign.m'
** by the Mercury compiler,
** version rotd-2024-12-14
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


// :- module parse_tree.parse_pragma_foreign.
// :- implementation.

/*
INIT mercury__parse_tree__parse_pragma_foreign__init
ENDINIT
*/

#include "parse_tree.parse_pragma_foreign.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "string.builder.mih"



struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s {
  MR_bool parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14;
  jmp_buf parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__commit_0;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_215_215;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Var_183;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_212;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_213;
  MR_Box parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_1[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_export_enum_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_export_enum_attribute_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_export_enum_attribute_0[2];

static const MR_Integer parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_export_enum_attribute_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_0[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_1[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_2[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_3[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_3;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_4[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_4;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_5[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_5[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_5;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_6[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_6[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_6;

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_7;

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_8;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_9[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_9[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_9;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_10[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_10[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_10;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_11[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_11[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_11;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_12[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_12[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_12;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_13[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_13[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_13;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_14[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_14[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_14;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_15[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_15[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_15;

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_16[1];

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_16[1];

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_16;

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_3[13];

static const MR_DuPtagLayout parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_pragma_foreign_proc_attribute_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_pragma_foreign_proc_attribute_0[17];

static const MR_Integer parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_pragma_foreign_proc_attribute_0[17];

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1376__1_1_p_0(
  MR_Word LambdaHeadVar__1_27);

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign____Index____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_cur_module_sym_name_string_pair_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word PairTerm_9,
  MR_Word * MaybePair_10);

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_export_enum_attr_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeAttribute_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word PairTerm_7,
  MR_Word * MaybePair_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attrs_0_2,
  MR_Word * STATE_VARIABLE_Attrs_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word TypeTerm_7,
  MR_Word * MaybeTypeCtor_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0(
  MR_Word ContextPieces_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_function_name_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word FunctionTerm_7,
  MR_Word * MaybeFunction_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_ordinary_foreign_proc_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ForeignLanguage_12,
  MR_Word PredAndVarsTerm_13,
  MR_Word FlagsTerm_14,
  MR_Word CodeTerm_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0(
  MR_Word ForeignLanguage_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeAttributes_10);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_proc_attributes_list_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Integer HeadAttrNum_9,
  MR_Word * MaybeAttrs_10);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * Flag_6);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_export_body_2_p_0(
  MR_Word Term_3,
  MR_Word * MayExportBody_4);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_duplicate_2_p_0(
  MR_Word Term_3,
  MR_Word * MayDuplicate_4);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_registers_roots_2_p_0(
  MR_Word Term_3,
  MR_Word * RegistersRoots_4);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_box_policy_2_p_0(
  MR_Word Term_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_call_mm_tabled_2_p_0(
  MR_Word Term_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(
  MR_Word Term_3,
  MR_Word * LiteralOrInclude_4);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_decl_is_local_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * IsLocal_5);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word LangTerm_7,
  MR_Word * MaybeForeignLang_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_language_type_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeForeignTypeName_8);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_type_assertion_2_p_0(
  MR_Word Term_3,
  MR_Word * Assertion_4);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_1[344][2];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_8[2][6];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_10[1][4];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_11[1][8];


struct parse_tree__parse_pragma_foreign__vector_common_type_4_0_s {
  const MR_String parse_tree__parse_pragma_foreign__vector_common_type_4_0__vct_4_f_0;
  const MR_Word parse_tree__parse_pragma_foreign__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_4_0_s parse_tree__parse_pragma_foreign_vector_common_4[5];

struct parse_tree__parse_pragma_foreign__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_pragma_foreign__vector_common_type_5_0__vct_5_f_0;
  const MR_Word parse_tree__parse_pragma_foreign__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_5_0_s parse_tree__parse_pragma_foreign_vector_common_5[4];

struct parse_tree__parse_pragma_foreign__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_pragma_foreign__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__parse_pragma_foreign__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_6_0_s parse_tree__parse_pragma_foreign_vector_common_6[4];

struct parse_tree__parse_pragma_foreign__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_pragma_foreign__vector_common_type_7_0__vct_7_f_0;
  const MR_Word parse_tree__parse_pragma_foreign__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_7_0_s parse_tree__parse_pragma_foreign_vector_common_7[4];



static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_1[344][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "three or four arguments."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[22])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the third argument of"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[22])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the fourth argument of"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[22])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: foreign type assertion"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "repeated."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "foreign type assertion,"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list of foreign type assertions,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires at least two arguments"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the foreign language declaration itself)."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(a language specification and"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "second"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected either a"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a string containing code,"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "naming a file to include,"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "include_file(...)"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a term of the form"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected either"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In the second argument of a"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "exported"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "third"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may have at most three arguments"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a local/exported indication, and"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[54])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(a language specification,"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exactly two arguments."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected a"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "string containing foreign code,"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exactly four arguments."))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exactly three arguments."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[120]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[122])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[127])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[127])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "two, three or four arguments."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for a type that is"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[140]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__parse_pragma_foreign_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "defined in the same module."))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[143]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mapping constructor name:"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[150]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to foreign values"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list mapping constructors"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must not be empty."))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[12])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[21])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[107])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "module name,"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[168]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "foreign type descriptor,"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[170]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[116])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[116])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[107])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable in pragma foreign_proc."))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "_"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "anonymous"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented: "))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[185]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: expected"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[187]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Var::mode"))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[197])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[199])))
  },
  /* row 201 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[200])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[198])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[196])))
  },
  /* row 204 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[203])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[201])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[205])))
  },
  /* row 208 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[207])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[204])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[205])))
  },
  /* row 211 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[210])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[208])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[206])))
  },
  /* row 213 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[212])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[211])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[216])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[213])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[214])))
  },
  /* row 220 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[219])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[217])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[215])))
  },
  /* row 222 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[221])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[220])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[225])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[222])))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[229])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[226])))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[231])))
  },
  /* row 233 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[232])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[230])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[234])))
  },
  /* row 237 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[236])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[233])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[238])))
  },
  /* row 241 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[240])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[237])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[242])))
  },
  /* row 244 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[243])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[241])))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[242]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[238])))
  },
  /* row 246 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[245])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[244])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[248]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[247])))
  },
  /* row 250 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[249])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[246])))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[251]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[248])))
  },
  /* row 253 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[252])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[250])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[251]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[247])))
  },
  /* row 255 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[254])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[253])))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[256])))
  },
  /* row 259 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[258])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[255])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[256])))
  },
  /* row 262 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[261])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[259])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[260]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[257])))
  },
  /* row 264 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[263])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[262])))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[265]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[256])))
  },
  /* row 267 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[266])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[264])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[265]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[257])))
  },
  /* row 269 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[268])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[267])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[265]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[260])))
  },
  /* row 271 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[270])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__parse_pragma_foreign_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(2, &parse_tree__parse_pragma_foreign_scalar_common_3[5])))
  },
  /* row 273 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[272])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[271])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[5])))
  },
  /* row 275 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[274])),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[273])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[276]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 278 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[277])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "conflicting attributes"))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[279]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in attribute list."))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[281]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "element of the attribute list:"))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[283]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[105])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "valid foreign_proc attribute,"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[285]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected an"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[287]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 289 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[288])))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute list,"))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[290]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected the"))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[292]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 294 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[293])))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "foreign language name of the exported procedure,"))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[295]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "possibly qualified name,"))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[297]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 299 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected a mapping element of the form"))
  },
  /* row 300 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[299]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 301 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[300])))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "possibly_qualified_name - string"))
  },
  /* row 303 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[302]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[88])))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 305 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[304]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 306 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[305])))
  },
  /* row 307 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 308 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[307]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 309 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "prefix"))
  },
  /* row 310 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[309]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[308])))
  },
  /* row 311 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not occur more than once."))
  },
  /* row 312 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[311]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 313 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "list of attributes,"))
  },
  /* row 314 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[313]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 315 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 316 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[315]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 317 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[316])))
  },
  /* row 318 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "prefix(<foreign_name>)"))
  },
  /* row 319 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[318]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 320 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 321 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[320]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 322 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "uppercase"))
  },
  /* row 323 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[322]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[88])))
  },
  /* row 324 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "defined in the same module,"))
  },
  /* row 325 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[324]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 326 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row 327 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[326]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[325])))
  },
  /* row 328 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "name of a foreign language,"))
  },
  /* row 329 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[328]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 330 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The valid languages are"))
  },
  /* row 331 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[330]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 332 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[331])))
  },
  /* row 333 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Support for Erlang has been discontinued."))
  },
  /* row 334 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[333]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])))
  },
  /* row 335 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 336 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[335]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 337 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[336])))
  },
  /* row 338 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_name/type_arity"))
  },
  /* row 339 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[338]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[88])))
  },
  /* row 340 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[67])))
  },
  /* row 341 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[340])))
  },
  /* row 342 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[67])))
  },
  /* row 343 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[342])))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_8[0])),
    ((MR_Box) (parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_10[0])),
    ((MR_Box) (parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_8[1])),
    ((MR_Box) (parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_3[9][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "must be")) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[5]))) },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_10[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_4_0_s parse_tree__parse_pragma_foreign_vector_common_4[5] = {
  /* row   0 */
  {
    (MR_String) "does_not_have_roots",
    (MR_Integer) 2
  },
  /* row   1 */
  {
    (MR_String) "does_not_register_roots",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "doesnt_have_roots",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "doesnt_register_roots",
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "registers_roots",
    (MR_Integer) 0
  },
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_5_0_s parse_tree__parse_pragma_foreign_vector_common_5[4] = {
  /* row   0 */
  {
    (MR_String) "may_call_mercury",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "non_recursive",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "recursive",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "will_not_call_mercury",
    (MR_Integer) 1
  },
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_6_0_s parse_tree__parse_pragma_foreign_vector_common_6[4] = {
  /* row   0 */
  {
    (MR_String) "not_tabled_for_io",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "tabled_for_descendant_io",
    (MR_Integer) 3
  },
  /* row   2 */
  {
    (MR_String) "tabled_for_io",
    (MR_Integer) 1
  },
  /* row   3 */
  {
    (MR_String) "tabled_for_io_unitize",
    (MR_Integer) 2
  },
};

static /* final */ const struct parse_tree__parse_pragma_foreign__vector_common_type_7_0_s parse_tree__parse_pragma_foreign_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "allocates_bounded_memory",
    (MR_Integer) 1
  },
  /* row   1 */
  {
    (MR_String) "allocates_unbounded_memory",
    (MR_Integer) 2
  },
  /* row   2 */
  {
    (MR_String) "does_not_allocate_memory",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "doesnt_allocate_memory",
    (MR_Integer) 0
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_2__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_0 = {
  (MR_String) "ee_attr_prefix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_export_enum_attribute_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_1 = {
  (MR_String) "ee_attr_upper",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_1,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_export_enum_attribute_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_0[1] = { &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_1[1] = { &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_1 };

static const MR_DuPtagLayout parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_export_enum_attribute_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_export_enum_attribute_0[2] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_0,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_1
};

static const MR_Integer parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_export_enum_attribute_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma_foreign",
  (MR_String) "collected_export_enum_attribute",
  { parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_export_enum_attribute_0 },
  { parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_export_enum_attribute_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_export_enum_attribute_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_0 = {
  (MR_String) "coll_may_call_mercury",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_0,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_thread_safe_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_1 = {
  (MR_String) "coll_thread_safe",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_1,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_2 = {
  (MR_String) "coll_tabled_for_io",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_2,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_3 = {
  (MR_String) "coll_purity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_3,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_user_annotated_sharing_0) };

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_4 = {
  (MR_String) "coll_user_annotated_sharing",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_5[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_backend_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_5[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_5 = {
  (MR_String) "coll_backend",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_5,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_terminates_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_6 = {
  (MR_String) "coll_terminates",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_6,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_7 = {
  (MR_String) "coll_will_not_throw_exception",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_8 = {
  (MR_String) "coll_ordinary_despite_detism",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_9[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_modify_trail_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_9[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_9 = {
  (MR_String) "coll_may_modify_trail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(9),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_9,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_10[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mm_tabled_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_10[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_10 = {
  (MR_String) "coll_may_call_mm_tabled",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(10),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_10,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_11[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_11[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_11 = {
  (MR_String) "coll_box_policy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(11),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_11,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_12[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_affects_liveness_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_12[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_12 = {
  (MR_String) "coll_affects_liveness",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(12),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_12,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_13[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_allocates_memory_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_13[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_13 = {
  (MR_String) "coll_allocates_memory",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(13),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_13,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_13,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_14[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_registers_roots_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_14[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_14 = {
  (MR_String) "coll_registers_roots",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(14),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_14,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_14,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_15[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_15[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_15 = {
  (MR_String) "coll_may_duplicate",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(15),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_15,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_15,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_16[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_export_body_0) };

static const MR_DuArgLocn parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_16[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_16 = {
  (MR_String) "coll_may_export_body",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(16),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_16,
  NULL,
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_locns_collected_pragma_foreign_proc_attribute_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_0[2] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_7,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_8
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_1[1] = { &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_2[1] = { &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_3[13] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_2,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_3,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_4,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_5,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_6,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_9,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_10,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_11,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_12,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_13,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_14,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_15,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_16
};

static const MR_DuPtagLayout parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_pragma_foreign_proc_attribute_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(13),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_pragma_foreign_proc_attribute_0[17] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_12,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_13,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_5,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_11,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_0,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_10,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_15,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_16,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_9,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_8,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_3,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_14,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_2,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_6,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_1,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_4,
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_7
};

static const MR_Integer parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_pragma_foreign_proc_attribute_0[17] = {
  (MR_Integer) 4,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 15,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 16,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 11,
  (MR_Integer) 6,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_pragma_foreign",
  (MR_String) "collected_pragma_foreign_proc_attribute",
  { parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_name_ordered_collected_pragma_foreign_proc_attribute_0 },
  { parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_ptag_ordered_collected_pragma_foreign_proc_attribute_0 },
  (MR_Integer) 17,
  UINT16_C(12),
  parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__functor_number_map_collected_pragma_foreign_proc_attribute_0,

};

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1376__1_1_p_0(
  MR_Word LambdaHeadVar__1_27)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_27)) == (MR_Integer) 0);

  if (succeeded)
  {
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_37 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_38 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_37 == CastY_38);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    parse_tree__parse_pragma_foreign____Index____collected_pragma_foreign_proc_attribute_0_0(HeadVar__2_2, &IndexX_4);
    parse_tree__parse_pragma_foreign____Index____collected_pragma_foreign_proc_attribute_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer Var_62;
              MR_Integer Var_63;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_62 = (MR_Integer) (ArgX1_7);
                Var_63 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_62 < Var_63);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_62 > Var_63);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgY1_10;
              MR_Integer Var_80;
              MR_Integer Var_81;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                Var_80 = (MR_Integer) (ArgX1_9);
                Var_81 = (MR_Integer) (ArgY1_10);
                succeeded = (Var_80 < Var_81);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_80 > Var_81);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_12;
                  MR_Integer Var_76;
                  MR_Integer Var_77;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_76 = (MR_Integer) (ArgX1_11);
                    Var_77 = (MR_Integer) (ArgY1_12);
                    succeeded = (Var_76 < Var_77);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_76 > Var_77);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_14;
                  MR_Integer Var_72;
                  MR_Integer Var_73;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_72 = (MR_Integer) (ArgX1_13);
                    Var_73 = (MR_Integer) (ArgY1_14);
                    succeeded = (Var_72 < Var_73);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_72 > Var_73);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_16;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data_pragma____Compare____user_annotated_sharing_0_0(&CompareResult_6, ArgX1_15, ArgY1_16);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_18;
                  MR_Integer Var_58;
                  MR_Integer Var_59;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_58 = (MR_Integer) (ArgX1_17);
                    Var_59 = (MR_Integer) (ArgY1_18);
                    succeeded = (Var_58 < Var_59);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_58 > Var_59);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_20;
                  MR_Integer Var_78;
                  MR_Integer Var_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_78 = (MR_Integer) (ArgX1_19);
                    Var_79 = (MR_Integer) (ArgY1_20);
                    succeeded = (Var_78 < Var_79);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_78 > Var_79);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_22;
                  MR_Integer Var_70;
                  MR_Integer Var_71;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_70 = (MR_Integer) (ArgX1_21);
                    Var_71 = (MR_Integer) (ArgY1_22);
                    succeeded = (Var_70 < Var_71);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_70 > Var_71);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_24;
                  MR_Integer Var_64;
                  MR_Integer Var_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_64 = (MR_Integer) (ArgX1_23);
                    Var_65 = (MR_Integer) (ArgY1_24);
                    succeeded = (Var_64 < Var_65);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_64 > Var_65);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_26;
                  MR_Integer Var_60;
                  MR_Integer Var_61;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_60 = (MR_Integer) (ArgX1_25);
                    Var_61 = (MR_Integer) (ArgY1_26);
                    succeeded = (Var_60 < Var_61);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_60 > Var_61);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_28;
                  MR_Integer Var_54;
                  MR_Integer Var_55;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_54 = (MR_Integer) (ArgX1_27);
                    Var_55 = (MR_Integer) (ArgY1_28);
                    succeeded = (Var_54 < Var_55);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_54 > Var_55);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_30;
                  MR_Integer Var_56;
                  MR_Integer Var_57;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_56 = (MR_Integer) (ArgX1_29);
                    Var_57 = (MR_Integer) (ArgY1_30);
                    succeeded = (Var_56 < Var_57);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_56 > Var_57);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_32;
                  MR_Integer Var_74;
                  MR_Integer Var_75;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_74 = (MR_Integer) (ArgX1_31);
                    Var_75 = (MR_Integer) (ArgY1_32);
                    succeeded = (Var_74 < Var_75);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_74 > Var_75);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_34;
                  MR_Integer Var_66;
                  MR_Integer Var_67;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_66 = (MR_Integer) (ArgX1_33);
                    Var_67 = (MR_Integer) (ArgY1_34);
                    succeeded = (Var_66 < Var_67);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_66 > Var_67);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_36;
                  MR_Integer Var_68;
                  MR_Integer Var_69;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_68 = (MR_Integer) (ArgX1_35);
                    Var_69 = (MR_Integer) (ArgY1_36);
                    succeeded = (Var_68 < Var_69);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_68 > Var_69);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign____Index____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_34 == CastX_33);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_7 == ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data_pragma____Unify____user_annotated_sharing_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_21 == ArgY1_22);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_25 == ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_27 == ArgY1_28);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_29 == ArgY1_30);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_31 == ArgY1_32);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_cur_module_sym_name_string_pair_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word PairTerm_9,
  MR_Word * MaybePair_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PairTerm_9)) == (MR_Integer) 0);
  MR_Word SymNameTerm_13;
  MR_String String_15;
  MR_Word ArgTerms_11;
  MR_Word StringTerm_14;
  MR_Word Var_28;
  MR_String Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;

  if (succeeded)
  {
    Var_28 = ((MR_Word) ((MR_hl_field(0, PairTerm_9, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(0, PairTerm_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      succeeded = (strcmp(Var_29, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SymNameTerm_13 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 0))));
          Var_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms_11, (MR_Integer) 1))));
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StringTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
            succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) StringTerm_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_32 = ((MR_Word) ((MR_hl_field(0, StringTerm_14, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 2);
                if (succeeded)
                  String_15 = ((MR_String) ((MR_hl_field(2, Var_32, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeSymName_18;

    parse_tree__parse_sym_name__parse_sym_name_and_no_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, ContextPieces_6, SymNameTerm_13, &MaybeSymName_18);
    if (((MR_tag((MR_Word) MaybeSymName_18)) == (MR_Integer) 0))
      *MaybePair_10 = (MR_Word) (MaybeSymName_18);
    else
    {
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(1, MaybeSymName_18, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SymName_19)) == (MR_Integer) 1))
      {
        MR_Word SymNameModuleName_20 = ((MR_Word) ((MR_hl_field(1, SymName_19, (MR_Integer) 0))));

        succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(SymNameModuleName_20, ModuleName_7);
        if (succeeded)
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_33, 0) = ((MR_Box) (SymName_19));
            MR_hl_field(0, Var_33, 1) = ((MR_Box) (String_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePair_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
          }
        }
        else
        {
          MR_String SymNameTermStr_22;
          MR_Word Pieces_23;
          MR_Word Spec_24;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_51;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_70;
          MR_Word Var_71;

          SymNameTermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, SymNameTerm_13);
          Var_34 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
          Var_43 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[327])));
          {
            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_59, 1) = ((MR_Box) (SymNameTermStr_22));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          }
          Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_58);
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_56);
          Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_51);
          Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_42);
          Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_35);
          Var_70 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_13);
          {
            Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_cur_module_sym_name_string_pair\'/5"));
            MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_70));
            MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_24));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePair_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
          }
        }
      }
      else
      {
        MR_Word Var_73;

        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (SymName_19));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (String_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePair_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_73));
        }
      }
    }
  }
  else
  {
    MR_String PairTermStr_27;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_91;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Pieces_113;
    MR_Word Spec_114;

    PairTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, PairTerm_9);
    Var_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    Var_83 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[303])));
    {
      Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_99, 1) = ((MR_Box) (PairTermStr_27));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_97 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_98);
    Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_96);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_91);
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[301])), Var_82);
    Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_75);
    Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PairTerm_9);
    {
      Spec_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_cur_module_sym_name_string_pair\'/5"));
      MR_hl_field(0, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_114, 3) = ((MR_Box) (Var_110));
      MR_hl_field(0, Spec_114, 4) = ((MR_Box) (Pieces_113));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Spec_114));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePair_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_111));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3)
{
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word MaybePrefix_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attributes_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MaybePrefix_4));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_17));
    }
  }
  else
  {
    MR_Word MakeUpperCase_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attributes_3 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (MakeUpperCase_11));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_export_enum_attr_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeAttribute_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
  MR_String Prefix_12;
  MR_Word Args_9;
  MR_Word ForeignNameTerm_11;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_18 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
    Args_9 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "prefix") == 0);
      if (succeeded)
      {
        succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ForeignNameTerm_11 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 1))));
          succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ForeignNameTerm_11)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_21 = ((MR_Word) ((MR_hl_field(0, ForeignNameTerm_11, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(0, ForeignNameTerm_11, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
                if (succeeded)
                  Prefix_12 = ((MR_String) ((MR_hl_field(2, Var_21, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Prefix_12));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAttribute_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
    }
  }
  else
  {
    MR_Word Var_25;
    MR_String Var_26;
    MR_Word Var_27;

    succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(0, Term_7, (MR_Integer) 1))));
      succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
          succeeded = (strcmp(Var_26, (MR_String) "uppercase") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeAttribute_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[8]));
    else
    {
      MR_String TermStr_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_30;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_43;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_76;
      MR_Word Var_77;

      TermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      Var_38 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[319])));
      Var_49 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[323])));
      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (TermStr_15));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
      }
      Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_64);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_62);
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_57);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[321])), Var_48);
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_43);
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[317])), Var_37);
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5, Var_30);
      Var_76 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attr\'/4"));
        MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Var_76));
        MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_77, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeAttribute_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word PairTerm_7,
  MR_Word * MaybePair_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PairTerm_7)) == (MR_Integer) 0);
  MR_Word SymNameTerm_11;
  MR_String String_13;
  MR_Word ArgTerms_9;
  MR_Word StringTerm_12;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, PairTerm_7, (MR_Integer) 0))));
    ArgTerms_9 = ((MR_Word) ((MR_hl_field(0, PairTerm_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      succeeded = (strcmp(Var_22, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SymNameTerm_11 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(1, ArgTerms_9, (MR_Integer) 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StringTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) StringTerm_12)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_25 = ((MR_Word) ((MR_hl_field(0, StringTerm_12, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 2);
                if (succeeded)
                  String_13 = ((MR_String) ((MR_hl_field(2, Var_25, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SymName_16;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_11, &SymName_16);
    if (succeeded)
    {
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (SymName_16));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (String_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePair_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
      }
    }
    else
    {
      MR_String SymNameTermStr_17;
      MR_Word Pieces_18;
      MR_Word Spec_19;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_41;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_60;
      MR_Word Var_61;

      SymNameTermStr_17 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, SymNameTerm_11);
      Var_27 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
      Var_36 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[298])));
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (SymNameTermStr_17));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
      }
      Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_46);
      Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_35);
      Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_28);
      Var_60 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_11);
      {
        Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_sym_name_string_pair\'/4"));
        MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Var_60));
        MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
      }
      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePair_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
      }
    }
  }
  else
  {
    MR_String PairTermStr_20;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_80;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Pieces_102;
    MR_Word Spec_103;

    PairTermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, PairTerm_7);
    Var_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_72 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[303])));
    {
      Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_88, 1) = ((MR_Box) (PairTermStr_20));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_86 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_87);
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_85);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_80);
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[301])), Var_71);
    Pieces_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_64);
    Var_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PairTerm_7);
    {
      Spec_103 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_103, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_sym_name_string_pair\'/4"));
      MR_hl_field(0, Spec_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_103, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_103, 3) = ((MR_Box) (Var_99));
      MR_hl_field(0, Spec_103, 4) = ((MR_Box) (Pieces_102));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (Spec_103));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePair_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_100));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attrs_0_2,
  MR_Word * STATE_VARIABLE_Attrs_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          break;
        case (MR_Integer) 1:
          parse_tree__prog_data_foreign__set_ordinary_despite_detism_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MayCallMercury_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0(MayCallMercury_4, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ThreadSafe_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

        parse_tree__prog_data_foreign__set_thread_safe_3_p_0(ThreadSafe_9, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TabledForIO_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_tabled_for_io_3_p_0(TabledForIO_14, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pure_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_purity_3_p_0(Pure_19, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UserSharing_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_29, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Backend_39 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (Backend_39));
            }
            parse_tree__prog_data_foreign__set_for_specific_backend_3_p_0(Var_43, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Terminates_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_terminates_3_p_0(Terminates_24, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailMod_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

            parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0(TrailMod_50, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word MayCallTabled_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0(MayCallTabled_55, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word BoxPolicy_60 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

            parse_tree__prog_data_foreign__set_box_policy_3_p_0(BoxPolicy_60, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_65 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_affects_liveness_3_p_0(AffectsLiveness_65, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word AllocatesMemory_70 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_allocates_memory_3_p_0(AllocatesMemory_70, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word RegistersRoots_75 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_registers_roots_3_p_0(RegistersRoots_75, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word MayDuplicate_80 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_84;

            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (MayDuplicate_80));
            }
            parse_tree__prog_data_foreign__set_may_duplicate_3_p_0(Var_84, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MayExport_86 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_90;

            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (MayExport_86));
            }
            parse_tree__prog_data_foreign__set_may_export_body_3_p_0(Var_90, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__term_to_foreign_language_erlang_1_p_0(
  MR_Word Term_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_2)) == (MR_Integer) 0);
  MR_String String_3;
  MR_String Var_10;
  MR_Word Var_13;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(0, Term_2, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0))
    {
      String_3 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2))
    {
      String_3 = ((MR_String) ((MR_hl_field(2, Var_13, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_10 = mercury__string__to_lower_1_f_0(String_3);
      succeeded = (strcmp(Var_10, (MR_String) "erlang") == 0);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__term_to_foreign_language_2_p_0(
  MR_Word Term_3,
  MR_Word * Lang_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String String_5;
  MR_Word Var_14;

  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0))
    {
      String_5 = ((MR_String) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2))
    {
      String_5 = ((MR_String) ((MR_hl_field(2, Var_14, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      succeeded = libs__globals__convert_foreign_language_2_p_0(String_5, Lang_4);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_import_module_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_31;
    MR_Word Spec_32;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_109;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_126;
    MR_Word Var_127;

    Var_101 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[163])));
    Var_115 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
    Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_114);
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_109);
    Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_100);
    Var_126 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
      MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Var_126));
      MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
    }
    {
      Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_127, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_127));
    }
  }
  else
  {
    MR_Word Var_230 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_231 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_230 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_137;
      MR_Word Spec_138;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_146;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word Var_163;
      MR_Word Var_164;

      Var_144 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[163])));
      Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
      Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_151);
      Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_144, Var_146);
      Pieces_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_143);
      Var_163 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_138, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
        MR_hl_field(0, Spec_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_138, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_138, 3) = ((MR_Box) (Var_163));
        MR_hl_field(0, Spec_138, 4) = ((MR_Box) (Pieces_137));
      }
      {
        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_164, 0) = ((MR_Box) (Spec_138));
        MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_164));
      }
    }
    else
    {
      MR_Word Var_232 = ((MR_Word) ((MR_hl_field(1, Var_230, (MR_Integer) 1))));
      MR_Word Var_233 = ((MR_Word) ((MR_hl_field(1, Var_230, (MR_Integer) 0))));

      if ((Var_232 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LangContextPieces_15;
        MR_Word MaybeForeignLang_16;
        MR_Word MaybeModuleName_18;
        MR_Word ModuleName0_17;
        MR_Word Language_22;
        MR_Word ModuleName_23;

        LangContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[165])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_15, VarSet_7, Var_231, &MaybeForeignLang_16);
        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_233, &ModuleName0_17);
        if (succeeded)
          {
            MaybeModuleName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeModuleName_18, 0) = ((MR_Box) (ModuleName0_17));
          }
        else
        {
          MR_String ModuleNameTermStr_19;
          MR_Word ModuleNamePieces_20;
          MR_Word ModuleNameSpec_21;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_68;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_87;
          MR_Word Var_88;

          ModuleNameTermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_233);
          Var_63 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[169])));
          {
            Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_76, 1) = ((MR_Box) (ModuleNameTermStr_19));
          }
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          }
          Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_75);
          Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_73);
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_68);
          ModuleNamePieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[167])), Var_62);
          Var_87 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_233);
          {
            ModuleNameSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ModuleNameSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
            MR_hl_field(0, ModuleNameSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ModuleNameSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, ModuleNameSpec_21, 3) = ((MR_Box) (Var_87));
            MR_hl_field(0, ModuleNameSpec_21, 4) = ((MR_Box) (ModuleNamePieces_20));
          }
          {
            Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_88, 0) = ((MR_Box) (ModuleNameSpec_21));
            MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeModuleName_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeModuleName_18, 0) = ((MR_Box) (Var_88));
          }
        }
        succeeded = ((MR_tag((MR_Word) MaybeForeignLang_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          Language_22 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_16, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeModuleName_18)) == (MR_Integer) 1);
          if (succeeded)
            ModuleName_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleName_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FIM_24;
          MR_Word Var_90;

          {
            FIM_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FIM_24, 0) = (MR_Box) ((MR_Unsigned) (Language_22));
            MR_hl_field(0, FIM_24, 1) = ((MR_Box) (ModuleName_23));
            MR_hl_field(0, FIM_24, 2) = ((MR_Box) (Context_10));
            MR_hl_field(0, FIM_24, 3) = ((MR_Box) (SeqNum_11));
          }
          {
            Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_90, 1) = ((MR_Box) (FIM_24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
          }
        }
        else
        {
          MR_Word Specs_25;
          MR_Word Var_91;
          MR_Word Var_92;

          Var_91 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_16);
          Var_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeModuleName_18);
          Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_91, Var_92);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_25));
          }
        }
      }
      else
      {
        MR_Word Pieces_168;
        MR_Word Spec_169;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_177;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_194;
        MR_Word Var_195;

        Var_175 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[163])));
        Var_183 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
        Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_183, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_182);
        Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_177);
        Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_174);
        Var_194 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_169 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_169, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
          MR_hl_field(0, Spec_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_169, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_169, 3) = ((MR_Box) (Var_194));
          MR_hl_field(0, Spec_169, 4) = ((MR_Box) (Pieces_168));
        }
        {
          Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_195, 0) = ((MR_Box) (Spec_169));
          MR_hl_field(1, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_195));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePair_10;

  parse_tree__parse_pragma_foreign__parse_cur_module_sym_name_string_pair_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybePair_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybePair_10));
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_54;
    MR_Word Spec_55;
    MR_Word Var_186;
    MR_Word Var_187;
    MR_Word Var_195;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_212;
    MR_Word Var_213;

    Var_187 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[136])));
    Var_201 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
    Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_201, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_200);
    Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_187, Var_195);
    Pieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_186);
    Var_212 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
      MR_hl_field(0, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_55, 3) = ((MR_Box) (Var_212));
      MR_hl_field(0, Spec_55, 4) = ((MR_Box) (Pieces_54));
    }
    {
      Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_213, 0) = ((MR_Box) (Spec_55));
      MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_213));
    }
  }
  else
  {
    MR_Word Var_352 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_353 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_352 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_228;
      MR_Word Spec_229;
      MR_Word Var_234;
      MR_Word Var_235;
      MR_Word Var_237;
      MR_Word Var_242;
      MR_Word Var_243;
      MR_Word Var_254;
      MR_Word Var_255;

      Var_235 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[136])));
      Var_243 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
      Var_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_243, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_242);
      Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_235, Var_237);
      Pieces_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_234);
      Var_254 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_229 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
        MR_hl_field(0, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_229, 3) = ((MR_Box) (Var_254));
        MR_hl_field(0, Spec_229, 4) = ((MR_Box) (Pieces_228));
      }
      {
        Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_255, 0) = ((MR_Box) (Spec_229));
        MR_hl_field(1, Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_255));
      }
    }
    else
    {
      MR_Word Var_354 = ((MR_Word) ((MR_hl_field(1, Var_352, (MR_Integer) 1))));
      MR_Word Var_355 = ((MR_Word) ((MR_hl_field(1, Var_352, (MR_Integer) 0))));

      if ((Var_354 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_259;
        MR_Word Spec_260;
        MR_Word Var_265;
        MR_Word Var_266;
        MR_Word Var_268;
        MR_Word Var_273;
        MR_Word Var_274;
        MR_Word Var_285;
        MR_Word Var_286;

        Var_266 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[136])));
        Var_274 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
        Var_273 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_274, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_268 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_273);
        Var_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_266, Var_268);
        Pieces_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_265);
        Var_285 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_260 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_260, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
          MR_hl_field(0, Spec_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_260, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_260, 3) = ((MR_Box) (Var_285));
          MR_hl_field(0, Spec_260, 4) = ((MR_Box) (Pieces_259));
        }
        {
          Var_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_286, 0) = ((MR_Box) (Spec_260));
          MR_hl_field(1, Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_286));
        }
      }
      else
      {
        MR_Word Var_356 = ((MR_Word) ((MR_hl_field(1, Var_354, (MR_Integer) 1))));
        MR_Word Var_357 = ((MR_Word) ((MR_hl_field(1, Var_354, (MR_Integer) 0))));

        if ((Var_356 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LangContextPieces_18;
          MR_Word MaybeForeignLang_19;
          MR_Word TypeContextPieces_20;
          MR_Word MaybeTypeCtor0_21;
          MR_Word MaybeTypeCtor_27;
          MR_Word PairContextPieces_31;
          MR_Word MaybeValues_32;
          MR_Word MaybeOoMValues_36;
          MR_Word Var_130;
          MR_Word ForeignLang_40;
          MR_Word TypeCtor_41;
          MR_Word OoMValues_42;

          LangContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[138])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_18, VarSet_9, Var_353, &MaybeForeignLang_19);
          TypeContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[139])));
          parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(TypeContextPieces_20, VarSet_9, Var_355, &MaybeTypeCtor0_21);
          if (((MR_tag((MR_Word) MaybeTypeCtor0_21)) == (MR_Integer) 0))
            MaybeTypeCtor_27 = MaybeTypeCtor0_21;
          else
          {
            MR_Word TypeCtor0_22 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtor0_21, (MR_Integer) 0))));
            MR_Word SymName0_23 = ((MR_Word) ((MR_hl_field(0, TypeCtor0_22, (MR_Integer) 0))));
            MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, TypeCtor0_22, (MR_Integer) 1))));
            MR_Word SymName_25;

            succeeded = parse_tree__parse_sym_name__try_to_implicitly_qualify_sym_name_3_p_0(ModuleName_8, SymName0_23, &SymName_25);
            if (succeeded)
            {
              MR_Word TypeCtor1_26;

              {
                TypeCtor1_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeCtor1_26, 0) = ((MR_Box) (SymName_25));
                MR_hl_field(0, TypeCtor1_26, 1) = ((MR_Box) (Arity_24));
              }
              {
                MaybeTypeCtor_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeTypeCtor_27, 0) = ((MR_Box) (TypeCtor1_26));
              }
            }
            else
            {
              MR_Word SymNamePieces_28;
              MR_Word SymNameSpec_29;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_96;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_116;
              MR_Word Var_117;

              Var_88 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[136])));
              Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[144])));
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
              Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[142])), Var_104);
              Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_96);
              SymNamePieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_87);
              Var_116 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_357);
              {
                SymNameSpec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymNameSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
                MR_hl_field(0, SymNameSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, SymNameSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, SymNameSpec_29, 3) = ((MR_Box) (Var_116));
                MR_hl_field(0, SymNameSpec_29, 4) = ((MR_Box) (SymNamePieces_28));
              }
              {
                Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_117, 0) = ((MR_Box) (SymNameSpec_29));
                MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeTypeCtor_27, 0) = ((MR_Box) (Var_117));
              }
            }
          }
          PairContextPieces_31 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[149])));
          {
            Var_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_130, 0) = ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_11[0]));
            MR_hl_field(0, Var_130, 1) = ((MR_Box) (parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0_1));
            MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_130, 3) = ((MR_Box) (PairContextPieces_31));
            MR_hl_field(0, Var_130, 4) = ((MR_Box) (ModuleName_8));
          }
          parse_tree__parse_util__parse_list_elements_6_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]), PairContextPieces_31, (MR_String) "mapping elements", Var_130, VarSet_9, Var_357, &MaybeValues_32);
          if (((MR_tag((MR_Word) MaybeValues_32)) == (MR_Integer) 0))
            MaybeOoMValues_36 = (MR_Word) (MaybeValues_32);
          else
          {
            MR_Word Values_33 = ((MR_Word) ((MR_hl_field(1, MaybeValues_32, (MR_Integer) 0))));

            if ((Values_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word NoValuesPieces_34;
              MR_Word NoValuesSpec_35;
              MR_Word Var_146;
              MR_Word Var_147;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_167;
              MR_Word Var_168;

              Var_147 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[159])));
              Var_156 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[161])));
              Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_156, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
              Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_147, Var_155);
              NoValuesPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[155])), Var_146);
              Var_167 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_357);
              {
                NoValuesSpec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, NoValuesSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
                MR_hl_field(0, NoValuesSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, NoValuesSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(0, NoValuesSpec_35, 3) = ((MR_Box) (Var_167));
                MR_hl_field(0, NoValuesSpec_35, 4) = ((MR_Box) (NoValuesPieces_34));
              }
              {
                Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_168, 0) = ((MR_Box) (NoValuesSpec_35));
                MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeOoMValues_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MaybeOoMValues_36, 0) = ((MR_Box) (Var_168));
              }
            }
            else
            {
              MR_Word HeadValue_37 = ((MR_Word) ((MR_hl_field(1, Values_33, (MR_Integer) 0))));
              MR_Word TailValues_38 = ((MR_Word) ((MR_hl_field(1, Values_33, (MR_Integer) 1))));
              MR_Word Var_170;

              {
                Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_170, 0) = ((MR_Box) (HeadValue_37));
                MR_hl_field(0, Var_170, 1) = ((MR_Box) (TailValues_38));
              }
              {
                MaybeOoMValues_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeOoMValues_36, 0) = ((MR_Box) (Var_170));
              }
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            ForeignLang_40 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_19, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_27)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtor_41 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtor_27, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeOoMValues_36)) == (MR_Integer) 1);
              if (succeeded)
                OoMValues_42 = ((MR_Word) ((MR_hl_field(1, MaybeOoMValues_36, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word ItemForeignEnumInfo_43;
            MR_Word Item_44;
            MR_Word Var_171;

            {
              ItemForeignEnumInfo_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemForeignEnumInfo_43, 0) = (MR_Box) ((MR_Unsigned) (ForeignLang_40));
              MR_hl_field(0, ItemForeignEnumInfo_43, 1) = ((MR_Box) (TypeCtor_41));
              MR_hl_field(0, ItemForeignEnumInfo_43, 2) = ((MR_Box) (OoMValues_42));
              MR_hl_field(0, ItemForeignEnumInfo_43, 3) = ((MR_Box) (Context_12));
              MR_hl_field(0, ItemForeignEnumInfo_43, 4) = ((MR_Box) (SeqNum_13));
            }
            {
              Item_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Item_44, 1) = ((MR_Box) (ItemForeignEnumInfo_43));
            }
            {
              Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_171, 0) = ((MR_Box) (Item_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_171));
            }
          }
          else
          {
            MR_Word Specs_45;
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Var_174;
            MR_Word Var_175;

            Var_172 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_19);
            Var_174 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_27);
            Var_175 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[4]), MaybeOoMValues_36);
            Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_174, Var_175);
            Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_172, Var_173);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_45));
            }
          }
        }
        else
        {
          MR_Word Pieces_290;
          MR_Word Spec_291;
          MR_Word Var_296;
          MR_Word Var_297;
          MR_Word Var_299;
          MR_Word Var_304;
          MR_Word Var_305;
          MR_Word Var_316;
          MR_Word Var_317;

          Var_297 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[136])));
          Var_305 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
          Var_304 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_305, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_299 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_304);
          Var_296 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_297, Var_299);
          Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_296);
          Var_316 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_291 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_291, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
            MR_hl_field(0, Spec_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_291, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_291, 3) = ((MR_Box) (Var_316));
            MR_hl_field(0, Spec_291, 4) = ((MR_Box) (Pieces_290));
          }
          {
            Var_317 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_317, 0) = ((MR_Box) (Spec_291));
            MR_hl_field(1, Var_317, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_317));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybePair_8;

  parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybePair_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybePair_8));
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (PragmaTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word LangTerm_13;
  MR_Word MercuryTypeTerm_14;
  MR_Word MaybeAttributesTerm_15;
  MR_Word MaybeOverridesTerm_16;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;

  if (succeeded)
  {
    Var_142 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));
    Var_141 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    succeeded = (Var_141 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_144 = ((MR_Word) ((MR_hl_field(1, Var_141, (MR_Integer) 0))));
      Var_143 = ((MR_Word) ((MR_hl_field(1, Var_141, (MR_Integer) 1))));
      if ((Var_143 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        LangTerm_13 = Var_142;
        MercuryTypeTerm_14 = Var_144;
        MaybeAttributesTerm_15 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeOverridesTerm_16 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_145 = ((MR_Word) ((MR_hl_field(1, Var_143, (MR_Integer) 1))));
        MR_Word Var_146 = ((MR_Word) ((MR_hl_field(1, Var_143, (MR_Integer) 0))));

        if ((Var_145 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          LangTerm_13 = Var_142;
          MercuryTypeTerm_14 = Var_144;
          {
            MaybeAttributesTerm_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeAttributesTerm_15, 0) = ((MR_Box) (Var_146));
          }
          MaybeOverridesTerm_16 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word OverridesTerm_18;
          MR_Word Var_45;

          LangTerm_13 = Var_142;
          MercuryTypeTerm_14 = Var_144;
          OverridesTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_145, (MR_Integer) 0))));
          Var_45 = ((MR_Word) ((MR_hl_field(1, Var_145, (MR_Integer) 1))));
          succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            {
              MaybeAttributesTerm_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeAttributesTerm_15, 0) = ((MR_Box) (Var_146));
            }
            {
              MaybeOverridesTerm_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeOverridesTerm_16, 0) = ((MR_Box) (OverridesTerm_18));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word LangContextPieces_19;
    MR_Word MaybeForeignLang_20;
    MR_Word TypeContextPieces_21;
    MR_Word MaybeTypeCtor_22;
    MR_Word MaybeAttributes_24;
    MR_Word OverrideContextPiecesCord_26;
    MR_Word MaybeOverrides_27;
    MR_Word ForeignLang_28;
    MR_Word TypeCtor_29;
    MR_Word Attributes_30;
    MR_Word Overrides_31;

    LangContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[128])));
    parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_19, VarSet_7, LangTerm_13, &MaybeForeignLang_20);
    TypeContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[129])));
    parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(TypeContextPieces_21, VarSet_7, MercuryTypeTerm_14, &MaybeTypeCtor_22);
    parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[130])), VarSet_7, MaybeAttributesTerm_15, &MaybeAttributes_24);
    OverrideContextPiecesCord_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[131])));
    if ((MaybeOverridesTerm_16 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeOverrides_27 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[7]));
    else
    {
      MR_Word OverridesTerm_147 = ((MR_Word) ((MR_hl_field(1, MaybeOverridesTerm_16, (MR_Integer) 0))));
      MR_Word Var_149;

      {
        Var_149 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_149, 0) = ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_9[1]));
        MR_hl_field(0, Var_149, 1) = ((MR_Box) (parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0_1));
        MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_149, 3) = ((MR_Box) (OverrideContextPiecesCord_26));
      }
      parse_tree__parse_util__parse_list_elements_6_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]), OverrideContextPiecesCord_26, (MR_String) "list of mapping elements", Var_149, VarSet_7, OverridesTerm_147, &MaybeOverrides_27);
    }
    succeeded = ((MR_tag((MR_Word) MaybeForeignLang_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      ForeignLang_28 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_20, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtor_29 = ((MR_Word) ((MR_hl_field(1, MaybeTypeCtor_22, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeAttributes_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          Attributes_30 = ((MR_Word) ((MR_hl_field(1, MaybeAttributes_24, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeOverrides_27)) == (MR_Integer) 1);
          if (succeeded)
            Overrides_31 = ((MR_Word) ((MR_hl_field(1, MaybeOverrides_27, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ItemForeignExportEnum_32;
      MR_Word Item_33;
      MR_Word Var_92;

      {
        ItemForeignExportEnum_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemForeignExportEnum_32, 0) = (MR_Box) ((MR_Unsigned) (ForeignLang_28));
        MR_hl_field(0, ItemForeignExportEnum_32, 1) = ((MR_Box) (TypeCtor_29));
        MR_hl_field(0, ItemForeignExportEnum_32, 2) = ((MR_Box) (Attributes_30));
        MR_hl_field(0, ItemForeignExportEnum_32, 3) = ((MR_Box) (Overrides_31));
        MR_hl_field(0, ItemForeignExportEnum_32, 4) = ((MR_Box) (Context_10));
        MR_hl_field(0, ItemForeignExportEnum_32, 5) = ((MR_Box) (SeqNum_11));
      }
      {
        Item_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Item_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Item_33, 1) = ((MR_Box) (ItemForeignExportEnum_32));
      }
      {
        Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_92, 0) = ((MR_Box) (Item_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_92));
      }
    }
    else
    {
      MR_Word Specs_34;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;

      Var_93 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_20);
      Var_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_22);
      Var_97 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0), MaybeAttributes_24);
      Var_98 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[3]), MaybeOverrides_27);
      Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_97, Var_98);
      Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_95, Var_96);
      Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_93, Var_94);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_34));
      }
    }
  }
  else
  {
    MR_Word Pieces_35;
    MR_Word Spec_36;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_112;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_129;
    MR_Word Var_130;

    Var_104 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[132])));
    Var_118 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[134])));
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_117);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_112);
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_103);
    Var_129 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export_enum\'/6"));
      MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Var_129));
      MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word TypeTerm_7,
  MR_Word * MaybeTypeCtor_8)
{
  MR_bool succeeded;
  MR_Word SymName_9;
  MR_Integer Arity_10;

  succeeded = parse_tree__parse_util__parse_sym_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_7, &SymName_9, &Arity_10);
  if (succeeded)
  {
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (Arity_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTypeCtor_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
    }
  }
  else
  {
    MR_String TypeTermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_51;
    MR_Word Var_52;

    TypeTermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, TypeTerm_7);
    Var_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_24 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[339])));
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (TypeTermStr_11));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_37);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_32);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[337])), Var_23);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_16);
    Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_7);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_type_ctor_name_arity\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_51));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeCtor_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Attributes_3;

  parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Attributes_3);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Attributes_3));
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Attributes_3;

  parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Attributes_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Attributes_3));
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1376__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeAttribute_8;

  parse_tree__parse_pragma_foreign__parse_export_enum_attr_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeAttribute_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeAttribute_8));
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0(
  MR_Word ContextPieces_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_7;

    Var_7 = parse_tree__prog_data_foreign__default_export_enum_attributes_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
    }
  }
  else
  {
    MR_Word AttributesTerm_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Attributes0_12;
    MR_Word AttributesTerms_13;

    Attributes0_12 = parse_tree__prog_data_foreign__default_export_enum_attributes_0_f_0();
    succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(AttributesTerm_10, &AttributesTerms_13);
    if (succeeded)
    {
      MR_Word MaybeAttrList_14;
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_9[0]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (ContextPieces_1));
        MR_hl_field(0, Var_22, 4) = ((MR_Box) (VarSet_2));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), Var_22, AttributesTerms_13, &MaybeAttrList_14);
      if (((MR_tag((MR_Word) MaybeAttrList_14)) == (MR_Integer) 0))
        *HeadVar__4_4 = (MR_Word) (MaybeAttrList_14);
      else
      {
        MR_Word CollectedAttributes_15 = ((MR_Word) ((MR_hl_field(1, MaybeAttrList_14, (MR_Integer) 0))));
        MR_Word PrefixAttributes_17;

        mercury__list__filter_3_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[3]), CollectedAttributes_15, &PrefixAttributes_17);
        if ((PrefixAttributes_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Attributes_18;
          MR_Box conv2_Attributes_18;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[4]), CollectedAttributes_15, ((MR_Box) (Attributes0_12)), &conv2_Attributes_18);
          Attributes_18 = ((MR_Word) (conv2_Attributes_18));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Attributes_18));
          }
        }
        else
        {
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, PrefixAttributes_17, (MR_Integer) 1))));

          if ((Var_69 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Attributes_66;
            MR_Box conv4_Attributes_66;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[5]), CollectedAttributes_15, ((MR_Box) (Attributes0_12)), &conv4_Attributes_66);
            Attributes_66 = ((MR_Word) (conv4_Attributes_66));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Attributes_66));
            }
          }
          else
          {
            MR_Word Pieces_19;
            MR_Word Spec_20;
            MR_Word Var_24;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Var_36;
            MR_Word Var_37;

            Var_27 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[310])));
            Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[312])));
            Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_29);
            Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[306])), Var_26);
            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_1, Var_24);
            Var_36 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AttributesTerm_10);
            {
              Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attributes\'/4"));
              MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_36));
              MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
            }
            {
              Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_37, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
            }
          }
        }
      }
    }
    else
    {
      MR_String AttributesStr_21;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Pieces_58;
      MR_Word Spec_59;

      AttributesStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_2, AttributesTerm_10);
      Var_42 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[314])));
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (AttributesStr_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
      }
      Var_47 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_46);
      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_44);
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_41);
      Pieces_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_1, Var_39);
      Var_55 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AttributesTerm_10);
      {
        Spec_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_59, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attributes\'/4"));
        MR_hl_field(0, Spec_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_59, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_59, 3) = ((MR_Box) (Var_55));
        MR_hl_field(0, Spec_59, 4) = ((MR_Box) (Pieces_58));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Spec_59));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_40;
    MR_Word Spec_41;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_108;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_125;
    MR_Word Var_126;

    Var_100 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[119])));
    Var_114 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_113);
    Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_108);
    Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_99);
    Var_125 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
      MR_hl_field(0, Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Var_125));
      MR_hl_field(0, Spec_41, 4) = ((MR_Box) (Pieces_40));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) (Spec_41));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_126));
    }
  }
  else
  {
    MR_Word Var_263 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_264 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_263 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_139;
      MR_Word Spec_140;
      MR_Word Var_145;
      MR_Word Var_146;
      MR_Word Var_148;
      MR_Word Var_153;
      MR_Word Var_154;
      MR_Word Var_165;
      MR_Word Var_166;

      Var_146 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[119])));
      Var_154 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
      Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_153);
      Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_146, Var_148);
      Pieces_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_145);
      Var_165 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_140 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_140, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
        MR_hl_field(0, Spec_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_140, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_140, 3) = ((MR_Box) (Var_165));
        MR_hl_field(0, Spec_140, 4) = ((MR_Box) (Pieces_139));
      }
      {
        Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_166, 0) = ((MR_Box) (Spec_140));
        MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_166));
      }
    }
    else
    {
      MR_Word Var_265 = ((MR_Word) ((MR_hl_field(1, Var_263, (MR_Integer) 1))));
      MR_Word Var_266 = ((MR_Word) ((MR_hl_field(1, Var_263, (MR_Integer) 0))));

      if ((Var_265 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_170;
        MR_Word Spec_171;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_179;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_196;
        MR_Word Var_197;

        Var_177 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[119])));
        Var_185 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
        Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_184);
        Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_177, Var_179);
        Pieces_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_176);
        Var_196 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_171 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_171, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
          MR_hl_field(0, Spec_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_171, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_171, 3) = ((MR_Box) (Var_196));
          MR_hl_field(0, Spec_171, 4) = ((MR_Box) (Pieces_170));
        }
        {
          Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_197, 0) = ((MR_Box) (Spec_171));
          MR_hl_field(1, Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_197));
        }
      }
      else
      {
        MR_Word Var_267 = ((MR_Word) ((MR_hl_field(1, Var_265, (MR_Integer) 1))));
        MR_Word Var_268 = ((MR_Word) ((MR_hl_field(1, Var_265, (MR_Integer) 0))));

        if ((Var_267 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LangContextPieces_16;
          MR_Word MaybeForeignLang_17;
          MR_Word PredAndModesContextPieces_18;
          MR_Word MaybePredAndModes_19;
          MR_Word ForeignFunctionContextPieces_20;
          MR_Word MaybeFunction_21;
          MR_Word ForeignLang_22;
          MR_Word PredName_23;
          MR_Word PredOrFunc_24;
          MR_Word Modes_25;
          MR_String Function_26;

          LangContextPieces_16 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[123])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_16, VarSet_7, Var_264, &MaybeForeignLang_17);
          PredAndModesContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[124])));
          parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), PredAndModesContextPieces_18, VarSet_7, Var_266, &MaybePredAndModes_19);
          ForeignFunctionContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[125])));
          parse_tree__parse_pragma_foreign__parse_foreign_function_name_4_p_0(VarSet_7, ForeignFunctionContextPieces_20, Var_268, &MaybeFunction_21);
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            ForeignLang_22 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_17, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybePredAndModes_19)) == (MR_Integer) 1);
            if (succeeded)
            {
              PredName_23 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 0))));
              PredOrFunc_24 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 1))));
              Modes_25 = ((MR_Word) ((MR_hl_field(1, MaybePredAndModes_19, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) MaybeFunction_21)) == (MR_Integer) 1);
              if (succeeded)
                Function_26 = ((MR_String) ((MR_hl_field(1, MaybeFunction_21, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word PredNameModesPF_27;
            MR_Word ProgVarSet_28;
            MR_Word FPE_29;
            MR_Word Item_30;
            MR_Word Var_83;
            MR_Word Var_84;

            {
              PredNameModesPF_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredNameModesPF_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
              MR_hl_field(0, PredNameModesPF_27, 1) = ((MR_Box) (PredName_23));
              MR_hl_field(0, PredNameModesPF_27, 2) = ((MR_Box) (Modes_25));
            }
            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, &ProgVarSet_28);
            {
              FPE_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FPE_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, FPE_29, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_22));
              MR_hl_field(0, FPE_29, 2) = ((MR_Box) (PredNameModesPF_27));
              MR_hl_field(0, FPE_29, 3) = ((MR_Box) (Function_26));
              MR_hl_field(0, FPE_29, 4) = ((MR_Box) (ProgVarSet_28));
              MR_hl_field(0, FPE_29, 5) = ((MR_Box) (Context_10));
              MR_hl_field(0, FPE_29, 6) = ((MR_Box) (SeqNum_11));
            }
            Var_83 = (MR_Word) (MR_mkword(2, (MR_Word) (FPE_29)));
            {
              Item_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_30, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Item_30, 1) = ((MR_Box) (Var_83));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (Item_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_84));
            }
          }
          else
          {
            MR_Word Specs_31;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;

            Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_17);
            Var_87 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[2]), MaybePredAndModes_19);
            Var_88 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunction_21);
            Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_87, Var_88);
            Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_85, Var_86);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
            }
          }
        }
        else
        {
          MR_Word Pieces_201;
          MR_Word Spec_202;
          MR_Word Var_207;
          MR_Word Var_208;
          MR_Word Var_210;
          MR_Word Var_215;
          MR_Word Var_216;
          MR_Word Var_227;
          MR_Word Var_228;

          Var_208 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[119])));
          Var_216 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[121])));
          Var_215 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_216, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_215);
          Var_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_208, Var_210);
          Pieces_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_207);
          Var_227 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
          {
            Spec_202 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_202, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
            MR_hl_field(0, Spec_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_202, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_202, 3) = ((MR_Box) (Var_227));
            MR_hl_field(0, Spec_202, 4) = ((MR_Box) (Pieces_201));
          }
          {
            Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_228, 0) = ((MR_Box) (Spec_202));
            MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_228));
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_function_name_4_p_0(
  MR_Word VarSet_5,
  MR_Word ContextPieces_6,
  MR_Word FunctionTerm_7,
  MR_Word * MaybeFunction_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) FunctionTerm_7)) == (MR_Integer) 0);
  MR_String Function_9;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(0, FunctionTerm_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(0, FunctionTerm_7, (MR_Integer) 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
      if (succeeded)
      {
        Function_9 = ((MR_String) ((MR_hl_field(2, Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(Function_9, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFunction_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Function_9));
    }
  else
  {
    MR_String FunctionTermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_49;
    MR_Word Var_50;

    FunctionTermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, FunctionTerm_7);
    Var_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
    Var_25 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[296])));
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (FunctionTermStr_11));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_35);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_30);
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[294])), Var_24);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_17);
    Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FunctionTerm_7);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_function_name\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_49));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFunction_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_7_p_0(
  MR_Word ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ErrorTerm_10,
  MR_Word PragmaTerms_11,
  MR_Word Context_12,
  MR_Word SeqNum_13,
  MR_Word * MaybeIOM_14)
{
  MR_bool succeeded;

  if ((PragmaTerms_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_38;
    MR_Word Spec_39;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_80;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_97;
    MR_Word Var_98;

    Var_72 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[113])));
    Var_86 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[115])));
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_86, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_85);
    Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_80);
    Pieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_71);
    Var_97 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
      MR_hl_field(0, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_39, 3) = ((MR_Box) (Var_97));
      MR_hl_field(0, Spec_39, 4) = ((MR_Box) (Pieces_38));
    }
    {
      Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_98, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_98));
    }
  }
  else
  {
    MR_Word Var_260 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_261 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_260 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_105;
      MR_Word Spec_106;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_131;
      MR_Word Var_132;

      Var_112 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[113])));
      Var_120 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[115])));
      Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_120, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_119);
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_114);
      Pieces_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_111);
      Var_131 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_106, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
        MR_hl_field(0, Spec_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_106, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_106, 3) = ((MR_Box) (Var_131));
        MR_hl_field(0, Spec_106, 4) = ((MR_Box) (Pieces_105));
      }
      {
        Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_132, 0) = ((MR_Box) (Spec_106));
        MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_132));
      }
    }
    else
    {
      MR_Word Var_262 = ((MR_Word) ((MR_hl_field(1, Var_260, (MR_Integer) 1))));
      MR_Word Var_263 = ((MR_Word) ((MR_hl_field(1, Var_260, (MR_Integer) 0))));

      if ((Var_262 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_136;
        MR_Word Spec_137;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_145;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_162;
        MR_Word Var_163;

        Var_143 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[113])));
        Var_151 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[115])));
        Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_150);
        Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, Var_145);
        Pieces_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_142);
        Var_162 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_137, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
          MR_hl_field(0, Spec_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_137, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_137, 3) = ((MR_Box) (Var_162));
          MR_hl_field(0, Spec_137, 4) = ((MR_Box) (Pieces_136));
        }
        {
          Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_163, 0) = ((MR_Box) (Spec_137));
          MR_hl_field(1, Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_163));
        }
      }
      else
      {
        MR_Word Var_264 = ((MR_Word) ((MR_hl_field(1, Var_262, (MR_Integer) 1))));
        MR_Word Var_265 = ((MR_Word) ((MR_hl_field(1, Var_262, (MR_Integer) 0))));

        if ((Var_264 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Pieces_167;
          MR_Word Spec_168;
          MR_Word Var_173;
          MR_Word Var_174;
          MR_Word Var_176;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_193;
          MR_Word Var_194;

          Var_174 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[113])));
          Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[115])));
          Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_181);
          Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_176);
          Pieces_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_173);
          Var_193 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_168 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_168, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
            MR_hl_field(0, Spec_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_168, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_168, 3) = ((MR_Box) (Var_193));
            MR_hl_field(0, Spec_168, 4) = ((MR_Box) (Pieces_167));
          }
          {
            Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_194, 0) = ((MR_Box) (Spec_168));
            MR_hl_field(1, Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_194));
          }
        }
        else
        {
          MR_Word Var_266 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 1))));
          MR_Word Var_267 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 0))));

          if ((Var_266 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word LangContextPieces_19;
            MR_Word MaybeForeignLanguage_20;
            MR_Word ForeignLanguage_21;
            MR_Word LangSpecs_22;
            MR_Word MaybeRestIOM_23;

            LangContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[117])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_19, VarSet_9, Var_261, &MaybeForeignLanguage_20);
            if (((MR_tag((MR_Word) MaybeForeignLanguage_20)) == (MR_Integer) 0))
            {
              LangSpecs_22 = ((MR_Word) ((MR_hl_field(0, MaybeForeignLanguage_20, (MR_Integer) 0))));
              ForeignLanguage_21 = (MR_Integer) 0;
            }
            else
            {
              ForeignLanguage_21 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLanguage_20, (MR_Integer) 0))));
              LangSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
            }
            parse_tree__parse_pragma_foreign__parse_pragma_ordinary_foreign_proc_9_p_0(ModuleName_8, VarSet_9, ForeignLanguage_21, Var_263, Var_265, Var_267, Context_12, SeqNum_13, &MaybeRestIOM_23);
            succeeded = (LangSpecs_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeRestIOM_23)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
            }
            if (succeeded)
              *MaybeIOM_14 = MaybeRestIOM_23;
            else
            {
              MR_Word Specs_25;
              MR_Word Var_56;

              Var_56 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_types__parse_tree__parse_types__type_ctor_info_item_or_marker_0), MaybeRestIOM_23);
              Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), LangSpecs_22, Var_56);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_25));
              }
            }
          }
          else
          {
            MR_Word Pieces_198;
            MR_Word Spec_199;
            MR_Word Var_204;
            MR_Word Var_205;
            MR_Word Var_207;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word Var_224;
            MR_Word Var_225;

            Var_205 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[113])));
            Var_213 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[115])));
            Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_213, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_212);
            Var_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_205, Var_207);
            Pieces_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_204);
            Var_224 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_199 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_199, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
              MR_hl_field(0, Spec_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_199, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_199, 3) = ((MR_Box) (Var_224));
              MR_hl_field(0, Spec_199, 4) = ((MR_Box) (Pieces_198));
            }
            {
              Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_225, 0) = ((MR_Box) (Spec_199));
              MR_hl_field(1, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_225));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_ordinary_foreign_proc_9_p_0(
  MR_Word ModuleName_10,
  MR_Word VarSet_11,
  MR_Word ForeignLanguage_12,
  MR_Word PredAndVarsTerm_13,
  MR_Word FlagsTerm_14,
  MR_Word CodeTerm_15,
  MR_Word Context_16,
  MR_Word SeqNum_17,
  MR_Word * MaybeIOM_18)
{
  MR_bool succeeded;
  MR_Word PredAndVarsContextPieces_19;
  MR_Word MaybePredAndArgs_20;
  MR_Word MaybeNamePFPragmaVars_29;
  MR_Word FlagsContextPieces_32;
  MR_Word MaybeFlags_33;
  MR_Word CodeContext_34;
  MR_Word MaybeImpl_38;
  MR_Word Var_64;
  MR_String Code_35;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word PredName_42;
  MR_Word PredOrFunc_43;
  MR_Word PragmaVars_44;
  MR_Word Flags_45;
  MR_Word Impl_46;

  PredAndVarsContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[172])));
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (ModuleName_10));
  }
  parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_64, PredAndVarsTerm_13, VarSet_11, PredAndVarsContextPieces_19, &MaybePredAndArgs_20);
  if (((MR_tag((MR_Word) MaybePredAndArgs_20)) == (MR_Integer) 0))
    MaybeNamePFPragmaVars_29 = (MR_Word) (MaybePredAndArgs_20);
  else
  {
    MR_Word PredName0_21 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_20, (MR_Integer) 0))));
    MR_Word NonFuncArgTerms_22 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_20, (MR_Integer) 1))));
    MR_Word MaybeFuncResultTerm_23 = ((MR_Word) ((MR_hl_field(1, MaybePredAndArgs_20, (MR_Integer) 2))));
    MR_Word PredOrFunc0_25;
    MR_Word ArgTerms_26;
    MR_Word MaybePragmaVars_27;

    if ((MaybeFuncResultTerm_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredOrFunc0_25 = (MR_Integer) 0;
      ArgTerms_26 = NonFuncArgTerms_22;
    }
    else
    {
      MR_Word FuncResultTerm_24 = ((MR_Word) ((MR_hl_field(1, MaybeFuncResultTerm_23, (MR_Integer) 0))));
      MR_Word Var_65;

      PredOrFunc0_25 = (MR_Integer) 1;
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (FuncResultTerm_24));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ArgTerms_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[5]), NonFuncArgTerms_22, Var_65);
    }
    parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(VarSet_11, PredAndVarsContextPieces_19, ArgTerms_26, (MR_Integer) 1, &MaybePragmaVars_27);
    if (((MR_tag((MR_Word) MaybePragmaVars_27)) == (MR_Integer) 0))
    {
      MR_Word PragmaVarsSpecs_30 = ((MR_Word) ((MR_hl_field(0, MaybePragmaVars_27, (MR_Integer) 0))));

      {
        MaybeNamePFPragmaVars_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeNamePFPragmaVars_29, 0) = ((MR_Box) (PragmaVarsSpecs_30));
      }
    }
    else
    {
      MR_Word PragmaVars0_28 = ((MR_Word) ((MR_hl_field(1, MaybePragmaVars_27, (MR_Integer) 0))));

      {
        MaybeNamePFPragmaVars_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeNamePFPragmaVars_29, 0) = ((MR_Box) (PredName0_21));
        MR_hl_field(1, MaybeNamePFPragmaVars_29, 1) = ((MR_Box) (PredOrFunc0_25));
        MR_hl_field(1, MaybeNamePFPragmaVars_29, 2) = ((MR_Box) (PragmaVars0_28));
      }
    }
  }
  FlagsContextPieces_32 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[173])));
  parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0(ForeignLanguage_12, VarSet_11, FlagsTerm_14, FlagsContextPieces_32, &MaybeFlags_33);
  CodeContext_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), CodeTerm_15);
  succeeded = ((MR_tag((MR_Word) CodeTerm_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_80 = ((MR_Word) ((MR_hl_field(0, CodeTerm_15, (MR_Integer) 0))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, CodeTerm_15, (MR_Integer) 1))));
    succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_Integer) 2);
      if (succeeded)
        Code_35 = ((MR_String) ((MR_hl_field(2, Var_80, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    MR_Word Impl0_37;
    MR_Word Var_82;

    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (CodeContext_34));
    }
    {
      Impl0_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Impl0_37, 0) = ((MR_Box) (Code_35));
      MR_hl_field(0, Impl0_37, 1) = ((MR_Box) (Var_82));
    }
    {
      MaybeImpl_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeImpl_38, 0) = ((MR_Box) (Impl0_37));
    }
  }
  else
  {
    MR_String CodeTermStr_39;
    MR_Word ImplPieces_40;
    MR_Word ImplSpec_41;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_104;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_123;

    CodeTermStr_39 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_11, CodeTerm_15);
    Var_99 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[111])));
    {
      Var_112 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_112, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_112, 1) = ((MR_Box) (CodeTermStr_39));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_111);
    Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_109);
    Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_104);
    ImplPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[175])), Var_98);
    {
      ImplSpec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImplSpec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_ordinary_foreign_proc\'/9"));
      MR_hl_field(0, ImplSpec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ImplSpec_41, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, ImplSpec_41, 3) = ((MR_Box) (CodeContext_34));
      MR_hl_field(0, ImplSpec_41, 4) = ((MR_Box) (ImplPieces_40));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (ImplSpec_41));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeImpl_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeImpl_38, 0) = ((MR_Box) (Var_123));
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeNamePFPragmaVars_29)) == (MR_Integer) 1);
  if (succeeded)
  {
    PredName_42 = ((MR_Word) ((MR_hl_field(1, MaybeNamePFPragmaVars_29, (MR_Integer) 0))));
    PredOrFunc_43 = ((MR_Word) ((MR_hl_field(1, MaybeNamePFPragmaVars_29, (MR_Integer) 1))));
    PragmaVars_44 = ((MR_Word) ((MR_hl_field(1, MaybeNamePFPragmaVars_29, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) MaybeFlags_33)) == (MR_Integer) 1);
    if (succeeded)
    {
      Flags_45 = ((MR_Word) ((MR_hl_field(1, MaybeFlags_33, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeImpl_38)) == (MR_Integer) 1);
      if (succeeded)
        Impl_46 = ((MR_Word) ((MR_hl_field(1, MaybeImpl_38, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    MR_Word ProgVarSet_47;
    MR_Word InstVarSet_48;
    MR_Word FPInfo_49;
    MR_Word Item_50;
    MR_Word Var_125;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, &ProgVarSet_47);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_11, &InstVarSet_48);
    {
      FPInfo_49 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FPInfo_49, 0) = ((MR_Box) (Flags_45));
      MR_hl_field(0, FPInfo_49, 1) = ((MR_Box) (PredName_42));
      MR_hl_field(0, FPInfo_49, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_43));
      MR_hl_field(0, FPInfo_49, 3) = ((MR_Box) (PragmaVars_44));
      MR_hl_field(0, FPInfo_49, 4) = ((MR_Box) (ProgVarSet_47));
      MR_hl_field(0, FPInfo_49, 5) = ((MR_Box) (InstVarSet_48));
      MR_hl_field(0, FPInfo_49, 6) = ((MR_Box) (Impl_46));
      MR_hl_field(0, FPInfo_49, 7) = ((MR_Box) (Context_16));
      MR_hl_field(0, FPInfo_49, 8) = ((MR_Box) (SeqNum_17));
    }
    {
      Item_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Item_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Item_50, 1) = ((MR_Box) (FPInfo_49));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) (Item_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_125));
    }
  }
  else
  {
    MR_Word AllSpecs_51;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;

    Var_126 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0), MaybeImpl_38);
    Var_128 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeNamePFPragmaVars_29);
    Var_129 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0), MaybeFlags_33);
    Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_128, Var_129);
    AllSpecs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_126, Var_127);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (AllSpecs_51));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Attrs_3;

  parse_tree__parse_pragma_foreign__process_attribute_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Attrs_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Attrs_3));
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Var_183 = ((MR_Word) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183));
  parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_212 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Var_183, (MR_Integer) 0))));
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_213 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Var_183, (MR_Integer) 1))));
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_215_215 = (MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0);
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_215_215, ((MR_Box) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_212)), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14);
  if ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
  {
    (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_215_215, ((MR_Box) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_213)), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14);
    if ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
      parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[1]), &(env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[275])), parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_3, env_ptr);
      (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0(
  MR_Word ForeignLanguage_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeAttributes_10)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0_s env;

  {
    MR_Word Attributes0_11;
    MR_Word MaybeAttrList_13;
    MR_Word Attr_224;

    Attributes0_11 = parse_tree__prog_data_foreign__default_attributes_1_f_0(ForeignLanguage_6);
    (env).parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded = parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(VarSet_7, Term_8, &Attr_224);
    if ((env).parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
    {
      MR_Word Var_225;

      {
        Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_225, 0) = ((MR_Box) (Attr_224));
        MR_hl_field(1, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeAttrList_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeAttrList_13, 0) = ((MR_Box) (Var_225));
      }
    }
    else
      parse_tree__parse_pragma_foreign__parse_foreign_proc_attributes_list_5_p_0(ContextPieces_9, VarSet_7, Term_8, (MR_Integer) 1, &MaybeAttrList_13);
    if (((MR_tag((MR_Word) MaybeAttrList_13)) == (MR_Integer) 0))
      *MaybeAttributes_10 = (MR_Word) (MaybeAttrList_13);
    else
    {
      (env).parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14 = ((MR_Word) ((MR_hl_field(1, MaybeAttrList_13, (MR_Integer) 0))));
      parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_4(&env);
      if ((env).parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
      {
        MR_Word Pieces_17;
        MR_Word Spec_18;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_207;
        MR_Word Var_208;

        Var_184 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_9);
        Var_193 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[280])));
        Var_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_193, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[282])));
        Var_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[278])), Var_192);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_184, Var_185);
        Var_207 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_and_check_foreign_proc_attributes_term\'/5"));
          MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_207));
          MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
        }
        {
          Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_208, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(1, Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeAttributes_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_208));
        }
      }
      else
      {
        MR_Word Attributes_19;
        MR_Box conv2_Attributes_19;
        MR_Word Var_211;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_proc_attributes_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[2]), (env).parse_tree__parse_pragma_foreign__parse_and_check_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14, ((MR_Box) (Attributes0_11)), &conv2_Attributes_19);
        Attributes_19 = ((MR_Word) (conv2_Attributes_19));
        Var_211 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAttributes_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Attributes_19));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_proc_attributes_list_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Integer HeadAttrNum_9,
  MR_Word * MaybeAttrs_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
  MR_Word Var_25;
  MR_String Var_26;
  MR_Word Var_27;

  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeAttrs_10 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[6]));
  else
  {
    MR_Word HeadTerm_12;
    MR_Word TailTerm_13;
    MR_Word Var_29;
    MR_String Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(0, Term_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
        succeeded = (strcmp(Var_30, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_12 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
            succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_13 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
              Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
              succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeTailAttrs_15;
      MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) HeadAttrNum_9 + (MR_Unsigned) 1);
      MR_Word HeadAttr_16;

      parse_tree__parse_pragma_foreign__parse_foreign_proc_attributes_list_5_p_0(ContextPieces_6, VarSet_7, TailTerm_13, Var_34, &MaybeTailAttrs_15);
      succeeded = parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(VarSet_7, HeadTerm_12, &HeadAttr_16);
      if (succeeded)
        if (((MR_tag((MR_Word) MaybeTailAttrs_15)) == (MR_Integer) 0))
          *MaybeAttrs_10 = MaybeTailAttrs_15;
        else
        {
          MR_Word TailAttrs_17 = ((MR_Word) ((MR_hl_field(1, MaybeTailAttrs_15, (MR_Integer) 0))));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (HeadAttr_16));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (TailAttrs_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeAttrs_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
          }
        }
      else
      {
        MR_String HeadTermStr_19;
        MR_Word HeadPieces_20;
        MR_Word HeadSpec_21;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        HeadTermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, HeadTerm_12);
        Var_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (HeadAttrNum_9));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[284])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[59])));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
        }
        Var_54 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[286])));
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_67, 1) = ((MR_Box) (HeadTermStr_19));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
        }
        Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
        Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_64);
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_59);
        Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_53);
        HeadPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_38);
        Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_12);
        {
          HeadSpec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_proc_attributes_list\'/5"));
          MR_hl_field(0, HeadSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, HeadSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, HeadSpec_21, 3) = ((MR_Box) (Var_78));
          MR_hl_field(0, HeadSpec_21, 4) = ((MR_Box) (HeadPieces_20));
        }
        Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[7]), MaybeTailAttrs_15);
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (HeadSpec_21));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeAttrs_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
        }
      }
    }
    else
    {
      MR_String TermStr_22;
      MR_Word TermPieces_23;
      MR_Word TermSpec_24;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_114;
      MR_Word Var_115;

      TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_8);
      Var_81 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
      Var_90 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[291])));
      {
        Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_103, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
      }
      Var_101 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_102);
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_100);
      Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_95);
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[289])), Var_89);
      TermPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_82);
      Var_114 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        TermSpec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TermSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_proc_attributes_list\'/5"));
        MR_hl_field(0, TermSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TermSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, TermSpec_24, 3) = ((MR_Box) (Var_114));
        MR_hl_field(0, TermSpec_24, 4) = ((MR_Box) (TermPieces_23));
      }
      {
        Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_115, 0) = ((MR_Box) (TermSpec_24));
        MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeAttrs_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(
  MR_Word VarSet_4,
  MR_Word Term_5,
  MR_Word * Flag_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word MayCallMercury_7;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_String Var_41;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_40 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Var_41, ((&parse_tree__parse_pragma_foreign_vector_common_5[0 + mid_2]))->parse_tree__parse_pragma_foreign__vector_common_type_5_0__vct_5_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            MayCallMercury_7 = ((&parse_tree__parse_pragma_foreign_vector_common_5[0 + mid_2]))->parse_tree__parse_pragma_foreign__vector_common_type_5_0__vct_5_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Flag_6 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (MayCallMercury_7));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word ThreadSafe_8;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_String Var_57;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_56 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_57 = ((MR_String) ((MR_hl_field(0, Var_56, (MR_Integer) 0))));
          if ((strcmp(Var_57, (MR_String) "thread_safe") == 0))
          {
            ThreadSafe_8 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Var_57, (MR_String) "not_thread_safe") == 0))
          {
            ThreadSafe_8 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(Var_57, (MR_String) "maybe_thread_safe") == 0))
          {
            ThreadSafe_8 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Flag_6 = base;
        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (ThreadSafe_8));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TabledForIo_9;
      MR_String Str_58;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Integer lo_4;
      MR_Integer hi_5;
      MR_Integer mid_6;
      MR_Integer result_7;

      succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_60 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
        if (succeeded)
        {
          Str_58 = ((MR_String) ((MR_hl_field(0, Var_60, (MR_Integer) 0))));
          succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_4 = (MR_Integer) 0;
            hi_5 = (MR_Integer) 3;
            do
            {
              mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
              result_7 = MR_strcmp(Str_58, ((&parse_tree__parse_pragma_foreign_vector_common_6[0 + mid_6]))->parse_tree__parse_pragma_foreign__vector_common_type_6_0__vct_6_f_0);
              if ((result_7 == (MR_Integer) 0))
              {
                TabledForIo_9 = ((&parse_tree__parse_pragma_foreign_vector_common_6[0 + mid_6]))->parse_tree__parse_pragma_foreign__vector_common_type_6_0__vct_6_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_1;
              }
              else
              if ((result_7 < (MR_Integer) 0))
                hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
              else
                lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
            }
            while ((lo_4 <= hi_5));
            succeeded = MR_FALSE;
          label_1:;
          }
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Flag_6 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (TabledForIo_9));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word UserSharing_10;

        succeeded = parse_tree__prog_ctgc__parse_user_annotated_sharing_3_p_0(VarSet_4, Term_5, &UserSharing_10);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Flag_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = ((MR_Box) (UserSharing_10));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Backend_11;
          MR_String Functor_62;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_64 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
            Var_65 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
            if (succeeded)
            {
              Functor_62 = ((MR_String) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
              succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                if ((strcmp(Functor_62, (MR_String) "low_level_backend") == 0))
                {
                  Backend_11 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Functor_62, (MR_String) "high_level_backend") == 0))
                {
                  Backend_11 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Flag_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Backend_11));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word Purity_12;
            MR_String Functor_66;
            MR_Word Var_68;
            MR_Word Var_69;

            succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_68 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
              Var_69 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
              if (succeeded)
              {
                Functor_66 = ((MR_String) ((MR_hl_field(0, Var_68, (MR_Integer) 0))));
                succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  if ((strcmp(Functor_66, (MR_String) "promise_pure") == 0))
                  {
                    Purity_12 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  else
                  if ((strcmp(Functor_66, (MR_String) "promise_semipure") == 0))
                  {
                    Purity_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
                }
              }
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Flag_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Purity_12));
              }
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Terminates_13;
              MR_String Functor_70;
              MR_Word Var_72;
              MR_Word Var_73;

              succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_72 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Functor_70 = ((MR_String) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));
                  succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    if ((strcmp(Functor_70, (MR_String) "terminates") == 0))
                    {
                      Terminates_13 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(Functor_70, (MR_String) "does_not_terminate") == 0))
                    {
                      Terminates_13 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Flag_6 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Terminates_13));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String Functor_74;
                MR_Word Var_76;
                MR_Word Var_77;

                succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_76 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                  Var_77 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Functor_74 = ((MR_String) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
                    succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      succeeded = (strcmp(Functor_74, (MR_String) "will_not_throw_exception") == 0);
                  }
                }
                if (succeeded)
                {
                  *Flag_6 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String Functor_78;
                  MR_Word Var_80;
                  MR_Word Var_81;

                  succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_80 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                    Var_81 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Functor_78 = ((MR_String) ((MR_hl_field(0, Var_80, (MR_Integer) 0))));
                      succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        succeeded = (strcmp(Functor_78, (MR_String) "ordinary_despite_detism") == 0);
                    }
                  }
                  if (succeeded)
                  {
                    *Flag_6 = (MR_Word) ((MR_Unsigned) 4U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word TrailMod_14;
                    MR_Word Var_91;
                    MR_Word Var_92;
                    MR_String Var_93;

                    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_92 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                      Var_91 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_93 = ((MR_String) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
                          if ((strcmp(Var_93, (MR_String) "may_modify_trail") == 0))
                          {
                            TrailMod_14 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                          else
                          if ((strcmp(Var_93, (MR_String) "will_not_modify_trail") == 0))
                          {
                            TrailMod_14 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                            succeeded = MR_FALSE;
                        }
                      }
                    }
                    if (succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Flag_6 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (TrailMod_14));
                      }
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word CallsTabled_15;

                      succeeded = parse_tree__parse_pragma_foreign__parse_may_call_mm_tabled_2_p_0(Term_5, &CallsTabled_15);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Flag_6 = base;
                          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (CallsTabled_15));
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word BoxPolicy_16;

                        succeeded = parse_tree__parse_pragma_foreign__parse_box_policy_2_p_0(Term_5, &BoxPolicy_16);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Flag_6 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word AffectsLiveness_17;
                          MR_String Functor_94;
                          MR_Word Var_96;
                          MR_Word Var_97;

                          succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_96 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                            Var_97 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Functor_94 = ((MR_String) ((MR_hl_field(0, Var_96, (MR_Integer) 0))));
                              succeeded = (Var_97 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                if ((strcmp(Functor_94, (MR_String) "affects_liveness") == 0))
                                {
                                  AffectsLiveness_17 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                                else
                                if ((((strcmp(Functor_94, (MR_String) "does_not_affect_liveness") == 0)) || ((strcmp(Functor_94, (MR_String) "doesnt_affect_liveness") == 0))))
                                {
                                  AffectsLiveness_17 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                          if (succeeded)
                          {
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *Flag_6 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_17));
                            }
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word AllocatesMemory_18;
                            MR_String Functor_98;
                            MR_Word Var_100;
                            MR_Word Var_101;
                            MR_Integer lo_8;
                            MR_Integer hi_9;
                            MR_Integer mid_10;
                            MR_Integer result_11;

                            succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_100 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
                              Var_101 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Functor_98 = ((MR_String) ((MR_hl_field(0, Var_100, (MR_Integer) 0))));
                                succeeded = (Var_101 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  // binary string simple lookup switch
                                  ;
                                  lo_8 = (MR_Integer) 0;
                                  hi_9 = (MR_Integer) 3;
                                  do
                                  {
                                    mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                                    result_11 = MR_strcmp(Functor_98, ((&parse_tree__parse_pragma_foreign_vector_common_7[0 + mid_10]))->parse_tree__parse_pragma_foreign__vector_common_type_7_0__vct_7_f_0);
                                    if ((result_11 == (MR_Integer) 0))
                                    {
                                      AllocatesMemory_18 = ((&parse_tree__parse_pragma_foreign_vector_common_7[0 + mid_10]))->parse_tree__parse_pragma_foreign__vector_common_type_7_0__vct_7_f_1;
                                      succeeded = MR_TRUE;
                                      // jump out of search loop
                                      ;
                                      goto label_2;
                                    }
                                    else
                                    if ((result_11 < (MR_Integer) 0))
                                      hi_9 = (MR_Integer) ((MR_Unsigned) mid_10 - (MR_Unsigned) 1);
                                    else
                                      lo_8 = (MR_Integer) ((MR_Unsigned) mid_10 + (MR_Unsigned) 1);
                                  }
                                  while ((lo_8 <= hi_9));
                                  succeeded = MR_FALSE;
                                label_2:;
                                }
                              }
                            }
                            if (succeeded)
                            {
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                *Flag_6 = base;
                                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (AllocatesMemory_18));
                              }
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word RegistersRoots_19;

                              succeeded = parse_tree__parse_pragma_foreign__parse_registers_roots_2_p_0(Term_5, &RegistersRoots_19);
                              if (succeeded)
                              {
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  *Flag_6 = base;
                                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (RegistersRoots_19));
                                }
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word MayDuplicate_20;

                                succeeded = parse_tree__parse_pragma_foreign__parse_may_duplicate_2_p_0(Term_5, &MayDuplicate_20);
                                if (succeeded)
                                {
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    *Flag_6 = base;
                                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (MayDuplicate_20));
                                  }
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word MayExport_21;

                                  succeeded = parse_tree__parse_pragma_foreign__parse_may_export_body_2_p_0(Term_5, &MayExport_21);
                                  if (succeeded)
                                  {
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      *Flag_6 = base;
                                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                                      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (MayExport_21));
                                    }
                                    succeeded = MR_TRUE;
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
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_export_body_2_p_0(
  MR_Word Term_3,
  MR_Word * MayExportBody_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Functor_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(Functor_5, (MR_String) "may_export_body") == 0))
        {
          *MayExportBody_4 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Functor_5, (MR_String) "may_not_export_body") == 0))
        {
          *MayExportBody_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_duplicate_2_p_0(
  MR_Word Term_3,
  MR_Word * MayDuplicate_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Functor_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(Functor_5, (MR_String) "may_duplicate") == 0))
        {
          *MayDuplicate_4 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Functor_5, (MR_String) "may_not_duplicate") == 0))
        {
          *MayDuplicate_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_registers_roots_2_p_0(
  MR_Word Term_3,
  MR_Word * RegistersRoots_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Functor_5;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Functor_5, ((&parse_tree__parse_pragma_foreign_vector_common_4[0 + mid_2]))->parse_tree__parse_pragma_foreign__vector_common_type_4_0__vct_4_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            *RegistersRoots_4 = ((&parse_tree__parse_pragma_foreign_vector_common_4[0 + mid_2]))->parse_tree__parse_pragma_foreign__vector_common_type_4_0__vct_4_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_box_policy_2_p_0(
  MR_Word Term_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_1)) == (MR_Integer) 0);
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String Var_16;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_1, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_1, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
        if ((strcmp(Var_16, (MR_String) "always_boxed") == 0))
        {
          *HeadVar__2_2 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Var_16, (MR_String) "native_if_possible") == 0))
        {
          *HeadVar__2_2 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_may_call_mm_tabled_2_p_0(
  MR_Word Term_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_1)) == (MR_Integer) 0);
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String Var_16;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_1, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_1, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(0, Var_15, (MR_Integer) 0))));
        if ((strcmp(Var_16, (MR_String) "may_call_mm_tabled") == 0))
        {
          *HeadVar__2_2 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Var_16, (MR_String) "will_not_call_mm_tabled") == 0))
        {
          *HeadVar__2_2 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(
  MR_Word VarSet_1,
  MR_Word ContextPieces_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[3]));
  else
  {
    MR_Word HeadTerm_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailTerm_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MaybeTailPragmaVars_16;
    MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
    MR_Word ModeTerm_18;
    MR_Word Var_20;
    MR_Word VarContext_21;
    MR_Word VarTerm_17;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(VarSet_1, ContextPieces_2, TailTerm_13, Var_38, &MaybeTailPragmaVars_16);
    succeeded = ((MR_tag((MR_Word) HeadTerm_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_40 = ((MR_Word) ((MR_hl_field(0, HeadTerm_12, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, HeadTerm_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        succeeded = (strcmp(Var_41, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_18 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
              Var_44 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 1))));
              succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) VarTerm_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_20 = ((MR_Word) ((MR_hl_field(1, VarTerm_17, (MR_Integer) 0))));
                  VarContext_21 = ((MR_Word) ((MR_hl_field(1, VarTerm_17, (MR_Integer) 1))));
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeVarName_23;
      MR_Word ArgContextPieces_26;
      MR_Word MaybeMode0_27;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_String VarName0_22;
      MR_Word Mode0_28;
      MR_String VarName_29;
      MR_Word TailPragmaVars_30;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Var_20, &VarName0_22);
      if (succeeded)
        {
          MaybeVarName_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeVarName_23, 0) = ((MR_Box) (VarName0_22));
        }
      else
      {
        MR_Word UnnamedSpec_25;
        MR_Word Var_62;

        {
          UnnamedSpec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnnamedSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_varlist\'/5"));
          MR_hl_field(0, UnnamedSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, UnnamedSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, UnnamedSpec_25, 3) = ((MR_Box) (VarContext_21));
          MR_hl_field(0, UnnamedSpec_25, 4) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[183])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (UnnamedSpec_25));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeVarName_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeVarName_23, 0) = ((MR_Box) (Var_62));
        }
      }
      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[186])));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[184])));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
      }
      Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65);
      ArgContextPieces_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_2, Var_64);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_1, ArgContextPieces_26, ModeTerm_18, &MaybeMode0_27);
      succeeded = ((MR_tag((MR_Word) MaybeMode0_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        Mode0_28 = ((MR_Word) ((MR_hl_field(1, MaybeMode0_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeVarName_23)) == (MR_Integer) 1);
        if (succeeded)
        {
          VarName_29 = ((MR_String) ((MR_hl_field(1, MaybeVarName_23, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailPragmaVars_16)) == (MR_Integer) 1);
          if (succeeded)
            TailPragmaVars_30 = ((MR_Word) ((MR_hl_field(1, MaybeTailPragmaVars_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Mode_31;
        MR_Word ProgVar_32;
        MR_Word HeadPragmaVar_33;
        MR_Word Var_76;

        parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(Mode0_28, &Mode_31);
        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, &ProgVar_32);
        {
          HeadPragmaVar_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadPragmaVar_33, 0) = ((MR_Box) (ProgVar_32));
          MR_hl_field(0, HeadPragmaVar_33, 1) = ((MR_Box) (VarName_29));
          MR_hl_field(0, HeadPragmaVar_33, 2) = ((MR_Box) (Mode_31));
          MR_hl_field(0, HeadPragmaVar_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (HeadPragmaVar_33));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (TailPragmaVars_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_76));
        }
      }
      else
      {
        MR_Word Specs_34;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
        Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeVarName_23);
        Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_79, Var_80);
        Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_77, Var_78);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_34));
        }
      }
    }
    else
    {
      MR_String HeadTermStr_35;
      MR_Word Pieces_36;
      MR_Word Spec_37;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_110;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;

      HeadTermStr_35 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, HeadTerm_12);
      {
        Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_85, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[192])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_pragma_foreign_scalar_common_1[59])));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
      }
      Var_102 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[194])));
      {
        Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_118, 1) = ((MR_Box) (HeadTermStr_35));
      }
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
      }
      Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_117);
      Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_115);
      Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, Var_110);
      Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_101);
      Var_129 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_12);
      {
        Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_varlist\'/5"));
        MR_hl_field(0, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_37, 3) = ((MR_Box) (Var_129));
        MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_36));
      }
      Var_131 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_code_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_32;
    MR_Word Spec_33;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_110;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_127;
    MR_Word Var_128;

    Var_102 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[99])));
    Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_115);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, Var_110);
    Pieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_101);
    Var_127 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
      MR_hl_field(0, Spec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_33, 3) = ((MR_Box) (Var_127));
      MR_hl_field(0, Spec_33, 4) = ((MR_Box) (Pieces_32));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (Spec_33));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_128));
    }
  }
  else
  {
    MR_Word Var_229 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_230 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_229 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_136;
      MR_Word Spec_137;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_145;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_162;
      MR_Word Var_163;

      Var_143 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[99])));
      Var_151 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
      Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_150);
      Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, Var_145);
      Pieces_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_142);
      Var_162 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_137, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
        MR_hl_field(0, Spec_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_137, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_137, 3) = ((MR_Box) (Var_162));
        MR_hl_field(0, Spec_137, 4) = ((MR_Box) (Pieces_136));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (Spec_137));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_163));
      }
    }
    else
    {
      MR_Word Var_231 = ((MR_Word) ((MR_hl_field(1, Var_229, (MR_Integer) 1))));
      MR_Word Var_232 = ((MR_Word) ((MR_hl_field(1, Var_229, (MR_Integer) 0))));

      if ((Var_231 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ContextPieces_15;
        MR_Word MaybeForeignLang_16;
        MR_Word Code_18;
        MR_Word CodeSpecs_19;
        MR_Word CodePrime_17;
        MR_Word ForeignLanguage_23;

        ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[103])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(ContextPieces_15, VarSet_7, Var_230, &MaybeForeignLang_16);
        succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_232, &CodePrime_17);
        if (succeeded)
        {
          Code_18 = CodePrime_17;
          CodeSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_String CodeTermStr_20;
          MR_Word CodePieces_21;
          MR_Word CodeSpec_22;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_70;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_89;

          Code_18 = (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_3[1]);
          CodeTermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_232);
          Var_65 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[111])));
          {
            Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_78, 1) = ((MR_Box) (CodeTermStr_20));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          }
          Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_77);
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_75);
          Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_70);
          CodePieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[109])), Var_64);
          Var_89 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_232);
          {
            CodeSpec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CodeSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
            MR_hl_field(0, CodeSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, CodeSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, CodeSpec_22, 3) = ((MR_Box) (Var_89));
            MR_hl_field(0, CodeSpec_22, 4) = ((MR_Box) (CodePieces_21));
          }
          {
            CodeSpecs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CodeSpecs_19, 0) = ((MR_Box) (CodeSpec_22));
            MR_hl_field(1, CodeSpecs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        succeeded = (CodeSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_16)) == (MR_Integer) 1);
          if (succeeded)
            ForeignLanguage_23 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_16, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FC_24;
          MR_Word Item_25;
          MR_Word Var_91;
          MR_Word Var_92;

          {
            FC_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FC_24, 0) = (MR_Box) ((MR_Unsigned) (ForeignLanguage_23));
            MR_hl_field(0, FC_24, 1) = ((MR_Box) (Code_18));
            MR_hl_field(0, FC_24, 2) = ((MR_Box) (Context_10));
            MR_hl_field(0, FC_24, 3) = ((MR_Box) (SeqNum_11));
          }
          Var_91 = (MR_Word) (MR_mkword(1, (MR_Word) (FC_24)));
          {
            Item_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_25, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Item_25, 1) = ((MR_Box) (Var_91));
          }
          {
            Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_92, 0) = ((MR_Box) (Item_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_92));
          }
        }
        else
        {
          MR_Word Specs_26;
          MR_Word Var_93;

          Var_93 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_16);
          Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_93, CodeSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_26));
          }
        }
      }
      else
      {
        MR_Word Pieces_167;
        MR_Word Spec_168;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_176;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_193;
        MR_Word Var_194;

        Var_174 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[99])));
        Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[101])));
        Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_181);
        Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_176);
        Pieces_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_173);
        Var_193 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_168 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_168, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
          MR_hl_field(0, Spec_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_168, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_168, 3) = ((MR_Box) (Var_193));
          MR_hl_field(0, Spec_168, 4) = ((MR_Box) (Pieces_167));
        }
        {
          Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_194, 0) = ((MR_Box) (Spec_168));
          MR_hl_field(1, Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_194));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_decl_6_p_0(
  MR_Word VarSet_7,
  MR_Word ErrorTerm_8,
  MR_Word PragmaTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded;

  if ((PragmaTerms_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_75;
    MR_Word Var_76;

    Var_49 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[50])));
    Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[52])));
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[56])));
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_57);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_48);
    Var_75 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_75));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
    }
  }
  else
  {
    MR_Word Var_520 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_521 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_520 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_472;
      MR_Word Spec_473;
      MR_Word Var_478;
      MR_Word Var_479;
      MR_Word Var_481;
      MR_Word Var_482;
      MR_Word Var_491;
      MR_Word Var_492;

      Var_479 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[50])));
      Var_482 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[52])));
      Var_481 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_482, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[56])));
      Var_478 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_479, Var_481);
      Pieces_472 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_478);
      Var_491 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_473 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_473, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
        MR_hl_field(0, Spec_473, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_473, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_473, 3) = ((MR_Box) (Var_491));
        MR_hl_field(0, Spec_473, 4) = ((MR_Box) (Pieces_472));
      }
      {
        Var_492 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_492, 0) = ((MR_Box) (Spec_473));
        MR_hl_field(1, Var_492, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_492));
      }
    }
    else
    {
      MR_Word Var_522 = ((MR_Word) ((MR_hl_field(1, Var_520, (MR_Integer) 1))));
      MR_Word Var_523 = ((MR_Word) ((MR_hl_field(1, Var_520, (MR_Integer) 0))));

      if ((Var_522 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeIsLocal_19 = (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_3[0]));
        MR_Word LangContextPieces_25;
        MR_Word MaybeLang_26;
        MR_Word MaybeLitOrIncl_28;
        MR_Word LitOrIncl0_27;
        MR_Word IsLocal_32;
        MR_Word Lang_33;
        MR_Word LitOrIncl_34;

        LangContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[58])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_25, VarSet_7, Var_521, &MaybeLang_26);
        succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_523, &LitOrIncl0_27);
        if (succeeded)
          {
            MaybeLitOrIncl_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeLitOrIncl_28, 0) = ((MR_Box) (LitOrIncl0_27));
          }
        else
        {
          MR_String LitOrInclStr_29;
          MR_Word LitOrInclPieces_30;
          MR_Word LitOrInclSpec_31;
          MR_Word Var_173;
          MR_Word Var_174;
          MR_Word Var_179;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_196;
          MR_Word Var_201;
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_215;
          MR_Word Var_216;

          LitOrInclStr_29 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_523);
          Var_174 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[69])));
          Var_185 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[77])));
          {
            Var_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_204, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_204, 1) = ((MR_Box) (LitOrInclStr_29));
          }
          {
            Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_203, 0) = ((MR_Box) (Var_204));
            MR_hl_field(1, Var_203, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          }
          Var_202 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_203);
          Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_201);
          Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, Var_196);
          Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[71])), Var_184);
          Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_179);
          LitOrInclPieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[341])), Var_173);
          Var_215 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_523);
          {
            LitOrInclSpec_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, LitOrInclSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
            MR_hl_field(0, LitOrInclSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, LitOrInclSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, LitOrInclSpec_31, 3) = ((MR_Box) (Var_215));
            MR_hl_field(0, LitOrInclSpec_31, 4) = ((MR_Box) (LitOrInclPieces_30));
          }
          {
            Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_216, 0) = ((MR_Box) (LitOrInclSpec_31));
            MR_hl_field(1, Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeLitOrIncl_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeLitOrIncl_28, 0) = ((MR_Box) (Var_216));
          }
        }
        IsLocal_32 = ((MR_Word) ((MR_hl_field(1, MaybeIsLocal_19, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeLang_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          Lang_33 = ((MR_Word) ((MR_hl_field(1, MaybeLang_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeLitOrIncl_28)) == (MR_Integer) 1);
          if (succeeded)
            LitOrIncl_34 = ((MR_Word) ((MR_hl_field(1, MaybeLitOrIncl_28, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FD_35;
          MR_Word Item_36;
          MR_Word Var_218;
          MR_Word Var_219;

          {
            FD_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FD_35, 0) = (MR_Box) (((((MR_Unsigned) (Lang_33) << 1)) | (MR_Unsigned) (IsLocal_32)));
            MR_hl_field(0, FD_35, 1) = ((MR_Box) (LitOrIncl_34));
            MR_hl_field(0, FD_35, 2) = ((MR_Box) (Context_10));
            MR_hl_field(0, FD_35, 3) = ((MR_Box) (SeqNum_11));
          }
          Var_218 = (MR_Word) ((MR_Word) (FD_35));
          {
            Item_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Item_36, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, Item_36, 1) = ((MR_Box) (Var_218));
          }
          {
            Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_219, 0) = ((MR_Box) (Item_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_219));
          }
        }
        else
        {
          MR_Word Specs_37;
          MR_Word Var_220;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word Var_223;

          Var_220 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0), MaybeIsLocal_19);
          Var_222 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeLang_26);
          Var_223 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0), MaybeLitOrIncl_28);
          Var_221 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_222, Var_223);
          Specs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_220, Var_221);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_37));
          }
        }
      }
      else
      {
        MR_Word Var_524 = ((MR_Word) ((MR_hl_field(1, Var_522, (MR_Integer) 1))));
        MR_Word Var_525 = ((MR_Word) ((MR_hl_field(1, Var_522, (MR_Integer) 0))));

        if ((Var_524 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeIsLocal_403;
          MR_Word LangContextPieces_404;
          MR_Word MaybeLang_405;
          MR_Word MaybeLitOrIncl_407;
          MR_Word IsLocal0_21;
          MR_Word LitOrIncl0_324;
          MR_Word IsLocal_384;
          MR_Word Lang_385;
          MR_Word LitOrIncl_386;

          succeeded = parse_tree__parse_pragma_foreign__parse_foreign_decl_is_local_2_p_0(Var_523, &IsLocal0_21);
          if (succeeded)
            {
              MaybeIsLocal_403 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeIsLocal_403, 0) = ((MR_Box) (IsLocal0_21));
            }
          else
          {
            MR_String IsLocalStr_22;
            MR_Word IsLocalPieces_23;
            MR_Word IsLocalSpec_24;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_105;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_138;
            MR_Word Var_139;

            IsLocalStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_523);
            Var_100 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[86])));
            Var_111 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[90])));
            {
              Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_127, 1) = ((MR_Box) (IsLocalStr_22));
            }
            {
              Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
              MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
            }
            Var_125 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_126);
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_124);
            Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_119);
            Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[71])), Var_110);
            Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_105);
            IsLocalPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[84])), Var_99);
            Var_138 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_523);
            {
              IsLocalSpec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, IsLocalSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
              MR_hl_field(0, IsLocalSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, IsLocalSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, IsLocalSpec_24, 3) = ((MR_Box) (Var_138));
              MR_hl_field(0, IsLocalSpec_24, 4) = ((MR_Box) (IsLocalPieces_23));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (IsLocalSpec_24));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeIsLocal_403 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeIsLocal_403, 0) = ((MR_Box) (Var_139));
            }
          }
          LangContextPieces_404 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[58])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_404, VarSet_7, Var_521, &MaybeLang_405);
          succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_525, &LitOrIncl0_324);
          if (succeeded)
            {
              MaybeLitOrIncl_407 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeLitOrIncl_407, 0) = ((MR_Box) (LitOrIncl0_324));
            }
          else
          {
            MR_String LitOrInclStr_278;
            MR_Word LitOrInclPieces_279;
            MR_Word LitOrInclSpec_280;
            MR_Word Var_287;
            MR_Word Var_288;
            MR_Word Var_293;
            MR_Word Var_298;
            MR_Word Var_299;
            MR_Word Var_301;
            MR_Word Var_306;
            MR_Word Var_307;
            MR_Word Var_308;
            MR_Word Var_309;
            MR_Word Var_320;
            MR_Word Var_321;

            LitOrInclStr_278 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_525);
            Var_288 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[69])));
            Var_299 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[77])));
            {
              Var_309 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_309, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_309, 1) = ((MR_Box) (LitOrInclStr_278));
            }
            {
              Var_308 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_308, 0) = ((MR_Box) (Var_309));
              MR_hl_field(1, Var_308, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
            }
            Var_307 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_308);
            Var_306 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_307, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_301 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_306);
            Var_298 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_299, Var_301);
            Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[71])), Var_298);
            Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_288, Var_293);
            LitOrInclPieces_279 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[343])), Var_287);
            Var_320 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_525);
            {
              LitOrInclSpec_280 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, LitOrInclSpec_280, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
              MR_hl_field(0, LitOrInclSpec_280, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, LitOrInclSpec_280, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, LitOrInclSpec_280, 3) = ((MR_Box) (Var_320));
              MR_hl_field(0, LitOrInclSpec_280, 4) = ((MR_Box) (LitOrInclPieces_279));
            }
            {
              Var_321 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_321, 0) = ((MR_Box) (LitOrInclSpec_280));
              MR_hl_field(1, Var_321, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeLitOrIncl_407 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MaybeLitOrIncl_407, 0) = ((MR_Box) (Var_321));
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeIsLocal_403)) == (MR_Integer) 1);
          if (succeeded)
          {
            IsLocal_384 = ((MR_Word) ((MR_hl_field(1, MaybeIsLocal_403, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeLang_405)) == (MR_Integer) 1);
            if (succeeded)
            {
              Lang_385 = ((MR_Word) ((MR_hl_field(1, MaybeLang_405, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeLitOrIncl_407)) == (MR_Integer) 1);
              if (succeeded)
                LitOrIncl_386 = ((MR_Word) ((MR_hl_field(1, MaybeLitOrIncl_407, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FD_371;
            MR_Word Item_372;
            MR_Word Var_373;
            MR_Word Var_374;

            {
              FD_371 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FD_371, 0) = (MR_Box) (((((MR_Unsigned) (Lang_385) << 1)) | (MR_Unsigned) (IsLocal_384)));
              MR_hl_field(0, FD_371, 1) = ((MR_Box) (LitOrIncl_386));
              MR_hl_field(0, FD_371, 2) = ((MR_Box) (Context_10));
              MR_hl_field(0, FD_371, 3) = ((MR_Box) (SeqNum_11));
            }
            Var_373 = (MR_Word) ((MR_Word) (FD_371));
            {
              Item_372 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_372, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Item_372, 1) = ((MR_Box) (Var_373));
            }
            {
              Var_374 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_374, 0) = ((MR_Box) (Item_372));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_374));
            }
          }
          else
          {
            MR_Word Specs_375;
            MR_Word Var_376;
            MR_Word Var_377;
            MR_Word Var_378;
            MR_Word Var_379;

            Var_376 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0), MaybeIsLocal_403);
            Var_378 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeLang_405);
            Var_379 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0), MaybeLitOrIncl_407);
            Var_377 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_378, Var_379);
            Specs_375 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_376, Var_377);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_375));
            }
          }
        }
        else
        {
          MR_Word Var_231;
          MR_Word Var_232;
          MR_Word Var_240;
          MR_Word Var_241;
          MR_Word Var_261;
          MR_Word Var_262;
          MR_Word Pieces_264;
          MR_Word Spec_265;

          Var_232 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[50])));
          Var_241 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[93])));
          Var_240 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_241, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[97])));
          Var_231 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_232, Var_240);
          Pieces_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_231);
          Var_261 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
          {
            Spec_265 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_265, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
            MR_hl_field(0, Spec_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_265, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_265, 3) = ((MR_Box) (Var_261));
            MR_hl_field(0, Spec_265, 4) = ((MR_Box) (Pieces_264));
          }
          {
            Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_262, 0) = ((MR_Box) (Spec_265));
            MR_hl_field(1, Var_262, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_262));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(
  MR_Word Term_3,
  MR_Word * LiteralOrInclude_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_Word Functor_5;
  MR_Word Args_6;

  if (succeeded)
  {
    Functor_5 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Code_8;

      succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 2);
      if (succeeded)
      {
        Code_8 = ((MR_String) ((MR_hl_field(2, Functor_5, (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *LiteralOrInclude_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Code_8));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String FileName_9;
      MR_String Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(0, Functor_5, (MR_Integer) 0))));
        succeeded = (strcmp(Var_11, (MR_String) "include_file") == 0);
        if (succeeded)
        {
          Var_12 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_13 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
            if (succeeded)
            {
              FileName_9 = ((MR_String) ((MR_hl_field(2, Var_13, (MR_Integer) 0))));
              succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *LiteralOrInclude_4 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (FileName_9));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_decl_is_local_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * IsLocal_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
  MR_Word Functor_3;
  MR_String String_6;
  MR_Word Var_7;

  if (succeeded)
  {
    Functor_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 0))
      {
        String_6 = ((MR_String) ((MR_hl_field(0, Functor_3, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 2))
      {
        String_6 = ((MR_String) ((MR_hl_field(2, Functor_3, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        if ((strcmp(String_6, (MR_String) "local") == 0))
        {
          *IsLocal_5 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(String_6, (MR_String) "exported") == 0))
        {
          *IsLocal_5 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_type_8_p_0(
  MR_Word ModuleName_9,
  MR_Word VarSet_10,
  MR_Word ErrorTerm_11,
  MR_Word PragmaTerms_12,
  MR_Word Context_13,
  MR_Word SeqNum_14,
  MR_Word MaybeMaybeCanonical_15,
  MR_Word * MaybeIOM_16)
{
  MR_bool succeeded;

  if ((PragmaTerms_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_53;
    MR_Word Spec_54;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_144;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_161;
    MR_Word Var_162;

    Var_136 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[14])));
    Var_150 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[18])));
    Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_150, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_149);
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, Var_144);
    Pieces_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_135);
    Var_161 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
    {
      Spec_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_54, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
      MR_hl_field(0, Spec_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_54, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_54, 3) = ((MR_Box) (Var_161));
      MR_hl_field(0, Spec_54, 4) = ((MR_Box) (Pieces_53));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Spec_54));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
    }
  }
  else
  {
    MR_Word Var_433 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_12, (MR_Integer) 1))));
    MR_Word Var_434 = ((MR_Word) ((MR_hl_field(1, PragmaTerms_12, (MR_Integer) 0))));

    if ((Var_433 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_177;
      MR_Word Spec_178;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_186;
      MR_Word Var_191;
      MR_Word Var_192;
      MR_Word Var_203;
      MR_Word Var_204;

      Var_184 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[14])));
      Var_192 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[18])));
      Var_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_192, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
      Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_191);
      Var_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_184, Var_186);
      Pieces_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_183);
      Var_203 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
      {
        Spec_178 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_178, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
        MR_hl_field(0, Spec_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_178, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_178, 3) = ((MR_Box) (Var_203));
        MR_hl_field(0, Spec_178, 4) = ((MR_Box) (Pieces_177));
      }
      {
        Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_204, 0) = ((MR_Box) (Spec_178));
        MR_hl_field(1, Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_204));
      }
    }
    else
    {
      MR_Word Var_435 = ((MR_Word) ((MR_hl_field(1, Var_433, (MR_Integer) 1))));
      MR_Word Var_436 = ((MR_Word) ((MR_hl_field(1, Var_433, (MR_Integer) 0))));

      if ((Var_435 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Pieces_208;
        MR_Word Spec_209;
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_217;
        MR_Word Var_222;
        MR_Word Var_223;
        MR_Word Var_234;
        MR_Word Var_235;

        Var_215 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[14])));
        Var_223 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[18])));
        Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_223, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_217 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_222);
        Var_214 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_215, Var_217);
        Pieces_208 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_214);
        Var_234 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
        {
          Spec_209 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_209, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
          MR_hl_field(0, Spec_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_209, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_209, 3) = ((MR_Box) (Var_234));
          MR_hl_field(0, Spec_209, 4) = ((MR_Box) (Pieces_208));
        }
        {
          Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_235, 0) = ((MR_Box) (Spec_209));
          MR_hl_field(1, Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_235));
        }
      }
      else
      {
        MR_Word Var_437 = ((MR_Word) ((MR_hl_field(1, Var_435, (MR_Integer) 1))));
        MR_Word Var_438 = ((MR_Word) ((MR_hl_field(1, Var_435, (MR_Integer) 0))));

        if ((Var_437 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LangContextPieces_22;
          MR_Word MaybeForeignLang_23;
          MR_Word TypeDefnHeadContextPieces_24;
          MR_Word MaybeTypeDefnHead_25;
          MR_Word ForeignTypeContextPieces_26;
          MR_Word MaybeForeignTypeName_27;
          MR_Word AssertionsSet_28;
          MR_Word Assertions_32;
          MR_Word ForeignLang_33;
          MR_Word MercuryTypeSymName_34;
          MR_Word MercuryParams_35;
          MR_String ForeignTypeName_36;
          MR_Word MaybeCanonical_37;

          LangContextPieces_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[24])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_22, VarSet_10, Var_434, &MaybeForeignLang_23);
          TypeDefnHeadContextPieces_24 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[26])));
          parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeDefnHeadContextPieces_24, ModuleName_9, VarSet_10, Var_436, &MaybeTypeDefnHead_25);
          ForeignTypeContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[28])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_type_4_p_0(ForeignTypeContextPieces_26, Var_438, VarSet_10, &MaybeForeignTypeName_27);
          AssertionsSet_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
          Assertions_32 = (MR_Word) (AssertionsSet_28);
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_23)) == (MR_Integer) 1);
          if (succeeded)
          {
            ForeignLang_33 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_23, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeTypeDefnHead_25)) == (MR_Integer) 1);
            if (succeeded)
            {
              MercuryTypeSymName_34 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefnHead_25, (MR_Integer) 0))));
              MercuryParams_35 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefnHead_25, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) MaybeForeignTypeName_27)) == (MR_Integer) 1);
              if (succeeded)
              {
                ForeignTypeName_36 = ((MR_String) ((MR_hl_field(1, MaybeForeignTypeName_27, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMaybeCanonical_15)) == (MR_Integer) 1);
                if (succeeded)
                  MaybeCanonical_37 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeCanonical_15, (MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word ForeignType_38;
            MR_Word TVarSet_39;
            MR_Word TypeDetailsForeign_40;
            MR_Word ItemTypeDefn_41;
            MR_Word Item_42;
            MR_Word Var_115;
            MR_Word Var_116;

            switch (ForeignLang_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_112 = (MR_Word) (ForeignTypeName_36);

                  {
                    ForeignType_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ForeignType_38, 0) = ((MR_Box) (Var_112));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_114 = (MR_Word) (ForeignTypeName_36);

                  {
                    ForeignType_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ForeignType_38, 0) = ((MR_Box) (Var_114));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_113 = (MR_Word) (ForeignTypeName_36);

                  {
                    ForeignType_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ForeignType_38, 0) = ((MR_Box) (Var_113));
                  }
                }
                break;
            }
            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_39);
            {
              TypeDetailsForeign_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeDetailsForeign_40, 0) = ((MR_Box) (ForeignType_38));
              MR_hl_field(0, TypeDetailsForeign_40, 1) = ((MR_Box) (MaybeCanonical_37));
              MR_hl_field(0, TypeDetailsForeign_40, 2) = ((MR_Box) (Assertions_32));
            }
            {
              Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_115, 1) = ((MR_Box) (TypeDetailsForeign_40));
            }
            {
              ItemTypeDefn_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ItemTypeDefn_41, 0) = ((MR_Box) (MercuryTypeSymName_34));
              MR_hl_field(0, ItemTypeDefn_41, 1) = ((MR_Box) (MercuryParams_35));
              MR_hl_field(0, ItemTypeDefn_41, 2) = ((MR_Box) (Var_115));
              MR_hl_field(0, ItemTypeDefn_41, 3) = ((MR_Box) (TVarSet_39));
              MR_hl_field(0, ItemTypeDefn_41, 4) = ((MR_Box) (Context_13));
              MR_hl_field(0, ItemTypeDefn_41, 5) = ((MR_Box) (SeqNum_14));
            }
            {
              Item_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Item_42, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Item_42, 1) = ((MR_Box) (ItemTypeDefn_41));
            }
            {
              Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_116, 0) = ((MR_Box) (Item_42));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_116));
            }
          }
          else
          {
            MR_Word Specs_43;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;

            Var_117 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_23);
            Var_119 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[1]), MaybeTypeDefnHead_25);
            Var_121 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeForeignTypeName_27);
            Var_123 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), MaybeMaybeCanonical_15);
            Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) ((MR_Unsigned) 0U), Var_123);
            Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_121, Var_122);
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_119, Var_120);
            Specs_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_117, Var_118);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_43));
            }
          }
        }
        else
        {
          MR_Word Var_439 = ((MR_Word) ((MR_hl_field(1, Var_437, (MR_Integer) 1))));
          MR_Word Var_440 = ((MR_Word) ((MR_hl_field(1, Var_437, (MR_Integer) 0))));

          if ((Var_439 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word AssertionTerm_271;
            MR_Word AssertionContextPieces_272;
            MR_Word Var_274;
            MR_Word MaybeAssertionTerm_350;
            MR_Word LangContextPieces_351;
            MR_Word MaybeForeignLang_352;
            MR_Word TypeDefnHeadContextPieces_353;
            MR_Word MaybeTypeDefnHead_354;
            MR_Word ForeignTypeContextPieces_355;
            MR_Word MaybeForeignTypeName_356;
            MR_Word AssertionsSet_357;
            MR_Word AssertionSpecs_358;
            MR_Word Assertions_361;
            MR_Word ForeignLang_316;
            MR_Word MercuryTypeSymName_317;
            MR_Word MercuryParams_318;
            MR_String ForeignTypeName_319;
            MR_Word MaybeCanonical_320;

            {
              MaybeAssertionTerm_350 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeAssertionTerm_350, 0) = ((MR_Box) (Var_440));
            }
            LangContextPieces_351 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[24])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_351, VarSet_10, Var_434, &MaybeForeignLang_352);
            TypeDefnHeadContextPieces_353 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[26])));
            parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeDefnHeadContextPieces_353, ModuleName_9, VarSet_10, Var_436, &MaybeTypeDefnHead_354);
            ForeignTypeContextPieces_355 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[28])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_type_4_p_0(ForeignTypeContextPieces_355, Var_438, VarSet_10, &MaybeForeignTypeName_356);
            AssertionTerm_271 = ((MR_Word) ((MR_hl_field(1, MaybeAssertionTerm_350, (MR_Integer) 0))));
            AssertionContextPieces_272 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[30])));
            Var_274 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
            parse_tree__parse_pragma_foreign__parse_foreign_type_assertions_7_p_0(AssertionContextPieces_272, VarSet_10, AssertionTerm_271, Var_274, &AssertionsSet_357, (MR_Word) ((MR_Unsigned) 0U), &AssertionSpecs_358);
            Assertions_361 = (MR_Word) (AssertionsSet_357);
            succeeded = (AssertionSpecs_358 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeForeignLang_352)) == (MR_Integer) 1);
              if (succeeded)
              {
                ForeignLang_316 = ((MR_Word) ((MR_hl_field(1, MaybeForeignLang_352, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeTypeDefnHead_354)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MercuryTypeSymName_317 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefnHead_354, (MR_Integer) 0))));
                  MercuryParams_318 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefnHead_354, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeForeignTypeName_356)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ForeignTypeName_319 = ((MR_String) ((MR_hl_field(1, MaybeForeignTypeName_356, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeMaybeCanonical_15)) == (MR_Integer) 1);
                    if (succeeded)
                      MaybeCanonical_320 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeCanonical_15, (MR_Integer) 0))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word ForeignType_290;
              MR_Word TVarSet_291;
              MR_Word TypeDetailsForeign_292;
              MR_Word ItemTypeDefn_293;
              MR_Word Item_294;
              MR_Word Var_298;
              MR_Word Var_299;

              switch (ForeignLang_316) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_284 = (MR_Word) (ForeignTypeName_319);

                    {
                      ForeignType_290 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ForeignType_290, 0) = ((MR_Box) (Var_284));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_286 = (MR_Word) (ForeignTypeName_319);

                    {
                      ForeignType_290 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ForeignType_290, 0) = ((MR_Box) (Var_286));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_285 = (MR_Word) (ForeignTypeName_319);

                    {
                      ForeignType_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ForeignType_290, 0) = ((MR_Box) (Var_285));
                    }
                  }
                  break;
              }
              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_291);
              {
                TypeDetailsForeign_292 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeDetailsForeign_292, 0) = ((MR_Box) (ForeignType_290));
                MR_hl_field(0, TypeDetailsForeign_292, 1) = ((MR_Box) (MaybeCanonical_320));
                MR_hl_field(0, TypeDetailsForeign_292, 2) = ((MR_Box) (Assertions_361));
              }
              {
                Var_298 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_298, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Var_298, 1) = ((MR_Box) (TypeDetailsForeign_292));
              }
              {
                ItemTypeDefn_293 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ItemTypeDefn_293, 0) = ((MR_Box) (MercuryTypeSymName_317));
                MR_hl_field(0, ItemTypeDefn_293, 1) = ((MR_Box) (MercuryParams_318));
                MR_hl_field(0, ItemTypeDefn_293, 2) = ((MR_Box) (Var_298));
                MR_hl_field(0, ItemTypeDefn_293, 3) = ((MR_Box) (TVarSet_291));
                MR_hl_field(0, ItemTypeDefn_293, 4) = ((MR_Box) (Context_13));
                MR_hl_field(0, ItemTypeDefn_293, 5) = ((MR_Box) (SeqNum_14));
              }
              {
                Item_294 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Item_294, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(3, Item_294, 1) = ((MR_Box) (ItemTypeDefn_293));
              }
              {
                Var_299 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_299, 0) = ((MR_Box) (Item_294));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_299));
              }
            }
            else
            {
              MR_Word Specs_302;
              MR_Word Var_303;
              MR_Word Var_304;
              MR_Word Var_305;
              MR_Word Var_306;
              MR_Word Var_307;
              MR_Word Var_308;
              MR_Word Var_309;

              Var_303 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_352);
              Var_305 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[1]), MaybeTypeDefnHead_354);
              Var_307 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeForeignTypeName_356);
              Var_309 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), MaybeMaybeCanonical_15);
              Var_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AssertionSpecs_358, Var_309);
              Var_306 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_307, Var_308);
              Var_304 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_305, Var_306);
              Specs_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_303, Var_304);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_302));
              }
            }
          }
          else
          {
            MR_Word Pieces_239;
            MR_Word Spec_240;
            MR_Word Var_245;
            MR_Word Var_246;
            MR_Word Var_248;
            MR_Word Var_253;
            MR_Word Var_254;
            MR_Word Var_265;
            MR_Word Var_266;

            Var_246 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[14])));
            Var_254 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[18])));
            Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_254, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[16])), Var_253);
            Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_246, Var_248);
            Pieces_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[10])), Var_245);
            Var_265 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
            {
              Spec_240 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_240, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
              MR_hl_field(0, Spec_240, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_240, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_240, 3) = ((MR_Box) (Var_265));
              MR_hl_field(0, Spec_240, 4) = ((MR_Box) (Pieces_239));
            }
            {
              Var_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_266, 0) = ((MR_Box) (Spec_240));
              MR_hl_field(1, Var_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_266));
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word LangTerm_7,
  MR_Word * MaybeForeignLang_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LangTerm_7)) == (MR_Integer) 0);
  MR_Word ForeignLang_9;
  MR_String String_74;
  MR_Word Var_83;

  if (succeeded)
  {
    Var_83 = ((MR_Word) ((MR_hl_field(0, LangTerm_7, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_83)) == (MR_Integer) 0))
    {
      String_74 = ((MR_String) ((MR_hl_field(0, Var_83, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2))
    {
      String_74 = ((MR_String) ((MR_hl_field(2, Var_83, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      succeeded = libs__globals__convert_foreign_language_2_p_0(String_74, &ForeignLang_9);
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeForeignLang_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignLang_9));
    }
  else
  {
    MR_String LangTermStr_10;
    MR_Word MainPieces_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_56;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String String_84;
    MR_String Var_91;
    MR_Word Var_94;

    LangTermStr_10 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, LangTerm_7);
    Var_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_23 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[329])));
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (LangTermStr_10));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_35);
    Var_56 = libs__globals__all_foreign_language_strings_0_f_0();
    Var_49 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])), Var_56);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[332])), Var_48);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_41);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_33);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_28);
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[294])), Var_22);
    MainPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_15);
    succeeded = ((MR_tag((MR_Word) LangTerm_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_94 = ((MR_Word) ((MR_hl_field(0, LangTerm_7, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_94)) == (MR_Integer) 0))
      {
        String_84 = ((MR_String) ((MR_hl_field(0, Var_94, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Var_94)) == (MR_Integer) 2))
      {
        String_84 = ((MR_String) ((MR_hl_field(2, Var_94, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        Var_91 = mercury__string__to_lower_1_f_0(String_84);
        succeeded = (strcmp(Var_91, (MR_String) "erlang") == 0);
      }
    }
    if (succeeded)
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_11, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[334])));
    else
      Pieces_12 = MainPieces_11;
    Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LangTerm_7);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_language\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_69));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeForeignLang_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_language_type_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word Term_6,
  MR_Word VarSet_7,
  MR_Word * MaybeForeignTypeName_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
  MR_String ForeignTypeName_9;
  MR_Word Var_14;
  MR_Word Var_15;

  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(0, Term_6, (MR_Integer) 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
      if (succeeded)
      {
        ForeignTypeName_9 = ((MR_String) ((MR_hl_field(2, Var_14, (MR_Integer) 0))));
        succeeded = (strcmp(ForeignTypeName_9, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeForeignTypeName_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignTypeName_9));
    }
  else
  {
    MR_String TermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_49;
    MR_Word Var_50;

    TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_6);
    Var_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
    Var_25 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[171])));
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (TermStr_11));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
    }
    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_35);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_30);
    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_24);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_17);
    Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_language_type\'/4"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_49));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeForeignTypeName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
    }
  }
}

void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_type_assertions_7_p_0(
  MR_Word ContextPieces_8,
  MR_Word VarSet_9,
  MR_Word Term_10,
  MR_Word STATE_VARIABLE_Assertions_0_22,
  MR_Word * STATE_VARIABLE_Assertions_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_28;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_27 = ((MR_String) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
          succeeded = (strcmp(Var_27, (MR_String) "[]") == 0);
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_Assertions_23 = STATE_VARIABLE_Assertions_0_22;
    }
    else
    {
      MR_Word HeadTerm_14;
      MR_Word TailTerm_15;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      succeeded = ((MR_tag((MR_Word) Term_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(0, Term_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
                Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Specs_66_66;
        MR_Word STATE_VARIABLE_Assertions_67_67;
        MR_Word HeadAssertion_17;
        MR_Word next_value_of_Term_10;
        MR_Word next_value_of_STATE_VARIABLE_Assertions_0_22;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

        succeeded = parse_tree__parse_pragma_foreign__parse_foreign_type_assertion_2_p_0(HeadTerm_14, &HeadAssertion_17);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Assertions_34_34;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), ((MR_Box) (HeadAssertion_17)), STATE_VARIABLE_Assertions_0_22, &STATE_VARIABLE_Assertions_34_34);
          if (succeeded)
          {
            STATE_VARIABLE_Assertions_67_67 = STATE_VARIABLE_Assertions_34_34;
            STATE_VARIABLE_Specs_66_66 = STATE_VARIABLE_Specs_0_24;
          }
          else
          {
            MR_String HeadTermStr_18;
            MR_Word Pieces_19;
            MR_Word Spec_20;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_48;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_65;

            HeadTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, HeadTerm_14);
            Var_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
            {
              Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_46, 1) = ((MR_Box) (HeadTermStr_18));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_44 = parse_tree__error_spec__color_as_subject_1_f_0(Var_45);
            Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[37])));
            Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
            Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[35])), Var_53);
            Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_48);
            Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[33])), Var_43);
            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_36);
            Var_65 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_14);
            {
              Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
              MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Var_65));
              MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
            }
            {
              STATE_VARIABLE_Specs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_66_66, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(1, STATE_VARIABLE_Specs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            STATE_VARIABLE_Assertions_67_67 = STATE_VARIABLE_Assertions_0_22;
          }
        }
        else
        {
          MR_String TermStr_21;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_82;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_101;
          MR_Word Pieces_140;
          MR_Word Spec_141;

          TermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_10);
          Var_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[42])));
          {
            Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_90, 1) = ((MR_Box) (TermStr_21));
          }
          {
            Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
            MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          }
          Var_88 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_89);
          Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_87);
          Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_76);
          Pieces_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_69);
          Var_101 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_14);
          {
            Spec_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_141, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
            MR_hl_field(0, Spec_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_141, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_141, 3) = ((MR_Box) (Var_101));
            MR_hl_field(0, Spec_141, 4) = ((MR_Box) (Pieces_140));
          }
          {
            STATE_VARIABLE_Specs_66_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_66_66, 0) = ((MR_Box) (Spec_141));
            MR_hl_field(1, STATE_VARIABLE_Specs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
          STATE_VARIABLE_Assertions_67_67 = STATE_VARIABLE_Assertions_0_22;
        }
        // direct tailcall eliminated
        ;
        next_value_of_Term_10 = TailTerm_15;
        next_value_of_STATE_VARIABLE_Assertions_0_22 = STATE_VARIABLE_Assertions_67_67;
        next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_66_66;
        Term_10 = next_value_of_Term_10;
        STATE_VARIABLE_Assertions_0_22 = next_value_of_STATE_VARIABLE_Assertions_0_22;
        STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
        continue;
      }
      else
      {
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_119;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_138;
        MR_Word Pieces_142;
        MR_Word Spec_143;
        MR_String TermStr_144;

        TermStr_144 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_10);
        Var_105 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
        Var_114 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[48])));
        {
          Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_127, 1) = ((MR_Box) (TermStr_144));
        }
        {
          Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(1, Var_126, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
        }
        Var_125 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_126);
        Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[19])));
        Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[44])), Var_124);
        Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_119);
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_pragma_foreign_scalar_common_1[40])), Var_113);
        Pieces_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_106);
        Var_138 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
        {
          Spec_143 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_143, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
          MR_hl_field(0, Spec_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_143, 2) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(0, Spec_143, 3) = ((MR_Box) (Var_138));
          MR_hl_field(0, Spec_143, 4) = ((MR_Box) (Pieces_142));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_25 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_143));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
        }
        *STATE_VARIABLE_Assertions_23 = STATE_VARIABLE_Assertions_0_22;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_type_assertion_2_p_0(
  MR_Word Term_3,
  MR_Word * Assertion_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Constant_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Constant_5 = ((MR_String) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(Constant_5, (MR_String) "stable") == 0))
        {
          *Assertion_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Constant_5, (MR_String) "word_aligned_pointer") == 0))
        {
          *Assertion_4 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(Constant_5, (MR_String) "can_pass_as_mercury_type") == 0))
        {
          *Assertion_4 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_pragma_foreign____Unify____collected_export_enum_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_pragma_foreign____Compare____collected_export_enum_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_pragma_foreign____Unify____collected_pragma_foreign_proc_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_pragma_foreign____Compare____collected_pragma_foreign_proc_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_pragma_foreign__init(void)
{
}

void mercury__parse_tree__parse_pragma_foreign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0);
	MR_register_type_ctor_info(&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0);
}

void mercury__parse_tree__parse_pragma_foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_pragma_foreign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_pragma_foreign.
