/*
** Automatically generated from `recompilation.version.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module recompilation.version. */
/* :- implementation. */

/*
INIT mercury__recompilation__version__init
ENDINIT
*/

#include "recompilation.version.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
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
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1123 "recompilation.version.m"
struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s {
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12;
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14;
#line 1128 "recompilation.version.m"
  MR_bool recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded;
#line 1142 "recompilation.version.m"
  jmp_buf recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0;
#line 1142 "recompilation.version.m"
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17;
#line 1142 "recompilation.version.m"
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18;
#line 1142 "recompilation.version.m"
  MR_Word recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19;
#line 1144 "recompilation.version.m"
  MR_Box recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18;
#line 1144 "recompilation.version.m"
  MR_Box recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19;
#line 1123 "recompilation.version.m"
};

#line 573 "recompilation.version.m"
struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s {
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8;
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9;
#line 573 "recompilation.version.m"
  MR_Integer recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10;
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32;
#line 580 "recompilation.version.m"
  MR_bool recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded;
#line 582 "recompilation.version.m"
  jmp_buf recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_34_34;
#line 582 "recompilation.version.m"
  MR_Word recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_51_51;
#line 582 "recompilation.version.m"
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_V_34_34;
#line 586 "recompilation.version.m"
  MR_Box recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19;
#line 573 "recompilation.version.m"
};


#line 224 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 227 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 230 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

#line 233 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 236 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 239 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 242 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 245 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 248 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 251 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 254 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 257 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 260 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 263 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 266 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 269 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0;

#line 272 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 275 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 278 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 281 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 284 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

#line 287 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 290 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 293 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 296 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0;

#line 299 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0;

#line 302 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 305 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

#line 308 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 311 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 314 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 317 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct3 recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 320 "recompilation.version.c"
static const MR_VA_TypeInfo_Struct3 recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0;

#line 323 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0;

#line 326 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0;

#line 329 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_item_info_0_0[3];

#line 332 "recompilation.version.c"
static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_item_info_0_0[3];

#line 335 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0;

#line 338 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0[1];

#line 341 "recompilation.version.c"
static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0[1];

#line 344 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0[1];

#line 347 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0[1];

#line 350 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2];

#line 353 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0;

#line 356 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

#line 359 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1];

#line 362 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1;

#line 365 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1];

#line 368 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1];

#line 371 "recompilation.version.c"
static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2];

#line 374 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0[2];

#line 377 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0[2];

#line 380 "recompilation.version.c"
static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0;

#line 383 "recompilation.version.c"
static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1;

#line 386 "recompilation.version.c"
static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0[2];

#line 389 "recompilation.version.c"
static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0[2];

#line 392 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_maybe_changed_0[2];

#line 395 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0_10001(
#line 398 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 400 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 403 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0_10001(
#line 406 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 408 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 410 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 413 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0_10001(
#line 416 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 418 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 421 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0_10001(
#line 424 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 426 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 428 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 431 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0_10001(
#line 434 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 436 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 439 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0_10001(
#line 442 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 444 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 446 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 449 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0_10001(
#line 452 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 454 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 457 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0_10001(
#line 460 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 462 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 464 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 467 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
#line 470 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 472 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 475 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
#line 478 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 480 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 482 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 485 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0_10001(
#line 488 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 490 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 493 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0_10001(
#line 496 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 498 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 500 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 503 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001(
#line 506 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 508 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2);

#line 511 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001(
#line 514 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 516 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 518 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3);

#line 1387 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1387__1_2_p_0(
#line 1387 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_71,
#line 1387 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__2_72);

#line 1370 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1370__1_2_p_0(
#line 1370 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_23,
#line 1370 "recompilation.version.m"
  MR_String * recompilation__version__LambdaHeadVar__2_24);

#line 1073 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1073__1_1_f_0(
#line 1073 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_42);

#line 511 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__511__1_1_f_0(
#line 511 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_33);

#line 446 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__446__1_1_f_0(
#line 446 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_59);

#line 193 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__193__1_5_f_0(
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_6,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceItemMap_8,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceVersionNumbers_9,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_17,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__2_18);

#line 1340 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__parse_version_numbers__1340__1_2_f_0(
#line 1340 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_28,
#line 1340 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__2_29);

#line 1256 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1256__1_2_f_0(
#line 1256 "recompilation.version.m"
  MR_Word recompilation__version__VersionNumbers_6,
#line 1256 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_17,
#line 1256 "recompilation.version.m"
  MR_Word * recompilation__version__LambdaHeadVar__2_18);

#line 610 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0(
#line 610 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 610 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0(
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 721 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0(
#line 721 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 721 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0(
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_1,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 1358 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0(
#line 1358 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 1358 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 237 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0(
#line 237 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 237 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0(
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 241 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0(
#line 241 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 241 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0(
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 242 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0(
#line 242 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 242 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0(
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 229 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0(
#line 229 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3);

#line 229 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0(
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 1427 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_version_number_3_p_0(
#line 1427 "recompilation.version.m"
  MR_Word recompilation__version__ParseName_4,
#line 1427 "recompilation.version.m"
  MR_Word recompilation__version__Term_5,
#line 1427 "recompilation.version.m"
  MR_Word * recompilation__version__Result_6);

#line 1405 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_key_version_number_3_p_0(
#line 1405 "recompilation.version.m"
  MR_Word recompilation__version__ParseName_4,
#line 1405 "recompilation.version.m"
  MR_Word recompilation__version__Term_5,
#line 1405 "recompilation.version.m"
  MR_Word * recompilation__version__Result_6);

#line 1387 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_4(
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1387 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 1387 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_3(
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1387 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 1374 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_2(
#line 1374 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1374 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1374 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 1370 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_1(
#line 1370 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1370 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1370 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 1362 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0(
#line 1362 "recompilation.version.m"
  MR_Word recompilation__version__Term_3,
#line 1362 "recompilation.version.m"
  MR_Word * recompilation__version__Result_4);

#line 1308 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_symname_arity_version_number_3_p_0(
#line 1308 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1);

#line 1296 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_name_arity_version_number_3_p_0(
#line 1296 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1);

#line 1293 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0_1(
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1293 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3);

#line 1283 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0(
#line 1283 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1);

#line 1187 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0_1(
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 1225 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0(
#line 1225 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 1225 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2);

#line 1212 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__class_interface_is_unchanged_2_p_0(
#line 1212 "recompilation.version.m"
  MR_Word recompilation__version__Interface0_3,
#line 1212 "recompilation.version.m"
  MR_Word recompilation__version__Interface_4);

#line 1187 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1(
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 1171 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__InstVarSet1_7,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__Modes1_8,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithInst1_9,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__InstVarSet2_10,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__Modes2_11,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithInst2_12);

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_1(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 1144 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_3(
#line 1144 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_2(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_4(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 1123 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0(
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet1_8,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__Types1_9,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet2_10,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__Types2_11,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__TVarSet_12,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__Renaming_13,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__Types2ToTypes1Subst_14);

#line 1069 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
#line 1069 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1069 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 1061 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet1_11,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__ExistQVars1_12,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TypesAndModes1_13,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithType1_14,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__Constraints1_15,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet2_16,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__ExistQVars2_17,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TypesAndModes2_18,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithType2_19,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__Constraints2_20);

#line 815 "recompilation.version.m"
static void MR_CALL 
recompilation__version__is_item_changed_3_p_0(
#line 815 "recompilation.version.m"
  MR_Word recompilation__version__Item1_4,
#line 815 "recompilation.version.m"
  MR_Word recompilation__version__Item2_5,
#line 815 "recompilation.version.m"
  MR_Word * recompilation__version__Changed_6);

#line 767 "recompilation.version.m"
static void MR_CALL 
recompilation__version__are_items_changed_3_p_0(
#line 767 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 767 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 767 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__3_3);

#line 612 "recompilation.version.m"
static void MR_CALL 
recompilation__version__is_pred_pragma_2_p_0(
#line 612 "recompilation.version.m"
  MR_Word recompilation__version__PragmaType_3,
#line 612 "recompilation.version.m"
  MR_Word * recompilation__version__MaybePredOrFuncId_4);

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_1(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 586 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
#line 586 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_2(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_6(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg);

#line 573 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0(
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__MaybePredOrFunc_8,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__SymName_9,
#line 573 "recompilation.version.m"
  MR_Integer recompilation__version__Arity_10,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__Item_11,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__Section_12,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_ClassItems_0_32,
#line 573 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_ClassItems_33);

#line 568 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0_1(
#line 568 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 568 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 568 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 539 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0(
#line 539 "recompilation.version.m"
  MR_Tuple recompilation__version__HeadVar__1_1,
#line 539 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_0_15,
#line 539 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_GatheredItems_16);

#line 511 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0_1(
#line 511 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 511 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 488 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
#line 488 "recompilation.version.m"
  MR_Word recompilation__version__Method0_3);

#line 471 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_2(
#line 471 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 471 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 446 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_1(
#line 446 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 446 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1);

#line 422 "recompilation.version.m"
static void MR_CALL 
recompilation__version__add_gathered_item_5_p_0(
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__Item_6,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__ItemId_7,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__Section_8,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_0_56,
#line 422 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_GatheredItems_57);

#line 253 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_in_item_4_p_0(
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__Section_5,
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__Item_6,
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_Info_0_114,
#line 253 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_Info_115);

#line 245 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_in_section_4_p_0(
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_Info_0_3,
#line 245 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_Info_4);

#line 224 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_items_4_p_0_1(
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 224 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3);

#line 209 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_items_4_p_0(
#line 209 "recompilation.version.m"
  MR_Word recompilation__version__IntItems_5,
#line 209 "recompilation.version.m"
  MR_Word recompilation__version__ImpItems_6,
#line 209 "recompilation.version.m"
  MR_Word * recompilation__version__GatheredItems_7,
#line 209 "recompilation.version.m"
  MR_Word * recompilation__version__Instances_8);

#line 191 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0_1(
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2);

#line 184 "recompilation.version.m"
static void MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0(
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_6,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__CurInstanceItemMap_7,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceItemMap_8,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceVersionNumbers_9,
#line 184 "recompilation.version.m"
  MR_Word * recompilation__version__NewInstanceVersionNumbers_10);

#line 157 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_3_6_f_0(
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_8,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__OldGatheredItems_9,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__OldItemVersionNumbers_10,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__ItemType_11,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__NameArity_12,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__CurItems_13);

#line 153 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0_1(
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2);

#line 145 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0(
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_7,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__OldGatheredItems_8,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__OldItemVersionNumbers_9,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__ItemType_10,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__CurGatheredItems_11);

#line 1340 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_2(
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2);

#line 1334 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_1(
#line 1334 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1334 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1334 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 1278 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_3(
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1278 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3);

#line 1265 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_2(
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1265 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3);

#line 1256 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__write_version_numbers_3_p_0_1(
#line 1256 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1256 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1256 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2);

#line 141 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_2(
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2);

#line 224 "recompilation.version.m"
static void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_1(
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 224 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3);


static /* final */ const MR_Box recompilation__version_scalar_common_1[23][3];

static /* final */ const MR_Box recompilation__version_scalar_common_2[38][2];

static /* final */ const MR_Box recompilation__version_scalar_common_3[7][5];

static /* final */ const MR_Box recompilation__version_scalar_common_4[5][4];

static /* final */ const MR_Box recompilation__version_scalar_common_5[9][6];

static /* final */ const MR_Box recompilation__version_scalar_common_6[2][9];

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10];

static /* final */ const MR_Box recompilation__version_scalar_common_8[3][1];




static /* final */ const MR_Box recompilation__version_scalar_common_1[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&recompilation__version_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__version_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__version_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__version_scalar_common_2[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[0])),
    ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[2])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[3])),
    ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[1])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[4])),
    ((MR_Box) (recompilation__version__parse_version_numbers_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[0])),
    ((MR_Box) (recompilation__version__gather_items_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[2])),
    ((MR_Box) (recompilation__version__add_gathered_item_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[3])),
    ((MR_Box) (recompilation__version__add_gathered_item_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[2])),
    ((MR_Box) (recompilation__version__split_class_method_types_and_modes_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[4])),
    ((MR_Box) (recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[6])),
    ((MR_Box) (recompilation__version__write_item_type_and_versions_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[5])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_3[6])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_2[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&recompilation__version_scalar_common_3[0]))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[5]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[3]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_warning_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[24]))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[26]))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__version_scalar_common_2[2]))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid item type version numbers."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error in item version number."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__version_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[31])))
  },
  /* row 36 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_8[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_3[7][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_4[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__version_scalar_common_1[3])),
    ((MR_Box) (&recompilation__version_scalar_common_1[3])),
    ((MR_Box) (&recompilation__version_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[5])),
    ((MR_Box) (recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[5])),
    ((MR_Box) (recompilation__version__class_methods_are_unchanged_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[7])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[21]))
  },
  /* row 4 */
  {
    ((MR_Box) (&recompilation__version_scalar_common_5[8])),
    ((MR_Box) (recompilation__version__parse_item_type_version_numbers_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&recompilation__version_scalar_common_1[22]))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_5[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_7[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box recompilation__version_scalar_common_8[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[33])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[35])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1882 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 1890 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__version__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 1899 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__version____vpti_tuple_3__plain_pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0__plain_parse_tree__prog_item__type_ctor_info_item_0__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

#line 1910 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1919 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1928 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1936 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1945 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1955 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1964 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__version__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1974 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1983 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 1992 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_type_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2001 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2010 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2018 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_recompilation__version__type_ctor_info_item_version_numbers_result_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0
  }
};

#line 2026 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2035 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2043 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2052 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2061 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 2069 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__maybe__pti_maybe_1__plain_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 2077 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2085 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__version__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2094 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2102 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2112 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2121 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2129 "recompilation.version.c"
static const MR_VA_PseudoTypeInfo_Struct2 recompilation__version____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &recompilation__version__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2139 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2148 "recompilation.version.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__version__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2156 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct3 recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2166 "recompilation.version.c"
static const MR_VA_TypeInfo_Struct3 recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

#line 2177 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct1 recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &recompilation__version____vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0
  }
};

#line 2185 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &recompilation__version__list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2194 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_gathered_item_info_0_0[3] = {
  (MR_PseudoTypeInfo) &recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0,
  (MR_PseudoTypeInfo) &recompilation__version__cord__ti_cord_1__vti_tuple_3pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0parse_tree__prog_item__type_ctor_info_item_0parse_tree__prog_item__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0
};

#line 2201 "recompilation.version.c"
static const MR_ConstString recompilation__version__recompilation__version__field_names_gathered_item_info_0_0[3] = {
  (MR_String) "gii_gathered_items",
  (MR_String) "gii_pragma_items",
  (MR_String) "gii_instances"
};

#line 2208 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0 = {
  (MR_String) "gathered_item_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__version__recompilation__version__field_types_gathered_item_info_0_0,
  recompilation__version__recompilation__version__field_names_gathered_item_info_0_0,
  NULL,
  NULL
};

#line 2223 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0
};

#line 2228 "recompilation.version.c"
static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_gathered_item_info_0_0
  }
};

#line 2237 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_gathered_item_info_0_0
};

#line 2242 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0[1] = {
  (MR_Integer) 0
};

#line 2247 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____gathered_item_info_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_info_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_info",
  {     recompilation__version__recompilation__version__du_name_ordered_gathered_item_info_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_gathered_item_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_gathered_item_info_0
};

#line 2264 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_item_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2281 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_gathered_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____gathered_items_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____gathered_items_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "gathered_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2298 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_instance_item_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____instance_item_map_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____instance_item_map_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "instance_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0list__ti_list_1pair__ti_pair_2parse_tree__prog_item__type_ctor_info_module_section_0parse_tree__prog_item__type_ctor_info_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2315 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 2321 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0 = {
  (MR_String) "items",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 2336 "recompilation.version.c"
static const MR_FA_TypeInfo_Struct2 recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 2345 "recompilation.version.c"
static const MR_PseudoTypeInfo recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1[1] = {
  (MR_PseudoTypeInfo) &recompilation__version__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

#line 2350 "recompilation.version.c"
static const MR_DuFunctorDesc recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1 = {
  (MR_String) "instances",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recompilation__version__recompilation__version__field_types_item_version_numbers_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 2365 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0
};

#line 2370 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1[1] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1
};

#line 2375 "recompilation.version.c"
static const MR_DuPtagLayout recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__version__recompilation__version__du_stag_ordered_item_version_numbers_result_0_1
  }
};

#line 2389 "recompilation.version.c"
static const MR_DuFunctorDescPtr recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0[2] = {
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_1,
  &recompilation__version__recompilation__version__du_functor_desc_item_version_numbers_result_0_0
};

#line 2395 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2401 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__version____Unify____item_version_numbers_result_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____item_version_numbers_result_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "item_version_numbers_result",
  {     recompilation__version__recompilation__version__du_name_ordered_item_version_numbers_result_0 },
  {     recompilation__version__recompilation__version__du_ptag_ordered_item_version_numbers_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_item_version_numbers_result_0
};

#line 2418 "recompilation.version.c"
static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0 = {
  (MR_String) "unchanged",
  (MR_Integer) 0
};

#line 2424 "recompilation.version.c"
static const MR_EnumFunctorDesc recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1 = {
  (MR_String) "changed",
  (MR_Integer) 1
};

#line 2430 "recompilation.version.c"
static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0[2] = {
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0,
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1
};

#line 2436 "recompilation.version.c"
static const MR_EnumFunctorDescPtr recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0[2] = {
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_1,
  &recompilation__version__recompilation__version__enum_functor_desc_maybe_changed_0_0
};

#line 2442 "recompilation.version.c"
static const MR_Integer recompilation__version__recompilation__version__functor_number_map_maybe_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2448 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_changed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation__version____Unify____maybe_changed_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_changed_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_changed",
  {     recompilation__version__recompilation__version__enum_name_ordered_maybe_changed_0 },
  {     recompilation__version__recompilation__version__enum_value_ordered_maybe_changed_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recompilation__version__recompilation__version__functor_number_map_maybe_changed_0
};

#line 2465 "recompilation.version.c"
const MR_TypeCtorInfo_Struct recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001)),
  ((MR_Box) (recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001)),
  (MR_String) "recompilation.version",
  (MR_String) "maybe_pred_or_func_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__version__pair__ti_pair_2maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2482 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0_10001(
#line 2485 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2487 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2489 "recompilation.version.c"
{
#line 2491 "recompilation.version.c"
  {
#line 2493 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2496 "recompilation.version.c"
    {
#line 2498 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____gathered_item_info_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2501 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2503 "recompilation.version.c"
  }
#line 2505 "recompilation.version.c"
}

#line 2508 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0_10001(
#line 2511 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2513 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2515 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2517 "recompilation.version.c"
{
#line 2519 "recompilation.version.c"
  {
#line 2521 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2524 "recompilation.version.c"
    {
#line 2526 "recompilation.version.c"
      recompilation__version____Compare____gathered_item_info_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2529 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2531 "recompilation.version.c"
  }
#line 2533 "recompilation.version.c"
}

#line 2536 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0_10001(
#line 2539 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2541 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2543 "recompilation.version.c"
{
#line 2545 "recompilation.version.c"
  {
#line 2547 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2550 "recompilation.version.c"
    {
#line 2552 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____gathered_item_map_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2555 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2557 "recompilation.version.c"
  }
#line 2559 "recompilation.version.c"
}

#line 2562 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0_10001(
#line 2565 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2567 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2569 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2571 "recompilation.version.c"
{
#line 2573 "recompilation.version.c"
  {
#line 2575 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2578 "recompilation.version.c"
    {
#line 2580 "recompilation.version.c"
      recompilation__version____Compare____gathered_item_map_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2583 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2585 "recompilation.version.c"
  }
#line 2587 "recompilation.version.c"
}

#line 2590 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0_10001(
#line 2593 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2595 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2597 "recompilation.version.c"
{
#line 2599 "recompilation.version.c"
  {
#line 2601 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2604 "recompilation.version.c"
    {
#line 2606 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____gathered_items_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2609 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2611 "recompilation.version.c"
  }
#line 2613 "recompilation.version.c"
}

#line 2616 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0_10001(
#line 2619 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2621 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2623 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2625 "recompilation.version.c"
{
#line 2627 "recompilation.version.c"
  {
#line 2629 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2632 "recompilation.version.c"
    {
#line 2634 "recompilation.version.c"
      recompilation__version____Compare____gathered_items_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2637 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2639 "recompilation.version.c"
  }
#line 2641 "recompilation.version.c"
}

#line 2644 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0_10001(
#line 2647 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2649 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2651 "recompilation.version.c"
{
#line 2653 "recompilation.version.c"
  {
#line 2655 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2658 "recompilation.version.c"
    {
#line 2660 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____instance_item_map_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2663 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2665 "recompilation.version.c"
  }
#line 2667 "recompilation.version.c"
}

#line 2670 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0_10001(
#line 2673 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2675 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2677 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2679 "recompilation.version.c"
{
#line 2681 "recompilation.version.c"
  {
#line 2683 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2686 "recompilation.version.c"
    {
#line 2688 "recompilation.version.c"
      recompilation__version____Compare____instance_item_map_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2691 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2693 "recompilation.version.c"
  }
#line 2695 "recompilation.version.c"
}

#line 2698 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0_10001(
#line 2701 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2703 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2705 "recompilation.version.c"
{
#line 2707 "recompilation.version.c"
  {
#line 2709 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2712 "recompilation.version.c"
    {
#line 2714 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____item_version_numbers_result_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2717 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2719 "recompilation.version.c"
  }
#line 2721 "recompilation.version.c"
}

#line 2724 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0_10001(
#line 2727 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2729 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2731 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2733 "recompilation.version.c"
{
#line 2735 "recompilation.version.c"
  {
#line 2737 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2740 "recompilation.version.c"
    {
#line 2742 "recompilation.version.c"
      recompilation__version____Compare____item_version_numbers_result_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2745 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2747 "recompilation.version.c"
  }
#line 2749 "recompilation.version.c"
}

#line 2752 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0_10001(
#line 2755 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2757 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2759 "recompilation.version.c"
{
#line 2761 "recompilation.version.c"
  {
#line 2763 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2766 "recompilation.version.c"
    {
#line 2768 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____maybe_changed_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2771 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2773 "recompilation.version.c"
  }
#line 2775 "recompilation.version.c"
}

#line 2778 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0_10001(
#line 2781 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2783 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2785 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2787 "recompilation.version.c"
{
#line 2789 "recompilation.version.c"
  {
#line 2791 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2794 "recompilation.version.c"
    {
#line 2796 "recompilation.version.c"
      recompilation__version____Compare____maybe_changed_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2799 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2801 "recompilation.version.c"
  }
#line 2803 "recompilation.version.c"
}

#line 2806 "recompilation.version.c"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0_10001(
#line 2809 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_1,
#line 2811 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2)
#line 2813 "recompilation.version.c"
{
#line 2815 "recompilation.version.c"
  {
#line 2817 "recompilation.version.c"
    MR_bool recompilation__version__succeeded;

#line 2820 "recompilation.version.c"
    {
#line 2822 "recompilation.version.c"
      recompilation__version__succeeded = recompilation__version____Unify____maybe_pred_or_func_id_0_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 2825 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 2827 "recompilation.version.c"
  }
#line 2829 "recompilation.version.c"
}

#line 2832 "recompilation.version.c"
static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0_10001(
#line 2835 "recompilation.version.c"
  MR_Box * recompilation__version__wrapper_arg_1,
#line 2837 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_2,
#line 2839 "recompilation.version.c"
  MR_Box recompilation__version__wrapper_arg_3)
#line 2841 "recompilation.version.c"
{
#line 2843 "recompilation.version.c"
  {
#line 2845 "recompilation.version.c"
    MR_Word recompilation__version__conv0_HeadVar__1_1;

#line 2848 "recompilation.version.c"
    {
#line 2850 "recompilation.version.c"
      recompilation__version____Compare____maybe_pred_or_func_id_0_0(&recompilation__version__conv0_HeadVar__1_1, ((MR_Word) recompilation__version__wrapper_arg_2), ((MR_Word) recompilation__version__wrapper_arg_3));
    }
#line 2853 "recompilation.version.c"
    *recompilation__version__wrapper_arg_1 = ((MR_Box) (recompilation__version__conv0_HeadVar__1_1));
#line 2855 "recompilation.version.c"
  }
#line 2857 "recompilation.version.c"
}

#line 1387 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1387__1_2_p_0(
#line 1387 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_71,
#line 1387 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__2_72)
#line 1387 "recompilation.version.m"
{
#line 1387 "recompilation.version.m"
  {
#line 1387 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 1387 "recompilation.version.m"
    {
#line 1387 "recompilation.version.m"
      recompilation__version__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, recompilation__version__HeadVar__1_71, recompilation__version__HeadVar__2_72);
    }
#line 1387 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1387 "recompilation.version.m"
  }
#line 1387 "recompilation.version.m"
}

#line 1370 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1370__1_2_p_0(
#line 1370 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_23,
#line 1370 "recompilation.version.m"
  MR_String * recompilation__version__LambdaHeadVar__2_24)
#line 1370 "recompilation.version.m"
{
#line 1370 "recompilation.version.m"
  {
#line 1370 "recompilation.version.m"
    MR_bool recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__LambdaHeadVar__1_23)) == (MR_mktag((MR_Integer) 0)));
#line 1370 "recompilation.version.m"
    MR_Word recompilation__version__V_25_25;
#line 1370 "recompilation.version.m"
    MR_Word recompilation__version__V_26_26;
#line 1372 "recompilation.version.m"
    MR_Word recompilation__version__V_12_12;

#line 1372 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1372 "recompilation.version.m"
      {
#line 1372 "recompilation.version.m"
        recompilation__version__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_23, (MR_Integer) 0)));
#line 1372 "recompilation.version.m"
        recompilation__version__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_23, (MR_Integer) 1)));
#line 1372 "recompilation.version.m"
        recompilation__version__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_23, (MR_Integer) 2)));
#line 1372 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1372 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1372 "recompilation.version.m"
          {
#line 1372 "recompilation.version.m"
            *recompilation__version__LambdaHeadVar__2_24 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_25_25, (MR_Integer) 0)));
#line 1372 "recompilation.version.m"
            recompilation__version__succeeded = (recompilation__version__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1372 "recompilation.version.m"
          }
#line 1372 "recompilation.version.m"
      }
#line 1370 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1370 "recompilation.version.m"
  }
#line 1370 "recompilation.version.m"
}

#line 1073 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1073__1_1_f_0(
#line 1073 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_42)
#line 1073 "recompilation.version.m"
{
#line 1073 "recompilation.version.m"
  {
#line 1073 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1073 "recompilation.version.m"
    MR_Word recompilation__version__LambdaHeadVar__2_43;

#line 1073 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__LambdaHeadVar__1_42)) == (MR_mktag((MR_Integer) 1))))
#line 1076 "recompilation.version.m"
      {
#line 1077 "recompilation.version.m"
        {
#line 1077 "recompilation.version.m"
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "type_and_mode");
        }
#line 1076 "recompilation.version.m"
      }
#line 1073 "recompilation.version.m"
    else
#line 1072 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_42, (MR_Integer) 0)));
#line 1073 "recompilation.version.m"
    return recompilation__version__LambdaHeadVar__2_43;
#line 1073 "recompilation.version.m"
  }
#line 1073 "recompilation.version.m"
}

#line 511 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__511__1_1_f_0(
#line 511 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_33)
#line 511 "recompilation.version.m"
{
#line 511 "recompilation.version.m"
  {
#line 511 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 511 "recompilation.version.m"
    MR_Word recompilation__version__LambdaHeadVar__2_34;

#line 511 "recompilation.version.m"
    {
#line 511 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__2_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__2_34, 0) = ((MR_Box) (recompilation__version__LambdaHeadVar__1_33));
#line 511 "recompilation.version.m"
    }
#line 511 "recompilation.version.m"
    return recompilation__version__LambdaHeadVar__2_34;
#line 511 "recompilation.version.m"
  }
#line 511 "recompilation.version.m"
}

#line 446 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__add_gathered_item__446__1_1_f_0(
#line 446 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_59)
#line 446 "recompilation.version.m"
{
#line 446 "recompilation.version.m"
  {
#line 446 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 446 "recompilation.version.m"
    MR_Word recompilation__version__LambdaHeadVar__2_60;

#line 446 "recompilation.version.m"
    {
#line 446 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__2_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__2_60, 0) = ((MR_Box) (recompilation__version__LambdaHeadVar__1_59));
#line 446 "recompilation.version.m"
    }
#line 446 "recompilation.version.m"
    return recompilation__version__LambdaHeadVar__2_60;
#line 446 "recompilation.version.m"
  }
#line 446 "recompilation.version.m"
}

#line 193 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__193__1_5_f_0(
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_6,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceItemMap_8,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceVersionNumbers_9,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_17,
#line 193 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__2_18)
#line 193 "recompilation.version.m"
{
#line 193 "recompilation.version.m"
  {
#line 193 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 193 "recompilation.version.m"
    MR_Word recompilation__version__LambdaHeadVar__3_19;
#line 193 "recompilation.version.m"
    MR_Word recompilation__version__OldInstanceVersionNumber_15;
#line 194 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_26_26 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0;
#line 194 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_28_28;
#line 194 "recompilation.version.m"
    MR_Word recompilation__version__OldItems_14;
#line 194 "recompilation.version.m"
    MR_Word recompilation__version__V_20_20;
#line 194 "recompilation.version.m"
    MR_Word recompilation__version__V_29_29;
#line 194 "recompilation.version.m"
    MR_Box recompilation__version__conv0_OldItems_14;
#line 196 "recompilation.version.m"
    MR_Box recompilation__version__conv1_OldInstanceVersionNumber_15;

#line 194 "recompilation.version.m"
    {
#line 194 "recompilation.version.m"
      recompilation__version__succeeded = mercury__map__search_3_p_0(recompilation__version__TypeCtorInfo_26_26, (MR_Word) &recompilation__version_scalar_common_2[0], recompilation__version__OldInstanceItemMap_8, ((MR_Box) (recompilation__version__LambdaHeadVar__1_17)), &recompilation__version__conv0_OldItems_14);
    }
#line 194 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 194 "recompilation.version.m"
      {
#line 194 "recompilation.version.m"
        recompilation__version__OldItems_14 = ((MR_Word) recompilation__version__conv0_OldItems_14);
#line 194 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 194 "recompilation.version.m"
      }
#line 194 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 194 "recompilation.version.m"
      {
#line 195 "recompilation.version.m"
        recompilation__version__V_20_20 = (MR_Integer) 0;
#line 195 "recompilation.version.m"
        {
#line 195 "recompilation.version.m"
          recompilation__version__are_items_changed_3_p_0(recompilation__version__OldItems_14, recompilation__version__LambdaHeadVar__2_18, &recompilation__version__V_29_29);
        }
#line 195 "recompilation.version.m"
        recompilation__version__succeeded = (recompilation__version__V_20_20 == recompilation__version__V_29_29);
#line 194 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 194 "recompilation.version.m"
          {
#line 3101 "recompilation.version.c"
            recompilation__version__TypeCtorInfo_28_28 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 196 "recompilation.version.m"
            {
#line 196 "recompilation.version.m"
              recompilation__version__succeeded = mercury__map__search_3_p_0(recompilation__version__TypeCtorInfo_26_26, recompilation__version__TypeCtorInfo_28_28, recompilation__version__OldInstanceVersionNumbers_9, ((MR_Box) (recompilation__version__LambdaHeadVar__1_17)), &recompilation__version__conv1_OldInstanceVersionNumber_15);
            }
#line 196 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 196 "recompilation.version.m"
              {
#line 196 "recompilation.version.m"
                recompilation__version__OldInstanceVersionNumber_15 = ((MR_Word) recompilation__version__conv1_OldInstanceVersionNumber_15);
#line 196 "recompilation.version.m"
                recompilation__version__succeeded = MR_TRUE;
#line 196 "recompilation.version.m"
              }
#line 194 "recompilation.version.m"
          }
#line 194 "recompilation.version.m"
      }
#line 193 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 199 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__3_19 = recompilation__version__OldInstanceVersionNumber_15;
#line 193 "recompilation.version.m"
    else
#line 201 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__3_19 = recompilation__version__SourceFileTime_6;
#line 193 "recompilation.version.m"
    return recompilation__version__LambdaHeadVar__3_19;
#line 193 "recompilation.version.m"
  }
#line 193 "recompilation.version.m"
}

#line 1340 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__IntroducedFrom__func__parse_version_numbers__1340__1_2_f_0(
#line 1340 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_28,
#line 1340 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__2_29)
#line 1340 "recompilation.version.m"
{
#line 1340 "recompilation.version.m"
  {
#line 1340 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__LambdaHeadVar__3_30;
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__VNs_15;
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__Instances_16;
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__VNs0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__2_29, (MR_Integer) 0)));
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__Instances0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__2_29, (MR_Integer) 1)));

#line 1347 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__LambdaHeadVar__1_28)) == (MR_mktag((MR_Integer) 1))))
#line 1348 "recompilation.version.m"
      {
#line 1348 "recompilation.version.m"
        recompilation__version__Instances_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__LambdaHeadVar__1_28, (MR_Integer) 0)));
#line 1349 "recompilation.version.m"
        recompilation__version__VNs_15 = recompilation__version__VNs0_32;
#line 1348 "recompilation.version.m"
      }
#line 1347 "recompilation.version.m"
    else
#line 1344 "recompilation.version.m"
      {
#line 1344 "recompilation.version.m"
        MR_Word recompilation__version__ItemType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_28, (MR_Integer) 0)));
#line 1344 "recompilation.version.m"
        MR_Word recompilation__version__ItemVNs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__1_28, (MR_Integer) 1)));

#line 1345 "recompilation.version.m"
        {
#line 1345 "recompilation.version.m"
          recompilation__update_ids_4_p_0((MR_Word) &recompilation__version_scalar_common_1[1], recompilation__version__ItemType_17, ((MR_Box) (recompilation__version__ItemVNs_18)), recompilation__version__VNs0_32, &recompilation__version__VNs_15);
        }
#line 1346 "recompilation.version.m"
        recompilation__version__Instances_16 = recompilation__version__Instances0_33;
#line 1344 "recompilation.version.m"
      }
#line 1342 "recompilation.version.m"
    {
#line 1342 "recompilation.version.m"
      recompilation__version__LambdaHeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__3_30, 0) = ((MR_Box) (recompilation__version__VNs_15));
#line 1342 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__LambdaHeadVar__3_30, 1) = ((MR_Box) (recompilation__version__Instances_16));
#line 1342 "recompilation.version.m"
    }
#line 1340 "recompilation.version.m"
    return recompilation__version__LambdaHeadVar__3_30;
#line 1340 "recompilation.version.m"
  }
#line 1340 "recompilation.version.m"
}

#line 1256 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__IntroducedFrom__func__write_version_numbers__1256__1_2_f_0(
#line 1256 "recompilation.version.m"
  MR_Word recompilation__version__VersionNumbers_6,
#line 1256 "recompilation.version.m"
  MR_Word recompilation__version__LambdaHeadVar__1_17,
#line 1256 "recompilation.version.m"
  MR_Word * recompilation__version__LambdaHeadVar__2_18)
#line 1256 "recompilation.version.m"
{
#line 1256 "recompilation.version.m"
  {
#line 1256 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1256 "recompilation.version.m"
    MR_Word recompilation__version__ItemVersions_10;
#line 1258 "recompilation.version.m"
    MR_Box recompilation__version__conv0_ItemVersions_10;

#line 1258 "recompilation.version.m"
    {
#line 1258 "recompilation.version.m"
      recompilation__version__conv0_ItemVersions_10 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[1], recompilation__version__VersionNumbers_6, recompilation__version__LambdaHeadVar__1_17);
    }
#line 1258 "recompilation.version.m"
    recompilation__version__ItemVersions_10 = ((MR_Word) recompilation__version__conv0_ItemVersions_10);
#line 1259 "recompilation.version.m"
    {
#line 1259 "recompilation.version.m"
      recompilation__version__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__ItemVersions_10);
    }
#line 1259 "recompilation.version.m"
    recompilation__version__succeeded = !(recompilation__version__succeeded);
#line 1256 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1256 "recompilation.version.m"
      {
#line 1257 "recompilation.version.m"
        {
#line 1257 "recompilation.version.m"
          MR_Word base;
#line 1257 "recompilation.version.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "recompilation.version.m"
          *recompilation__version__LambdaHeadVar__2_18 = base;
#line 1257 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__LambdaHeadVar__1_17));
#line 1257 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__ItemVersions_10));
#line 1257 "recompilation.version.m"
        }
#line 1257 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 1256 "recompilation.version.m"
      }
#line 1256 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1256 "recompilation.version.m"
  }
#line 1256 "recompilation.version.m"
}

#line 610 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____maybe_pred_or_func_id_0_0(
#line 610 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 610 "recompilation.version.m"
{
#line 610 "recompilation.version.m"
  {
#line 610 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 610 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_4 = recompilation__version__HeadVar__2_2;
#line 610 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_5 = recompilation__version__HeadVar__3_3;

#line 610 "recompilation.version.m"
    {
#line 610 "recompilation.version.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[6], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__Cast_HeadVar1_4)), ((MR_Box) (recompilation__version__Cast_HeadVar2_5)));
    }
#line 610 "recompilation.version.m"
  }
#line 610 "recompilation.version.m"
}

#line 610 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_pred_or_func_id_0_0(
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 610 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 610 "recompilation.version.m"
{
#line 610 "recompilation.version.m"
  {
#line 610 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 610 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_3 = recompilation__version__HeadVar__1_1;
#line 610 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_4 = recompilation__version__HeadVar__2_2;

#line 610 "recompilation.version.m"
    {
#line 610 "recompilation.version.m"
      recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[6], ((MR_Box) (recompilation__version__Cast_HeadVar1_3)), ((MR_Box) (recompilation__version__Cast_HeadVar2_4)));
    }
#line 610 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 610 "recompilation.version.m"
  }
#line 610 "recompilation.version.m"
}

#line 721 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____maybe_changed_0_0(
#line 721 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 721 "recompilation.version.m"
{
#line 721 "recompilation.version.m"
  {
#line 721 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 721 "recompilation.version.m"
    MR_Integer recompilation__version__Cast_HeadVar1_4 = (MR_Integer) recompilation__version__HeadVar__2_2;
#line 721 "recompilation.version.m"
    MR_Integer recompilation__version__Cast_HeadVar2_5 = (MR_Integer) recompilation__version__HeadVar__3_3;

#line 721 "recompilation.version.m"
    {
#line 721 "recompilation.version.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__version__HeadVar__1_1, recompilation__version__Cast_HeadVar1_4, recompilation__version__Cast_HeadVar2_5);
    }
#line 721 "recompilation.version.m"
  }
#line 721 "recompilation.version.m"
}

#line 721 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____maybe_changed_0_0(
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_1,
#line 721 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 721 "recompilation.version.m"
{
#line 3368 "recompilation.version.c"
  {
#line 3370 "recompilation.version.c"
    MR_bool recompilation__version__succeeded = (recompilation__version__HeadVar__2_1 == recompilation__version__HeadVar__2_2);

#line 3373 "recompilation.version.c"
    return recompilation__version__succeeded;
#line 3375 "recompilation.version.c"
  }
#line 721 "recompilation.version.m"
}

#line 1358 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____item_version_numbers_result_0_0(
#line 1358 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 1358 "recompilation.version.m"
{
#line 1358 "recompilation.version.m"
  {
#line 1358 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1358 "recompilation.version.m"
    MR_Integer recompilation__version__CastX_17 = (MR_Integer) recompilation__version__HeadVar__2_2;
#line 1358 "recompilation.version.m"
    MR_Integer recompilation__version__CastY_18 = (MR_Integer) recompilation__version__HeadVar__3_3;

#line 1358 "recompilation.version.m"
    recompilation__version__succeeded = (recompilation__version__CastX_17 == recompilation__version__CastY_18);
#line 1358 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 3404 "recompilation.version.c"
      *recompilation__version__HeadVar__1_1 = (MR_Integer) 0;
#line 1358 "recompilation.version.m"
    else
#line 1358 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1358 "recompilation.version.m"
      {
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));

#line 1358 "recompilation.version.m"
        if (((MR_tag((MR_Word) recompilation__version__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1358 "recompilation.version.m"
          {
#line 1358 "recompilation.version.m"
            MR_Word recompilation__version__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__3_3, (MR_Integer) 0)));

#line 1358 "recompilation.version.m"
            {
#line 1358 "recompilation.version.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[9], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__V_22_22)), ((MR_Box) (recompilation__version__V_16_16)));
            }
#line 1358 "recompilation.version.m"
          }
#line 1358 "recompilation.version.m"
        else
#line 3431 "recompilation.version.c"
          *recompilation__version__HeadVar__1_1 = (MR_Integer) 2;
#line 1358 "recompilation.version.m"
      }
#line 1358 "recompilation.version.m"
    else
#line 1358 "recompilation.version.m"
      {
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));

#line 1358 "recompilation.version.m"
        if (((MR_tag((MR_Word) recompilation__version__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3446 "recompilation.version.c"
          *recompilation__version__HeadVar__1_1 = (MR_Integer) 1;
#line 1358 "recompilation.version.m"
        else
#line 1358 "recompilation.version.m"
          {
#line 1358 "recompilation.version.m"
            MR_Word recompilation__version__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__3_3, (MR_Integer) 0)));
#line 1358 "recompilation.version.m"
            MR_Word recompilation__version__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__3_3, (MR_Integer) 1)));
#line 1358 "recompilation.version.m"
            MR_Word recompilation__version__V_8_8;
#line 1358 "recompilation.version.m"
            MR_Integer recompilation__version__V_25_25 = (MR_Integer) recompilation__version__V_24_24;
#line 1358 "recompilation.version.m"
            MR_Integer recompilation__version__V_26_26 = (MR_Integer) recompilation__version__V_6_6;

#line 1358 "recompilation.version.m"
            {
#line 1358 "recompilation.version.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__version__V_8_8, recompilation__version__V_25_25, recompilation__version__V_26_26);
            }
#line 3468 "recompilation.version.c"
            recompilation__version__succeeded = (recompilation__version__V_8_8 == (MR_Integer) 0);
#line 1358 "recompilation.version.m"
            recompilation__version__succeeded = !(recompilation__version__succeeded);
#line 1358 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1358 "recompilation.version.m"
              *recompilation__version__HeadVar__1_1 = recompilation__version__V_8_8;
#line 1358 "recompilation.version.m"
            else
#line 1358 "recompilation.version.m"
              {
#line 1358 "recompilation.version.m"
                {
#line 1358 "recompilation.version.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[1], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__V_23_23)), ((MR_Box) (recompilation__version__V_7_7)));
                }
#line 1358 "recompilation.version.m"
              }
#line 1358 "recompilation.version.m"
          }
#line 1358 "recompilation.version.m"
      }
#line 1358 "recompilation.version.m"
  }
#line 1358 "recompilation.version.m"
}

#line 1358 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____item_version_numbers_result_0_0(
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 1358 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 1358 "recompilation.version.m"
{
#line 1358 "recompilation.version.m"
  {
#line 1358 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1358 "recompilation.version.m"
    MR_Integer recompilation__version__CastX_9 = (MR_Integer) recompilation__version__HeadVar__1_1;
#line 1358 "recompilation.version.m"
    MR_Integer recompilation__version__CastY_10 = (MR_Integer) recompilation__version__HeadVar__2_2;

#line 1358 "recompilation.version.m"
    recompilation__version__succeeded = (recompilation__version__CastX_9 == recompilation__version__CastY_10);
#line 1358 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1358 "recompilation.version.m"
      recompilation__version__succeeded = MR_TRUE;
#line 1358 "recompilation.version.m"
    else
#line 1358 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1358 "recompilation.version.m"
      {
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_11_11;
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_8_8;

#line 1358 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1358 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1358 "recompilation.version.m"
          {
#line 1358 "recompilation.version.m"
            recompilation__version__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 3541 "recompilation.version.c"
            recompilation__version__TypeInfo_11_11 = (MR_Word) &recompilation__version_scalar_common_1[9];
#line 3543 "recompilation.version.c"
            {
#line 3545 "recompilation.version.c"
              recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_11_11, ((MR_Box) (recompilation__version__V_7_7)), ((MR_Box) (recompilation__version__V_8_8)));
            }
#line 1358 "recompilation.version.m"
          }
#line 1358 "recompilation.version.m"
      }
#line 1358 "recompilation.version.m"
    else
#line 1358 "recompilation.version.m"
      {
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_12_12;
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_5_5;
#line 1358 "recompilation.version.m"
        MR_Word recompilation__version__V_6_6;

#line 1358 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1358 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1358 "recompilation.version.m"
          {
#line 1358 "recompilation.version.m"
            recompilation__version__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 1358 "recompilation.version.m"
            recompilation__version__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 3577 "recompilation.version.c"
            recompilation__version__succeeded = (recompilation__version__V_3_3 == recompilation__version__V_5_5);
#line 1358 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1358 "recompilation.version.m"
              {
#line 3583 "recompilation.version.c"
                recompilation__version__TypeInfo_12_12 = (MR_Word) &recompilation__version_scalar_common_1[1];
#line 3585 "recompilation.version.c"
                {
#line 3587 "recompilation.version.c"
                  recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_12_12, ((MR_Box) (recompilation__version__V_4_4)), ((MR_Box) (recompilation__version__V_6_6)));
                }
#line 1358 "recompilation.version.m"
              }
#line 1358 "recompilation.version.m"
          }
#line 1358 "recompilation.version.m"
      }
#line 1358 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1358 "recompilation.version.m"
  }
#line 1358 "recompilation.version.m"
}

#line 237 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____instance_item_map_0_0(
#line 237 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 237 "recompilation.version.m"
{
#line 237 "recompilation.version.m"
  {
#line 237 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 237 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_4 = recompilation__version__HeadVar__2_2;
#line 237 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_5 = recompilation__version__HeadVar__3_3;

#line 237 "recompilation.version.m"
    {
#line 237 "recompilation.version.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[8], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__Cast_HeadVar1_4)), ((MR_Box) (recompilation__version__Cast_HeadVar2_5)));
    }
#line 237 "recompilation.version.m"
  }
#line 237 "recompilation.version.m"
}

#line 237 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____instance_item_map_0_0(
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 237 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 237 "recompilation.version.m"
{
#line 237 "recompilation.version.m"
  {
#line 237 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 237 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_3 = recompilation__version__HeadVar__1_1;
#line 237 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_4 = recompilation__version__HeadVar__2_2;

#line 237 "recompilation.version.m"
    {
#line 237 "recompilation.version.m"
      recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[8], ((MR_Box) (recompilation__version__Cast_HeadVar1_3)), ((MR_Box) (recompilation__version__Cast_HeadVar2_4)));
    }
#line 237 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 237 "recompilation.version.m"
  }
#line 237 "recompilation.version.m"
}

#line 241 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_items_0_0(
#line 241 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 241 "recompilation.version.m"
{
#line 241 "recompilation.version.m"
  {
#line 241 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 241 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_4 = recompilation__version__HeadVar__2_2;
#line 241 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_5 = recompilation__version__HeadVar__3_3;

#line 241 "recompilation.version.m"
    {
#line 241 "recompilation.version.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_4[0], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__Cast_HeadVar1_4)), ((MR_Box) (recompilation__version__Cast_HeadVar2_5)));
    }
#line 241 "recompilation.version.m"
  }
#line 241 "recompilation.version.m"
}

#line 241 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_items_0_0(
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 241 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 241 "recompilation.version.m"
{
#line 241 "recompilation.version.m"
  {
#line 241 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 241 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_3 = recompilation__version__HeadVar__1_1;
#line 241 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_4 = recompilation__version__HeadVar__2_2;

#line 241 "recompilation.version.m"
    {
#line 241 "recompilation.version.m"
      recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_4[0], ((MR_Box) (recompilation__version__Cast_HeadVar1_3)), ((MR_Box) (recompilation__version__Cast_HeadVar2_4)));
    }
#line 241 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 241 "recompilation.version.m"
  }
#line 241 "recompilation.version.m"
}

#line 242 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_item_map_0_0(
#line 242 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 242 "recompilation.version.m"
{
#line 242 "recompilation.version.m"
  {
#line 242 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 242 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_4 = recompilation__version__HeadVar__2_2;
#line 242 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_5 = recompilation__version__HeadVar__3_3;

#line 242 "recompilation.version.m"
    {
#line 242 "recompilation.version.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[3], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__Cast_HeadVar1_4)), ((MR_Box) (recompilation__version__Cast_HeadVar2_5)));
    }
#line 242 "recompilation.version.m"
  }
#line 242 "recompilation.version.m"
}

#line 242 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_map_0_0(
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 242 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 242 "recompilation.version.m"
{
#line 242 "recompilation.version.m"
  {
#line 242 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 242 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar1_3 = recompilation__version__HeadVar__1_1;
#line 242 "recompilation.version.m"
    MR_Word recompilation__version__Cast_HeadVar2_4 = recompilation__version__HeadVar__2_2;

#line 242 "recompilation.version.m"
    {
#line 242 "recompilation.version.m"
      recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (recompilation__version__Cast_HeadVar1_3)), ((MR_Box) (recompilation__version__Cast_HeadVar2_4)));
    }
#line 242 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 242 "recompilation.version.m"
  }
#line 242 "recompilation.version.m"
}

#line 229 "recompilation.version.m"
static void MR_CALL 
recompilation__version____Compare____gathered_item_info_0_0(
#line 229 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__1_1,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__3_3)
#line 229 "recompilation.version.m"
{
#line 229 "recompilation.version.m"
  {
#line 229 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 229 "recompilation.version.m"
    MR_Integer recompilation__version__CastX_12 = (MR_Integer) recompilation__version__HeadVar__2_2;
#line 229 "recompilation.version.m"
    MR_Integer recompilation__version__CastY_13 = (MR_Integer) recompilation__version__HeadVar__3_3;

#line 229 "recompilation.version.m"
    recompilation__version__succeeded = (recompilation__version__CastX_12 == recompilation__version__CastY_13);
#line 229 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 3807 "recompilation.version.c"
      *recompilation__version__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "recompilation.version.m"
    else
#line 229 "recompilation.version.m"
      {
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_10_10;

#line 229 "recompilation.version.m"
        {
#line 229 "recompilation.version.m"
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_4[0], &recompilation__version__V_10_10, ((MR_Box) (recompilation__version__V_4_4)), ((MR_Box) (recompilation__version__V_7_7)));
        }
#line 3833 "recompilation.version.c"
        recompilation__version__succeeded = (recompilation__version__V_10_10 == (MR_Integer) 0);
#line 229 "recompilation.version.m"
        recompilation__version__succeeded = !(recompilation__version__succeeded);
#line 229 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 229 "recompilation.version.m"
          *recompilation__version__HeadVar__1_1 = recompilation__version__V_10_10;
#line 229 "recompilation.version.m"
        else
#line 229 "recompilation.version.m"
          {
#line 229 "recompilation.version.m"
            MR_Word recompilation__version__V_11_11;

#line 229 "recompilation.version.m"
            {
#line 229 "recompilation.version.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_2[6], &recompilation__version__V_11_11, ((MR_Box) (recompilation__version__V_5_5)), ((MR_Box) (recompilation__version__V_8_8)));
            }
#line 3853 "recompilation.version.c"
            recompilation__version__succeeded = (recompilation__version__V_11_11 == (MR_Integer) 0);
#line 229 "recompilation.version.m"
            recompilation__version__succeeded = !(recompilation__version__succeeded);
#line 229 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 229 "recompilation.version.m"
              *recompilation__version__HeadVar__1_1 = recompilation__version__V_11_11;
#line 229 "recompilation.version.m"
            else
#line 229 "recompilation.version.m"
              {
#line 229 "recompilation.version.m"
                {
#line 229 "recompilation.version.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__version_scalar_common_1[8], recompilation__version__HeadVar__1_1, ((MR_Box) (recompilation__version__V_6_6)), ((MR_Box) (recompilation__version__V_9_9)));
                }
#line 229 "recompilation.version.m"
              }
#line 229 "recompilation.version.m"
          }
#line 229 "recompilation.version.m"
      }
#line 229 "recompilation.version.m"
  }
#line 229 "recompilation.version.m"
}

#line 229 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version____Unify____gathered_item_info_0_0(
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 229 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 229 "recompilation.version.m"
{
#line 229 "recompilation.version.m"
  {
#line 229 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 229 "recompilation.version.m"
    MR_Integer recompilation__version__CastX_9 = (MR_Integer) recompilation__version__HeadVar__1_1;
#line 229 "recompilation.version.m"
    MR_Integer recompilation__version__CastY_10 = (MR_Integer) recompilation__version__HeadVar__2_2;

#line 229 "recompilation.version.m"
    recompilation__version__succeeded = (recompilation__version__CastX_9 == recompilation__version__CastY_10);
#line 229 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 229 "recompilation.version.m"
      recompilation__version__succeeded = MR_TRUE;
#line 229 "recompilation.version.m"
    else
#line 229 "recompilation.version.m"
      {
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_12_12;
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_13_13;
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "recompilation.version.m"
        MR_Word recompilation__version__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__2_2, (MR_Integer) 2)));

#line 3926 "recompilation.version.c"
        {
#line 3928 "recompilation.version.c"
          recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_4[0], ((MR_Box) (recompilation__version__V_3_3)), ((MR_Box) (recompilation__version__V_6_6)));
        }
#line 229 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 229 "recompilation.version.m"
          {
#line 3935 "recompilation.version.c"
            recompilation__version__TypeInfo_12_12 = (MR_Word) &recompilation__version_scalar_common_2[6];
#line 3937 "recompilation.version.c"
            {
#line 3939 "recompilation.version.c"
              recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_12_12, ((MR_Box) (recompilation__version__V_4_4)), ((MR_Box) (recompilation__version__V_7_7)));
            }
#line 229 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 229 "recompilation.version.m"
              {
#line 3946 "recompilation.version.c"
                recompilation__version__TypeInfo_13_13 = (MR_Word) &recompilation__version_scalar_common_1[8];
#line 3948 "recompilation.version.c"
                {
#line 3950 "recompilation.version.c"
                  recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_13_13, ((MR_Box) (recompilation__version__V_5_5)), ((MR_Box) (recompilation__version__V_8_8)));
                }
#line 229 "recompilation.version.m"
              }
#line 229 "recompilation.version.m"
          }
#line 229 "recompilation.version.m"
      }
#line 229 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 229 "recompilation.version.m"
  }
#line 229 "recompilation.version.m"
}

#line 1427 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_version_number_3_p_0(
#line 1427 "recompilation.version.m"
  MR_Word recompilation__version__ParseName_4,
#line 1427 "recompilation.version.m"
  MR_Word recompilation__version__Term_5,
#line 1427 "recompilation.version.m"
  MR_Word * recompilation__version__Result_6)
#line 1427 "recompilation.version.m"
{
#line 1432 "recompilation.version.m"
  {
#line 1432 "recompilation.version.m"
    MR_bool recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1432 "recompilation.version.m"
    MR_Word recompilation__version__SymName_13;
#line 1432 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_14;
#line 1432 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumber_17;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_49_49;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__ItemNameArityTerm_7;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumberTerm_8;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__NameTerm_10;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__ArityTerm_11;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_20_20;
#line 1434 "recompilation.version.m"
    MR_String recompilation__version__V_21_21;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_22_22;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_23_23;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_24_24;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_25_25;
#line 1434 "recompilation.version.m"
    MR_String recompilation__version__V_26_26;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_27_27;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_28_28;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_29_29;
#line 1434 "recompilation.version.m"
    MR_Word recompilation__version__V_30_30;
#line 1433 "recompilation.version.m"
    MR_Word recompilation__version__V_9_9;
#line 1435 "recompilation.version.m"
    MR_Word recompilation__version__V_12_12;
#line 1437 "recompilation.version.m"
    MR_bool MR_CALL (* recompilation__version__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1437 "recompilation.version.m"
    MR_Box recompilation__version__conv1_SymName_13;
#line 1438 "recompilation.version.m"
    MR_Word recompilation__version__V_15_15;
#line 1438 "recompilation.version.m"
    MR_Word recompilation__version__V_16_16;

#line 1433 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1433 "recompilation.version.m"
      {
#line 1433 "recompilation.version.m"
        recompilation__version__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 0)));
#line 1433 "recompilation.version.m"
        recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 1)));
#line 1433 "recompilation.version.m"
        recompilation__version__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 2)));
#line 1433 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1433 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1433 "recompilation.version.m"
          {
#line 1433 "recompilation.version.m"
            recompilation__version__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_20_20, (MR_Integer) 0)));
#line 1433 "recompilation.version.m"
            recompilation__version__succeeded = (strcmp(recompilation__version__V_21_21, (MR_String) "-") == 0);
#line 1434 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
              {
#line 1434 "recompilation.version.m"
                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1434 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                  {
#line 1434 "recompilation.version.m"
                    recompilation__version__ItemNameArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_22_22, (MR_Integer) 0)));
#line 1434 "recompilation.version.m"
                    recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_22_22, (MR_Integer) 1)));
#line 1434 "recompilation.version.m"
                    recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 1434 "recompilation.version.m"
                    if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                      {
#line 1434 "recompilation.version.m"
                        recompilation__version__VersionNumberTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_23_23, (MR_Integer) 0)));
#line 1434 "recompilation.version.m"
                        recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_23_23, (MR_Integer) 1)));
#line 1434 "recompilation.version.m"
                        recompilation__version__succeeded = (recompilation__version__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "recompilation.version.m"
                        if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                          {
#line 1435 "recompilation.version.m"
                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__ItemNameArityTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1435 "recompilation.version.m"
                            if (recompilation__version__succeeded)
#line 1435 "recompilation.version.m"
                              {
#line 1435 "recompilation.version.m"
                                recompilation__version__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 0)));
#line 1435 "recompilation.version.m"
                                recompilation__version__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 1)));
#line 1435 "recompilation.version.m"
                                recompilation__version__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 2)));
#line 1435 "recompilation.version.m"
                                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1435 "recompilation.version.m"
                                if (recompilation__version__succeeded)
#line 1435 "recompilation.version.m"
                                  {
#line 1435 "recompilation.version.m"
                                    recompilation__version__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_25_25, (MR_Integer) 0)));
#line 1435 "recompilation.version.m"
                                    recompilation__version__succeeded = (strcmp(recompilation__version__V_26_26, (MR_String) "/") == 0);
#line 1434 "recompilation.version.m"
                                    if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                                      {
#line 1436 "recompilation.version.m"
                                        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "recompilation.version.m"
                                        if (recompilation__version__succeeded)
#line 1436 "recompilation.version.m"
                                          {
#line 1436 "recompilation.version.m"
                                            recompilation__version__NameTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_27_27, (MR_Integer) 0)));
#line 1436 "recompilation.version.m"
                                            recompilation__version__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_27_27, (MR_Integer) 1)));
#line 1436 "recompilation.version.m"
                                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "recompilation.version.m"
                                            if (recompilation__version__succeeded)
#line 1436 "recompilation.version.m"
                                              {
#line 1436 "recompilation.version.m"
                                                recompilation__version__ArityTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_28_28, (MR_Integer) 0)));
#line 1436 "recompilation.version.m"
                                                recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_28_28, (MR_Integer) 1)));
#line 1436 "recompilation.version.m"
                                                recompilation__version__succeeded = (recompilation__version__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "recompilation.version.m"
                                                if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                                                  {
#line 1437 "recompilation.version.m"
                                                    recompilation__version__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), recompilation__version__ParseName_4, (MR_Integer) 1)));
#line 1437 "recompilation.version.m"
                                                    {
#line 1437 "recompilation.version.m"
                                                      recompilation__version__succeeded = recompilation__version__func_0(((MR_Box) recompilation__version__ParseName_4), ((MR_Box) (recompilation__version__NameTerm_10)), &recompilation__version__conv1_SymName_13);
                                                    }
#line 1437 "recompilation.version.m"
                                                    if (recompilation__version__succeeded)
#line 1437 "recompilation.version.m"
                                                      {
#line 1437 "recompilation.version.m"
                                                        recompilation__version__SymName_13 = ((MR_Word) recompilation__version__conv1_SymName_13);
#line 1437 "recompilation.version.m"
                                                        recompilation__version__succeeded = MR_TRUE;
#line 1437 "recompilation.version.m"
                                                      }
#line 1434 "recompilation.version.m"
                                                    if (recompilation__version__succeeded)
#line 1434 "recompilation.version.m"
                                                      {
#line 1438 "recompilation.version.m"
                                                        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__ArityTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 1438 "recompilation.version.m"
                                                        if (recompilation__version__succeeded)
#line 1438 "recompilation.version.m"
                                                          {
#line 1438 "recompilation.version.m"
                                                            recompilation__version__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 0)));
#line 1438 "recompilation.version.m"
                                                            recompilation__version__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 1)));
#line 1438 "recompilation.version.m"
                                                            recompilation__version__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 2)));
#line 1438 "recompilation.version.m"
                                                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1438 "recompilation.version.m"
                                                            if (recompilation__version__succeeded)
#line 1438 "recompilation.version.m"
                                                              {
#line 1438 "recompilation.version.m"
                                                                recompilation__version__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recompilation__version__V_30_30, (MR_Integer) 0)));
#line 4175 "recompilation.version.c"
                                                                recompilation__version__TypeCtorInfo_49_49 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1439 "recompilation.version.m"
                                                                {
#line 1439 "recompilation.version.m"
                                                                  recompilation__version__succeeded = recompilation__term_to_version_number_1_f_0(recompilation__version__TypeCtorInfo_49_49, recompilation__version__VersionNumberTerm_8, &recompilation__version__VersionNumber_17);
                                                                }
#line 1438 "recompilation.version.m"
                                                              }
#line 1438 "recompilation.version.m"
                                                          }
#line 1434 "recompilation.version.m"
                                                      }
#line 1434 "recompilation.version.m"
                                                  }
#line 1436 "recompilation.version.m"
                                              }
#line 1436 "recompilation.version.m"
                                          }
#line 1434 "recompilation.version.m"
                                      }
#line 1435 "recompilation.version.m"
                                  }
#line 1435 "recompilation.version.m"
                              }
#line 1434 "recompilation.version.m"
                          }
#line 1434 "recompilation.version.m"
                      }
#line 1434 "recompilation.version.m"
                  }
#line 1434 "recompilation.version.m"
              }
#line 1433 "recompilation.version.m"
          }
#line 1433 "recompilation.version.m"
      }
#line 1432 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1441 "recompilation.version.m"
      {
#line 1441 "recompilation.version.m"
        MR_Word recompilation__version__V_31_31;
#line 1441 "recompilation.version.m"
        MR_Word recompilation__version__V_32_32;

#line 1441 "recompilation.version.m"
        {
#line 1441 "recompilation.version.m"
          recompilation__version__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_32_32, 0) = ((MR_Box) (recompilation__version__SymName_13));
#line 1441 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_32_32, 1) = ((MR_Box) (recompilation__version__Arity_14));
#line 1441 "recompilation.version.m"
        }
#line 1441 "recompilation.version.m"
        {
#line 1441 "recompilation.version.m"
          recompilation__version__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_31_31, 0) = ((MR_Box) (recompilation__version__V_32_32));
#line 1441 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_31_31, 1) = ((MR_Box) (recompilation__version__VersionNumber_17));
#line 1441 "recompilation.version.m"
        }
#line 1441 "recompilation.version.m"
        {
#line 1441 "recompilation.version.m"
          MR_Word base;
#line 1441 "recompilation.version.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "recompilation.version.m"
          *recompilation__version__Result_6 = base;
#line 1441 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_31_31));
#line 1441 "recompilation.version.m"
        }
#line 1441 "recompilation.version.m"
      }
#line 1432 "recompilation.version.m"
    else
#line 1443 "recompilation.version.m"
      {
#line 1443 "recompilation.version.m"
        MR_Word recompilation__version__Spec_19;
#line 1443 "recompilation.version.m"
        MR_Word recompilation__version__V_40_40;
#line 1443 "recompilation.version.m"
        MR_Word recompilation__version__V_41_41;
#line 1443 "recompilation.version.m"
        MR_Word recompilation__version__V_42_42;
#line 1443 "recompilation.version.m"
        MR_Word recompilation__version__V_47_47;

#line 1445 "recompilation.version.m"
        {
#line 1445 "recompilation.version.m"
          recompilation__version__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, recompilation__version__Term_5);
        }
#line 1445 "recompilation.version.m"
        {
#line 1445 "recompilation.version.m"
          recompilation__version__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_41_41, 0) = ((MR_Box) (recompilation__version__V_42_42));
#line 1445 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[37])));
#line 1445 "recompilation.version.m"
        }
#line 1445 "recompilation.version.m"
        {
#line 1445 "recompilation.version.m"
          recompilation__version__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_40_40, 0) = ((MR_Box) (recompilation__version__V_41_41));
#line 1445 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "recompilation.version.m"
        }
#line 1444 "recompilation.version.m"
        {
#line 1444 "recompilation.version.m"
          recompilation__version__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1444 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1444 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 2) = ((MR_Box) (recompilation__version__V_40_40));
#line 1444 "recompilation.version.m"
        }
#line 1446 "recompilation.version.m"
        {
#line 1446 "recompilation.version.m"
          recompilation__version__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_47_47, 0) = ((MR_Box) (recompilation__version__Spec_19));
#line 1446 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "recompilation.version.m"
        }
#line 1446 "recompilation.version.m"
        {
#line 1446 "recompilation.version.m"
          MR_Word base;
#line 1446 "recompilation.version.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "recompilation.version.m"
          *recompilation__version__Result_6 = base;
#line 1446 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__V_47_47));
#line 1446 "recompilation.version.m"
        }
#line 1443 "recompilation.version.m"
      }
#line 1432 "recompilation.version.m"
  }
#line 1427 "recompilation.version.m"
}

#line 1405 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_key_version_number_3_p_0(
#line 1405 "recompilation.version.m"
  MR_Word recompilation__version__ParseName_4,
#line 1405 "recompilation.version.m"
  MR_Word recompilation__version__Term_5,
#line 1405 "recompilation.version.m"
  MR_Word * recompilation__version__Result_6)
#line 1405 "recompilation.version.m"
{
#line 1410 "recompilation.version.m"
  {
#line 1410 "recompilation.version.m"
    MR_bool recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1410 "recompilation.version.m"
    MR_String recompilation__version__Name_13;
#line 1410 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_14;
#line 1410 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumber_17;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_49_49;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__ItemNameArityTerm_7;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumberTerm_8;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__NameTerm_10;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__ArityTerm_11;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_20_20;
#line 1412 "recompilation.version.m"
    MR_String recompilation__version__V_21_21;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_22_22;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_23_23;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_24_24;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_25_25;
#line 1412 "recompilation.version.m"
    MR_String recompilation__version__V_26_26;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_27_27;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_28_28;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_29_29;
#line 1412 "recompilation.version.m"
    MR_Word recompilation__version__V_30_30;
#line 1411 "recompilation.version.m"
    MR_Word recompilation__version__V_9_9;
#line 1413 "recompilation.version.m"
    MR_Word recompilation__version__V_12_12;
#line 1415 "recompilation.version.m"
    MR_bool MR_CALL (* recompilation__version__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1415 "recompilation.version.m"
    MR_Box recompilation__version__conv1_Name_13;
#line 1416 "recompilation.version.m"
    MR_Word recompilation__version__V_15_15;
#line 1416 "recompilation.version.m"
    MR_Word recompilation__version__V_16_16;

#line 1411 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1411 "recompilation.version.m"
      {
#line 1411 "recompilation.version.m"
        recompilation__version__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 0)));
#line 1411 "recompilation.version.m"
        recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 1)));
#line 1411 "recompilation.version.m"
        recompilation__version__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_5, (MR_Integer) 2)));
#line 1411 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1411 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1411 "recompilation.version.m"
          {
#line 1411 "recompilation.version.m"
            recompilation__version__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_20_20, (MR_Integer) 0)));
#line 1411 "recompilation.version.m"
            recompilation__version__succeeded = (strcmp(recompilation__version__V_21_21, (MR_String) "-") == 0);
#line 1412 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
              {
#line 1412 "recompilation.version.m"
                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1412 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                  {
#line 1412 "recompilation.version.m"
                    recompilation__version__ItemNameArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_22_22, (MR_Integer) 0)));
#line 1412 "recompilation.version.m"
                    recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_22_22, (MR_Integer) 1)));
#line 1412 "recompilation.version.m"
                    recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 1412 "recompilation.version.m"
                    if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                      {
#line 1412 "recompilation.version.m"
                        recompilation__version__VersionNumberTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_23_23, (MR_Integer) 0)));
#line 1412 "recompilation.version.m"
                        recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_23_23, (MR_Integer) 1)));
#line 1412 "recompilation.version.m"
                        recompilation__version__succeeded = (recompilation__version__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "recompilation.version.m"
                        if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                          {
#line 1413 "recompilation.version.m"
                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__ItemNameArityTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1413 "recompilation.version.m"
                            if (recompilation__version__succeeded)
#line 1413 "recompilation.version.m"
                              {
#line 1413 "recompilation.version.m"
                                recompilation__version__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 0)));
#line 1413 "recompilation.version.m"
                                recompilation__version__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 1)));
#line 1413 "recompilation.version.m"
                                recompilation__version__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNameArityTerm_7, (MR_Integer) 2)));
#line 1413 "recompilation.version.m"
                                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 1413 "recompilation.version.m"
                                if (recompilation__version__succeeded)
#line 1413 "recompilation.version.m"
                                  {
#line 1413 "recompilation.version.m"
                                    recompilation__version__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_25_25, (MR_Integer) 0)));
#line 1413 "recompilation.version.m"
                                    recompilation__version__succeeded = (strcmp(recompilation__version__V_26_26, (MR_String) "/") == 0);
#line 1412 "recompilation.version.m"
                                    if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                                      {
#line 1414 "recompilation.version.m"
                                        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1414 "recompilation.version.m"
                                        if (recompilation__version__succeeded)
#line 1414 "recompilation.version.m"
                                          {
#line 1414 "recompilation.version.m"
                                            recompilation__version__NameTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_27_27, (MR_Integer) 0)));
#line 1414 "recompilation.version.m"
                                            recompilation__version__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_27_27, (MR_Integer) 1)));
#line 1414 "recompilation.version.m"
                                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1414 "recompilation.version.m"
                                            if (recompilation__version__succeeded)
#line 1414 "recompilation.version.m"
                                              {
#line 1414 "recompilation.version.m"
                                                recompilation__version__ArityTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_28_28, (MR_Integer) 0)));
#line 1414 "recompilation.version.m"
                                                recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_28_28, (MR_Integer) 1)));
#line 1414 "recompilation.version.m"
                                                recompilation__version__succeeded = (recompilation__version__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "recompilation.version.m"
                                                if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                                                  {
#line 1415 "recompilation.version.m"
                                                    recompilation__version__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), recompilation__version__ParseName_4, (MR_Integer) 1)));
#line 1415 "recompilation.version.m"
                                                    {
#line 1415 "recompilation.version.m"
                                                      recompilation__version__succeeded = recompilation__version__func_0(((MR_Box) recompilation__version__ParseName_4), ((MR_Box) (recompilation__version__NameTerm_10)), &recompilation__version__conv1_Name_13);
                                                    }
#line 1415 "recompilation.version.m"
                                                    if (recompilation__version__succeeded)
#line 1415 "recompilation.version.m"
                                                      {
#line 1415 "recompilation.version.m"
                                                        recompilation__version__Name_13 = ((MR_String) recompilation__version__conv1_Name_13);
#line 1415 "recompilation.version.m"
                                                        recompilation__version__succeeded = MR_TRUE;
#line 1415 "recompilation.version.m"
                                                      }
#line 1412 "recompilation.version.m"
                                                    if (recompilation__version__succeeded)
#line 1412 "recompilation.version.m"
                                                      {
#line 1416 "recompilation.version.m"
                                                        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__ArityTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 1416 "recompilation.version.m"
                                                        if (recompilation__version__succeeded)
#line 1416 "recompilation.version.m"
                                                          {
#line 1416 "recompilation.version.m"
                                                            recompilation__version__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 0)));
#line 1416 "recompilation.version.m"
                                                            recompilation__version__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 1)));
#line 1416 "recompilation.version.m"
                                                            recompilation__version__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ArityTerm_11, (MR_Integer) 2)));
#line 1416 "recompilation.version.m"
                                                            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1416 "recompilation.version.m"
                                                            if (recompilation__version__succeeded)
#line 1416 "recompilation.version.m"
                                                              {
#line 1416 "recompilation.version.m"
                                                                recompilation__version__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recompilation__version__V_30_30, (MR_Integer) 0)));
#line 4545 "recompilation.version.c"
                                                                recompilation__version__TypeCtorInfo_49_49 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1417 "recompilation.version.m"
                                                                {
#line 1417 "recompilation.version.m"
                                                                  recompilation__version__succeeded = recompilation__term_to_version_number_1_f_0(recompilation__version__TypeCtorInfo_49_49, recompilation__version__VersionNumberTerm_8, &recompilation__version__VersionNumber_17);
                                                                }
#line 1416 "recompilation.version.m"
                                                              }
#line 1416 "recompilation.version.m"
                                                          }
#line 1412 "recompilation.version.m"
                                                      }
#line 1412 "recompilation.version.m"
                                                  }
#line 1414 "recompilation.version.m"
                                              }
#line 1414 "recompilation.version.m"
                                          }
#line 1412 "recompilation.version.m"
                                      }
#line 1413 "recompilation.version.m"
                                  }
#line 1413 "recompilation.version.m"
                              }
#line 1412 "recompilation.version.m"
                          }
#line 1412 "recompilation.version.m"
                      }
#line 1412 "recompilation.version.m"
                  }
#line 1412 "recompilation.version.m"
              }
#line 1411 "recompilation.version.m"
          }
#line 1411 "recompilation.version.m"
      }
#line 1410 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1419 "recompilation.version.m"
      {
#line 1419 "recompilation.version.m"
        MR_Word recompilation__version__V_31_31;
#line 1419 "recompilation.version.m"
        MR_Word recompilation__version__V_32_32;

#line 1419 "recompilation.version.m"
        {
#line 1419 "recompilation.version.m"
          recompilation__version__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_32_32, 0) = ((MR_Box) (recompilation__version__Name_13));
#line 1419 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_32_32, 1) = ((MR_Box) (recompilation__version__Arity_14));
#line 1419 "recompilation.version.m"
        }
#line 1419 "recompilation.version.m"
        {
#line 1419 "recompilation.version.m"
          recompilation__version__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_31_31, 0) = ((MR_Box) (recompilation__version__V_32_32));
#line 1419 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_31_31, 1) = ((MR_Box) (recompilation__version__VersionNumber_17));
#line 1419 "recompilation.version.m"
        }
#line 1419 "recompilation.version.m"
        {
#line 1419 "recompilation.version.m"
          MR_Word base;
#line 1419 "recompilation.version.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "recompilation.version.m"
          *recompilation__version__Result_6 = base;
#line 1419 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_31_31));
#line 1419 "recompilation.version.m"
        }
#line 1419 "recompilation.version.m"
      }
#line 1410 "recompilation.version.m"
    else
#line 1421 "recompilation.version.m"
      {
#line 1421 "recompilation.version.m"
        MR_Word recompilation__version__Spec_19;
#line 1421 "recompilation.version.m"
        MR_Word recompilation__version__V_40_40;
#line 1421 "recompilation.version.m"
        MR_Word recompilation__version__V_41_41;
#line 1421 "recompilation.version.m"
        MR_Word recompilation__version__V_42_42;
#line 1421 "recompilation.version.m"
        MR_Word recompilation__version__V_47_47;

#line 1423 "recompilation.version.m"
        {
#line 1423 "recompilation.version.m"
          recompilation__version__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, recompilation__version__Term_5);
        }
#line 1423 "recompilation.version.m"
        {
#line 1423 "recompilation.version.m"
          recompilation__version__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_41_41, 0) = ((MR_Box) (recompilation__version__V_42_42));
#line 1423 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[37])));
#line 1423 "recompilation.version.m"
        }
#line 1423 "recompilation.version.m"
        {
#line 1423 "recompilation.version.m"
          recompilation__version__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_40_40, 0) = ((MR_Box) (recompilation__version__V_41_41));
#line 1423 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1423 "recompilation.version.m"
        }
#line 1422 "recompilation.version.m"
        {
#line 1422 "recompilation.version.m"
          recompilation__version__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1422 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1422 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__Spec_19, 2) = ((MR_Box) (recompilation__version__V_40_40));
#line 1422 "recompilation.version.m"
        }
#line 1424 "recompilation.version.m"
        {
#line 1424 "recompilation.version.m"
          recompilation__version__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_47_47, 0) = ((MR_Box) (recompilation__version__Spec_19));
#line 1424 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1424 "recompilation.version.m"
        }
#line 1424 "recompilation.version.m"
        {
#line 1424 "recompilation.version.m"
          MR_Word base;
#line 1424 "recompilation.version.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1424 "recompilation.version.m"
          *recompilation__version__Result_6 = base;
#line 1424 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__V_47_47));
#line 1424 "recompilation.version.m"
        }
#line 1421 "recompilation.version.m"
      }
#line 1410 "recompilation.version.m"
  }
#line 1405 "recompilation.version.m"
}

#line 1387 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_4(
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1387 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1387 "recompilation.version.m"
{
#line 1387 "recompilation.version.m"
  {
#line 1387 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1387 "recompilation.version.m"
    MR_Word recompilation__version__conv3_Result_6;

#line 1387 "recompilation.version.m"
    {
#line 1387 "recompilation.version.m"
      recompilation__version__parse_item_version_number_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv3_Result_6);
    }
#line 1387 "recompilation.version.m"
    *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv3_Result_6));
#line 1387 "recompilation.version.m"
  }
#line 1387 "recompilation.version.m"
}

#line 1387 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_3(
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1387 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1387 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1387 "recompilation.version.m"
{
#line 1387 "recompilation.version.m"
  {
#line 1387 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1387 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1387 "recompilation.version.m"
    MR_Word recompilation__version__conv2_HeadVar__2_72;

#line 1387 "recompilation.version.m"
    {
#line 1387 "recompilation.version.m"
      recompilation__version__succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1387__1_2_p_0(((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv2_HeadVar__2_72);
    }
#line 1387 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1387 "recompilation.version.m"
      {
#line 1387 "recompilation.version.m"
        *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv2_HeadVar__2_72));
#line 1387 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 1387 "recompilation.version.m"
      }
#line 1387 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1387 "recompilation.version.m"
  }
#line 1387 "recompilation.version.m"
}

#line 1374 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_2(
#line 1374 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1374 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1374 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1374 "recompilation.version.m"
{
#line 1374 "recompilation.version.m"
  {
#line 1374 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1374 "recompilation.version.m"
    MR_Word recompilation__version__conv1_Result_6;

#line 1374 "recompilation.version.m"
    {
#line 1374 "recompilation.version.m"
      recompilation__version__parse_key_version_number_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv1_Result_6);
    }
#line 1374 "recompilation.version.m"
    *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv1_Result_6));
#line 1374 "recompilation.version.m"
  }
#line 1374 "recompilation.version.m"
}

#line 1370 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0_1(
#line 1370 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1370 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1370 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1370 "recompilation.version.m"
{
#line 1370 "recompilation.version.m"
  {
#line 1370 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1370 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1370 "recompilation.version.m"
    MR_String recompilation__version__conv0_LambdaHeadVar__2_24;

#line 1370 "recompilation.version.m"
    {
#line 1370 "recompilation.version.m"
      recompilation__version__succeeded = recompilation__version__IntroducedFrom__pred__parse_item_type_version_numbers__1370__1_2_p_0(((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv0_LambdaHeadVar__2_24);
    }
#line 1370 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1370 "recompilation.version.m"
      {
#line 1370 "recompilation.version.m"
        *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__2_24));
#line 1370 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 1370 "recompilation.version.m"
      }
#line 1370 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1370 "recompilation.version.m"
  }
#line 1370 "recompilation.version.m"
}

#line 1362 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_item_type_version_numbers_2_p_0(
#line 1362 "recompilation.version.m"
  MR_Word recompilation__version__Term_3,
#line 1362 "recompilation.version.m"
  MR_Word * recompilation__version__Result_4)
#line 1362 "recompilation.version.m"
{
#line 1366 "recompilation.version.m"
  {
#line 1366 "recompilation.version.m"
    MR_bool recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1366 "recompilation.version.m"
    MR_Word recompilation__version__ItemsVNsTerms_6;
#line 1366 "recompilation.version.m"
    MR_Word recompilation__version__ItemType_8;
#line 1367 "recompilation.version.m"
    MR_String recompilation__version__ItemTypeStr_5;
#line 1367 "recompilation.version.m"
    MR_Word recompilation__version__V_22_22;
#line 1367 "recompilation.version.m"
    MR_Word recompilation__version__V_7_7;

#line 1367 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1367 "recompilation.version.m"
      {
#line 1367 "recompilation.version.m"
        recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 0)));
#line 1367 "recompilation.version.m"
        recompilation__version__ItemsVNsTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 1)));
#line 1367 "recompilation.version.m"
        recompilation__version__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 2)));
#line 1367 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 1367 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1367 "recompilation.version.m"
          {
#line 1367 "recompilation.version.m"
            recompilation__version__ItemTypeStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_22_22, (MR_Integer) 0)));
#line 1368 "recompilation.version.m"
            {
#line 1368 "recompilation.version.m"
              recompilation__version__succeeded = recompilation__string_to_item_type_2_p_0(recompilation__version__ItemTypeStr_5, &recompilation__version__ItemType_8);
            }
#line 1367 "recompilation.version.m"
          }
#line 1367 "recompilation.version.m"
      }
#line 1366 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1373 "recompilation.version.m"
      {
#line 1373 "recompilation.version.m"
        MR_Word recompilation__version__Result0_13;

#line 1374 "recompilation.version.m"
        {
#line 1374 "recompilation.version.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &recompilation__version_scalar_common_1[7], (MR_Word) &recompilation__version_scalar_common_4[3], recompilation__version__ItemsVNsTerms_6, &recompilation__version__Result0_13);
        }
#line 1380 "recompilation.version.m"
        if (((MR_tag((MR_Word) recompilation__version__Result0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1382 "recompilation.version.m"
          *recompilation__version__Result_4 = (MR_Word) recompilation__version__Result0_13;
#line 1380 "recompilation.version.m"
        else
#line 1377 "recompilation.version.m"
          {
#line 1377 "recompilation.version.m"
            MR_Word recompilation__version__VNsAL_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Result0_13, (MR_Integer) 0)));
#line 1377 "recompilation.version.m"
            MR_Word recompilation__version__VNsMap_15;
#line 1377 "recompilation.version.m"
            MR_Word recompilation__version__V_28_28;

#line 1378 "recompilation.version.m"
            {
#line 1378 "recompilation.version.m"
              mercury__map__from_assoc_list_2_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__VNsAL_14, &recompilation__version__VNsMap_15);
            }
#line 1379 "recompilation.version.m"
            {
#line 1379 "recompilation.version.m"
              recompilation__version__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_28_28, 0) = ((MR_Box) (recompilation__version__ItemType_8));
#line 1379 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_28_28, 1) = ((MR_Box) (recompilation__version__VNsMap_15));
#line 1379 "recompilation.version.m"
            }
#line 1379 "recompilation.version.m"
            {
#line 1379 "recompilation.version.m"
              MR_Word base;
#line 1379 "recompilation.version.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "recompilation.version.m"
              *recompilation__version__Result_4 = base;
#line 1379 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_28_28));
#line 1379 "recompilation.version.m"
            }
#line 1377 "recompilation.version.m"
          }
#line 1373 "recompilation.version.m"
      }
#line 1366 "recompilation.version.m"
    else
#line 1384 "recompilation.version.m"
      {
#line 1384 "recompilation.version.m"
        MR_Word recompilation__version__InstanceVNsTerms_17;
#line 1385 "recompilation.version.m"
        MR_Word recompilation__version__V_29_29;
#line 1385 "recompilation.version.m"
        MR_String recompilation__version__V_30_30;
#line 1385 "recompilation.version.m"
        MR_Word recompilation__version__V_18_18;

#line 1385 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1385 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1385 "recompilation.version.m"
          {
#line 1385 "recompilation.version.m"
            recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 0)));
#line 1385 "recompilation.version.m"
            recompilation__version__InstanceVNsTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 1)));
#line 1385 "recompilation.version.m"
            recompilation__version__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term_3, (MR_Integer) 2)));
#line 1385 "recompilation.version.m"
            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_29_29)) == (MR_mktag((MR_Integer) 0)));
#line 1385 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1385 "recompilation.version.m"
              {
#line 1385 "recompilation.version.m"
                recompilation__version__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_29_29, (MR_Integer) 0)));
#line 1385 "recompilation.version.m"
                recompilation__version__succeeded = (strcmp(recompilation__version__V_30_30, (MR_String) "instance") == 0);
#line 1385 "recompilation.version.m"
              }
#line 1385 "recompilation.version.m"
          }
#line 1384 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1388 "recompilation.version.m"
          {
#line 1388 "recompilation.version.m"
            MR_Word recompilation__version__Result1_19;

#line 1387 "recompilation.version.m"
            {
#line 1387 "recompilation.version.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &recompilation__version_scalar_common_1[5], (MR_Word) &recompilation__version_scalar_common_4[4], recompilation__version__InstanceVNsTerms_17, &recompilation__version__Result1_19);
            }
#line 1393 "recompilation.version.m"
            if (((MR_tag((MR_Word) recompilation__version__Result1_19)) == (MR_mktag((MR_Integer) 0))))
#line 1395 "recompilation.version.m"
              *recompilation__version__Result_4 = (MR_Word) recompilation__version__Result1_19;
#line 1393 "recompilation.version.m"
            else
#line 1390 "recompilation.version.m"
              {
#line 1390 "recompilation.version.m"
                MR_Word recompilation__version__V_33_33;
#line 1390 "recompilation.version.m"
                MR_Word recompilation__version__VNsAL_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Result1_19, (MR_Integer) 0)));
#line 1390 "recompilation.version.m"
                MR_Word recompilation__version__VNsMap_53;

#line 1391 "recompilation.version.m"
                {
#line 1391 "recompilation.version.m"
                  mercury__map__from_assoc_list_2_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__VNsAL_52, &recompilation__version__VNsMap_53);
                }
#line 1392 "recompilation.version.m"
                {
#line 1392 "recompilation.version.m"
                  recompilation__version__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "recompilation.version.m"
                  MR_hl_field(MR_mktag(1), recompilation__version__V_33_33, 0) = ((MR_Box) (recompilation__version__VNsMap_53));
#line 1392 "recompilation.version.m"
                }
#line 1392 "recompilation.version.m"
                {
#line 1392 "recompilation.version.m"
                  MR_Word base;
#line 1392 "recompilation.version.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "recompilation.version.m"
                  *recompilation__version__Result_4 = base;
#line 1392 "recompilation.version.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_33_33));
#line 1392 "recompilation.version.m"
                }
#line 1390 "recompilation.version.m"
              }
#line 1388 "recompilation.version.m"
          }
#line 1384 "recompilation.version.m"
        else
#line 1399 "recompilation.version.m"
          {
#line 1399 "recompilation.version.m"
            MR_Word recompilation__version__Spec_21;
#line 1399 "recompilation.version.m"
            MR_Word recompilation__version__V_41_41;
#line 1399 "recompilation.version.m"
            MR_Word recompilation__version__V_42_42;
#line 1399 "recompilation.version.m"
            MR_Word recompilation__version__V_43_43;
#line 1399 "recompilation.version.m"
            MR_Word recompilation__version__V_48_48;

#line 1401 "recompilation.version.m"
            {
#line 1401 "recompilation.version.m"
              recompilation__version__V_43_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, recompilation__version__Term_3);
            }
#line 1401 "recompilation.version.m"
            {
#line 1401 "recompilation.version.m"
              recompilation__version__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_42_42, 0) = ((MR_Box) (recompilation__version__V_43_43));
#line 1401 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[36])));
#line 1401 "recompilation.version.m"
            }
#line 1401 "recompilation.version.m"
            {
#line 1401 "recompilation.version.m"
              recompilation__version__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__V_41_41, 0) = ((MR_Box) (recompilation__version__V_42_42));
#line 1401 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "recompilation.version.m"
            }
#line 1400 "recompilation.version.m"
            {
#line 1400 "recompilation.version.m"
              recompilation__version__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1400 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1400 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__Spec_21, 2) = ((MR_Box) (recompilation__version__V_41_41));
#line 1400 "recompilation.version.m"
            }
#line 1402 "recompilation.version.m"
            {
#line 1402 "recompilation.version.m"
              recompilation__version__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__V_48_48, 0) = ((MR_Box) (recompilation__version__Spec_21));
#line 1402 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1402 "recompilation.version.m"
            }
#line 1402 "recompilation.version.m"
            {
#line 1402 "recompilation.version.m"
              MR_Word base;
#line 1402 "recompilation.version.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "recompilation.version.m"
              *recompilation__version__Result_4 = base;
#line 1402 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__V_48_48));
#line 1402 "recompilation.version.m"
            }
#line 1399 "recompilation.version.m"
          }
#line 1384 "recompilation.version.m"
      }
#line 1366 "recompilation.version.m"
  }
#line 1362 "recompilation.version.m"
}

#line 1308 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_symname_arity_version_number_3_p_0(
#line 1308 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1)
#line 1308 "recompilation.version.m"
{
#line 1311 "recompilation.version.m"
  {
#line 1311 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1311 "recompilation.version.m"
    MR_Word recompilation__version__ItemName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1311 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumber_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 1311 "recompilation.version.m"
    MR_Word recompilation__version__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemName_4, (MR_Integer) 0)));
#line 1311 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemName_4, (MR_Integer) 1)));

#line 1313 "recompilation.version.m"
    {
#line 1313 "recompilation.version.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__version__SymName_7);
    }
#line 1314 "recompilation.version.m"
    {
#line 1314 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1315 "recompilation.version.m"
    {
#line 1315 "recompilation.version.m"
      mercury__io__write_int_3_p_0(recompilation__version__Arity_8);
    }
#line 1316 "recompilation.version.m"
    {
#line 1316 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 1317 "recompilation.version.m"
    {
#line 1317 "recompilation.version.m"
      recompilation__write_version_number_3_p_0(recompilation__version__VersionNumber_5);
    }
#line 1311 "recompilation.version.m"
  }
#line 1308 "recompilation.version.m"
}

#line 1296 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_name_arity_version_number_3_p_0(
#line 1296 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1)
#line 1296 "recompilation.version.m"
{
#line 1299 "recompilation.version.m"
  {
#line 1299 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1299 "recompilation.version.m"
    MR_Word recompilation__version__NameArity_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1299 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumber_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 1299 "recompilation.version.m"
    MR_String recompilation__version__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__NameArity_4, (MR_Integer) 0)));
#line 1299 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__NameArity_4, (MR_Integer) 1)));
#line 1299 "recompilation.version.m"
    MR_Word recompilation__version__V_12_12;

#line 1302 "recompilation.version.m"
    {
#line 1302 "recompilation.version.m"
      recompilation__version__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 0) = ((MR_Box) (recompilation__version__Name_7));
#line 1302 "recompilation.version.m"
    }
#line 1301 "recompilation.version.m"
    {
#line 1301 "recompilation.version.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__version__V_12_12);
    }
#line 1303 "recompilation.version.m"
    {
#line 1303 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 1304 "recompilation.version.m"
    {
#line 1304 "recompilation.version.m"
      mercury__io__write_int_3_p_0(recompilation__version__Arity_8);
    }
#line 1305 "recompilation.version.m"
    {
#line 1305 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 1306 "recompilation.version.m"
    {
#line 1306 "recompilation.version.m"
      recompilation__write_version_number_3_p_0(recompilation__version__VersionNumber_5);
    }
#line 1299 "recompilation.version.m"
  }
#line 1296 "recompilation.version.m"
}

#line 1293 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0_1(
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1293 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1293 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3)
#line 1293 "recompilation.version.m"
{
#line 1293 "recompilation.version.m"
  {
#line 1293 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;

#line 1293 "recompilation.version.m"
    {
#line 1293 "recompilation.version.m"
      recompilation__version__write_name_arity_version_number_3_p_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1293 "recompilation.version.m"
  }
#line 1293 "recompilation.version.m"
}

#line 1283 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_item_type_and_versions_3_p_0(
#line 1283 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1)
#line 1283 "recompilation.version.m"
{
#line 1287 "recompilation.version.m"
  {
#line 1287 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1287 "recompilation.version.m"
    MR_Word recompilation__version__ItemType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1287 "recompilation.version.m"
    MR_Word recompilation__version__ItemVersions_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 1287 "recompilation.version.m"
    MR_String recompilation__version__ItemTypeStr_7;
#line 1287 "recompilation.version.m"
    MR_Word recompilation__version__ItemVersionsList_8;

#line 1288 "recompilation.version.m"
    {
#line 1288 "recompilation.version.m"
      recompilation__string_to_item_type_2_p_1(&recompilation__version__ItemTypeStr_7, recompilation__version__ItemType_4);
    }
#line 1289 "recompilation.version.m"
    {
#line 1289 "recompilation.version.m"
      mercury__io__write_string_3_p_0(recompilation__version__ItemTypeStr_7);
    }
#line 1290 "recompilation.version.m"
    {
#line 1290 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
    }
#line 1291 "recompilation.version.m"
    {
#line 1291 "recompilation.version.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__ItemVersions_5, &recompilation__version__ItemVersionsList_8);
    }
#line 1292 "recompilation.version.m"
    {
#line 1292 "recompilation.version.m"
      mercury__io__write_list_5_p_0((MR_Word) &recompilation__version_scalar_common_1[7], recompilation__version__ItemVersionsList_8, (MR_String) ",\n\t\t", (MR_Word) &recompilation__version_scalar_common_1[20]);
    }
#line 1294 "recompilation.version.m"
    {
#line 1294 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "\n\t)");
    }
#line 1287 "recompilation.version.m"
  }
#line 1283 "recompilation.version.m"
}

#line 1187 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0_1(
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 1187 "recompilation.version.m"
{
#line 1187 "recompilation.version.m"
  {
#line 1187 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 1187 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1187 "recompilation.version.m"
    MR_Word recompilation__version__conv0_HeadVar__3_3;

#line 1187 "recompilation.version.m"
    {
#line 1187 "recompilation.version.m"
      recompilation__version__conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1187 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_HeadVar__3_3));
#line 1187 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 1187 "recompilation.version.m"
  }
#line 1187 "recompilation.version.m"
}

#line 1225 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__class_methods_are_unchanged_2_p_0(
#line 1225 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 1225 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2)
#line 1225 "recompilation.version.m"
{
#line 1228 "recompilation.version.m"
  while (MR_TRUE)
#line 1228 "recompilation.version.m"
    {
#line 1228 "recompilation.version.m"
      /* tailcall optimized into a loop */
#line 1228 "recompilation.version.m"
      {
#line 1228 "recompilation.version.m"
        MR_bool recompilation__version__succeeded;

#line 1228 "recompilation.version.m"
        if ((recompilation__version__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "recompilation.version.m"
          recompilation__version__succeeded = (recompilation__version__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "recompilation.version.m"
        else
#line 1229 "recompilation.version.m"
          {
#line 1229 "recompilation.version.m"
            MR_Word recompilation__version__Method1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "recompilation.version.m"
            MR_Word recompilation__version__Methods1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 1229 "recompilation.version.m"
            MR_Word recompilation__version__Method2_5;
#line 1229 "recompilation.version.m"
            MR_Word recompilation__version__Methods2_6;

#line 1229 "recompilation.version.m"
            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1229 "recompilation.version.m"
              {
#line 1229 "recompilation.version.m"
                recompilation__version__Method2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 1229 "recompilation.version.m"
                recompilation__version__Methods2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 1241 "recompilation.version.m"
                if (((MR_tag((MR_Word) recompilation__version__Method1_3)) == (MR_mktag((MR_Integer) 0))))
#line 1233 "recompilation.version.m"
                  {
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__TypeInfo_46_46;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 0)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 1)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__TypesAndModes1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 2)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__WithType1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 3)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__Detism_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 5)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__TVarSet1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 6)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__ExistQVars1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 8)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 9)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__Constraints1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 10)));
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__TypesAndModes2_19;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__WithType2_20;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__TVarSet2_22;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__ExistQVars2_24;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__Constraints2_25;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__V_38_38;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__V_39_39;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__V_40_40;
#line 1233 "recompilation.version.m"
                    MR_Word recompilation__version__V_41_41;
#line 1231 "recompilation.version.m"
                    MR_Word recompilation__version__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 4)));
#line 1231 "recompilation.version.m"
                    MR_Word recompilation__version__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 7)));
#line 1231 "recompilation.version.m"
                    MR_Word recompilation__version__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method1_3, (MR_Integer) 11)));
#line 1234 "recompilation.version.m"
                    MR_Word recompilation__version__V_21_21;
#line 1234 "recompilation.version.m"
                    MR_Word recompilation__version__V_23_23;
#line 1234 "recompilation.version.m"
                    MR_Word recompilation__version__V_26_26;

#line 1234 "recompilation.version.m"
                    recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Method2_5)) == (MR_mktag((MR_Integer) 0)));
#line 1234 "recompilation.version.m"
                    if (recompilation__version__succeeded)
#line 1234 "recompilation.version.m"
                      {
#line 1234 "recompilation.version.m"
                        recompilation__version__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 0)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 1)));
#line 1234 "recompilation.version.m"
                        recompilation__version__TypesAndModes2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 2)));
#line 1234 "recompilation.version.m"
                        recompilation__version__WithType2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 3)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 4)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 5)));
#line 1234 "recompilation.version.m"
                        recompilation__version__TVarSet2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 6)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 7)));
#line 1234 "recompilation.version.m"
                        recompilation__version__ExistQVars2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 8)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 9)));
#line 1234 "recompilation.version.m"
                        recompilation__version__Constraints2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 10)));
#line 1234 "recompilation.version.m"
                        recompilation__version__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method2_5, (MR_Integer) 11)));
#line 1234 "recompilation.version.m"
                        {
#line 1234 "recompilation.version.m"
                          recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Name_7, recompilation__version__V_38_38);
                        }
#line 1233 "recompilation.version.m"
                        if (recompilation__version__succeeded)
#line 1233 "recompilation.version.m"
                          {
#line 1234 "recompilation.version.m"
                            recompilation__version__succeeded = (recompilation__version__PredOrFunc_8 == recompilation__version__V_39_39);
#line 1233 "recompilation.version.m"
                            if (recompilation__version__succeeded)
#line 1233 "recompilation.version.m"
                              {
#line 5509 "recompilation.version.c"
                                recompilation__version__TypeInfo_46_46 = (MR_Word) &recompilation__version_scalar_common_2[22];
#line 1234 "recompilation.version.m"
                                {
#line 1234 "recompilation.version.m"
                                  recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_46_46, ((MR_Box) (recompilation__version__Detism_12)), ((MR_Box) (recompilation__version__V_40_40)));
                                }
#line 1233 "recompilation.version.m"
                                if (recompilation__version__succeeded)
#line 1233 "recompilation.version.m"
                                  {
#line 1234 "recompilation.version.m"
                                    recompilation__version__succeeded = (recompilation__version__Purity_16 == recompilation__version__V_41_41);
#line 1233 "recompilation.version.m"
                                    if (recompilation__version__succeeded)
#line 1237 "recompilation.version.m"
                                      {
#line 1237 "recompilation.version.m"
                                        recompilation__version__succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(recompilation__version__TVarSet1_13, recompilation__version__ExistQVars1_15, recompilation__version__TypesAndModes1_9, recompilation__version__WithType1_10, recompilation__version__Constraints1_17, recompilation__version__TVarSet2_22, recompilation__version__ExistQVars2_24, recompilation__version__TypesAndModes2_19, recompilation__version__WithType2_20, recompilation__version__Constraints2_25);
                                      }
#line 1233 "recompilation.version.m"
                                  }
#line 1233 "recompilation.version.m"
                              }
#line 1233 "recompilation.version.m"
                          }
#line 1234 "recompilation.version.m"
                      }
#line 1233 "recompilation.version.m"
                  }
#line 1241 "recompilation.version.m"
                else
#line 1243 "recompilation.version.m"
                  {
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeInfo_48_48;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeInfo_49_49;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeCtorInfo_38_81;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeCtorInfo_39_82;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeCtorInfo_40_83;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__TypeInfo_41_84;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__Modes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 2)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__WithInst1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 3)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__Det_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 4)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__InstVarSet1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 5)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__Modes2_32;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__WithInst2_33;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__InstVarSet2_34;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__Name_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 0)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 1)));
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__V_42_42;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__V_43_43;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__V_44_44;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__VarSet1_56;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__VarSet2_57;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__InstRenaming_59;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__ModeTerms1_60;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__ModeTerms2_61;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__AllModeTerms1_66;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__AllModeTerms2_67;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__SubstAllModeTerms2_68;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__V_71_71;
#line 1243 "recompilation.version.m"
                    MR_Word recompilation__version__V_72_72;
#line 1242 "recompilation.version.m"
                    MR_Word recompilation__version__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method1_3, (MR_Integer) 6)));
#line 1244 "recompilation.version.m"
                    MR_Word recompilation__version__V_35_35;
#line 1183 "recompilation.version.m"
                    MR_Word recompilation__version__V_58_58;
#line 1205 "recompilation.version.m"
                    MR_Word recompilation__version__V_69_69;
#line 1206 "recompilation.version.m"
                    MR_Word recompilation__version__V_70_70;

#line 1244 "recompilation.version.m"
                    recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Method2_5)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "recompilation.version.m"
                    if (recompilation__version__succeeded)
#line 1244 "recompilation.version.m"
                      {
#line 1244 "recompilation.version.m"
                        recompilation__version__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 0)));
#line 1244 "recompilation.version.m"
                        recompilation__version__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 1)));
#line 1244 "recompilation.version.m"
                        recompilation__version__Modes2_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 2)));
#line 1244 "recompilation.version.m"
                        recompilation__version__WithInst2_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 3)));
#line 1244 "recompilation.version.m"
                        recompilation__version__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 4)));
#line 1244 "recompilation.version.m"
                        recompilation__version__InstVarSet2_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 5)));
#line 1244 "recompilation.version.m"
                        recompilation__version__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method2_5, (MR_Integer) 6)));
#line 1244 "recompilation.version.m"
                        {
#line 1244 "recompilation.version.m"
                          recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Name_36, recompilation__version__V_42_42);
                        }
#line 1243 "recompilation.version.m"
                        if (recompilation__version__succeeded)
#line 1243 "recompilation.version.m"
                          {
#line 5639 "recompilation.version.c"
                            recompilation__version__TypeInfo_48_48 = (MR_Word) &recompilation__version_scalar_common_2[1];
#line 1244 "recompilation.version.m"
                            {
#line 1244 "recompilation.version.m"
                              recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_48_48, ((MR_Box) (recompilation__version__PredOrFunc_37)), ((MR_Box) (recompilation__version__V_43_43)));
                            }
#line 1243 "recompilation.version.m"
                            if (recompilation__version__succeeded)
#line 1243 "recompilation.version.m"
                              {
#line 5650 "recompilation.version.c"
                                recompilation__version__TypeInfo_49_49 = (MR_Word) &recompilation__version_scalar_common_2[22];
#line 1244 "recompilation.version.m"
                                {
#line 1244 "recompilation.version.m"
                                  recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_49_49, ((MR_Box) (recompilation__version__Det_29)), ((MR_Box) (recompilation__version__V_44_44)));
                                }
#line 1243 "recompilation.version.m"
                                if (recompilation__version__succeeded)
#line 1243 "recompilation.version.m"
                                  {
#line 5661 "recompilation.version.c"
                                    recompilation__version__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 5663 "recompilation.version.c"
                                    recompilation__version__TypeCtorInfo_39_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1177 "recompilation.version.m"
                                    {
#line 1177 "recompilation.version.m"
                                      mercury__varset__coerce_2_p_0(recompilation__version__TypeCtorInfo_38_81, recompilation__version__TypeCtorInfo_39_82, recompilation__version__InstVarSet1_30, &recompilation__version__VarSet1_56);
                                    }
#line 1178 "recompilation.version.m"
                                    {
#line 1178 "recompilation.version.m"
                                      mercury__varset__coerce_2_p_0(recompilation__version__TypeCtorInfo_38_81, recompilation__version__TypeCtorInfo_39_82, recompilation__version__InstVarSet2_34, &recompilation__version__VarSet2_57);
                                    }
#line 1183 "recompilation.version.m"
                                    {
#line 1183 "recompilation.version.m"
                                      mercury__varset__merge_renaming_4_p_0(recompilation__version__TypeCtorInfo_39_82, recompilation__version__VarSet1_56, recompilation__version__VarSet2_57, &recompilation__version__V_58_58, &recompilation__version__InstRenaming_59);
                                    }
#line 5680 "recompilation.version.c"
                                    recompilation__version__TypeCtorInfo_40_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 5682 "recompilation.version.c"
                                    recompilation__version__TypeInfo_41_84 = (MR_Word) &recompilation__version_scalar_common_2[5];
#line 1187 "recompilation.version.m"
                                    recompilation__version__V_72_72 = (MR_Integer) 0;
#line 1187 "recompilation.version.m"
                                    recompilation__version__V_71_71 = (MR_Word) &recompilation__version_scalar_common_4[2];
#line 1187 "recompilation.version.m"
                                    {
#line 1187 "recompilation.version.m"
                                      recompilation__version__ModeTerms1_60 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_40_83, recompilation__version__TypeInfo_41_84, recompilation__version__V_71_71, recompilation__version__Modes1_27);
                                    }
#line 1188 "recompilation.version.m"
                                    {
#line 1188 "recompilation.version.m"
                                      recompilation__version__ModeTerms2_61 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_40_83, recompilation__version__TypeInfo_41_84, recompilation__version__V_71_71, recompilation__version__Modes2_32);
                                    }
#line 1196 "recompilation.version.m"
                                    if ((recompilation__version__WithInst1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "recompilation.version.m"
                                      {
#line 1198 "recompilation.version.m"
                                        recompilation__version__succeeded = (recompilation__version__WithInst2_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "recompilation.version.m"
                                        if (recompilation__version__succeeded)
#line 1197 "recompilation.version.m"
                                          {
#line 1199 "recompilation.version.m"
                                            recompilation__version__AllModeTerms1_66 = recompilation__version__ModeTerms1_60;
#line 1200 "recompilation.version.m"
                                            recompilation__version__AllModeTerms2_67 = recompilation__version__ModeTerms2_61;
#line 1200 "recompilation.version.m"
                                            recompilation__version__succeeded = MR_TRUE;
#line 1197 "recompilation.version.m"
                                          }
#line 1197 "recompilation.version.m"
                                      }
#line 1196 "recompilation.version.m"
                                    else
#line 1190 "recompilation.version.m"
                                      {
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__Inst1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__WithInst1_28, (MR_Integer) 0)));
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__Inst2_63;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__WithInstTerm1_64;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__WithInstTerm2_65;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_75_75;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_76_76;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_77_77;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_78_78;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_79_79;
#line 1190 "recompilation.version.m"
                                        MR_Word recompilation__version__V_80_80;

#line 1191 "recompilation.version.m"
                                        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__WithInst2_33)) == (MR_mktag((MR_Integer) 1)));
#line 1191 "recompilation.version.m"
                                        if (recompilation__version__succeeded)
#line 1191 "recompilation.version.m"
                                          {
#line 1191 "recompilation.version.m"
                                            recompilation__version__Inst2_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__WithInst2_33, (MR_Integer) 0)));
#line 1192 "recompilation.version.m"
                                            recompilation__version__V_75_75 = (MR_Integer) 0;
#line 1192 "recompilation.version.m"
                                            recompilation__version__V_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1192 "recompilation.version.m"
                                            {
#line 1192 "recompilation.version.m"
                                              recompilation__version__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(0), recompilation__version__V_76_76, 0) = ((MR_Box) (recompilation__version__V_77_77));
#line 1192 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(0), recompilation__version__V_76_76, 1) = ((MR_Box) (recompilation__version__Inst1_62));
#line 1192 "recompilation.version.m"
                                            }
#line 1192 "recompilation.version.m"
                                            {
#line 1192 "recompilation.version.m"
                                              recompilation__version__WithInstTerm1_64 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(recompilation__version__V_75_75, recompilation__version__V_76_76);
                                            }
#line 1193 "recompilation.version.m"
                                            recompilation__version__V_78_78 = (MR_Integer) 0;
#line 1193 "recompilation.version.m"
                                            recompilation__version__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "recompilation.version.m"
                                            {
#line 1193 "recompilation.version.m"
                                              recompilation__version__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(0), recompilation__version__V_79_79, 0) = ((MR_Box) (recompilation__version__V_80_80));
#line 1193 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(0), recompilation__version__V_79_79, 1) = ((MR_Box) (recompilation__version__Inst2_63));
#line 1193 "recompilation.version.m"
                                            }
#line 1193 "recompilation.version.m"
                                            {
#line 1193 "recompilation.version.m"
                                              recompilation__version__WithInstTerm2_65 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(recompilation__version__V_78_78, recompilation__version__V_79_79);
                                            }
#line 1194 "recompilation.version.m"
                                            {
#line 1194 "recompilation.version.m"
                                              recompilation__version__AllModeTerms1_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms1_66, 0) = ((MR_Box) (recompilation__version__WithInstTerm1_64));
#line 1194 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms1_66, 1) = ((MR_Box) (recompilation__version__ModeTerms1_60));
#line 1194 "recompilation.version.m"
                                            }
#line 1195 "recompilation.version.m"
                                            {
#line 1195 "recompilation.version.m"
                                              recompilation__version__AllModeTerms2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms2_67, 0) = ((MR_Box) (recompilation__version__WithInstTerm2_65));
#line 1195 "recompilation.version.m"
                                              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms2_67, 1) = ((MR_Box) (recompilation__version__ModeTerms2_61));
#line 1195 "recompilation.version.m"
                                            }
#line 1195 "recompilation.version.m"
                                            recompilation__version__succeeded = MR_TRUE;
#line 1191 "recompilation.version.m"
                                          }
#line 1190 "recompilation.version.m"
                                      }
#line 1243 "recompilation.version.m"
                                    if (recompilation__version__succeeded)
#line 1243 "recompilation.version.m"
                                      {
#line 1203 "recompilation.version.m"
                                        {
#line 1203 "recompilation.version.m"
                                          mercury__term__apply_renaming_in_terms_3_p_0(recompilation__version__TypeCtorInfo_39_82, recompilation__version__InstRenaming_59, recompilation__version__AllModeTerms2_67, &recompilation__version__SubstAllModeTerms2_68);
                                        }
#line 1205 "recompilation.version.m"
                                        {
#line 1205 "recompilation.version.m"
                                          recompilation__version__succeeded = mercury__term__list_subsumes_3_p_0(recompilation__version__TypeCtorInfo_39_82, recompilation__version__AllModeTerms1_66, recompilation__version__SubstAllModeTerms2_68, &recompilation__version__V_69_69);
                                        }
#line 1243 "recompilation.version.m"
                                        if (recompilation__version__succeeded)
#line 1206 "recompilation.version.m"
                                          {
#line 1206 "recompilation.version.m"
                                            recompilation__version__succeeded = mercury__term__list_subsumes_3_p_0(recompilation__version__TypeCtorInfo_39_82, recompilation__version__SubstAllModeTerms2_68, recompilation__version__AllModeTerms1_66, &recompilation__version__V_70_70);
                                          }
#line 1243 "recompilation.version.m"
                                      }
#line 1243 "recompilation.version.m"
                                  }
#line 1243 "recompilation.version.m"
                              }
#line 1243 "recompilation.version.m"
                          }
#line 1244 "recompilation.version.m"
                      }
#line 1243 "recompilation.version.m"
                  }
#line 1229 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 1249 "recompilation.version.m"
                  {
#line 1249 "recompilation.version.m"
                    /* direct tailcall eliminated */
#line 1249 "recompilation.version.m"
                    {
#line 1249 "recompilation.version.m"
                      MR_Word recompilation__version__HeadVar__1__tmp_copy_1 = recompilation__version__Methods1_4;
#line 1249 "recompilation.version.m"
                      MR_Word recompilation__version__HeadVar__2__tmp_copy_2 = recompilation__version__Methods2_6;

#line 1249 "recompilation.version.m"
                      recompilation__version__HeadVar__2_2 = recompilation__version__HeadVar__2__tmp_copy_2;
#line 1249 "recompilation.version.m"
                      recompilation__version__HeadVar__1_1 = recompilation__version__HeadVar__1__tmp_copy_1;
#line 1249 "recompilation.version.m"
                    }
#line 1249 "recompilation.version.m"
                    continue;
#line 1249 "recompilation.version.m"
                  }
#line 1229 "recompilation.version.m"
              }
#line 1229 "recompilation.version.m"
          }
#line 1228 "recompilation.version.m"
        return recompilation__version__succeeded;
#line 1228 "recompilation.version.m"
      }
#line 1228 "recompilation.version.m"
      break;
#line 1228 "recompilation.version.m"
    }
#line 1225 "recompilation.version.m"
}

#line 1212 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__class_interface_is_unchanged_2_p_0(
#line 1212 "recompilation.version.m"
  MR_Word recompilation__version__Interface0_3,
#line 1212 "recompilation.version.m"
  MR_Word recompilation__version__Interface_4)
#line 1212 "recompilation.version.m"
{
#line 1217 "recompilation.version.m"
  {
#line 1217 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 1217 "recompilation.version.m"
    if ((recompilation__version__Interface0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1218 "recompilation.version.m"
      recompilation__version__succeeded = (recompilation__version__Interface_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "recompilation.version.m"
    else
#line 1220 "recompilation.version.m"
      {
#line 1220 "recompilation.version.m"
        MR_Word recompilation__version__Methods1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Interface0_3, (MR_Integer) 0)));
#line 1220 "recompilation.version.m"
        MR_Word recompilation__version__Methods2_6;

#line 1222 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Interface_4)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1222 "recompilation.version.m"
          {
#line 1222 "recompilation.version.m"
            recompilation__version__Methods2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Interface_4, (MR_Integer) 0)));
#line 1221 "recompilation.version.m"
            {
#line 1221 "recompilation.version.m"
              recompilation__version__succeeded = recompilation__version__class_methods_are_unchanged_2_p_0(recompilation__version__Methods1_5, recompilation__version__Methods2_6);
            }
#line 1222 "recompilation.version.m"
          }
#line 1220 "recompilation.version.m"
      }
#line 1217 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1217 "recompilation.version.m"
  }
#line 1212 "recompilation.version.m"
}

#line 1187 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0_1(
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1187 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 1187 "recompilation.version.m"
{
#line 1187 "recompilation.version.m"
  {
#line 1187 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 1187 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1187 "recompilation.version.m"
    MR_Word recompilation__version__conv0_HeadVar__3_3;

#line 1187 "recompilation.version.m"
    {
#line 1187 "recompilation.version.m"
      recompilation__version__conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1187 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_HeadVar__3_3));
#line 1187 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 1187 "recompilation.version.m"
  }
#line 1187 "recompilation.version.m"
}

#line 1171 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__InstVarSet1_7,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__Modes1_8,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithInst1_9,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__InstVarSet2_10,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__Modes2_11,
#line 1171 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithInst2_12)
#line 1171 "recompilation.version.m"
{
#line 1176 "recompilation.version.m"
  {
#line 1176 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_40_40;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_41_41;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__VarSet1_13;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__VarSet2_14;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__InstRenaming_16;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__ModeTerms1_17;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__ModeTerms2_18;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__AllModeTerms1_23;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__AllModeTerms2_24;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__SubstAllModeTerms2_25;
#line 1176 "recompilation.version.m"
    MR_Word recompilation__version__V_28_28;
#line 1183 "recompilation.version.m"
    MR_Word recompilation__version__V_15_15;
#line 1205 "recompilation.version.m"
    MR_Word recompilation__version__V_26_26;
#line 1206 "recompilation.version.m"
    MR_Word recompilation__version__V_27_27;

#line 1177 "recompilation.version.m"
    {
#line 1177 "recompilation.version.m"
      mercury__varset__coerce_2_p_0(recompilation__version__TypeCtorInfo_38_38, recompilation__version__TypeCtorInfo_39_39, recompilation__version__InstVarSet1_7, &recompilation__version__VarSet1_13);
    }
#line 1178 "recompilation.version.m"
    {
#line 1178 "recompilation.version.m"
      mercury__varset__coerce_2_p_0(recompilation__version__TypeCtorInfo_38_38, recompilation__version__TypeCtorInfo_39_39, recompilation__version__InstVarSet2_10, &recompilation__version__VarSet2_14);
    }
#line 1183 "recompilation.version.m"
    {
#line 1183 "recompilation.version.m"
      mercury__varset__merge_renaming_4_p_0(recompilation__version__TypeCtorInfo_39_39, recompilation__version__VarSet1_13, recompilation__version__VarSet2_14, &recompilation__version__V_15_15, &recompilation__version__InstRenaming_16);
    }
#line 6038 "recompilation.version.c"
    recompilation__version__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 6040 "recompilation.version.c"
    recompilation__version__TypeInfo_41_41 = (MR_Word) &recompilation__version_scalar_common_2[5];
#line 1187 "recompilation.version.m"
    recompilation__version__V_28_28 = (MR_Word) &recompilation__version_scalar_common_4[1];
#line 1187 "recompilation.version.m"
    {
#line 1187 "recompilation.version.m"
      recompilation__version__ModeTerms1_17 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_40_40, recompilation__version__TypeInfo_41_41, recompilation__version__V_28_28, recompilation__version__Modes1_8);
    }
#line 1188 "recompilation.version.m"
    {
#line 1188 "recompilation.version.m"
      recompilation__version__ModeTerms2_18 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_40_40, recompilation__version__TypeInfo_41_41, recompilation__version__V_28_28, recompilation__version__Modes2_11);
    }
#line 1196 "recompilation.version.m"
    if ((recompilation__version__MaybeWithInst1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "recompilation.version.m"
      {
#line 1198 "recompilation.version.m"
        recompilation__version__succeeded = (recompilation__version__MaybeWithInst2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1197 "recompilation.version.m"
          {
#line 1199 "recompilation.version.m"
            recompilation__version__AllModeTerms1_23 = recompilation__version__ModeTerms1_17;
#line 1200 "recompilation.version.m"
            recompilation__version__AllModeTerms2_24 = recompilation__version__ModeTerms2_18;
#line 1200 "recompilation.version.m"
            recompilation__version__succeeded = MR_TRUE;
#line 1197 "recompilation.version.m"
          }
#line 1197 "recompilation.version.m"
      }
#line 1196 "recompilation.version.m"
    else
#line 1190 "recompilation.version.m"
      {
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__Inst1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeWithInst1_9, (MR_Integer) 0)));
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__Inst2_20;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__WithInstTerm1_21;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__WithInstTerm2_22;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_32_32;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_33_33;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_34_34;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_35_35;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_36_36;
#line 1190 "recompilation.version.m"
        MR_Word recompilation__version__V_37_37;

#line 1191 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__MaybeWithInst2_12)) == (MR_mktag((MR_Integer) 1)));
#line 1191 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1191 "recompilation.version.m"
          {
#line 1191 "recompilation.version.m"
            recompilation__version__Inst2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeWithInst2_12, (MR_Integer) 0)));
#line 1192 "recompilation.version.m"
            recompilation__version__V_32_32 = (MR_Integer) 0;
#line 1192 "recompilation.version.m"
            recompilation__version__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1192 "recompilation.version.m"
            {
#line 1192 "recompilation.version.m"
              recompilation__version__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_33_33, 0) = ((MR_Box) (recompilation__version__V_34_34));
#line 1192 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_33_33, 1) = ((MR_Box) (recompilation__version__Inst1_19));
#line 1192 "recompilation.version.m"
            }
#line 1192 "recompilation.version.m"
            {
#line 1192 "recompilation.version.m"
              recompilation__version__WithInstTerm1_21 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(recompilation__version__V_32_32, recompilation__version__V_33_33);
            }
#line 1193 "recompilation.version.m"
            recompilation__version__V_35_35 = (MR_Integer) 0;
#line 1193 "recompilation.version.m"
            recompilation__version__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "recompilation.version.m"
            {
#line 1193 "recompilation.version.m"
              recompilation__version__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_36_36, 0) = ((MR_Box) (recompilation__version__V_37_37));
#line 1193 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_36_36, 1) = ((MR_Box) (recompilation__version__Inst2_20));
#line 1193 "recompilation.version.m"
            }
#line 1193 "recompilation.version.m"
            {
#line 1193 "recompilation.version.m"
              recompilation__version__WithInstTerm2_22 = hlds__hlds_out__hlds_out_mode__mode_to_term_2_f_0(recompilation__version__V_35_35, recompilation__version__V_36_36);
            }
#line 1194 "recompilation.version.m"
            {
#line 1194 "recompilation.version.m"
              recompilation__version__AllModeTerms1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms1_23, 0) = ((MR_Box) (recompilation__version__WithInstTerm1_21));
#line 1194 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms1_23, 1) = ((MR_Box) (recompilation__version__ModeTerms1_17));
#line 1194 "recompilation.version.m"
            }
#line 1195 "recompilation.version.m"
            {
#line 1195 "recompilation.version.m"
              recompilation__version__AllModeTerms2_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms2_24, 0) = ((MR_Box) (recompilation__version__WithInstTerm2_22));
#line 1195 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllModeTerms2_24, 1) = ((MR_Box) (recompilation__version__ModeTerms2_18));
#line 1195 "recompilation.version.m"
            }
#line 1195 "recompilation.version.m"
            recompilation__version__succeeded = MR_TRUE;
#line 1191 "recompilation.version.m"
          }
#line 1190 "recompilation.version.m"
      }
#line 1176 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1176 "recompilation.version.m"
      {
#line 1203 "recompilation.version.m"
        {
#line 1203 "recompilation.version.m"
          mercury__term__apply_renaming_in_terms_3_p_0(recompilation__version__TypeCtorInfo_39_39, recompilation__version__InstRenaming_16, recompilation__version__AllModeTerms2_24, &recompilation__version__SubstAllModeTerms2_25);
        }
#line 1205 "recompilation.version.m"
        {
#line 1205 "recompilation.version.m"
          recompilation__version__succeeded = mercury__term__list_subsumes_3_p_0(recompilation__version__TypeCtorInfo_39_39, recompilation__version__AllModeTerms1_23, recompilation__version__SubstAllModeTerms2_25, &recompilation__version__V_26_26);
        }
#line 1176 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1206 "recompilation.version.m"
          {
#line 1206 "recompilation.version.m"
            recompilation__version__succeeded = mercury__term__list_subsumes_3_p_0(recompilation__version__TypeCtorInfo_39_39, recompilation__version__SubstAllModeTerms2_25, recompilation__version__AllModeTerms1_23, &recompilation__version__V_27_27);
          }
#line 1176 "recompilation.version.m"
      }
#line 1176 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1176 "recompilation.version.m"
  }
#line 1171 "recompilation.version.m"
}

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_1(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 1142 "recompilation.version.m"
{
#line 1142 "recompilation.version.m"
  {
#line 1142 "recompilation.version.m"
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 1142 "recompilation.version.m"
    MR_builtin_longjmp((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0, 1);
#line 1142 "recompilation.version.m"
  }
#line 1142 "recompilation.version.m"
}

#line 1144 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_3(
#line 1144 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 1144 "recompilation.version.m"
{
#line 1144 "recompilation.version.m"
  {
#line 1144 "recompilation.version.m"
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 1144 "recompilation.version.m"
    (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18 = ((MR_Word) (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18);
#line 1144 "recompilation.version.m"
    (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19 = ((MR_Word) (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19);
#line 1144 "recompilation.version.m"
    {
#line 1144 "recompilation.version.m"
      recompilation__version__type_list_is_unchanged_7_p_0_2(recompilation__version__env_ptr);
    }
#line 1144 "recompilation.version.m"
  }
#line 1144 "recompilation.version.m"
}

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_2(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 1142 "recompilation.version.m"
{
#line 1142 "recompilation.version.m"
  {
#line 1142 "recompilation.version.m"
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 1142 "recompilation.version.m"
    {
#line 1147 "recompilation.version.m"
      MR_Word recompilation__version__V_20_20;
#line 1151 "recompilation.version.m"
      MR_Word recompilation__version__TypeCtorInfo_32_32;
#line 1151 "recompilation.version.m"
      MR_String recompilation__version__VarName1_21;
#line 1151 "recompilation.version.m"
      MR_String recompilation__version__VarName2_22;

#line 1147 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 1147 "recompilation.version.m"
      if ((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1147 "recompilation.version.m"
        {
#line 1147 "recompilation.version.m"
          {
#line 1147 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 0)));
#line 1147 "recompilation.version.m"
            recompilation__version__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__SubstTerm_19, (MR_Integer) 1)));
#line 1147 "recompilation.version.m"
          }
#line 1142 "recompilation.version.m"
          {
#line 6285 "recompilation.version.c"
            recompilation__version__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1151 "recompilation.version.m"
            {
#line 1151 "recompilation.version.m"
              mercury__varset__lookup_name_3_p_0(recompilation__version__TypeCtorInfo_32_32, *((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12), (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem1_17, &recompilation__version__VarName1_21);
            }
#line 1152 "recompilation.version.m"
            {
#line 1152 "recompilation.version.m"
              mercury__varset__lookup_name_3_p_0(recompilation__version__TypeCtorInfo_32_32, *((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12), (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__VarInItem2_18, &recompilation__version__VarName2_22);
            }
#line 1154 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = (strcmp(recompilation__version__VarName1_21, recompilation__version__VarName2_22) == 0);
#line 1155 "recompilation.version.m"
            if (!((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded))
#line 1164 "recompilation.version.m"
              {
#line 1164 "recompilation.version.m"
                MR_String recompilation__version__VarNum_57;
#line 1164 "recompilation.version.m"
                MR_String recompilation__version__VarNum_88;
#line 1164 "recompilation.version.m"
                MR_String recompilation__version__V_90_90;
#line 1163 "recompilation.version.m"
                MR_Integer recompilation__version__V_58_58;
#line 1163 "recompilation.version.m"
                MR_Integer recompilation__version__V_89_89;

#line 1162 "recompilation.version.m"
                {
#line 1162 "recompilation.version.m"
                  (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__append_3_p_1((MR_String) "V_", &recompilation__version__VarNum_57, recompilation__version__VarName1_21);
                }
#line 1164 "recompilation.version.m"
                if ((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1164 "recompilation.version.m"
                  {
#line 1163 "recompilation.version.m"
                    {
#line 1163 "recompilation.version.m"
                      (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(recompilation__version__VarNum_57, &recompilation__version__V_58_58);
                    }
#line 1164 "recompilation.version.m"
                    if ((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1164 "recompilation.version.m"
                      {
#line 1162 "recompilation.version.m"
                        recompilation__version__V_90_90 = (MR_String) "V_";
#line 1162 "recompilation.version.m"
                        {
#line 1162 "recompilation.version.m"
                          (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__append_3_p_1(recompilation__version__V_90_90, &recompilation__version__VarNum_88, recompilation__version__VarName2_22);
                        }
#line 1164 "recompilation.version.m"
                        if ((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1163 "recompilation.version.m"
                          {
#line 1163 "recompilation.version.m"
                            (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0(recompilation__version__VarNum_88, &recompilation__version__V_89_89);
                          }
#line 1164 "recompilation.version.m"
                      }
#line 1164 "recompilation.version.m"
                  }
#line 1164 "recompilation.version.m"
              }
#line 1149 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = !((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded);
#line 1149 "recompilation.version.m"
            if ((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1149 "recompilation.version.m"
              {
#line 1149 "recompilation.version.m"
                recompilation__version__type_list_is_unchanged_7_p_0_1(recompilation__version__env_ptr);
              }
#line 1142 "recompilation.version.m"
          }
#line 1147 "recompilation.version.m"
        }
#line 1142 "recompilation.version.m"
    }
#line 1142 "recompilation.version.m"
  }
#line 1142 "recompilation.version.m"
}

#line 1142 "recompilation.version.m"
static void MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0_4(
#line 1142 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 1142 "recompilation.version.m"
{
#line 1142 "recompilation.version.m"
  {
#line 1142 "recompilation.version.m"
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 1142 "recompilation.version.m"
    if (MR_builtin_setjmp((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__commit_0) == 0)
#line 1142 "recompilation.version.m"
      {
#line 1142 "recompilation.version.m"
        {
#line 1144 "recompilation.version.m"
          {
#line 1144 "recompilation.version.m"
            mercury__map__member_3_p_0((MR_Word) &recompilation__version_scalar_common_2[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, *((recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14), &(recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv1_VarInItem2_18, &(recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__conv0_SubstTerm_19, recompilation__version__type_list_is_unchanged_7_p_0_3, recompilation__version__env_ptr);
          }
#line 1142 "recompilation.version.m"
        }
#line 1142 "recompilation.version.m"
        (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = MR_FALSE;
#line 1142 "recompilation.version.m"
      }
#line 1142 "recompilation.version.m"
    else
#line 1142 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = MR_TRUE;
#line 1142 "recompilation.version.m"
  }
#line 1142 "recompilation.version.m"
}

#line 1123 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__type_list_is_unchanged_7_p_0(
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet1_8,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__Types1_9,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet2_10,
#line 1123 "recompilation.version.m"
  MR_Word recompilation__version__Types2_11,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__TVarSet_12,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__Renaming_13,
#line 1123 "recompilation.version.m"
  MR_Word * recompilation__version__Types2ToTypes1Subst_14)
#line 1123 "recompilation.version.m"
{
#line 1123 "recompilation.version.m"
  {
#line 1123 "recompilation.version.m"
    struct recompilation__version__type_list_is_unchanged_7_p_0_env_0_s recompilation__version__env;

#line 1123 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12 = recompilation__version__TVarSet_12;
#line 1123 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14 = recompilation__version__Types2ToTypes1Subst_14;
#line 1128 "recompilation.version.m"
    {
#line 1128 "recompilation.version.m"
      MR_Word recompilation__version__SubstTypes2_15;
#line 1134 "recompilation.version.m"
      MR_Word recompilation__version__V_16_16;

#line 1129 "recompilation.version.m"
      {
#line 1129 "recompilation.version.m"
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(recompilation__version__TVarSet1_8, recompilation__version__TVarSet2_10, (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__TVarSet_12, recompilation__version__Renaming_13);
      }
#line 1130 "recompilation.version.m"
      {
#line 1130 "recompilation.version.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(*recompilation__version__Renaming_13, recompilation__version__Types2_11, &recompilation__version__SubstTypes2_15);
      }
#line 1133 "recompilation.version.m"
      {
#line 1133 "recompilation.version.m"
        (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(recompilation__version__SubstTypes2_15, recompilation__version__Types1_9, (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__Types2ToTypes1Subst_14);
      }
#line 1128 "recompilation.version.m"
      if ((recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1128 "recompilation.version.m"
        {
#line 1134 "recompilation.version.m"
          {
#line 1134 "recompilation.version.m"
            (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(recompilation__version__Types1_9, recompilation__version__SubstTypes2_15, &recompilation__version__V_16_16);
          }
#line 1128 "recompilation.version.m"
          if ((recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded)
#line 1128 "recompilation.version.m"
            {
#line 1142 "recompilation.version.m"
              {
#line 1142 "recompilation.version.m"
                recompilation__version__type_list_is_unchanged_7_p_0_4(&recompilation__version__env);
              }
#line 1142 "recompilation.version.m"
              (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded = !((recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded);
#line 1128 "recompilation.version.m"
            }
#line 1128 "recompilation.version.m"
        }
#line 1128 "recompilation.version.m"
      return (recompilation__version__env).recompilation__version__type_list_is_unchanged_7_p_0_env_0__succeeded;
#line 1128 "recompilation.version.m"
    }
#line 1123 "recompilation.version.m"
  }
#line 1123 "recompilation.version.m"
}

#line 1069 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0_1(
#line 1069 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1069 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 1069 "recompilation.version.m"
{
#line 1069 "recompilation.version.m"
  {
#line 1069 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 1069 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1069 "recompilation.version.m"
    MR_Word recompilation__version__conv0_LambdaHeadVar__2_43;

#line 1069 "recompilation.version.m"
    {
#line 1069 "recompilation.version.m"
      recompilation__version__conv0_LambdaHeadVar__2_43 = recompilation__version__IntroducedFrom__func__pred_or_func_type_is_unchanged__1073__1_1_f_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1069 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__2_43));
#line 1069 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 1069 "recompilation.version.m"
  }
#line 1069 "recompilation.version.m"
}

#line 1061 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__pred_or_func_type_is_unchanged_10_p_0(
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet1_11,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__ExistQVars1_12,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TypesAndModes1_13,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithType1_14,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__Constraints1_15,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TVarSet2_16,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__ExistQVars2_17,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__TypesAndModes2_18,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__MaybeWithType2_19,
#line 1061 "recompilation.version.m"
  MR_Word recompilation__version__Constraints2_20)
#line 1061 "recompilation.version.m"
{
#line 1068 "recompilation.version.m"
  {
#line 1068 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_53_53;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_54_54;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__GetArgTypes_21 = (MR_Word) &recompilation__version_scalar_common_1[19];
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__Types1_26;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__Types2_27;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__AllTypes1_30;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__AllTypes2_31;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__Renaming_33;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__Types2ToTypes1Subst_34;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__KindMap2_35;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__RenamedKindMap2_36;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__RenamedExistQVars2_37;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__SubstExistQTypes2_38;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__RenamedConstraints2_40;
#line 1068 "recompilation.version.m"
    MR_Word recompilation__version__SubstConstraints2_41;
#line 1094 "recompilation.version.m"
    MR_Word recompilation__version___TVarSet_32;
#line 1108 "recompilation.version.m"
    MR_Word recompilation__version__SubstExistQVars2_39;

#line 1080 "recompilation.version.m"
    {
#line 1080 "recompilation.version.m"
      recompilation__version__Types1_26 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_51_51, recompilation__version__TypeCtorInfo_52_52, recompilation__version__GetArgTypes_21, recompilation__version__TypesAndModes1_13);
    }
#line 1081 "recompilation.version.m"
    {
#line 1081 "recompilation.version.m"
      recompilation__version__Types2_27 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_51_51, recompilation__version__TypeCtorInfo_52_52, recompilation__version__GetArgTypes_21, recompilation__version__TypesAndModes2_18);
    }
#line 1087 "recompilation.version.m"
    if ((recompilation__version__MaybeWithType1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1088 "recompilation.version.m"
      {
#line 1089 "recompilation.version.m"
        recompilation__version__succeeded = (recompilation__version__MaybeWithType2_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1088 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1088 "recompilation.version.m"
          {
#line 1090 "recompilation.version.m"
            recompilation__version__AllTypes1_30 = recompilation__version__Types1_26;
#line 1091 "recompilation.version.m"
            recompilation__version__AllTypes2_31 = recompilation__version__Types2_27;
#line 1091 "recompilation.version.m"
            recompilation__version__succeeded = MR_TRUE;
#line 1088 "recompilation.version.m"
          }
#line 1088 "recompilation.version.m"
      }
#line 1087 "recompilation.version.m"
    else
#line 1083 "recompilation.version.m"
      {
#line 1083 "recompilation.version.m"
        MR_Word recompilation__version__WithType1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeWithType1_14, (MR_Integer) 0)));
#line 1083 "recompilation.version.m"
        MR_Word recompilation__version__WithType2_29;

#line 1084 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__MaybeWithType2_19)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1084 "recompilation.version.m"
          {
#line 1084 "recompilation.version.m"
            recompilation__version__WithType2_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeWithType2_19, (MR_Integer) 0)));
#line 1085 "recompilation.version.m"
            {
#line 1085 "recompilation.version.m"
              recompilation__version__AllTypes1_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllTypes1_30, 0) = ((MR_Box) (recompilation__version__WithType1_28));
#line 1085 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllTypes1_30, 1) = ((MR_Box) (recompilation__version__Types1_26));
#line 1085 "recompilation.version.m"
            }
#line 1086 "recompilation.version.m"
            {
#line 1086 "recompilation.version.m"
              recompilation__version__AllTypes2_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllTypes2_31, 0) = ((MR_Box) (recompilation__version__WithType2_29));
#line 1086 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AllTypes2_31, 1) = ((MR_Box) (recompilation__version__Types2_27));
#line 1086 "recompilation.version.m"
            }
#line 1086 "recompilation.version.m"
            recompilation__version__succeeded = MR_TRUE;
#line 1084 "recompilation.version.m"
          }
#line 1083 "recompilation.version.m"
      }
#line 1068 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1068 "recompilation.version.m"
      {
#line 1094 "recompilation.version.m"
        {
#line 1094 "recompilation.version.m"
          recompilation__version__succeeded = recompilation__version__type_list_is_unchanged_7_p_0(recompilation__version__TVarSet1_11, recompilation__version__AllTypes1_30, recompilation__version__TVarSet2_16, recompilation__version__AllTypes2_31, &recompilation__version___TVarSet_32, &recompilation__version__Renaming_33, &recompilation__version__Types2ToTypes1Subst_34);
        }
#line 1068 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1068 "recompilation.version.m"
          {
#line 6679 "recompilation.version.c"
            recompilation__version__TypeInfo_53_53 = (MR_Word) &recompilation__version_scalar_common_2[2];
#line 6681 "recompilation.version.c"
            recompilation__version__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1101 "recompilation.version.m"
            {
#line 1101 "recompilation.version.m"
              mercury__map__init_1_p_0(recompilation__version__TypeInfo_53_53, recompilation__version__TypeCtorInfo_54_54, &recompilation__version__KindMap2_35);
            }
#line 1102 "recompilation.version.m"
            {
#line 1102 "recompilation.version.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(recompilation__version__Renaming_33, recompilation__version__KindMap2_35, &recompilation__version__RenamedKindMap2_36);
            }
#line 1104 "recompilation.version.m"
            {
#line 1104 "recompilation.version.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(recompilation__version__Renaming_33, recompilation__version__ExistQVars2_17, &recompilation__version__RenamedExistQVars2_37);
            }
#line 1106 "recompilation.version.m"
            {
#line 1106 "recompilation.version.m"
              parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(recompilation__version__RenamedKindMap2_36, recompilation__version__Types2ToTypes1Subst_34, recompilation__version__RenamedExistQVars2_37, &recompilation__version__SubstExistQTypes2_38);
            }
#line 1109 "recompilation.version.m"
            {
#line 1109 "recompilation.version.m"
              recompilation__version__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(recompilation__version__SubstExistQTypes2_38, &recompilation__version__SubstExistQVars2_39);
            }
#line 1108 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1111 "recompilation.version.m"
              {
#line 1111 "recompilation.version.m"
                {
#line 1111 "recompilation.version.m"
                  recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_2[28], ((MR_Box) (recompilation__version__ExistQVars1_12)), ((MR_Box) (recompilation__version__SubstExistQVars2_39)));
                }
#line 1111 "recompilation.version.m"
              }
#line 1108 "recompilation.version.m"
            else
#line 1113 "recompilation.version.m"
              {
#line 1113 "recompilation.version.m"
                {
#line 1113 "recompilation.version.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.pred_or_func_type_is_unchanged\'/10", (MR_String) "non-var");
                }
#line 1113 "recompilation.version.m"
                recompilation__version__succeeded = MR_TRUE;
#line 1113 "recompilation.version.m"
              }
#line 1068 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 1068 "recompilation.version.m"
              {
#line 1117 "recompilation.version.m"
                {
#line 1117 "recompilation.version.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(recompilation__version__Renaming_33, recompilation__version__Constraints2_20, &recompilation__version__RenamedConstraints2_40);
                }
#line 1119 "recompilation.version.m"
                {
#line 1119 "recompilation.version.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(recompilation__version__Types2ToTypes1Subst_34, recompilation__version__RenamedConstraints2_40, &recompilation__version__SubstConstraints2_41);
                }
#line 1121 "recompilation.version.m"
                {
#line 1121 "recompilation.version.m"
                  recompilation__version__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(recompilation__version__Constraints1_15, recompilation__version__SubstConstraints2_41);
                }
#line 1068 "recompilation.version.m"
              }
#line 1068 "recompilation.version.m"
          }
#line 1068 "recompilation.version.m"
      }
#line 1068 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1068 "recompilation.version.m"
  }
#line 1061 "recompilation.version.m"
}

#line 815 "recompilation.version.m"
static void MR_CALL 
recompilation__version__is_item_changed_3_p_0(
#line 815 "recompilation.version.m"
  MR_Word recompilation__version__Item1_4,
#line 815 "recompilation.version.m"
  MR_Word recompilation__version__Item2_5,
#line 815 "recompilation.version.m"
  MR_Word * recompilation__version__Changed_6)
#line 815 "recompilation.version.m"
{
#line 819 "recompilation.version.m"
  {
#line 819 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 819 "recompilation.version.m"
#line 819 "recompilation.version.m"
    switch (MR_tag((MR_Word) recompilation__version__Item1_4)) {
#line 819 "recompilation.version.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 819 "recompilation.version.m"
      case (MR_Integer) 0:
#line 819 "recompilation.version.m"
        {
#line 819 "recompilation.version.m"
          MR_Word recompilation__version__ItemClause1_7 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item1_4), (MR_Integer) 0);
#line 819 "recompilation.version.m"
          MR_Word recompilation__version__PorF_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 2)));
#line 819 "recompilation.version.m"
          MR_Word recompilation__version__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 3)));
#line 819 "recompilation.version.m"
          MR_Word recompilation__version__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 4)));
#line 819 "recompilation.version.m"
          MR_Word recompilation__version__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 5)));
#line 820 "recompilation.version.m"
          MR_Word recompilation__version__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 0)));
#line 820 "recompilation.version.m"
          MR_Word recompilation__version__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 1)));
#line 820 "recompilation.version.m"
          MR_Word recompilation__version__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 6)));
#line 820 "recompilation.version.m"
          MR_Integer recompilation__version__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause1_7, (MR_Integer) 7)));
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_273_273;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_275_275;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_276_276;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__ItemClause2_16;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__V_222_222;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__V_223_223;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__V_224_224;
#line 825 "recompilation.version.m"
          MR_Word recompilation__version__V_225_225;
#line 826 "recompilation.version.m"
          MR_Word recompilation__version__V_17_17;
#line 826 "recompilation.version.m"
          MR_Word recompilation__version__V_18_18;
#line 826 "recompilation.version.m"
          MR_Word recompilation__version__V_19_19;
#line 826 "recompilation.version.m"
          MR_Integer recompilation__version__V_20_20;

#line 825 "recompilation.version.m"
          recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 0)));
#line 825 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 825 "recompilation.version.m"
            {
#line 825 "recompilation.version.m"
              recompilation__version__ItemClause2_16 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item2_5), (MR_Integer) 0);
#line 826 "recompilation.version.m"
              recompilation__version__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 0)));
#line 826 "recompilation.version.m"
              recompilation__version__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 1)));
#line 826 "recompilation.version.m"
              recompilation__version__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 2)));
#line 826 "recompilation.version.m"
              recompilation__version__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 3)));
#line 826 "recompilation.version.m"
              recompilation__version__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 4)));
#line 826 "recompilation.version.m"
              recompilation__version__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 5)));
#line 826 "recompilation.version.m"
              recompilation__version__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 6)));
#line 826 "recompilation.version.m"
              recompilation__version__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemClause2_16, (MR_Integer) 7)));
#line 6856 "recompilation.version.c"
              recompilation__version__TypeInfo_273_273 = (MR_Word) &recompilation__version_scalar_common_2[14];
#line 826 "recompilation.version.m"
              {
#line 826 "recompilation.version.m"
                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_273_273, ((MR_Box) (recompilation__version__PorF_10)), ((MR_Box) (recompilation__version__V_222_222)));
              }
#line 825 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 825 "recompilation.version.m"
                {
#line 826 "recompilation.version.m"
                  {
#line 826 "recompilation.version.m"
                    recompilation__version__succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(recompilation__version__SymName_11, recompilation__version__V_223_223);
                  }
#line 825 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 825 "recompilation.version.m"
                    {
#line 6876 "recompilation.version.c"
                      recompilation__version__TypeInfo_275_275 = (MR_Word) &recompilation__version_scalar_common_2[15];
#line 826 "recompilation.version.m"
                      {
#line 826 "recompilation.version.m"
                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_275_275, ((MR_Box) (recompilation__version__Args_12)), ((MR_Box) (recompilation__version__V_224_224)));
                      }
#line 825 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 825 "recompilation.version.m"
                        {
#line 6887 "recompilation.version.c"
                          recompilation__version__TypeInfo_276_276 = (MR_Word) &recompilation__version_scalar_common_2[16];
#line 826 "recompilation.version.m"
                          {
#line 826 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_276_276, ((MR_Box) (recompilation__version__Goal_13)), ((MR_Box) (recompilation__version__V_225_225)));
                          }
#line 825 "recompilation.version.m"
                        }
#line 825 "recompilation.version.m"
                    }
#line 825 "recompilation.version.m"
                }
#line 825 "recompilation.version.m"
            }
#line 824 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 829 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 824 "recompilation.version.m"
          else
#line 831 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 819 "recompilation.version.m"
        }
#line 819 "recompilation.version.m"
        break;
#line 819 "recompilation.version.m"
      case (MR_Integer) 1:
#line 834 "recompilation.version.m"
        {
#line 834 "recompilation.version.m"
          MR_Word recompilation__version__ItemTypeDefn1_21 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item1_4), (MR_Integer) 1);
#line 834 "recompilation.version.m"
          MR_Word recompilation__version__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 1)));
#line 834 "recompilation.version.m"
          MR_Word recompilation__version__Defn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 3)));
#line 834 "recompilation.version.m"
          MR_Word recompilation__version__Args_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 2)));
#line 835 "recompilation.version.m"
          MR_Word recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 0)));
#line 835 "recompilation.version.m"
          MR_Word recompilation__version__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 4)));
#line 835 "recompilation.version.m"
          MR_Integer recompilation__version__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn1_21, (MR_Integer) 5)));
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_312_312;
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_314_314;
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__ItemTypeDefn2_27;
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__V_226_226;
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__V_227_227;
#line 837 "recompilation.version.m"
          MR_Word recompilation__version__V_228_228;
#line 838 "recompilation.version.m"
          MR_Word recompilation__version__V_28_28;
#line 838 "recompilation.version.m"
          MR_Word recompilation__version__V_29_29;
#line 838 "recompilation.version.m"
          MR_Integer recompilation__version__V_30_30;

#line 837 "recompilation.version.m"
          recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 1)));
#line 837 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 837 "recompilation.version.m"
            {
#line 837 "recompilation.version.m"
              recompilation__version__ItemTypeDefn2_27 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item2_5), (MR_Integer) 1);
#line 838 "recompilation.version.m"
              recompilation__version__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 0)));
#line 838 "recompilation.version.m"
              recompilation__version__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 1)));
#line 838 "recompilation.version.m"
              recompilation__version__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 2)));
#line 838 "recompilation.version.m"
              recompilation__version__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 3)));
#line 838 "recompilation.version.m"
              recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 4)));
#line 838 "recompilation.version.m"
              recompilation__version__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn2_27, (MR_Integer) 5)));
#line 6971 "recompilation.version.c"
              recompilation__version__TypeInfo_312_312 = (MR_Word) &recompilation__version_scalar_common_2[28];
#line 838 "recompilation.version.m"
              {
#line 838 "recompilation.version.m"
                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_312_312, ((MR_Box) (recompilation__version__Name_23)), ((MR_Box) (recompilation__version__V_226_226)));
              }
#line 837 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 837 "recompilation.version.m"
                {
#line 838 "recompilation.version.m"
                  {
#line 838 "recompilation.version.m"
                    recompilation__version__succeeded = parse_tree__prog_data____Unify____type_defn_0_0(recompilation__version__Args_188, recompilation__version__V_227_227);
                  }
#line 837 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 837 "recompilation.version.m"
                    {
#line 6991 "recompilation.version.c"
                      recompilation__version__TypeInfo_314_314 = (MR_Word) &recompilation__version_scalar_common_2[29];
#line 838 "recompilation.version.m"
                      {
#line 838 "recompilation.version.m"
                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_314_314, ((MR_Box) (recompilation__version__Defn_24)), ((MR_Box) (recompilation__version__V_228_228)));
                      }
#line 837 "recompilation.version.m"
                    }
#line 837 "recompilation.version.m"
                }
#line 837 "recompilation.version.m"
            }
#line 836 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 840 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 836 "recompilation.version.m"
          else
#line 842 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 834 "recompilation.version.m"
        }
#line 819 "recompilation.version.m"
        break;
#line 819 "recompilation.version.m"
      case (MR_Integer) 2:
#line 845 "recompilation.version.m"
        {
#line 845 "recompilation.version.m"
          MR_Word recompilation__version__ItemInstDefn1_31 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item1_4), (MR_Integer) 2);
#line 845 "recompilation.version.m"
          MR_Word recompilation__version__MaybeForTypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 3)));
#line 845 "recompilation.version.m"
          MR_Word recompilation__version__Args_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 2)));
#line 845 "recompilation.version.m"
          MR_Word recompilation__version__Name_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 1)));
#line 845 "recompilation.version.m"
          MR_Word recompilation__version__Defn_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 4)));
#line 846 "recompilation.version.m"
          MR_Word recompilation__version__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 0)));
#line 846 "recompilation.version.m"
          MR_Word recompilation__version__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 5)));
#line 846 "recompilation.version.m"
          MR_Integer recompilation__version__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn1_31, (MR_Integer) 6)));
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_281_281;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_282_282;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__TypeInfo_284_284;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__ItemInstDefn2_36;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__V_229_229;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__V_230_230;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__V_231_231;
#line 849 "recompilation.version.m"
          MR_Word recompilation__version__V_232_232;
#line 850 "recompilation.version.m"
          MR_Word recompilation__version__V_37_37;
#line 850 "recompilation.version.m"
          MR_Word recompilation__version__V_38_38;
#line 850 "recompilation.version.m"
          MR_Integer recompilation__version__V_39_39;

#line 849 "recompilation.version.m"
          recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 2)));
#line 849 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 849 "recompilation.version.m"
            {
#line 849 "recompilation.version.m"
              recompilation__version__ItemInstDefn2_36 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item2_5), (MR_Integer) 2);
#line 850 "recompilation.version.m"
              recompilation__version__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 0)));
#line 850 "recompilation.version.m"
              recompilation__version__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 1)));
#line 850 "recompilation.version.m"
              recompilation__version__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 2)));
#line 850 "recompilation.version.m"
              recompilation__version__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 3)));
#line 850 "recompilation.version.m"
              recompilation__version__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 4)));
#line 850 "recompilation.version.m"
              recompilation__version__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 5)));
#line 850 "recompilation.version.m"
              recompilation__version__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn2_36, (MR_Integer) 6)));
#line 7081 "recompilation.version.c"
              recompilation__version__TypeInfo_281_281 = (MR_Word) &recompilation__version_scalar_common_2[17];
#line 850 "recompilation.version.m"
              {
#line 850 "recompilation.version.m"
                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_281_281, ((MR_Box) (recompilation__version__Name_190)), ((MR_Box) (recompilation__version__V_229_229)));
              }
#line 849 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 849 "recompilation.version.m"
                {
#line 7092 "recompilation.version.c"
                  recompilation__version__TypeInfo_282_282 = (MR_Word) &recompilation__version_scalar_common_2[18];
#line 850 "recompilation.version.m"
                  {
#line 850 "recompilation.version.m"
                    recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_282_282, ((MR_Box) (recompilation__version__Args_189)), ((MR_Box) (recompilation__version__V_230_230)));
                  }
#line 849 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 849 "recompilation.version.m"
                    {
#line 850 "recompilation.version.m"
                      {
#line 850 "recompilation.version.m"
                        recompilation__version__succeeded = parse_tree__prog_data____Unify____inst_defn_0_0(recompilation__version__MaybeForTypeCtor_33, recompilation__version__V_231_231);
                      }
#line 849 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 849 "recompilation.version.m"
                        {
#line 7112 "recompilation.version.c"
                          recompilation__version__TypeInfo_284_284 = (MR_Word) &recompilation__version_scalar_common_2[19];
#line 850 "recompilation.version.m"
                          {
#line 850 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_284_284, ((MR_Box) (recompilation__version__Defn_191)), ((MR_Box) (recompilation__version__V_232_232)));
                          }
#line 849 "recompilation.version.m"
                        }
#line 849 "recompilation.version.m"
                    }
#line 849 "recompilation.version.m"
                }
#line 849 "recompilation.version.m"
            }
#line 848 "recompilation.version.m"
          if (recompilation__version__succeeded)
#line 853 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 848 "recompilation.version.m"
          else
#line 855 "recompilation.version.m"
            *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 845 "recompilation.version.m"
        }
#line 819 "recompilation.version.m"
        break;
#line 819 "recompilation.version.m"
      case (MR_Integer) 3:
#line 819 "recompilation.version.m"
#line 819 "recompilation.version.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 0)))) {
#line 819 "recompilation.version.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 819 "recompilation.version.m"
          case (MR_Integer) 0:
#line 858 "recompilation.version.m"
            {
#line 858 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDefn1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 858 "recompilation.version.m"
              MR_Word recompilation__version__Args_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 2)));
#line 858 "recompilation.version.m"
              MR_Word recompilation__version__Name_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 1)));
#line 858 "recompilation.version.m"
              MR_Word recompilation__version__Defn_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 3)));
#line 859 "recompilation.version.m"
              MR_Word recompilation__version__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 0)));
#line 859 "recompilation.version.m"
              MR_Word recompilation__version__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 4)));
#line 859 "recompilation.version.m"
              MR_Integer recompilation__version__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn1_40, (MR_Integer) 5)));
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_294_294;
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_296_296;
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDefn2_44;
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__V_233_233;
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__V_234_234;
#line 861 "recompilation.version.m"
              MR_Word recompilation__version__V_235_235;
#line 862 "recompilation.version.m"
              MR_Word recompilation__version__V_45_45;
#line 862 "recompilation.version.m"
              MR_Word recompilation__version__V_46_46;
#line 862 "recompilation.version.m"
              MR_Integer recompilation__version__V_47_47;

#line 861 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 861 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 861 "recompilation.version.m"
                {
#line 861 "recompilation.version.m"
                  recompilation__version__ItemModeDefn2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 0)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 1)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 2)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 3)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 4)));
#line 862 "recompilation.version.m"
                  recompilation__version__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn2_44, (MR_Integer) 5)));
#line 7203 "recompilation.version.c"
                  recompilation__version__TypeInfo_294_294 = (MR_Word) &recompilation__version_scalar_common_2[17];
#line 862 "recompilation.version.m"
                  {
#line 862 "recompilation.version.m"
                    recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_294_294, ((MR_Box) (recompilation__version__Name_193)), ((MR_Box) (recompilation__version__V_233_233)));
                  }
#line 861 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 861 "recompilation.version.m"
                    {
#line 862 "recompilation.version.m"
                      {
#line 862 "recompilation.version.m"
                        recompilation__version__succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(recompilation__version__Args_192, recompilation__version__V_234_234);
                      }
#line 861 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 861 "recompilation.version.m"
                        {
#line 7223 "recompilation.version.c"
                          recompilation__version__TypeInfo_296_296 = (MR_Word) &recompilation__version_scalar_common_2[19];
#line 862 "recompilation.version.m"
                          {
#line 862 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_296_296, ((MR_Box) (recompilation__version__Defn_194)), ((MR_Box) (recompilation__version__V_235_235)));
                          }
#line 861 "recompilation.version.m"
                        }
#line 861 "recompilation.version.m"
                    }
#line 861 "recompilation.version.m"
                }
#line 860 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 864 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 860 "recompilation.version.m"
              else
#line 866 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 858 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 1:
#line 869 "recompilation.version.m"
            {
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__ItemPredDecl1_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 1)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__TypesAndModes1_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 2)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__WithType1_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 3)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__Det1_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 5)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__TVarSet1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 7)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__ExistQVars1_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 9)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__Purity_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 10)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__Constraints1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 11)));
#line 869 "recompilation.version.m"
              MR_Word recompilation__version__Name_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 0)));
#line 870 "recompilation.version.m"
              MR_Word recompilation__version__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 4)));
#line 870 "recompilation.version.m"
              MR_Word recompilation__version__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 6)));
#line 870 "recompilation.version.m"
              MR_Word recompilation__version__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 8)));
#line 870 "recompilation.version.m"
              MR_Word recompilation__version__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 12)));
#line 870 "recompilation.version.m"
              MR_Integer recompilation__version__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl1_48, (MR_Integer) 13)));
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__ItemPredDecl2_62;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__TypesAndModes2_63;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__WithType2_64;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__Det2_66;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__TVarSet2_68;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__ExistQVars2_70;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__Constraints2_71;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__V_236_236;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__V_237_237;
#line 874 "recompilation.version.m"
              MR_Word recompilation__version__V_238_238;
#line 875 "recompilation.version.m"
              MR_Word recompilation__version__V_65_65;
#line 875 "recompilation.version.m"
              MR_Word recompilation__version__V_67_67;
#line 875 "recompilation.version.m"
              MR_Word recompilation__version__V_69_69;
#line 875 "recompilation.version.m"
              MR_Word recompilation__version__V_72_72;
#line 875 "recompilation.version.m"
              MR_Integer recompilation__version__V_73_73;

#line 874 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 874 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 874 "recompilation.version.m"
                {
#line 874 "recompilation.version.m"
                  recompilation__version__ItemPredDecl2_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 0)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 1)));
#line 875 "recompilation.version.m"
                  recompilation__version__TypesAndModes2_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 2)));
#line 875 "recompilation.version.m"
                  recompilation__version__WithType2_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 3)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 4)));
#line 875 "recompilation.version.m"
                  recompilation__version__Det2_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 5)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 6)));
#line 875 "recompilation.version.m"
                  recompilation__version__TVarSet2_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 7)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 8)));
#line 875 "recompilation.version.m"
                  recompilation__version__ExistQVars2_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 9)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 10)));
#line 875 "recompilation.version.m"
                  recompilation__version__Constraints2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 11)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 12)));
#line 875 "recompilation.version.m"
                  recompilation__version__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl2_62, (MR_Integer) 13)));
#line 875 "recompilation.version.m"
                  {
#line 875 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Name_195, recompilation__version__V_236_236);
                  }
#line 874 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 874 "recompilation.version.m"
                    {
#line 875 "recompilation.version.m"
                      recompilation__version__succeeded = (recompilation__version__PredOrFunc_49 == recompilation__version__V_237_237);
#line 874 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 874 "recompilation.version.m"
                        {
#line 875 "recompilation.version.m"
                          recompilation__version__succeeded = (recompilation__version__Purity_58 == recompilation__version__V_238_238);
#line 874 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 874 "recompilation.version.m"
                            {
#line 890 "recompilation.version.m"
#line 890 "recompilation.version.m"
                              switch (recompilation__version__PredOrFunc_49) {
#line 890 "recompilation.version.m"
                                default: /*NOTREACHED*/ MR_assert(0);
#line 890 "recompilation.version.m"
                                case (MR_Integer) 1:
#line 888 "recompilation.version.m"
                                  {
#line 889 "recompilation.version.m"
                                    {
#line 889 "recompilation.version.m"
                                      recompilation__version__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__version_scalar_common_2[22], ((MR_Box) (recompilation__version__Det1_53)), ((MR_Box) (recompilation__version__Det2_66)));
                                    }
#line 888 "recompilation.version.m"
                                  }
#line 890 "recompilation.version.m"
                                  break;
#line 890 "recompilation.version.m"
                                case (MR_Integer) 0:
#line 891 "recompilation.version.m"
                                  recompilation__version__succeeded = MR_TRUE;
#line 890 "recompilation.version.m"
                                  break;
#line 890 "recompilation.version.m"
                              }
#line 874 "recompilation.version.m"
                              if (recompilation__version__succeeded)
#line 894 "recompilation.version.m"
                                {
#line 894 "recompilation.version.m"
                                  recompilation__version__succeeded = recompilation__version__pred_or_func_type_is_unchanged_10_p_0(recompilation__version__TVarSet1_55, recompilation__version__ExistQVars1_57, recompilation__version__TypesAndModes1_50, recompilation__version__WithType1_51, recompilation__version__Constraints1_59, recompilation__version__TVarSet2_68, recompilation__version__ExistQVars2_70, recompilation__version__TypesAndModes2_63, recompilation__version__WithType2_64, recompilation__version__Constraints2_71);
                                }
#line 874 "recompilation.version.m"
                            }
#line 874 "recompilation.version.m"
                        }
#line 874 "recompilation.version.m"
                    }
#line 874 "recompilation.version.m"
                }
#line 873 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 898 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 873 "recompilation.version.m"
              else
#line 900 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 869 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 2:
#line 903 "recompilation.version.m"
            {
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDecl1_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__Modes1_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 2)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__WithInst1_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 3)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__Det_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 4)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__InstVarSet1_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 5)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__Name_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 0)));
#line 903 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 1)));
#line 904 "recompilation.version.m"
              MR_Word recompilation__version__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 6)));
#line 904 "recompilation.version.m"
              MR_Integer recompilation__version__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl1_74, (MR_Integer) 7)));
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_292_292;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_293_293;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDecl2_81;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__Modes2_82;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__WithInst2_83;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__InstVarSet2_84;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__V_239_239;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__V_240_240;
#line 907 "recompilation.version.m"
              MR_Word recompilation__version__V_241_241;
#line 908 "recompilation.version.m"
              MR_Word recompilation__version__V_85_85;
#line 908 "recompilation.version.m"
              MR_Integer recompilation__version__V_86_86;

#line 907 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 907 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 907 "recompilation.version.m"
                {
#line 907 "recompilation.version.m"
                  recompilation__version__ItemModeDecl2_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 908 "recompilation.version.m"
                  recompilation__version__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 0)));
#line 908 "recompilation.version.m"
                  recompilation__version__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 1)));
#line 908 "recompilation.version.m"
                  recompilation__version__Modes2_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 2)));
#line 908 "recompilation.version.m"
                  recompilation__version__WithInst2_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 3)));
#line 908 "recompilation.version.m"
                  recompilation__version__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 4)));
#line 908 "recompilation.version.m"
                  recompilation__version__InstVarSet2_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 5)));
#line 908 "recompilation.version.m"
                  recompilation__version__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 6)));
#line 908 "recompilation.version.m"
                  recompilation__version__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl2_81, (MR_Integer) 7)));
#line 908 "recompilation.version.m"
                  {
#line 908 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Name_196, recompilation__version__V_239_239);
                  }
#line 907 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 907 "recompilation.version.m"
                    {
#line 7501 "recompilation.version.c"
                      recompilation__version__TypeInfo_292_292 = (MR_Word) &recompilation__version_scalar_common_2[1];
#line 908 "recompilation.version.m"
                      {
#line 908 "recompilation.version.m"
                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_292_292, ((MR_Box) (recompilation__version__PredOrFunc_197)), ((MR_Box) (recompilation__version__V_240_240)));
                      }
#line 907 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 907 "recompilation.version.m"
                        {
#line 7512 "recompilation.version.c"
                          recompilation__version__TypeInfo_293_293 = (MR_Word) &recompilation__version_scalar_common_2[22];
#line 908 "recompilation.version.m"
                          {
#line 908 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_293_293, ((MR_Box) (recompilation__version__Det_77)), ((MR_Box) (recompilation__version__V_241_241)));
                          }
#line 907 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 910 "recompilation.version.m"
                            {
#line 910 "recompilation.version.m"
                              recompilation__version__succeeded = recompilation__version__pred_or_func_mode_is_unchanged_6_p_0(recompilation__version__InstVarSet1_78, recompilation__version__Modes1_75, recompilation__version__WithInst1_76, recompilation__version__InstVarSet2_84, recompilation__version__Modes2_82, recompilation__version__WithInst2_83);
                            }
#line 907 "recompilation.version.m"
                        }
#line 907 "recompilation.version.m"
                    }
#line 907 "recompilation.version.m"
                }
#line 906 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 913 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 906 "recompilation.version.m"
              else
#line 915 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 903 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 3:
#line 918 "recompilation.version.m"
            {
#line 918 "recompilation.version.m"
              MR_Word recompilation__version__ItemPragma1_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 918 "recompilation.version.m"
              MR_Word recompilation__version__PragmaType1_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma1_87, (MR_Integer) 0)));
#line 919 "recompilation.version.m"
              MR_Word recompilation__version__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma1_87, (MR_Integer) 1)));
#line 919 "recompilation.version.m"
              MR_Word recompilation__version__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma1_87, (MR_Integer) 2)));
#line 919 "recompilation.version.m"
              MR_Integer recompilation__version__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma1_87, (MR_Integer) 3)));
#line 924 "recompilation.version.m"
              MR_Word recompilation__version__PragmaType2_93;
#line 925 "recompilation.version.m"
              MR_Word recompilation__version__ItemPragma2_92;
#line 926 "recompilation.version.m"
              MR_Word recompilation__version__V_94_94;
#line 926 "recompilation.version.m"
              MR_Word recompilation__version__V_95_95;
#line 926 "recompilation.version.m"
              MR_Integer recompilation__version__V_96_96;

#line 925 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 925 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 925 "recompilation.version.m"
                {
#line 925 "recompilation.version.m"
                  recompilation__version__ItemPragma2_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 926 "recompilation.version.m"
                  recompilation__version__PragmaType2_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma2_92, (MR_Integer) 0)));
#line 926 "recompilation.version.m"
                  recompilation__version__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma2_92, (MR_Integer) 1)));
#line 926 "recompilation.version.m"
                  recompilation__version__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma2_92, (MR_Integer) 2)));
#line 926 "recompilation.version.m"
                  recompilation__version__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma2_92, (MR_Integer) 3)));
#line 926 "recompilation.version.m"
                  recompilation__version__succeeded = MR_TRUE;
#line 925 "recompilation.version.m"
                }
#line 924 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 928 "recompilation.version.m"
                {
#line 928 "recompilation.version.m"
                  MR_Word recompilation__version__TypeSubst1_103;
#line 928 "recompilation.version.m"
                  MR_Word recompilation__version__TypeSubst2_105;
#line 928 "recompilation.version.m"
                  MR_Word recompilation__version__TVarSet1_200;
#line 928 "recompilation.version.m"
                  MR_Word recompilation__version__TVarSet2_201;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__TypeInfo_305_305;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__TypeInfo_306_306;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__TypeSpecInfo1_97;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__TypeSpecInfo2_98;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__SpecName_99;
#line 929 "recompilation.version.m"
                  MR_Integer recompilation__version__Arity_100;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__MaybePredOrFunc_101;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__MaybeModes_102;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__Name_198;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__V_242_242;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__V_243_243;
#line 929 "recompilation.version.m"
                  MR_Integer recompilation__version__V_244_244;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__V_245_245;
#line 929 "recompilation.version.m"
                  MR_Word recompilation__version__V_246_246;
#line 931 "recompilation.version.m"
                  MR_Word recompilation__version__V_104_104;
#line 933 "recompilation.version.m"
                  MR_Word recompilation__version__V_106_106;

#line 929 "recompilation.version.m"
                  recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__PragmaType1_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType1_88, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 929 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 929 "recompilation.version.m"
                    {
#line 929 "recompilation.version.m"
                      recompilation__version__TypeSpecInfo1_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType1_88, (MR_Integer) 1)));
#line 930 "recompilation.version.m"
                      recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__PragmaType2_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType2_93, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 930 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 930 "recompilation.version.m"
                        {
#line 930 "recompilation.version.m"
                          recompilation__version__TypeSpecInfo2_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType2_93, (MR_Integer) 1)));
#line 931 "recompilation.version.m"
                          recompilation__version__Name_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 0)));
#line 931 "recompilation.version.m"
                          recompilation__version__SpecName_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 1)));
#line 931 "recompilation.version.m"
                          recompilation__version__Arity_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 2)));
#line 931 "recompilation.version.m"
                          recompilation__version__MaybePredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 3)));
#line 931 "recompilation.version.m"
                          recompilation__version__MaybeModes_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 4)));
#line 931 "recompilation.version.m"
                          recompilation__version__TypeSubst1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 5)));
#line 931 "recompilation.version.m"
                          recompilation__version__TVarSet1_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 6)));
#line 931 "recompilation.version.m"
                          recompilation__version__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo1_97, (MR_Integer) 7)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 0)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 1)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 2)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 3)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 4)));
#line 933 "recompilation.version.m"
                          recompilation__version__TypeSubst2_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 5)));
#line 933 "recompilation.version.m"
                          recompilation__version__TVarSet2_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 6)));
#line 933 "recompilation.version.m"
                          recompilation__version__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo2_98, (MR_Integer) 7)));
#line 933 "recompilation.version.m"
                          {
#line 933 "recompilation.version.m"
                            recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Name_198, recompilation__version__V_242_242);
                          }
#line 929 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 929 "recompilation.version.m"
                            {
#line 933 "recompilation.version.m"
                              {
#line 933 "recompilation.version.m"
                                recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__SpecName_99, recompilation__version__V_243_243);
                              }
#line 929 "recompilation.version.m"
                              if (recompilation__version__succeeded)
#line 929 "recompilation.version.m"
                                {
#line 933 "recompilation.version.m"
                                  recompilation__version__succeeded = (recompilation__version__Arity_100 == recompilation__version__V_244_244);
#line 929 "recompilation.version.m"
                                  if (recompilation__version__succeeded)
#line 929 "recompilation.version.m"
                                    {
#line 7706 "recompilation.version.c"
                                      recompilation__version__TypeInfo_305_305 = (MR_Word) &recompilation__version_scalar_common_2[1];
#line 933 "recompilation.version.m"
                                      {
#line 933 "recompilation.version.m"
                                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_305_305, ((MR_Box) (recompilation__version__MaybePredOrFunc_101)), ((MR_Box) (recompilation__version__V_245_245)));
                                      }
#line 929 "recompilation.version.m"
                                      if (recompilation__version__succeeded)
#line 929 "recompilation.version.m"
                                        {
#line 7717 "recompilation.version.c"
                                          recompilation__version__TypeInfo_306_306 = (MR_Word) &recompilation__version_scalar_common_2[25];
#line 933 "recompilation.version.m"
                                          {
#line 933 "recompilation.version.m"
                                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_306_306, ((MR_Box) (recompilation__version__MaybeModes_102)), ((MR_Box) (recompilation__version__V_246_246)));
                                          }
#line 929 "recompilation.version.m"
                                        }
#line 929 "recompilation.version.m"
                                    }
#line 929 "recompilation.version.m"
                                }
#line 929 "recompilation.version.m"
                            }
#line 930 "recompilation.version.m"
                        }
#line 929 "recompilation.version.m"
                    }
#line 928 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 936 "recompilation.version.m"
                    {
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TypeInfo_219_219 = (MR_Word) &recompilation__version_scalar_common_2[2];
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TypeCtorInfo_220_220 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TVars1_107;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__Types1_108;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TVars2_109;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__Types2_110;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__KindMap_111;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TVarTypes1_112;
#line 936 "recompilation.version.m"
                      MR_Word recompilation__version__TVarTypes2_113;
#line 944 "recompilation.version.m"
                      MR_Word recompilation__version__V_186_186;
#line 944 "recompilation.version.m"
                      MR_Word recompilation__version__V_187_187;
#line 944 "recompilation.version.m"
                      MR_Word recompilation__version__V_114_114;
#line 944 "recompilation.version.m"
                      MR_Word recompilation__version__V_115_115;
#line 944 "recompilation.version.m"
                      MR_Word recompilation__version__V_116_116;

#line 936 "recompilation.version.m"
                      {
#line 936 "recompilation.version.m"
                        mercury__assoc_list__keys_and_values_3_p_0(recompilation__version__TypeInfo_219_219, recompilation__version__TypeCtorInfo_220_220, recompilation__version__TypeSubst1_103, &recompilation__version__TVars1_107, &recompilation__version__Types1_108);
                      }
#line 937 "recompilation.version.m"
                      {
#line 937 "recompilation.version.m"
                        mercury__assoc_list__keys_and_values_3_p_0(recompilation__version__TypeInfo_219_219, recompilation__version__TypeCtorInfo_220_220, recompilation__version__TypeSubst2_105, &recompilation__version__TVars2_109, &recompilation__version__Types2_110);
                      }
#line 940 "recompilation.version.m"
                      {
#line 940 "recompilation.version.m"
                        recompilation__version__KindMap_111 = mercury__map__init_0_f_0(recompilation__version__TypeInfo_219_219, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                      }
#line 941 "recompilation.version.m"
                      {
#line 941 "recompilation.version.m"
                        parse_tree__prog_type__var_list_to_type_list_3_p_0(recompilation__version__KindMap_111, recompilation__version__TVars1_107, &recompilation__version__TVarTypes1_112);
                      }
#line 942 "recompilation.version.m"
                      {
#line 942 "recompilation.version.m"
                        parse_tree__prog_type__var_list_to_type_list_3_p_0(recompilation__version__KindMap_111, recompilation__version__TVars2_109, &recompilation__version__TVarTypes2_113);
                      }
#line 945 "recompilation.version.m"
                      {
#line 945 "recompilation.version.m"
                        recompilation__version__V_186_186 = mercury__list__f_43_43_2_f_0(recompilation__version__TypeCtorInfo_220_220, recompilation__version__TVarTypes1_112, recompilation__version__Types1_108);
                      }
#line 946 "recompilation.version.m"
                      {
#line 946 "recompilation.version.m"
                        recompilation__version__V_187_187 = mercury__list__f_43_43_2_f_0(recompilation__version__TypeCtorInfo_220_220, recompilation__version__TVarTypes2_113, recompilation__version__Types2_110);
                      }
#line 944 "recompilation.version.m"
                      {
#line 944 "recompilation.version.m"
                        recompilation__version__succeeded = recompilation__version__type_list_is_unchanged_7_p_0(recompilation__version__TVarSet1_200, recompilation__version__V_186_186, recompilation__version__TVarSet2_201, recompilation__version__V_187_187, &recompilation__version__V_114_114, &recompilation__version__V_115_115, &recompilation__version__V_116_116);
                      }
#line 943 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 949 "recompilation.version.m"
                        *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 943 "recompilation.version.m"
                      else
#line 951 "recompilation.version.m"
                        *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 936 "recompilation.version.m"
                    }
#line 928 "recompilation.version.m"
                  else
#line 954 "recompilation.version.m"
                    {
#line 954 "recompilation.version.m"
                      {
#line 954 "recompilation.version.m"
                        recompilation__version__succeeded = parse_tree__prog_item____Unify____pragma_type_0_0(recompilation__version__PragmaType1_88, recompilation__version__PragmaType2_93);
                      }
#line 954 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 955 "recompilation.version.m"
                        *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 954 "recompilation.version.m"
                      else
#line 957 "recompilation.version.m"
                        *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 954 "recompilation.version.m"
                    }
#line 928 "recompilation.version.m"
                }
#line 924 "recompilation.version.m"
              else
#line 961 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 918 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 4:
#line 964 "recompilation.version.m"
            {
#line 964 "recompilation.version.m"
              MR_Word recompilation__version__ItemPromiseInfo1_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 964 "recompilation.version.m"
              MR_Word recompilation__version__PromiseType_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 0)));
#line 964 "recompilation.version.m"
              MR_Word recompilation__version__UnivVars_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 3)));
#line 964 "recompilation.version.m"
              MR_Word recompilation__version__Goal_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 1)));
#line 965 "recompilation.version.m"
              MR_Word recompilation__version__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 2)));
#line 965 "recompilation.version.m"
              MR_Word recompilation__version__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 4)));
#line 965 "recompilation.version.m"
              MR_Integer recompilation__version__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo1_117, (MR_Integer) 5)));
#line 968 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_311_311;
#line 968 "recompilation.version.m"
              MR_Word recompilation__version__ItemPromiseInfo2_123;
#line 968 "recompilation.version.m"
              MR_Word recompilation__version__V_247_247;
#line 968 "recompilation.version.m"
              MR_Word recompilation__version__V_248_248;
#line 968 "recompilation.version.m"
              MR_Word recompilation__version__V_249_249;
#line 969 "recompilation.version.m"
              MR_Word recompilation__version__V_124_124;
#line 969 "recompilation.version.m"
              MR_Word recompilation__version__V_125_125;
#line 969 "recompilation.version.m"
              MR_Integer recompilation__version__V_126_126;

#line 968 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 968 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 968 "recompilation.version.m"
                {
#line 968 "recompilation.version.m"
                  recompilation__version__ItemPromiseInfo2_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 0)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 1)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 2)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 3)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 4)));
#line 969 "recompilation.version.m"
                  recompilation__version__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPromiseInfo2_123, (MR_Integer) 5)));
#line 969 "recompilation.version.m"
                  recompilation__version__succeeded = (recompilation__version__PromiseType_118 == recompilation__version__V_247_247);
#line 968 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 968 "recompilation.version.m"
                    {
#line 969 "recompilation.version.m"
                      {
#line 969 "recompilation.version.m"
                        recompilation__version__succeeded = parse_tree__prog_item____Unify____goal_0_0(recompilation__version__Goal_208, recompilation__version__V_248_248);
                      }
#line 968 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 968 "recompilation.version.m"
                        {
#line 7918 "recompilation.version.c"
                          recompilation__version__TypeInfo_311_311 = (MR_Word) &recompilation__version_scalar_common_2[27];
#line 969 "recompilation.version.m"
                          {
#line 969 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_311_311, ((MR_Box) (recompilation__version__UnivVars_120)), ((MR_Box) (recompilation__version__V_249_249)));
                          }
#line 968 "recompilation.version.m"
                        }
#line 968 "recompilation.version.m"
                    }
#line 968 "recompilation.version.m"
                }
#line 967 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 972 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 967 "recompilation.version.m"
              else
#line 974 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 964 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 5:
#line 1010 "recompilation.version.m"
            {
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__ItemTypeClass1_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__Constraints_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 0)));
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__FunDeps_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 1)));
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__Vars_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 3)));
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__Interface1_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 4)));
#line 1010 "recompilation.version.m"
              MR_Word recompilation__version__Name_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 2)));
#line 1011 "recompilation.version.m"
              MR_Word recompilation__version__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 5)));
#line 1011 "recompilation.version.m"
              MR_Word recompilation__version__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 6)));
#line 1011 "recompilation.version.m"
              MR_Integer recompilation__version__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass1_155, (MR_Integer) 7)));
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_316_316;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_317_317;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_318_318;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__ItemTypeClass2_163;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__Interface2_164;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__V_262_262;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__V_263_263;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__V_264_264;
#line 1014 "recompilation.version.m"
              MR_Word recompilation__version__V_265_265;
#line 1015 "recompilation.version.m"
              MR_Word recompilation__version__V_165_165;
#line 1015 "recompilation.version.m"
              MR_Word recompilation__version__V_166_166;
#line 1015 "recompilation.version.m"
              MR_Integer recompilation__version__V_167_167;

#line 1014 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1014 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1014 "recompilation.version.m"
                {
#line 1014 "recompilation.version.m"
                  recompilation__version__ItemTypeClass2_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 0)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 1)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 2)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 3)));
#line 1015 "recompilation.version.m"
                  recompilation__version__Interface2_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 4)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 5)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 6)));
#line 1015 "recompilation.version.m"
                  recompilation__version__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass2_163, (MR_Integer) 7)));
#line 1015 "recompilation.version.m"
                  {
#line 1015 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Constraints_156, recompilation__version__V_262_262);
                  }
#line 1014 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 1014 "recompilation.version.m"
                    {
#line 8023 "recompilation.version.c"
                      recompilation__version__TypeInfo_316_316 = (MR_Word) &recompilation__version_scalar_common_2[28];
#line 1015 "recompilation.version.m"
                      {
#line 1015 "recompilation.version.m"
                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_316_316, ((MR_Box) (recompilation__version__FunDeps_157)), ((MR_Box) (recompilation__version__V_263_263)));
                      }
#line 1014 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 1014 "recompilation.version.m"
                        {
#line 8034 "recompilation.version.c"
                          recompilation__version__TypeInfo_317_317 = (MR_Word) &recompilation__version_scalar_common_2[21];
#line 1015 "recompilation.version.m"
                          {
#line 1015 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_317_317, ((MR_Box) (recompilation__version__Name_215)), ((MR_Box) (recompilation__version__V_264_264)));
                          }
#line 1014 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 1014 "recompilation.version.m"
                            {
#line 8045 "recompilation.version.c"
                              recompilation__version__TypeInfo_318_318 = (MR_Word) &recompilation__version_scalar_common_2[30];
#line 1015 "recompilation.version.m"
                              {
#line 1015 "recompilation.version.m"
                                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_318_318, ((MR_Box) (recompilation__version__Vars_158)), ((MR_Box) (recompilation__version__V_265_265)));
                              }
#line 1014 "recompilation.version.m"
                              if (recompilation__version__succeeded)
#line 1017 "recompilation.version.m"
                                {
#line 1017 "recompilation.version.m"
                                  recompilation__version__succeeded = recompilation__version__class_interface_is_unchanged_2_p_0(recompilation__version__Interface1_159, recompilation__version__Interface2_164);
                                }
#line 1014 "recompilation.version.m"
                            }
#line 1014 "recompilation.version.m"
                        }
#line 1014 "recompilation.version.m"
                    }
#line 1014 "recompilation.version.m"
                }
#line 1013 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1019 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 1013 "recompilation.version.m"
              else
#line 1021 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 1010 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 6:
#line 1024 "recompilation.version.m"
            {
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__ItemInstance1_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__Types_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 2)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__OriginalTypes_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 3)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__Body_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 4)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__Module_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 6)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__Name_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 1)));
#line 1024 "recompilation.version.m"
              MR_Word recompilation__version__Constraints_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 0)));
#line 1025 "recompilation.version.m"
              MR_Word recompilation__version__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 5)));
#line 1025 "recompilation.version.m"
              MR_Word recompilation__version__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 7)));
#line 1025 "recompilation.version.m"
              MR_Integer recompilation__version__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance1_168, (MR_Integer) 8)));
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_286_286;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_287_287;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_288_288;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__ItemInstance2_176;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_266_266;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_267_267;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_268_268;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_269_269;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_270_270;
#line 1028 "recompilation.version.m"
              MR_Word recompilation__version__V_271_271;
#line 1029 "recompilation.version.m"
              MR_Word recompilation__version__V_177_177;
#line 1029 "recompilation.version.m"
              MR_Word recompilation__version__V_178_178;
#line 1029 "recompilation.version.m"
              MR_Integer recompilation__version__V_179_179;

#line 1028 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1028 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1028 "recompilation.version.m"
                {
#line 1028 "recompilation.version.m"
                  recompilation__version__ItemInstance2_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 0)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 1)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 2)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 3)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 4)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 5)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 6)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 7)));
#line 1029 "recompilation.version.m"
                  recompilation__version__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance2_176, (MR_Integer) 8)));
#line 1029 "recompilation.version.m"
                  {
#line 1029 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Constraints_217, recompilation__version__V_266_266);
                  }
#line 1028 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 1028 "recompilation.version.m"
                    {
#line 8165 "recompilation.version.c"
                      recompilation__version__TypeInfo_286_286 = (MR_Word) &recompilation__version_scalar_common_2[20];
#line 1029 "recompilation.version.m"
                      {
#line 1029 "recompilation.version.m"
                        recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_286_286, ((MR_Box) (recompilation__version__Name_216)), ((MR_Box) (recompilation__version__V_267_267)));
                      }
#line 1028 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 1028 "recompilation.version.m"
                        {
#line 8176 "recompilation.version.c"
                          recompilation__version__TypeInfo_287_287 = (MR_Word) &recompilation__version_scalar_common_2[20];
#line 1029 "recompilation.version.m"
                          {
#line 1029 "recompilation.version.m"
                            recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_287_287, ((MR_Box) (recompilation__version__Types_169)), ((MR_Box) (recompilation__version__V_268_268)));
                          }
#line 1028 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 1028 "recompilation.version.m"
                            {
#line 8187 "recompilation.version.c"
                              recompilation__version__TypeInfo_288_288 = (MR_Word) &recompilation__version_scalar_common_2[21];
#line 1029 "recompilation.version.m"
                              {
#line 1029 "recompilation.version.m"
                                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_288_288, ((MR_Box) (recompilation__version__OriginalTypes_170)), ((MR_Box) (recompilation__version__V_269_269)));
                              }
#line 1028 "recompilation.version.m"
                              if (recompilation__version__succeeded)
#line 1028 "recompilation.version.m"
                                {
#line 1029 "recompilation.version.m"
                                  {
#line 1029 "recompilation.version.m"
                                    recompilation__version__succeeded = parse_tree__prog_data____Unify____instance_body_0_0(recompilation__version__Body_171, recompilation__version__V_270_270);
                                  }
#line 1028 "recompilation.version.m"
                                  if (recompilation__version__succeeded)
#line 1029 "recompilation.version.m"
                                    {
#line 1029 "recompilation.version.m"
                                      recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__Module_173, recompilation__version__V_271_271);
                                    }
#line 1028 "recompilation.version.m"
                                }
#line 1028 "recompilation.version.m"
                            }
#line 1028 "recompilation.version.m"
                        }
#line 1028 "recompilation.version.m"
                    }
#line 1028 "recompilation.version.m"
                }
#line 1027 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1032 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 1027 "recompilation.version.m"
              else
#line 1034 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 1024 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 7:
#line 977 "recompilation.version.m"
            {
#line 977 "recompilation.version.m"
              MR_Word recompilation__version__ItemInitialise1_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 977 "recompilation.version.m"
              MR_Word recompilation__version__A_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise1_127, (MR_Integer) 0)));
#line 977 "recompilation.version.m"
              MR_Integer recompilation__version__B_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise1_127, (MR_Integer) 1)));
#line 977 "recompilation.version.m"
              MR_Word recompilation__version__C_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise1_127, (MR_Integer) 2)));
#line 978 "recompilation.version.m"
              MR_Word recompilation__version__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise1_127, (MR_Integer) 3)));
#line 978 "recompilation.version.m"
              MR_Integer recompilation__version__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise1_127, (MR_Integer) 4)));
#line 980 "recompilation.version.m"
              MR_Word recompilation__version__ItemInitialise2_133;
#line 980 "recompilation.version.m"
              MR_Word recompilation__version__V_250_250;
#line 980 "recompilation.version.m"
              MR_Integer recompilation__version__V_251_251;
#line 980 "recompilation.version.m"
              MR_Word recompilation__version__V_252_252;
#line 981 "recompilation.version.m"
              MR_Word recompilation__version__V_134_134;
#line 981 "recompilation.version.m"
              MR_Integer recompilation__version__V_135_135;

#line 980 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 980 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 980 "recompilation.version.m"
                {
#line 980 "recompilation.version.m"
                  recompilation__version__ItemInitialise2_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 981 "recompilation.version.m"
                  recompilation__version__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise2_133, (MR_Integer) 0)));
#line 981 "recompilation.version.m"
                  recompilation__version__V_251_251 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise2_133, (MR_Integer) 1)));
#line 981 "recompilation.version.m"
                  recompilation__version__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise2_133, (MR_Integer) 2)));
#line 981 "recompilation.version.m"
                  recompilation__version__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise2_133, (MR_Integer) 3)));
#line 981 "recompilation.version.m"
                  recompilation__version__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInitialise2_133, (MR_Integer) 4)));
#line 981 "recompilation.version.m"
                  {
#line 981 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__A_128, recompilation__version__V_250_250);
                  }
#line 980 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 980 "recompilation.version.m"
                    {
#line 981 "recompilation.version.m"
                      recompilation__version__succeeded = (recompilation__version__B_129 == recompilation__version__V_251_251);
#line 980 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 981 "recompilation.version.m"
                        {
#line 981 "recompilation.version.m"
                          recompilation__version__succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(recompilation__version__C_130, recompilation__version__V_252_252);
                        }
#line 980 "recompilation.version.m"
                    }
#line 980 "recompilation.version.m"
                }
#line 979 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 983 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 979 "recompilation.version.m"
              else
#line 985 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 977 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 8:
#line 988 "recompilation.version.m"
            {
#line 988 "recompilation.version.m"
              MR_Word recompilation__version__ItemFinalise1_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 988 "recompilation.version.m"
              MR_Word recompilation__version__A_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise1_136, (MR_Integer) 0)));
#line 988 "recompilation.version.m"
              MR_Integer recompilation__version__B_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise1_136, (MR_Integer) 1)));
#line 988 "recompilation.version.m"
              MR_Word recompilation__version__C_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise1_136, (MR_Integer) 2)));
#line 989 "recompilation.version.m"
              MR_Word recompilation__version__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise1_136, (MR_Integer) 3)));
#line 989 "recompilation.version.m"
              MR_Integer recompilation__version__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise1_136, (MR_Integer) 4)));
#line 991 "recompilation.version.m"
              MR_Word recompilation__version__ItemFinalise2_139;
#line 991 "recompilation.version.m"
              MR_Word recompilation__version__V_253_253;
#line 991 "recompilation.version.m"
              MR_Integer recompilation__version__V_254_254;
#line 991 "recompilation.version.m"
              MR_Word recompilation__version__V_255_255;
#line 992 "recompilation.version.m"
              MR_Word recompilation__version__V_140_140;
#line 992 "recompilation.version.m"
              MR_Integer recompilation__version__V_141_141;

#line 991 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 991 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 991 "recompilation.version.m"
                {
#line 991 "recompilation.version.m"
                  recompilation__version__ItemFinalise2_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 992 "recompilation.version.m"
                  recompilation__version__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise2_139, (MR_Integer) 0)));
#line 992 "recompilation.version.m"
                  recompilation__version__V_254_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise2_139, (MR_Integer) 1)));
#line 992 "recompilation.version.m"
                  recompilation__version__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise2_139, (MR_Integer) 2)));
#line 992 "recompilation.version.m"
                  recompilation__version__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise2_139, (MR_Integer) 3)));
#line 992 "recompilation.version.m"
                  recompilation__version__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemFinalise2_139, (MR_Integer) 4)));
#line 992 "recompilation.version.m"
                  {
#line 992 "recompilation.version.m"
                    recompilation__version__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__version__A_209, recompilation__version__V_253_253);
                  }
#line 991 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 991 "recompilation.version.m"
                    {
#line 992 "recompilation.version.m"
                      recompilation__version__succeeded = (recompilation__version__B_210 == recompilation__version__V_254_254);
#line 991 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 992 "recompilation.version.m"
                        {
#line 992 "recompilation.version.m"
                          recompilation__version__succeeded = parse_tree__prog_item____Unify____item_maybe_attrs_0_0(recompilation__version__C_211, recompilation__version__V_255_255);
                        }
#line 991 "recompilation.version.m"
                    }
#line 991 "recompilation.version.m"
                }
#line 990 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 994 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 990 "recompilation.version.m"
              else
#line 996 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 988 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 9:
#line 999 "recompilation.version.m"
            {
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__ItemMutable1_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__D_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 5)));
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__E_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 6)));
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__F_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 7)));
#line 999 "recompilation.version.m"
              MR_String recompilation__version__A_212 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 0)));
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__B_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 2)));
#line 999 "recompilation.version.m"
              MR_Word recompilation__version__C_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 4)));
#line 1000 "recompilation.version.m"
              MR_Word recompilation__version__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 1)));
#line 1000 "recompilation.version.m"
              MR_Word recompilation__version__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 3)));
#line 1000 "recompilation.version.m"
              MR_Word recompilation__version__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 8)));
#line 1000 "recompilation.version.m"
              MR_Integer recompilation__version__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable1_142, (MR_Integer) 9)));
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_299_299;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_300_300;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__ItemMutable2_150;
#line 1002 "recompilation.version.m"
              MR_String recompilation__version__V_256_256;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__V_257_257;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__V_258_258;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__V_259_259;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__V_260_260;
#line 1002 "recompilation.version.m"
              MR_Word recompilation__version__V_261_261;
#line 1003 "recompilation.version.m"
              MR_Word recompilation__version__V_151_151;
#line 1003 "recompilation.version.m"
              MR_Word recompilation__version__V_152_152;
#line 1003 "recompilation.version.m"
              MR_Word recompilation__version__V_153_153;
#line 1003 "recompilation.version.m"
              MR_Integer recompilation__version__V_154_154;

#line 1002 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1002 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1002 "recompilation.version.m"
                {
#line 1002 "recompilation.version.m"
                  recompilation__version__ItemMutable2_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 0)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 1)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 2)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 3)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 4)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 5)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 6)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 7)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 8)));
#line 1003 "recompilation.version.m"
                  recompilation__version__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemMutable2_150, (MR_Integer) 9)));
#line 1003 "recompilation.version.m"
                  recompilation__version__succeeded = (strcmp(recompilation__version__A_212, recompilation__version__V_256_256) == 0);
#line 1002 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 1002 "recompilation.version.m"
                    {
#line 1003 "recompilation.version.m"
                      {
#line 1003 "recompilation.version.m"
                        recompilation__version__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(recompilation__version__B_213, recompilation__version__V_257_257);
                      }
#line 1002 "recompilation.version.m"
                      if (recompilation__version__succeeded)
#line 1002 "recompilation.version.m"
                        {
#line 1003 "recompilation.version.m"
                          {
#line 1003 "recompilation.version.m"
                            recompilation__version__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(recompilation__version__C_214, recompilation__version__V_258_258);
                          }
#line 1002 "recompilation.version.m"
                          if (recompilation__version__succeeded)
#line 1002 "recompilation.version.m"
                            {
#line 8499 "recompilation.version.c"
                              recompilation__version__TypeInfo_299_299 = (MR_Word) &recompilation__version_scalar_common_2[5];
#line 1003 "recompilation.version.m"
                              {
#line 1003 "recompilation.version.m"
                                recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_299_299, ((MR_Box) (recompilation__version__D_145)), ((MR_Box) (recompilation__version__V_259_259)));
                              }
#line 1002 "recompilation.version.m"
                              if (recompilation__version__succeeded)
#line 1002 "recompilation.version.m"
                                {
#line 8510 "recompilation.version.c"
                                  recompilation__version__TypeInfo_300_300 = (MR_Word) &recompilation__version_scalar_common_2[15];
#line 1003 "recompilation.version.m"
                                  {
#line 1003 "recompilation.version.m"
                                    recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_300_300, ((MR_Box) (recompilation__version__E_146)), ((MR_Box) (recompilation__version__V_260_260)));
                                  }
#line 1002 "recompilation.version.m"
                                  if (recompilation__version__succeeded)
#line 1003 "recompilation.version.m"
                                    {
#line 1003 "recompilation.version.m"
                                      recompilation__version__succeeded = parse_tree__prog_item____Unify____mutable_var_attributes_0_0(recompilation__version__F_147, recompilation__version__V_261_261);
                                    }
#line 1002 "recompilation.version.m"
                                }
#line 1002 "recompilation.version.m"
                            }
#line 1002 "recompilation.version.m"
                        }
#line 1002 "recompilation.version.m"
                    }
#line 1002 "recompilation.version.m"
                }
#line 1001 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1005 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 1001 "recompilation.version.m"
              else
#line 1007 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 999 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
          case (MR_Integer) 10:
#line 1037 "recompilation.version.m"
            {
#line 1037 "recompilation.version.m"
              MR_Word recompilation__version__ItemNothing1_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item1_4, (MR_Integer) 1)));
#line 1037 "recompilation.version.m"
              MR_Word recompilation__version__A_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing1_180, (MR_Integer) 0)));
#line 1038 "recompilation.version.m"
              MR_Word recompilation__version__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing1_180, (MR_Integer) 1)));
#line 1038 "recompilation.version.m"
              MR_Integer recompilation__version__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing1_180, (MR_Integer) 2)));
#line 1040 "recompilation.version.m"
              MR_Word recompilation__version__TypeInfo_302_302;
#line 1040 "recompilation.version.m"
              MR_Word recompilation__version__ItemNothing2_183;
#line 1040 "recompilation.version.m"
              MR_Word recompilation__version__V_272_272;
#line 1041 "recompilation.version.m"
              MR_Word recompilation__version__V_184_184;
#line 1041 "recompilation.version.m"
              MR_Integer recompilation__version__V_185_185;

#line 1040 "recompilation.version.m"
              recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item2_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 1040 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1040 "recompilation.version.m"
                {
#line 1040 "recompilation.version.m"
                  recompilation__version__ItemNothing2_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item2_5, (MR_Integer) 1)));
#line 1041 "recompilation.version.m"
                  recompilation__version__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing2_183, (MR_Integer) 0)));
#line 1041 "recompilation.version.m"
                  recompilation__version__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing2_183, (MR_Integer) 1)));
#line 1041 "recompilation.version.m"
                  recompilation__version__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemNothing2_183, (MR_Integer) 2)));
#line 8583 "recompilation.version.c"
                  recompilation__version__TypeInfo_302_302 = (MR_Word) &recompilation__version_scalar_common_2[23];
#line 1041 "recompilation.version.m"
                  {
#line 1041 "recompilation.version.m"
                    recompilation__version__succeeded = mercury__builtin__unify_2_p_0(recompilation__version__TypeInfo_302_302, ((MR_Box) (recompilation__version__A_218)), ((MR_Box) (recompilation__version__V_272_272)));
                  }
#line 1040 "recompilation.version.m"
                }
#line 1039 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 1043 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 0;
#line 1039 "recompilation.version.m"
              else
#line 1045 "recompilation.version.m"
                *recompilation__version__Changed_6 = (MR_Integer) 1;
#line 1037 "recompilation.version.m"
            }
#line 819 "recompilation.version.m"
            break;
#line 819 "recompilation.version.m"
        }
#line 819 "recompilation.version.m"
        break;
#line 819 "recompilation.version.m"
    }
#line 819 "recompilation.version.m"
  }
#line 815 "recompilation.version.m"
}

#line 767 "recompilation.version.m"
static void MR_CALL 
recompilation__version__are_items_changed_3_p_0(
#line 767 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 767 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 767 "recompilation.version.m"
  MR_Word * recompilation__version__HeadVar__3_3)
#line 767 "recompilation.version.m"
{
#line 770 "recompilation.version.m"
  while (MR_TRUE)
#line 770 "recompilation.version.m"
    {
#line 770 "recompilation.version.m"
      /* tailcall optimized into a loop */
#line 770 "recompilation.version.m"
      {
#line 770 "recompilation.version.m"
        MR_bool recompilation__version__succeeded;

#line 770 "recompilation.version.m"
        if ((recompilation__version__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "recompilation.version.m"
          if ((recompilation__version__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "recompilation.version.m"
            *recompilation__version__HeadVar__3_3 = (MR_Integer) 0;
#line 770 "recompilation.version.m"
          else
#line 771 "recompilation.version.m"
            *recompilation__version__HeadVar__3_3 = (MR_Integer) 1;
#line 770 "recompilation.version.m"
        else
#line 770 "recompilation.version.m"
          {
#line 770 "recompilation.version.m"
            MR_Word recompilation__version__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 770 "recompilation.version.m"
            MR_Word recompilation__version__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));

#line 770 "recompilation.version.m"
            if ((recompilation__version__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "recompilation.version.m"
              *recompilation__version__HeadVar__3_3 = (MR_Integer) 1;
#line 770 "recompilation.version.m"
            else
#line 774 "recompilation.version.m"
              {
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__Section1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__V_19_19, (MR_Integer) 0)));
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__Item1_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__V_19_19, (MR_Integer) 1)));
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__Section2_11;
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__Item2_12;
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__Items2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 774 "recompilation.version.m"
                MR_Word recompilation__version__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));

#line 773 "recompilation.version.m"
                recompilation__version__Section2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__V_17_17, (MR_Integer) 0)));
#line 773 "recompilation.version.m"
                recompilation__version__Item2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__V_17_17, (MR_Integer) 1)));
#line 775 "recompilation.version.m"
                recompilation__version__succeeded = (recompilation__version__Section1_8 == recompilation__version__Section2_11);
#line 775 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 776 "recompilation.version.m"
                  {
#line 776 "recompilation.version.m"
                    MR_Word recompilation__version__ItemChanged_15;

#line 776 "recompilation.version.m"
                    {
#line 776 "recompilation.version.m"
                      recompilation__version__is_item_changed_3_p_0(recompilation__version__Item1_9, recompilation__version__Item2_12, &recompilation__version__ItemChanged_15);
                    }
#line 780 "recompilation.version.m"
#line 780 "recompilation.version.m"
                    switch (recompilation__version__ItemChanged_15) {
#line 780 "recompilation.version.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 780 "recompilation.version.m"
                      case (MR_Integer) 1:
#line 778 "recompilation.version.m"
                        *recompilation__version__HeadVar__3_3 = (MR_Integer) 1;
#line 780 "recompilation.version.m"
                        break;
#line 780 "recompilation.version.m"
                      case (MR_Integer) 0:
#line 781 "recompilation.version.m"
                        {
#line 781 "recompilation.version.m"
                          /* direct tailcall eliminated */
#line 781 "recompilation.version.m"
                          {
#line 781 "recompilation.version.m"
                            MR_Word recompilation__version__HeadVar__1__tmp_copy_1 = recompilation__version__V_18_18;
#line 781 "recompilation.version.m"
                            MR_Word recompilation__version__HeadVar__2__tmp_copy_2 = recompilation__version__Items2_13;

#line 781 "recompilation.version.m"
                            recompilation__version__HeadVar__2_2 = recompilation__version__HeadVar__2__tmp_copy_2;
#line 781 "recompilation.version.m"
                            recompilation__version__HeadVar__1_1 = recompilation__version__HeadVar__1__tmp_copy_1;
#line 781 "recompilation.version.m"
                          }
#line 781 "recompilation.version.m"
                          continue;
#line 781 "recompilation.version.m"
                        }
#line 780 "recompilation.version.m"
                        break;
#line 780 "recompilation.version.m"
                    }
#line 776 "recompilation.version.m"
                  }
#line 775 "recompilation.version.m"
                else
#line 785 "recompilation.version.m"
                  *recompilation__version__HeadVar__3_3 = (MR_Integer) 1;
#line 774 "recompilation.version.m"
              }
#line 770 "recompilation.version.m"
          }
#line 770 "recompilation.version.m"
      }
#line 770 "recompilation.version.m"
      break;
#line 770 "recompilation.version.m"
    }
#line 767 "recompilation.version.m"
}

#line 612 "recompilation.version.m"
static void MR_CALL 
recompilation__version__is_pred_pragma_2_p_0(
#line 612 "recompilation.version.m"
  MR_Word recompilation__version__PragmaType_3,
#line 612 "recompilation.version.m"
  MR_Word * recompilation__version__MaybePredOrFuncId_4)
#line 612 "recompilation.version.m"
{
#line 625 "recompilation.version.m"
  {
#line 625 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 625 "recompilation.version.m"
#line 625 "recompilation.version.m"
    switch (MR_tag((MR_Word) recompilation__version__PragmaType_3)) {
#line 625 "recompilation.version.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 625 "recompilation.version.m"
      case (MR_Integer) 0:
#line 625 "recompilation.version.m"
      case (MR_Integer) 1:
#line 626 "recompilation.version.m"
        *recompilation__version__MaybePredOrFuncId_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "recompilation.version.m"
        break;
#line 625 "recompilation.version.m"
      case (MR_Integer) 2:
#line 674 "recompilation.version.m"
        {
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__FPInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__version__PragmaType_3, (MR_Integer) 0)));
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 3)));
#line 674 "recompilation.version.m"
          MR_Integer recompilation__version__V_75_75;
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__V_76_76;
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__V_77_77;
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__V_78_78;
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__Name_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 1)));
#line 674 "recompilation.version.m"
          MR_Integer recompilation__version__Arity_103;
#line 674 "recompilation.version.m"
          MR_Word recompilation__version__PredOrFunc_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 2)));
#line 675 "recompilation.version.m"
          MR_Word recompilation__version__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 0)));
#line 675 "recompilation.version.m"
          MR_Word recompilation__version__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 4)));
#line 675 "recompilation.version.m"
          MR_Word recompilation__version__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 5)));
#line 675 "recompilation.version.m"
          MR_Word recompilation__version__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPInfo_41, (MR_Integer) 6)));

#line 676 "recompilation.version.m"
          {
#line 676 "recompilation.version.m"
            recompilation__version__V_75_75 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, recompilation__version__Args_43);
          }
#line 676 "recompilation.version.m"
          {
#line 676 "recompilation.version.m"
            parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_104, &recompilation__version__Arity_103, recompilation__version__V_75_75);
          }
#line 677 "recompilation.version.m"
          {
#line 677 "recompilation.version.m"
            recompilation__version__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(1), recompilation__version__V_77_77, 0) = ((MR_Box) (recompilation__version__PredOrFunc_104));
#line 677 "recompilation.version.m"
          }
#line 677 "recompilation.version.m"
          {
#line 677 "recompilation.version.m"
            recompilation__version__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_78_78, 0) = ((MR_Box) (recompilation__version__Name_102));
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_78_78, 1) = ((MR_Box) (recompilation__version__Arity_103));
#line 677 "recompilation.version.m"
          }
#line 677 "recompilation.version.m"
          {
#line 677 "recompilation.version.m"
            recompilation__version__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_76_76, 0) = ((MR_Box) (recompilation__version__V_77_77));
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_76_76, 1) = ((MR_Box) (recompilation__version__V_78_78));
#line 677 "recompilation.version.m"
          }
#line 677 "recompilation.version.m"
          {
#line 677 "recompilation.version.m"
            MR_Word base;
#line 677 "recompilation.version.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 677 "recompilation.version.m"
            *recompilation__version__MaybePredOrFuncId_4 = base;
#line 677 "recompilation.version.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_76_76));
#line 677 "recompilation.version.m"
          }
#line 674 "recompilation.version.m"
        }
#line 625 "recompilation.version.m"
        break;
#line 625 "recompilation.version.m"
      case (MR_Integer) 3:
#line 625 "recompilation.version.m"
#line 625 "recompilation.version.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 0)))) {
#line 625 "recompilation.version.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "recompilation.version.m"
          case (MR_Integer) 0:
#line 701 "recompilation.version.m"
            {
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__FPEInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredNameModesPF_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPEInfo_49, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Modes_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_51, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__V_69_69;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_70_70;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_71_71;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_72_72;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Name_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_51, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_109;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_51, (MR_Integer) 2)));
#line 686 "recompilation.version.m"
              MR_Word recompilation__version__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FPEInfo_49, (MR_Integer) 0)));
#line 686 "recompilation.version.m"
              MR_String recompilation__version__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__FPEInfo_49, (MR_Integer) 2)));

#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                recompilation__version__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_68);
              }
#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_110, &recompilation__version__Arity_109, recompilation__version__V_69_69);
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_71_71, 0) = ((MR_Box) (recompilation__version__PredOrFunc_110));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_72_72, 0) = ((MR_Box) (recompilation__version__Name_108));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_72_72, 1) = ((MR_Box) (recompilation__version__Arity_109));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_70_70, 0) = ((MR_Box) (recompilation__version__V_71_71));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_70_70, 1) = ((MR_Box) (recompilation__version__V_72_72));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                MR_Word base;
#line 704 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_70_70));
#line 704 "recompilation.version.m"
              }
#line 701 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 1:
#line 625 "recompilation.version.m"
          case (MR_Integer) 2:
#line 625 "recompilation.version.m"
          case (MR_Integer) 15:
#line 625 "recompilation.version.m"
          case (MR_Integer) 27:
#line 625 "recompilation.version.m"
          case (MR_Integer) 28:
#line 625 "recompilation.version.m"
          case (MR_Integer) 29:
#line 626 "recompilation.version.m"
            *recompilation__version__MaybePredOrFuncId_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 3:
#line 679 "recompilation.version.m"
            {
#line 679 "recompilation.version.m"
              MR_Word recompilation__version__ExternalInfo_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 679 "recompilation.version.m"
              MR_Word recompilation__version__V_73_73;
#line 679 "recompilation.version.m"
              MR_Word recompilation__version__V_74_74;
#line 679 "recompilation.version.m"
              MR_Word recompilation__version__Name_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ExternalInfo_47, (MR_Integer) 0)));
#line 679 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ExternalInfo_47, (MR_Integer) 1)));
#line 679 "recompilation.version.m"
              MR_Word recompilation__version__MaybePredOrFunc_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ExternalInfo_47, (MR_Integer) 2)));
#line 680 "recompilation.version.m"
              MR_Word recompilation__version__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ExternalInfo_47, (MR_Integer) 3)));

#line 682 "recompilation.version.m"
              {
#line 682 "recompilation.version.m"
                recompilation__version__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_74_74, 0) = ((MR_Box) (recompilation__version__Name_105));
#line 682 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_74_74, 1) = ((MR_Box) (recompilation__version__Arity_106));
#line 682 "recompilation.version.m"
              }
#line 682 "recompilation.version.m"
              {
#line 682 "recompilation.version.m"
                recompilation__version__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_73_73, 0) = ((MR_Box) (recompilation__version__MaybePredOrFunc_107));
#line 682 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_73_73, 1) = ((MR_Box) (recompilation__version__V_74_74));
#line 682 "recompilation.version.m"
              }
#line 682 "recompilation.version.m"
              {
#line 682 "recompilation.version.m"
                MR_Word base;
#line 682 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 682 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_73_73));
#line 682 "recompilation.version.m"
              }
#line 679 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 4:
#line 648 "recompilation.version.m"
            {
#line 648 "recompilation.version.m"
              MR_Word recompilation__version__TypeSpecInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 648 "recompilation.version.m"
              MR_Word recompilation__version__MaybePredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 3)));
#line 648 "recompilation.version.m"
              MR_Word recompilation__version__V_84_84;
#line 648 "recompilation.version.m"
              MR_Word recompilation__version__V_85_85;
#line 648 "recompilation.version.m"
              MR_Word recompilation__version__Name_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 0)));
#line 648 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 2)));
#line 649 "recompilation.version.m"
              MR_Word recompilation__version__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 1)));
#line 649 "recompilation.version.m"
              MR_Word recompilation__version__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 4)));
#line 649 "recompilation.version.m"
              MR_Word recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 5)));
#line 649 "recompilation.version.m"
              MR_Word recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 6)));
#line 649 "recompilation.version.m"
              MR_Word recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TypeSpecInfo_18, (MR_Integer) 7)));

#line 651 "recompilation.version.m"
              {
#line 651 "recompilation.version.m"
                recompilation__version__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_85_85, 0) = ((MR_Box) (recompilation__version__Name_95));
#line 651 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_85_85, 1) = ((MR_Box) (recompilation__version__Arity_96));
#line 651 "recompilation.version.m"
              }
#line 651 "recompilation.version.m"
              {
#line 651 "recompilation.version.m"
                recompilation__version__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_84_84, 0) = ((MR_Box) (recompilation__version__MaybePredOrFunc_20));
#line 651 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_84_84, 1) = ((MR_Box) (recompilation__version__V_85_85));
#line 651 "recompilation.version.m"
              }
#line 651 "recompilation.version.m"
              {
#line 651 "recompilation.version.m"
                MR_Word base;
#line 651 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 651 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_84_84));
#line 651 "recompilation.version.m"
              }
#line 648 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 5:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_119, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_119, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_122_122;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_124_124;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_124_124, 0) = ((MR_Box) (recompilation__version__Name_120));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_124_124, 1) = ((MR_Box) (recompilation__version__Arity_121));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_122_122, 1) = ((MR_Box) (recompilation__version__V_124_124));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_122_122));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 6:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_146, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_148 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_146, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_149_149;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_151_151;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_151_151, 0) = ((MR_Box) (recompilation__version__Name_147));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_151_151, 1) = ((MR_Box) (recompilation__version__Arity_148));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_149_149, 1) = ((MR_Box) (recompilation__version__V_151_151));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_149_149));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 7:
#line 670 "recompilation.version.m"
            {
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__UnusedArgsInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArityPFMn_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__UnusedArgsInfo_30, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_232, (MR_Integer) 2)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_235_235;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_236_236;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_237_237;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__Name_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_232, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_239 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_232, (MR_Integer) 1)));
#line 660 "recompilation.version.m"
              MR_Word recompilation__version__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__UnusedArgsInfo_30, (MR_Integer) 1)));
#line 671 "recompilation.version.m"
              MR_Integer recompilation__version__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_232, (MR_Integer) 3)));

#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_236_236, 0) = ((MR_Box) (recompilation__version__PredOrFunc_233));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_237_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_237_237, 0) = ((MR_Box) (recompilation__version__Name_238));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_237_237, 1) = ((MR_Box) (recompilation__version__Arity_239));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_235_235, 0) = ((MR_Box) (recompilation__version__V_236_236));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_235_235, 1) = ((MR_Box) (recompilation__version__V_237_237));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                MR_Word base;
#line 672 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_235_235));
#line 672 "recompilation.version.m"
              }
#line 670 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 8:
#line 670 "recompilation.version.m"
            {
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArityPFMn_31;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__ExceptionsInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_39;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_79_79;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_80_80;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_81_81;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__Name_100;
#line 670 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_101;
#line 663 "recompilation.version.m"
              MR_Word recompilation__version__V_34_34;
#line 671 "recompilation.version.m"
              MR_Integer recompilation__version__V_40_40;

#line 663 "recompilation.version.m"
              recompilation__version__PredNameArityPFMn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ExceptionsInfo_33, (MR_Integer) 0)));
#line 663 "recompilation.version.m"
              recompilation__version__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ExceptionsInfo_33, (MR_Integer) 1)));
#line 671 "recompilation.version.m"
              recompilation__version__Name_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_31, (MR_Integer) 0)));
#line 671 "recompilation.version.m"
              recompilation__version__Arity_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_31, (MR_Integer) 1)));
#line 671 "recompilation.version.m"
              recompilation__version__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_31, (MR_Integer) 2)));
#line 671 "recompilation.version.m"
              recompilation__version__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_31, (MR_Integer) 3)));
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_80_80, 0) = ((MR_Box) (recompilation__version__PredOrFunc_39));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_81_81, 0) = ((MR_Box) (recompilation__version__Name_100));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_81_81, 1) = ((MR_Box) (recompilation__version__Arity_101));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_79_79, 0) = ((MR_Box) (recompilation__version__V_80_80));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_79_79, 1) = ((MR_Box) (recompilation__version__V_81_81));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                MR_Word base;
#line 672 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_79_79));
#line 672 "recompilation.version.m"
              }
#line 670 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 9:
#line 670 "recompilation.version.m"
            {
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__TrailingInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArityPFMn_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TrailingInfo_35, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_223, (MR_Integer) 2)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_226_226;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_227_227;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_228_228;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__Name_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_223, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_223, (MR_Integer) 1)));
#line 666 "recompilation.version.m"
              MR_Word recompilation__version__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TrailingInfo_35, (MR_Integer) 1)));
#line 671 "recompilation.version.m"
              MR_Integer recompilation__version__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_223, (MR_Integer) 3)));

#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_227_227, 0) = ((MR_Box) (recompilation__version__PredOrFunc_224));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_228_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_228_228, 0) = ((MR_Box) (recompilation__version__Name_229));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_228_228, 1) = ((MR_Box) (recompilation__version__Arity_230));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_226_226, 0) = ((MR_Box) (recompilation__version__V_227_227));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_226_226, 1) = ((MR_Box) (recompilation__version__V_228_228));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                MR_Word base;
#line 672 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_226_226));
#line 672 "recompilation.version.m"
              }
#line 670 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 10:
#line 670 "recompilation.version.m"
            {
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__MMTablingOnfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArityPFMn_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__MMTablingOnfo_37, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_126, (MR_Integer) 2)));
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_129_129;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_130_130;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__V_131_131;
#line 670 "recompilation.version.m"
              MR_Word recompilation__version__Name_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_126, (MR_Integer) 0)));
#line 670 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_126, (MR_Integer) 1)));
#line 669 "recompilation.version.m"
              MR_Word recompilation__version__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__MMTablingOnfo_37, (MR_Integer) 1)));
#line 671 "recompilation.version.m"
              MR_Integer recompilation__version__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityPFMn_126, (MR_Integer) 3)));

#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_130_130, 0) = ((MR_Box) (recompilation__version__PredOrFunc_127));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_131_131, 0) = ((MR_Box) (recompilation__version__Name_132));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_131_131, 1) = ((MR_Box) (recompilation__version__Arity_133));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                recompilation__version__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_129_129, 0) = ((MR_Box) (recompilation__version__V_130_130));
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_129_129, 1) = ((MR_Box) (recompilation__version__V_131_131));
#line 672 "recompilation.version.m"
              }
#line 672 "recompilation.version.m"
              {
#line 672 "recompilation.version.m"
                MR_Word base;
#line 672 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 672 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_129_129));
#line 672 "recompilation.version.m"
              }
#line 670 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 11:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_152, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_152, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_155_155;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_157_157;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_157_157, 0) = ((MR_Box) (recompilation__version__Name_153));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_157_157, 1) = ((MR_Box) (recompilation__version__Arity_154));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_155_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_155_155, 1) = ((MR_Box) (recompilation__version__V_157_157));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_155_155));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 12:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_140, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_140, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_143_143;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_145_145;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_145_145, 0) = ((MR_Box) (recompilation__version__Name_141));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_145_145, 1) = ((MR_Box) (recompilation__version__Arity_142));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_143_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_143_143, 1) = ((MR_Box) (recompilation__version__V_145_145));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_143_143));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 13:
#line 653 "recompilation.version.m"
            {
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__TabledInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArityMPF_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TabledInfo_25, (MR_Integer) 1)));
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__V_82_82;
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__V_83_83;
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__Name_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityMPF_27, (MR_Integer) 0)));
#line 653 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityMPF_27, (MR_Integer) 1)));
#line 653 "recompilation.version.m"
              MR_Word recompilation__version__MaybePredOrFunc_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArityMPF_27, (MR_Integer) 2)));
#line 654 "recompilation.version.m"
              MR_Word recompilation__version__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TabledInfo_25, (MR_Integer) 0)));
#line 654 "recompilation.version.m"
              MR_Word recompilation__version__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TabledInfo_25, (MR_Integer) 2)));
#line 654 "recompilation.version.m"
              MR_Word recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TabledInfo_25, (MR_Integer) 3)));

#line 656 "recompilation.version.m"
              {
#line 656 "recompilation.version.m"
                recompilation__version__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_83_83, 0) = ((MR_Box) (recompilation__version__Name_97));
#line 656 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_83_83, 1) = ((MR_Box) (recompilation__version__Arity_98));
#line 656 "recompilation.version.m"
              }
#line 656 "recompilation.version.m"
              {
#line 656 "recompilation.version.m"
                recompilation__version__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_82_82, 0) = ((MR_Box) (recompilation__version__MaybePredOrFunc_99));
#line 656 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_82_82, 1) = ((MR_Box) (recompilation__version__V_83_83));
#line 656 "recompilation.version.m"
              }
#line 656 "recompilation.version.m"
              {
#line 656 "recompilation.version.m"
                MR_Word base;
#line 656 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 656 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_82_82));
#line 656 "recompilation.version.m"
              }
#line 653 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 14:
#line 643 "recompilation.version.m"
            {
#line 643 "recompilation.version.m"
              MR_Word recompilation__version__FTInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 643 "recompilation.version.m"
              MR_Word recompilation__version__V_86_86;
#line 643 "recompilation.version.m"
              MR_Word recompilation__version__V_88_88;
#line 643 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__FTInfo_16, (MR_Integer) 0)));
#line 643 "recompilation.version.m"
              MR_Word recompilation__version__Name_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_92, (MR_Integer) 0)));
#line 643 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_92, (MR_Integer) 1)));
#line 644 "recompilation.version.m"
              MR_String recompilation__version__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__FTInfo_16, (MR_Integer) 1)));

#line 646 "recompilation.version.m"
              {
#line 646 "recompilation.version.m"
                recompilation__version__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_88_88, 0) = ((MR_Box) (recompilation__version__Name_93));
#line 646 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_88_88, 1) = ((MR_Box) (recompilation__version__Arity_94));
#line 646 "recompilation.version.m"
              }
#line 646 "recompilation.version.m"
              {
#line 646 "recompilation.version.m"
                recompilation__version__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_86_86, 1) = ((MR_Box) (recompilation__version__V_88_88));
#line 646 "recompilation.version.m"
              }
#line 646 "recompilation.version.m"
              {
#line 646 "recompilation.version.m"
                MR_Word base;
#line 646 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 646 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_86_86));
#line 646 "recompilation.version.m"
              }
#line 643 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 16:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_158, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_160 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_158, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_161_161;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_163_163;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_163_163, 0) = ((MR_Box) (recompilation__version__Name_159));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_163_163, 1) = ((MR_Box) (recompilation__version__Arity_160));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_161_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_161_161, 1) = ((MR_Box) (recompilation__version__V_163_163));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_161_161));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 17:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_164, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_164, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_167_167;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_169_169;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_169_169, 0) = ((MR_Box) (recompilation__version__Name_165));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_169_169, 1) = ((MR_Box) (recompilation__version__Arity_166));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_167_167, 1) = ((MR_Box) (recompilation__version__V_169_169));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_167_167));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 18:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_170, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_170, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_173_173;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_175_175;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_175_175, 0) = ((MR_Box) (recompilation__version__Name_171));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_175_175, 1) = ((MR_Box) (recompilation__version__Arity_172));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_173_173, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_173_173, 1) = ((MR_Box) (recompilation__version__V_175_175));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_173_173));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 19:
#line 701 "recompilation.version.m"
            {
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__TermInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredNameModesPF_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TermInfo_53, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Modes_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_212, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__V_214_214;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_215_215;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_216_216;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_217_217;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Name_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_212, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_219;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_212, (MR_Integer) 2)));
#line 689 "recompilation.version.m"
              MR_Word recompilation__version__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TermInfo_53, (MR_Integer) 1)));
#line 689 "recompilation.version.m"
              MR_Word recompilation__version__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__TermInfo_53, (MR_Integer) 2)));

#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                recompilation__version__V_214_214 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_213);
              }
#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_220, &recompilation__version__Arity_219, recompilation__version__V_214_214);
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_216_216, 0) = ((MR_Box) (recompilation__version__PredOrFunc_220));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_217_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_217_217, 0) = ((MR_Box) (recompilation__version__Name_218));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_217_217, 1) = ((MR_Box) (recompilation__version__Arity_219));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_215_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_215_215, 0) = ((MR_Box) (recompilation__version__V_216_216));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_215_215, 1) = ((MR_Box) (recompilation__version__V_217_217));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                MR_Word base;
#line 704 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_215_215));
#line 704 "recompilation.version.m"
              }
#line 701 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 20:
#line 701 "recompilation.version.m"
            {
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Term2Info_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredNameModesPF_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term2Info_56, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Modes_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_202, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__V_204_204;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_205_205;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_206_206;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_207_207;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Name_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_202, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_209;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_202, (MR_Integer) 2)));
#line 692 "recompilation.version.m"
              MR_Word recompilation__version__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term2Info_56, (MR_Integer) 1)));
#line 692 "recompilation.version.m"
              MR_Word recompilation__version__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term2Info_56, (MR_Integer) 2)));
#line 692 "recompilation.version.m"
              MR_Word recompilation__version__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Term2Info_56, (MR_Integer) 3)));

#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                recompilation__version__V_204_204 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_203);
              }
#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_210, &recompilation__version__Arity_209, recompilation__version__V_204_204);
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_206_206, 0) = ((MR_Box) (recompilation__version__PredOrFunc_210));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_207_207, 0) = ((MR_Box) (recompilation__version__Name_208));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_207_207, 1) = ((MR_Box) (recompilation__version__Arity_209));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_205_205, 0) = ((MR_Box) (recompilation__version__V_206_206));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_205_205, 1) = ((MR_Box) (recompilation__version__V_207_207));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                MR_Word base;
#line 704 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_205_205));
#line 704 "recompilation.version.m"
              }
#line 701 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 21:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_196, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_198 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_196, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_199_199;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_201_201;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_201_201, 0) = ((MR_Box) (recompilation__version__Name_197));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_201_201, 1) = ((MR_Box) (recompilation__version__Arity_198));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_199_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_199_199, 1) = ((MR_Box) (recompilation__version__V_201_201));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_199_199));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 22:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_113, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_113, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_116_116;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_118_118;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_118_118, 0) = ((MR_Box) (recompilation__version__Name_114));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_118_118, 1) = ((MR_Box) (recompilation__version__Arity_115));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_116_116, 1) = ((MR_Box) (recompilation__version__V_118_118));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_116_116));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 23:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_13, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_13, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_89_89;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_91_91;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_91_91, 0) = ((MR_Box) (recompilation__version__Name_14));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_91_91, 1) = ((MR_Box) (recompilation__version__Arity_15));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_89_89, 1) = ((MR_Box) (recompilation__version__V_91_91));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_89_89));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 24:
#line 639 "recompilation.version.m"
            {
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__PredNameArity_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__Name_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_134, (MR_Integer) 0)));
#line 639 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_136 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameArity_134, (MR_Integer) 1)));
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_137_137;
#line 639 "recompilation.version.m"
              MR_Word recompilation__version__V_139_139;

#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_139_139, 0) = ((MR_Box) (recompilation__version__Name_135));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_139_139, 1) = ((MR_Box) (recompilation__version__Arity_136));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                recompilation__version__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_137_137, 1) = ((MR_Box) (recompilation__version__V_139_139));
#line 641 "recompilation.version.m"
              }
#line 641 "recompilation.version.m"
              {
#line 641 "recompilation.version.m"
                MR_Word base;
#line 641 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 641 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_137_137));
#line 641 "recompilation.version.m"
              }
#line 639 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 25:
#line 701 "recompilation.version.m"
            {
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__SharingInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredNameModesPF_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__SharingInfo_60, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Modes_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_186, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__V_188_188;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_189_189;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_190_190;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_191_191;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Name_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_186, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_193;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_186, (MR_Integer) 2)));
#line 695 "recompilation.version.m"
              MR_Word recompilation__version__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__SharingInfo_60, (MR_Integer) 1)));
#line 695 "recompilation.version.m"
              MR_Word recompilation__version__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__SharingInfo_60, (MR_Integer) 2)));
#line 695 "recompilation.version.m"
              MR_Word recompilation__version__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__SharingInfo_60, (MR_Integer) 3)));

#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                recompilation__version__V_188_188 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_187);
              }
#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_194, &recompilation__version__Arity_193, recompilation__version__V_188_188);
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_190_190, 0) = ((MR_Box) (recompilation__version__PredOrFunc_194));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_191_191, 0) = ((MR_Box) (recompilation__version__Name_192));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_191_191, 1) = ((MR_Box) (recompilation__version__Arity_193));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_189_189, 0) = ((MR_Box) (recompilation__version__V_190_190));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_189_189, 1) = ((MR_Box) (recompilation__version__V_191_191));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                MR_Word base;
#line 704 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_189_189));
#line 704 "recompilation.version.m"
              }
#line 701 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
          case (MR_Integer) 26:
#line 701 "recompilation.version.m"
            {
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__ReuseInfo_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__PragmaType_3, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredNameModesPF_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ReuseInfo_64, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Modes_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_176, (MR_Integer) 1)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__V_178_178;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_179_179;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_180_180;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__V_181_181;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__Name_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_176, (MR_Integer) 0)));
#line 701 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_183;
#line 701 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__PredNameModesPF_176, (MR_Integer) 2)));
#line 699 "recompilation.version.m"
              MR_Word recompilation__version__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ReuseInfo_64, (MR_Integer) 1)));
#line 699 "recompilation.version.m"
              MR_Word recompilation__version__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ReuseInfo_64, (MR_Integer) 2)));
#line 699 "recompilation.version.m"
              MR_Word recompilation__version__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ReuseInfo_64, (MR_Integer) 3)));

#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                recompilation__version__V_178_178 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_177);
              }
#line 703 "recompilation.version.m"
              {
#line 703 "recompilation.version.m"
                parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_184, &recompilation__version__Arity_183, recompilation__version__V_178_178);
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__V_180_180, 0) = ((MR_Box) (recompilation__version__PredOrFunc_184));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_181_181, 0) = ((MR_Box) (recompilation__version__Name_182));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_181_181, 1) = ((MR_Box) (recompilation__version__Arity_183));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                recompilation__version__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_179_179, 0) = ((MR_Box) (recompilation__version__V_180_180));
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_179_179, 1) = ((MR_Box) (recompilation__version__V_181_181));
#line 704 "recompilation.version.m"
              }
#line 704 "recompilation.version.m"
              {
#line 704 "recompilation.version.m"
                MR_Word base;
#line 704 "recompilation.version.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recompilation.version.m"
                *recompilation__version__MaybePredOrFuncId_4 = base;
#line 704 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__V_179_179));
#line 704 "recompilation.version.m"
              }
#line 701 "recompilation.version.m"
            }
#line 625 "recompilation.version.m"
            break;
#line 625 "recompilation.version.m"
        }
#line 625 "recompilation.version.m"
        break;
#line 625 "recompilation.version.m"
    }
#line 625 "recompilation.version.m"
  }
#line 612 "recompilation.version.m"
}

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_1(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 582 "recompilation.version.m"
{
#line 582 "recompilation.version.m"
  {
#line 582 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 582 "recompilation.version.m"
    MR_builtin_longjmp((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0, 1);
#line 582 "recompilation.version.m"
  }
#line 582 "recompilation.version.m"
}

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_3(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 582 "recompilation.version.m"
{
#line 582 "recompilation.version.m"
  {
#line 582 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 582 "recompilation.version.m"
    (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_34_34 = ((MR_Word) (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_V_34_34);
#line 582 "recompilation.version.m"
    {
#line 582 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_class_items_7_p_0_2(recompilation__version__env_ptr);
    }
#line 582 "recompilation.version.m"
  }
#line 582 "recompilation.version.m"
}

#line 586 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_5(
#line 586 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 586 "recompilation.version.m"
{
#line 586 "recompilation.version.m"
  {
#line 586 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 586 "recompilation.version.m"
    (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19 = ((MR_Word) (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19);
#line 586 "recompilation.version.m"
    {
#line 586 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_class_items_7_p_0_4(recompilation__version__env_ptr);
    }
#line 586 "recompilation.version.m"
  }
#line 586 "recompilation.version.m"
}

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_4(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 582 "recompilation.version.m"
{
#line 582 "recompilation.version.m"
  {
#line 582 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 582 "recompilation.version.m"
    {
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_23_23;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_24_24;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_25_25;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_26_26;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_27_27;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_28_28;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_29_29;
#line 587 "recompilation.version.m"
      MR_Word recompilation__version__V_30_30;

#line 587 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19)) == (MR_mktag((MR_Integer) 0)));
#line 587 "recompilation.version.m"
      if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 587 "recompilation.version.m"
        {
#line 587 "recompilation.version.m"
          {
#line 587 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 0)));
#line 587 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 1)));
#line 587 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 2)));
#line 587 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 3)));
#line 587 "recompilation.version.m"
            recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 4)));
#line 587 "recompilation.version.m"
            recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 5)));
#line 587 "recompilation.version.m"
            recompilation__version__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 6)));
#line 587 "recompilation.version.m"
            recompilation__version__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 7)));
#line 587 "recompilation.version.m"
            recompilation__version__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 8)));
#line 587 "recompilation.version.m"
            recompilation__version__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 9)));
#line 587 "recompilation.version.m"
            recompilation__version__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 10)));
#line 587 "recompilation.version.m"
            recompilation__version__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Method_19, (MR_Integer) 11)));
#line 587 "recompilation.version.m"
          }
#line 582 "recompilation.version.m"
          {
#line 587 "recompilation.version.m"
            {
#line 587 "recompilation.version.m"
              (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9, (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_51_51);
            }
#line 582 "recompilation.version.m"
            if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 582 "recompilation.version.m"
              {
#line 590 "recompilation.version.m"
                if (((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "recompilation.version.m"
                  (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
#line 590 "recompilation.version.m"
                else
#line 589 "recompilation.version.m"
                  {
#line 589 "recompilation.version.m"
                    MR_Word recompilation__version__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8, (MR_Integer) 0)));

#line 589 "recompilation.version.m"
                    (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20 == recompilation__version__V_52_52);
#line 589 "recompilation.version.m"
                  }
#line 582 "recompilation.version.m"
                if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 582 "recompilation.version.m"
                  {
#line 596 "recompilation.version.m"
                    if (((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__WithType_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "recompilation.version.m"
                      {
#line 593 "recompilation.version.m"
                        MR_Integer recompilation__version__V_35_35;
#line 593 "recompilation.version.m"
                        MR_Integer recompilation__version__V_53_53;

#line 595 "recompilation.version.m"
                        {
#line 595 "recompilation.version.m"
                          recompilation__version__V_35_35 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypesAndModes_21);
                        }
#line 594 "recompilation.version.m"
                        {
#line 594 "recompilation.version.m"
                          parse_tree__prog_util__adjust_func_arity_3_p_0((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MethodPredOrFunc_20, (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10, &recompilation__version__V_53_53);
                        }
#line 594 "recompilation.version.m"
                        (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = (recompilation__version__V_35_35 == recompilation__version__V_53_53);
#line 593 "recompilation.version.m"
                      }
#line 596 "recompilation.version.m"
                    else
#line 597 "recompilation.version.m"
                      (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
#line 596 "recompilation.version.m"
                    if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 596 "recompilation.version.m"
                      {
#line 596 "recompilation.version.m"
                        recompilation__version__distribute_pragma_items_class_items_7_p_0_1(recompilation__version__env_ptr);
                      }
#line 582 "recompilation.version.m"
                  }
#line 582 "recompilation.version.m"
              }
#line 582 "recompilation.version.m"
          }
#line 587 "recompilation.version.m"
        }
#line 582 "recompilation.version.m"
    }
#line 582 "recompilation.version.m"
  }
#line 582 "recompilation.version.m"
}

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_2(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 582 "recompilation.version.m"
{
#line 582 "recompilation.version.m"
  {
#line 582 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 582 "recompilation.version.m"
    {
#line 582 "recompilation.version.m"
      MR_Word recompilation__version__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_34_34, (MR_Integer) 0)));
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_40_40;
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_41_41;
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_42_42;
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_43_43;
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_44_44;
#line 584 "recompilation.version.m"
      MR_Word recompilation__version__V_45_45;
#line 584 "recompilation.version.m"
      MR_Integer recompilation__version__V_46_46;

#line 582 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__V_34_34, (MR_Integer) 1)));
#line 583 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 583 "recompilation.version.m"
      if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 583 "recompilation.version.m"
        {
#line 583 "recompilation.version.m"
          (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItem_15, (MR_Integer) 1)));
#line 582 "recompilation.version.m"
          {
#line 584 "recompilation.version.m"
            recompilation__version__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 0)));
#line 584 "recompilation.version.m"
            recompilation__version__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 1)));
#line 584 "recompilation.version.m"
            recompilation__version__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 2)));
#line 584 "recompilation.version.m"
            recompilation__version__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 3)));
#line 584 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 4)));
#line 584 "recompilation.version.m"
            recompilation__version__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 5)));
#line 584 "recompilation.version.m"
            recompilation__version__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 6)));
#line 584 "recompilation.version.m"
            recompilation__version__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__ClassItemTypeClass_16, (MR_Integer) 7)));
#line 585 "recompilation.version.m"
            (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17)) == (MR_mktag((MR_Integer) 1)));
#line 585 "recompilation.version.m"
            if ((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 585 "recompilation.version.m"
              {
#line 585 "recompilation.version.m"
                (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Interface_17, (MR_Integer) 0)));
#line 582 "recompilation.version.m"
                {
#line 10682 "recompilation.version.c"
                  (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 586 "recompilation.version.m"
                  {
#line 586 "recompilation.version.m"
                    mercury__list__member_2_p_1((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__TypeCtorInfo_48_48, &(recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv1_Method_19, (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Methods_18, recompilation__version__distribute_pragma_items_class_items_7_p_0_5, recompilation__version__env_ptr);
                  }
#line 582 "recompilation.version.m"
                }
#line 585 "recompilation.version.m"
              }
#line 582 "recompilation.version.m"
          }
#line 583 "recompilation.version.m"
        }
#line 582 "recompilation.version.m"
    }
#line 582 "recompilation.version.m"
  }
#line 582 "recompilation.version.m"
}

#line 582 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0_6(
#line 582 "recompilation.version.m"
  void * recompilation__version__env_ptr_arg)
#line 582 "recompilation.version.m"
{
#line 582 "recompilation.version.m"
  {
#line 582 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s * recompilation__version__env_ptr = (struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s *) recompilation__version__env_ptr_arg;

#line 582 "recompilation.version.m"
    if (MR_builtin_setjmp((recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__commit_0) == 0)
#line 582 "recompilation.version.m"
      {
#line 582 "recompilation.version.m"
        {
#line 582 "recompilation.version.m"
          {
#line 582 "recompilation.version.m"
            mercury__list__member_2_p_1((MR_Word) &recompilation__version_scalar_common_1[2], &(recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__conv0_V_34_34, (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, recompilation__version__distribute_pragma_items_class_items_7_p_0_3, recompilation__version__env_ptr);
          }
#line 582 "recompilation.version.m"
        }
#line 582 "recompilation.version.m"
        (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_FALSE;
#line 582 "recompilation.version.m"
      }
#line 582 "recompilation.version.m"
    else
#line 582 "recompilation.version.m"
      (recompilation__version__env_ptr)->recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded = MR_TRUE;
#line 582 "recompilation.version.m"
  }
#line 582 "recompilation.version.m"
}

#line 573 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_class_items_7_p_0(
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__MaybePredOrFunc_8,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__SymName_9,
#line 573 "recompilation.version.m"
  MR_Integer recompilation__version__Arity_10,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__Item_11,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__Section_12,
#line 573 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_ClassItems_0_32,
#line 573 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_ClassItems_33)
#line 573 "recompilation.version.m"
{
#line 573 "recompilation.version.m"
  {
#line 573 "recompilation.version.m"
    struct recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0_s recompilation__version__env;

#line 573 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__MaybePredOrFunc_8 = recompilation__version__MaybePredOrFunc_8;
#line 573 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__SymName_9 = recompilation__version__SymName_9;
#line 573 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__Arity_10 = recompilation__version__Arity_10;
#line 573 "recompilation.version.m"
    (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32 = recompilation__version__STATE_VARIABLE_ClassItems_0_32;
#line 582 "recompilation.version.m"
    {
#line 582 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_class_items_7_p_0_6(&recompilation__version__env);
    }
#line 580 "recompilation.version.m"
    if ((recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__succeeded)
#line 603 "recompilation.version.m"
      {
#line 603 "recompilation.version.m"
        MR_Word recompilation__version__V_37_37;
#line 603 "recompilation.version.m"
        MR_Word recompilation__version__V_38_38;

#line 603 "recompilation.version.m"
        {
#line 603 "recompilation.version.m"
          recompilation__version__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_38_38, 0) = ((MR_Box) (recompilation__version__Section_12));
#line 603 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_38_38, 1) = ((MR_Box) (recompilation__version__Item_11));
#line 603 "recompilation.version.m"
        }
#line 603 "recompilation.version.m"
        {
#line 603 "recompilation.version.m"
          recompilation__version__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_37_37, 0) = ((MR_Box) (recompilation__version__V_38_38));
#line 603 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "recompilation.version.m"
        }
#line 603 "recompilation.version.m"
        {
#line 603 "recompilation.version.m"
          *recompilation__version__STATE_VARIABLE_ClassItems_33 = mercury__list__f_43_43_2_f_0((MR_Word) &recompilation__version_scalar_common_1[2], (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32, recompilation__version__V_37_37);
        }
#line 603 "recompilation.version.m"
      }
#line 580 "recompilation.version.m"
    else
#line 580 "recompilation.version.m"
      *recompilation__version__STATE_VARIABLE_ClassItems_33 = (recompilation__version__env).recompilation__version__distribute_pragma_items_class_items_7_p_0_env_0__STATE_VARIABLE_ClassItems_0_32;
#line 573 "recompilation.version.m"
  }
#line 573 "recompilation.version.m"
}

#line 568 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0_1(
#line 568 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 568 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 568 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 568 "recompilation.version.m"
{
#line 568 "recompilation.version.m"
  {
#line 568 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 568 "recompilation.version.m"
    MR_Word recompilation__version__conv0_STATE_VARIABLE_ClassItems_33;

#line 568 "recompilation.version.m"
    {
#line 568 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_class_items_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 7))), ((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv0_STATE_VARIABLE_ClassItems_33);
    }
#line 568 "recompilation.version.m"
    *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_STATE_VARIABLE_ClassItems_33));
#line 568 "recompilation.version.m"
  }
#line 568 "recompilation.version.m"
}

#line 539 "recompilation.version.m"
static void MR_CALL 
recompilation__version__distribute_pragma_items_3_p_0(
#line 539 "recompilation.version.m"
  MR_Tuple recompilation__version__HeadVar__1_1,
#line 539 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_0_15,
#line 539 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_GatheredItems_16)
#line 539 "recompilation.version.m"
{
#line 543 "recompilation.version.m"
  {
#line 543 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_33_33;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_34_34;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__ItemId_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__Item_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__HeadVar__1_1, (MR_Integer) 2)));
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__MaybePredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemId_4, (MR_Integer) 0)));
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__SymName_9;
#line 543 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_10;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__ItemName_11;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__GatheredTypeClasses_14;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemId_4, (MR_Integer) 1)));
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_25_25;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__V_26_26;
#line 543 "recompilation.version.m"
    MR_Word recompilation__version__V_27_27;
#line 570 "recompilation.version.m"
    MR_Box recompilation__version__conv1_V_27_27;

#line 544 "recompilation.version.m"
    recompilation__version__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__V_17_17, (MR_Integer) 0)));
#line 544 "recompilation.version.m"
    recompilation__version__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__V_17_17, (MR_Integer) 1)));
#line 553 "recompilation.version.m"
    {
#line 553 "recompilation.version.m"
      recompilation__version__ItemName_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__ItemName_11, 0) = ((MR_Box) (recompilation__version__SymName_9));
#line 553 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__ItemName_11, 1) = ((MR_Box) (recompilation__version__Arity_10));
#line 553 "recompilation.version.m"
    }
#line 559 "recompilation.version.m"
    if ((recompilation__version__MaybePredOrFunc_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "recompilation.version.m"
      {
#line 560 "recompilation.version.m"
        MR_Word recompilation__version__V_18_18;
#line 560 "recompilation.version.m"
        MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_19_19;
#line 560 "recompilation.version.m"
        MR_Word recompilation__version__V_21_21;

#line 561 "recompilation.version.m"
        {
#line 561 "recompilation.version.m"
          recompilation__version__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_18_18, 0) = ((MR_Box) ((MR_Integer) 6));
#line 561 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_18_18, 1) = ((MR_Box) (recompilation__version__ItemName_11));
#line 561 "recompilation.version.m"
        }
#line 561 "recompilation.version.m"
        {
#line 561 "recompilation.version.m"
          recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_5, recompilation__version__V_18_18, recompilation__version__Section_6, recompilation__version__STATE_VARIABLE_GatheredItems_0_15, &recompilation__version__STATE_VARIABLE_GatheredItems_19_19);
        }
#line 563 "recompilation.version.m"
        {
#line 563 "recompilation.version.m"
          recompilation__version__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_21_21, 0) = ((MR_Box) ((MR_Integer) 7));
#line 563 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_21_21, 1) = ((MR_Box) (recompilation__version__ItemName_11));
#line 563 "recompilation.version.m"
        }
#line 563 "recompilation.version.m"
        {
#line 563 "recompilation.version.m"
          recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_5, recompilation__version__V_21_21, recompilation__version__Section_6, recompilation__version__STATE_VARIABLE_GatheredItems_19_19, &recompilation__version__STATE_VARIABLE_GatheredItems_25_25);
        }
#line 560 "recompilation.version.m"
      }
#line 559 "recompilation.version.m"
    else
#line 555 "recompilation.version.m"
      {
#line 555 "recompilation.version.m"
        MR_Word recompilation__version__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybePredOrFunc_8, (MR_Integer) 0)));
#line 555 "recompilation.version.m"
        MR_Word recompilation__version__ItemType_13;
#line 555 "recompilation.version.m"
        MR_Word recompilation__version__V_24_24;

#line 556 "recompilation.version.m"
        {
#line 556 "recompilation.version.m"
          recompilation__version__ItemType_13 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__version__PredOrFunc_12);
        }
#line 557 "recompilation.version.m"
        {
#line 557 "recompilation.version.m"
          recompilation__version__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_24_24, 0) = ((MR_Box) (recompilation__version__ItemType_13));
#line 557 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_24_24, 1) = ((MR_Box) (recompilation__version__ItemName_11));
#line 557 "recompilation.version.m"
        }
#line 557 "recompilation.version.m"
        {
#line 557 "recompilation.version.m"
          recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_5, recompilation__version__V_24_24, recompilation__version__Section_6, recompilation__version__STATE_VARIABLE_GatheredItems_0_15, &recompilation__version__STATE_VARIABLE_GatheredItems_25_25);
        }
#line 555 "recompilation.version.m"
      }
#line 568 "recompilation.version.m"
    {
#line 568 "recompilation.version.m"
      recompilation__version__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[1]));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 1) = ((MR_Box) (recompilation__version__distribute_pragma_items_3_p_0_1));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 3) = ((MR_Box) (recompilation__version__MaybePredOrFunc_8));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 4) = ((MR_Box) (recompilation__version__SymName_9));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 5) = ((MR_Box) (recompilation__version__Arity_10));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 6) = ((MR_Box) (recompilation__version__Item_5));
#line 568 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_26_26, 7) = ((MR_Box) (recompilation__version__Section_6));
#line 568 "recompilation.version.m"
    }
#line 11012 "recompilation.version.c"
    recompilation__version__TypeInfo_33_33 = (MR_Word) &recompilation__version_scalar_common_1[3];
#line 570 "recompilation.version.m"
    {
#line 570 "recompilation.version.m"
      recompilation__version__conv1_V_27_27 = recompilation__extract_ids_2_f_0(recompilation__version__TypeInfo_33_33, recompilation__version__STATE_VARIABLE_GatheredItems_25_25, (MR_Integer) 4);
    }
#line 570 "recompilation.version.m"
    recompilation__version__V_27_27 = ((MR_Word) recompilation__version__conv1_V_27_27);
#line 11021 "recompilation.version.c"
    recompilation__version__TypeInfo_34_34 = (MR_Word) &recompilation__version_scalar_common_2[0];
#line 568 "recompilation.version.m"
    {
#line 568 "recompilation.version.m"
      mercury__map__map_values_only_3_p_0(recompilation__version__TypeInfo_34_34, recompilation__version__TypeInfo_34_34, (MR_Word) &recompilation__version_scalar_common_1[0], recompilation__version__V_26_26, recompilation__version__V_27_27, &recompilation__version__GatheredTypeClasses_14);
    }
#line 571 "recompilation.version.m"
    {
#line 571 "recompilation.version.m"
      recompilation__update_ids_4_p_0(recompilation__version__TypeInfo_33_33, (MR_Integer) 4, ((MR_Box) (recompilation__version__GatheredTypeClasses_14)), recompilation__version__STATE_VARIABLE_GatheredItems_25_25, recompilation__version__STATE_VARIABLE_GatheredItems_16);
    }
#line 543 "recompilation.version.m"
  }
#line 539 "recompilation.version.m"
}

#line 511 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0_1(
#line 511 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 511 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 511 "recompilation.version.m"
{
#line 511 "recompilation.version.m"
  {
#line 511 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 511 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 511 "recompilation.version.m"
    MR_Word recompilation__version__conv0_LambdaHeadVar__2_34;

#line 511 "recompilation.version.m"
    {
#line 511 "recompilation.version.m"
      recompilation__version__conv0_LambdaHeadVar__2_34 = recompilation__version__IntroducedFrom__func__split_class_method_types_and_modes__511__1_1_f_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 511 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__2_34));
#line 511 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 511 "recompilation.version.m"
  }
#line 511 "recompilation.version.m"
}

#line 488 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__split_class_method_types_and_modes_1_f_0(
#line 488 "recompilation.version.m"
  MR_Word recompilation__version__Method0_3)
#line 488 "recompilation.version.m"
{
#line 495 "recompilation.version.m"
  {
#line 495 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 495 "recompilation.version.m"
    MR_Word recompilation__version__Methods_4;

#line 495 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__Method0_3)) == (MR_mktag((MR_Integer) 0))))
#line 502 "recompilation.version.m"
      {
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 1)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__TypesAndModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 2)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__WithType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 3)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 6)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__ExistQVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 8)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 9)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 10)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__TypesWithoutModes_25;
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__PredOrFuncModeItems_29;
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__EmptyInstVarSet_30;
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__PredOrFuncItem_31;
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__V_39_39;
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__SymName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 0)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__WithInst_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 4)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__MaybeDetism_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 5)));
#line 502 "recompilation.version.m"
        MR_Word recompilation__version__InstVarSet_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 7)));
#line 500 "recompilation.version.m"
        MR_Word recompilation__version___Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Method0_3, (MR_Integer) 11)));
#line 503 "recompilation.version.m"
        MR_Word recompilation__version__Types_20;
#line 503 "recompilation.version.m"
        MR_Word recompilation__version__Modes_46;
#line 504 "recompilation.version.m"
        MR_Word recompilation__version__MaybeModes_21;

#line 504 "recompilation.version.m"
        {
#line 504 "recompilation.version.m"
          parse_tree__prog_util__split_types_and_modes_3_p_0(recompilation__version__TypesAndModes_14, &recompilation__version__Types_20, &recompilation__version__MaybeModes_21);
        }
#line 505 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__MaybeModes_21)) == (MR_mktag((MR_Integer) 1)));
#line 505 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 505 "recompilation.version.m"
          {
#line 505 "recompilation.version.m"
            recompilation__version__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeModes_21, (MR_Integer) 0)));
#line 506 "recompilation.version.m"
            {
#line 506 "recompilation.version.m"
              MR_Word recompilation__version__V_22_22;
#line 506 "recompilation.version.m"
              MR_Word recompilation__version__V_23_23;

#line 506 "recompilation.version.m"
              recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Modes_46)) == (MR_mktag((MR_Integer) 1)));
#line 506 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 506 "recompilation.version.m"
                {
#line 506 "recompilation.version.m"
                  recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Modes_46, (MR_Integer) 0)));
#line 506 "recompilation.version.m"
                  recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Modes_46, (MR_Integer) 1)));
#line 506 "recompilation.version.m"
                }
#line 506 "recompilation.version.m"
            }
#line 507 "recompilation.version.m"
            if (!(recompilation__version__succeeded))
#line 507 "recompilation.version.m"
              {
#line 507 "recompilation.version.m"
                MR_Word recompilation__version__V_24_24;

#line 507 "recompilation.version.m"
                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__WithInst_50)) == (MR_mktag((MR_Integer) 1)));
#line 507 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 507 "recompilation.version.m"
                  recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__WithInst_50, (MR_Integer) 0)));
#line 507 "recompilation.version.m"
              }
#line 505 "recompilation.version.m"
          }
#line 503 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 511 "recompilation.version.m"
          {
#line 511 "recompilation.version.m"
            MR_Word recompilation__version__PredOrFuncModeItem_28;
#line 511 "recompilation.version.m"
            MR_Word recompilation__version__V_35_35;
#line 511 "recompilation.version.m"
            MR_Word recompilation__version__MaybePredOrFunc_44;

#line 511 "recompilation.version.m"
            {
#line 511 "recompilation.version.m"
              recompilation__version__TypesWithoutModes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__version_scalar_common_1[18], recompilation__version__Types_20);
            }
#line 518 "recompilation.version.m"
            if ((recompilation__version__WithInst_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "recompilation.version.m"
              {
#line 520 "recompilation.version.m"
                recompilation__version__MaybePredOrFunc_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 520 "recompilation.version.m"
                MR_hl_field(MR_mktag(1), recompilation__version__MaybePredOrFunc_44, 0) = ((MR_Box) (recompilation__version__PredOrFunc_13));
#line 520 "recompilation.version.m"
              }
#line 518 "recompilation.version.m"
            else
#line 517 "recompilation.version.m"
              recompilation__version__MaybePredOrFunc_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "recompilation.version.m"
            {
#line 524 "recompilation.version.m"
              recompilation__version__V_35_35 = mercury__term__context_init_0_f_0();
            }
#line 522 "recompilation.version.m"
            {
#line 522 "recompilation.version.m"
              recompilation__version__PredOrFuncModeItem_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 0) = ((MR_Box) (recompilation__version__SymName_47));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 1) = ((MR_Box) (recompilation__version__MaybePredOrFunc_44));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 2) = ((MR_Box) (recompilation__version__Modes_46));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 3) = ((MR_Box) (recompilation__version__WithInst_50));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 4) = ((MR_Box) (recompilation__version__MaybeDetism_51));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 5) = ((MR_Box) (recompilation__version__InstVarSet_52));
#line 522 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItem_28, 6) = ((MR_Box) (recompilation__version__V_35_35));
#line 522 "recompilation.version.m"
            }
#line 525 "recompilation.version.m"
            {
#line 525 "recompilation.version.m"
              recompilation__version__PredOrFuncModeItems_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItems_29, 0) = ((MR_Box) (recompilation__version__PredOrFuncModeItem_28));
#line 525 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__PredOrFuncModeItems_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "recompilation.version.m"
            }
#line 511 "recompilation.version.m"
          }
#line 503 "recompilation.version.m"
        else
#line 527 "recompilation.version.m"
          {
#line 527 "recompilation.version.m"
            recompilation__version__TypesWithoutModes_25 = recompilation__version__TypesAndModes_14;
#line 528 "recompilation.version.m"
            recompilation__version__PredOrFuncModeItems_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "recompilation.version.m"
          }
#line 530 "recompilation.version.m"
        {
#line 530 "recompilation.version.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &recompilation__version__EmptyInstVarSet_30);
        }
#line 533 "recompilation.version.m"
        {
#line 533 "recompilation.version.m"
          recompilation__version__V_39_39 = mercury__term__context_init_0_f_0();
        }
#line 531 "recompilation.version.m"
        {
#line 531 "recompilation.version.m"
          recompilation__version__PredOrFuncItem_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 0) = ((MR_Box) (recompilation__version__SymName_47));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 1) = ((MR_Box) (recompilation__version__PredOrFunc_13));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 2) = ((MR_Box) (recompilation__version__TypesWithoutModes_25));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 3) = ((MR_Box) (recompilation__version__WithType_15));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 6) = ((MR_Box) (recompilation__version__TypeVarSet_16));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 7) = ((MR_Box) (recompilation__version__EmptyInstVarSet_30));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 8) = ((MR_Box) (recompilation__version__ExistQVars_17));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 9) = ((MR_Box) (recompilation__version__Purity_18));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 10) = ((MR_Box) (recompilation__version__Constraints_19));
#line 531 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredOrFuncItem_31, 11) = ((MR_Box) (recompilation__version__V_39_39));
#line 531 "recompilation.version.m"
        }
#line 534 "recompilation.version.m"
        {
#line 534 "recompilation.version.m"
          recompilation__version__Methods_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Methods_4, 0) = ((MR_Box) (recompilation__version__PredOrFuncItem_31));
#line 534 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Methods_4, 1) = ((MR_Box) (recompilation__version__PredOrFuncModeItems_29));
#line 534 "recompilation.version.m"
        }
#line 502 "recompilation.version.m"
      }
#line 495 "recompilation.version.m"
    else
#line 495 "recompilation.version.m"
      {
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__SymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 0)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__MaybePredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 1)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 2)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__WithInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 3)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__MaybeDetism_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 4)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__InstVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 5)));
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__Method_12;
#line 495 "recompilation.version.m"
        MR_Word recompilation__version__V_40_40;
#line 494 "recompilation.version.m"
        MR_Word recompilation__version___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Method0_3, (MR_Integer) 6)));

#line 497 "recompilation.version.m"
        {
#line 497 "recompilation.version.m"
          recompilation__version__V_40_40 = mercury__term__context_init_0_f_0();
        }
#line 496 "recompilation.version.m"
        {
#line 496 "recompilation.version.m"
          recompilation__version__Method_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 0) = ((MR_Box) (recompilation__version__SymName_5));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 1) = ((MR_Box) (recompilation__version__MaybePredOrFunc_6));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 2) = ((MR_Box) (recompilation__version__Modes_7));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 3) = ((MR_Box) (recompilation__version__WithInst_8));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 4) = ((MR_Box) (recompilation__version__MaybeDetism_9));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 5) = ((MR_Box) (recompilation__version__InstVarSet_10));
#line 496 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Method_12, 6) = ((MR_Box) (recompilation__version__V_40_40));
#line 496 "recompilation.version.m"
        }
#line 498 "recompilation.version.m"
        {
#line 498 "recompilation.version.m"
          recompilation__version__Methods_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Methods_4, 0) = ((MR_Box) (recompilation__version__Method_12));
#line 498 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__Methods_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "recompilation.version.m"
        }
#line 495 "recompilation.version.m"
      }
#line 495 "recompilation.version.m"
    return recompilation__version__Methods_4;
#line 495 "recompilation.version.m"
  }
#line 488 "recompilation.version.m"
}

#line 471 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_2(
#line 471 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 471 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 471 "recompilation.version.m"
{
#line 471 "recompilation.version.m"
  {
#line 471 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 471 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 471 "recompilation.version.m"
    MR_Word recompilation__version__conv1_Methods_4;

#line 471 "recompilation.version.m"
    {
#line 471 "recompilation.version.m"
      recompilation__version__conv1_Methods_4 = recompilation__version__split_class_method_types_and_modes_1_f_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 471 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv1_Methods_4));
#line 471 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 471 "recompilation.version.m"
  }
#line 471 "recompilation.version.m"
}

#line 446 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__add_gathered_item_5_p_0_1(
#line 446 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 446 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1)
#line 446 "recompilation.version.m"
{
#line 446 "recompilation.version.m"
  {
#line 446 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_2;
#line 446 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 446 "recompilation.version.m"
    MR_Word recompilation__version__conv0_LambdaHeadVar__2_60;

#line 446 "recompilation.version.m"
    {
#line 446 "recompilation.version.m"
      recompilation__version__conv0_LambdaHeadVar__2_60 = recompilation__version__IntroducedFrom__func__add_gathered_item__446__1_1_f_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 446 "recompilation.version.m"
    recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__2_60));
#line 446 "recompilation.version.m"
    return recompilation__version__wrapper_arg_2;
#line 446 "recompilation.version.m"
  }
#line 446 "recompilation.version.m"
}

#line 422 "recompilation.version.m"
static void MR_CALL 
recompilation__version__add_gathered_item_5_p_0(
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__Item_6,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__ItemId_7,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__Section_8,
#line 422 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_GatheredItems_0_56,
#line 422 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_GatheredItems_57)
#line 422 "recompilation.version.m"
{
#line 425 "recompilation.version.m"
  {
#line 425 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_99_99;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__ItemType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemId_7, (MR_Integer) 0)));
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__ItemName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemId_7, (MR_Integer) 1)));
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemName_11, (MR_Integer) 0)));
#line 425 "recompilation.version.m"
    MR_Integer recompilation__version__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemName_11, (MR_Integer) 1)));
#line 425 "recompilation.version.m"
    MR_String recompilation__version__Name_14;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__NameArity_15;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__AddedItems_46;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__IdMap0_53;
#line 425 "recompilation.version.m"
    MR_Word recompilation__version__IdMap_55;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__PredName_17;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__PredOrFunc_18;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__WithType_20;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__WithInst_21;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__MaybeDetism_22;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Origin_23;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__TypeVarSet_24;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__InstVarSet_25;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__ExistQVars_26;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Purity_27;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Constraints_28;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Context_29;
#line 434 "recompilation.version.m"
    MR_Integer recompilation__version__SeqNum_30;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Types_31;
#line 434 "recompilation.version.m"
    MR_Word recompilation__version__Modes_33;
#line 435 "recompilation.version.m"
    MR_Word recompilation__version__ItemPredDecl_16;
#line 435 "recompilation.version.m"
    MR_Word recompilation__version__TypesAndModes_19;
#line 435 "recompilation.version.m"
    MR_Word recompilation__version__MaybeModes_32;
#line 480 "recompilation.version.m"
    MR_Box recompilation__version__conv2_IdMap0_53;
#line 481 "recompilation.version.m"
    MR_Word recompilation__version__OldItems_54;
#line 481 "recompilation.version.m"
    MR_Box recompilation__version__conv3_OldItems_54;

#line 428 "recompilation.version.m"
    {
#line 428 "recompilation.version.m"
      recompilation__version__Name_14 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__version__SymName_12);
    }
#line 429 "recompilation.version.m"
    {
#line 429 "recompilation.version.m"
      recompilation__version__NameArity_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__NameArity_15, 0) = ((MR_Box) (recompilation__version__Name_14));
#line 429 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__NameArity_15, 1) = ((MR_Box) (recompilation__version__Arity_13));
#line 429 "recompilation.version.m"
    }
#line 435 "recompilation.version.m"
    recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 435 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 435 "recompilation.version.m"
      {
#line 435 "recompilation.version.m"
        recompilation__version__ItemPredDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 436 "recompilation.version.m"
        recompilation__version__PredName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 0)));
#line 436 "recompilation.version.m"
        recompilation__version__PredOrFunc_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 1)));
#line 436 "recompilation.version.m"
        recompilation__version__TypesAndModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 2)));
#line 436 "recompilation.version.m"
        recompilation__version__WithType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 3)));
#line 436 "recompilation.version.m"
        recompilation__version__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 4)));
#line 436 "recompilation.version.m"
        recompilation__version__MaybeDetism_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 5)));
#line 436 "recompilation.version.m"
        recompilation__version__Origin_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 6)));
#line 436 "recompilation.version.m"
        recompilation__version__TypeVarSet_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 7)));
#line 436 "recompilation.version.m"
        recompilation__version__InstVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 8)));
#line 436 "recompilation.version.m"
        recompilation__version__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 9)));
#line 436 "recompilation.version.m"
        recompilation__version__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 10)));
#line 436 "recompilation.version.m"
        recompilation__version__Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 11)));
#line 436 "recompilation.version.m"
        recompilation__version__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 12)));
#line 436 "recompilation.version.m"
        recompilation__version__SeqNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_16, (MR_Integer) 13)));
#line 440 "recompilation.version.m"
        {
#line 440 "recompilation.version.m"
          parse_tree__prog_util__split_types_and_modes_3_p_0(recompilation__version__TypesAndModes_19, &recompilation__version__Types_31, &recompilation__version__MaybeModes_32);
        }
#line 441 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__MaybeModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 441 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 441 "recompilation.version.m"
          {
#line 441 "recompilation.version.m"
            recompilation__version__Modes_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeModes_32, (MR_Integer) 0)));
#line 442 "recompilation.version.m"
            {
#line 442 "recompilation.version.m"
              MR_Word recompilation__version__V_34_34;
#line 442 "recompilation.version.m"
              MR_Word recompilation__version__V_35_35;

#line 442 "recompilation.version.m"
              recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__Modes_33)) == (MR_mktag((MR_Integer) 1)));
#line 442 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 442 "recompilation.version.m"
                {
#line 442 "recompilation.version.m"
                  recompilation__version__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Modes_33, (MR_Integer) 0)));
#line 442 "recompilation.version.m"
                  recompilation__version__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Modes_33, (MR_Integer) 1)));
#line 442 "recompilation.version.m"
                }
#line 442 "recompilation.version.m"
            }
#line 443 "recompilation.version.m"
            if (!(recompilation__version__succeeded))
#line 443 "recompilation.version.m"
              {
#line 443 "recompilation.version.m"
                MR_Word recompilation__version__V_36_36;

#line 443 "recompilation.version.m"
                recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 443 "recompilation.version.m"
                if (recompilation__version__succeeded)
#line 443 "recompilation.version.m"
                  recompilation__version__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__WithInst_21, (MR_Integer) 0)));
#line 443 "recompilation.version.m"
              }
#line 441 "recompilation.version.m"
          }
#line 435 "recompilation.version.m"
      }
#line 434 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 446 "recompilation.version.m"
      {
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__TypesWithoutModes_37;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__EmptyInstVarSet_39;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__PredItemPredDecl_40;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__PredItem_41;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__MaybePredOrFunc_43;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__ModeItemModeDecl_44;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__ModeItem_45;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__V_63_63;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__V_64_64;
#line 446 "recompilation.version.m"
        MR_Word recompilation__version__V_65_65;

#line 446 "recompilation.version.m"
        {
#line 446 "recompilation.version.m"
          recompilation__version__TypesWithoutModes_37 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__version_scalar_common_1[16], recompilation__version__Types_31);
        }
#line 447 "recompilation.version.m"
        {
#line 447 "recompilation.version.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &recompilation__version__EmptyInstVarSet_39);
        }
#line 448 "recompilation.version.m"
        {
#line 448 "recompilation.version.m"
          recompilation__version__PredItemPredDecl_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 0) = ((MR_Box) (recompilation__version__PredName_17));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 1) = ((MR_Box) (recompilation__version__PredOrFunc_18));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 2) = ((MR_Box) (recompilation__version__TypesWithoutModes_37));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 3) = ((MR_Box) (recompilation__version__WithType_20));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 6) = ((MR_Box) (recompilation__version__Origin_23));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 7) = ((MR_Box) (recompilation__version__TypeVarSet_24));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 8) = ((MR_Box) (recompilation__version__EmptyInstVarSet_39));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 9) = ((MR_Box) (recompilation__version__ExistQVars_26));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 10) = ((MR_Box) (recompilation__version__Purity_27));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 11) = ((MR_Box) (recompilation__version__Constraints_28));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 12) = ((MR_Box) (recompilation__version__Context_29));
#line 448 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__PredItemPredDecl_40, 13) = ((MR_Box) (recompilation__version__SeqNum_30));
#line 448 "recompilation.version.m"
        }
#line 452 "recompilation.version.m"
        {
#line 452 "recompilation.version.m"
          recompilation__version__PredItem_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "recompilation.version.m"
          MR_hl_field(MR_mktag(3), recompilation__version__PredItem_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "recompilation.version.m"
          MR_hl_field(MR_mktag(3), recompilation__version__PredItem_41, 1) = ((MR_Box) (recompilation__version__PredItemPredDecl_40));
#line 452 "recompilation.version.m"
        }
#line 459 "recompilation.version.m"
        if ((recompilation__version__WithInst_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "recompilation.version.m"
          {
#line 461 "recompilation.version.m"
            recompilation__version__MaybePredOrFunc_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "recompilation.version.m"
            MR_hl_field(MR_mktag(1), recompilation__version__MaybePredOrFunc_43, 0) = ((MR_Box) (recompilation__version__PredOrFunc_18));
#line 461 "recompilation.version.m"
          }
#line 459 "recompilation.version.m"
        else
#line 458 "recompilation.version.m"
          recompilation__version__MaybePredOrFunc_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "recompilation.version.m"
        {
#line 463 "recompilation.version.m"
          recompilation__version__ModeItemModeDecl_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 0) = ((MR_Box) (recompilation__version__PredName_17));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 1) = ((MR_Box) (recompilation__version__MaybePredOrFunc_43));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 2) = ((MR_Box) (recompilation__version__Modes_33));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 3) = ((MR_Box) (recompilation__version__WithInst_21));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 4) = ((MR_Box) (recompilation__version__MaybeDetism_22));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 5) = ((MR_Box) (recompilation__version__InstVarSet_25));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 6) = ((MR_Box) (recompilation__version__Context_29));
#line 463 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__ModeItemModeDecl_44, 7) = ((MR_Box) (recompilation__version__SeqNum_30));
#line 463 "recompilation.version.m"
        }
#line 465 "recompilation.version.m"
        {
#line 465 "recompilation.version.m"
          recompilation__version__ModeItem_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "recompilation.version.m"
          MR_hl_field(MR_mktag(3), recompilation__version__ModeItem_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "recompilation.version.m"
          MR_hl_field(MR_mktag(3), recompilation__version__ModeItem_45, 1) = ((MR_Box) (recompilation__version__ModeItemModeDecl_44));
#line 465 "recompilation.version.m"
        }
#line 466 "recompilation.version.m"
        {
#line 466 "recompilation.version.m"
          recompilation__version__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_63_63, 0) = ((MR_Box) (recompilation__version__Section_8));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_63_63, 1) = ((MR_Box) (recompilation__version__PredItem_41));
#line 466 "recompilation.version.m"
        }
#line 466 "recompilation.version.m"
        {
#line 466 "recompilation.version.m"
          recompilation__version__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_65_65, 0) = ((MR_Box) (recompilation__version__Section_8));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__V_65_65, 1) = ((MR_Box) (recompilation__version__ModeItem_45));
#line 466 "recompilation.version.m"
        }
#line 466 "recompilation.version.m"
        {
#line 466 "recompilation.version.m"
          recompilation__version__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_64_64, 0) = ((MR_Box) (recompilation__version__V_65_65));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "recompilation.version.m"
        }
#line 466 "recompilation.version.m"
        {
#line 466 "recompilation.version.m"
          recompilation__version__AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 0) = ((MR_Box) (recompilation__version__V_63_63));
#line 466 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 1) = ((MR_Box) (recompilation__version__V_64_64));
#line 466 "recompilation.version.m"
        }
#line 446 "recompilation.version.m"
      }
#line 434 "recompilation.version.m"
    else
#line 467 "recompilation.version.m"
      {
#line 467 "recompilation.version.m"
        MR_Word recompilation__version__ItemTypeClass_47;
#line 467 "recompilation.version.m"
        MR_Word recompilation__version__Methods0_48;
#line 468 "recompilation.version.m"
        MR_Word recompilation__version__V_67_67;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_77_77;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_78_78;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_79_79;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_80_80;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_81_81;
#line 469 "recompilation.version.m"
        MR_Word recompilation__version__V_82_82;
#line 469 "recompilation.version.m"
        MR_Integer recompilation__version__V_83_83;

#line 468 "recompilation.version.m"
        recompilation__version__succeeded = ((((MR_tag((MR_Word) recompilation__version__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 468 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 468 "recompilation.version.m"
          {
#line 468 "recompilation.version.m"
            recompilation__version__ItemTypeClass_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 469 "recompilation.version.m"
            recompilation__version__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 0)));
#line 469 "recompilation.version.m"
            recompilation__version__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 1)));
#line 469 "recompilation.version.m"
            recompilation__version__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 2)));
#line 469 "recompilation.version.m"
            recompilation__version__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 3)));
#line 469 "recompilation.version.m"
            recompilation__version__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 4)));
#line 469 "recompilation.version.m"
            recompilation__version__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 5)));
#line 469 "recompilation.version.m"
            recompilation__version__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 6)));
#line 469 "recompilation.version.m"
            recompilation__version__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 7)));
#line 469 "recompilation.version.m"
            recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 469 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 469 "recompilation.version.m"
              recompilation__version__Methods0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_67_67, (MR_Integer) 0)));
#line 468 "recompilation.version.m"
          }
#line 467 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 471 "recompilation.version.m"
          {
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__MethodsList_49;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__Methods_50;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__NewItemTypeClass_51;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__NewItem_52;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__V_69_69;
#line 471 "recompilation.version.m"
            MR_Word recompilation__version__V_70_70;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_84_84;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_85_85;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_86_86;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_87_87;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_89_89;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_90_90;
#line 473 "recompilation.version.m"
            MR_Integer recompilation__version__V_91_91;
#line 473 "recompilation.version.m"
            MR_Word recompilation__version__V_88_88;

#line 471 "recompilation.version.m"
            {
#line 471 "recompilation.version.m"
              recompilation__version__MethodsList_49 = mercury__list__map_2_f_0(recompilation__version__TypeCtorInfo_95_95, (MR_Word) &recompilation__version_scalar_common_2[4], (MR_Word) &recompilation__version_scalar_common_1[17], recompilation__version__Methods0_48);
            }
#line 472 "recompilation.version.m"
            {
#line 472 "recompilation.version.m"
              mercury__list__condense_2_p_0(recompilation__version__TypeCtorInfo_95_95, recompilation__version__MethodsList_49, &recompilation__version__Methods_50);
            }
#line 474 "recompilation.version.m"
            {
#line 474 "recompilation.version.m"
              recompilation__version__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 474 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__V_69_69, 0) = ((MR_Box) (recompilation__version__Methods_50));
#line 474 "recompilation.version.m"
            }
#line 473 "recompilation.version.m"
            recompilation__version__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 0)));
#line 473 "recompilation.version.m"
            recompilation__version__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 1)));
#line 473 "recompilation.version.m"
            recompilation__version__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 2)));
#line 473 "recompilation.version.m"
            recompilation__version__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 3)));
#line 473 "recompilation.version.m"
            recompilation__version__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 4)));
#line 473 "recompilation.version.m"
            recompilation__version__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 5)));
#line 473 "recompilation.version.m"
            recompilation__version__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 6)));
#line 473 "recompilation.version.m"
            recompilation__version__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_47, (MR_Integer) 7)));
#line 473 "recompilation.version.m"
            {
#line 473 "recompilation.version.m"
              recompilation__version__NewItemTypeClass_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 0) = ((MR_Box) (recompilation__version__V_84_84));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 1) = ((MR_Box) (recompilation__version__V_85_85));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 2) = ((MR_Box) (recompilation__version__V_86_86));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 3) = ((MR_Box) (recompilation__version__V_87_87));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 4) = ((MR_Box) (recompilation__version__V_69_69));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 5) = ((MR_Box) (recompilation__version__V_89_89));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 6) = ((MR_Box) (recompilation__version__V_90_90));
#line 473 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__NewItemTypeClass_51, 7) = ((MR_Box) (recompilation__version__V_91_91));
#line 473 "recompilation.version.m"
            }
#line 475 "recompilation.version.m"
            {
#line 475 "recompilation.version.m"
              recompilation__version__NewItem_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "recompilation.version.m"
              MR_hl_field(MR_mktag(3), recompilation__version__NewItem_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 475 "recompilation.version.m"
              MR_hl_field(MR_mktag(3), recompilation__version__NewItem_52, 1) = ((MR_Box) (recompilation__version__NewItemTypeClass_51));
#line 475 "recompilation.version.m"
            }
#line 476 "recompilation.version.m"
            {
#line 476 "recompilation.version.m"
              recompilation__version__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_70_70, 0) = ((MR_Box) (recompilation__version__Section_8));
#line 476 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_70_70, 1) = ((MR_Box) (recompilation__version__NewItem_52));
#line 476 "recompilation.version.m"
            }
#line 476 "recompilation.version.m"
            {
#line 476 "recompilation.version.m"
              recompilation__version__AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 0) = ((MR_Box) (recompilation__version__V_70_70));
#line 476 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "recompilation.version.m"
            }
#line 471 "recompilation.version.m"
          }
#line 467 "recompilation.version.m"
        else
#line 478 "recompilation.version.m"
          {
#line 478 "recompilation.version.m"
            MR_Word recompilation__version__V_72_72;

#line 478 "recompilation.version.m"
            {
#line 478 "recompilation.version.m"
              recompilation__version__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_72_72, 0) = ((MR_Box) (recompilation__version__Section_8));
#line 478 "recompilation.version.m"
              MR_hl_field(MR_mktag(0), recompilation__version__V_72_72, 1) = ((MR_Box) (recompilation__version__Item_6));
#line 478 "recompilation.version.m"
            }
#line 478 "recompilation.version.m"
            {
#line 478 "recompilation.version.m"
              recompilation__version__AddedItems_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 0) = ((MR_Box) (recompilation__version__V_72_72));
#line 478 "recompilation.version.m"
              MR_hl_field(MR_mktag(1), recompilation__version__AddedItems_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "recompilation.version.m"
            }
#line 478 "recompilation.version.m"
          }
#line 467 "recompilation.version.m"
      }
#line 12004 "recompilation.version.c"
    recompilation__version__TypeInfo_99_99 = (MR_Word) &recompilation__version_scalar_common_1[3];
#line 480 "recompilation.version.m"
    {
#line 480 "recompilation.version.m"
      recompilation__version__conv2_IdMap0_53 = recompilation__extract_ids_2_f_0(recompilation__version__TypeInfo_99_99, recompilation__version__STATE_VARIABLE_GatheredItems_0_56, recompilation__version__ItemType_10);
    }
#line 480 "recompilation.version.m"
    recompilation__version__IdMap0_53 = ((MR_Word) recompilation__version__conv2_IdMap0_53);
#line 481 "recompilation.version.m"
    {
#line 481 "recompilation.version.m"
      recompilation__version__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], recompilation__version__IdMap0_53, ((MR_Box) (recompilation__version__NameArity_15)), &recompilation__version__conv3_OldItems_54);
    }
#line 481 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 481 "recompilation.version.m"
      {
#line 481 "recompilation.version.m"
        recompilation__version__OldItems_54 = ((MR_Word) recompilation__version__conv3_OldItems_54);
#line 481 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 481 "recompilation.version.m"
      }
#line 481 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 482 "recompilation.version.m"
      {
#line 482 "recompilation.version.m"
        MR_Word recompilation__version__V_74_74;

#line 482 "recompilation.version.m"
        {
#line 482 "recompilation.version.m"
          recompilation__version__V_74_74 = mercury__list__f_43_43_2_f_0((MR_Word) &recompilation__version_scalar_common_1[2], recompilation__version__AddedItems_46, recompilation__version__OldItems_54);
        }
#line 482 "recompilation.version.m"
        {
#line 482 "recompilation.version.m"
          mercury__map__det_update_4_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (recompilation__version__NameArity_15)), ((MR_Box) (recompilation__version__V_74_74)), recompilation__version__IdMap0_53, &recompilation__version__IdMap_55);
        }
#line 482 "recompilation.version.m"
      }
#line 481 "recompilation.version.m"
    else
#line 484 "recompilation.version.m"
      {
#line 484 "recompilation.version.m"
        {
#line 484 "recompilation.version.m"
          mercury__map__det_insert_4_p_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (recompilation__version__NameArity_15)), ((MR_Box) (recompilation__version__AddedItems_46)), recompilation__version__IdMap0_53, &recompilation__version__IdMap_55);
        }
#line 484 "recompilation.version.m"
      }
#line 486 "recompilation.version.m"
    {
#line 486 "recompilation.version.m"
      recompilation__update_ids_4_p_0(recompilation__version__TypeInfo_99_99, recompilation__version__ItemType_10, ((MR_Box) (recompilation__version__IdMap_55)), recompilation__version__STATE_VARIABLE_GatheredItems_0_56, recompilation__version__STATE_VARIABLE_GatheredItems_57);
    }
#line 425 "recompilation.version.m"
  }
#line 422 "recompilation.version.m"
}

#line 253 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_in_item_4_p_0(
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__Section_5,
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__Item_6,
#line 253 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_Info_0_114,
#line 253 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_Info_115)
#line 253 "recompilation.version.m"
{
#line 258 "recompilation.version.m"
  {
#line 258 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 258 "recompilation.version.m"
#line 258 "recompilation.version.m"
    switch (MR_tag((MR_Word) recompilation__version__Item_6)) {
#line 258 "recompilation.version.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 258 "recompilation.version.m"
      case (MR_Integer) 0:
#line 417 "recompilation.version.m"
        {
#line 419 "recompilation.version.m"
          {
#line 419 "recompilation.version.m"
            mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
#line 419 "recompilation.version.m"
            return;
          }
#line 417 "recompilation.version.m"
        }
#line 258 "recompilation.version.m"
        break;
#line 258 "recompilation.version.m"
      case (MR_Integer) 1:
#line 258 "recompilation.version.m"
        {
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__ItemTypeDefn_8 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item_6), (MR_Integer) 1);
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 0)));
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 1)));
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__Body_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 2)));
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 3)));
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 4)));
#line 258 "recompilation.version.m"
          MR_Integer recompilation__version__SeqNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeDefn_8, (MR_Integer) 5)));
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__NameItem_16;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__BodyItem_17;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__TypeCtorItem_30;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__GatheredItems0_31;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__GatheredItems1_32;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__GatheredItems_33;
#line 258 "recompilation.version.m"
          MR_Integer recompilation__version__V_143_143;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__V_144_144;
#line 258 "recompilation.version.m"
          MR_Word recompilation__version__V_146_146;
#line 292 "recompilation.version.m"
          MR_Word recompilation__version__V_190_190;
#line 292 "recompilation.version.m"
          MR_Word recompilation__version__V_191_191;
#line 297 "recompilation.version.m"
          MR_Word recompilation__version__V_193_193;
#line 297 "recompilation.version.m"
          MR_Word recompilation__version__V_194_194;
#line 297 "recompilation.version.m"
          MR_Word recompilation__version__V_192_192;

#line 268 "recompilation.version.m"
#line 268 "recompilation.version.m"
          switch (MR_tag((MR_Word) recompilation__version__Body_11)) {
#line 268 "recompilation.version.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "recompilation.version.m"
            case (MR_Integer) 0:
#line 269 "recompilation.version.m"
              {
#line 269 "recompilation.version.m"
                MR_Word recompilation__version__NameItemTypeDefn_23;

#line 273 "recompilation.version.m"
                {
#line 273 "recompilation.version.m"
                  recompilation__version__NameItemTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 0) = ((MR_Box) (recompilation__version__Name_9));
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 1) = ((MR_Box) (recompilation__version__Args_10));
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &recompilation__version_scalar_common_8[0])));
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 3) = ((MR_Box) (recompilation__version__VarSet_12));
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 4) = ((MR_Box) (recompilation__version__Context_13));
#line 273 "recompilation.version.m"
                  MR_hl_field(MR_mktag(0), recompilation__version__NameItemTypeDefn_23, 5) = ((MR_Box) (recompilation__version__SeqNum_14));
#line 273 "recompilation.version.m"
                }
#line 275 "recompilation.version.m"
                recompilation__version__NameItem_16 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) recompilation__version__NameItemTypeDefn_23);
#line 276 "recompilation.version.m"
                recompilation__version__BodyItem_17 = recompilation__version__Item_6;
#line 269 "recompilation.version.m"
              }
#line 268 "recompilation.version.m"
              break;
#line 268 "recompilation.version.m"
            case (MR_Integer) 1:
#line 278 "recompilation.version.m"
              {
#line 280 "recompilation.version.m"
                recompilation__version__NameItem_16 = recompilation__version__Item_6;
#line 281 "recompilation.version.m"
                recompilation__version__BodyItem_17 = recompilation__version__Item_6;
#line 278 "recompilation.version.m"
              }
#line 268 "recompilation.version.m"
              break;
#line 268 "recompilation.version.m"
            case (MR_Integer) 2:
#line 262 "recompilation.version.m"
              {
#line 263 "recompilation.version.m"
                recompilation__version__NameItem_16 = recompilation__version__Item_6;
#line 267 "recompilation.version.m"
                recompilation__version__BodyItem_17 = recompilation__version__Item_6;
#line 262 "recompilation.version.m"
              }
#line 268 "recompilation.version.m"
              break;
#line 268 "recompilation.version.m"
            case (MR_Integer) 3:
#line 268 "recompilation.version.m"
#line 268 "recompilation.version.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Body_11, (MR_Integer) 0)))) {
#line 268 "recompilation.version.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 268 "recompilation.version.m"
                case (MR_Integer) 0:
#line 283 "recompilation.version.m"
                  {
#line 284 "recompilation.version.m"
                    recompilation__version__NameItem_16 = recompilation__version__Item_6;
#line 285 "recompilation.version.m"
                    recompilation__version__BodyItem_17 = recompilation__version__Item_6;
#line 283 "recompilation.version.m"
                  }
#line 268 "recompilation.version.m"
                  break;
#line 268 "recompilation.version.m"
                case (MR_Integer) 1:
#line 287 "recompilation.version.m"
                  {
#line 288 "recompilation.version.m"
                    recompilation__version__NameItem_16 = recompilation__version__Item_6;
#line 289 "recompilation.version.m"
                    recompilation__version__BodyItem_17 = recompilation__version__Item_6;
#line 287 "recompilation.version.m"
                  }
#line 268 "recompilation.version.m"
                  break;
#line 268 "recompilation.version.m"
              }
#line 268 "recompilation.version.m"
              break;
#line 268 "recompilation.version.m"
          }
#line 291 "recompilation.version.m"
          {
#line 291 "recompilation.version.m"
            recompilation__version__V_143_143 = mercury__list__length_1_f_0((MR_Word) &recompilation__version_scalar_common_2[2], recompilation__version__Args_10);
          }
#line 291 "recompilation.version.m"
          {
#line 291 "recompilation.version.m"
            recompilation__version__TypeCtorItem_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__TypeCtorItem_30, 0) = ((MR_Box) (recompilation__version__Name_9));
#line 291 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__TypeCtorItem_30, 1) = ((MR_Box) (recompilation__version__V_143_143));
#line 291 "recompilation.version.m"
          }
#line 292 "recompilation.version.m"
          recompilation__version__GatheredItems0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 292 "recompilation.version.m"
          recompilation__version__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 292 "recompilation.version.m"
          recompilation__version__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 293 "recompilation.version.m"
          {
#line 293 "recompilation.version.m"
            recompilation__version__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_144_144, 0) = ((MR_Box) ((MR_Integer) 0));
#line 293 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_144_144, 1) = ((MR_Box) (recompilation__version__TypeCtorItem_30));
#line 293 "recompilation.version.m"
          }
#line 293 "recompilation.version.m"
          {
#line 293 "recompilation.version.m"
            recompilation__version__add_gathered_item_5_p_0(recompilation__version__NameItem_16, recompilation__version__V_144_144, recompilation__version__Section_5, recompilation__version__GatheredItems0_31, &recompilation__version__GatheredItems1_32);
          }
#line 295 "recompilation.version.m"
          {
#line 295 "recompilation.version.m"
            recompilation__version__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_146_146, 0) = ((MR_Box) ((MR_Integer) 1));
#line 295 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_146_146, 1) = ((MR_Box) (recompilation__version__TypeCtorItem_30));
#line 295 "recompilation.version.m"
          }
#line 295 "recompilation.version.m"
          {
#line 295 "recompilation.version.m"
            recompilation__version__add_gathered_item_5_p_0(recompilation__version__BodyItem_17, recompilation__version__V_146_146, recompilation__version__Section_5, recompilation__version__GatheredItems1_32, &recompilation__version__GatheredItems_33);
          }
#line 297 "recompilation.version.m"
          recompilation__version__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 297 "recompilation.version.m"
          recompilation__version__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 297 "recompilation.version.m"
          recompilation__version__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 297 "recompilation.version.m"
          {
#line 297 "recompilation.version.m"
            MR_Word base;
#line 297 "recompilation.version.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 297 "recompilation.version.m"
            *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 297 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_33));
#line 297 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_193_193));
#line 297 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_194_194));
#line 297 "recompilation.version.m"
          }
#line 258 "recompilation.version.m"
        }
#line 258 "recompilation.version.m"
        break;
#line 258 "recompilation.version.m"
      case (MR_Integer) 2:
#line 396 "recompilation.version.m"
        {
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__ItemInstDefn_74 = (MR_Word) MR_body(((MR_Word) recompilation__version__Item_6), (MR_Integer) 2);
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__Params_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__V_126_126;
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__Name_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 0)));
#line 396 "recompilation.version.m"
          MR_Integer recompilation__version__Arity_163;
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__GatheredItems0_181;
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__GatheredItems_182;
#line 396 "recompilation.version.m"
          MR_Word recompilation__version__ItemId_187;
#line 364 "recompilation.version.m"
          MR_Word recompilation__version__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 2)));
#line 364 "recompilation.version.m"
          MR_Word recompilation__version__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 3)));
#line 364 "recompilation.version.m"
          MR_Word recompilation__version__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 4)));
#line 364 "recompilation.version.m"
          MR_Word recompilation__version__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 5)));
#line 364 "recompilation.version.m"
          MR_Integer recompilation__version__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstDefn_74, (MR_Integer) 6)));
#line 397 "recompilation.version.m"
          MR_Word recompilation__version__V_215_215;
#line 397 "recompilation.version.m"
          MR_Word recompilation__version__V_216_216;
#line 400 "recompilation.version.m"
          MR_Word recompilation__version__V_218_218;
#line 400 "recompilation.version.m"
          MR_Word recompilation__version__V_219_219;
#line 400 "recompilation.version.m"
          MR_Word recompilation__version__V_217_217;

#line 365 "recompilation.version.m"
          {
#line 365 "recompilation.version.m"
            mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[3], recompilation__version__Params_75, &recompilation__version__Arity_163);
          }
#line 366 "recompilation.version.m"
          {
#line 366 "recompilation.version.m"
            recompilation__version__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_126_126, 0) = ((MR_Box) (recompilation__version__Name_162));
#line 366 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__V_126_126, 1) = ((MR_Box) (recompilation__version__Arity_163));
#line 366 "recompilation.version.m"
          }
#line 366 "recompilation.version.m"
          {
#line 366 "recompilation.version.m"
            recompilation__version__ItemId_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__ItemId_187, 0) = ((MR_Box) ((MR_Integer) 3));
#line 366 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), recompilation__version__ItemId_187, 1) = ((MR_Box) (recompilation__version__V_126_126));
#line 366 "recompilation.version.m"
          }
#line 397 "recompilation.version.m"
          recompilation__version__GatheredItems0_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 397 "recompilation.version.m"
          recompilation__version__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 397 "recompilation.version.m"
          recompilation__version__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 398 "recompilation.version.m"
          {
#line 398 "recompilation.version.m"
            recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__ItemId_187, recompilation__version__Section_5, recompilation__version__GatheredItems0_181, &recompilation__version__GatheredItems_182);
          }
#line 400 "recompilation.version.m"
          recompilation__version__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 400 "recompilation.version.m"
          recompilation__version__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 400 "recompilation.version.m"
          recompilation__version__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 400 "recompilation.version.m"
          {
#line 400 "recompilation.version.m"
            MR_Word base;
#line 400 "recompilation.version.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "recompilation.version.m"
            *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 400 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_182));
#line 400 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_218_218));
#line 400 "recompilation.version.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_219_219));
#line 400 "recompilation.version.m"
          }
#line 396 "recompilation.version.m"
        }
#line 258 "recompilation.version.m"
        break;
#line 258 "recompilation.version.m"
      case (MR_Integer) 3:
#line 258 "recompilation.version.m"
#line 258 "recompilation.version.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 0)))) {
#line 258 "recompilation.version.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 258 "recompilation.version.m"
          case (MR_Integer) 0:
#line 396 "recompilation.version.m"
            {
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDefn_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__V_124_124;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__Name_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 0)));
#line 396 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_165;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__Params_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems0_245;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems_246;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemId_247;
#line 369 "recompilation.version.m"
              MR_Word recompilation__version__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 2)));
#line 369 "recompilation.version.m"
              MR_Word recompilation__version__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 3)));
#line 369 "recompilation.version.m"
              MR_Word recompilation__version__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 4)));
#line 369 "recompilation.version.m"
              MR_Integer recompilation__version__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDefn_81, (MR_Integer) 5)));
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_236_236;
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_237_237;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_240_240;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_241_241;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_238_238;

#line 370 "recompilation.version.m"
              {
#line 370 "recompilation.version.m"
                mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[3], recompilation__version__Params_166, &recompilation__version__Arity_165);
              }
#line 371 "recompilation.version.m"
              {
#line 371 "recompilation.version.m"
                recompilation__version__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_124_124, 0) = ((MR_Box) (recompilation__version__Name_164));
#line 371 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_124_124, 1) = ((MR_Box) (recompilation__version__Arity_165));
#line 371 "recompilation.version.m"
              }
#line 371 "recompilation.version.m"
              {
#line 371 "recompilation.version.m"
                recompilation__version__ItemId_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_247, 0) = ((MR_Box) ((MR_Integer) 2));
#line 371 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_247, 1) = ((MR_Box) (recompilation__version__V_124_124));
#line 371 "recompilation.version.m"
              }
#line 397 "recompilation.version.m"
              recompilation__version__GatheredItems0_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 397 "recompilation.version.m"
              recompilation__version__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 397 "recompilation.version.m"
              recompilation__version__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 398 "recompilation.version.m"
              {
#line 398 "recompilation.version.m"
                recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__ItemId_247, recompilation__version__Section_5, recompilation__version__GatheredItems0_245, &recompilation__version__GatheredItems_246);
              }
#line 400 "recompilation.version.m"
              recompilation__version__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 400 "recompilation.version.m"
              recompilation__version__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 400 "recompilation.version.m"
              recompilation__version__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 400 "recompilation.version.m"
              {
#line 400 "recompilation.version.m"
                MR_Word base;
#line 400 "recompilation.version.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_246));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_240_240));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_241_241));
#line 400 "recompilation.version.m"
              }
#line 396 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 1:
#line 396 "recompilation.version.m"
            {
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemPredDecl_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__TypesAndModes_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 2)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__WithType_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 3)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__V_122_122;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__SymName_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 0)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFunc_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Integer recompilation__version__Arity_169;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemType_170;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems0_262;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems_263;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemId_264;
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 4)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 5)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 6)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 7)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 8)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 9)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 10)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 11)));
#line 374 "recompilation.version.m"
              MR_Word recompilation__version__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 12)));
#line 374 "recompilation.version.m"
              MR_Integer recompilation__version__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPredDecl_86, (MR_Integer) 13)));
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_253_253;
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_254_254;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_257_257;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_258_258;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_255_255;

#line 384 "recompilation.version.m"
              if ((recompilation__version__WithType_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "recompilation.version.m"
                {
#line 381 "recompilation.version.m"
                  MR_Integer recompilation__version__V_121_121;

#line 383 "recompilation.version.m"
                  {
#line 383 "recompilation.version.m"
                    recompilation__version__V_121_121 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, recompilation__version__TypesAndModes_87);
                  }
#line 382 "recompilation.version.m"
                  {
#line 382 "recompilation.version.m"
                    parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_168, &recompilation__version__Arity_169, recompilation__version__V_121_121);
                  }
#line 381 "recompilation.version.m"
                }
#line 384 "recompilation.version.m"
              else
#line 385 "recompilation.version.m"
                {
#line 386 "recompilation.version.m"
                  {
#line 386 "recompilation.version.m"
                    recompilation__version__Arity_169 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, recompilation__version__TypesAndModes_87);
                  }
#line 385 "recompilation.version.m"
                }
#line 388 "recompilation.version.m"
              {
#line 388 "recompilation.version.m"
                recompilation__version__ItemType_170 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__version__PredOrFunc_168);
              }
#line 389 "recompilation.version.m"
              {
#line 389 "recompilation.version.m"
                recompilation__version__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_122_122, 0) = ((MR_Box) (recompilation__version__SymName_167));
#line 389 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_122_122, 1) = ((MR_Box) (recompilation__version__Arity_169));
#line 389 "recompilation.version.m"
              }
#line 389 "recompilation.version.m"
              {
#line 389 "recompilation.version.m"
                recompilation__version__ItemId_264 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_264, 0) = ((MR_Box) (recompilation__version__ItemType_170));
#line 389 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_264, 1) = ((MR_Box) (recompilation__version__V_122_122));
#line 389 "recompilation.version.m"
              }
#line 397 "recompilation.version.m"
              recompilation__version__GatheredItems0_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 397 "recompilation.version.m"
              recompilation__version__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 397 "recompilation.version.m"
              recompilation__version__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 398 "recompilation.version.m"
              {
#line 398 "recompilation.version.m"
                recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__ItemId_264, recompilation__version__Section_5, recompilation__version__GatheredItems0_262, &recompilation__version__GatheredItems_263);
              }
#line 400 "recompilation.version.m"
              recompilation__version__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 400 "recompilation.version.m"
              recompilation__version__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 400 "recompilation.version.m"
              recompilation__version__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 400 "recompilation.version.m"
              {
#line 400 "recompilation.version.m"
                MR_Word base;
#line 400 "recompilation.version.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_263));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_257_257));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_258_258));
#line 400 "recompilation.version.m"
              }
#line 396 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 2:
#line 303 "recompilation.version.m"
            {
#line 303 "recompilation.version.m"
              MR_Word recompilation__version__ItemModeDecl_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 303 "recompilation.version.m"
              MR_Word recompilation__version__SymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 0)));
#line 303 "recompilation.version.m"
              MR_Word recompilation__version__MaybePredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 1)));
#line 303 "recompilation.version.m"
              MR_Word recompilation__version__Modes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 2)));
#line 303 "recompilation.version.m"
              MR_Word recompilation__version__WithInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 3)));
#line 304 "recompilation.version.m"
              MR_Word recompilation__version__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 4)));
#line 304 "recompilation.version.m"
              MR_Word recompilation__version__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 5)));
#line 304 "recompilation.version.m"
              MR_Word recompilation__version__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 6)));
#line 304 "recompilation.version.m"
              MR_Integer recompilation__version__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemModeDecl_34, (MR_Integer) 7)));
#line 308 "recompilation.version.m"
              MR_Word recompilation__version__V_43_43;

#line 307 "recompilation.version.m"
              recompilation__version__succeeded = (recompilation__version__MaybePredOrFunc_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 307 "recompilation.version.m"
                {
#line 308 "recompilation.version.m"
                  recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__WithInst_38)) == (MR_mktag((MR_Integer) 1)));
#line 308 "recompilation.version.m"
                  if (recompilation__version__succeeded)
#line 308 "recompilation.version.m"
                    recompilation__version__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__WithInst_38, (MR_Integer) 0)));
#line 307 "recompilation.version.m"
                }
#line 306 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 310 "recompilation.version.m"
                {
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__ItemName_44;
#line 310 "recompilation.version.m"
                  MR_Integer recompilation__version__V_134_134;
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__V_135_135;
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__V_137_137;
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__GatheredItems0_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__GatheredItems1_150;
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__GatheredItems_151;
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 310 "recompilation.version.m"
                  MR_Word recompilation__version__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 316 "recompilation.version.m"
                  MR_Word recompilation__version__V_198_198;
#line 316 "recompilation.version.m"
                  MR_Word recompilation__version__V_199_199;
#line 316 "recompilation.version.m"
                  MR_Word recompilation__version__V_197_197;

#line 311 "recompilation.version.m"
                  {
#line 311 "recompilation.version.m"
                    recompilation__version__V_134_134 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_37);
                  }
#line 311 "recompilation.version.m"
                  {
#line 311 "recompilation.version.m"
                    recompilation__version__ItemName_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__ItemName_44, 0) = ((MR_Box) (recompilation__version__SymName_35));
#line 311 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__ItemName_44, 1) = ((MR_Box) (recompilation__version__V_134_134));
#line 311 "recompilation.version.m"
                  }
#line 312 "recompilation.version.m"
                  {
#line 312 "recompilation.version.m"
                    recompilation__version__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_135_135, 0) = ((MR_Box) ((MR_Integer) 6));
#line 312 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_135_135, 1) = ((MR_Box) (recompilation__version__ItemName_44));
#line 312 "recompilation.version.m"
                  }
#line 312 "recompilation.version.m"
                  {
#line 312 "recompilation.version.m"
                    recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__V_135_135, recompilation__version__Section_5, recompilation__version__GatheredItems0_149, &recompilation__version__GatheredItems1_150);
                  }
#line 314 "recompilation.version.m"
                  {
#line 314 "recompilation.version.m"
                    recompilation__version__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_137_137, 0) = ((MR_Box) ((MR_Integer) 7));
#line 314 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_137_137, 1) = ((MR_Box) (recompilation__version__ItemName_44));
#line 314 "recompilation.version.m"
                  }
#line 314 "recompilation.version.m"
                  {
#line 314 "recompilation.version.m"
                    recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__V_137_137, recompilation__version__Section_5, recompilation__version__GatheredItems1_150, &recompilation__version__GatheredItems_151);
                  }
#line 316 "recompilation.version.m"
                  recompilation__version__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 316 "recompilation.version.m"
                  recompilation__version__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 316 "recompilation.version.m"
                  recompilation__version__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 316 "recompilation.version.m"
                  {
#line 316 "recompilation.version.m"
                    MR_Word base;
#line 316 "recompilation.version.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 316 "recompilation.version.m"
                    *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 316 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_151));
#line 316 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_198_198));
#line 316 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_199_199));
#line 316 "recompilation.version.m"
                  }
#line 310 "recompilation.version.m"
                }
#line 306 "recompilation.version.m"
              else
#line 327 "recompilation.version.m"
              if ((recompilation__version__MaybePredOrFunc_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = recompilation__version__STATE_VARIABLE_Info_0_114;
#line 327 "recompilation.version.m"
              else
#line 319 "recompilation.version.m"
                {
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybePredOrFunc_36, (MR_Integer) 0)));
#line 319 "recompilation.version.m"
                  MR_Integer recompilation__version__Arity_46;
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__ItemType_47;
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__ItemId_48;
#line 319 "recompilation.version.m"
                  MR_Integer recompilation__version__V_140_140;
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__V_141_141;
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__GatheredItems0_152;
#line 319 "recompilation.version.m"
                  MR_Word recompilation__version__GatheredItems_153;
#line 323 "recompilation.version.m"
                  MR_Word recompilation__version__V_200_200;
#line 323 "recompilation.version.m"
                  MR_Word recompilation__version__V_201_201;
#line 326 "recompilation.version.m"
                  MR_Word recompilation__version__V_203_203;
#line 326 "recompilation.version.m"
                  MR_Word recompilation__version__V_204_204;
#line 326 "recompilation.version.m"
                  MR_Word recompilation__version__V_202_202;

#line 320 "recompilation.version.m"
                  {
#line 320 "recompilation.version.m"
                    recompilation__version__V_140_140 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, recompilation__version__Modes_37);
                  }
#line 320 "recompilation.version.m"
                  {
#line 320 "recompilation.version.m"
                    parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__version__PredOrFunc_45, &recompilation__version__Arity_46, recompilation__version__V_140_140);
                  }
#line 321 "recompilation.version.m"
                  {
#line 321 "recompilation.version.m"
                    recompilation__version__ItemType_47 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__version__PredOrFunc_45);
                  }
#line 322 "recompilation.version.m"
                  {
#line 322 "recompilation.version.m"
                    recompilation__version__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_141_141, 0) = ((MR_Box) (recompilation__version__SymName_35));
#line 322 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__V_141_141, 1) = ((MR_Box) (recompilation__version__Arity_46));
#line 322 "recompilation.version.m"
                  }
#line 322 "recompilation.version.m"
                  {
#line 322 "recompilation.version.m"
                    recompilation__version__ItemId_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__ItemId_48, 0) = ((MR_Box) (recompilation__version__ItemType_47));
#line 322 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), recompilation__version__ItemId_48, 1) = ((MR_Box) (recompilation__version__V_141_141));
#line 322 "recompilation.version.m"
                  }
#line 323 "recompilation.version.m"
                  recompilation__version__GatheredItems0_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 323 "recompilation.version.m"
                  recompilation__version__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 323 "recompilation.version.m"
                  recompilation__version__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 324 "recompilation.version.m"
                  {
#line 324 "recompilation.version.m"
                    recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__ItemId_48, recompilation__version__Section_5, recompilation__version__GatheredItems0_152, &recompilation__version__GatheredItems_153);
                  }
#line 326 "recompilation.version.m"
                  recompilation__version__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 326 "recompilation.version.m"
                  recompilation__version__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 326 "recompilation.version.m"
                  recompilation__version__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 326 "recompilation.version.m"
                  {
#line 326 "recompilation.version.m"
                    MR_Word base;
#line 326 "recompilation.version.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "recompilation.version.m"
                    *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 326 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_153));
#line 326 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_203_203));
#line 326 "recompilation.version.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_204_204));
#line 326 "recompilation.version.m"
                  }
#line 319 "recompilation.version.m"
                }
#line 303 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 3:
#line 351 "recompilation.version.m"
            {
#line 351 "recompilation.version.m"
              MR_Word recompilation__version__ItemPragma_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 351 "recompilation.version.m"
              MR_Word recompilation__version__PragmaType_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma_66, (MR_Integer) 0)));
#line 352 "recompilation.version.m"
              MR_Word recompilation__version__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma_66, (MR_Integer) 1)));
#line 352 "recompilation.version.m"
              MR_Word recompilation__version__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma_66, (MR_Integer) 2)));
#line 352 "recompilation.version.m"
              MR_Integer recompilation__version__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemPragma_66, (MR_Integer) 3)));
#line 353 "recompilation.version.m"
              MR_Word recompilation__version__PredOrFuncId_71;
#line 353 "recompilation.version.m"
              MR_Word recompilation__version__V_128_128;

#line 353 "recompilation.version.m"
              {
#line 353 "recompilation.version.m"
                recompilation__version__is_pred_pragma_2_p_0(recompilation__version__PragmaType_67, &recompilation__version__V_128_128);
              }
#line 353 "recompilation.version.m"
              recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 353 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 353 "recompilation.version.m"
                {
#line 353 "recompilation.version.m"
                  recompilation__version__PredOrFuncId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__V_128_128, (MR_Integer) 0)));
#line 354 "recompilation.version.m"
                  {
#line 354 "recompilation.version.m"
                    MR_Word recompilation__version__PragmaItems0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 354 "recompilation.version.m"
                    MR_Word recompilation__version__PragmaItems_73;
#line 354 "recompilation.version.m"
                    MR_Tuple recompilation__version__V_129_129;
#line 354 "recompilation.version.m"
                    MR_Word recompilation__version__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 354 "recompilation.version.m"
                    MR_Word recompilation__version__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 357 "recompilation.version.m"
                    MR_Word recompilation__version__V_212_212;
#line 357 "recompilation.version.m"
                    MR_Word recompilation__version__V_214_214;
#line 357 "recompilation.version.m"
                    MR_Word recompilation__version__V_213_213;

#line 356 "recompilation.version.m"
                    {
#line 356 "recompilation.version.m"
                      recompilation__version__V_129_129 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 356 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), recompilation__version__V_129_129, 0) = ((MR_Box) (recompilation__version__PredOrFuncId_71));
#line 356 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), recompilation__version__V_129_129, 1) = ((MR_Box) (recompilation__version__Item_6));
#line 356 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), recompilation__version__V_129_129, 2) = ((MR_Box) (recompilation__version__Section_5));
#line 356 "recompilation.version.m"
                    }
#line 355 "recompilation.version.m"
                    {
#line 355 "recompilation.version.m"
                      recompilation__version__PragmaItems_73 = mercury__cord__snoc_2_f_0((MR_Word) &recompilation__version_scalar_common_3[0], recompilation__version__PragmaItems0_72, ((MR_Box) (recompilation__version__V_129_129)));
                    }
#line 357 "recompilation.version.m"
                    recompilation__version__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 357 "recompilation.version.m"
                    recompilation__version__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 357 "recompilation.version.m"
                    recompilation__version__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 357 "recompilation.version.m"
                    {
#line 357 "recompilation.version.m"
                      MR_Word base;
#line 357 "recompilation.version.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 357 "recompilation.version.m"
                      *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 357 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__V_212_212));
#line 357 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__PragmaItems_73));
#line 357 "recompilation.version.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_214_214));
#line 357 "recompilation.version.m"
                    }
#line 354 "recompilation.version.m"
                  }
#line 353 "recompilation.version.m"
                }
#line 353 "recompilation.version.m"
              else
#line 353 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = recompilation__version__STATE_VARIABLE_Info_0_114;
#line 351 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 4:
#line 402 "recompilation.version.m"
            *recompilation__version__STATE_VARIABLE_Info_115 = recompilation__version__STATE_VARIABLE_Info_0_114;
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 5:
#line 396 "recompilation.version.m"
            {
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemTypeClass_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ClassVars_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 1)));
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__V_120_120;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ClassName_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 0)));
#line 396 "recompilation.version.m"
              MR_Integer recompilation__version__ClassArity_172;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems0_279;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__GatheredItems_280;
#line 396 "recompilation.version.m"
              MR_Word recompilation__version__ItemId_281;
#line 392 "recompilation.version.m"
              MR_Word recompilation__version__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 2)));
#line 392 "recompilation.version.m"
              MR_Word recompilation__version__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 3)));
#line 392 "recompilation.version.m"
              MR_Word recompilation__version__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 4)));
#line 392 "recompilation.version.m"
              MR_Word recompilation__version__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 5)));
#line 392 "recompilation.version.m"
              MR_Word recompilation__version__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 6)));
#line 392 "recompilation.version.m"
              MR_Integer recompilation__version__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemTypeClass_100, (MR_Integer) 7)));
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_270_270;
#line 397 "recompilation.version.m"
              MR_Word recompilation__version__V_271_271;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_274_274;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_275_275;
#line 400 "recompilation.version.m"
              MR_Word recompilation__version__V_272_272;

#line 394 "recompilation.version.m"
              {
#line 394 "recompilation.version.m"
                mercury__list__length_2_p_0((MR_Word) &recompilation__version_scalar_common_2[2], recompilation__version__ClassVars_101, &recompilation__version__ClassArity_172);
              }
#line 395 "recompilation.version.m"
              {
#line 395 "recompilation.version.m"
                recompilation__version__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_120_120, 0) = ((MR_Box) (recompilation__version__ClassName_171));
#line 395 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__V_120_120, 1) = ((MR_Box) (recompilation__version__ClassArity_172));
#line 395 "recompilation.version.m"
              }
#line 395 "recompilation.version.m"
              {
#line 395 "recompilation.version.m"
                recompilation__version__ItemId_281 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_281, 0) = ((MR_Box) ((MR_Integer) 4));
#line 395 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ItemId_281, 1) = ((MR_Box) (recompilation__version__V_120_120));
#line 395 "recompilation.version.m"
              }
#line 397 "recompilation.version.m"
              recompilation__version__GatheredItems0_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 397 "recompilation.version.m"
              recompilation__version__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 397 "recompilation.version.m"
              recompilation__version__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 398 "recompilation.version.m"
              {
#line 398 "recompilation.version.m"
                recompilation__version__add_gathered_item_5_p_0(recompilation__version__Item_6, recompilation__version__ItemId_281, recompilation__version__Section_5, recompilation__version__GatheredItems0_279, &recompilation__version__GatheredItems_280);
              }
#line 400 "recompilation.version.m"
              recompilation__version__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 400 "recompilation.version.m"
              recompilation__version__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 400 "recompilation.version.m"
              recompilation__version__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 400 "recompilation.version.m"
              {
#line 400 "recompilation.version.m"
                MR_Word base;
#line 400 "recompilation.version.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 400 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__GatheredItems_280));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_274_274));
#line 400 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__V_275_275));
#line 400 "recompilation.version.m"
              }
#line 396 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 6:
#line 334 "recompilation.version.m"
            {
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__ItemInstance_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__version__Item_6, (MR_Integer) 1)));
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__ClassName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 0)));
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__ClassArgs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 1)));
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__Instances0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 334 "recompilation.version.m"
              MR_Integer recompilation__version__ClassArity_60;
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__ClassItemName_61;
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__NewInstanceItem_62;
#line 334 "recompilation.version.m"
              MR_Word recompilation__version__Instances_65;
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 2)));
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 3)));
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 4)));
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 5)));
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 6)));
#line 335 "recompilation.version.m"
              MR_Word recompilation__version__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 7)));
#line 335 "recompilation.version.m"
              MR_Integer recompilation__version__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__version__ItemInstance_49, (MR_Integer) 8)));
#line 337 "recompilation.version.m"
              MR_Word recompilation__version__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 337 "recompilation.version.m"
              MR_Word recompilation__version__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 341 "recompilation.version.m"
              MR_Word recompilation__version__OldInstanceItems_63;
#line 341 "recompilation.version.m"
              MR_Box recompilation__version__conv0_OldInstanceItems_63;
#line 349 "recompilation.version.m"
              MR_Word recompilation__version__V_207_207;
#line 349 "recompilation.version.m"
              MR_Word recompilation__version__V_208_208;
#line 349 "recompilation.version.m"
              MR_Word recompilation__version__V_209_209;

#line 338 "recompilation.version.m"
              {
#line 338 "recompilation.version.m"
                recompilation__version__ClassArity_60 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__version__ClassArgs_51);
              }
#line 339 "recompilation.version.m"
              {
#line 339 "recompilation.version.m"
                recompilation__version__ClassItemName_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ClassItemName_61, 0) = ((MR_Box) (recompilation__version__ClassName_50));
#line 339 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__ClassItemName_61, 1) = ((MR_Box) (recompilation__version__ClassArity_60));
#line 339 "recompilation.version.m"
              }
#line 340 "recompilation.version.m"
              {
#line 340 "recompilation.version.m"
                recompilation__version__NewInstanceItem_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__NewInstanceItem_62, 0) = ((MR_Box) (recompilation__version__Section_5));
#line 340 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), recompilation__version__NewInstanceItem_62, 1) = ((MR_Box) (recompilation__version__Item_6));
#line 340 "recompilation.version.m"
              }
#line 341 "recompilation.version.m"
              {
#line 341 "recompilation.version.m"
                recompilation__version__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], recompilation__version__Instances0_59, ((MR_Box) (recompilation__version__ClassItemName_61)), &recompilation__version__conv0_OldInstanceItems_63);
              }
#line 341 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 341 "recompilation.version.m"
                {
#line 341 "recompilation.version.m"
                  recompilation__version__OldInstanceItems_63 = ((MR_Word) recompilation__version__conv0_OldInstanceItems_63);
#line 341 "recompilation.version.m"
                  recompilation__version__succeeded = MR_TRUE;
#line 341 "recompilation.version.m"
                }
#line 341 "recompilation.version.m"
              if (recompilation__version__succeeded)
#line 342 "recompilation.version.m"
                {
#line 342 "recompilation.version.m"
                  MR_Word recompilation__version__NewInstanceItems_64;

#line 342 "recompilation.version.m"
                  {
#line 342 "recompilation.version.m"
                    recompilation__version__NewInstanceItems_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "recompilation.version.m"
                    MR_hl_field(MR_mktag(1), recompilation__version__NewInstanceItems_64, 0) = ((MR_Box) (recompilation__version__NewInstanceItem_62));
#line 342 "recompilation.version.m"
                    MR_hl_field(MR_mktag(1), recompilation__version__NewInstanceItems_64, 1) = ((MR_Box) (recompilation__version__OldInstanceItems_63));
#line 342 "recompilation.version.m"
                  }
#line 343 "recompilation.version.m"
                  {
#line 343 "recompilation.version.m"
                    mercury__map__det_update_4_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (recompilation__version__ClassItemName_61)), ((MR_Box) (recompilation__version__NewInstanceItems_64)), recompilation__version__Instances0_59, &recompilation__version__Instances_65);
                  }
#line 342 "recompilation.version.m"
                }
#line 341 "recompilation.version.m"
              else
#line 346 "recompilation.version.m"
                {
#line 346 "recompilation.version.m"
                  MR_Word recompilation__version__V_131_131;

#line 346 "recompilation.version.m"
                  {
#line 346 "recompilation.version.m"
                    recompilation__version__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "recompilation.version.m"
                    MR_hl_field(MR_mktag(1), recompilation__version__V_131_131, 0) = ((MR_Box) (recompilation__version__NewInstanceItem_62));
#line 346 "recompilation.version.m"
                    MR_hl_field(MR_mktag(1), recompilation__version__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "recompilation.version.m"
                  }
#line 346 "recompilation.version.m"
                  {
#line 346 "recompilation.version.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], ((MR_Box) (recompilation__version__ClassItemName_61)), ((MR_Box) (recompilation__version__V_131_131)), recompilation__version__Instances0_59, &recompilation__version__Instances_65);
                  }
#line 346 "recompilation.version.m"
                }
#line 349 "recompilation.version.m"
              recompilation__version__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 0)));
#line 349 "recompilation.version.m"
              recompilation__version__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 1)));
#line 349 "recompilation.version.m"
              recompilation__version__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__STATE_VARIABLE_Info_0_114, (MR_Integer) 2)));
#line 349 "recompilation.version.m"
              {
#line 349 "recompilation.version.m"
                MR_Word base;
#line 349 "recompilation.version.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 349 "recompilation.version.m"
                *recompilation__version__STATE_VARIABLE_Info_115 = base;
#line 349 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__V_207_207));
#line 349 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__V_208_208));
#line 349 "recompilation.version.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__version__Instances_65));
#line 349 "recompilation.version.m"
              }
#line 334 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
          case (MR_Integer) 7:
#line 258 "recompilation.version.m"
          case (MR_Integer) 8:
#line 258 "recompilation.version.m"
          case (MR_Integer) 9:
#line 258 "recompilation.version.m"
          case (MR_Integer) 10:
#line 417 "recompilation.version.m"
            {
#line 419 "recompilation.version.m"
              {
#line 419 "recompilation.version.m"
                mercury__require__unexpected_3_p_0((MR_String) "recompilation.version", (MR_String) "predicate \140recompilation.version.gather_in_item\'/4", (MR_String) "unexpected item in interface");
#line 419 "recompilation.version.m"
                return;
              }
#line 417 "recompilation.version.m"
            }
#line 258 "recompilation.version.m"
            break;
#line 258 "recompilation.version.m"
        }
#line 258 "recompilation.version.m"
        break;
#line 258 "recompilation.version.m"
    }
#line 258 "recompilation.version.m"
  }
#line 253 "recompilation.version.m"
}

#line 245 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_in_section_4_p_0(
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__1_1,
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__HeadVar__2_2,
#line 245 "recompilation.version.m"
  MR_Word recompilation__version__STATE_VARIABLE_Info_0_3,
#line 245 "recompilation.version.m"
  MR_Word * recompilation__version__STATE_VARIABLE_Info_4)
#line 245 "recompilation.version.m"
{
#line 248 "recompilation.version.m"
  while (MR_TRUE)
#line 248 "recompilation.version.m"
    {
#line 248 "recompilation.version.m"
      /* tailcall optimized into a loop */
#line 248 "recompilation.version.m"
      {
#line 248 "recompilation.version.m"
        MR_bool recompilation__version__succeeded;

#line 248 "recompilation.version.m"
        if ((recompilation__version__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "recompilation.version.m"
          *recompilation__version__STATE_VARIABLE_Info_4 = recompilation__version__STATE_VARIABLE_Info_0_3;
#line 248 "recompilation.version.m"
        else
#line 249 "recompilation.version.m"
          {
#line 249 "recompilation.version.m"
            MR_Word recompilation__version__Item_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "recompilation.version.m"
            MR_Word recompilation__version__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "recompilation.version.m"
            MR_Word recompilation__version__STATE_VARIABLE_Info_15_15;

#line 250 "recompilation.version.m"
            {
#line 250 "recompilation.version.m"
              recompilation__version__gather_in_item_4_p_0(recompilation__version__HeadVar__1_1, recompilation__version__Item_10, recompilation__version__STATE_VARIABLE_Info_0_3, &recompilation__version__STATE_VARIABLE_Info_15_15);
            }
#line 251 "recompilation.version.m"
            /* direct tailcall eliminated */
#line 251 "recompilation.version.m"
            {
#line 251 "recompilation.version.m"
              MR_Word recompilation__version__HeadVar__2__tmp_copy_2 = recompilation__version__Items_11;
#line 251 "recompilation.version.m"
              MR_Word recompilation__version__STATE_VARIABLE_Info_0__tmp_copy_3 = recompilation__version__STATE_VARIABLE_Info_15_15;

#line 251 "recompilation.version.m"
              recompilation__version__STATE_VARIABLE_Info_0_3 = recompilation__version__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 251 "recompilation.version.m"
              recompilation__version__HeadVar__2_2 = recompilation__version__HeadVar__2__tmp_copy_2;
#line 251 "recompilation.version.m"
            }
#line 251 "recompilation.version.m"
            continue;
#line 249 "recompilation.version.m"
          }
#line 248 "recompilation.version.m"
      }
#line 248 "recompilation.version.m"
      break;
#line 248 "recompilation.version.m"
    }
#line 245 "recompilation.version.m"
}

#line 224 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_items_4_p_0_1(
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 224 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3)
#line 224 "recompilation.version.m"
{
#line 224 "recompilation.version.m"
  {
#line 224 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 224 "recompilation.version.m"
    MR_Word recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16;

#line 224 "recompilation.version.m"
    {
#line 224 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2), &recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16);
    }
#line 224 "recompilation.version.m"
    *recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16));
#line 224 "recompilation.version.m"
  }
#line 224 "recompilation.version.m"
}

#line 209 "recompilation.version.m"
static void MR_CALL 
recompilation__version__gather_items_4_p_0(
#line 209 "recompilation.version.m"
  MR_Word recompilation__version__IntItems_5,
#line 209 "recompilation.version.m"
  MR_Word recompilation__version__ImpItems_6,
#line 209 "recompilation.version.m"
  MR_Word * recompilation__version__GatheredItems_7,
#line 209 "recompilation.version.m"
  MR_Word * recompilation__version__Instances_8)
#line 209 "recompilation.version.m"
{
#line 212 "recompilation.version.m"
  {
#line 212 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_24_24 = (MR_Word) &recompilation__version_scalar_common_2[0];
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_25_25;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__GatheredItems0_9;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__Info0_10;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__Info1_11;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__Info_12;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__GatheredItems1_13;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__PragmaItemsCord_14;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__PragmaItems_15;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__V_16_16;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__V_17_17;
#line 212 "recompilation.version.m"
    MR_Word recompilation__version__V_18_18;
#line 224 "recompilation.version.m"
    MR_Box recompilation__version__conv1_GatheredItems_7;

#line 213 "recompilation.version.m"
    {
#line 213 "recompilation.version.m"
      recompilation__version__V_16_16 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], recompilation__version__TypeInfo_24_24);
    }
#line 213 "recompilation.version.m"
    {
#line 213 "recompilation.version.m"
      recompilation__version__GatheredItems0_9 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (recompilation__version__V_16_16)));
    }
#line 13503 "recompilation.version.c"
    recompilation__version__TypeInfo_25_25 = (MR_Word) &recompilation__version_scalar_common_3[0];
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__V_17_17 = mercury__cord__init_0_f_0(recompilation__version__TypeInfo_25_25);
    }
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__V_18_18 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__version__TypeInfo_24_24);
    }
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__Info0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_10, 0) = ((MR_Box) (recompilation__version__GatheredItems0_9));
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_10, 1) = ((MR_Box) (recompilation__version__V_17_17));
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_10, 2) = ((MR_Box) (recompilation__version__V_18_18));
#line 214 "recompilation.version.m"
    }
#line 215 "recompilation.version.m"
    {
#line 215 "recompilation.version.m"
      recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, recompilation__version__IntItems_5, recompilation__version__Info0_10, &recompilation__version__Info1_11);
    }
#line 216 "recompilation.version.m"
    {
#line 216 "recompilation.version.m"
      recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, recompilation__version__ImpItems_6, recompilation__version__Info1_11, &recompilation__version__Info_12);
    }
#line 222 "recompilation.version.m"
    recompilation__version__GatheredItems1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_12, (MR_Integer) 0)));
#line 222 "recompilation.version.m"
    recompilation__version__PragmaItemsCord_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_12, (MR_Integer) 1)));
#line 222 "recompilation.version.m"
    *recompilation__version__Instances_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_12, (MR_Integer) 2)));
#line 223 "recompilation.version.m"
    {
#line 223 "recompilation.version.m"
      recompilation__version__PragmaItems_15 = mercury__cord__list_1_f_0(recompilation__version__TypeInfo_25_25, recompilation__version__PragmaItemsCord_14);
    }
#line 224 "recompilation.version.m"
    {
#line 224 "recompilation.version.m"
      mercury__list__foldl_4_p_0(recompilation__version__TypeInfo_25_25, (MR_Word) &recompilation__version_scalar_common_4[0], (MR_Word) &recompilation__version_scalar_common_1[15], recompilation__version__PragmaItems_15, ((MR_Box) (recompilation__version__GatheredItems1_13)), &recompilation__version__conv1_GatheredItems_7);
    }
#line 224 "recompilation.version.m"
    *recompilation__version__GatheredItems_7 = ((MR_Word) recompilation__version__conv1_GatheredItems_7);
#line 212 "recompilation.version.m"
  }
#line 209 "recompilation.version.m"
}

#line 191 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0_1(
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 191 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2)
#line 191 "recompilation.version.m"
{
#line 191 "recompilation.version.m"
  {
#line 191 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_3;
#line 191 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 191 "recompilation.version.m"
    MR_Word recompilation__version__conv0_LambdaHeadVar__3_19;

#line 191 "recompilation.version.m"
    {
#line 191 "recompilation.version.m"
      recompilation__version__conv0_LambdaHeadVar__3_19 = recompilation__version__IntroducedFrom__func__compute_instance_version_numbers__193__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 5))), ((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 191 "recompilation.version.m"
    recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__3_19));
#line 191 "recompilation.version.m"
    return recompilation__version__wrapper_arg_3;
#line 191 "recompilation.version.m"
  }
#line 191 "recompilation.version.m"
}

#line 184 "recompilation.version.m"
static void MR_CALL 
recompilation__version__compute_instance_version_numbers_5_p_0(
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_6,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__CurInstanceItemMap_7,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceItemMap_8,
#line 184 "recompilation.version.m"
  MR_Word recompilation__version__OldInstanceVersionNumbers_9,
#line 184 "recompilation.version.m"
  MR_Word * recompilation__version__NewInstanceVersionNumbers_10)
#line 184 "recompilation.version.m"
{
#line 190 "recompilation.version.m"
  {
#line 190 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 190 "recompilation.version.m"
    MR_Word recompilation__version__V_16_16;

#line 191 "recompilation.version.m"
    {
#line 191 "recompilation.version.m"
      recompilation__version__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_6[1]));
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 1) = ((MR_Box) (recompilation__version__compute_instance_version_numbers_5_p_0_1));
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 3) = ((MR_Box) (recompilation__version__SourceFileTime_6));
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 4) = ((MR_Box) (recompilation__version__OldInstanceItemMap_8));
#line 191 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 5) = ((MR_Box) (recompilation__version__OldInstanceVersionNumbers_9));
#line 191 "recompilation.version.m"
    }
#line 191 "recompilation.version.m"
    {
#line 191 "recompilation.version.m"
      *recompilation__version__NewInstanceVersionNumbers_10 = mercury__map__map_values_2_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &recompilation__version_scalar_common_2[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__V_16_16, recompilation__version__CurInstanceItemMap_7);
    }
#line 190 "recompilation.version.m"
  }
#line 184 "recompilation.version.m"
}

#line 157 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_3_6_f_0(
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_8,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__OldGatheredItems_9,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__OldItemVersionNumbers_10,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__ItemType_11,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__NameArity_12,
#line 157 "recompilation.version.m"
  MR_Word recompilation__version__CurItems_13)
#line 157 "recompilation.version.m"
{
#line 162 "recompilation.version.m"
  {
#line 162 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 162 "recompilation.version.m"
    MR_Word recompilation__version__TimeStamp_14;
#line 162 "recompilation.version.m"
    MR_Word recompilation__version__OldIds_15;
#line 162 "recompilation.version.m"
    MR_Word recompilation__version__OldItemTypeVersionNumbers_16;
#line 163 "recompilation.version.m"
    MR_Box recompilation__version__conv0_OldIds_15;
#line 164 "recompilation.version.m"
    MR_Box recompilation__version__conv1_OldItemTypeVersionNumbers_16;
#line 165 "recompilation.version.m"
    MR_Word recompilation__version__OldItemVersionNumber_20;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_24_24;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_26_26;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_27_27;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__OldItems_17;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__SortedOldItems_18;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__SortedCurItems_19;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__V_21_21;
#line 166 "recompilation.version.m"
    MR_Word recompilation__version__V_28_28;
#line 166 "recompilation.version.m"
    MR_Box recompilation__version__conv2_OldItems_17;
#line 177 "recompilation.version.m"
    MR_Box recompilation__version__conv3_OldItemVersionNumber_20;

#line 163 "recompilation.version.m"
    {
#line 163 "recompilation.version.m"
      recompilation__version__conv0_OldIds_15 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[3], recompilation__version__OldGatheredItems_9, recompilation__version__ItemType_11);
    }
#line 163 "recompilation.version.m"
    recompilation__version__OldIds_15 = ((MR_Word) recompilation__version__conv0_OldIds_15);
#line 164 "recompilation.version.m"
    {
#line 164 "recompilation.version.m"
      recompilation__version__conv1_OldItemTypeVersionNumbers_16 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__version_scalar_common_1[1], recompilation__version__OldItemVersionNumbers_10, recompilation__version__ItemType_11);
    }
#line 164 "recompilation.version.m"
    recompilation__version__OldItemTypeVersionNumbers_16 = ((MR_Word) recompilation__version__conv1_OldItemTypeVersionNumbers_16);
#line 13712 "recompilation.version.c"
    recompilation__version__TypeInfo_24_24 = (MR_Word) &recompilation__version_scalar_common_1[0];
#line 166 "recompilation.version.m"
    {
#line 166 "recompilation.version.m"
      recompilation__version__succeeded = mercury__map__search_3_p_0(recompilation__version__TypeInfo_24_24, (MR_Word) &recompilation__version_scalar_common_2[0], recompilation__version__OldIds_15, ((MR_Box) (recompilation__version__NameArity_12)), &recompilation__version__conv2_OldItems_17);
    }
#line 166 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 166 "recompilation.version.m"
      {
#line 166 "recompilation.version.m"
        recompilation__version__OldItems_17 = ((MR_Word) recompilation__version__conv2_OldItems_17);
#line 166 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 166 "recompilation.version.m"
      }
#line 166 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 166 "recompilation.version.m"
      {
#line 13733 "recompilation.version.c"
        recompilation__version__TypeInfo_26_26 = (MR_Word) &recompilation__version_scalar_common_1[2];
#line 174 "recompilation.version.m"
        {
#line 174 "recompilation.version.m"
          mercury__list__sort_2_p_0(recompilation__version__TypeInfo_26_26, recompilation__version__OldItems_17, &recompilation__version__SortedOldItems_18);
        }
#line 175 "recompilation.version.m"
        {
#line 175 "recompilation.version.m"
          mercury__list__sort_2_p_0(recompilation__version__TypeInfo_26_26, recompilation__version__CurItems_13, &recompilation__version__SortedCurItems_19);
        }
#line 176 "recompilation.version.m"
        recompilation__version__V_21_21 = (MR_Integer) 0;
#line 176 "recompilation.version.m"
        {
#line 176 "recompilation.version.m"
          recompilation__version__are_items_changed_3_p_0(recompilation__version__SortedOldItems_18, recompilation__version__SortedCurItems_19, &recompilation__version__V_28_28);
        }
#line 176 "recompilation.version.m"
        recompilation__version__succeeded = (recompilation__version__V_21_21 == recompilation__version__V_28_28);
#line 166 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 166 "recompilation.version.m"
          {
#line 13758 "recompilation.version.c"
            recompilation__version__TypeCtorInfo_27_27 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 177 "recompilation.version.m"
            {
#line 177 "recompilation.version.m"
              recompilation__version__succeeded = mercury__map__search_3_p_0(recompilation__version__TypeInfo_24_24, recompilation__version__TypeCtorInfo_27_27, recompilation__version__OldItemTypeVersionNumbers_16, ((MR_Box) (recompilation__version__NameArity_12)), &recompilation__version__conv3_OldItemVersionNumber_20);
            }
#line 177 "recompilation.version.m"
            if (recompilation__version__succeeded)
#line 177 "recompilation.version.m"
              {
#line 177 "recompilation.version.m"
                recompilation__version__OldItemVersionNumber_20 = ((MR_Word) recompilation__version__conv3_OldItemVersionNumber_20);
#line 177 "recompilation.version.m"
                recompilation__version__succeeded = MR_TRUE;
#line 177 "recompilation.version.m"
              }
#line 166 "recompilation.version.m"
          }
#line 166 "recompilation.version.m"
      }
#line 165 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 179 "recompilation.version.m"
      recompilation__version__TimeStamp_14 = recompilation__version__OldItemVersionNumber_20;
#line 165 "recompilation.version.m"
    else
#line 181 "recompilation.version.m"
      recompilation__version__TimeStamp_14 = recompilation__version__SourceFileTime_8;
#line 162 "recompilation.version.m"
    return recompilation__version__TimeStamp_14;
#line 162 "recompilation.version.m"
  }
#line 157 "recompilation.version.m"
}

#line 153 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0_1(
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 153 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2)
#line 153 "recompilation.version.m"
{
#line 153 "recompilation.version.m"
  {
#line 153 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_3;
#line 153 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 153 "recompilation.version.m"
    MR_Word recompilation__version__conv0_TimeStamp_14;

#line 153 "recompilation.version.m"
    {
#line 153 "recompilation.version.m"
      recompilation__version__conv0_TimeStamp_14 = recompilation__version__compute_item_version_numbers_3_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 6))), ((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 153 "recompilation.version.m"
    recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv0_TimeStamp_14));
#line 153 "recompilation.version.m"
    return recompilation__version__wrapper_arg_3;
#line 153 "recompilation.version.m"
  }
#line 153 "recompilation.version.m"
}

#line 145 "recompilation.version.m"
static MR_Word MR_CALL 
recompilation__version__compute_item_version_numbers_2_5_f_0(
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_7,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__OldGatheredItems_8,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__OldItemVersionNumbers_9,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__ItemType_10,
#line 145 "recompilation.version.m"
  MR_Word recompilation__version__CurGatheredItems_11)
#line 145 "recompilation.version.m"
{
#line 151 "recompilation.version.m"
  {
#line 151 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 151 "recompilation.version.m"
    MR_Word recompilation__version__HeadVar__6_6;
#line 151 "recompilation.version.m"
    MR_Word recompilation__version__V_12_12;

#line 153 "recompilation.version.m"
    {
#line 153 "recompilation.version.m"
      recompilation__version__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 0) = ((MR_Box) (&recompilation__version_scalar_common_7[0]));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 1) = ((MR_Box) (recompilation__version__compute_item_version_numbers_2_5_f_0_1));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 3) = ((MR_Box) (recompilation__version__SourceFileTime_7));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 4) = ((MR_Box) (recompilation__version__OldGatheredItems_8));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 5) = ((MR_Box) (recompilation__version__OldItemVersionNumbers_9));
#line 153 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_12_12, 6) = ((MR_Box) (recompilation__version__ItemType_10));
#line 153 "recompilation.version.m"
    }
#line 152 "recompilation.version.m"
    {
#line 152 "recompilation.version.m"
      recompilation__version__HeadVar__6_6 = mercury__map__map_values_2_f_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &recompilation__version_scalar_common_2[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__V_12_12, recompilation__version__CurGatheredItems_11);
    }
#line 151 "recompilation.version.m"
    return recompilation__version__HeadVar__6_6;
#line 151 "recompilation.version.m"
  }
#line 145 "recompilation.version.m"
}

#line 67 "recompilation.version.m"
MR_Integer MR_CALL 
recompilation__version__version_numbers_version_number_0_f_0(void)
#line 67 "recompilation.version.m"
{
#line 1321 "recompilation.version.m"
  {
#line 1321 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;

#line 1321 "recompilation.version.m"
    return (MR_Integer) 1;
#line 1321 "recompilation.version.m"
  }
#line 67 "recompilation.version.m"
}

#line 1340 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_2(
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1340 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2)
#line 1340 "recompilation.version.m"
{
#line 1340 "recompilation.version.m"
  {
#line 1340 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_3;
#line 1340 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1340 "recompilation.version.m"
    MR_Word recompilation__version__conv1_LambdaHeadVar__3_30;

#line 1340 "recompilation.version.m"
    {
#line 1340 "recompilation.version.m"
      recompilation__version__conv1_LambdaHeadVar__3_30 = recompilation__version__IntroducedFrom__func__parse_version_numbers__1340__1_2_f_0(((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 1340 "recompilation.version.m"
    recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv1_LambdaHeadVar__3_30));
#line 1340 "recompilation.version.m"
    return recompilation__version__wrapper_arg_3;
#line 1340 "recompilation.version.m"
  }
#line 1340 "recompilation.version.m"
}

#line 1334 "recompilation.version.m"
static void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0_1(
#line 1334 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1334 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1334 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1334 "recompilation.version.m"
{
#line 1334 "recompilation.version.m"
  {
#line 1334 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1334 "recompilation.version.m"
    MR_Word recompilation__version__conv0_Result_4;

#line 1334 "recompilation.version.m"
    {
#line 1334 "recompilation.version.m"
      recompilation__version__parse_item_type_version_numbers_2_p_0(((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv0_Result_4);
    }
#line 1334 "recompilation.version.m"
    *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_Result_4));
#line 1334 "recompilation.version.m"
  }
#line 1334 "recompilation.version.m"
}

#line 62 "recompilation.version.m"
void MR_CALL 
recompilation__version__parse_version_numbers_2_p_0(
#line 62 "recompilation.version.m"
  MR_Word recompilation__version__VersionNumbersTerm_3,
#line 62 "recompilation.version.m"
  MR_Word * recompilation__version__Result_4)
#line 62 "recompilation.version.m"
{
#line 1325 "recompilation.version.m"
  {
#line 1325 "recompilation.version.m"
    MR_bool recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__VersionNumbersTerm_3)) == (MR_mktag((MR_Integer) 0)));
#line 1325 "recompilation.version.m"
    MR_Word recompilation__version__TypeCtorInfo_36_36;
#line 1325 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumbersTermList_7;
#line 1325 "recompilation.version.m"
    MR_Word recompilation__version__Result0_8;
#line 1326 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumbersTermList0_5;
#line 1327 "recompilation.version.m"
    MR_Word recompilation__version__V_20_20;
#line 1327 "recompilation.version.m"
    MR_String recompilation__version__V_21_21;
#line 1327 "recompilation.version.m"
    MR_Word recompilation__version__V_6_6;

#line 1327 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1327 "recompilation.version.m"
      {
#line 1327 "recompilation.version.m"
        recompilation__version__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__VersionNumbersTerm_3, (MR_Integer) 0)));
#line 1327 "recompilation.version.m"
        recompilation__version__VersionNumbersTermList0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__VersionNumbersTerm_3, (MR_Integer) 1)));
#line 1327 "recompilation.version.m"
        recompilation__version__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__VersionNumbersTerm_3, (MR_Integer) 2)));
#line 1327 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1327 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 1327 "recompilation.version.m"
          {
#line 1327 "recompilation.version.m"
            recompilation__version__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__version__V_20_20, (MR_Integer) 0)));
#line 1327 "recompilation.version.m"
            recompilation__version__succeeded = (strcmp(recompilation__version__V_21_21, (MR_String) "{}") == 0);
#line 1327 "recompilation.version.m"
          }
#line 1327 "recompilation.version.m"
      }
#line 1326 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1330 "recompilation.version.m"
      recompilation__version__VersionNumbersTermList_7 = recompilation__version__VersionNumbersTermList0_5;
#line 1326 "recompilation.version.m"
    else
#line 1332 "recompilation.version.m"
      {
#line 1332 "recompilation.version.m"
        {
#line 1332 "recompilation.version.m"
          recompilation__version__VersionNumbersTermList_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__VersionNumbersTermList_7, 0) = ((MR_Box) (recompilation__version__VersionNumbersTerm_3));
#line 1332 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), recompilation__version__VersionNumbersTermList_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "recompilation.version.m"
        }
#line 1332 "recompilation.version.m"
      }
#line 14037 "recompilation.version.c"
    recompilation__version__TypeCtorInfo_36_36 = (MR_Word) &recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0;
#line 1334 "recompilation.version.m"
    {
#line 1334 "recompilation.version.m"
      parse_tree__prog_io_util__map_parser_3_p_0(recompilation__version__TypeCtorInfo_36_36, (MR_Word) &recompilation__version_scalar_common_1[13], recompilation__version__VersionNumbersTermList_7, &recompilation__version__Result0_8);
    }
#line 1353 "recompilation.version.m"
    if (((MR_tag((MR_Word) recompilation__version__Result0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1355 "recompilation.version.m"
      *recompilation__version__Result_4 = (MR_Word) recompilation__version__Result0_8;
#line 1353 "recompilation.version.m"
    else
#line 1337 "recompilation.version.m"
      {
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__TypeCtorInfo_39_39 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__List_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__Result0_8, (MR_Integer) 0)));
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__VersionNumbers0_10;
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__VersionNumbers_11;
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__V_24_24;
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__V_25_25;
#line 1337 "recompilation.version.m"
        MR_Word recompilation__version__V_26_26;
#line 1340 "recompilation.version.m"
        MR_Box recompilation__version__conv2_VersionNumbers_11;

#line 1338 "recompilation.version.m"
        {
#line 1338 "recompilation.version.m"
          recompilation__version__V_25_25 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], recompilation__version__TypeCtorInfo_39_39);
        }
#line 1338 "recompilation.version.m"
        {
#line 1338 "recompilation.version.m"
          recompilation__version__V_24_24 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[1], ((MR_Box) (recompilation__version__V_25_25)));
        }
#line 1339 "recompilation.version.m"
        {
#line 1339 "recompilation.version.m"
          recompilation__version__V_26_26 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__version__TypeCtorInfo_39_39);
        }
#line 1338 "recompilation.version.m"
        {
#line 1338 "recompilation.version.m"
          recompilation__version__VersionNumbers0_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__VersionNumbers0_10, 0) = ((MR_Box) (recompilation__version__V_24_24));
#line 1338 "recompilation.version.m"
          MR_hl_field(MR_mktag(0), recompilation__version__VersionNumbers0_10, 1) = ((MR_Box) (recompilation__version__V_26_26));
#line 1338 "recompilation.version.m"
        }
#line 1340 "recompilation.version.m"
        {
#line 1340 "recompilation.version.m"
          recompilation__version__conv2_VersionNumbers_11 = mercury__list__foldl_3_f_0(recompilation__version__TypeCtorInfo_36_36, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, (MR_Word) &recompilation__version_scalar_common_1[14], recompilation__version__List_9, ((MR_Box) (recompilation__version__VersionNumbers0_10)));
        }
#line 1340 "recompilation.version.m"
        recompilation__version__VersionNumbers_11 = ((MR_Word) recompilation__version__conv2_VersionNumbers_11);
#line 1352 "recompilation.version.m"
        {
#line 1352 "recompilation.version.m"
          MR_Word base;
#line 1352 "recompilation.version.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "recompilation.version.m"
          *recompilation__version__Result_4 = base;
#line 1352 "recompilation.version.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__version__VersionNumbers_11));
#line 1352 "recompilation.version.m"
        }
#line 1337 "recompilation.version.m"
      }
#line 1325 "recompilation.version.m"
  }
#line 62 "recompilation.version.m"
}

#line 1278 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_3(
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1278 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1278 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3)
#line 1278 "recompilation.version.m"
{
#line 1278 "recompilation.version.m"
  {
#line 1278 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;

#line 1278 "recompilation.version.m"
    {
#line 1278 "recompilation.version.m"
      recompilation__version__write_symname_arity_version_number_3_p_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1278 "recompilation.version.m"
  }
#line 1278 "recompilation.version.m"
}

#line 1265 "recompilation.version.m"
static void MR_CALL 
recompilation__version__write_version_numbers_3_p_0_2(
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1265 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 1265 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3)
#line 1265 "recompilation.version.m"
{
#line 1265 "recompilation.version.m"
  {
#line 1265 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;

#line 1265 "recompilation.version.m"
    {
#line 1265 "recompilation.version.m"
      recompilation__version__write_item_type_and_versions_3_p_0(((MR_Word) recompilation__version__wrapper_arg_1));
    }
#line 1265 "recompilation.version.m"
  }
#line 1265 "recompilation.version.m"
}

#line 1256 "recompilation.version.m"
static MR_bool MR_CALL 
recompilation__version__write_version_numbers_3_p_0_1(
#line 1256 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 1256 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 1256 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_2)
#line 1256 "recompilation.version.m"
{
#line 1256 "recompilation.version.m"
  {
#line 1256 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1256 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 1256 "recompilation.version.m"
    MR_Word recompilation__version__conv0_LambdaHeadVar__2_18;

#line 1256 "recompilation.version.m"
    {
#line 1256 "recompilation.version.m"
      recompilation__version__succeeded = recompilation__version__IntroducedFrom__func__write_version_numbers__1256__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) recompilation__version__wrapper_arg_1), &recompilation__version__conv0_LambdaHeadVar__2_18);
    }
#line 1256 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1256 "recompilation.version.m"
      {
#line 1256 "recompilation.version.m"
        *recompilation__version__wrapper_arg_2 = ((MR_Box) (recompilation__version__conv0_LambdaHeadVar__2_18));
#line 1256 "recompilation.version.m"
        recompilation__version__succeeded = MR_TRUE;
#line 1256 "recompilation.version.m"
      }
#line 1256 "recompilation.version.m"
    return recompilation__version__succeeded;
#line 1256 "recompilation.version.m"
  }
#line 1256 "recompilation.version.m"
}

#line 35 "recompilation.version.m"
void MR_CALL 
recompilation__version__write_version_numbers_3_p_0(
#line 35 "recompilation.version.m"
  MR_Word recompilation__version__AllVersionNumbers_4)
#line 35 "recompilation.version.m"
{
#line 1253 "recompilation.version.m"
  {
#line 1253 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 1253 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_52_52 = (MR_Word) &recompilation__version_scalar_common_1[4];
#line 1253 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumbers_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__AllVersionNumbers_4, (MR_Integer) 0)));
#line 1253 "recompilation.version.m"
    MR_Word recompilation__version__InstanceVersionNumbers_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__AllVersionNumbers_4, (MR_Integer) 1)));
#line 1253 "recompilation.version.m"
    MR_Word recompilation__version__VersionNumbersList_8;
#line 1253 "recompilation.version.m"
    MR_Word recompilation__version__V_16_16;

#line 1256 "recompilation.version.m"
    {
#line 1256 "recompilation.version.m"
      recompilation__version__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 0) = ((MR_Box) (&recompilation__version_scalar_common_5[1]));
#line 1256 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 1) = ((MR_Box) (recompilation__version__write_version_numbers_3_p_0_1));
#line 1256 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1256 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__V_16_16, 3) = ((MR_Box) (recompilation__version__VersionNumbers_6));
#line 1256 "recompilation.version.m"
    }
#line 1256 "recompilation.version.m"
    {
#line 1256 "recompilation.version.m"
      recompilation__version__VersionNumbersList_8 = mercury__list__filter_map_2_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__version__TypeInfo_52_52, recompilation__version__V_16_16, (MR_Word) MR_mkword(MR_mktag(1), &recompilation__version_scalar_common_2[13]));
    }
#line 1263 "recompilation.version.m"
    {
#line 1263 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n\t");
    }
#line 1264 "recompilation.version.m"
    {
#line 1264 "recompilation.version.m"
      mercury__io__write_list_5_p_0(recompilation__version__TypeInfo_52_52, recompilation__version__VersionNumbersList_8, (MR_String) ",\n\t", (MR_Word) &recompilation__version_scalar_common_1[11]);
    }
#line 1266 "recompilation.version.m"
    {
#line 1266 "recompilation.version.m"
      recompilation__version__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__InstanceVersionNumbers_7);
    }
#line 1266 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 1266 "recompilation.version.m"
      {
#line 1266 "recompilation.version.m"
      }
#line 1266 "recompilation.version.m"
    else
#line 1274 "recompilation.version.m"
      {
#line 1274 "recompilation.version.m"
        MR_Word recompilation__version__InstanceAL_13;

#line 1271 "recompilation.version.m"
        if ((recompilation__version__VersionNumbersList_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1270 "recompilation.version.m"
          {
#line 1270 "recompilation.version.m"
          }
#line 1271 "recompilation.version.m"
        else
#line 1272 "recompilation.version.m"
          {
#line 1273 "recompilation.version.m"
            {
#line 1273 "recompilation.version.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
#line 1272 "recompilation.version.m"
          }
#line 1275 "recompilation.version.m"
        {
#line 1275 "recompilation.version.m"
          mercury__io__write_string_3_p_0((MR_String) "instance(");
        }
#line 1276 "recompilation.version.m"
        {
#line 1276 "recompilation.version.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__version__InstanceVersionNumbers_7, &recompilation__version__InstanceAL_13);
        }
#line 1277 "recompilation.version.m"
        {
#line 1277 "recompilation.version.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__version_scalar_common_1[5], recompilation__version__InstanceAL_13, (MR_String) ",\n\n\t", (MR_Word) &recompilation__version_scalar_common_1[12]);
        }
#line 1279 "recompilation.version.m"
        {
#line 1279 "recompilation.version.m"
          mercury__io__write_string_3_p_0((MR_String) ")\n\t");
        }
#line 1274 "recompilation.version.m"
      }
#line 1281 "recompilation.version.m"
    {
#line 1281 "recompilation.version.m"
      mercury__io__write_string_3_p_0((MR_String) "\n}");
    }
#line 1253 "recompilation.version.m"
  }
#line 35 "recompilation.version.m"
}

#line 141 "recompilation.version.m"
static MR_Box MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_2(
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 141 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2)
#line 141 "recompilation.version.m"
{
#line 141 "recompilation.version.m"
  {
#line 141 "recompilation.version.m"
    MR_Box recompilation__version__wrapper_arg_3;
#line 141 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 141 "recompilation.version.m"
    MR_Word recompilation__version__conv2_HeadVar__6_6;

#line 141 "recompilation.version.m"
    {
#line 141 "recompilation.version.m"
      recompilation__version__conv2_HeadVar__6_6 = recompilation__version__compute_item_version_numbers_2_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__closure, (MR_Integer) 5))), ((MR_Word) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2));
    }
#line 141 "recompilation.version.m"
    recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv2_HeadVar__6_6));
#line 141 "recompilation.version.m"
    return recompilation__version__wrapper_arg_3;
#line 141 "recompilation.version.m"
  }
#line 141 "recompilation.version.m"
}

#line 224 "recompilation.version.m"
static void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0_1(
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__closure_arg,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_1,
#line 224 "recompilation.version.m"
  MR_Box recompilation__version__wrapper_arg_2,
#line 224 "recompilation.version.m"
  MR_Box * recompilation__version__wrapper_arg_3)
#line 224 "recompilation.version.m"
{
#line 224 "recompilation.version.m"
  {
#line 224 "recompilation.version.m"
    MR_Box recompilation__version__closure = recompilation__version__closure_arg;
#line 224 "recompilation.version.m"
    MR_Word recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16;

#line 224 "recompilation.version.m"
    {
#line 224 "recompilation.version.m"
      recompilation__version__distribute_pragma_items_3_p_0(((MR_Tuple) recompilation__version__wrapper_arg_1), ((MR_Word) recompilation__version__wrapper_arg_2), &recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16);
    }
#line 224 "recompilation.version.m"
    *recompilation__version__wrapper_arg_3 = ((MR_Box) (recompilation__version__conv0_STATE_VARIABLE_GatheredItems_16));
#line 224 "recompilation.version.m"
  }
#line 224 "recompilation.version.m"
}

#line 32 "recompilation.version.m"
void MR_CALL 
recompilation__version__compute_version_numbers_4_p_0(
#line 32 "recompilation.version.m"
  MR_Word recompilation__version__SourceFileTime_5,
#line 32 "recompilation.version.m"
  MR_Word recompilation__version__CurParseTreeInt_6,
#line 32 "recompilation.version.m"
  MR_Word recompilation__version__MaybeOldParseTreeInt_7,
#line 32 "recompilation.version.m"
  MR_Word * recompilation__version__NewVersionNumbers_8)
#line 32 "recompilation.version.m"
{
#line 97 "recompilation.version.m"
  {
#line 97 "recompilation.version.m"
    MR_bool recompilation__version__succeeded;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_24_66 = (MR_Word) &recompilation__version_scalar_common_2[0];
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__TypeInfo_25_67;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__CurIntItems_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 8)));
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__CurImpItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 9)));
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__CurGatheredItems_19;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__CurInstanceItems_20;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__OldItemVersionNumbers_33;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__OldInstanceVersionNumbers_34;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__OldGatheredItems_35;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__OldInstanceItems_36;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__NewItemVersionNumbers_37;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__NewInstanceVersionNumbers_38;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__GatheredItems0_51;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__Info0_52;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__Info1_53;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__Info_54;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__GatheredItems1_55;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__PragmaItemsCord_56;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__PragmaItems_57;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__V_58_58;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__V_59_59;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__V_60_60;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__Func_78;
#line 97 "recompilation.version.m"
    MR_Word recompilation__version__V_79_79;
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 0)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___IntFileKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 1)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___ModuleNameContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 2)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___CurMaybeVersionNumbers_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 3)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___CurIntIncls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 4)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___CurImpIncls_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 5)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___CurIntAvails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 6)));
#line 98 "recompilation.version.m"
    MR_Word recompilation__version___CurImpAvails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__CurParseTreeInt_6, (MR_Integer) 7)));
#line 224 "recompilation.version.m"
    MR_Box recompilation__version__conv1_CurGatheredItems_19;
#line 103 "recompilation.version.m"
    MR_Word recompilation__version__OldIntItems_30;
#line 103 "recompilation.version.m"
    MR_Word recompilation__version__OldImpItems_31;
#line 103 "recompilation.version.m"
    MR_Word recompilation__version__OldVersionNumbers_32;
#line 104 "recompilation.version.m"
    MR_Word recompilation__version__OldParseTreeInt_21;
#line 104 "recompilation.version.m"
    MR_Word recompilation__version__OldMaybeVersionNumbers_25;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version__V_22_22;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version__V_23_23;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version__V_24_24;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version___OldIntIncls_26;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version___OldImpIncls_27;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version___OldIntAvails_28;
#line 105 "recompilation.version.m"
    MR_Word recompilation__version___OldImpAvails_29;

#line 213 "recompilation.version.m"
    {
#line 213 "recompilation.version.m"
      recompilation__version__V_58_58 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], recompilation__version__TypeInfo_24_66);
    }
#line 213 "recompilation.version.m"
    {
#line 213 "recompilation.version.m"
      recompilation__version__GatheredItems0_51 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (recompilation__version__V_58_58)));
    }
#line 14520 "recompilation.version.c"
    recompilation__version__TypeInfo_25_67 = (MR_Word) &recompilation__version_scalar_common_3[0];
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__V_59_59 = mercury__cord__init_0_f_0(recompilation__version__TypeInfo_25_67);
    }
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__V_60_60 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__version__TypeInfo_24_66);
    }
#line 214 "recompilation.version.m"
    {
#line 214 "recompilation.version.m"
      recompilation__version__Info0_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_52, 0) = ((MR_Box) (recompilation__version__GatheredItems0_51));
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_52, 1) = ((MR_Box) (recompilation__version__V_59_59));
#line 214 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Info0_52, 2) = ((MR_Box) (recompilation__version__V_60_60));
#line 214 "recompilation.version.m"
    }
#line 215 "recompilation.version.m"
    {
#line 215 "recompilation.version.m"
      recompilation__version__gather_in_section_4_p_0((MR_Integer) 0, recompilation__version__CurIntItems_17, recompilation__version__Info0_52, &recompilation__version__Info1_53);
    }
#line 216 "recompilation.version.m"
    {
#line 216 "recompilation.version.m"
      recompilation__version__gather_in_section_4_p_0((MR_Integer) 1, recompilation__version__CurImpItems_18, recompilation__version__Info1_53, &recompilation__version__Info_54);
    }
#line 222 "recompilation.version.m"
    recompilation__version__GatheredItems1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_54, (MR_Integer) 0)));
#line 222 "recompilation.version.m"
    recompilation__version__PragmaItemsCord_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_54, (MR_Integer) 1)));
#line 222 "recompilation.version.m"
    recompilation__version__CurInstanceItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__Info_54, (MR_Integer) 2)));
#line 223 "recompilation.version.m"
    {
#line 223 "recompilation.version.m"
      recompilation__version__PragmaItems_57 = mercury__cord__list_1_f_0(recompilation__version__TypeInfo_25_67, recompilation__version__PragmaItemsCord_56);
    }
#line 224 "recompilation.version.m"
    {
#line 224 "recompilation.version.m"
      mercury__list__foldl_4_p_0(recompilation__version__TypeInfo_25_67, (MR_Word) &recompilation__version_scalar_common_4[0], (MR_Word) &recompilation__version_scalar_common_1[10], recompilation__version__PragmaItems_57, ((MR_Box) (recompilation__version__GatheredItems1_55)), &recompilation__version__conv1_CurGatheredItems_19);
    }
#line 224 "recompilation.version.m"
    recompilation__version__CurGatheredItems_19 = ((MR_Word) recompilation__version__conv1_CurGatheredItems_19);
#line 104 "recompilation.version.m"
    recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__MaybeOldParseTreeInt_7)) == (MR_mktag((MR_Integer) 1)));
#line 104 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 104 "recompilation.version.m"
      {
#line 104 "recompilation.version.m"
        recompilation__version__OldParseTreeInt_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__MaybeOldParseTreeInt_7, (MR_Integer) 0)));
#line 105 "recompilation.version.m"
        recompilation__version__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 0)));
#line 105 "recompilation.version.m"
        recompilation__version__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 1)));
#line 105 "recompilation.version.m"
        recompilation__version__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 2)));
#line 105 "recompilation.version.m"
        recompilation__version__OldMaybeVersionNumbers_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 3)));
#line 105 "recompilation.version.m"
        recompilation__version___OldIntIncls_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 4)));
#line 105 "recompilation.version.m"
        recompilation__version___OldImpIncls_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 5)));
#line 105 "recompilation.version.m"
        recompilation__version___OldIntAvails_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 6)));
#line 105 "recompilation.version.m"
        recompilation__version___OldImpAvails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 7)));
#line 105 "recompilation.version.m"
        recompilation__version__OldIntItems_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 8)));
#line 105 "recompilation.version.m"
        recompilation__version__OldImpItems_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldParseTreeInt_21, (MR_Integer) 9)));
#line 108 "recompilation.version.m"
        recompilation__version__succeeded = ((MR_tag((MR_Word) recompilation__version__OldMaybeVersionNumbers_25)) == (MR_mktag((MR_Integer) 1)));
#line 108 "recompilation.version.m"
        if (recompilation__version__succeeded)
#line 108 "recompilation.version.m"
          recompilation__version__OldVersionNumbers_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__version__OldMaybeVersionNumbers_25, (MR_Integer) 0)));
#line 104 "recompilation.version.m"
      }
#line 103 "recompilation.version.m"
    if (recompilation__version__succeeded)
#line 111 "recompilation.version.m"
      {
#line 110 "recompilation.version.m"
        recompilation__version__OldItemVersionNumbers_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldVersionNumbers_32, (MR_Integer) 0)));
#line 110 "recompilation.version.m"
        recompilation__version__OldInstanceVersionNumbers_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__version__OldVersionNumbers_32, (MR_Integer) 1)));
#line 112 "recompilation.version.m"
        {
#line 112 "recompilation.version.m"
          recompilation__version__gather_items_4_p_0(recompilation__version__OldIntItems_30, recompilation__version__OldImpItems_31, &recompilation__version__OldGatheredItems_35, &recompilation__version__OldInstanceItems_36);
        }
#line 111 "recompilation.version.m"
      }
#line 103 "recompilation.version.m"
    else
#line 120 "recompilation.version.m"
      {
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_42_42 = (MR_Word) &recompilation__version_scalar_common_1[0];
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__TypeCtorInfo_43_43 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__TypeInfo_45_45;
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__TypeCtorInfo_46_46;
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__V_39_39;
#line 120 "recompilation.version.m"
        MR_Word recompilation__version__V_40_40;

#line 120 "recompilation.version.m"
        {
#line 120 "recompilation.version.m"
          recompilation__version__V_39_39 = mercury__map__init_0_f_0(recompilation__version__TypeInfo_42_42, recompilation__version__TypeCtorInfo_43_43);
        }
#line 120 "recompilation.version.m"
        {
#line 120 "recompilation.version.m"
          recompilation__version__OldItemVersionNumbers_33 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[1], ((MR_Box) (recompilation__version__V_39_39)));
        }
#line 14650 "recompilation.version.c"
        recompilation__version__TypeInfo_45_45 = (MR_Word) &recompilation__version_scalar_common_2[0];
#line 121 "recompilation.version.m"
        {
#line 121 "recompilation.version.m"
          recompilation__version__V_40_40 = mercury__map__init_0_f_0(recompilation__version__TypeInfo_42_42, recompilation__version__TypeInfo_45_45);
        }
#line 121 "recompilation.version.m"
        {
#line 121 "recompilation.version.m"
          recompilation__version__OldGatheredItems_35 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__version_scalar_common_1[3], ((MR_Box) (recompilation__version__V_40_40)));
        }
#line 14662 "recompilation.version.c"
        recompilation__version__TypeCtorInfo_46_46 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0;
#line 122 "recompilation.version.m"
        {
#line 122 "recompilation.version.m"
          mercury__map__init_1_p_0(recompilation__version__TypeCtorInfo_46_46, recompilation__version__TypeInfo_45_45, &recompilation__version__OldInstanceItems_36);
        }
#line 123 "recompilation.version.m"
        {
#line 123 "recompilation.version.m"
          mercury__map__init_1_p_0(recompilation__version__TypeCtorInfo_46_46, recompilation__version__TypeCtorInfo_43_43, &recompilation__version__OldInstanceVersionNumbers_34);
        }
#line 120 "recompilation.version.m"
      }
#line 141 "recompilation.version.m"
    {
#line 141 "recompilation.version.m"
      recompilation__version__Func_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 0) = ((MR_Box) (&recompilation__version_scalar_common_6[0]));
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 1) = ((MR_Box) (recompilation__version__compute_version_numbers_4_p_0_2));
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 3) = ((MR_Box) (recompilation__version__SourceFileTime_5));
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 4) = ((MR_Box) (recompilation__version__OldGatheredItems_35));
#line 141 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), recompilation__version__Func_78, 5) = ((MR_Box) (recompilation__version__OldItemVersionNumbers_33));
#line 141 "recompilation.version.m"
    }
#line 143 "recompilation.version.m"
    {
#line 143 "recompilation.version.m"
      recompilation__version__V_79_79 = mercury__map__init_0_f_0((MR_Word) &recompilation__version_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
    }
#line 143 "recompilation.version.m"
    {
#line 143 "recompilation.version.m"
      recompilation__version__NewItemVersionNumbers_37 = recompilation__map_ids_3_f_0((MR_Word) &recompilation__version_scalar_common_1[3], (MR_Word) &recompilation__version_scalar_common_1[1], recompilation__version__Func_78, recompilation__version__CurGatheredItems_19, ((MR_Box) (recompilation__version__V_79_79)));
    }
#line 128 "recompilation.version.m"
    {
#line 128 "recompilation.version.m"
      recompilation__version__compute_instance_version_numbers_5_p_0(recompilation__version__SourceFileTime_5, recompilation__version__CurInstanceItems_20, recompilation__version__OldInstanceItems_36, recompilation__version__OldInstanceVersionNumbers_34, &recompilation__version__NewInstanceVersionNumbers_38);
    }
#line 131 "recompilation.version.m"
    {
#line 131 "recompilation.version.m"
      MR_Word base;
#line 131 "recompilation.version.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "recompilation.version.m"
      *recompilation__version__NewVersionNumbers_8 = base;
#line 131 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__version__NewItemVersionNumbers_37));
#line 131 "recompilation.version.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__version__NewInstanceVersionNumbers_38));
#line 131 "recompilation.version.m"
    }
#line 97 "recompilation.version.m"
  }
#line 32 "recompilation.version.m"
}

void mercury__recompilation__version__init(void)
{
}

void mercury__recompilation__version__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_info_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_item_map_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_gathered_items_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_instance_item_map_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_item_version_numbers_result_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_maybe_changed_0);
	MR_register_type_ctor_info(&recompilation__version__recompilation__version__type_ctor_info_maybe_pred_or_func_id_0);
}

void mercury__recompilation__version__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module recompilation.version. */
