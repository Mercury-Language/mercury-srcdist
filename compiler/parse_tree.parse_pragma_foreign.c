/*
** Automatically generated from `parse_pragma_foreign.m'
** by the Mercury compiler,
** version rotd-2022-08-27
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
#include "bimap.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_defn.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"



struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s {
  MR_bool parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14;
  jmp_buf parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__commit_0;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_204_204;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Var_183;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_201;
  MR_Word parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_202;
  MR_Box parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

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
parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1345__1_1_p_0(
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
parse_tree__parse_pragma_foreign__parse_export_enum_attr_4_p_0(
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * MaybeAttribute_8);

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_3_p_0(
  MR_Word VarSet_4,
  MR_Word PairTerm_5,
  MR_Word * MaybePair_6);

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
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0(
  MR_Word ForeignLanguage_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeAttributes_10);

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_attributes_list_5_p_0(
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
parse_tree__parse_pragma_foreign__parse_foreign_language_type_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word InputTerm_7,
  MR_Word VarSet_8,
  MR_Word MaybeLanguage_9,
  MR_Word * MaybeForeignLangType_10);

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


static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_1[296][2];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_3[10][1];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_8[3][6];

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_9[1][7];

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



static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_1[296][2] = {
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have three or four arguments."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the first argument of"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the second argument of"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[18])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the third argument of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[18])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the fourth argument of"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[18])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign type assertion"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is repeated."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a foreign type assertion,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a list of foreign type assertions,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the foreign language declaration itself)."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(a language specification and"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration requires at least two arguments"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_decl"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "second"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected either a string containing code,"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or a term of the form"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "include_file(...)"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "naming a file to include,"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the second argument"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must be either"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "local"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "exported"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "third"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a local/exported indication, and"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[37])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(a language specification,"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration may have at most three arguments"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have exactly two arguments."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a string containing foreign code,"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have four arguments."))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have exactly three arguments."))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[90])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[95])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have two, three or four arguments."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[86])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the same module."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a type that is defined"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_pragma_foreign_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mapping constructor name:"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[118]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to foreign values must not be empty."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the list mapping constructors"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[124])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration must have two arguments."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_import_module"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[17])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected module name, got"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: foreign type descriptor for language"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be a non-empty string."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a string"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specifying the foreign type descriptor,"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[83])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[83])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a string containing foreign code, got"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable in pragma foreign_proc."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "_"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "anonymous"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented: "))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument:"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Var :: mode"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not in the form"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument is"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[167])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[170])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[168])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[166])))
  },
  /* row 174 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[173])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[171])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[177])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[174])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[175])))
  },
  /* row 181 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[180])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[178])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[176])))
  },
  /* row 183 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[182])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[185]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[184])))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[186])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[183])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[184])))
  },
  /* row 190 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[189])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[187])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[185])))
  },
  /* row 192 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[191])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[190])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[193])))
  },
  /* row 196 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[195])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[192])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[197])))
  },
  /* row 200 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[199])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[196])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[202])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[200])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[204])))
  },
  /* row 207 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[206])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[203])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[208])))
  },
  /* row 211 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[210])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[207])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[212])))
  },
  /* row 214 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[213])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[211])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[208])))
  },
  /* row 216 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[215])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[217])))
  },
  /* row 220 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[219])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[216])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[218])))
  },
  /* row 223 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[222])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[220])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[217])))
  },
  /* row 225 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[224])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[223])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[227]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[226])))
  },
  /* row 229 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[228])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[225])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[226])))
  },
  /* row 232 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[231])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[229])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[227])))
  },
  /* row 234 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[233])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[232])))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[226])))
  },
  /* row 237 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[236])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[234])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[227])))
  },
  /* row 239 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[238])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[237])))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[230])))
  },
  /* row 241 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[240])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[239])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_pragma_foreign_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_pragma_foreign_scalar_common_3[6])))
  },
  /* row 243 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[242])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[241])))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[6])))
  },
  /* row 245 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_1[244])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[243])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes in attribute list."))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 248 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[247])))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "element of the attribute list,"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a valid foreign_proc attribute."))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[250]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[252]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[251])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected an attribute list, got"))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got an empty string."))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[255]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "foreign language name of the exported procedure,"))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[256])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a non-empty string for the"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[259]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[258])))
  },
  /* row 261 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[260])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a non-empty string for the foreign"))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "language name of the exported procedure, got"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a possibly qualified name,"))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a mapping element"))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the form"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "possibly_qualified_name - string"))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not occur more than once."))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the prefix attribute"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[269])))
  },
  /* row 272 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[271])))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected a list of attributes,"))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected one of"))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "prefix(<foreign_name>)"))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "uppercase"))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "other than the name of the current module."))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[278]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be qualified with any module name"))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[280]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[279])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma"))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[282]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[281])))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[283])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a function symbol name in a"))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[284])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected the name of a foreign language, got"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The valid languages are"))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[288]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 290 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[289])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[290])))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Support for Erlang has been discontinued."))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[292]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[9])))
  },
  /* row 294 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 295 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "type_name/type_arity"))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_2[7][3] = {
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
    ((MR_Box) (parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_5)),
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
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_8[2])),
    ((MR_Box) (parse_tree__parse_pragma_foreign__parse_pragma_foreign_export_enum_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_3[10][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[6])))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_8[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0))
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_pragma_foreign_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0))
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
    ((MR_Box) (&parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_pragma_foreign__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_pragma_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_pragma_foreign__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_export_enum_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_0[1] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_export_enum_attribute_0_1[1] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_export_enum_attribute_0_1
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_thread_safe_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_user_annotated_sharing_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_5[1] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_backend_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_6[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_terminates_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_9[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_modify_trail_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_10[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mm_tabled_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_11[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_12[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_affects_liveness_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_13[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_allocates_memory_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_14[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_registers_roots_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_15[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_duplicate_0)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__field_types_collected_pragma_foreign_proc_attribute_0_16[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_export_body_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_1[1] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_stag_ordered_collected_pragma_foreign_proc_attribute_0_2[1] = {
  &parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__du_functor_desc_collected_pragma_foreign_proc_attribute_0_1
};

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
parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1345__1_1_p_0(
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
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer Var_62;
              MR_Integer Var_63;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgY1_10;
              MR_Integer Var_80;
              MR_Integer Var_81;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_12;
                  MR_Integer Var_76;
                  MR_Integer Var_77;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_14;
                  MR_Integer Var_72;
                  MR_Integer Var_73;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_16;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data_pragma____Compare____user_annotated_sharing_0_0(&CompareResult_6, ArgX1_15, ArgY1_16);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_18;
                  MR_Integer Var_58;
                  MR_Integer Var_59;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_20;
                  MR_Integer Var_78;
                  MR_Integer Var_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_22;
                  MR_Integer Var_70;
                  MR_Integer Var_71;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_24;
                  MR_Integer Var_64;
                  MR_Integer Var_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_26;
                  MR_Integer Var_60;
                  MR_Integer Var_61;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_28;
                  MR_Integer Var_54;
                  MR_Integer Var_55;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_30;
                  MR_Integer Var_56;
                  MR_Integer Var_57;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_32;
                  MR_Integer Var_74;
                  MR_Integer Var_75;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
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
                  MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_34;
                  MR_Integer Var_66;
                  MR_Integer Var_67;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_36;
                  MR_Integer Var_68;
                  MR_Integer Var_69;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
  MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_37 == CastY_38);
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
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_7 == ArgY1_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data_pragma____Unify____user_annotated_sharing_0_0(ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_21 == ArgY1_22);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_25 == ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_27 == ArgY1_28);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_29 == ArgY1_30);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_31 == ArgY1_32);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_33 == ArgY1_34);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_35 == ArgY1_36);
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_18 = (MR_Integer) (Var_17);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
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
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  if (succeeded)
  {
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairTerm_9, (MR_Integer) 0))));
    ArgTerms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairTerm_9, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
      succeeded = (strcmp(Var_28, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SymNameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 0))));
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_11, (MR_Integer) 1))));
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StringTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
            succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) StringTerm_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StringTerm_14, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
                if (succeeded)
                  String_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_31, (MR_Integer) 0))));
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
      MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymName_18, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SymName_19)) == (MR_Integer) 1))
      {
        MR_Word SymNameModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_19, (MR_Integer) 0))));

        succeeded = mdbcomp__sym_name__partial_sym_name_is_part_of_full_2_p_0(SymNameModuleName_20, ModuleName_7);
        if (succeeded)
        {
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SymName_19));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (String_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybePair_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
          }
        }
        else
        {
          MR_Word Spec_23;
          MR_Word Var_53;
          MR_Word Var_54;

          Var_53 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_13);
          {
            Spec_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_cur_module_sym_name_string_pair\'/5"));
            MR_hl_field(MR_mktag(1), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_23, 3) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Spec_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[286])));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybePair_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
          }
        }
      }
      else
      {
        MR_Word Var_56;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (String_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePair_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
        }
      }
    }
  }
  else
  {
    MR_String PairTermStr_26;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Pieces_85;
    MR_Word Spec_86;

    PairTermStr_26 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, PairTerm_9);
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (PairTermStr_26));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[252])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[267])));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[266])));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
    }
    {
      Pieces_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[265])));
      MR_hl_field(MR_mktag(1), Pieces_85, 1) = ((MR_Box) (Var_59));
    }
    Var_82 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PairTerm_9);
    {
      Spec_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_86, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_cur_module_sym_name_string_pair\'/5"));
      MR_hl_field(MR_mktag(1), Spec_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_86, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_86, 3) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Spec_86, 4) = ((MR_Box) (Pieces_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Spec_86));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePair_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_83));
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
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
    Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) "prefix") == 0);
      if (succeeded)
      {
        succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ForeignNameTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
          succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) ForeignNameTerm_11)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignNameTerm_11, (MR_Integer) 0))));
              Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignNameTerm_11, (MR_Integer) 1))));
              succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
                if (succeeded)
                  Prefix_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_21, (MR_Integer) 0))));
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
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Prefix_12));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Var_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAttribute_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
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
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
          succeeded = (strcmp(Var_26, (MR_String) "uppercase") == 0);
        }
      }
    }
    if (succeeded)
      *MaybeAttribute_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[9]));
    else
    {
      MR_String TermStr_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_61;
      MR_Word Var_62;

      TermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, Term_7);
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (TermStr_15));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[252])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[277])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[276])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[275])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[274])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
      }
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5, Var_30);
      Var_61 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attr\'/4"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeAttribute_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__process_export_enum_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3)
{
  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Attributes_0_2, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word MaybePrefix_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attributes_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybePrefix_4));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_17));
    }
  }
  else
  {
    MR_Word MakeUpperCase_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Attributes_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (MakeUpperCase_11));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_3_p_0(
  MR_Word VarSet_4,
  MR_Word PairTerm_5,
  MR_Word * MaybePair_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) PairTerm_5)) == (MR_Integer) 0);
  MR_Word SymNameTerm_9;
  MR_String String_11;
  MR_Word ArgTerms_7;
  MR_Word StringTerm_10;
  MR_Word Var_19;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairTerm_5, (MR_Integer) 0))));
    ArgTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PairTerm_5, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      succeeded = (strcmp(Var_20, (MR_String) "-") == 0);
      if (succeeded)
      {
        succeeded = (ArgTerms_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SymNameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 0))));
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_7, (MR_Integer) 1))));
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            StringTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) StringTerm_10)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StringTerm_10, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 2);
                if (succeeded)
                  String_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_23, (MR_Integer) 0))));
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word SymName_14;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_9, &SymName_14);
    if (succeeded)
    {
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (SymName_14));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (String_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePair_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
      }
    }
    else
    {
      MR_String SymNameTermStr_15;
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_41;
      MR_Word Var_42;

      SymNameTermStr_15 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, SymNameTerm_9);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (SymNameTermStr_15));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      {
        Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[264])));
        MR_hl_field(MR_mktag(1), Pieces_16, 1) = ((MR_Box) (Var_27));
      }
      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SymNameTerm_9);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_sym_name_string_pair\'/3"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePair_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      }
    }
  }
  else
  {
    MR_String PairTermStr_18;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Pieces_72;
    MR_Word Spec_73;

    PairTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, PairTerm_5);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PairTermStr_18));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[252])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[267])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[266])));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[265])));
      MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_46));
    }
    Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), PairTerm_5);
    {
      Spec_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_sym_name_string_pair\'/3"));
      MR_hl_field(MR_mktag(1), Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_73, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Spec_73, 4) = ((MR_Box) (Pieces_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_73));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePair_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
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
        MR_Word MayCallMercury_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0(MayCallMercury_4, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ThreadSafe_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

        parse_tree__prog_data_foreign__set_thread_safe_3_p_0(ThreadSafe_9, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TabledForIO_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_tabled_for_io_3_p_0(TabledForIO_14, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pure_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_purity_3_p_0(Pure_19, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UserSharing_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

            parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_29, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Backend_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = (MR_Box) ((MR_Unsigned) (Backend_39));
            }
            parse_tree__prog_data_foreign__add_extra_attribute_3_p_0(Var_43, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Terminates_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_terminates_3_p_0(Terminates_24, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailMod_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

            parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0(TrailMod_50, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word MayCallTabled_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0(MayCallTabled_55, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word BoxPolicy_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

            parse_tree__prog_data_foreign__set_box_policy_3_p_0(BoxPolicy_60, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AffectsLiveness_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_affects_liveness_3_p_0(AffectsLiveness_65, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word AllocatesMemory_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_allocates_memory_3_p_0(AllocatesMemory_70, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word RegistersRoots_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

            parse_tree__prog_data_foreign__set_registers_roots_3_p_0(RegistersRoots_75, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word MayDuplicate_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_84;

            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MayDuplicate_80));
            }
            parse_tree__prog_data_foreign__set_may_duplicate_3_p_0(Var_84, STATE_VARIABLE_Attrs_0_2, STATE_VARIABLE_Attrs_3);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MayExport_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_90;

            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MayExport_86));
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
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_2, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0))
    {
      String_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2))
    {
      String_3 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_13, (MR_Integer) 0))));
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
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_14)) == (MR_Integer) 0))
    {
      String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2))
    {
      String_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0))));
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
    MR_Word Spec_32;
    MR_Word Var_94;
    MR_Word Var_95;

    Var_94 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
      MR_hl_field(MR_mktag(1), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_32, 3) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Spec_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[135])));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Spec_32));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_95));
    }
  }
  else
  {
    MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_131 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_105;
      MR_Word Var_109;
      MR_Word Var_110;

      Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_105, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
        MR_hl_field(MR_mktag(1), Spec_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_105, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_105, 3) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Spec_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[135])));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Spec_105));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_110));
      }
    }
    else
    {
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 1))));
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_131, (MR_Integer) 0))));

      if ((Var_133 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LangContextPieces_15;
        MR_Word MaybeForeignLang_16;
        MR_Word MaybeModuleName_18;
        MR_Word ModuleName0_17;
        MR_Word Language_22;
        MR_Word ModuleName_23;

        LangContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[137])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_15, VarSet_7, Var_132, &MaybeForeignLang_16);
        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_134, &ModuleName0_17);
        if (succeeded)
          {
            MaybeModuleName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModuleName_18, 0) = ((MR_Box) (ModuleName0_17));
          }
        else
        {
          MR_String ModuleNameTermStr_19;
          MR_Word ModuleNamePieces_20;
          MR_Word ModuleNameSpec_21;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_71;
          MR_Word Var_72;

          ModuleNameTermStr_19 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_134);
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (ModuleNameTermStr_19));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[138])));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[133])));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
          }
          {
            ModuleNamePieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModuleNamePieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), ModuleNamePieces_20, 1) = ((MR_Box) (Var_49));
          }
          Var_71 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_134);
          {
            ModuleNameSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ModuleNameSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
            MR_hl_field(MR_mktag(1), ModuleNameSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), ModuleNameSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), ModuleNameSpec_21, 3) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), ModuleNameSpec_21, 4) = ((MR_Box) (ModuleNamePieces_20));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ModuleNameSpec_21));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeModuleName_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeModuleName_18, 0) = ((MR_Box) (Var_72));
          }
        }
        succeeded = ((MR_tag((MR_Word) MaybeForeignLang_16)) == (MR_Integer) 1);
        if (succeeded)
        {
          Language_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLang_16, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeModuleName_18)) == (MR_Integer) 1);
          if (succeeded)
            ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FIM_24;
          MR_Word Var_74;

          {
            FIM_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FIM_24, 0) = (MR_Box) ((MR_Unsigned) (Language_22));
            MR_hl_field(MR_mktag(0), FIM_24, 1) = ((MR_Box) (ModuleName_23));
            MR_hl_field(MR_mktag(0), FIM_24, 2) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), FIM_24, 3) = ((MR_Box) (SeqNum_11));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (FIM_24));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_74));
          }
        }
        else
        {
          MR_Word Specs_25;
          MR_Word Var_75;
          MR_Word Var_76;

          Var_75 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_16);
          Var_76 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MaybeModuleName_18);
          Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_75, Var_76);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_25));
          }
        }
      }
      else
      {
        MR_Word Spec_114;
        MR_Word Var_118;
        MR_Word Var_119;

        Var_118 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_import_module\'/6"));
          MR_hl_field(MR_mktag(1), Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_114, 3) = ((MR_Box) (Var_118));
          MR_hl_field(MR_mktag(1), Spec_114, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[135])));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Spec_114));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_119));
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

  parse_tree__parse_pragma_foreign__parse_cur_module_sym_name_string_pair_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybePair_10);
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
    MR_Word Spec_55;
    MR_Word Var_172;
    MR_Word Var_173;

    Var_172 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
      MR_hl_field(MR_mktag(1), Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_55, 3) = ((MR_Box) (Var_172));
      MR_hl_field(MR_mktag(1), Spec_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[105])));
    }
    {
      Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Spec_55));
      MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_173));
    }
  }
  else
  {
    MR_Word Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_223 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_188;
      MR_Word Var_192;
      MR_Word Var_193;

      Var_192 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_188, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
        MR_hl_field(MR_mktag(1), Spec_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_188, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_188, 3) = ((MR_Box) (Var_192));
        MR_hl_field(MR_mktag(1), Spec_188, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[105])));
      }
      {
        Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Spec_188));
        MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_193));
      }
    }
    else
    {
      MR_Word Var_225 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 1))));
      MR_Word Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_223, (MR_Integer) 0))));

      if ((Var_225 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_197;
        MR_Word Var_201;
        MR_Word Var_202;

        Var_201 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_197, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
          MR_hl_field(MR_mktag(1), Spec_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_197, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_197, 3) = ((MR_Box) (Var_201));
          MR_hl_field(MR_mktag(1), Spec_197, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[105])));
        }
        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Spec_197));
          MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_202));
        }
      }
      else
      {
        MR_Word Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_225, (MR_Integer) 1))));
        MR_Word Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_225, (MR_Integer) 0))));

        if ((Var_227 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LangContextPieces_18;
          MR_Word MaybeForeignLang_19;
          MR_Word TypeContextPieces_20;
          MR_Word MaybeTypeCtor0_21;
          MR_Word MaybeTypeCtor_27;
          MR_Word PairContextPieces_31;
          MR_Word MaybeValues_32;
          MR_Word MaybeOoMValues_36;
          MR_Word Var_120;
          MR_Word ForeignLang_40;
          MR_Word TypeCtor_41;
          MR_Word OoMValues_42;

          LangContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[107])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_18, VarSet_9, Var_224, &MaybeForeignLang_19);
          TypeContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[108])));
          parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(TypeContextPieces_20, VarSet_9, Var_226, &MaybeTypeCtor0_21);
          if (((MR_tag((MR_Word) MaybeTypeCtor0_21)) == (MR_Integer) 0))
            MaybeTypeCtor_27 = MaybeTypeCtor0_21;
          else
          {
            MR_Word TypeCtor0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtor0_21, (MR_Integer) 0))));
            MR_Word SymName0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_22, (MR_Integer) 0))));
            MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_22, (MR_Integer) 1))));
            MR_Word SymName_25;

            succeeded = parse_tree__parse_sym_name__try_to_implicitly_qualify_sym_name_3_p_0(ModuleName_8, SymName0_23, &SymName_25);
            if (succeeded)
            {
              MR_Word TypeCtor1_26;

              {
                TypeCtor1_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeCtor1_26, 0) = ((MR_Box) (SymName_25));
                MR_hl_field(MR_mktag(0), TypeCtor1_26, 1) = ((MR_Box) (Arity_24));
              }
              {
                MaybeTypeCtor_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTypeCtor_27, 0) = ((MR_Box) (TypeCtor1_26));
              }
            }
            else
            {
              MR_Word SymNameSpec_29;
              MR_Word Var_106;
              MR_Word Var_107;

              Var_106 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_228);
              {
                SymNameSpec_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymNameSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
                MR_hl_field(MR_mktag(1), SymNameSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), SymNameSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), SymNameSpec_29, 3) = ((MR_Box) (Var_106));
                MR_hl_field(MR_mktag(1), SymNameSpec_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[117])));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (SymNameSpec_29));
                MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeTypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeTypeCtor_27, 0) = ((MR_Box) (Var_107));
              }
            }
          }
          PairContextPieces_31 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[122])));
          {
            Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (parse_tree__parse_pragma_foreign__parse_pragma_foreign_enum_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (PairContextPieces_31));
            MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (ModuleName_8));
          }
          parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]), (MR_String) "mapping elements", Var_120, VarSet_9, Var_228, &MaybeValues_32);
          if (((MR_tag((MR_Word) MaybeValues_32)) == (MR_Integer) 0))
            MaybeOoMValues_36 = (MR_Word) (MaybeValues_32);
          else
          {
            MR_Word Values_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeValues_32, (MR_Integer) 0))));

            if ((Values_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word NoValuesSpec_35;
              MR_Word Var_143;
              MR_Word Var_144;

              Var_143 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_228);
              {
                NoValuesSpec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NoValuesSpec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
                MR_hl_field(MR_mktag(1), NoValuesSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), NoValuesSpec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), NoValuesSpec_35, 3) = ((MR_Box) (Var_143));
                MR_hl_field(MR_mktag(1), NoValuesSpec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[130])));
              }
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (NoValuesSpec_35));
                MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MaybeOoMValues_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), MaybeOoMValues_36, 0) = ((MR_Box) (Var_144));
              }
            }
            else
            {
              MR_Word HeadValue_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Values_33, (MR_Integer) 0))));
              MR_Word TailValues_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Values_33, (MR_Integer) 1))));
              MR_Word Var_146;

              {
                Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (HeadValue_37));
                MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) (TailValues_38));
              }
              {
                MaybeOoMValues_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeOoMValues_36, 0) = ((MR_Box) (Var_146));
              }
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            ForeignLang_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLang_19, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_27)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtor_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtor_27, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeOoMValues_36)) == (MR_Integer) 1);
              if (succeeded)
                OoMValues_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOoMValues_36, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word ItemForeignEnumInfo_43;
            MR_Word Item_44;
            MR_Word Var_147;

            {
              ItemForeignEnumInfo_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_43, 0) = (MR_Box) ((MR_Unsigned) (ForeignLang_40));
              MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_43, 1) = ((MR_Box) (TypeCtor_41));
              MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_43, 2) = ((MR_Box) (OoMValues_42));
              MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_43, 3) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), ItemForeignEnumInfo_43, 4) = ((MR_Box) (SeqNum_13));
            }
            {
              Item_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Item_44, 1) = ((MR_Box) (ItemForeignEnumInfo_43));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Item_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_147));
            }
          }
          else
          {
            MR_Word Specs_45;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;

            Var_148 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_19);
            Var_150 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_27);
            Var_151 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[4]), MaybeOoMValues_36);
            Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_150, Var_151);
            Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_148, Var_149);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_45));
            }
          }
        }
        else
        {
          MR_Word Spec_206;
          MR_Word Var_210;
          MR_Word Var_211;

          Var_210 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_enum\'/7"));
            MR_hl_field(MR_mktag(1), Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_206, 3) = ((MR_Box) (Var_210));
            MR_hl_field(MR_mktag(1), Spec_206, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[105])));
          }
          {
            Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Spec_206));
            MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_211));
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
  MR_Word conv0_MaybePair_6;

  parse_tree__parse_pragma_foreign__parse_sym_name_string_pair_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybePair_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybePair_6));
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
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;

  if (succeeded)
  {
    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));
    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    succeeded = (Var_111 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 0))));
      Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_111, (MR_Integer) 1))));
      if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        LangTerm_13 = Var_112;
        MercuryTypeTerm_14 = Var_114;
        MaybeAttributesTerm_15 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeOverridesTerm_16 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 1))));
        MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_113, (MR_Integer) 0))));

        if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          LangTerm_13 = Var_112;
          MercuryTypeTerm_14 = Var_114;
          {
            MaybeAttributesTerm_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAttributesTerm_15, 0) = ((MR_Box) (Var_116));
          }
          MaybeOverridesTerm_16 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word OverridesTerm_18;
          MR_Word Var_43;

          LangTerm_13 = Var_112;
          MercuryTypeTerm_14 = Var_114;
          OverridesTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 1))));
          succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            {
              MaybeAttributesTerm_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeAttributesTerm_15, 0) = ((MR_Box) (Var_116));
            }
            {
              MaybeOverridesTerm_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOverridesTerm_16, 0) = ((MR_Box) (OverridesTerm_18));
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
    MR_Word MaybeOverrides_25;
    MR_Word ForeignLang_26;
    MR_Word TypeCtor_27;
    MR_Word Attributes_28;
    MR_Word Overrides_29;

    LangContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[96])));
    parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_19, VarSet_7, LangTerm_13, &MaybeForeignLang_20);
    TypeContextPieces_21 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[97])));
    parse_tree__parse_pragma_foreign__parse_type_ctor_name_arity_4_p_0(TypeContextPieces_21, VarSet_7, MercuryTypeTerm_14, &MaybeTypeCtor_22);
    parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[98])), VarSet_7, MaybeAttributesTerm_15, &MaybeAttributes_24);
    if ((MaybeOverridesTerm_16 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeOverrides_25 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[8]));
    else
    {
      MR_Word OverridesTerm_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOverridesTerm_16, (MR_Integer) 0))));

      parse_tree__parse_util__parse_list_elements_5_p_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[0]), (MR_String) "a list of mapping elements", (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[6]), VarSet_7, OverridesTerm_118, &MaybeOverrides_25);
    }
    succeeded = ((MR_tag((MR_Word) MaybeForeignLang_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      ForeignLang_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLang_20, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeTypeCtor_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeCtor_22, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeAttributes_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          Attributes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_24, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeOverrides_25)) == (MR_Integer) 1);
          if (succeeded)
            Overrides_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOverrides_25, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ItemForeignExportEnum_30;
      MR_Word Item_31;
      MR_Word Var_79;

      {
        ItemForeignExportEnum_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 0) = (MR_Box) ((MR_Unsigned) (ForeignLang_26));
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 1) = ((MR_Box) (TypeCtor_27));
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 2) = ((MR_Box) (Attributes_28));
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 3) = ((MR_Box) (Overrides_29));
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 4) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), ItemForeignExportEnum_30, 5) = ((MR_Box) (SeqNum_11));
      }
      {
        Item_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Item_31, 1) = ((MR_Box) (ItemForeignExportEnum_30));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Item_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
      }
    }
    else
    {
      MR_Word Specs_32;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;

      Var_80 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_20);
      Var_82 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MaybeTypeCtor_22);
      Var_84 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0), MaybeAttributes_24);
      Var_85 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[3]), MaybeOverrides_25);
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_84, Var_85);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_82, Var_83);
      Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_80, Var_81);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_32));
      }
    }
  }
  else
  {
    MR_Word Spec_34;
    MR_Word Var_100;
    MR_Word Var_101;

    Var_100 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export_enum\'/6"));
      MR_hl_field(MR_mktag(1), Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_34, 3) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(1), Spec_34, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[102])));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Spec_34));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_101));
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
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTypeCtor_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
    }
  }
  else
  {
    MR_String TypeTermStr_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_41;
    MR_Word Var_42;

    TypeTermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, TypeTerm_7);
    Var_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TypeTermStr_11));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[252])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[295])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[294])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
    Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TypeTerm_7);
    {
      Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_type_ctor_name_arity\'/4"));
      MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTypeCtor_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
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

  succeeded = parse_tree__parse_pragma_foreign__IntroducedFrom__pred__parse_export_enum_attributes__1345__1_1_p_0(((MR_Word) (wrapper_arg_1)));
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

  parse_tree__parse_pragma_foreign__parse_export_enum_attr_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeAttribute_8);
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
    }
  }
  else
  {
    MR_Word AttributesTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
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
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__parse_pragma_foreign_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__parse_pragma_foreign__maybe_parse_export_enum_attributes_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ContextPieces_1));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (VarSet_2));
      }
      parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), Var_22, AttributesTerms_13, &MaybeAttrList_14);
      if (((MR_tag((MR_Word) MaybeAttrList_14)) == (MR_Integer) 0))
        *HeadVar__4_4 = (MR_Word) (MaybeAttrList_14);
      else
      {
        MR_Word CollectedAttributes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttrList_14, (MR_Integer) 0))));
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attributes_18));
          }
        }
        else
        {
          MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PrefixAttributes_17, (MR_Integer) 1))));

          if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Attributes_54;
            MR_Box conv4_Attributes_54;

            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_export_enum_attribute_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_export_enum_attributes_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[5]), CollectedAttributes_15, ((MR_Box) (Attributes0_12)), &conv4_Attributes_54);
            Attributes_54 = ((MR_Word) (conv4_Attributes_54));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attributes_54));
            }
          }
          else
          {
            MR_Word Pieces_19;
            MR_Word Spec_20;
            MR_Word Var_28;
            MR_Word Var_29;

            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[272])));
            Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AttributesTerm_10);
            {
              Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attributes\'/4"));
              MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
            }
            {
              Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
            }
          }
        }
      }
    }
    else
    {
      MR_String AttributesStr_21;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Pieces_46;
      MR_Word Spec_47;

      AttributesStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_2, AttributesTerm_10);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (AttributesStr_21));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[273])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_1, Var_31);
      Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AttributesTerm_10);
      {
        Spec_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_47, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_export_enum_attributes\'/4"));
        MR_hl_field(MR_mktag(1), Spec_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_47, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_47, 3) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Spec_47, 4) = ((MR_Box) (Pieces_46));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_47));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
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
    MR_Word Spec_43;
    MR_Word Var_110;
    MR_Word Var_111;

    Var_110 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
      MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Spec_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[89])));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_43));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
    }
  }
  else
  {
    MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_159 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_124;
      MR_Word Var_128;
      MR_Word Var_129;

      Var_128 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
        MR_hl_field(MR_mktag(1), Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_124, 3) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(1), Spec_124, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[89])));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_124));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
      }
    }
    else
    {
      MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_159, (MR_Integer) 1))));
      MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_159, (MR_Integer) 0))));

      if ((Var_161 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_133;
        MR_Word Var_137;
        MR_Word Var_138;

        Var_137 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_133, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
          MR_hl_field(MR_mktag(1), Spec_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_133, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_133, 3) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(1), Spec_133, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[89])));
        }
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Spec_133));
          MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_138));
        }
      }
      else
      {
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 1))));
        MR_Word Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_161, (MR_Integer) 0))));

        if ((Var_163 == (MR_Word) ((MR_Unsigned) 0U)))
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

          LangContextPieces_16 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[91])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_16, VarSet_7, Var_160, &MaybeForeignLang_17);
          PredAndModesContextPieces_18 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[92])));
          parse_tree__parse_util__parse_pred_or_func_and_arg_modes_5_p_0((MR_Word) ((MR_Unsigned) 0U), PredAndModesContextPieces_18, VarSet_7, Var_162, &MaybePredAndModes_19);
          ForeignFunctionContextPieces_20 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[93])));
          parse_tree__parse_pragma_foreign__parse_foreign_function_name_4_p_0(VarSet_7, ForeignFunctionContextPieces_20, Var_164, &MaybeFunction_21);
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            ForeignLang_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLang_17, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybePredAndModes_19)) == (MR_Integer) 1);
            if (succeeded)
            {
              PredName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 0))));
              PredOrFunc_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 1))));
              Modes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndModes_19, (MR_Integer) 2))));
              succeeded = ((MR_tag((MR_Word) MaybeFunction_21)) == (MR_Integer) 1);
              if (succeeded)
                Function_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFunction_21, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word PredNameModesPF_27;
            MR_Word ProgVarSet_28;
            MR_Word FPEInfo_29;
            MR_Word Pragma_30;
            MR_Word ItemPragma_31;
            MR_Word Item_32;
            MR_Word Var_85;

            {
              PredNameModesPF_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
              MR_hl_field(MR_mktag(0), PredNameModesPF_27, 1) = ((MR_Box) (PredName_23));
              MR_hl_field(MR_mktag(0), PredNameModesPF_27, 2) = ((MR_Box) (Modes_25));
            }
            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, &ProgVarSet_28);
            {
              FPEInfo_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), FPEInfo_29, 1) = (MR_Box) ((MR_Unsigned) (ForeignLang_22));
              MR_hl_field(MR_mktag(0), FPEInfo_29, 2) = ((MR_Box) (PredNameModesPF_27));
              MR_hl_field(MR_mktag(0), FPEInfo_29, 3) = ((MR_Box) (Function_26));
              MR_hl_field(MR_mktag(0), FPEInfo_29, 4) = ((MR_Box) (ProgVarSet_28));
            }
            {
              Pragma_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Pragma_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Pragma_30, 1) = ((MR_Box) (FPEInfo_29));
            }
            {
              ItemPragma_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_31, 0) = ((MR_Box) (Pragma_30));
              MR_hl_field(MR_mktag(0), ItemPragma_31, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemPragma_31, 2) = ((MR_Box) (SeqNum_11));
            }
            {
              Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_32, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Item_32, 1) = ((MR_Box) (ItemPragma_31));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Item_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_85));
            }
          }
          else
          {
            MR_Word Specs_33;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;

            Var_86 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_17);
            Var_88 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[2]), MaybePredAndModes_19);
            Var_89 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeFunction_21);
            Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_88, Var_89);
            Specs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_86, Var_87);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_33));
            }
          }
        }
        else
        {
          MR_Word Spec_142;
          MR_Word Var_146;
          MR_Word Var_147;

          Var_146 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
          {
            Spec_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_142, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_export\'/6"));
            MR_hl_field(MR_mktag(1), Spec_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_142, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_142, 3) = ((MR_Box) (Var_146));
            MR_hl_field(MR_mktag(1), Spec_142, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[89])));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Spec_142));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_147));
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
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionTerm_7, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionTerm_7, (MR_Integer) 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
      if (succeeded)
        Function_9 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    succeeded = (strcmp(Function_9, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word EmptyNamePieces_11;
      MR_Word FunctionSpec_12;
      MR_Word Var_16;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_16 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
      EmptyNamePieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[261])));
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FunctionTerm_7);
      {
        FunctionSpec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FunctionSpec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_function_name\'/4"));
        MR_hl_field(MR_mktag(1), FunctionSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), FunctionSpec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), FunctionSpec_12, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), FunctionSpec_12, 4) = ((MR_Box) (EmptyNamePieces_11));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (FunctionSpec_12));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeFunction_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunction_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Function_9));
      }
  }
  else
  {
    MR_Word FunctionPieces_13;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_String Var_48;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word FunctionSpec_61;

    Var_37 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    Var_48 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_5, FunctionTerm_7);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[263])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[262])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
    }
    FunctionPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_38);
    Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), FunctionTerm_7);
    {
      FunctionSpec_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FunctionSpec_61, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_function_name\'/4"));
      MR_hl_field(MR_mktag(1), FunctionSpec_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), FunctionSpec_61, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), FunctionSpec_61, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), FunctionSpec_61, 4) = ((MR_Box) (FunctionPieces_13));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (FunctionSpec_61));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFunction_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
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
    MR_Word Spec_39;
    MR_Word Var_81;
    MR_Word Var_82;

    Var_81 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
    {
      Spec_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
      MR_hl_field(MR_mktag(1), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_39, 3) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), Spec_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[82])));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_82));
    }
  }
  else
  {
    MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 1))));
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_11, (MR_Integer) 0))));

    if ((Var_133 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_89;
      MR_Word Var_93;
      MR_Word Var_94;

      Var_93 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
      {
        Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
        MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_89, 3) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(1), Spec_89, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[82])));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Spec_89));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
      }
    }
    else
    {
      MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_133, (MR_Integer) 1))));
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_133, (MR_Integer) 0))));

      if ((Var_135 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_98;
        MR_Word Var_102;
        MR_Word Var_103;

        Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
        {
          Spec_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
          MR_hl_field(MR_mktag(1), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_98, 3) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Spec_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[82])));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_98));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 1))));
        MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));

        if ((Var_137 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Spec_107;
          MR_Word Var_111;
          MR_Word Var_112;

          Var_111 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
          {
            Spec_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
            MR_hl_field(MR_mktag(1), Spec_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_107, 3) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(1), Spec_107, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[82])));
          }
          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Spec_107));
            MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_112));
          }
        }
        else
        {
          MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 1))));
          MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_137, (MR_Integer) 0))));

          if ((Var_139 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word LangContextPieces_19;
            MR_Word MaybeForeignLanguage_20;
            MR_Word ForeignLanguage_21;
            MR_Word LangSpecs_22;
            MR_Word MaybeRestIOM_23;

            LangContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[84])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_19, VarSet_9, Var_134, &MaybeForeignLanguage_20);
            if (((MR_tag((MR_Word) MaybeForeignLanguage_20)) == (MR_Integer) 0))
            {
              LangSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeForeignLanguage_20, (MR_Integer) 0))));
              ForeignLanguage_21 = (MR_Integer) 0;
            }
            else
            {
              ForeignLanguage_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLanguage_20, (MR_Integer) 0))));
              LangSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
            }
            parse_tree__parse_pragma_foreign__parse_pragma_ordinary_foreign_proc_9_p_0(ModuleName_8, VarSet_9, ForeignLanguage_21, Var_136, Var_138, Var_140, Context_12, SeqNum_13, &MaybeRestIOM_23);
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
              Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), LangSpecs_22, Var_56);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_25));
              }
            }
          }
          else
          {
            MR_Word Spec_116;
            MR_Word Var_120;
            MR_Word Var_121;

            Var_120 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_10);
            {
              Spec_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_116, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc\'/7"));
              MR_hl_field(MR_mktag(1), Spec_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_116, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_116, 3) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(1), Spec_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[82])));
            }
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Spec_116));
              MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_121));
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
  MR_Word Var_66;
  MR_String Code_35;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word PredName_42;
  MR_Word PredOrFunc_43;
  MR_Word PragmaVars_44;
  MR_Word Flags_45;
  MR_Word Impl_46;

  PredAndVarsContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[144])));
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ModuleName_10));
  }
  parse_tree__parse_util__parse_pred_or_func_and_args_general_5_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_66, PredAndVarsTerm_13, VarSet_11, PredAndVarsContextPieces_19, &MaybePredAndArgs_20);
  if (((MR_tag((MR_Word) MaybePredAndArgs_20)) == (MR_Integer) 0))
    MaybeNamePFPragmaVars_29 = (MR_Word) (MaybePredAndArgs_20);
  else
  {
    MR_Word PredName0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndArgs_20, (MR_Integer) 0))));
    MR_Word NonFuncArgTerms_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndArgs_20, (MR_Integer) 1))));
    MR_Word MaybeFuncResultTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredAndArgs_20, (MR_Integer) 2))));
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
      MR_Word FuncResultTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFuncResultTerm_23, (MR_Integer) 0))));
      MR_Word Var_67;

      PredOrFunc0_25 = (MR_Integer) 1;
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (FuncResultTerm_24));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ArgTerms_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[5]), NonFuncArgTerms_22, Var_67);
    }
    parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(VarSet_11, PredAndVarsContextPieces_19, ArgTerms_26, (MR_Integer) 1, &MaybePragmaVars_27);
    if (((MR_tag((MR_Word) MaybePragmaVars_27)) == (MR_Integer) 0))
    {
      MR_Word PragmaVarsSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePragmaVars_27, (MR_Integer) 0))));

      {
        MaybeNamePFPragmaVars_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeNamePFPragmaVars_29, 0) = ((MR_Box) (PragmaVarsSpecs_30));
      }
    }
    else
    {
      MR_Word PragmaVars0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePragmaVars_27, (MR_Integer) 0))));

      {
        MaybeNamePFPragmaVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, 0) = ((MR_Box) (PredName0_21));
        MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, 1) = ((MR_Box) (PredOrFunc0_25));
        MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, 2) = ((MR_Box) (PragmaVars0_28));
      }
    }
  }
  FlagsContextPieces_32 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[145])));
  parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0(ForeignLanguage_12, VarSet_11, FlagsTerm_14, FlagsContextPieces_32, &MaybeFlags_33);
  CodeContext_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), CodeTerm_15);
  succeeded = ((MR_tag((MR_Word) CodeTerm_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeTerm_15, (MR_Integer) 0))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeTerm_15, (MR_Integer) 1))));
    succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 2);
      if (succeeded)
        Code_35 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_82, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    MR_Word Impl0_37;
    MR_Word Var_84;

    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (CodeContext_34));
    }
    {
      Impl0_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Impl0_37, 0) = ((MR_Box) (Code_35));
      MR_hl_field(MR_mktag(0), Impl0_37, 1) = ((MR_Box) (Var_84));
    }
    {
      MaybeImpl_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeImpl_38, 0) = ((MR_Box) (Impl0_37));
    }
  }
  else
  {
    MR_String CodeTermStr_39;
    MR_Word ImplPieces_40;
    MR_Word ImplSpec_41;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_109;

    CodeTermStr_39 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_11, CodeTerm_15);
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (CodeTermStr_39));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[146])));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
    }
    {
      ImplPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImplPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), ImplPieces_40, 1) = ((MR_Box) (Var_87));
    }
    {
      ImplSpec_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImplSpec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_ordinary_foreign_proc\'/9"));
      MR_hl_field(MR_mktag(1), ImplSpec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ImplSpec_41, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), ImplSpec_41, 3) = ((MR_Box) (CodeContext_34));
      MR_hl_field(MR_mktag(1), ImplSpec_41, 4) = ((MR_Box) (ImplPieces_40));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (ImplSpec_41));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeImpl_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeImpl_38, 0) = ((MR_Box) (Var_109));
    }
  }
  succeeded = ((MR_tag((MR_Word) MaybeNamePFPragmaVars_29)) == (MR_Integer) 1);
  if (succeeded)
  {
    PredName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, (MR_Integer) 0))));
    PredOrFunc_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, (MR_Integer) 1))));
    PragmaVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNamePFPragmaVars_29, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) MaybeFlags_33)) == (MR_Integer) 1);
    if (succeeded)
    {
      Flags_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlags_33, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeImpl_38)) == (MR_Integer) 1);
      if (succeeded)
        Impl_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpl_38, (MR_Integer) 0))));
    }
  }
  if (succeeded)
  {
    MR_Word ProgVarSet_47;
    MR_Word InstVarSet_48;
    MR_Word FPInfo_49;
    MR_Word Pragma_50;
    MR_Word ItemPragma_51;
    MR_Word Item_52;
    MR_Word Var_111;

    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, &ProgVarSet_47);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_11, &InstVarSet_48);
    {
      FPInfo_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPInfo_49, 0) = ((MR_Box) (Flags_45));
      MR_hl_field(MR_mktag(0), FPInfo_49, 1) = ((MR_Box) (PredName_42));
      MR_hl_field(MR_mktag(0), FPInfo_49, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_43));
      MR_hl_field(MR_mktag(0), FPInfo_49, 3) = ((MR_Box) (PragmaVars_44));
      MR_hl_field(MR_mktag(0), FPInfo_49, 4) = ((MR_Box) (ProgVarSet_47));
      MR_hl_field(MR_mktag(0), FPInfo_49, 5) = ((MR_Box) (InstVarSet_48));
      MR_hl_field(MR_mktag(0), FPInfo_49, 6) = ((MR_Box) (Impl_46));
    }
    Pragma_50 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_49)));
    {
      ItemPragma_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemPragma_51, 0) = ((MR_Box) (Pragma_50));
      MR_hl_field(MR_mktag(0), ItemPragma_51, 1) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), ItemPragma_51, 2) = ((MR_Box) (SeqNum_17));
    }
    {
      Item_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_52, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Item_52, 1) = ((MR_Box) (ItemPragma_51));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Item_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_111));
    }
  }
  else
  {
    MR_Word AllSpecs_53;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;

    Var_112 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0), MaybeImpl_38);
    Var_114 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeNamePFPragmaVars_29);
    Var_115 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0), MaybeFlags_33);
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_114, Var_115);
    AllSpecs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_112, Var_113);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AllSpecs_53));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_5(
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
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Var_183 = ((MR_Word) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183));
  parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Var_183, (MR_Integer) 0))));
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Var_183, (MR_Integer) 1))));
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_204_204 = (MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0);
  (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_204_204, ((MR_Box) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict1_201)), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14);
  if ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
  {
    (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__TypeCtorInfo_204_204, ((MR_Box) ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__Conflict2_202)), (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14);
    if ((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
      parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s * env_ptr = (struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[1]), &(env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__conv0_Var_183, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[245])), parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_3, env_ptr);
      (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0(
  MR_Word ForeignLanguage_6,
  MR_Word VarSet_7,
  MR_Word Term_8,
  MR_Word ContextPieces_9,
  MR_Word * MaybeAttributes_10)
{
  struct parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0_s env;

  {
    MR_Word Attributes0_11;
    MR_Word MaybeAttrList_13;
    MR_Word Attr_213;

    Attributes0_11 = parse_tree__prog_data_foreign__default_attributes_1_f_0(ForeignLanguage_6);
    (env).parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded = parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(VarSet_7, Term_8, &Attr_213);
    if ((env).parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
    {
      MR_Word Var_214;

      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Attr_213));
        MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeAttrList_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeAttrList_13, 0) = ((MR_Box) (Var_214));
      }
    }
    else
      parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_attributes_list_5_p_0(ContextPieces_9, VarSet_7, Term_8, (MR_Integer) 1, &MaybeAttrList_13);
    if (((MR_tag((MR_Word) MaybeAttrList_13)) == (MR_Integer) 0))
      *MaybeAttributes_10 = (MR_Word) (MaybeAttrList_13);
    else
    {
      (env).parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttrList_13, (MR_Integer) 0))));
      parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_4(&env);
      if ((env).parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__succeeded)
      {
        MR_Word Pieces_17;
        MR_Word Spec_18;
        MR_Word Var_184;
        MR_Word Var_196;
        MR_Word Var_197;

        Var_184 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9);
        Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_184, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[248])));
        Var_196 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_and_check_pragma_foreign_proc_attributes_term\'/5"));
          MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (Pieces_17));
        }
        {
          Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Spec_18));
          MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeAttributes_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_197));
        }
      }
      else
      {
        MR_Word Attributes_19;
        MR_Box conv2_Attributes_19;
        MR_Word Var_200;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__parse_pragma_foreign__parse_tree__parse_pragma_foreign__type_ctor_info_collected_pragma_foreign_proc_attribute_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_2[2]), (env).parse_tree__parse_pragma_foreign__parse_and_check_pragma_foreign_proc_attributes_term_5_p_0_env_0__AttrList_14, ((MR_Box) (Attributes0_11)), &conv2_Attributes_19);
        Attributes_19 = ((MR_Word) (conv2_Attributes_19));
        Var_200 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAttributes_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attributes_19));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_attributes_list_5_p_0(
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
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (strcmp(Var_26, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeAttrs_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[7]));
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
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
        succeeded = (strcmp(Var_30, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
            succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
              Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
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

      parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_attributes_list_5_p_0(ContextPieces_6, VarSet_7, TailTerm_13, Var_34, &MaybeTailAttrs_15);
      succeeded = parse_tree__parse_pragma_foreign__parse_single_pragma_foreign_proc_attribute_3_p_0(VarSet_7, HeadTerm_12, &HeadAttr_16);
      if (succeeded)
        if (((MR_tag((MR_Word) MaybeTailAttrs_15)) == (MR_Integer) 0))
          *MaybeAttrs_10 = MaybeTailAttrs_15;
        else
        {
          MR_Word TailAttrs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailAttrs_15, (MR_Integer) 0))));
          MR_Word Var_36;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (HeadAttr_16));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (TailAttrs_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeAttrs_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_36));
          }
        }
      else
      {
        MR_String HeadTermStr_19;
        MR_Word HeadPieces_20;
        MR_Word HeadSpec_21;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;

        HeadTermStr_19 = parse_tree__parse_tree_out_term__mercury_limited_term_to_string_vs_4_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, (MR_Integer) 0, (MR_Integer) 80, HeadTerm_12);
        Var_39 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (HeadAttrNum_9));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (HeadTermStr_19));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[253])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[249])));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[158])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
        }
        HeadPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_39, Var_40);
        Var_64 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_12);
        {
          HeadSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_attributes_list\'/5"));
          MR_hl_field(MR_mktag(1), HeadSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), HeadSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), HeadSpec_21, 3) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(1), HeadSpec_21, 4) = ((MR_Box) (HeadPieces_20));
        }
        Var_66 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[7]), MaybeTailAttrs_15);
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (HeadSpec_21));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeAttrs_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
        }
      }
    }
    else
    {
      MR_String TermStr_22;
      MR_Word TermPieces_23;
      MR_Word TermSpec_24;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_86;
      MR_Word Var_87;

      TermStr_22 = parse_tree__parse_tree_out_term__mercury_limited_term_to_string_vs_4_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, (MR_Integer) 0, (MR_Integer) 80, Term_8);
      Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (TermStr_22));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[254])));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
      }
      TermPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
      Var_86 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
      {
        TermSpec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TermSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_attributes_list\'/5"));
        MR_hl_field(MR_mktag(1), TermSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TermSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), TermSpec_24, 3) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), TermSpec_24, 4) = ((MR_Box) (TermPieces_23));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (TermSpec_24));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeAttrs_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
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
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
    succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Flag_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (MayCallMercury_7));
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
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
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
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Flag_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (ThreadSafe_8));
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
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
        if (succeeded)
        {
          Str_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0))));
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
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Flag_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (TabledForIo_9));
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
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Flag_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UserSharing_10));
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
            Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
            if (succeeded)
            {
              Functor_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
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
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Flag_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Backend_11));
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
              Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0);
              if (succeeded)
              {
                Functor_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0))));
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
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Flag_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Purity_12));
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
                Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Functor_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
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
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Flag_6 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Terminates_13));
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
                  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_76)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Functor_74 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))));
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
                    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Functor_78 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0))));
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
                      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                      Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));
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
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Flag_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (TrailMod_14));
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
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Flag_6 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (CallsTabled_15));
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
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Flag_6 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (BoxPolicy_16));
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
                            Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Functor_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
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
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *Flag_6 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (AffectsLiveness_17));
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
                              Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
                              Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
                              succeeded = ((MR_tag((MR_Word) Var_100)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Functor_98 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0))));
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
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                *Flag_6 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (AllocatesMemory_18));
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
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  *Flag_6 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                                  MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (RegistersRoots_19));
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
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    *Flag_6 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (MayDuplicate_20));
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
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      *Flag_6 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                                      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (MayExport_21));
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
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
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
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
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
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Functor_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
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
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_1, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_1, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
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
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_1, (MR_Integer) 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_1, (MR_Integer) 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
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
    *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[4]));
  else
  {
    MR_Word HeadTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TailTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MaybeTailPragmaVars_16;
    MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
    MR_Word ModeTerm_18;
    MR_Word Var_20;
    MR_Word VarContext_21;
    MR_Word VarTerm_17;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    parse_tree__parse_pragma_foreign__parse_pragma_foreign_proc_varlist_5_p_0(VarSet_1, ContextPieces_2, TailTerm_13, Var_37, &MaybeTailPragmaVars_16);
    succeeded = ((MR_tag((MR_Word) HeadTerm_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_12, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
        succeeded = (strcmp(Var_40, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            VarTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
            succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
              succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) VarTerm_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTerm_17, (MR_Integer) 0))));
                  VarContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarTerm_17, (MR_Integer) 1))));
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
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_String VarName0_22;
      MR_Word Mode0_28;
      MR_String VarName_29;
      MR_Word TailPragmaVars_30;

      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_1, Var_20, &VarName0_22);
      if (succeeded)
        {
          MaybeVarName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeVarName_23, 0) = ((MR_Box) (VarName0_22));
        }
      else
      {
        MR_Word UnnamedSpec_25;
        MR_Word Var_61;

        {
          UnnamedSpec_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), UnnamedSpec_25, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_varlist\'/5"));
          MR_hl_field(MR_mktag(1), UnnamedSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), UnnamedSpec_25, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), UnnamedSpec_25, 3) = ((MR_Box) (VarContext_21));
          MR_hl_field(MR_mktag(1), UnnamedSpec_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[154])));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (UnnamedSpec_25));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeVarName_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MaybeVarName_23, 0) = ((MR_Box) (Var_61));
        }
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[157])));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[155])));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_64);
      ArgContextPieces_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_2, Var_63);
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_1, ArgContextPieces_26, ModeTerm_18, &MaybeMode0_27);
      succeeded = ((MR_tag((MR_Word) MaybeMode0_27)) == (MR_Integer) 1);
      if (succeeded)
      {
        Mode0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode0_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeVarName_23)) == (MR_Integer) 1);
        if (succeeded)
        {
          VarName_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeVarName_23, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeTailPragmaVars_16)) == (MR_Integer) 1);
          if (succeeded)
            TailPragmaVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailPragmaVars_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word Mode_31;
        MR_Word ProgVar_32;
        MR_Word HeadPragmaVar_33;
        MR_Word Var_75;

        parse_tree__prog_mode__constrain_inst_vars_in_mode_2_p_0(Mode0_28, &Mode_31);
        mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, &ProgVar_32);
        {
          HeadPragmaVar_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadPragmaVar_33, 0) = ((MR_Box) (ProgVar_32));
          MR_hl_field(MR_mktag(0), HeadPragmaVar_33, 1) = ((MR_Box) (VarName_29));
          MR_hl_field(MR_mktag(0), HeadPragmaVar_33, 2) = ((MR_Box) (Mode_31));
          MR_hl_field(MR_mktag(0), HeadPragmaVar_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (HeadPragmaVar_33));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (TailPragmaVars_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
        }
      }
      else
      {
        MR_Word Specs_34;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;

        Var_76 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
        Var_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeVarName_23);
        Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_78, Var_79);
        Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_76, Var_77);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_34));
        }
      }
    }
    else
    {
      MR_Word Pieces_35;
      MR_Word Spec_36;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;

      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (ArgNum_4));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[164])));
      }
      {
        Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[158])));
        MR_hl_field(MR_mktag(1), Pieces_35, 1) = ((MR_Box) (Var_82));
      }
      Var_102 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_12);
      {
        Spec_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_proc_varlist\'/5"));
        MR_hl_field(MR_mktag(1), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_36, 3) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Spec_36, 4) = ((MR_Box) (Pieces_35));
      }
      Var_104 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[6]), MaybeTailPragmaVars_16);
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
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
    MR_Word Spec_35;
    MR_Word Var_99;
    MR_Word Var_100;

    Var_99 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
      MR_hl_field(MR_mktag(1), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_35, 3) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Spec_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[74])));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Spec_35));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
    }
  }
  else
  {
    MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_134 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_108;
      MR_Word Var_112;
      MR_Word Var_113;

      Var_112 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_108, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
        MR_hl_field(MR_mktag(1), Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_108, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_108, 3) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(1), Spec_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[74])));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Spec_108));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
      }
    }
    else
    {
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 1))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_134, (MR_Integer) 0))));

      if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ContextPieces_15;
        MR_Word MaybeForeignLang_16;
        MR_Word Code_18;
        MR_Word CodeSpecs_19;
        MR_Word CodePrime_17;
        MR_Word ForeignLanguage_23;

        ContextPieces_15 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[76])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(ContextPieces_15, VarSet_7, Var_135, &MaybeForeignLang_16);
        succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_137, &CodePrime_17);
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
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_78;

          Code_18 = (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_3[1]);
          CodeTermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_137);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (CodeTermStr_20));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[77])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[72])));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            CodePieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CodePieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), CodePieces_21, 1) = ((MR_Box) (Var_53));
          }
          Var_78 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_137);
          {
            CodeSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CodeSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
            MR_hl_field(MR_mktag(1), CodeSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CodeSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), CodeSpec_22, 3) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(1), CodeSpec_22, 4) = ((MR_Box) (CodePieces_21));
          }
          {
            CodeSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CodeSpecs_19, 0) = ((MR_Box) (CodeSpec_22));
            MR_hl_field(MR_mktag(1), CodeSpecs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        succeeded = (CodeSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_16)) == (MR_Integer) 1);
          if (succeeded)
            ForeignLanguage_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignLang_16, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FCInfo_24;
          MR_Word Pragma_25;
          MR_Word ItemPragma_26;
          MR_Word Item_27;
          MR_Word Var_80;

          {
            FCInfo_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FCInfo_24, 0) = (MR_Box) ((MR_Unsigned) (ForeignLanguage_23));
            MR_hl_field(MR_mktag(0), FCInfo_24, 1) = ((MR_Box) (Code_18));
          }
          Pragma_25 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (FCInfo_24)));
          {
            ItemPragma_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPragma_26, 0) = ((MR_Box) (Pragma_25));
            MR_hl_field(MR_mktag(0), ItemPragma_26, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), ItemPragma_26, 2) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_27, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_27, 1) = ((MR_Box) (ItemPragma_26));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Item_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_80));
          }
        }
        else
        {
          MR_Word Specs_28;
          MR_Word Var_81;

          Var_81 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_16);
          Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_81, CodeSpecs_19);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_28));
          }
        }
      }
      else
      {
        MR_Word Spec_117;
        MR_Word Var_121;
        MR_Word Var_122;

        Var_121 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
        {
          Spec_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_117, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_code\'/6"));
          MR_hl_field(MR_mktag(1), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_117, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_117, 3) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(1), Spec_117, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[74])));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Spec_117));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_122));
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
    MR_Word Spec_15;
    MR_Word Var_66;
    MR_Word Var_67;

    Var_66 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
    {
      Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
      MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[44])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
    }
  }
  else
  {
    MR_Word Var_422 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 1))));
    MR_Word Var_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_9, (MR_Integer) 0))));

    if ((Var_422 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_405;
      MR_Word Var_409;
      MR_Word Var_410;

      Var_409 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
      {
        Spec_405 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_405, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
        MR_hl_field(MR_mktag(1), Spec_405, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_405, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_405, 3) = ((MR_Box) (Var_409));
        MR_hl_field(MR_mktag(1), Spec_405, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[44])));
      }
      {
        Var_410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_410, 0) = ((MR_Box) (Spec_405));
        MR_hl_field(MR_mktag(1), Var_410, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_410));
      }
    }
    else
    {
      MR_Word Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_422, (MR_Integer) 1))));
      MR_Word Var_425 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_422, (MR_Integer) 0))));

      if ((Var_424 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word MaybeIsLocal_19 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_3[0]));
        MR_Word LangContextPieces_25;
        MR_Word MaybeLang_26;
        MR_Word MaybeLitOrIncl_28;
        MR_Word LitOrIncl0_27;
        MR_Word IsLocal_32;
        MR_Word Lang_33;
        MR_Word LitOrIncl_34;

        LangContextPieces_25 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
        parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_25, VarSet_7, Var_423, &MaybeLang_26);
        succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_425, &LitOrIncl0_27);
        if (succeeded)
          {
            MaybeLitOrIncl_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeLitOrIncl_28, 0) = ((MR_Box) (LitOrIncl0_27));
          }
        else
        {
          MR_String LitOrInclStr_29;
          MR_Word LitOrInclPieces_30;
          MR_Word LitOrInclSpec_31;
          MR_Word Var_129;
          MR_Word Var_131;
          MR_Word Var_134;
          MR_Word Var_137;
          MR_Word Var_140;
          MR_Word Var_142;
          MR_Word Var_145;
          MR_Word Var_148;
          MR_Word Var_151;
          MR_Word Var_154;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_168;
          MR_Word Var_169;

          LitOrInclStr_29 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_425);
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_158, 1) = ((MR_Box) (LitOrInclStr_29));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
          }
          {
            Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_157));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[53])));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
          }
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[52])));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_151));
          }
          {
            Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[51])));
            MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_148));
          }
          {
            Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_145));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_140));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42])));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
          }
          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[49])));
            MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[48])));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
          }
          {
            LitOrInclPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LitOrInclPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[47])));
            MR_hl_field(MR_mktag(1), LitOrInclPieces_30, 1) = ((MR_Box) (Var_129));
          }
          Var_168 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_425);
          {
            LitOrInclSpec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LitOrInclSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
            MR_hl_field(MR_mktag(1), LitOrInclSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), LitOrInclSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), LitOrInclSpec_31, 3) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(1), LitOrInclSpec_31, 4) = ((MR_Box) (LitOrInclPieces_30));
          }
          {
            Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (LitOrInclSpec_31));
            MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeLitOrIncl_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeLitOrIncl_28, 0) = ((MR_Box) (Var_169));
          }
        }
        IsLocal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIsLocal_19, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeLang_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          Lang_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLang_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeLitOrIncl_28)) == (MR_Integer) 1);
          if (succeeded)
            LitOrIncl_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLitOrIncl_28, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FDInfo_35;
          MR_Word Pragma_36;
          MR_Word ItemPragma_37;
          MR_Word Item_38;
          MR_Word Var_171;

          {
            FDInfo_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FDInfo_35, 0) = (MR_Box) (((((MR_Unsigned) (Lang_33) << 1)) | (MR_Unsigned) (IsLocal_32)));
            MR_hl_field(MR_mktag(0), FDInfo_35, 1) = ((MR_Box) (LitOrIncl_34));
          }
          Pragma_36 = (MR_Word) ((MR_Word) (FDInfo_35));
          {
            ItemPragma_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemPragma_37, 0) = ((MR_Box) (Pragma_36));
            MR_hl_field(MR_mktag(0), ItemPragma_37, 1) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), ItemPragma_37, 2) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_38, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Item_38, 1) = ((MR_Box) (ItemPragma_37));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Item_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_171));
          }
        }
        else
        {
          MR_Word Specs_39;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;
          MR_Word Var_175;

          Var_172 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0), MaybeIsLocal_19);
          Var_174 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeLang_26);
          Var_175 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0), MaybeLitOrIncl_28);
          Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_174, Var_175);
          Specs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_172, Var_173);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_39));
          }
        }
      }
      else
      {
        MR_Word Var_426 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_424, (MR_Integer) 1))));
        MR_Word Var_427 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_424, (MR_Integer) 0))));

        if ((Var_426 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MaybeIsLocal_337;
          MR_Word LangContextPieces_338;
          MR_Word MaybeLang_339;
          MR_Word MaybeLitOrIncl_341;
          MR_Word IsLocal0_21;
          MR_Word LitOrIncl0_259;
          MR_Word IsLocal_317;
          MR_Word Lang_318;
          MR_Word LitOrIncl_319;

          succeeded = parse_tree__parse_pragma_foreign__parse_foreign_decl_is_local_2_p_0(Var_425, &IsLocal0_21);
          if (succeeded)
            {
              MaybeIsLocal_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeIsLocal_337, 0) = ((MR_Box) (IsLocal0_21));
            }
          else
          {
            MR_String IsLocalStr_22;
            MR_Word IsLocalPieces_23;
            MR_Word IsLocalSpec_24;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_83;
            MR_Word Var_86;
            MR_Word Var_89;
            MR_Word Var_92;
            MR_Word Var_95;
            MR_Word Var_98;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_112;
            MR_Word Var_113;

            IsLocalStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_425);
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (IsLocalStr_22));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
            }
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_101));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[60])));
              MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_98));
            }
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_95));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[58])));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[57])));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[56])));
              MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42])));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[55])));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
            }
            {
              IsLocalPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), IsLocalPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[54])));
              MR_hl_field(MR_mktag(1), IsLocalPieces_23, 1) = ((MR_Box) (Var_77));
            }
            Var_112 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_425);
            {
              IsLocalSpec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), IsLocalSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
              MR_hl_field(MR_mktag(1), IsLocalSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), IsLocalSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), IsLocalSpec_24, 3) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(1), IsLocalSpec_24, 4) = ((MR_Box) (IsLocalPieces_23));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (IsLocalSpec_24));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeIsLocal_337 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeIsLocal_337, 0) = ((MR_Box) (Var_113));
            }
          }
          LangContextPieces_338 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[46])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_338, VarSet_7, Var_423, &MaybeLang_339);
          succeeded = parse_tree__parse_pragma_foreign__parse_foreign_literal_or_include_2_p_0(Var_427, &LitOrIncl0_259);
          if (succeeded)
            {
              MaybeLitOrIncl_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeLitOrIncl_341, 0) = ((MR_Box) (LitOrIncl0_259));
            }
          else
          {
            MR_String LitOrInclStr_216;
            MR_Word LitOrInclPieces_217;
            MR_Word LitOrInclSpec_218;
            MR_Word Var_221;
            MR_Word Var_223;
            MR_Word Var_226;
            MR_Word Var_229;
            MR_Word Var_232;
            MR_Word Var_234;
            MR_Word Var_237;
            MR_Word Var_240;
            MR_Word Var_243;
            MR_Word Var_246;
            MR_Word Var_249;
            MR_Word Var_250;
            MR_Word Var_255;
            MR_Word Var_256;

            LitOrInclStr_216 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Var_427);
            {
              Var_250 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_250, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_250, 1) = ((MR_Box) (LitOrInclStr_216));
            }
            {
              Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (Var_250));
              MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
            }
            {
              Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
              MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) (Var_249));
            }
            {
              Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_243, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[53])));
              MR_hl_field(MR_mktag(1), Var_243, 1) = ((MR_Box) (Var_246));
            }
            {
              Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_240, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[52])));
              MR_hl_field(MR_mktag(1), Var_240, 1) = ((MR_Box) (Var_243));
            }
            {
              Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) (Var_240));
            }
            {
              Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[50])));
              MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) (Var_237));
            }
            {
              Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_234));
            }
            {
              Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[16])));
              MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) (Var_232));
            }
            {
              Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[42])));
              MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) (Var_229));
            }
            {
              Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[49])));
              MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) (Var_226));
            }
            {
              Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_223));
            }
            {
              LitOrInclPieces_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), LitOrInclPieces_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[47])));
              MR_hl_field(MR_mktag(1), LitOrInclPieces_217, 1) = ((MR_Box) (Var_221));
            }
            Var_255 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Var_427);
            {
              LitOrInclSpec_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), LitOrInclSpec_218, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
              MR_hl_field(MR_mktag(1), LitOrInclSpec_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), LitOrInclSpec_218, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), LitOrInclSpec_218, 3) = ((MR_Box) (Var_255));
              MR_hl_field(MR_mktag(1), LitOrInclSpec_218, 4) = ((MR_Box) (LitOrInclPieces_217));
            }
            {
              Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (LitOrInclSpec_218));
              MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeLitOrIncl_341 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MaybeLitOrIncl_341, 0) = ((MR_Box) (Var_256));
            }
          }
          succeeded = ((MR_tag((MR_Word) MaybeIsLocal_337)) == (MR_Integer) 1);
          if (succeeded)
          {
            IsLocal_317 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIsLocal_337, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) MaybeLang_339)) == (MR_Integer) 1);
            if (succeeded)
            {
              Lang_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLang_339, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MaybeLitOrIncl_341)) == (MR_Integer) 1);
              if (succeeded)
                LitOrIncl_319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLitOrIncl_341, (MR_Integer) 0))));
            }
          }
          if (succeeded)
          {
            MR_Word FDInfo_303;
            MR_Word Pragma_304;
            MR_Word ItemPragma_305;
            MR_Word Item_306;
            MR_Word Var_307;

            {
              FDInfo_303 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FDInfo_303, 0) = (MR_Box) (((((MR_Unsigned) (Lang_318) << 1)) | (MR_Unsigned) (IsLocal_317)));
              MR_hl_field(MR_mktag(0), FDInfo_303, 1) = ((MR_Box) (LitOrIncl_319));
            }
            Pragma_304 = (MR_Word) ((MR_Word) (FDInfo_303));
            {
              ItemPragma_305 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_305, 0) = ((MR_Box) (Pragma_304));
              MR_hl_field(MR_mktag(0), ItemPragma_305, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemPragma_305, 2) = ((MR_Box) (SeqNum_11));
            }
            {
              Item_306 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_306, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Item_306, 1) = ((MR_Box) (ItemPragma_305));
            }
            {
              Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_307, 0) = ((MR_Box) (Item_306));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_307));
            }
          }
          else
          {
            MR_Word Specs_308;
            MR_Word Var_309;
            MR_Word Var_310;
            MR_Word Var_311;
            MR_Word Var_312;

            Var_309 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0), MaybeIsLocal_337);
            Var_311 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeLang_339);
            Var_312 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0), MaybeLitOrIncl_341);
            Var_310 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_311, Var_312);
            Specs_308 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_309, Var_310);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_308));
            }
          }
        }
        else
        {
          MR_Word Var_202;
          MR_Word Var_203;
          MR_Word Spec_206;

          Var_202 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_8);
          {
            Spec_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_206, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_decl\'/6"));
            MR_hl_field(MR_mktag(1), Spec_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_206, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_206, 3) = ((MR_Box) (Var_202));
            MR_hl_field(MR_mktag(1), Spec_206, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[69])));
          }
          {
            Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (Spec_206));
            MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_203));
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
    Functor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Args_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Code_8;

      succeeded = ((MR_tag((MR_Word) Functor_5)) == (MR_Integer) 2);
      if (succeeded)
      {
        Code_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), Functor_5, (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *LiteralOrInclude_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Code_8));
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
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_5, (MR_Integer) 0))));
        succeeded = (strcmp(Var_11, (MR_String) "include_file") == 0);
        if (succeeded)
        {
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
            Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
            if (succeeded)
            {
              FileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_13, (MR_Integer) 0))));
              succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *LiteralOrInclude_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_9));
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
    Functor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      if (((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 0))
      {
        String_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_3, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Functor_3)) == (MR_Integer) 2))
      {
        String_6 = ((MR_String) ((MR_hl_field(MR_mktag(2), Functor_3, (MR_Integer) 0))));
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
    MR_Word Spec_53;
    MR_Word Var_141;
    MR_Word Var_142;

    Var_141 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
    {
      Spec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
      MR_hl_field(MR_mktag(1), Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_53, 3) = ((MR_Box) (Var_141));
      MR_hl_field(MR_mktag(1), Spec_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[15])));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_142));
    }
  }
  else
  {
    MR_Word Var_308 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_12, (MR_Integer) 1))));
    MR_Word Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PragmaTerms_12, (MR_Integer) 0))));

    if ((Var_308 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Spec_157;
      MR_Word Var_161;
      MR_Word Var_162;

      Var_161 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
      {
        Spec_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_157, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
        MR_hl_field(MR_mktag(1), Spec_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_157, 2) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(MR_mktag(1), Spec_157, 3) = ((MR_Box) (Var_161));
        MR_hl_field(MR_mktag(1), Spec_157, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[15])));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Spec_157));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_162));
      }
    }
    else
    {
      MR_Word Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_308, (MR_Integer) 1))));
      MR_Word Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_308, (MR_Integer) 0))));

      if ((Var_310 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Spec_166;
        MR_Word Var_170;
        MR_Word Var_171;

        Var_170 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
        {
          Spec_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_166, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
          MR_hl_field(MR_mktag(1), Spec_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_166, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_166, 3) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(1), Spec_166, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[15])));
        }
        {
          Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Spec_166));
          MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_171));
        }
      }
      else
      {
        MR_Word Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 1))));
        MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_310, (MR_Integer) 0))));

        if ((Var_312 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word LangContextPieces_22;
          MR_Word MaybeForeignLang_23;
          MR_Word TypeDefnHeadContextPieces_24;
          MR_Word MaybeTypeDefnHead_25;
          MR_Word ForeignTypeContextPieces_26;
          MR_Word MaybeForeignType_27;
          MR_Word AssertionsSet_28;
          MR_Word Assertions_32;
          MR_Word MercuryTypeSymName_34;
          MR_Word MercuryParams_35;
          MR_Word ForeignType_36;
          MR_Word MaybeCanonical_37;

          LangContextPieces_22 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[20])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_22, VarSet_10, Var_309, &MaybeForeignLang_23);
          TypeDefnHeadContextPieces_24 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[22])));
          parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeDefnHeadContextPieces_24, ModuleName_9, VarSet_10, Var_311, &MaybeTypeDefnHead_25);
          ForeignTypeContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[24])));
          parse_tree__parse_pragma_foreign__parse_foreign_language_type_5_p_0(ForeignTypeContextPieces_26, Var_313, VarSet_10, MaybeForeignLang_23, &MaybeForeignType_27);
          AssertionsSet_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
          Assertions_32 = (MR_Word) (AssertionsSet_28);
          succeeded = ((MR_tag((MR_Word) MaybeForeignLang_23)) == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeTypeDefnHead_25)) == (MR_Integer) 1);
            if (succeeded)
            {
              MercuryTypeSymName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefnHead_25, (MR_Integer) 0))));
              MercuryParams_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefnHead_25, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) MaybeForeignType_27)) == (MR_Integer) 1);
              if (succeeded)
              {
                ForeignType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_27, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) MaybeMaybeCanonical_15)) == (MR_Integer) 1);
                if (succeeded)
                  MaybeCanonical_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeCanonical_15, (MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Word TVarSet_38;
            MR_Word TypeDetailsForeign_39;
            MR_Word ItemTypeDefn_40;
            MR_Word Item_41;
            MR_Word Var_111;
            MR_Word Var_112;

            mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_38);
            {
              TypeDetailsForeign_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeDetailsForeign_39, 0) = ((MR_Box) (ForeignType_36));
              MR_hl_field(MR_mktag(0), TypeDetailsForeign_39, 1) = ((MR_Box) (MaybeCanonical_37));
              MR_hl_field(MR_mktag(0), TypeDetailsForeign_39, 2) = ((MR_Box) (Assertions_32));
            }
            {
              Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (TypeDetailsForeign_39));
            }
            {
              ItemTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 0) = ((MR_Box) (MercuryTypeSymName_34));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 1) = ((MR_Box) (MercuryParams_35));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 2) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 3) = ((MR_Box) (TVarSet_38));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 4) = ((MR_Box) (Context_13));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_40, 5) = ((MR_Box) (SeqNum_14));
            }
            {
              Item_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Item_41, 1) = ((MR_Box) (ItemTypeDefn_40));
            }
            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Item_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_112));
            }
          }
          else
          {
            MR_Word Specs_42;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;

            Var_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_23);
            Var_115 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[1]), MaybeTypeDefnHead_25);
            Var_117 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0), MaybeForeignType_27);
            Var_119 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), MaybeMaybeCanonical_15);
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) ((MR_Unsigned) 0U), Var_119);
            Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_117, Var_118);
            Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_115, Var_116);
            Specs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_113, Var_114);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_42));
            }
          }
        }
        else
        {
          MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
          MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 0))));

          if ((Var_314 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word AssertionTerm_184;
            MR_Word AssertionContextPieces_185;
            MR_Word Var_187;
            MR_Word MaybeAssertionTerm_251;
            MR_Word LangContextPieces_252;
            MR_Word MaybeForeignLang_253;
            MR_Word TypeDefnHeadContextPieces_254;
            MR_Word MaybeTypeDefnHead_255;
            MR_Word ForeignTypeContextPieces_256;
            MR_Word MaybeForeignType_257;
            MR_Word AssertionsSet_258;
            MR_Word AssertionSpecs_259;
            MR_Word Assertions_262;
            MR_Word MercuryTypeSymName_222;
            MR_Word MercuryParams_223;
            MR_Word ForeignType_224;
            MR_Word MaybeCanonical_225;

            {
              MaybeAssertionTerm_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeAssertionTerm_251, 0) = ((MR_Box) (Var_315));
            }
            LangContextPieces_252 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[20])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_4_p_0(LangContextPieces_252, VarSet_10, Var_309, &MaybeForeignLang_253);
            TypeDefnHeadContextPieces_254 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[22])));
            parse_tree__parse_type_defn__parse_type_defn_head_5_p_0(TypeDefnHeadContextPieces_254, ModuleName_9, VarSet_10, Var_311, &MaybeTypeDefnHead_255);
            ForeignTypeContextPieces_256 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[24])));
            parse_tree__parse_pragma_foreign__parse_foreign_language_type_5_p_0(ForeignTypeContextPieces_256, Var_313, VarSet_10, MaybeForeignLang_253, &MaybeForeignType_257);
            AssertionTerm_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssertionTerm_251, (MR_Integer) 0))));
            AssertionContextPieces_185 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[26])));
            Var_187 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0));
            parse_tree__parse_pragma_foreign__parse_foreign_type_assertions_7_p_0(AssertionContextPieces_185, VarSet_10, AssertionTerm_184, Var_187, &AssertionsSet_258, (MR_Word) ((MR_Unsigned) 0U), &AssertionSpecs_259);
            Assertions_262 = (MR_Word) (AssertionsSet_258);
            succeeded = ((MR_tag((MR_Word) MaybeForeignLang_253)) == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (AssertionSpecs_259 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeTypeDefnHead_255)) == (MR_Integer) 1);
                if (succeeded)
                {
                  MercuryTypeSymName_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefnHead_255, (MR_Integer) 0))));
                  MercuryParams_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefnHead_255, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) MaybeForeignType_257)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ForeignType_224 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_257, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) MaybeMaybeCanonical_15)) == (MR_Integer) 1);
                    if (succeeded)
                      MaybeCanonical_225 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeCanonical_15, (MR_Integer) 0))));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word TVarSet_199;
              MR_Word TypeDetailsForeign_200;
              MR_Word ItemTypeDefn_201;
              MR_Word Item_202;
              MR_Word Var_203;
              MR_Word Var_204;

              mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_10, &TVarSet_199);
              {
                TypeDetailsForeign_200 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeDetailsForeign_200, 0) = ((MR_Box) (ForeignType_224));
                MR_hl_field(MR_mktag(0), TypeDetailsForeign_200, 1) = ((MR_Box) (MaybeCanonical_225));
                MR_hl_field(MR_mktag(0), TypeDetailsForeign_200, 2) = ((MR_Box) (Assertions_262));
              }
              {
                Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_203, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_203, 1) = ((MR_Box) (TypeDetailsForeign_200));
              }
              {
                ItemTypeDefn_201 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 0) = ((MR_Box) (MercuryTypeSymName_222));
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 1) = ((MR_Box) (MercuryParams_223));
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 2) = ((MR_Box) (Var_203));
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 3) = ((MR_Box) (TVarSet_199));
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 4) = ((MR_Box) (Context_13));
                MR_hl_field(MR_mktag(0), ItemTypeDefn_201, 5) = ((MR_Box) (SeqNum_14));
              }
              {
                Item_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Item_202, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Item_202, 1) = ((MR_Box) (ItemTypeDefn_201));
              }
              {
                Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (Item_202));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeIOM_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_204));
              }
            }
            else
            {
              MR_Word Specs_207;
              MR_Word Var_208;
              MR_Word Var_209;
              MR_Word Var_210;
              MR_Word Var_211;
              MR_Word Var_212;
              MR_Word Var_213;
              MR_Word Var_214;

              Var_208 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), MaybeForeignLang_253);
              Var_210 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_1[1]), MaybeTypeDefnHead_255);
              Var_212 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0), MaybeForeignType_257);
              Var_214 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_canonical_0), MaybeMaybeCanonical_15);
              Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AssertionSpecs_259, Var_214);
              Var_211 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_212, Var_213);
              Var_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_210, Var_211);
              Specs_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_208, Var_209);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeIOM_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_207));
              }
            }
          }
          else
          {
            MR_Word Spec_175;
            MR_Word Var_179;
            MR_Word Var_180;

            Var_179 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ErrorTerm_11);
            {
              Spec_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_175, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_pragma_foreign_type\'/8"));
              MR_hl_field(MR_mktag(1), Spec_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_175, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_175, 3) = ((MR_Box) (Var_179));
              MR_hl_field(MR_mktag(1), Spec_175, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[15])));
            }
            {
              Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Spec_175));
              MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_180));
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
  MR_String String_55;
  MR_Word Var_64;

  if (succeeded)
  {
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangTerm_7, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0))
    {
      String_55 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Var_64)) == (MR_Integer) 2))
    {
      String_55 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_64, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      succeeded = libs__globals__convert_foreign_language_2_p_0(String_55, &ForeignLang_9);
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeForeignLang_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignLang_9));
    }
  else
  {
    MR_Word MainPieces_10;
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_String String_65;
    MR_String Var_72;
    MR_Word Var_75;

    Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5);
    Var_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, LangTerm_7);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[291])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[287])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
    }
    Var_34 = libs__globals__all_foreign_language_strings_0_f_0();
    Var_33 = parse_tree__error_util__list_to_pieces_1_f_0(Var_34);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_32);
    MainPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_13, Var_14);
    succeeded = ((MR_tag((MR_Word) LangTerm_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangTerm_7, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_75)) == (MR_Integer) 0))
      {
        String_65 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Var_75)) == (MR_Integer) 2))
      {
        String_65 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_75, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        Var_72 = mercury__string__to_lower_1_f_0(String_65);
        succeeded = (strcmp(Var_72, (MR_String) "erlang") == 0);
      }
    }
    if (succeeded)
      Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_10, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[293])));
    else
      Pieces_11 = MainPieces_10;
    Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LangTerm_7);
    {
      Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_language\'/4"));
      MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeForeignLang_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
    }
  }
}

static void MR_CALL 
parse_tree__parse_pragma_foreign__parse_foreign_language_type_5_p_0(
  MR_Word ContextPieces_6,
  MR_Word InputTerm_7,
  MR_Word VarSet_8,
  MR_Word MaybeLanguage_9,
  MR_Word * MaybeForeignLangType_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) InputTerm_7)) == (MR_Integer) 0);
  MR_String ForeignTypeName_11;
  MR_Word Var_19;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputTerm_7, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputTerm_7, (MR_Integer) 1))));
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 2);
      if (succeeded)
        ForeignTypeName_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_19, (MR_Integer) 0))));
    }
  }
  if (succeeded)
    if (((MR_tag((MR_Word) MaybeLanguage_9)) == (MR_Integer) 0))
      *MaybeForeignLangType_10 = (MR_Word) (&parse_tree__parse_pragma_foreign_scalar_common_3[3]);
    else
    {
      MR_Word Language_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLanguage_9, (MR_Integer) 0))));
      MR_Word ForeignLangType_14;

      switch (Language_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_21 = (MR_Word) (ForeignTypeName_11);

            {
              ForeignLangType_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignLangType_14, 0) = ((MR_Box) (Var_21));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_23 = (MR_Word) (ForeignTypeName_11);

            {
              ForeignLangType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ForeignLangType_14, 0) = ((MR_Box) (Var_23));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_22 = (MR_Word) (ForeignTypeName_11);

            {
              ForeignLangType_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignLangType_14, 0) = ((MR_Box) (Var_22));
            }
          }
          break;
      }
      succeeded = (strcmp(ForeignTypeName_11, (MR_String) "") == 0);
      if (succeeded)
      {
        MR_Word Pieces_15;
        MR_Word Spec_16;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_String Var_32;
        MR_Word Var_42;
        MR_Word Var_43;

        Var_24 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
        Var_32 = libs__globals__foreign_language_string_1_f_0(Language_13);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[141])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[139])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
        }
        Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_24, Var_25);
        Var_42 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InputTerm_7);
        {
          Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_language_type\'/5"));
          MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeForeignLangType_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignLangType_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignLangType_14));
        }
    }
  else
  {
    MR_String InputTermStr_18;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Pieces_72;
    MR_Word Spec_73;

    InputTermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, InputTerm_7);
    Var_46 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (InputTermStr_18));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[143])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[142])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    Pieces_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_46, Var_47);
    Var_69 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), InputTerm_7);
    {
      Spec_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_language_type\'/5"));
      MR_hl_field(MR_mktag(1), Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_73, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_73, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Spec_73, 4) = ((MR_Box) (Pieces_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Spec_73));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeForeignLangType_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
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
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
      succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
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
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "[|]") == 0);
          if (succeeded)
          {
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TailTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Specs_57_57;
        MR_Word STATE_VARIABLE_Assertions_58_58;
        MR_Word HeadAssertion_17;
        MR_String Constant_119;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word next_value_of_Term_10;
        MR_Word next_value_of_STATE_VARIABLE_Assertions_0_22;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

        succeeded = ((MR_tag((MR_Word) HeadTerm_14)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_14, (MR_Integer) 0))));
          Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTerm_14, (MR_Integer) 1))));
          succeeded = (Var_122 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_121)) == (MR_Integer) 0);
            if (succeeded)
            {
              Constant_119 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 0))));
              if ((strcmp(Constant_119, (MR_String) "stable") == 0))
              {
                HeadAssertion_17 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              if ((strcmp(Constant_119, (MR_String) "word_aligned_pointer") == 0))
              {
                HeadAssertion_17 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              if ((strcmp(Constant_119, (MR_String) "can_pass_as_mercury_type") == 0))
              {
                HeadAssertion_17 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            }
          }
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Assertions_34_34;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0), ((MR_Box) (HeadAssertion_17)), STATE_VARIABLE_Assertions_0_22, &STATE_VARIABLE_Assertions_34_34);
          if (succeeded)
          {
            STATE_VARIABLE_Assertions_58_58 = STATE_VARIABLE_Assertions_34_34;
            STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_0_24;
          }
          else
          {
            MR_String HeadTermStr_18;
            MR_Word Pieces_19;
            MR_Word Spec_20;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_42;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_56;

            HeadTermStr_18 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, (MR_Integer) 0, HeadTerm_14);
            Var_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (HeadTermStr_18));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[30])));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[28])));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[27])));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
            }
            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_36, Var_37);
            Var_56 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_14);
            {
              Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
              MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
            }
            {
              STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            STATE_VARIABLE_Assertions_58_58 = STATE_VARIABLE_Assertions_0_22;
          }
        }
        else
        {
          MR_String TermStr_21;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_80;
          MR_Word Pieces_107;
          MR_Word Spec_108;

          TermStr_21 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, (MR_Integer) 0, Term_10);
          Var_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (TermStr_21));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[31])));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
          }
          Pieces_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_60, Var_61);
          Var_80 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadTerm_14);
          {
            Spec_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_108, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
            MR_hl_field(MR_mktag(1), Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_108, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_108, 3) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Spec_108, 4) = ((MR_Box) (Pieces_107));
          }
          {
            STATE_VARIABLE_Specs_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 0) = ((MR_Box) (Spec_108));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_57_57, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
          STATE_VARIABLE_Assertions_58_58 = STATE_VARIABLE_Assertions_0_22;
        }
        // direct tailcall eliminated
        ;
        next_value_of_Term_10 = TailTerm_15;
        next_value_of_STATE_VARIABLE_Assertions_0_22 = STATE_VARIABLE_Assertions_58_58;
        next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_57_57;
        Term_10 = next_value_of_Term_10;
        STATE_VARIABLE_Assertions_0_22 = next_value_of_STATE_VARIABLE_Assertions_0_22;
        STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
        continue;
      }
      else
      {
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_88;
        MR_Word Var_91;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_105;
        MR_Word Pieces_109;
        MR_Word Spec_110;
        MR_String TermStr_111;

        TermStr_111 = parse_tree__parse_tree_out_term__mercury_term_to_string_vs_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, (MR_Integer) 0, Term_10);
        Var_85 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (TermStr_111));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_pragma_foreign_scalar_common_1[34])));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[32])));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_pragma_foreign_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
        }
        Pieces_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, Var_86);
        Var_105 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_10);
        {
          Spec_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_110, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_pragma_foreign.parse_foreign_type_assertions\'/7"));
          MR_hl_field(MR_mktag(1), Spec_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_110, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_110, 3) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Spec_110, 4) = ((MR_Box) (Pieces_109));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_110));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
        }
        *STATE_VARIABLE_Assertions_23 = STATE_VARIABLE_Assertions_0_22;
      }
    }
    break;
  }
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
