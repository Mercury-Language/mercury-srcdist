/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module parse_tree.write_module_interface_files. */
/* :- implementation. */

/*
INIT mercury__parse_tree__write_module_interface_files__init
ENDINIT
*/

#include "parse_tree.write_module_interface_files.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 581 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s {
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37;
#line 581 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__HeadVar__3_41;
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont;
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont_env_ptr;
#line 581 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded;
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeCtorInfo_97_97;
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeInfo_100_100;
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defns_17;
#line 583 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv1_HeadVar__3_41;
#line 583 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv0_Defns_17;
#line 584 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__commit_0;
#line 584 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defn_18;
#line 584 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__V_42_42;
#line 585 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv2_V_42_42;
#line 581 "write_module_interface_files.m"
};

#line 1544 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s {
#line 1544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15;
#line 1546 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded;
#line 1546 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19;
#line 1549 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0;
#line 1549 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17;
#line 1549 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23;
#line 1549 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23;
#line 1559 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1;
#line 1559 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20;
#line 1559 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24;
#line 1559 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24;
#line 1544 "write_module_interface_files.m"
};

#line 1477 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s {
#line 1480 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded;
#line 1480 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8;
#line 1480 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28;
#line 1549 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0;
#line 1549 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26;
#line 1549 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32;
#line 1549 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32;
#line 1559 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1;
#line 1559 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29;
#line 1559 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33;
#line 1559 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33;
#line 1477 "write_module_interface_files.m"
};

#line 841 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s {
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5;
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6;
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7;
#line 845 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded;
#line 850 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13;
#line 860 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47;
#line 860 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53;
#line 861 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36;
#line 841 "write_module_interface_files.m"
};

#line 581 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s {
#line 581 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1;
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont;
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr;
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41;
#line 581 "write_module_interface_files.m"
};


#line 289 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 292 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 295 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 298 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 301 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 304 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

#line 307 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 310 "parse_tree.write_module_interface_files.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_module_interface_files____vpti_pred_3__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 313 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 316 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 319 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 322 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0;

#line 325 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1;

#line 328 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2;

#line 331 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_cur_pos_0[3];

#line 334 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_cur_pos_0[3];

#line 337 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_cur_pos_0[3];

#line 340 "parse_tree.write_module_interface_files.c"
static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_specifier_in_defn_0_0[2];

#line 343 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0;

#line 346 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0[1];

#line 349 "parse_tree.write_module_interface_files.c"
static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_specifier_in_defn_0[1];

#line 352 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_specifier_in_defn_0[1];

#line 355 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_specifier_in_defn_0[1];

#line 358 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 361 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 364 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0_10001(
#line 367 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 369 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 372 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0_10001(
#line 375 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 377 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 379 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 382 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0_10001(
#line 385 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 387 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 390 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0_10001(
#line 393 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 395 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 397 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 400 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 403 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 405 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 408 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 411 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 413 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 415 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 418 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 421 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 423 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 426 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 429 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 431 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 433 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_48_55_95_95_49_95_95_91_50_93_95_48_5_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61);

#line 1394 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_11,
#line 1394 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__Suffix_12,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceItems0_14);

#line 1567 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1567__1_1_p_0(
#line 1567 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_21);

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_5_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_58,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61);

#line 601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__601__1_3_p_0(
#line 601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_52,
#line 601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_53,
#line 601 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_54);

#line 593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__593__1_3_p_0(
#line 593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_45,
#line 593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_46,
#line 593 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_47);

#line 583 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_2(
#line 583 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_3(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 585 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_5(
#line 585 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_4(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_6(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_1(
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0(
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37,
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40,
#line 581 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_41,
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr);

#line 1141 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1141 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1141 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1139 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1139 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1139 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 634 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(
#line 634 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 634 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1634 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0(
#line 1634 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1634 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0(
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1986 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 1986 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 1986 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 1986 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6);

#line 1981 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1981 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1862 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1862 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3);

#line 1849 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1849 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1730 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1730 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1722 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_1_p_0(
#line 1722 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 1711 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_5(
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1711 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1707 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_4(
#line 1707 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1707 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1705 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_3(
#line 1705 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1705 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1703 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_2(
#line 1703 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1703 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1702 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_1(
#line 1702 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1702 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0(
#line 1695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1695 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1639 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(
#line 1639 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1639 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CurPos_2,
#line 1639 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1615 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1606 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(
#line 1606 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1603 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1593 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 1565 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_10(
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1555 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_5(
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1544 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15,
#line 1544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16);

#line 1486 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3,
#line 1486 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4);

#line 1603 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_11(
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1565 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_10(
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1555 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_5(
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_3(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_8(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1477 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0(
#line 1477 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_4,
#line 1477 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Kind_5,
#line 1477 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6);

#line 1384 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1384 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1384 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5);

#line 1338 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1338 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1338 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5);

#line 1331 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(
#line 1331 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1331 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1331 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1331 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);

#line 1311 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 1309 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1309 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1309 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1305 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1305 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6,
#line 1305 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_5(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_4(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_3(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_2(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_1(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1264 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(
#line 1264 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1264 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1264 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24);

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0_1(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1243 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(
#line 1243 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1243 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1243 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1221 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0_1(
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1221 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1214 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(
#line 1214 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1214 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24,
#line 1214 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25);

#line 1211 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0_1(
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1211 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1207 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(
#line 1207 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplItems_3,
#line 1207 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_4);

#line 1153 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0(
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10);

#line 1144 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_5_p_0(
#line 1144 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_6,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplItems_8,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntTypesMap_9,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplTypesMap_10);

#line 1130 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1130 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1130 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1130 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1121 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1121 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1121 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1121 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1116 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1116 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1086 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1086 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1086 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1086 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14);

#line 1069 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1069 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1069 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1069 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1064 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1064 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1057 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1055 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1055 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1044 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27);

#line 1038 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1030 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20);

#line 987 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);

#line 979 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 976 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 968 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12);

#line 933 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 931 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 931 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 931 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 927 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 927 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 927 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 927 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 899 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 897 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 897 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 897 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 893 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 893 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 893 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 893 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 861 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 861 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 841 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7);

#line 775 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 775 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 775 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 775 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16);

#line 750 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 750 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 750 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 750 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 733 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_module_spec_4_p_0(
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_1,
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NewModuleSpec_2,
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 733 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4);

#line 681 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11);

#line 673 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3);

#line 665 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(
#line 665 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3);

#line 661 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 661 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 656 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 656 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 656 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 655 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 655 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 655 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 654 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 654 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 654 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_6(
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 607 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_5(
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 601 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_4(
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 593 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2(
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3(
#line 581 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 581 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr);

#line 574 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1(
#line 574 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 574 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 574 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2);

#line 547 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(
#line 547 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 547 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 528 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(
#line 528 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 528 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 528 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 468 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(
#line 468 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 468 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 468 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 455 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(
#line 455 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 455 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 245 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_8_p_0(
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Section_49,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53);

#line 232 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_4,
#line 232 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_5,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_6,
#line 232 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_7);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[30][3];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[15][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[10][6];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[2][4];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[2][11];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[30][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[5])),
    ((MR_Box) (parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[8])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_short_interface_3_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_short_interface_3_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__get_short_interface_3_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__order_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__do_order_items_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__do_order_items_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__do_order_items_2_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_module_interface_files__do_order_items_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[9])),
    ((MR_Box) (parse_tree__write_module_interface_files__do_order_items_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "not written.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\' ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\' not written.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "clause"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[13])))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__write_module_interface_files____vpti_pred_3__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_6[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[4]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_7[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_specifier_in_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_9[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 2247 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2256 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2264 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2273 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2281 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2290 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2298 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2306 "parse_tree.write_module_interface_files.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_module_interface_files____vpti_pred_3__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2317 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2325 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2333 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2342 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0 = {
  (MR_String) "in_interface",
  (MR_Integer) 0
};

#line 2348 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1 = {
  (MR_String) "in_implementation",
  (MR_Integer) 1
};

#line 2354 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2 = {
  (MR_String) "other",
  (MR_Integer) 2
};

#line 2360 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_cur_pos_0[3] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2
};

#line 2367 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_cur_pos_0[3] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2
};

#line 2374 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_cur_pos_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2381 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_cur_pos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____cur_pos_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____cur_pos_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "cur_pos",
  {
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_cur_pos_0
  },
  {
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_cur_pos_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_cur_pos_0
};

#line 2402 "parse_tree.write_module_interface_files.c"
static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_specifier_in_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2408 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0 = {
  (MR_String) "module_specifier_in_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_specifier_in_defn_0_0,
  NULL,
  NULL,
  NULL
};

#line 2423 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0
};

#line 2428 "parse_tree.write_module_interface_files.c"
static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_specifier_in_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0
  }
};

#line 2437 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_specifier_in_defn_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0
};

#line 2442 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_specifier_in_defn_0[1] = {
  (MR_Integer) 0
};

#line 2447 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_specifier_in_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "module_specifier_in_defn",
  {
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_specifier_in_defn_0
  },
  {
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_specifier_in_defn_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_specifier_in_defn_0
};

#line 2468 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2477 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2498 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2507 "parse_tree.write_module_interface_files.c"
const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "type_defn_pair",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2528 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0_10001(
#line 2531 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2533 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2535 "parse_tree.write_module_interface_files.c"
{
#line 2537 "parse_tree.write_module_interface_files.c"
  {
#line 2539 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2542 "parse_tree.write_module_interface_files.c"
    {
#line 2544 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____cur_pos_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2547 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2549 "parse_tree.write_module_interface_files.c"
  }
#line 2551 "parse_tree.write_module_interface_files.c"
}

#line 2554 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0_10001(
#line 2557 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2559 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2561 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2563 "parse_tree.write_module_interface_files.c"
{
#line 2565 "parse_tree.write_module_interface_files.c"
  {
#line 2567 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2570 "parse_tree.write_module_interface_files.c"
    {
#line 2572 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____cur_pos_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2575 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2577 "parse_tree.write_module_interface_files.c"
  }
#line 2579 "parse_tree.write_module_interface_files.c"
}

#line 2582 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0_10001(
#line 2585 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2587 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2589 "parse_tree.write_module_interface_files.c"
{
#line 2591 "parse_tree.write_module_interface_files.c"
  {
#line 2593 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2596 "parse_tree.write_module_interface_files.c"
    {
#line 2598 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2601 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2603 "parse_tree.write_module_interface_files.c"
  }
#line 2605 "parse_tree.write_module_interface_files.c"
}

#line 2608 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0_10001(
#line 2611 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2613 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2615 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2617 "parse_tree.write_module_interface_files.c"
{
#line 2619 "parse_tree.write_module_interface_files.c"
  {
#line 2621 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2624 "parse_tree.write_module_interface_files.c"
    {
#line 2626 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2629 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2631 "parse_tree.write_module_interface_files.c"
  }
#line 2633 "parse_tree.write_module_interface_files.c"
}

#line 2636 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 2639 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2641 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2643 "parse_tree.write_module_interface_files.c"
{
#line 2645 "parse_tree.write_module_interface_files.c"
  {
#line 2647 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2650 "parse_tree.write_module_interface_files.c"
    {
#line 2652 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2655 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2657 "parse_tree.write_module_interface_files.c"
  }
#line 2659 "parse_tree.write_module_interface_files.c"
}

#line 2662 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 2665 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2667 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2669 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2671 "parse_tree.write_module_interface_files.c"
{
#line 2673 "parse_tree.write_module_interface_files.c"
  {
#line 2675 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2678 "parse_tree.write_module_interface_files.c"
    {
#line 2680 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2683 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2685 "parse_tree.write_module_interface_files.c"
  }
#line 2687 "parse_tree.write_module_interface_files.c"
}

#line 2690 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 2693 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2695 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2697 "parse_tree.write_module_interface_files.c"
{
#line 2699 "parse_tree.write_module_interface_files.c"
  {
#line 2701 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2704 "parse_tree.write_module_interface_files.c"
    {
#line 2706 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2709 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2711 "parse_tree.write_module_interface_files.c"
  }
#line 2713 "parse_tree.write_module_interface_files.c"
}

#line 2716 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 2719 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2721 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2723 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2725 "parse_tree.write_module_interface_files.c"
{
#line 2727 "parse_tree.write_module_interface_files.c"
  {
#line 2729 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2732 "parse_tree.write_module_interface_files.c"
    {
#line 2734 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2737 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2739 "parse_tree.write_module_interface_files.c"
  }
#line 2741 "parse_tree.write_module_interface_files.c"
}

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_48_55_95_95_49_95_95_91_50_93_95_48_5_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61)
#line 607 "write_module_interface_files.m"
{
#line 607 "write_module_interface_files.m"
  {
#line 607 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 610 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_HeadVar__5_61;

#line 610 "write_module_interface_files.m"
    {
#line 610 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], parse_tree__write_module_interface_files__AddProjectedItem_24, parse_tree__write_module_interface_files__HeadVar__3_59, ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__4_60)), &parse_tree__write_module_interface_files__conv0_HeadVar__5_61);
    }
#line 610 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__HeadVar__5_61 = ((MR_Word) parse_tree__write_module_interface_files__conv0_HeadVar__5_61);
#line 607 "write_module_interface_files.m"
  }
#line 607 "write_module_interface_files.m"
}

#line 1394 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_11,
#line 1394 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__Suffix_12,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 1394 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceItems0_14)
#line 1394 "write_module_interface_files.m"
{
#line 1399 "write_module_interface_files.m"
  {
#line 1399 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1399 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpSuffix_16;
#line 1399 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__OutputFileName_17;
#line 1399 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpOutputFileName_18;
#line 1399 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NoLineNumGlobals_19;
#line 1399 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__GenerateVersionNumbers_20;
#line 1399 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__DisableVersionNumbers_21;
#line 1399 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems_37;

#line 1401 "write_module_interface_files.m"
    {
#line 1401 "write_module_interface_files.m"
      mercury__string__append_3_p_2(parse_tree__write_module_interface_files__Suffix_12, (MR_String) ".tmp", &parse_tree__write_module_interface_files__TmpSuffix_16);
    }
#line 1402 "write_module_interface_files.m"
    {
#line 1402 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__Suffix_12, (MR_Integer) 0, &parse_tree__write_module_interface_files__OutputFileName_17);
    }
#line 1404 "write_module_interface_files.m"
    {
#line 1404 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__TmpSuffix_16, (MR_Integer) 1, &parse_tree__write_module_interface_files__TmpOutputFileName_18);
    }
#line 1407 "write_module_interface_files.m"
    {
#line 1407 "write_module_interface_files.m"
      libs__globals__set_option_4_p_0((MR_Integer) 136, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_9, &parse_tree__write_module_interface_files__NoLineNumGlobals_19);
    }
#line 1408 "write_module_interface_files.m"
    {
#line 1408 "write_module_interface_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, (MR_Integer) 115, &parse_tree__write_module_interface_files__GenerateVersionNumbers_20);
    }
#line 1410 "write_module_interface_files.m"
    {
#line 1410 "write_module_interface_files.m"
      libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&parse_tree__write_module_interface_files__DisableVersionNumbers_21);
    }
#line 1412 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__GenerateVersionNumbers_20 == (MR_Integer) 1);
#line 1412 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1413 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__DisableVersionNumbers_21 == (MR_Integer) 0);
#line 1455 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1450 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__MaybeTimestamp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1451 "write_module_interface_files.m"
        {
#line 1452 "write_module_interface_files.m"
          {
#line 1452 "write_module_interface_files.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/8", (MR_String) "with \140--smart-recompilation\', timestamp not read");
#line 1452 "write_module_interface_files.m"
            return;
          }
#line 1451 "write_module_interface_files.m"
        }
#line 1450 "write_module_interface_files.m"
      else
#line 1417 "write_module_interface_files.m"
        {
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Timestamp_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeTimestamp_13, (MR_Integer) 0)));
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__OldItems_23;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__OldErrors_24;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__MaybeOldItems_27;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumbers_28;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumberItem_30;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 1417 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 1420 "write_module_interface_files.m"
          MR_String parse_tree__write_module_interface_files___OldIntFileName_25;
#line 1420 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files___OldTimestamp_26;
#line 1446 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstItem_31;
#line 1446 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__InterfaceItems1_32;
#line 1438 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstItemModuleDefn_33;
#line 1438 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstModuleDefn_34;
#line 1440 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1440 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_36_36;

#line 1420 "write_module_interface_files.m"
          {
#line 1420 "write_module_interface_files.m"
            parse_tree__read_modules__read_module_ignore_errors_12_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__Suffix_12, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 1, &parse_tree__write_module_interface_files__OldItems_23, &parse_tree__write_module_interface_files__OldErrors_24, &parse_tree__write_module_interface_files___OldIntFileName_25, &parse_tree__write_module_interface_files___OldTimestamp_26);
          }
#line 1424 "write_module_interface_files.m"
          {
#line 1424 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__OldErrors_24);
          }
#line 1426 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1425 "write_module_interface_files.m"
            {
#line 1425 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__MaybeOldItems_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeOldItems_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__OldItems_23));
#line 1425 "write_module_interface_files.m"
            }
#line 1426 "write_module_interface_files.m"
          else
#line 1429 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__MaybeOldItems_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1431 "write_module_interface_files.m"
          {
#line 1431 "write_module_interface_files.m"
            recompilation__version__compute_version_numbers_4_p_0(parse_tree__write_module_interface_files__Timestamp_22, parse_tree__write_module_interface_files__InterfaceItems0_14, parse_tree__write_module_interface_files__MaybeOldItems_27, &parse_tree__write_module_interface_files__VersionNumbers_28);
          }
#line 1434 "write_module_interface_files.m"
          {
#line 1434 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1434 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_11));
#line 1434 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 2) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumbers_28));
#line 1434 "write_module_interface_files.m"
          }
#line 1435 "write_module_interface_files.m"
          {
#line 1435 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_58_58 = mercury__term__context_init_0_f_0();
          }
#line 1433 "write_module_interface_files.m"
          {
#line 1433 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1433 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_57_57));
#line 1433 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_58_58));
#line 1433 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 2) = ((MR_Box) ((MR_Integer) -1));
#line 1433 "write_module_interface_files.m"
          }
#line 1436 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__VersionNumberItem_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29);
#line 1438 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__InterfaceItems0_14)) == (MR_mktag((MR_Integer) 1)));
#line 1438 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1438 "write_module_interface_files.m"
            {
#line 1438 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__FirstItem_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems0_14, (MR_Integer) 0)));
#line 1438 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__InterfaceItems1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems0_14, (MR_Integer) 1)));
#line 1439 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__FirstItem_31)) == (MR_mktag((MR_Integer) 2)));
#line 1439 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 1439 "write_module_interface_files.m"
                {
#line 1439 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__FirstItemModuleDefn_33 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__FirstItem_31), (MR_Integer) 2);
#line 1440 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__FirstModuleDefn_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 0)));
#line 1440 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 1)));
#line 1440 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 2)));
#line 1442 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__FirstModuleDefn_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "write_module_interface_files.m"
                }
#line 1438 "write_module_interface_files.m"
            }
#line 1446 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1444 "write_module_interface_files.m"
            {
#line 1444 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_60_60;

#line 1445 "write_module_interface_files.m"
              {
#line 1445 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumberItem_30));
#line 1445 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceItems1_32));
#line 1445 "write_module_interface_files.m"
              }
#line 1444 "write_module_interface_files.m"
              {
#line 1444 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__InterfaceItems_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FirstItem_31));
#line 1444 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 1444 "write_module_interface_files.m"
              }
#line 1444 "write_module_interface_files.m"
            }
#line 1446 "write_module_interface_files.m"
          else
#line 1447 "write_module_interface_files.m"
            {
#line 1447 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_61_61;
#line 1447 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_63_63;

#line 1447 "write_module_interface_files.m"
              {
#line 1447 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_61_61 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1448 "write_module_interface_files.m"
              {
#line 1448 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumberItem_30));
#line 1448 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceItems0_14));
#line 1448 "write_module_interface_files.m"
              }
#line 1447 "write_module_interface_files.m"
              {
#line 1447 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__InterfaceItems_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_61_61));
#line 1447 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_63_63));
#line 1447 "write_module_interface_files.m"
              }
#line 1447 "write_module_interface_files.m"
            }
#line 1417 "write_module_interface_files.m"
        }
#line 1455 "write_module_interface_files.m"
    else
#line 1456 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__InterfaceItems_37 = parse_tree__write_module_interface_files__InterfaceItems0_14;
#line 1458 "write_module_interface_files.m"
    {
#line 1458 "write_module_interface_files.m"
      parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__TmpOutputFileName_18, parse_tree__write_module_interface_files__InterfaceItems_37);
    }
#line 1461 "write_module_interface_files.m"
    {
#line 1461 "write_module_interface_files.m"
      parse_tree__module_cmds__update_interface_4_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__OutputFileName_17);
#line 1461 "write_module_interface_files.m"
      return;
    }
#line 1399 "write_module_interface_files.m"
  }
#line 1394 "write_module_interface_files.m"
}

#line 91 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_10)
#line 91 "write_module_interface_files.m"
{
#line 434 "write_module_interface_files.m"
  {
#line 434 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems0_13;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems1_14;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems_15;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems0_16;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems_17;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_46;
#line 434 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_54;
#line 442 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 442 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 442 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 442 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 445 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumWarnings_22;
#line 445 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumErrors_23;

#line 435 "write_module_interface_files.m"
    {
#line 435 "write_module_interface_files.m"
      parse_tree__modules__get_interface_4_p_0(parse_tree__write_module_interface_files__ModuleName_9, (MR_Integer) 0, parse_tree__write_module_interface_files__Items0_10, &parse_tree__write_module_interface_files__InterfaceItems0_13);
    }
#line 525 "write_module_interface_files.m"
    {
#line 525 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(parse_tree__write_module_interface_files__InterfaceItems0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_46);
    }
#line 526 "write_module_interface_files.m"
    {
#line 526 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_46, &parse_tree__write_module_interface_files__InterfaceItems1_14);
    }
#line 1335 "write_module_interface_files.m"
    {
#line 1335 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(parse_tree__write_module_interface_files__InterfaceItems1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28);
    }
#line 1336 "write_module_interface_files.m"
    {
#line 1336 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_54, &parse_tree__write_module_interface_files__InterfaceItems_15);
    }
#line 441 "write_module_interface_files.m"
    {
#line 441 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0(parse_tree__write_module_interface_files__InterfaceItems_15, (MR_Integer) 1, &parse_tree__write_module_interface_files__ShortInterfaceItems0_16);
    }
#line 443 "write_module_interface_files.m"
    {
#line 443 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_30_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
    }
#line 442 "write_module_interface_files.m"
    {
#line 442 "write_module_interface_files.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(parse_tree__write_module_interface_files__ShortInterfaceItems0_16, &parse_tree__write_module_interface_files__ShortInterfaceItems_17, parse_tree__write_module_interface_files__V_30_30, &parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "", &parse_tree__write_module_interface_files__V_19_19, &parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33);
    }
#line 445 "write_module_interface_files.m"
    {
#line 445 "write_module_interface_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33, parse_tree__write_module_interface_files__Globals_7, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_22, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_23);
    }
#line 448 "write_module_interface_files.m"
    {
#line 448 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_String) ".int3", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__write_module_interface_files__ShortInterfaceItems_17);
    }
#line 450 "write_module_interface_files.m"
    {
#line 450 "write_module_interface_files.m"
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_String) ".date3");
#line 450 "write_module_interface_files.m"
      return;
    }
#line 434 "write_module_interface_files.m"
  }
#line 91 "write_module_interface_files.m"
}

#line 1567 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1567__1_1_p_0(
#line 1567 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_21)
#line 1567 "write_module_interface_files.m"
{
#line 1567 "write_module_interface_files.m"
  {
#line 1567 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__1_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1568 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ThisItemPragma_9;
#line 1568 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_11;
#line 1569 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1569 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 1569 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_13_13;
#line 1570 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_14_14;

#line 1568 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1568 "write_module_interface_files.m"
      {
#line 1568 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ThisItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__1_21, (MR_Integer) 1)));
#line 1569 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 0)));
#line 1569 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 1)));
#line 1569 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 2)));
#line 1569 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 3)));
#line 1570 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1570 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1570 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 1)));
#line 1568 "write_module_interface_files.m"
      }
#line 1567 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1567 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1567 "write_module_interface_files.m"
  }
#line 1567 "write_module_interface_files.m"
}

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_5_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_58,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61)
#line 607 "write_module_interface_files.m"
{
#line 607 "write_module_interface_files.m"
  {
#line 607 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 607 "write_module_interface_files.m"
    {
#line 607 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_48_55_95_95_49_95_95_91_50_93_95_48_5_p_0(parse_tree__write_module_interface_files__AddProjectedItem_24, parse_tree__write_module_interface_files__HeadVar__3_59, parse_tree__write_module_interface_files__HeadVar__4_60, parse_tree__write_module_interface_files__HeadVar__5_61);
#line 607 "write_module_interface_files.m"
      return;
    }
#line 607 "write_module_interface_files.m"
  }
#line 607 "write_module_interface_files.m"
}

#line 601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__601__1_3_p_0(
#line 601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_52,
#line 601 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_53,
#line 601 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_54)
#line 601 "write_module_interface_files.m"
{
#line 601 "write_module_interface_files.m"
  {
#line 601 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_27;
#line 601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_52, (MR_Integer) 1)));
#line 602 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_52, (MR_Integer) 0)));

#line 604 "write_module_interface_files.m"
    {
#line 604 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 604 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_83));
#line 604 "write_module_interface_files.m"
    }
#line 605 "write_module_interface_files.m"
    {
#line 605 "write_module_interface_files.m"
      MR_Word base;
#line 605 "write_module_interface_files.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__3_54 = base;
#line 605 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 605 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_53));
#line 605 "write_module_interface_files.m"
    }
#line 601 "write_module_interface_files.m"
  }
#line 601 "write_module_interface_files.m"
}

#line 593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__593__1_3_p_0(
#line 593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_45,
#line 593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_46,
#line 593 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_47)
#line 593 "write_module_interface_files.m"
{
#line 593 "write_module_interface_files.m"
  {
#line 593 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 596 "write_module_interface_files.m"
    {
#line 596 "write_module_interface_files.m"
      mercury__multi_map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__1_45)), parse_tree__write_module_interface_files__HeadVar__2_46, parse_tree__write_module_interface_files__HeadVar__3_47);
#line 596 "write_module_interface_files.m"
      return;
    }
#line 593 "write_module_interface_files.m"
  }
#line 593 "write_module_interface_files.m"
}

#line 583 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_2(
#line 583 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 583 "write_module_interface_files.m"
{
#line 583 "write_module_interface_files.m"
  {
#line 583 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 583 "write_module_interface_files.m"
    *((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__HeadVar__3_41) = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv1_HeadVar__3_41);
#line 583 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defns_17 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv0_Defns_17);
#line 583 "write_module_interface_files.m"
    {
#line 583 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 583 "write_module_interface_files.m"
      return;
    }
#line 583 "write_module_interface_files.m"
  }
#line 583 "write_module_interface_files.m"
}

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_3(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 584 "write_module_interface_files.m"
{
#line 584 "write_module_interface_files.m"
  {
#line 584 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 584 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__commit_0, 1);
#line 584 "write_module_interface_files.m"
  }
#line 584 "write_module_interface_files.m"
}

#line 585 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_5(
#line 585 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 585 "write_module_interface_files.m"
{
#line 585 "write_module_interface_files.m"
  {
#line 585 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 585 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__V_42_42 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv2_V_42_42);
#line 585 "write_module_interface_files.m"
    {
#line 585 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_4(parse_tree__write_module_interface_files__env_ptr);
#line 585 "write_module_interface_files.m"
      return;
    }
#line 585 "write_module_interface_files.m"
  }
#line 585 "write_module_interface_files.m"
}

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_4(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 584 "write_module_interface_files.m"
{
#line 584 "write_module_interface_files.m"
  {
#line 584 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 584 "write_module_interface_files.m"
    {
#line 585 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 587 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Details_20;
#line 588 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files__V_21_21;

#line 585 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__V_42_42, (MR_Integer) 0)));
#line 585 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__V_42_42, (MR_Integer) 1)));
#line 587 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defn_18)) == (MR_mktag((MR_Integer) 2)));
#line 587 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded)
#line 587 "write_module_interface_files.m"
        {
#line 587 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Details_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defn_18, (MR_Integer) 0)));
#line 587 "write_module_interface_files.m"
          {
#line 588 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Details_20)) == (MR_mktag((MR_Integer) 1)));
#line 588 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded)
#line 588 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_20, (MR_Integer) 0)));
#line 588 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded);
#line 587 "write_module_interface_files.m"
          }
#line 587 "write_module_interface_files.m"
        }
#line 586 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded);
#line 586 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded)
#line 586 "write_module_interface_files.m"
        {
#line 586 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_3(parse_tree__write_module_interface_files__env_ptr);
#line 586 "write_module_interface_files.m"
          return;
        }
#line 584 "write_module_interface_files.m"
    }
#line 584 "write_module_interface_files.m"
  }
#line 584 "write_module_interface_files.m"
}

#line 584 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_6(
#line 584 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 584 "write_module_interface_files.m"
{
#line 584 "write_module_interface_files.m"
  {
#line 584 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 584 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__commit_0) == 0)
#line 584 "write_module_interface_files.m"
      {
#line 584 "write_module_interface_files.m"
        {
#line 585 "write_module_interface_files.m"
          {
#line 585 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv2_V_42_42, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__Defns_17, parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_5, parse_tree__write_module_interface_files__env_ptr);
          }
#line 584 "write_module_interface_files.m"
        }
#line 584 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = MR_FALSE;
#line 584 "write_module_interface_files.m"
      }
#line 584 "write_module_interface_files.m"
    else
#line 584 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = MR_TRUE;
#line 584 "write_module_interface_files.m"
  }
#line 584 "write_module_interface_files.m"
}

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_1(
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 581 "write_module_interface_files.m"
{
#line 581 "write_module_interface_files.m"
  {
#line 581 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 584 "write_module_interface_files.m"
    {
#line 584 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_6(parse_tree__write_module_interface_files__env_ptr);
    }
#line 584 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded);
#line 581 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded)
#line 581 "write_module_interface_files.m"
      {
#line 3553 "parse_tree.write_module_interface_files.c"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 590 "write_module_interface_files.m"
        {
#line 590 "write_module_interface_files.m"
          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded = mercury__multi_map__contains_2_p_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeCtorInfo_97_97, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeInfo_100_100, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37, ((MR_Box) (*((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__HeadVar__3_41))));
        }
#line 590 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__succeeded)
#line 590 "write_module_interface_files.m"
          {
#line 590 "write_module_interface_files.m"
            ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont)((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont_env_ptr);
#line 590 "write_module_interface_files.m"
            return;
          }
#line 581 "write_module_interface_files.m"
      }
#line 581 "write_module_interface_files.m"
  }
#line 581 "write_module_interface_files.m"
}

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0(
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37,
#line 581 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40,
#line 581 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_41,
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr)
#line 581 "write_module_interface_files.m"
{
#line 581 "write_module_interface_files.m"
  {
#line 581 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37;
#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__HeadVar__3_41 = parse_tree__write_module_interface_files__HeadVar__3_41;
#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont = parse_tree__write_module_interface_files__cont;
#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__cont_env_ptr = parse_tree__write_module_interface_files__cont_env_ptr;
#line 3604 "parse_tree.write_module_interface_files.c"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 583 "write_module_interface_files.m"
    {
#line 583 "write_module_interface_files.m"
      mercury__map__member_3_p_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__TypeCtorInfo_97_97, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv1_HeadVar__3_41, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_env_0__conv0_Defns_17, parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0_2, &parse_tree__write_module_interface_files__env);
    }
#line 581 "write_module_interface_files.m"
  }
#line 581 "write_module_interface_files.m"
}

#line 1141 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1141 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1141 "write_module_interface_files.m"
{
#line 1141 "write_module_interface_files.m"
  {
#line 1141 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1141 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1141 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1141 "write_module_interface_files.m"
    {
#line 1141 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1141 "write_module_interface_files.m"
      return;
    }
#line 1141 "write_module_interface_files.m"
  }
#line 1141 "write_module_interface_files.m"
}

#line 1141 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1141 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1141 "write_module_interface_files.m"
{
#line 1141 "write_module_interface_files.m"
  {
#line 1141 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1141 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1141 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1141 "write_module_interface_files.m"
    {
#line 1141 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1141 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1141 "write_module_interface_files.m"
  }
#line 1141 "write_module_interface_files.m"
}

#line 1139 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1139 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1139 "write_module_interface_files.m"
{
#line 1139 "write_module_interface_files.m"
  {
#line 1139 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1139 "write_module_interface_files.m"
    {
#line 1139 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1139 "write_module_interface_files.m"
      return;
    }
#line 1139 "write_module_interface_files.m"
  }
#line 1139 "write_module_interface_files.m"
}

#line 1139 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1139 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1139 "write_module_interface_files.m"
{
#line 1139 "write_module_interface_files.m"
  {
#line 1139 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1139 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1139 "write_module_interface_files.m"
    {
#line 1139 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1139 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1139 "write_module_interface_files.m"
  }
#line 1139 "write_module_interface_files.m"
}

#line 634 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(
#line 634 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 634 "write_module_interface_files.m"
{
#line 634 "write_module_interface_files.m"
  {
#line 634 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastX_9 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastY_10 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 634 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CastX_9 == parse_tree__write_module_interface_files__CastY_10);
#line 634 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 3764 "parse_tree.write_module_interface_files.c"
      *parse_tree__write_module_interface_files__HeadVar__1_1 = (MR_Integer) 0;
#line 634 "write_module_interface_files.m"
    else
#line 634 "write_module_interface_files.m"
      {
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 634 "write_module_interface_files.m"
        {
#line 634 "write_module_interface_files.m"
          mercury__term____Compare____context_0_0(&parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__V_4_4, parse_tree__write_module_interface_files__V_6_6);
        }
#line 3786 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_8_8 == (MR_Integer) 0);
#line 634 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 634 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 634 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__V_8_8;
#line 634 "write_module_interface_files.m"
        else
#line 634 "write_module_interface_files.m"
          {
#line 634 "write_module_interface_files.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__V_5_5, parse_tree__write_module_interface_files__V_7_7);
#line 634 "write_module_interface_files.m"
            return;
          }
#line 634 "write_module_interface_files.m"
      }
#line 634 "write_module_interface_files.m"
  }
#line 634 "write_module_interface_files.m"
}

#line 634 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 634 "write_module_interface_files.m"
{
#line 634 "write_module_interface_files.m"
  {
#line 634 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastX_7 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__1_1;
#line 634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastY_8 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;

#line 634 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CastX_7 == parse_tree__write_module_interface_files__CastY_8);
#line 634 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 634 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 634 "write_module_interface_files.m"
    else
#line 634 "write_module_interface_files.m"
      {
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 634 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));

#line 3847 "parse_tree.write_module_interface_files.c"
        {
#line 3849 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__succeeded = mercury__term____Unify____context_0_0(parse_tree__write_module_interface_files__V_3_3, parse_tree__write_module_interface_files__V_5_5);
        }
#line 634 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 3854 "parse_tree.write_module_interface_files.c"
          {
#line 3856 "parse_tree.write_module_interface_files.c"
            return parse_tree__write_module_interface_files__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_module_interface_files__V_4_4, parse_tree__write_module_interface_files__V_6_6);
          }
#line 634 "write_module_interface_files.m"
      }
#line 634 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 634 "write_module_interface_files.m"
  }
#line 634 "write_module_interface_files.m"
}

#line 1634 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0(
#line 1634 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1634 "write_module_interface_files.m"
{
#line 1634 "write_module_interface_files.m"
  {
#line 1634 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1634 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1634 "write_module_interface_files.m"
    {
#line 1634 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1634 "write_module_interface_files.m"
      return;
    }
#line 1634 "write_module_interface_files.m"
  }
#line 1634 "write_module_interface_files.m"
}

#line 1634 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0(
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1634 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1634 "write_module_interface_files.m"
{
#line 3909 "parse_tree.write_module_interface_files.c"
  {
#line 3911 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3914 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3916 "parse_tree.write_module_interface_files.c"
  }
#line 1634 "write_module_interface_files.m"
}

#line 1986 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 1986 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 1986 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 1986 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6)
#line 1986 "write_module_interface_files.m"
{
#line 1994 "write_module_interface_files.m"
  {
#line 1994 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1994 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameA_7;
#line 1994 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameB_8;

#line 1974 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1977 "write_module_interface_files.m"
      {
#line 1977 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModeDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 0)));
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 1)));
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1978 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_37_37;
#line 1978 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_38_38;

#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 2)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 3)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 4)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 5)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 6)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 7)));
#line 1978 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 8)));
#line 1977 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1977 "write_module_interface_files.m"
      }
#line 1974 "write_module_interface_files.m"
    else
#line 1974 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1974 "write_module_interface_files.m"
        {
#line 1974 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPredDecl_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 0)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 1)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 2)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 3)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 4)));
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1975 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 1975 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_30_30;

#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 5)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 6)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 7)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 8)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 9)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 10)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 11)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 12)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 13)));
#line 1975 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 14)));
#line 1974 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1974 "write_module_interface_files.m"
        }
#line 1974 "write_module_interface_files.m"
      else
#line 1974 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1990 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1974 "write_module_interface_files.m"
      {
#line 1974 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1977 "write_module_interface_files.m"
          {
#line 1977 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModeDecl_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 0)));
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 1)));
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_60_60;
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_61_61;
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_62_62;
#line 1978 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_63_63;
#line 1978 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_64_64;

#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 2)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 3)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 4)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 5)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 6)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 7)));
#line 1978 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_42, (MR_Integer) 8)));
#line 1977 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1977 "write_module_interface_files.m"
          }
#line 1974 "write_module_interface_files.m"
        else
#line 1974 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1974 "write_module_interface_files.m"
            {
#line 1974 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPredDecl_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 0)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 1)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 2)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 3)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 4)));
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_48_48;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_53_53;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 1975 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 1975 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_56_56;

#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 5)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 6)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 7)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 8)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 9)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 10)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 11)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 12)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 13)));
#line 1975 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_41, (MR_Integer) 14)));
#line 1974 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1974 "write_module_interface_files.m"
            }
#line 1974 "write_module_interface_files.m"
          else
#line 1974 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1974 "write_module_interface_files.m"
      }
#line 1994 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1993 "write_module_interface_files.m"
      {
#line 1993 "write_module_interface_files.m"
        mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__Result_6, parse_tree__write_module_interface_files__SymNameA_7, parse_tree__write_module_interface_files__SymNameB_8);
#line 1993 "write_module_interface_files.m"
        return;
      }
#line 1994 "write_module_interface_files.m"
    else
#line 1995 "write_module_interface_files.m"
      {
#line 1995 "write_module_interface_files.m"
        {
#line 1995 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.compare_by_symname\'/3", (MR_String) "symname not found");
#line 1995 "write_module_interface_files.m"
          return;
        }
#line 1995 "write_module_interface_files.m"
      }
#line 1994 "write_module_interface_files.m"
  }
#line 1986 "write_module_interface_files.m"
}

#line 1981 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1981 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1981 "write_module_interface_files.m"
{
#line 1974 "write_module_interface_files.m"
  {
#line 1974 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1974 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1977 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1974 "write_module_interface_files.m"
    else
#line 1974 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1974 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1974 "write_module_interface_files.m"
      else
#line 1974 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1974 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1974 "write_module_interface_files.m"
  }
#line 1981 "write_module_interface_files.m"
}

#line 1862 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1862 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3)
#line 1862 "write_module_interface_files.m"
{
#line 1866 "write_module_interface_files.m"
  {
#line 1866 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1866 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Chunkable_4;

#line 1866 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 2))))
#line 1866 "write_module_interface_files.m"
      {
#line 1866 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_3), (MR_Integer) 2);
#line 1866 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 1867 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 1867 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));

#line 1904 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1905 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1904 "write_module_interface_files.m"
        else
#line 1918 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1866 "write_module_interface_files.m"
      }
#line 1866 "write_module_interface_files.m"
    else
#line 1866 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1870 "write_module_interface_files.m"
        {
#line 1870 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 1)));
#line 1870 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 1)));
#line 1871 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 0)));
#line 1871 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 2)));
#line 1871 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 3)));

#line 1950 "write_module_interface_files.m"
          if (((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 20))))))
#line 1962 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1950 "write_module_interface_files.m"
          else
#line 1951 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1870 "write_module_interface_files.m"
        }
#line 1866 "write_module_interface_files.m"
      else
#line 1866 "write_module_interface_files.m"
        if (((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) == (MR_Integer) 12))))))
#line 1893 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1866 "write_module_interface_files.m"
        else
#line 1887 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1866 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Chunkable_4;
#line 1866 "write_module_interface_files.m"
  }
#line 1862 "write_module_interface_files.m"
}

#line 1849 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1849 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1849 "write_module_interface_files.m"
{
#line 1866 "write_module_interface_files.m"
  {
#line 1866 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1866 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2))))
#line 1866 "write_module_interface_files.m"
      {
#line 1866 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1866 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1867 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1867 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1904 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1905 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1904 "write_module_interface_files.m"
        else
#line 1904 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1866 "write_module_interface_files.m"
      }
#line 1866 "write_module_interface_files.m"
    else
#line 1866 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1870 "write_module_interface_files.m"
        {
#line 1870 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1870 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1871 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1871 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1871 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1950 "write_module_interface_files.m"
          if (((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 23)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 24)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 21)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 1951 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1950 "write_module_interface_files.m"
          else
#line 1950 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1870 "write_module_interface_files.m"
        }
#line 1866 "write_module_interface_files.m"
      else
#line 1866 "write_module_interface_files.m"
        if (((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 0)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1887 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1866 "write_module_interface_files.m"
        else
#line 1866 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1866 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1866 "write_module_interface_files.m"
  }
#line 1849 "write_module_interface_files.m"
}

#line 1730 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1730 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1730 "write_module_interface_files.m"
{
#line 1750 "write_module_interface_files.m"
  {
#line 1750 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1750 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2))))
#line 1750 "write_module_interface_files.m"
      {
#line 1750 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1750 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1751 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1751 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1788 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1789 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1788 "write_module_interface_files.m"
        else
#line 1788 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1750 "write_module_interface_files.m"
      }
#line 1750 "write_module_interface_files.m"
    else
#line 1750 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1754 "write_module_interface_files.m"
        {
#line 1754 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1754 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1755 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1755 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1755 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1835 "write_module_interface_files.m"
          if (((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 23)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 8)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 24)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 21)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_12, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 1836 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1835 "write_module_interface_files.m"
          else
#line 1835 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1754 "write_module_interface_files.m"
        }
#line 1750 "write_module_interface_files.m"
      else
#line 1750 "write_module_interface_files.m"
        if (((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1765 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1750 "write_module_interface_files.m"
        else
#line 1750 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1750 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1750 "write_module_interface_files.m"
  }
#line 1730 "write_module_interface_files.m"
}

#line 1722 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_1_p_0(
#line 1722 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 1722 "write_module_interface_files.m"
{
#line 1724 "write_module_interface_files.m"
  {
#line 1724 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
#line 1724 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_2;
#line 1724 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_3;
#line 1725 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_4_4;
#line 1725 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_5_5;

#line 1724 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1724 "write_module_interface_files.m"
      {
#line 1724 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_2 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_1), (MR_Integer) 2);
#line 1725 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 0)));
#line 1725 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 1)));
#line 1725 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 2)));
#line 1727 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1726 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1727 "write_module_interface_files.m"
        else
#line 1727 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1727 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1727 "write_module_interface_files.m"
          else
#line 1727 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1724 "write_module_interface_files.m"
      }
#line 1724 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1724 "write_module_interface_files.m"
  }
#line 1722 "write_module_interface_files.m"
}

#line 1711 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_5(
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1711 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1711 "write_module_interface_files.m"
{
#line 1711 "write_module_interface_files.m"
  {
#line 1711 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1711 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Result_6;

#line 1711 "write_module_interface_files.m"
    {
#line 1711 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__compare_by_symname_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_Result_6);
    }
#line 1711 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Result_6));
#line 1711 "write_module_interface_files.m"
  }
#line 1711 "write_module_interface_files.m"
}

#line 1707 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_4(
#line 1707 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1707 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1707 "write_module_interface_files.m"
{
#line 1707 "write_module_interface_files.m"
  {
#line 1707 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1707 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1707 "write_module_interface_files.m"
    {
#line 1707 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__symname_orderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1707 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1707 "write_module_interface_files.m"
  }
#line 1707 "write_module_interface_files.m"
}

#line 1705 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_3(
#line 1705 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1705 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1705 "write_module_interface_files.m"
{
#line 1705 "write_module_interface_files.m"
  {
#line 1705 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1705 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1705 "write_module_interface_files.m"
    {
#line 1705 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__import_or_use_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1705 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1705 "write_module_interface_files.m"
  }
#line 1705 "write_module_interface_files.m"
}

#line 1703 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_2(
#line 1703 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1703 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1703 "write_module_interface_files.m"
{
#line 1703 "write_module_interface_files.m"
  {
#line 1703 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1703 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1703 "write_module_interface_files.m"
    {
#line 1703 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_reorderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1703 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1703 "write_module_interface_files.m"
  }
#line 1703 "write_module_interface_files.m"
}

#line 1702 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_1(
#line 1702 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1702 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1702 "write_module_interface_files.m"
{
#line 1702 "write_module_interface_files.m"
  {
#line 1702 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1702 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1702 "write_module_interface_files.m"
    {
#line 1702 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_chunkable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1702 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1702 "write_module_interface_files.m"
  }
#line 1702 "write_module_interface_files.m"
}

#line 1695 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0(
#line 1695 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1695 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1695 "write_module_interface_files.m"
{
#line 1697 "write_module_interface_files.m"
  {
#line 1697 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1697 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1697 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1697 "write_module_interface_files.m"
    else
#line 1698 "write_module_interface_files.m"
      {
#line 1698 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1698 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1698 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Chunkable0_6;

#line 1699 "write_module_interface_files.m"
        {
#line 1699 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable0_6 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__Item0_3);
        }
#line 1716 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Chunkable0_6 == (MR_Integer) 0))
#line 1717 "write_module_interface_files.m"
          {
#line 1717 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedItemsTail_17;

#line 1718 "write_module_interface_files.m"
            {
#line 1718 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__OrderedItemsTail_17);
            }
#line 1719 "write_module_interface_files.m"
            {
#line 1719 "write_module_interface_files.m"
              MR_Word base;
#line 1719 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1719 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1719 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1719 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__OrderedItemsTail_17));
#line 1719 "write_module_interface_files.m"
            }
#line 1717 "write_module_interface_files.m"
          }
#line 1716 "write_module_interface_files.m"
        else
#line 1701 "write_module_interface_files.m"
          {
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__FrontItems_7;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__RemainItems_8;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ReorderableItems_9;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonReorderableItems_10;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImportReorderableItems_11;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonImportReorderableItems_12;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SymNameItems_13;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonSymNameItems_14;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedSymNameItems_15;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedRemainItems_16;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1701 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 1702 "write_module_interface_files.m"
            {
#line 1702 "write_module_interface_files.m"
              mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[25], parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__FrontItems_7, &parse_tree__write_module_interface_files__RemainItems_8);
            }
#line 1703 "write_module_interface_files.m"
            {
#line 1703 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1703 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__FrontItems_7));
#line 1703 "write_module_interface_files.m"
            }
#line 1703 "write_module_interface_files.m"
            {
#line 1703 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[26], parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__NonReorderableItems_10);
            }
#line 1705 "write_module_interface_files.m"
            {
#line 1705 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[27], parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__ImportReorderableItems_11, &parse_tree__write_module_interface_files__NonImportReorderableItems_12);
            }
#line 1707 "write_module_interface_files.m"
            {
#line 1707 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[28], parse_tree__write_module_interface_files__NonReorderableItems_10, &parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__NonSymNameItems_14);
            }
#line 1711 "write_module_interface_files.m"
            {
#line 1711 "write_module_interface_files.m"
              mercury__list__sort_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[29], parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__OrderedSymNameItems_15);
            }
#line 1712 "write_module_interface_files.m"
            {
#line 1712 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__RemainItems_8, &parse_tree__write_module_interface_files__OrderedRemainItems_16);
            }
#line 1713 "write_module_interface_files.m"
            {
#line 1713 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_24_24 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__ImportReorderableItems_11);
            }
#line 1714 "write_module_interface_files.m"
            {
#line 1714 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_26_26 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonImportReorderableItems_12);
            }
#line 1715 "write_module_interface_files.m"
            {
#line 1715 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_28_28 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonSymNameItems_14, parse_tree__write_module_interface_files__OrderedRemainItems_16);
            }
#line 1715 "write_module_interface_files.m"
            {
#line 1715 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__OrderedSymNameItems_15, parse_tree__write_module_interface_files__V_28_28);
            }
#line 1714 "write_module_interface_files.m"
            {
#line 1714 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_26_26, parse_tree__write_module_interface_files__V_27_27);
            }
#line 1713 "write_module_interface_files.m"
            {
#line 1713 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_24_24, parse_tree__write_module_interface_files__V_25_25);
            }
#line 1701 "write_module_interface_files.m"
          }
#line 1698 "write_module_interface_files.m"
      }
#line 1697 "write_module_interface_files.m"
  }
#line 1695 "write_module_interface_files.m"
}

#line 1639 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(
#line 1639 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1639 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CurPos_2,
#line 1639 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1639 "write_module_interface_files.m"
{
#line 1642 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1642 "write_module_interface_files.m"
    {
#line 1642 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1642 "write_module_interface_files.m"
      {
#line 1642 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1642 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1642 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1642 "write_module_interface_files.m"
        else
#line 1642 "write_module_interface_files.m"
          {
#line 1642 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1642 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));

#line 1642 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1643 "write_module_interface_files.m"
              {
#line 1643 "write_module_interface_files.m"
                {
#line 1643 "write_module_interface_files.m"
                  MR_Word base;
#line 1643 "write_module_interface_files.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 1643 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_49_49));
#line 1643 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "write_module_interface_files.m"
                }
#line 1643 "write_module_interface_files.m"
              }
#line 1642 "write_module_interface_files.m"
            else
#line 1644 "write_module_interface_files.m"
              {
#line 1644 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Item2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_48_48, (MR_Integer) 0)));
#line 1644 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Items0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_48_48, (MR_Integer) 1)));
#line 1646 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_14;
#line 1646 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn2_17;
#line 1646 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1646 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1648 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_15_15;
#line 1648 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_16_16;
#line 1650 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1650 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_19_19;

#line 1646 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CurPos_2 == (MR_Integer) 0);
#line 1646 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1646 "write_module_interface_files.m"
                  {
#line 1647 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1647 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1647 "write_module_interface_files.m"
                      {
#line 1647 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ItemModuleDefn1_14 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1648 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 0)));
#line 1648 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 1)));
#line 1648 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 2)));
#line 1648 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1646 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1646 "write_module_interface_files.m"
                          {
#line 1649 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item2_10)) == (MR_mktag((MR_Integer) 2)));
#line 1649 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1649 "write_module_interface_files.m"
                              {
#line 1649 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__ItemModuleDefn2_17 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item2_10), (MR_Integer) 2);
#line 1650 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 0)));
#line 1650 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 1)));
#line 1650 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 2)));
#line 1650 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1649 "write_module_interface_files.m"
                              }
#line 1646 "write_module_interface_files.m"
                          }
#line 1647 "write_module_interface_files.m"
                      }
#line 1646 "write_module_interface_files.m"
                  }
#line 1653 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1652 "write_module_interface_files.m"
                  {
#line 1652 "write_module_interface_files.m"
                    /* direct tailcall eliminated */
#line 1652 "write_module_interface_files.m"
                    {
#line 1652 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_11;

#line 1652 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1652 "write_module_interface_files.m"
                    }
#line 1652 "write_module_interface_files.m"
                    continue;
#line 1652 "write_module_interface_files.m"
                  }
#line 1653 "write_module_interface_files.m"
                else
#line 1661 "write_module_interface_files.m"
                  {
#line 1654 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1654 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1654 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_39;
#line 1654 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn2_40;
#line 1656 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1656 "write_module_interface_files.m"
                    MR_Integer parse_tree__write_module_interface_files__V_21_21;
#line 1658 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1658 "write_module_interface_files.m"
                    MR_Integer parse_tree__write_module_interface_files__V_23_23;

#line 1654 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CurPos_2 == (MR_Integer) 1);
#line 1654 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1654 "write_module_interface_files.m"
                      {
#line 1655 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1655 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1655 "write_module_interface_files.m"
                          {
#line 1655 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ItemModuleDefn1_39 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1656 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 0)));
#line 1656 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 1)));
#line 1656 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 2)));
#line 1656 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1654 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1654 "write_module_interface_files.m"
                              {
#line 1657 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item2_10)) == (MR_mktag((MR_Integer) 2)));
#line 1657 "write_module_interface_files.m"
                                if (parse_tree__write_module_interface_files__succeeded)
#line 1657 "write_module_interface_files.m"
                                  {
#line 1657 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__ItemModuleDefn2_40 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item2_10), (MR_Integer) 2);
#line 1658 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 0)));
#line 1658 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 1)));
#line 1658 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 2)));
#line 1658 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1657 "write_module_interface_files.m"
                                  }
#line 1654 "write_module_interface_files.m"
                              }
#line 1655 "write_module_interface_files.m"
                          }
#line 1654 "write_module_interface_files.m"
                      }
#line 1661 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1660 "write_module_interface_files.m"
                      {
#line 1660 "write_module_interface_files.m"
                        /* direct tailcall eliminated */
#line 1660 "write_module_interface_files.m"
                        {
#line 1660 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_11;

#line 1660 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1660 "write_module_interface_files.m"
                        }
#line 1660 "write_module_interface_files.m"
                        continue;
#line 1660 "write_module_interface_files.m"
                      }
#line 1661 "write_module_interface_files.m"
                    else
#line 1681 "write_module_interface_files.m"
                      {
#line 1681 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__NextPos_26;
#line 1681 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ItemsTail_30;
#line 1663 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1663 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_41;
#line 1664 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1664 "write_module_interface_files.m"
                        MR_Integer parse_tree__write_module_interface_files__V_25_25;

#line 1663 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1663 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1663 "write_module_interface_files.m"
                          {
#line 1663 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ItemModuleDefn1_41 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1664 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 0)));
#line 1664 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 1)));
#line 1664 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 2)));
#line 1664 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1663 "write_module_interface_files.m"
                          }
#line 1667 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1666 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 1;
#line 1667 "write_module_interface_files.m"
                        else
#line 1672 "write_module_interface_files.m"
                          {
#line 1668 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_37_37;
#line 1668 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_42;
#line 1669 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1669 "write_module_interface_files.m"
                            MR_Integer parse_tree__write_module_interface_files__V_28_28;

#line 1668 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1668 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1668 "write_module_interface_files.m"
                              {
#line 1668 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__ItemModuleDefn1_42 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1669 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 0)));
#line 1669 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 1)));
#line 1669 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 2)));
#line 1669 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1668 "write_module_interface_files.m"
                              }
#line 1672 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1671 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 0;
#line 1672 "write_module_interface_files.m"
                            else
#line 1673 "write_module_interface_files.m"
                              {
#line 1673 "write_module_interface_files.m"
                                MR_Word parse_tree__write_module_interface_files__Chunkable1_29;

#line 1673 "write_module_interface_files.m"
                                {
#line 1673 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Chunkable1_29 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__V_49_49);
                                }
#line 1677 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Chunkable1_29 == (MR_Integer) 0))
#line 1678 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 2;
#line 1677 "write_module_interface_files.m"
                                else
#line 1675 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__NextPos_26 = parse_tree__write_module_interface_files__CurPos_2;
#line 1673 "write_module_interface_files.m"
                              }
#line 1672 "write_module_interface_files.m"
                          }
#line 1682 "write_module_interface_files.m"
                        {
#line 1682 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__V_48_48, parse_tree__write_module_interface_files__NextPos_26, &parse_tree__write_module_interface_files__ItemsTail_30);
                        }
#line 1683 "write_module_interface_files.m"
                        {
#line 1683 "write_module_interface_files.m"
                          MR_Word base;
#line 1683 "write_module_interface_files.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 1683 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_49_49));
#line 1683 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemsTail_30));
#line 1683 "write_module_interface_files.m"
                        }
#line 1681 "write_module_interface_files.m"
                      }
#line 1661 "write_module_interface_files.m"
                  }
#line 1644 "write_module_interface_files.m"
              }
#line 1642 "write_module_interface_files.m"
          }
#line 1642 "write_module_interface_files.m"
      }
#line 1642 "write_module_interface_files.m"
      break;
#line 1642 "write_module_interface_files.m"
    }
#line 1639 "write_module_interface_files.m"
}

#line 1615 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(
#line 1615 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1615 "write_module_interface_files.m"
{
#line 1618 "write_module_interface_files.m"
  {
#line 1618 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2)));
#line 1622 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_4;
#line 1622 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_5;
#line 1624 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_6_6;
#line 1624 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_7_7;

#line 1623 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1623 "write_module_interface_files.m"
      {
#line 1623 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_4 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1624 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 0)));
#line 1624 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 1)));
#line 1624 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 2)));
#line 1626 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1625 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1626 "write_module_interface_files.m"
        else
#line 1626 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1626 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1626 "write_module_interface_files.m"
          else
#line 1626 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1623 "write_module_interface_files.m"
      }
#line 1618 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1618 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1618 "write_module_interface_files.m"
  }
#line 1615 "write_module_interface_files.m"
}

#line 1606 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(
#line 1606 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1606 "write_module_interface_files.m"
{
#line 1608 "write_module_interface_files.m"
  {
#line 1608 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2)));
#line 1608 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_3;
#line 1608 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_4;
#line 1610 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1610 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_6_6;

#line 1609 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1609 "write_module_interface_files.m"
      {
#line 1609 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_3 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1610 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 0)));
#line 1610 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 1)));
#line 1610 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 2)));
#line 1612 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__ModuleDefn_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1612 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1612 "write_module_interface_files.m"
        else
#line 1612 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__ModuleDefn_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1611 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1612 "write_module_interface_files.m"
          else
#line 1612 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1609 "write_module_interface_files.m"
      }
#line 1608 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1608 "write_module_interface_files.m"
  }
#line 1606 "write_module_interface_files.m"
}

#line 1603 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1603 "write_module_interface_files.m"
{
#line 1603 "write_module_interface_files.m"
  {
#line 1603 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1603 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1603 "write_module_interface_files.m"
    {
#line 1603 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1603 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1603 "write_module_interface_files.m"
  }
#line 1603 "write_module_interface_files.m"
}

#line 1593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1593 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1593 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 1593 "write_module_interface_files.m"
{
#line 1595 "write_module_interface_files.m"
  {
#line 1595 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1595 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_12_12;
#line 1595 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Items1_5;
#line 1595 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Items2_6;
#line 1595 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems2_7;
#line 1595 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_9;
#line 1603 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1596 "write_module_interface_files.m"
    {
#line 1596 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 2, &parse_tree__write_module_interface_files__Items1_5);
    }
#line 1597 "write_module_interface_files.m"
    {
#line 1597 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items1_5, &parse_tree__write_module_interface_files__Items2_6);
    }
#line 5386 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1602 "write_module_interface_files.m"
    {
#line 1602 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, parse_tree__write_module_interface_files__Items2_6, &parse_tree__write_module_interface_files__RevItems2_7);
    }
#line 1603 "write_module_interface_files.m"
    {
#line 1603 "write_module_interface_files.m"
      mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[24], parse_tree__write_module_interface_files__RevItems2_7, &parse_tree__write_module_interface_files__V_8_8, &parse_tree__write_module_interface_files__RevItems_9);
    }
#line 1604 "write_module_interface_files.m"
    {
#line 1604 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, parse_tree__write_module_interface_files__RevItems_9, parse_tree__write_module_interface_files__Items_4);
#line 1604 "write_module_interface_files.m"
      return;
    }
#line 1595 "write_module_interface_files.m"
  }
#line 1593 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_10(
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1565 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1565 "write_module_interface_files.m"
    {
#line 1565 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1567__1_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1565 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_5(
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1555 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1555 "write_module_interface_files.m"
    {
#line 1555 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1555 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0, 1);
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23);
#line 1549 "write_module_interface_files.m"
    {
#line 1549 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 1549 "write_module_interface_files.m"
      return;
    }
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1550 "write_module_interface_files.m"
    {
#line 1550 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17 = parse_tree__item_util__item_needs_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23);
    }
#line 1550 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17 == (MR_Integer) 1);
#line 1550 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1550 "write_module_interface_files.m"
      {
#line 1550 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 1550 "write_module_interface_files.m"
        return;
      }
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0) == 0)
#line 1549 "write_module_interface_files.m"
      {
#line 1549 "write_module_interface_files.m"
        {
#line 1549 "write_module_interface_files.m"
          {
#line 1549 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15, parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1549 "write_module_interface_files.m"
        }
#line 1549 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_FALSE;
#line 1549 "write_module_interface_files.m"
      }
#line 1549 "write_module_interface_files.m"
    else
#line 1549 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_TRUE;
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1, 1);
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24);
#line 1559 "write_module_interface_files.m"
    {
#line 1559 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(parse_tree__write_module_interface_files__env_ptr);
#line 1559 "write_module_interface_files.m"
      return;
    }
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    {
#line 1560 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1560 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_6_6;

#line 1560 "write_module_interface_files.m"
      {
#line 1560 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20 = parse_tree__item_util__item_needs_foreign_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24);
      }
#line 1560 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1560 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
        {
#line 1560 "write_module_interface_files.m"
          {
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 1560 "write_module_interface_files.m"
          }
#line 1560 "write_module_interface_files.m"
          {
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(parse_tree__write_module_interface_files__env_ptr);
#line 1560 "write_module_interface_files.m"
            return;
          }
#line 1560 "write_module_interface_files.m"
        }
#line 1559 "write_module_interface_files.m"
    }
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1) == 0)
#line 1559 "write_module_interface_files.m"
      {
#line 1559 "write_module_interface_files.m"
        {
#line 1559 "write_module_interface_files.m"
          {
#line 1559 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19, parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1559 "write_module_interface_files.m"
        }
#line 1559 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_FALSE;
#line 1559 "write_module_interface_files.m"
      }
#line 1559 "write_module_interface_files.m"
    else
#line 1559 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_TRUE;
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1544 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1544 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15,
#line 1544 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16)
#line 1544 "write_module_interface_files.m"
{
#line 1544 "write_module_interface_files.m"
  {
#line 1544 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 1544 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15 = parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15;
#line 1549 "write_module_interface_files.m"
    {
#line 1549 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(&parse_tree__write_module_interface_files__env);
    }
#line 1554 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1550 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15;
#line 1554 "write_module_interface_files.m"
    else
#line 1555 "write_module_interface_files.m"
      {
#line 1555 "write_module_interface_files.m"
        {
#line 1555 "write_module_interface_files.m"
          mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[22], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19);
        }
#line 1555 "write_module_interface_files.m"
      }
#line 1559 "write_module_interface_files.m"
    {
#line 1559 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(&parse_tree__write_module_interface_files__env);
    }
#line 1564 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19;
#line 1564 "write_module_interface_files.m"
    else
#line 1572 "write_module_interface_files.m"
      {
#line 1573 "write_module_interface_files.m"
        {
#line 1573 "write_module_interface_files.m"
          mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[23], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16);
#line 1573 "write_module_interface_files.m"
          return;
        }
#line 1572 "write_module_interface_files.m"
      }
#line 1544 "write_module_interface_files.m"
  }
#line 1544 "write_module_interface_files.m"
}

#line 1486 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3,
#line 1486 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4)
#line 1486 "write_module_interface_files.m"
{
#line 1489 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1489 "write_module_interface_files.m"
    {
#line 1489 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1489 "write_module_interface_files.m"
      {
#line 1489 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1489 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1489 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 1489 "write_module_interface_files.m"
        else
#line 1490 "write_module_interface_files.m"
          {
#line 1490 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1490 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1490 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17;
#line 1493 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AbstractItem_13;

#line 1491 "write_module_interface_files.m"
            {
#line 1491 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__write_module_interface_files__Item_9, parse_tree__write_module_interface_files__HeadVar__2_2, &parse_tree__write_module_interface_files__AbstractItem_13);
            }
#line 1493 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1492 "write_module_interface_files.m"
              {
#line 1492 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_13));
#line 1492 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1492 "write_module_interface_files.m"
              }
#line 1493 "write_module_interface_files.m"
            else
#line 1495 "write_module_interface_files.m"
              {
#line 1495 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__AbstractItem_21;

#line 1493 "write_module_interface_files.m"
                {
#line 1493 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__write_module_interface_files__Item_9, parse_tree__write_module_interface_files__HeadVar__2_2, &parse_tree__write_module_interface_files__AbstractItem_21);
                }
#line 1495 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1494 "write_module_interface_files.m"
                  {
#line 1494 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_21));
#line 1494 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1494 "write_module_interface_files.m"
                  }
#line 1495 "write_module_interface_files.m"
                else
#line 5866 "parse_tree.write_module_interface_files.c"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 5868 "parse_tree.write_module_interface_files.c"
                    {
#line 5870 "parse_tree.write_module_interface_files.c"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 1)));
#line 5872 "parse_tree.write_module_interface_files.c"
                      MR_Word parse_tree__write_module_interface_files__Pragma_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 1)));
#line 1521 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 0)));
#line 1521 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 2)));
#line 1521 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 3)));
#line 1525 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_36_36;

#line 1525 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1525 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1525 "write_module_interface_files.m"
                        {
#line 1525 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_33, (MR_Integer) 1)));
#line 1499 "write_module_interface_files.m"
                          {
#line 1499 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_9));
#line 1499 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1499 "write_module_interface_files.m"
                          }
#line 1525 "write_module_interface_files.m"
                        }
#line 1525 "write_module_interface_files.m"
                      else
#line 1501 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 5907 "parse_tree.write_module_interface_files.c"
                    }
#line 5909 "parse_tree.write_module_interface_files.c"
                  else
#line 5911 "parse_tree.write_module_interface_files.c"
                    if (((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 1))))))
#line 1499 "write_module_interface_files.m"
                      {
#line 1499 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_9));
#line 1499 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1499 "write_module_interface_files.m"
                      }
#line 5923 "parse_tree.write_module_interface_files.c"
                    else
#line 1501 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 1495 "write_module_interface_files.m"
              }
#line 1504 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1504 "write_module_interface_files.m"
            {
#line 1504 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_10;
#line 1504 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17;

#line 1504 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_3;
#line 1504 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1504 "write_module_interface_files.m"
            }
#line 1504 "write_module_interface_files.m"
            continue;
#line 1490 "write_module_interface_files.m"
          }
#line 1489 "write_module_interface_files.m"
      }
#line 1489 "write_module_interface_files.m"
      break;
#line 1489 "write_module_interface_files.m"
    }
#line 1486 "write_module_interface_files.m"
}

#line 1603 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_11(
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1603 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1603 "write_module_interface_files.m"
{
#line 1603 "write_module_interface_files.m"
  {
#line 1603 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1603 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1603 "write_module_interface_files.m"
    {
#line 1603 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1603 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1603 "write_module_interface_files.m"
  }
#line 1603 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_10(
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1565 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1565 "write_module_interface_files.m"
    {
#line 1565 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1567__1_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1565 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_5(
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1555 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1555 "write_module_interface_files.m"
    {
#line 1555 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1555 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0, 1);
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_3(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32);
#line 1549 "write_module_interface_files.m"
    {
#line 1549 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 1549 "write_module_interface_files.m"
      return;
    }
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1550 "write_module_interface_files.m"
    {
#line 1550 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26 = parse_tree__item_util__item_needs_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32);
    }
#line 1550 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26 == (MR_Integer) 1);
#line 1550 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1550 "write_module_interface_files.m"
      {
#line 1550 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 1550 "write_module_interface_files.m"
        return;
      }
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1549 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(
#line 1549 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1549 "write_module_interface_files.m"
{
#line 1549 "write_module_interface_files.m"
  {
#line 1549 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1549 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0) == 0)
#line 1549 "write_module_interface_files.m"
      {
#line 1549 "write_module_interface_files.m"
        {
#line 1549 "write_module_interface_files.m"
          {
#line 1549 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8, parse_tree__write_module_interface_files__get_short_interface_3_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1549 "write_module_interface_files.m"
        }
#line 1549 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_FALSE;
#line 1549 "write_module_interface_files.m"
      }
#line 1549 "write_module_interface_files.m"
    else
#line 1549 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_TRUE;
#line 1549 "write_module_interface_files.m"
  }
#line 1549 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1, 1);
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_8(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33);
#line 1559 "write_module_interface_files.m"
    {
#line 1559 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(parse_tree__write_module_interface_files__env_ptr);
#line 1559 "write_module_interface_files.m"
      return;
    }
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    {
#line 1560 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1560 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_17_17;

#line 1560 "write_module_interface_files.m"
      {
#line 1560 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29 = parse_tree__item_util__item_needs_foreign_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33);
      }
#line 1560 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1560 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
        {
#line 1560 "write_module_interface_files.m"
          {
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29, (MR_Integer) 0)));
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29, (MR_Integer) 1)));
#line 1560 "write_module_interface_files.m"
          }
#line 1560 "write_module_interface_files.m"
          {
#line 1560 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(parse_tree__write_module_interface_files__env_ptr);
#line 1560 "write_module_interface_files.m"
            return;
          }
#line 1560 "write_module_interface_files.m"
        }
#line 1559 "write_module_interface_files.m"
    }
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1559 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(
#line 1559 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1559 "write_module_interface_files.m"
{
#line 1559 "write_module_interface_files.m"
  {
#line 1559 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1559 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1) == 0)
#line 1559 "write_module_interface_files.m"
      {
#line 1559 "write_module_interface_files.m"
        {
#line 1559 "write_module_interface_files.m"
          {
#line 1559 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28, parse_tree__write_module_interface_files__get_short_interface_3_p_0_8, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1559 "write_module_interface_files.m"
        }
#line 1559 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_FALSE;
#line 1559 "write_module_interface_files.m"
      }
#line 1559 "write_module_interface_files.m"
    else
#line 1559 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_TRUE;
#line 1559 "write_module_interface_files.m"
  }
#line 1559 "write_module_interface_files.m"
}

#line 1477 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0(
#line 1477 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_4,
#line 1477 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Kind_5,
#line 1477 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6)
#line 1477 "write_module_interface_files.m"
{
#line 1477 "write_module_interface_files.m"
  {
#line 1477 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 1480 "write_module_interface_files.m"
    {
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_12_49;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems_7;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items2_9;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items1_42;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items2_43;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems2_44;
#line 1480 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems_46;
#line 1603 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_45_45;

#line 1481 "write_module_interface_files.m"
      {
#line 1481 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(parse_tree__write_module_interface_files__Items0_4, parse_tree__write_module_interface_files__Kind_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_7);
      }
#line 1482 "write_module_interface_files.m"
      {
#line 1482 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_7, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8);
      }
#line 1549 "write_module_interface_files.m"
      {
#line 1549 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(&parse_tree__write_module_interface_files__env);
      }
#line 1554 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1550 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8;
#line 1554 "write_module_interface_files.m"
      else
#line 1555 "write_module_interface_files.m"
        {
#line 1555 "write_module_interface_files.m"
          {
#line 1555 "write_module_interface_files.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[19], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28);
          }
#line 1555 "write_module_interface_files.m"
        }
#line 1559 "write_module_interface_files.m"
      {
#line 1559 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(&parse_tree__write_module_interface_files__env);
      }
#line 1564 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Items2_9 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28;
#line 1564 "write_module_interface_files.m"
      else
#line 1572 "write_module_interface_files.m"
        {
#line 1573 "write_module_interface_files.m"
          {
#line 1573 "write_module_interface_files.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[20], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28, &parse_tree__write_module_interface_files__Items2_9);
          }
#line 1572 "write_module_interface_files.m"
        }
#line 1596 "write_module_interface_files.m"
      {
#line 1596 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__Items2_9, (MR_Integer) 2, &parse_tree__write_module_interface_files__Items1_42);
      }
#line 1597 "write_module_interface_files.m"
      {
#line 1597 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items1_42, &parse_tree__write_module_interface_files__Items2_43);
      }
#line 6389 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__TypeCtorInfo_12_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1602 "write_module_interface_files.m"
      {
#line 1602 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, parse_tree__write_module_interface_files__Items2_43, &parse_tree__write_module_interface_files__RevItems2_44);
      }
#line 1603 "write_module_interface_files.m"
      {
#line 1603 "write_module_interface_files.m"
        mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[21], parse_tree__write_module_interface_files__RevItems2_44, &parse_tree__write_module_interface_files__V_45_45, &parse_tree__write_module_interface_files__RevItems_46);
      }
#line 1604 "write_module_interface_files.m"
      {
#line 1604 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, parse_tree__write_module_interface_files__RevItems_46, parse_tree__write_module_interface_files__Items_6);
#line 1604 "write_module_interface_files.m"
        return;
      }
#line 1480 "write_module_interface_files.m"
    }
#line 1477 "write_module_interface_files.m"
  }
#line 1477 "write_module_interface_files.m"
}

#line 1384 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1384 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1384 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5)
#line 1384 "write_module_interface_files.m"
{
#line 1386 "write_module_interface_files.m"
  {
#line 1386 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Spec_6;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pieces_7;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1386 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1387 "write_module_interface_files.m"
    {
#line 1387 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ClauseOrPragma_4));
#line 1387 "write_module_interface_files.m"
    }
#line 1387 "write_module_interface_files.m"
    {
#line 1387 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_11_11));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])));
#line 1387 "write_module_interface_files.m"
    }
#line 1387 "write_module_interface_files.m"
    {
#line 1387 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8])));
#line 1387 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_10_10));
#line 1387 "write_module_interface_files.m"
    }
#line 1390 "write_module_interface_files.m"
    {
#line 1390 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Pieces_7));
#line 1390 "write_module_interface_files.m"
    }
#line 1390 "write_module_interface_files.m"
    {
#line 1390 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_21_21));
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "write_module_interface_files.m"
    }
#line 1390 "write_module_interface_files.m"
    {
#line 1390 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 1390 "write_module_interface_files.m"
    }
#line 1390 "write_module_interface_files.m"
    {
#line 1390 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_19_19));
#line 1390 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "write_module_interface_files.m"
    }
#line 1389 "write_module_interface_files.m"
    {
#line 1389 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1389 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1389 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1389 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_18_18));
#line 1389 "write_module_interface_files.m"
    }
#line 1386 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Spec_6;
#line 1386 "write_module_interface_files.m"
  }
#line 1384 "write_module_interface_files.m"
}

#line 1338 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1338 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1338 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1338 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5)
#line 1338 "write_module_interface_files.m"
{
#line 1342 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1342 "write_module_interface_files.m"
    {
#line 1342 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1342 "write_module_interface_files.m"
      {
#line 1342 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1342 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "write_module_interface_files.m"
          {
#line 1342 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1342 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1342 "write_module_interface_files.m"
          }
#line 1342 "write_module_interface_files.m"
        else
#line 1344 "write_module_interface_files.m"
          {
#line 1344 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1344 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1344 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;
#line 1344 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48;

#line 1351 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1347 "write_module_interface_files.m"
              {
#line 1347 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemClause0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1347 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 6)));
#line 1347 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Spec_18;
#line 1347 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_76_76;
#line 1347 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_77_77;
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 0)));
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 1)));
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 2)));
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 3)));
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 4)));
#line 1348 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 5)));
#line 1348 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 7)));

#line 1390 "write_module_interface_files.m"
                {
#line 1390 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_77_77, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_17));
#line 1390 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[14])));
#line 1390 "write_module_interface_files.m"
                }
#line 1390 "write_module_interface_files.m"
                {
#line 1390 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_77_77));
#line 1390 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "write_module_interface_files.m"
                }
#line 1389 "write_module_interface_files.m"
                {
#line 1389 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1389 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1389 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1389 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_76_76));
#line 1389 "write_module_interface_files.m"
                }
#line 1350 "write_module_interface_files.m"
                {
#line 1350 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_18));
#line 1350 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1350 "write_module_interface_files.m"
                }
#line 1350 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1347 "write_module_interface_files.m"
              }
#line 1351 "write_module_interface_files.m"
            else
#line 1351 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1352 "write_module_interface_files.m"
                {
#line 1352 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1352 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Pragma_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 1)));
#line 1352 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__AllowedInInterface_23;
#line 1352 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 2)));
#line 1353 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 0)));
#line 1353 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 3)));

#line 1354 "write_module_interface_files.m"
                  {
#line 1354 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__AllowedInInterface_23 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_21);
                  }
#line 1359 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__AllowedInInterface_23 == (MR_Integer) 0))
#line 1356 "write_module_interface_files.m"
                    {
#line 1356 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Spec_51;

#line 1357 "write_module_interface_files.m"
                      {
#line 1357 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Spec_51 = parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0((MR_String) "pragma", parse_tree__write_module_interface_files__Context_53);
                      }
#line 1358 "write_module_interface_files.m"
                      {
#line 1358 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_51));
#line 1358 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1358 "write_module_interface_files.m"
                      }
#line 1358 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1356 "write_module_interface_files.m"
                    }
#line 1359 "write_module_interface_files.m"
                  else
#line 1360 "write_module_interface_files.m"
                    {
#line 1361 "write_module_interface_files.m"
                      {
#line 1361 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1361 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1361 "write_module_interface_files.m"
                      }
#line 1361 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1360 "write_module_interface_files.m"
                    }
#line 1352 "write_module_interface_files.m"
                }
#line 1351 "write_module_interface_files.m"
              else
#line 1379 "write_module_interface_files.m"
                {
#line 1380 "write_module_interface_files.m"
                  {
#line 1380 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1380 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1380 "write_module_interface_files.m"
                  }
#line 1380 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1379 "write_module_interface_files.m"
                }
#line 1382 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1382 "write_module_interface_files.m"
            {
#line 1382 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_13;
#line 1382 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;
#line 1382 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48;

#line 1382 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1382 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 1382 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1382 "write_module_interface_files.m"
            }
#line 1382 "write_module_interface_files.m"
            continue;
#line 1344 "write_module_interface_files.m"
          }
#line 1342 "write_module_interface_files.m"
      }
#line 1342 "write_module_interface_files.m"
      break;
#line 1342 "write_module_interface_files.m"
    }
#line 1338 "write_module_interface_files.m"
}

#line 1331 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(
#line 1331 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1331 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1331 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1331 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10)
#line 1331 "write_module_interface_files.m"
{
#line 1334 "write_module_interface_files.m"
  {
#line 1334 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1334 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_8;

#line 1335 "write_module_interface_files.m"
    {
#line 1335 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(parse_tree__write_module_interface_files__Items0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);
    }
#line 1336 "write_module_interface_files.m"
    {
#line 1336 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__Items_6);
#line 1336 "write_module_interface_files.m"
      return;
    }
#line 1334 "write_module_interface_files.m"
  }
#line 1331 "write_module_interface_files.m"
}

#line 1311 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 1311 "write_module_interface_files.m"
{
#line 1325 "write_module_interface_files.m"
  {
#line 1325 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1325 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 1315 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemPragma_5;
#line 1315 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_7;
#line 1315 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FEInfo_10;
#line 1316 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_6_6;
#line 1316 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;
#line 1316 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_9_9;
#line 1318 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Lang_11;
#line 1318 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Values_13;

#line 1315 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1315 "write_module_interface_files.m"
      {
#line 1315 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemPragma_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1316 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 0)));
#line 1316 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 1)));
#line 1316 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 2)));
#line 1316 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 3)));
#line 1317 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1317 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1317 "write_module_interface_files.m"
          {
#line 1317 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__FEInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_7, (MR_Integer) 1)));
#line 1318 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 0)));
#line 1318 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 1)));
#line 1318 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 2)));
#line 1318 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1317 "write_module_interface_files.m"
          }
#line 1315 "write_module_interface_files.m"
      }
#line 1325 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1323 "write_module_interface_files.m"
      {
#line 1323 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Defns_14;
#line 1323 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv0_Defns_14;
#line 1324 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1324 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1324 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1324 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1324 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_15_15;

#line 1323 "write_module_interface_files.m"
        {
#line 1323 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__TypeDefnMap_3, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_Defns_14);
        }
#line 1323 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1323 "write_module_interface_files.m"
          {
#line 1323 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Defns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_Defns_14);
#line 1323 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1323 "write_module_interface_files.m"
          }
#line 1323 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1323 "write_module_interface_files.m"
          {
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Defns_14)) == (MR_mktag((MR_Integer) 1)));
#line 1324 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1324 "write_module_interface_files.m"
              {
#line 1324 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 0)));
#line 1324 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 1)));
#line 1324 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 1324 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 1324 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 1324 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1324 "write_module_interface_files.m"
                  {
#line 1324 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__V_18_18, (MR_Integer) 0)));
#line 1324 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "write_module_interface_files.m"
                  }
#line 1324 "write_module_interface_files.m"
              }
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1323 "write_module_interface_files.m"
          }
#line 1323 "write_module_interface_files.m"
      }
#line 1325 "write_module_interface_files.m"
    else
#line 1326 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1325 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1325 "write_module_interface_files.m"
  }
#line 1311 "write_module_interface_files.m"
}

#line 1309 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1309 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1309 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1309 "write_module_interface_files.m"
{
#line 1309 "write_module_interface_files.m"
  {
#line 1309 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1309 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1309 "write_module_interface_files.m"
    {
#line 1309 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1309 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1309 "write_module_interface_files.m"
  }
#line 1309 "write_module_interface_files.m"
}

#line 1305 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1305 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1305 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6,
#line 1305 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7)
#line 1305 "write_module_interface_files.m"
{
#line 1308 "write_module_interface_files.m"
  {
#line 1308 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1308 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1309 "write_module_interface_files.m"
    {
#line 1309 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[4]));
#line 1309 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1));
#line 1309 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1309 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntTypeMap_4));
#line 1309 "write_module_interface_files.m"
    }
#line 1309 "write_module_interface_files.m"
    {
#line 1309 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7);
#line 1309 "write_module_interface_files.m"
      return;
    }
#line 1308 "write_module_interface_files.m"
  }
#line 1305 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_5(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_4(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_3(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_2(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_1(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1264 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(
#line 1264 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1264 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1264 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24)
#line 1264 "write_module_interface_files.m"
{
#line 1271 "write_module_interface_files.m"
  {
#line 1271 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1271 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 2))))
#line 1272 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1271 "write_module_interface_files.m"
    else
#line 1271 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 1))))
#line 1275 "write_module_interface_files.m"
        {
#line 1275 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)));
#line 1275 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1275 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27;
#line 1275 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1278 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_12;
#line 1262 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24;

#line 1276 "write_module_interface_files.m"
          {
#line 1276 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(parse_tree__write_module_interface_files__TypeName_9, &parse_tree__write_module_interface_files__ModuleName_12);
          }
#line 1278 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1277 "write_module_interface_files.m"
            {
#line 1277 "write_module_interface_files.m"
              {
#line 1277 "write_module_interface_files.m"
                mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27);
              }
#line 1277 "write_module_interface_files.m"
            }
#line 1278 "write_module_interface_files.m"
          else
#line 1279 "write_module_interface_files.m"
            {
#line 1279 "write_module_interface_files.m"
              {
#line 1279 "write_module_interface_files.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.get_modules_from_constraint_arg_type\'/3", (MR_String) "unknown type encountered");
#line 1279 "write_module_interface_files.m"
                return;
              }
#line 1279 "write_module_interface_files.m"
            }
#line 1262 "write_module_interface_files.m"
          {
#line 1262 "write_module_interface_files.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[14], parse_tree__write_module_interface_files__Args_10, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
          }
#line 1262 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
#line 1275 "write_module_interface_files.m"
        }
#line 1271 "write_module_interface_files.m"
      else
#line 1271 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 0))))
#line 1271 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1271 "write_module_interface_files.m"
        else
#line 1271 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1298 "write_module_interface_files.m"
            {
#line 1298 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1286 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1286 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1262 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
              {
#line 1262 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[15], parse_tree__write_module_interface_files__Args_32, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
              }
#line 1262 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
#line 1298 "write_module_interface_files.m"
            }
#line 1271 "write_module_interface_files.m"
          else
#line 1271 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1298 "write_module_interface_files.m"
              {
#line 1298 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1298 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__MaybeRetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1298 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Args_34;
#line 1290 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1262 "write_module_interface_files.m"
                MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24;

#line 1294 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__MaybeRetType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Args_34 = parse_tree__write_module_interface_files__Args0_18;
#line 1294 "write_module_interface_files.m"
                else
#line 1292 "write_module_interface_files.m"
                  {
#line 1292 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__RetType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeRetType_19, (MR_Integer) 0)));

#line 1293 "write_module_interface_files.m"
                    {
#line 1293 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Args_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_34, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RetType_22));
#line 1293 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_34, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Args0_18));
#line 1293 "write_module_interface_files.m"
                    }
#line 1292 "write_module_interface_files.m"
                  }
#line 1262 "write_module_interface_files.m"
                {
#line 1262 "write_module_interface_files.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[16], parse_tree__write_module_interface_files__Args_34, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
                }
#line 1262 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
#line 1298 "write_module_interface_files.m"
              }
#line 1271 "write_module_interface_files.m"
            else
#line 1271 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1298 "write_module_interface_files.m"
                {
#line 1298 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__KindedType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1298 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_35;
#line 1288 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1262 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24;

#line 1288 "write_module_interface_files.m"
                  {
#line 1288 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Args_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_35, 0) = ((MR_Box) (parse_tree__write_module_interface_files__KindedType_16));
#line 1288 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1288 "write_module_interface_files.m"
                  }
#line 1262 "write_module_interface_files.m"
                  {
#line 1262 "write_module_interface_files.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[17], parse_tree__write_module_interface_files__Args_35, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
                  }
#line 1262 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
#line 1298 "write_module_interface_files.m"
                }
#line 1271 "write_module_interface_files.m"
              else
#line 1298 "write_module_interface_files.m"
                {
#line 1298 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1284 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1262 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
                  {
#line 1262 "write_module_interface_files.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[18], parse_tree__write_module_interface_files__Args_36, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
                  }
#line 1262 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
#line 1298 "write_module_interface_files.m"
                }
#line 1271 "write_module_interface_files.m"
  }
#line 1264 "write_module_interface_files.m"
}

#line 1262 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0_1(
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1262 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1262 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1262 "write_module_interface_files.m"
{
#line 1262 "write_module_interface_files.m"
  {
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1262 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1262 "write_module_interface_files.m"
  }
#line 1262 "write_module_interface_files.m"
}

#line 1243 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(
#line 1243 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1243 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1243 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1243 "write_module_interface_files.m"
{
#line 1246 "write_module_interface_files.m"
  {
#line 1246 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1246 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 0)));
#line 1246 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 1)));
#line 1246 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16;
#line 1262 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12;

#line 1252 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ClassName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1250 "write_module_interface_files.m"
      {
#line 1250 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 0)));
#line 1250 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 1)));

#line 1251 "write_module_interface_files.m"
        {
#line 1251 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16);
        }
#line 1250 "write_module_interface_files.m"
      }
#line 1252 "write_module_interface_files.m"
    else
#line 1253 "write_module_interface_files.m"
      {
#line 1254 "write_module_interface_files.m"
        {
#line 1254 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.get_requirements_of_impl_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
#line 1254 "write_module_interface_files.m"
          return;
        }
#line 1253 "write_module_interface_files.m"
      }
#line 1262 "write_module_interface_files.m"
    {
#line 1262 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[13], parse_tree__write_module_interface_files__ArgTypes_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
    }
#line 1262 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
#line 1246 "write_module_interface_files.m"
  }
#line 1243 "write_module_interface_files.m"
}

#line 1221 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0_1(
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1221 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1221 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1221 "write_module_interface_files.m"
{
#line 1221 "write_module_interface_files.m"
  {
#line 1221 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1221 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1221 "write_module_interface_files.m"
    {
#line 1221 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1221 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1221 "write_module_interface_files.m"
  }
#line 1221 "write_module_interface_files.m"
}

#line 1214 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(
#line 1214 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1214 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24,
#line 1214 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25)
#line 1214 "write_module_interface_files.m"
{
#line 1219 "write_module_interface_files.m"
  {
#line 1219 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1219 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2))))
#line 1226 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
    else
#line 1219 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 1))))
#line 1225 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
      else
#line 1219 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 0))))
#line 1224 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
        else
#line 1219 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1227 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
          else
#line 1219 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1237 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
            else
#line 1219 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1236 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
              else
#line 1219 "write_module_interface_files.m"
                if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1229 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                else
#line 1219 "write_module_interface_files.m"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1235 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                  else
#line 1219 "write_module_interface_files.m"
                    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1232 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                    else
#line 1219 "write_module_interface_files.m"
                      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1230 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                      else
#line 1219 "write_module_interface_files.m"
                        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1238 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                        else
#line 1219 "write_module_interface_files.m"
                          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1239 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                          else
#line 1219 "write_module_interface_files.m"
                            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1233 "write_module_interface_files.m"
                              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                            else
#line 1219 "write_module_interface_files.m"
                              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1231 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                              else
#line 1219 "write_module_interface_files.m"
                                if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1234 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                                else
#line 1219 "write_module_interface_files.m"
                                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1228 "write_module_interface_files.m"
                                    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1219 "write_module_interface_files.m"
                                  else
#line 1219 "write_module_interface_files.m"
                                    {
#line 1219 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__ItemTypeClass_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1219 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 0)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 1)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 2)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 3)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 4)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 5)));
#line 1220 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 6)));
#line 1220 "write_module_interface_files.m"
                                      MR_Integer parse_tree__write_module_interface_files__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 7)));
#line 1221 "write_module_interface_files.m"
                                      MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25;

#line 1221 "write_module_interface_files.m"
                                      {
#line 1221 "write_module_interface_files.m"
                                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[12], parse_tree__write_module_interface_files__Constraints_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25);
                                      }
#line 1221 "write_module_interface_files.m"
                                      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25);
#line 1219 "write_module_interface_files.m"
                                    }
#line 1219 "write_module_interface_files.m"
  }
#line 1214 "write_module_interface_files.m"
}

#line 1211 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0_1(
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1211 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1211 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1211 "write_module_interface_files.m"
{
#line 1211 "write_module_interface_files.m"
  {
#line 1211 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1211 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25;

#line 1211 "write_module_interface_files.m"
    {
#line 1211 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25);
    }
#line 1211 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25));
#line 1211 "write_module_interface_files.m"
  }
#line 1211 "write_module_interface_files.m"
}

#line 1207 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(
#line 1207 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplItems_3,
#line 1207 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_4)
#line 1207 "write_module_interface_files.m"
{
#line 1210 "write_module_interface_files.m"
  {
#line 1210 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1210 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_6_6;
#line 1211 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_Modules_4;

#line 1212 "write_module_interface_files.m"
    {
#line 1212 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1211 "write_module_interface_files.m"
    {
#line 1211 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[11], parse_tree__write_module_interface_files__ImplItems_3, ((MR_Box) (parse_tree__write_module_interface_files__V_6_6)), &parse_tree__write_module_interface_files__conv1_Modules_4);
    }
#line 1211 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_4 = ((MR_Word) parse_tree__write_module_interface_files__conv1_Modules_4);
#line 1210 "write_module_interface_files.m"
  }
#line 1207 "write_module_interface_files.m"
}

#line 1153 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0(
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8,
#line 1153 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9,
#line 1153 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10)
#line 1153 "write_module_interface_files.m"
{
#line 1158 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1158 "write_module_interface_files.m"
    {
#line 1158 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1158 "write_module_interface_files.m"
      {
#line 1158 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1158 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "write_module_interface_files.m"
          {
#line 1159 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1159 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1158 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1158 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1158 "write_module_interface_files.m"
          }
#line 1158 "write_module_interface_files.m"
        else
#line 1161 "write_module_interface_files.m"
          {
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_54_54;
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56;
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57;
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58;
#line 1161 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59;
#line 1174 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewInInterface_35;
#line 1163 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_31;
#line 1163 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ModuleDefn_32;
#line 1164 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1164 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_34_34;

#line 1163 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_25)) == (MR_mktag((MR_Integer) 2)));
#line 1163 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1163 "write_module_interface_files.m"
              {
#line 1163 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_25), (MR_Integer) 2);
#line 1164 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ModuleDefn_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 0)));
#line 1164 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 1)));
#line 1164 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 2)));
#line 1168 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__ModuleDefn_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1170 "write_module_interface_files.m"
                  {
#line 1170 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__NewInInterface_35 = (MR_Integer) 0;
#line 1170 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1170 "write_module_interface_files.m"
                  }
#line 1168 "write_module_interface_files.m"
                else
#line 1168 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__ModuleDefn_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "write_module_interface_files.m"
                    {
#line 1167 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__NewInInterface_35 = (MR_Integer) 1;
#line 1167 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1167 "write_module_interface_files.m"
                    }
#line 1168 "write_module_interface_files.m"
                  else
#line 1168 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1163 "write_module_interface_files.m"
              }
#line 1174 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1173 "write_module_interface_files.m"
              {
#line 1173 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_54_54 = parse_tree__write_module_interface_files__NewInInterface_35;
#line 1173 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1173 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1173 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1173 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1173 "write_module_interface_files.m"
              }
#line 1174 "write_module_interface_files.m"
            else
#line 1189 "write_module_interface_files.m"
              {
#line 1189 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_36;

#line 1175 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1175 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1175 "write_module_interface_files.m"
                  {
#line 1175 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_25, (MR_Integer) 1)));
#line 1177 "write_module_interface_files.m"
                    {
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Name_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 1)));
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 2)));
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Body_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 3)));
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__TypeCtor_44;
#line 1177 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_55_55;
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 0)));
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 4)));
#line 1177 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 5)));
#line 1177 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 6)));

#line 1178 "write_module_interface_files.m"
                      {
#line 1178 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_55_55 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], parse_tree__write_module_interface_files__Args_39);
                      }
#line 1178 "write_module_interface_files.m"
                      {
#line 1178 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__TypeCtor_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Name_38));
#line 1178 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_55_55));
#line 1178 "write_module_interface_files.m"
                      }
#line 1183 "write_module_interface_files.m"
                      if ((parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 == (MR_Integer) 0))
#line 1184 "write_module_interface_files.m"
                        {
#line 1184 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_72_72;

#line 1205 "write_module_interface_files.m"
                          {
#line 1205 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_72_72, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_40));
#line 1205 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_72_72, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_36));
#line 1205 "write_module_interface_files.m"
                          }
#line 1205 "write_module_interface_files.m"
                          {
#line 1205 "write_module_interface_files.m"
                            mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_44)), ((MR_Box) (parse_tree__write_module_interface_files__V_72_72)), parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56);
                          }
#line 1187 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1187 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1184 "write_module_interface_files.m"
                        }
#line 1183 "write_module_interface_files.m"
                      else
#line 1180 "write_module_interface_files.m"
                        {
#line 1180 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_82_82;

#line 1181 "write_module_interface_files.m"
                          {
#line 1181 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1181 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3));
#line 1181 "write_module_interface_files.m"
                          }
#line 1205 "write_module_interface_files.m"
                          {
#line 1205 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_82_82, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_40));
#line 1205 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_82_82, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_36));
#line 1205 "write_module_interface_files.m"
                          }
#line 1205 "write_module_interface_files.m"
                          {
#line 1205 "write_module_interface_files.m"
                            mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_44)), ((MR_Box) (parse_tree__write_module_interface_files__V_82_82)), parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58);
                          }
#line 1182 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1180 "write_module_interface_files.m"
                        }
#line 1187 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1177 "write_module_interface_files.m"
                    }
#line 1175 "write_module_interface_files.m"
                  }
#line 1175 "write_module_interface_files.m"
                else
#line 1193 "write_module_interface_files.m"
                  {
#line 1193 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 == (MR_Integer) 0))
#line 1194 "write_module_interface_files.m"
                      {
#line 1195 "write_module_interface_files.m"
                        {
#line 1195 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1195 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5));
#line 1195 "write_module_interface_files.m"
                        }
#line 1195 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1194 "write_module_interface_files.m"
                      }
#line 1193 "write_module_interface_files.m"
                    else
#line 1191 "write_module_interface_files.m"
                      {
#line 1192 "write_module_interface_files.m"
                        {
#line 1192 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1192 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3));
#line 1192 "write_module_interface_files.m"
                        }
#line 1192 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1191 "write_module_interface_files.m"
                      }
#line 1195 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1195 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1193 "write_module_interface_files.m"
                  }
#line 1195 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_54_54 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1;
#line 1189 "write_module_interface_files.m"
              }
#line 1198 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1198 "write_module_interface_files.m"
            {
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0__tmp_copy_1 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_54_54;
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_26;
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57_57;
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59_59;
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0__tmp_copy_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_58_58;
#line 1198 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0__tmp_copy_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_56_56;

#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0__tmp_copy_9;
#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0__tmp_copy_7;
#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_5;
#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_3;
#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1198 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0__tmp_copy_1;
#line 1198 "write_module_interface_files.m"
            }
#line 1198 "write_module_interface_files.m"
            continue;
#line 1161 "write_module_interface_files.m"
          }
#line 1158 "write_module_interface_files.m"
      }
#line 1158 "write_module_interface_files.m"
      break;
#line 1158 "write_module_interface_files.m"
    }
#line 1153 "write_module_interface_files.m"
}

#line 1144 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_5_p_0(
#line 1144 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_6,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplItems_8,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntTypesMap_9,
#line 1144 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplTypesMap_10)
#line 1144 "write_module_interface_files.m"
{
#line 1147 "write_module_interface_files.m"
  {
#line 1147 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_19_19 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_20_20;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevIntItems_11;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevImplItems_12;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;

#line 1149 "write_module_interface_files.m"
    {
#line 1149 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_18_18, parse_tree__write_module_interface_files__TypeInfo_19_19);
    }
#line 1149 "write_module_interface_files.m"
    {
#line 1149 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_17_17 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_18_18, parse_tree__write_module_interface_files__TypeInfo_19_19);
    }
#line 1148 "write_module_interface_files.m"
    {
#line 1148 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__Items0_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevIntItems_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevImplItems_12, parse_tree__write_module_interface_files__V_16_16, parse_tree__write_module_interface_files__IntTypesMap_9, parse_tree__write_module_interface_files__V_17_17, parse_tree__write_module_interface_files__ImplTypesMap_10);
    }
#line 8155 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1150 "write_module_interface_files.m"
    {
#line 1150 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_20_20, parse_tree__write_module_interface_files__RevIntItems_11, parse_tree__write_module_interface_files__IntItems_7);
    }
#line 1151 "write_module_interface_files.m"
    {
#line 1151 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_20_20, parse_tree__write_module_interface_files__RevImplItems_12, parse_tree__write_module_interface_files__ImplItems_8);
#line 1151 "write_module_interface_files.m"
      return;
    }
#line 1147 "write_module_interface_files.m"
  }
#line 1144 "write_module_interface_files.m"
}

#line 1130 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1130 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1130 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1130 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1130 "write_module_interface_files.m"
{
#line 1133 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1133 "write_module_interface_files.m"
    {
#line 1133 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1133 "write_module_interface_files.m"
      {
#line 1133 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1133 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1133 "write_module_interface_files.m"
        else
#line 1134 "write_module_interface_files.m"
          {
#line 1134 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1134 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 1)));
#line 1134 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;
#line 1135 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 0)));
#line 1135 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 2)));
#line 1135 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 3)));

#line 1136 "write_module_interface_files.m"
            {
#line 1136 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Type_11, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16);
            }
#line 1137 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1137 "write_module_interface_files.m"
            {
#line 1137 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Args_8;
#line 1137 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;

#line 1137 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1137 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1137 "write_module_interface_files.m"
            }
#line 1137 "write_module_interface_files.m"
            continue;
#line 1134 "write_module_interface_files.m"
          }
#line 1133 "write_module_interface_files.m"
      }
#line 1133 "write_module_interface_files.m"
      break;
#line 1133 "write_module_interface_files.m"
    }
#line 1130 "write_module_interface_files.m"
}

#line 1121 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1121 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1121 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1121 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1121 "write_module_interface_files.m"
{
#line 1124 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1124 "write_module_interface_files.m"
    {
#line 1124 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1124 "write_module_interface_files.m"
      {
#line 1124 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1124 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1124 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1124 "write_module_interface_files.m"
        else
#line 1125 "write_module_interface_files.m"
          {
#line 1125 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1125 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1125 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 3)));
#line 1125 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17;
#line 1126 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 0)));
#line 1126 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 1)));
#line 1126 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 2)));
#line 1126 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 4)));

#line 1127 "write_module_interface_files.m"
            {
#line 1127 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__ConsArgs_13, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17);
            }
#line 1128 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1128 "write_module_interface_files.m"
            {
#line 1128 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Ctors_8;
#line 1128 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17;

#line 1128 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1128 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1128 "write_module_interface_files.m"
            }
#line 1128 "write_module_interface_files.m"
            continue;
#line 1125 "write_module_interface_files.m"
          }
#line 1124 "write_module_interface_files.m"
      }
#line 1124 "write_module_interface_files.m"
      break;
#line 1124 "write_module_interface_files.m"
    }
#line 1121 "write_module_interface_files.m"
}

#line 1116 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1116 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1116 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1116 "write_module_interface_files.m"
{
#line 1116 "write_module_interface_files.m"
  {
#line 1116 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1116 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14;

#line 1116 "write_module_interface_files.m"
    {
#line 1116 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14);
    }
#line 1116 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14));
#line 1116 "write_module_interface_files.m"
  }
#line 1116 "write_module_interface_files.m"
}

#line 1086 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1086 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1086 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1086 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14)
#line 1086 "write_module_interface_files.m"
{
#line 1117 "write_module_interface_files.m"
  {
#line 1117 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1117 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_6;
#line 1117 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Args_7;

#line 1090 "write_module_interface_files.m"
    {
#line 1090 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__write_module_interface_files__Type_4, &parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__Args_7);
    }
#line 1117 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1091 "write_module_interface_files.m"
      {
#line 1091 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 0)));
#line 1091 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19;
#line 1091 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 1)));
#line 1093 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1093 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1116 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14;

#line 1093 "write_module_interface_files.m"
        {
#line 1093 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__V_11_11);
        }
#line 1098 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1093 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1098 "write_module_interface_files.m"
        else
#line 1104 "write_module_interface_files.m"
          {
#line 1099 "write_module_interface_files.m"
            {
#line 1099 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(parse_tree__write_module_interface_files__TypeCtor_6);
            }
#line 1104 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1099 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1104 "write_module_interface_files.m"
            else
#line 1113 "write_module_interface_files.m"
              {
#line 1106 "write_module_interface_files.m"
                MR_String parse_tree__write_module_interface_files__V_28_28;

#line 1105 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_8)) == (MR_mktag((MR_Integer) 0)));
#line 1105 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1105 "write_module_interface_files.m"
                  {
#line 1105 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SymName_8, (MR_Integer) 0)));
#line 1106 "write_module_interface_files.m"
                    if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "int") == 0))
#line 1105 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1106 "write_module_interface_files.m"
                    else
#line 1106 "write_module_interface_files.m"
                      if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "float") == 0))
#line 1106 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1106 "write_module_interface_files.m"
                      else
#line 1106 "write_module_interface_files.m"
                        if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "string") == 0))
#line 1107 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1106 "write_module_interface_files.m"
                        else
#line 1106 "write_module_interface_files.m"
                          if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "character") == 0))
#line 1108 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1106 "write_module_interface_files.m"
                          else
#line 1106 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1105 "write_module_interface_files.m"
                  }
#line 1113 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1108 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1113 "write_module_interface_files.m"
                else
#line 1114 "write_module_interface_files.m"
                  {
#line 1114 "write_module_interface_files.m"
                    {
#line 1114 "write_module_interface_files.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_6)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19);
                    }
#line 1114 "write_module_interface_files.m"
                  }
#line 1113 "write_module_interface_files.m"
              }
#line 1104 "write_module_interface_files.m"
          }
#line 1116 "write_module_interface_files.m"
        {
#line 1116 "write_module_interface_files.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[10], parse_tree__write_module_interface_files__Args_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
        }
#line 1116 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
#line 1091 "write_module_interface_files.m"
      }
#line 1117 "write_module_interface_files.m"
    else
#line 1116 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1117 "write_module_interface_files.m"
  }
#line 1086 "write_module_interface_files.m"
}

#line 1069 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1069 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1069 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1069 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1069 "write_module_interface_files.m"
{
#line 1072 "write_module_interface_files.m"
  {
#line 1072 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1072 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 0)));
#line 1074 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 1)));

#line 1078 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1076 "write_module_interface_files.m"
      {
#line 1076 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 0)));
#line 1076 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 1)));

#line 1077 "write_module_interface_files.m"
        {
#line 1077 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);
#line 1077 "write_module_interface_files.m"
          return;
        }
#line 1076 "write_module_interface_files.m"
      }
#line 1078 "write_module_interface_files.m"
    else
#line 1079 "write_module_interface_files.m"
      {
#line 1080 "write_module_interface_files.m"
        {
#line 1080 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules\'/3", (MR_String) "unqualified type encountered");
#line 1080 "write_module_interface_files.m"
          return;
        }
#line 1079 "write_module_interface_files.m"
      }
#line 1072 "write_module_interface_files.m"
  }
#line 1069 "write_module_interface_files.m"
}

#line 1064 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1064 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1064 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1064 "write_module_interface_files.m"
{
#line 1064 "write_module_interface_files.m"
  {
#line 1064 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1064 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12;

#line 1064 "write_module_interface_files.m"
    {
#line 1064 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12);
    }
#line 1064 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12));
#line 1064 "write_module_interface_files.m"
  }
#line 1064 "write_module_interface_files.m"
}

#line 1057 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1057 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1057 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1057 "write_module_interface_files.m"
{
#line 1057 "write_module_interface_files.m"
  {
#line 1057 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1057 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1057 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1057 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20;

#line 1057 "write_module_interface_files.m"
    {
#line 1057 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20);
    }
#line 1057 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1057 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1057 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20));
#line 1057 "write_module_interface_files.m"
  }
#line 1057 "write_module_interface_files.m"
}

#line 1055 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1055 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1055 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1055 "write_module_interface_files.m"
{
#line 1055 "write_module_interface_files.m"
  {
#line 1055 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1055 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1055 "write_module_interface_files.m"
    {
#line 1055 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1055 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1055 "write_module_interface_files.m"
  }
#line 1055 "write_module_interface_files.m"
}

#line 1044 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1044 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1044 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27)
#line 1044 "write_module_interface_files.m"
{
#line 1051 "write_module_interface_files.m"
  {
#line 1051 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1051 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1050 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1059 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RhsType_15;

#line 1052 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1052 "write_module_interface_files.m"
      {
#line 1052 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__RhsType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1053 "write_module_interface_files.m"
        {
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_47_47;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_55_55;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_16;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__NewRhsTypeCtors_17;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1053 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1055 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30;
#line 1057 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1057 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1057 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv6_V_18_18;
#line 1057 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27;

#line 1053 "write_module_interface_files.m"
          {
#line 1053 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_28_28 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 1053 "write_module_interface_files.m"
          {
#line 1053 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__RhsType_15, parse_tree__write_module_interface_files__V_28_28, &parse_tree__write_module_interface_files__RhsTypeCtors_16);
          }
#line 1054 "write_module_interface_files.m"
          {
#line 1054 "write_module_interface_files.m"
            mercury__set__difference_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__RhsTypeCtors_16, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__NewRhsTypeCtors_17);
          }
#line 8764 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_47_47 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4];
#line 1055 "write_module_interface_files.m"
          {
#line 1055 "write_module_interface_files.m"
            mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_47_47, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[8], parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
          }
#line 1055 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
#line 1056 "write_module_interface_files.m"
          {
#line 1056 "write_module_interface_files.m"
            mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31);
          }
#line 1057 "write_module_interface_files.m"
          {
#line 1057 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1057 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2));
#line 1057 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1057 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1057 "write_module_interface_files.m"
          }
#line 1058 "write_module_interface_files.m"
          {
#line 1058 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 8797 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_55_55 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 1057 "write_module_interface_files.m"
          {
#line 1057 "write_module_interface_files.m"
            mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_47_47, parse_tree__write_module_interface_files__V_32_32, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Box) (parse_tree__write_module_interface_files__V_34_34)), &parse_tree__write_module_interface_files__conv6_V_18_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
          }
#line 1057 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23);
#line 1057 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) parse_tree__write_module_interface_files__conv6_V_18_18);
#line 1057 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
#line 1057 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1053 "write_module_interface_files.m"
        }
#line 1052 "write_module_interface_files.m"
      }
#line 1052 "write_module_interface_files.m"
    else
#line 1065 "write_module_interface_files.m"
      {
#line 1065 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctors_19;
#line 1059 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1059 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1059 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 0)));
#line 1059 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1059 "write_module_interface_files.m"
          {
#line 1059 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1059 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 1)));
#line 1059 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 2)));
#line 1062 "write_module_interface_files.m"
            {
#line 1062 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1062 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1062 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_40;
#line 1064 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27;

#line 1062 "write_module_interface_files.m"
              {
#line 1062 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_36_36 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56);
              }
#line 1062 "write_module_interface_files.m"
              {
#line 1062 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Ctors_19, parse_tree__write_module_interface_files__V_36_36, &parse_tree__write_module_interface_files__RhsTypeCtors_40);
              }
#line 1063 "write_module_interface_files.m"
              {
#line 1063 "write_module_interface_files.m"
                mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, parse_tree__write_module_interface_files__RhsTypeCtors_40, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25);
              }
#line 1064 "write_module_interface_files.m"
              {
#line 1064 "write_module_interface_files.m"
                mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[9], parse_tree__write_module_interface_files__RhsTypeCtors_40, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
              }
#line 1064 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
#line 1062 "write_module_interface_files.m"
            }
#line 1059 "write_module_interface_files.m"
          }
#line 1059 "write_module_interface_files.m"
        else
#line 1066 "write_module_interface_files.m"
          {
#line 1066 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26;
#line 1066 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1066 "write_module_interface_files.m"
          }
#line 1066 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22;
#line 1065 "write_module_interface_files.m"
      }
#line 1051 "write_module_interface_files.m"
  }
#line 1044 "write_module_interface_files.m"
}

#line 1038 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1038 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1038 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1038 "write_module_interface_files.m"
{
#line 1038 "write_module_interface_files.m"
  {
#line 1038 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1038 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1038 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25;
#line 1038 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27;

#line 1038 "write_module_interface_files.m"
    {
#line 1038 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27);
    }
#line 1038 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23));
#line 1038 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25));
#line 1038 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27));
#line 1038 "write_module_interface_files.m"
  }
#line 1038 "write_module_interface_files.m"
}

#line 1030 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1030 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1030 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20)
#line 1030 "write_module_interface_files.m"
{
#line 1040 "write_module_interface_files.m"
  {
#line 1040 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1040 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefns_14;
#line 1037 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_TypeDefns_14;

#line 1037 "write_module_interface_files.m"
    {
#line 1037 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__ImplTypeMap_9, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_10)), &parse_tree__write_module_interface_files__conv0_TypeDefns_14);
    }
#line 1037 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1037 "write_module_interface_files.m"
      {
#line 1037 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__TypeDefns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_TypeDefns_14);
#line 1037 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1037 "write_module_interface_files.m"
      }
#line 1040 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1038 "write_module_interface_files.m"
      {
#line 1038 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_35_35;
#line 1038 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1038 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1038 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1038 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20;

#line 1038 "write_module_interface_files.m"
        {
#line 1038 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[1]));
#line 1038 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
#line 1038 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1038 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1038 "write_module_interface_files.m"
        }
#line 9017 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_35_35 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 1038 "write_module_interface_files.m"
        {
#line 1038 "write_module_interface_files.m"
          mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__TypeInfo_35_35, parse_tree__write_module_interface_files__TypeInfo_35_35, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__TypeDefns_14, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19)), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
        }
#line 1038 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16);
#line 1038 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18);
#line 1038 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = ((MR_Word) parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
#line 1038 "write_module_interface_files.m"
      }
#line 1040 "write_module_interface_files.m"
    else
#line 1041 "write_module_interface_files.m"
      {
#line 1041 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19;
#line 1041 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17;
#line 1041 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15;
#line 1041 "write_module_interface_files.m"
      }
#line 1040 "write_module_interface_files.m"
  }
#line 1030 "write_module_interface_files.m"
}

#line 987 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 987 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34)
#line 987 "write_module_interface_files.m"
{
#line 996 "write_module_interface_files.m"
  {
#line 996 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 996 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 996 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_13;
#line 996 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 995 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Item_14;
#line 1001 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_40_40;
#line 1001 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1001 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RhsType_18;
#line 1002 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1002 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_V_19_19;

#line 995 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 0)));
#line 995 "write_module_interface_files.m"
    parse_tree__write_module_interface_files___Item_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 1)));
#line 1001 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 1)));
#line 1001 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1001 "write_module_interface_files.m"
      {
#line 1001 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___RhsType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 9107 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 9109 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1002 "write_module_interface_files.m"
        {
#line 1002 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_V_19_19);
        }
#line 1002 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1002 "write_module_interface_files.m"
          {
#line 1002 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) parse_tree__write_module_interface_files__conv0_V_19_19);
#line 1002 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1002 "write_module_interface_files.m"
          }
#line 1001 "write_module_interface_files.m"
      }
#line 1005 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1004 "write_module_interface_files.m"
      {
#line 1004 "write_module_interface_files.m"
        {
#line 1004 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
        }
#line 1004 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1004 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1004 "write_module_interface_files.m"
      }
#line 1005 "write_module_interface_files.m"
    else
#line 1010 "write_module_interface_files.m"
      {
#line 1006 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43;
#line 1006 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_44_44;
#line 1006 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1006 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1006 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1007 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1007 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_V_23_23;

#line 1006 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1006 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1006 "write_module_interface_files.m"
          {
#line 1006 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1006 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1006 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 3)));
#line 9174 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 9176 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeInfo_44_44 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1007 "write_module_interface_files.m"
            {
#line 1007 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_44_44, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv1_V_23_23);
            }
#line 1007 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1007 "write_module_interface_files.m"
              {
#line 1007 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_V_23_23);
#line 1007 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1007 "write_module_interface_files.m"
              }
#line 1006 "write_module_interface_files.m"
          }
#line 1010 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1009 "write_module_interface_files.m"
          {
#line 1009 "write_module_interface_files.m"
            {
#line 1009 "write_module_interface_files.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
            }
#line 1009 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1009 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1009 "write_module_interface_files.m"
          }
#line 1010 "write_module_interface_files.m"
        else
#line 1026 "write_module_interface_files.m"
          {
#line 1026 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_24;
#line 1026 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_25;
#line 1026 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_26;

#line 1011 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 0)));
#line 1011 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1011 "write_module_interface_files.m"
              {
#line 1011 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 1011 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1011 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1018 "write_module_interface_files.m"
                {
#line 1014 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1014 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv2_V_27_27;
#line 1015 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files___NumBits_28;

#line 1014 "write_module_interface_files.m"
                  {
#line 1014 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv2_V_27_27);
                  }
#line 1014 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1014 "write_module_interface_files.m"
                    {
#line 1014 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) parse_tree__write_module_interface_files__conv2_V_27_27);
#line 1014 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1014 "write_module_interface_files.m"
                    }
#line 1014 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1015 "write_module_interface_files.m"
                    {
#line 1015 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_24, &parse_tree__write_module_interface_files___NumBits_28);
                    }
#line 1018 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1017 "write_module_interface_files.m"
                    {
#line 1017 "write_module_interface_files.m"
                      {
#line 1017 "write_module_interface_files.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32);
                      }
#line 1017 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1017 "write_module_interface_files.m"
                    }
#line 1018 "write_module_interface_files.m"
                  else
#line 1023 "write_module_interface_files.m"
                    {
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Ctor_57;
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ExistQTVars_58;
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Constraints_59;
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_61;
#line 819 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_67_67;
#line 829 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Name_60;
#line 829 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Context_62;

#line 827 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                        {
#line 827 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                            {
#line 821 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_24)) == (MR_mktag((MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                              if (parse_tree__write_module_interface_files__succeeded)
#line 827 "write_module_interface_files.m"
                                {
#line 827 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Ctor_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 0)));
#line 827 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                                  if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                                    {
#line 829 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__ExistQTVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 0)));
#line 829 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Constraints_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 1)));
#line 829 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 2)));
#line 829 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 3)));
#line 829 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Context_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 4)));
#line 830 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                                      if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                                        {
#line 831 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                                          if (parse_tree__write_module_interface_files__succeeded)
#line 835 "write_module_interface_files.m"
                                            {
#line 835 "write_module_interface_files.m"
                                              if ((parse_tree__write_module_interface_files__Args_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 835 "write_module_interface_files.m"
                                              else
#line 837 "write_module_interface_files.m"
                                                {
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__ArgType_64;
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_63_63;
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_65_65;
#line 837 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_66_66;

#line 837 "write_module_interface_files.m"
                                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "write_module_interface_files.m"
                                                  if (parse_tree__write_module_interface_files__succeeded)
#line 837 "write_module_interface_files.m"
                                                    {
#line 837 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__ArgType_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 2)));
#line 837 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 3)));
#line 838 "write_module_interface_files.m"
                                                      {
#line 838 "write_module_interface_files.m"
                                                        parse_tree__write_module_interface_files__V_70_70 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__BothTypesMap_11, parse_tree__write_module_interface_files__ArgType_64, parse_tree__write_module_interface_files__V_54_54);
                                                      }
#line 838 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_70_70 == (MR_Integer) 1);
#line 837 "write_module_interface_files.m"
                                                    }
#line 837 "write_module_interface_files.m"
                                                }
#line 835 "write_module_interface_files.m"
                                            }
#line 819 "write_module_interface_files.m"
                                        }
#line 819 "write_module_interface_files.m"
                                    }
#line 827 "write_module_interface_files.m"
                                }
#line 819 "write_module_interface_files.m"
                            }
#line 819 "write_module_interface_files.m"
                        }
#line 1023 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1022 "write_module_interface_files.m"
                        {
#line 1022 "write_module_interface_files.m"
                          {
#line 1022 "write_module_interface_files.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33, parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);
                          }
#line 1022 "write_module_interface_files.m"
                        }
#line 1023 "write_module_interface_files.m"
                      else
#line 1022 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1022 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1023 "write_module_interface_files.m"
                    }
#line 1018 "write_module_interface_files.m"
                }
#line 1011 "write_module_interface_files.m"
              }
#line 1011 "write_module_interface_files.m"
            else
#line 1027 "write_module_interface_files.m"
              {
#line 1027 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1027 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1027 "write_module_interface_files.m"
              }
#line 1027 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29;
#line 1026 "write_module_interface_files.m"
          }
#line 1010 "write_module_interface_files.m"
      }
#line 996 "write_module_interface_files.m"
  }
#line 987 "write_module_interface_files.m"
}

#line 979 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 979 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 979 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 979 "write_module_interface_files.m"
{
#line 979 "write_module_interface_files.m"
  {
#line 979 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20;

#line 979 "write_module_interface_files.m"
    {
#line 979 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20);
    }
#line 979 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 979 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 979 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20));
#line 979 "write_module_interface_files.m"
  }
#line 979 "write_module_interface_files.m"
}

#line 976 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 976 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 976 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 976 "write_module_interface_files.m"
{
#line 976 "write_module_interface_files.m"
  {
#line 976 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 976 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30;
#line 976 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32;
#line 976 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34;

#line 976 "write_module_interface_files.m"
    {
#line 976 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34);
    }
#line 976 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30));
#line 976 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32));
#line 976 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34));
#line 976 "write_module_interface_files.m"
  }
#line 976 "write_module_interface_files.m"
}

#line 968 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 968 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 968 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12)
#line 968 "write_module_interface_files.m"
{
#line 973 "write_module_interface_files.m"
  {
#line 973 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImplTypes_13;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 973 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 975 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14;
#line 975 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15;
#line 975 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10;
#line 979 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16;
#line 979 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17;
#line 979 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv9_Modules_12;

#line 974 "write_module_interface_files.m"
    {
#line 974 "write_module_interface_files.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__ImplTypeMap_8, &parse_tree__write_module_interface_files__ImplTypes_13);
    }
#line 976 "write_module_interface_files.m"
    {
#line 976 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 976 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0]));
#line 976 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1));
#line 976 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 976 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 3) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceTypeMap_7));
#line 976 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 4) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypeMap_9));
#line 976 "write_module_interface_files.m"
    }
#line 977 "write_module_interface_files.m"
    {
#line 977 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 978 "write_module_interface_files.m"
    {
#line 978 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 978 "write_module_interface_files.m"
    {
#line 978 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 9658 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 975 "write_module_interface_files.m"
    {
#line 975 "write_module_interface_files.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__ImplTypes_13, ((MR_Box) (parse_tree__write_module_interface_files__V_19_19)), &parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_20_20)), &parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15, ((MR_Box) (parse_tree__write_module_interface_files__V_21_21)), &parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
    }
#line 975 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14);
#line 975 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15 = ((MR_Word) parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15);
#line 975 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__DummyTypeCtors_10 = ((MR_Word) parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
#line 979 "write_module_interface_files.m"
    {
#line 979 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 979 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 979 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2));
#line 979 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 979 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_8));
#line 979 "write_module_interface_files.m"
    }
#line 981 "write_module_interface_files.m"
    {
#line 981 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 981 "write_module_interface_files.m"
    {
#line 981 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 982 "write_module_interface_files.m"
    {
#line 982 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 979 "write_module_interface_files.m"
    {
#line 979 "write_module_interface_files.m"
      mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_23_23)), &parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__V_24_24)), &parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__V_25_25)), &parse_tree__write_module_interface_files__conv9_Modules_12);
    }
#line 979 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16);
#line 979 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17 = ((MR_Word) parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17);
#line 979 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv9_Modules_12);
#line 985 "write_module_interface_files.m"
    {
#line 985 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15));
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "write_module_interface_files.m"
    }
#line 984 "write_module_interface_files.m"
    {
#line 984 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17));
#line 984 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_29_29));
#line 984 "write_module_interface_files.m"
    }
#line 984 "write_module_interface_files.m"
    {
#line 984 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16));
#line 984 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_28_28));
#line 984 "write_module_interface_files.m"
    }
#line 983 "write_module_interface_files.m"
    {
#line 983 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14));
#line 983 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 983 "write_module_interface_files.m"
    }
#line 983 "write_module_interface_files.m"
    {
#line 983 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__NecessaryTypeCtors_11 = mercury__set__union_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__V_26_26);
    }
#line 973 "write_module_interface_files.m"
  }
#line 968 "write_module_interface_files.m"
}

#line 933 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 933 "write_module_interface_files.m"
{
#line 940 "write_module_interface_files.m"
  {
#line 940 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 940 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_5;

#line 936 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 936 "write_module_interface_files.m"
      {
#line 936 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemTypeDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 937 "write_module_interface_files.m"
        {
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 1)));
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Params_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 2)));
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtor_13;
#line 937 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_14_14;
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 0)));
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 3)));
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 4)));
#line 937 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 5)));
#line 937 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 6)));

#line 938 "write_module_interface_files.m"
          {
#line 938 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_14_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], parse_tree__write_module_interface_files__Params_8);
          }
#line 938 "write_module_interface_files.m"
          {
#line 938 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_13, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_7));
#line 938 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_13, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_14_14));
#line 938 "write_module_interface_files.m"
          }
#line 939 "write_module_interface_files.m"
          {
#line 939 "write_module_interface_files.m"
            return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_13)), parse_tree__write_module_interface_files__NecessaryTypeCtors_3);
          }
#line 937 "write_module_interface_files.m"
        }
#line 936 "write_module_interface_files.m"
      }
#line 936 "write_module_interface_files.m"
    else
#line 941 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 940 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 940 "write_module_interface_files.m"
  }
#line 933 "write_module_interface_files.m"
}

#line 931 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 931 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 931 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 931 "write_module_interface_files.m"
{
#line 931 "write_module_interface_files.m"
  {
#line 931 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 931 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 931 "write_module_interface_files.m"
    {
#line 931 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 931 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 931 "write_module_interface_files.m"
  }
#line 931 "write_module_interface_files.m"
}

#line 927 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 927 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 927 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 927 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 927 "write_module_interface_files.m"
{
#line 930 "write_module_interface_files.m"
  {
#line 930 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 930 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 931 "write_module_interface_files.m"
    {
#line 931 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 931 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[3]));
#line 931 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1));
#line 931 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 931 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryTypeCtors_4));
#line 931 "write_module_interface_files.m"
    }
#line 931 "write_module_interface_files.m"
    {
#line 931 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 931 "write_module_interface_files.m"
      return;
    }
#line 930 "write_module_interface_files.m"
  }
#line 927 "write_module_interface_files.m"
}

#line 899 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 899 "write_module_interface_files.m"
{
#line 918 "write_module_interface_files.m"
  {
#line 918 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 918 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5;

#line 903 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 903 "write_module_interface_files.m"
      {
#line 903 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 2);
#line 904 "write_module_interface_files.m"
        {
#line 904 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 904 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 904 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));
#line 915 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Modules_9;

#line 907 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 907 "write_module_interface_files.m"
            {
#line 907 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Modules_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 1)));
#line 907 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 907 "write_module_interface_files.m"
            }
#line 907 "write_module_interface_files.m"
          else
#line 907 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 906 "write_module_interface_files.m"
              {
#line 906 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Modules_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 1)));
#line 906 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 906 "write_module_interface_files.m"
              }
#line 907 "write_module_interface_files.m"
            else
#line 907 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 915 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 912 "write_module_interface_files.m"
            {
#line 912 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ModuleName_10;
#line 910 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_11_11;

#line 910 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Modules_9)) == (MR_mktag((MR_Integer) 1)));
#line 910 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 910 "write_module_interface_files.m"
                {
#line 910 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Modules_9, (MR_Integer) 0)));
#line 910 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Modules_9, (MR_Integer) 1)));
#line 910 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "write_module_interface_files.m"
                }
#line 912 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 911 "write_module_interface_files.m"
                {
#line 911 "write_module_interface_files.m"
                  {
#line 911 "write_module_interface_files.m"
                    return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_10)), parse_tree__write_module_interface_files__NecessaryImports_3);
                  }
#line 911 "write_module_interface_files.m"
                }
#line 912 "write_module_interface_files.m"
              else
#line 913 "write_module_interface_files.m"
                {
#line 913 "write_module_interface_files.m"
                  {
#line 913 "write_module_interface_files.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.is_not_unnecessary_impl_import\'/2", (MR_String) "non-singleton import or use decl");
                  }
#line 913 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 913 "write_module_interface_files.m"
                }
#line 912 "write_module_interface_files.m"
            }
#line 915 "write_module_interface_files.m"
          else
#line 916 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 904 "write_module_interface_files.m"
        }
#line 903 "write_module_interface_files.m"
      }
#line 903 "write_module_interface_files.m"
    else
#line 919 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 918 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 918 "write_module_interface_files.m"
  }
#line 899 "write_module_interface_files.m"
}

#line 897 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 897 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 897 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 897 "write_module_interface_files.m"
{
#line 897 "write_module_interface_files.m"
  {
#line 897 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 897 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 897 "write_module_interface_files.m"
    {
#line 897 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 897 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 897 "write_module_interface_files.m"
  }
#line 897 "write_module_interface_files.m"
}

#line 893 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 893 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 893 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 893 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 893 "write_module_interface_files.m"
{
#line 896 "write_module_interface_files.m"
  {
#line 896 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 896 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 897 "write_module_interface_files.m"
    {
#line 897 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 897 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[2]));
#line 897 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1));
#line 897 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 897 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryImports_4));
#line 897 "write_module_interface_files.m"
    }
#line 897 "write_module_interface_files.m"
    {
#line 897 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 897 "write_module_interface_files.m"
      return;
    }
#line 896 "write_module_interface_files.m"
  }
#line 893 "write_module_interface_files.m"
}

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 860 "write_module_interface_files.m"
{
#line 860 "write_module_interface_files.m"
  {
#line 860 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 860 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0, 1);
#line 860 "write_module_interface_files.m"
  }
#line 860 "write_module_interface_files.m"
}

#line 861 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 861 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 861 "write_module_interface_files.m"
{
#line 861 "write_module_interface_files.m"
  {
#line 861 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 861 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36);
#line 861 "write_module_interface_files.m"
    {
#line 861 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 861 "write_module_interface_files.m"
      return;
    }
#line 861 "write_module_interface_files.m"
  }
#line 861 "write_module_interface_files.m"
}

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 860 "write_module_interface_files.m"
{
#line 860 "write_module_interface_files.m"
  {
#line 860 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 860 "write_module_interface_files.m"
    {
#line 861 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 829 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Name_46;
#line 829 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Context_48;

#line 861 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 0)));
#line 861 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 1)));
#line 862 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 862 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 862 "write_module_interface_files.m"
        {
#line 862 "write_module_interface_files.m"
          {
#line 862 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 0)));
#line 862 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 1)));
#line 862 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 2)));
#line 862 "write_module_interface_files.m"
          }
#line 860 "write_module_interface_files.m"
          {
#line 827 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 860 "write_module_interface_files.m"
              {
#line 827 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 860 "write_module_interface_files.m"
                  {
#line 827 "write_module_interface_files.m"
                    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17)) == (MR_mktag((MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 827 "write_module_interface_files.m"
                      {
#line 827 "write_module_interface_files.m"
                        {
#line 827 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 0)));
#line 827 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                        }
#line 860 "write_module_interface_files.m"
                        {
#line 827 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "write_module_interface_files.m"
                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 860 "write_module_interface_files.m"
                            {
#line 829 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 0)));
#line 829 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 1)));
#line 829 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 2)));
#line 829 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 3)));
#line 829 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 4)));
#line 830 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "write_module_interface_files.m"
                              if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 860 "write_module_interface_files.m"
                                {
#line 831 "write_module_interface_files.m"
                                  (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "write_module_interface_files.m"
                                  if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 860 "write_module_interface_files.m"
                                    {
#line 864 "write_module_interface_files.m"
                                      {
#line 864 "write_module_interface_files.m"
                                        MR_Word base;
#line 864 "write_module_interface_files.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20 = base;
#line 864 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6));
#line 864 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7));
#line 864 "write_module_interface_files.m"
                                      }
#line 835 "write_module_interface_files.m"
                                      if (((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 835 "write_module_interface_files.m"
                                      else
#line 837 "write_module_interface_files.m"
                                        {
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__ArgType_50;
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 837 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_52_52;

#line 837 "write_module_interface_files.m"
                                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "write_module_interface_files.m"
                                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 837 "write_module_interface_files.m"
                                            {
#line 837 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__ArgType_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 2)));
#line 837 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 3)));
#line 838 "write_module_interface_files.m"
                                              {
#line 838 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__V_56_56 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, parse_tree__write_module_interface_files__ArgType_50, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20);
                                              }
#line 838 "write_module_interface_files.m"
                                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_56_56 == (MR_Integer) 1);
#line 837 "write_module_interface_files.m"
                                            }
#line 837 "write_module_interface_files.m"
                                        }
#line 835 "write_module_interface_files.m"
                                      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 835 "write_module_interface_files.m"
                                        {
#line 835 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 835 "write_module_interface_files.m"
                                          return;
                                        }
#line 860 "write_module_interface_files.m"
                                    }
#line 860 "write_module_interface_files.m"
                                }
#line 860 "write_module_interface_files.m"
                            }
#line 860 "write_module_interface_files.m"
                        }
#line 827 "write_module_interface_files.m"
                      }
#line 860 "write_module_interface_files.m"
                  }
#line 860 "write_module_interface_files.m"
              }
#line 860 "write_module_interface_files.m"
          }
#line 862 "write_module_interface_files.m"
        }
#line 860 "write_module_interface_files.m"
    }
#line 860 "write_module_interface_files.m"
  }
#line 860 "write_module_interface_files.m"
}

#line 860 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 860 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 860 "write_module_interface_files.m"
{
#line 860 "write_module_interface_files.m"
  {
#line 860 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 860 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0) == 0)
#line 860 "write_module_interface_files.m"
      {
#line 860 "write_module_interface_files.m"
        {
#line 860 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_40_40 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 860 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeDefns_14;

#line 860 "write_module_interface_files.m"
          {
#line 860 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, parse_tree__write_module_interface_files__TypeInfo_40_40, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13)), &parse_tree__write_module_interface_files__TypeDefns_14);
          }
#line 860 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 861 "write_module_interface_files.m"
            {
#line 861 "write_module_interface_files.m"
              mercury__list__member_2_p_1(parse_tree__write_module_interface_files__TypeInfo_40_40, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36, parse_tree__write_module_interface_files__TypeDefns_14, parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3, parse_tree__write_module_interface_files__env_ptr);
            }
#line 860 "write_module_interface_files.m"
        }
#line 860 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_FALSE;
#line 860 "write_module_interface_files.m"
      }
#line 860 "write_module_interface_files.m"
    else
#line 860 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 860 "write_module_interface_files.m"
  }
#line 860 "write_module_interface_files.m"
}

#line 841 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 841 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7)
#line 841 "write_module_interface_files.m"
{
#line 841 "write_module_interface_files.m"
  {
#line 841 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s parse_tree__write_module_interface_files__env;

#line 841 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5 = parse_tree__write_module_interface_files__TypeDefnMap_5;
#line 841 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6 = parse_tree__write_module_interface_files__Type_6;
#line 841 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7 = parse_tree__write_module_interface_files__CoveredTypes0_7;
#line 845 "write_module_interface_files.m"
    {
#line 845 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__IsDummyType_8;

#line 845 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)) == (MR_mktag((MR_Integer) 1))))
#line 845 "write_module_interface_files.m"
        {
#line 845 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 0)));
#line 845 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 1)));
#line 845 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files___Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 2)));

#line 846 "write_module_interface_files.m"
          {
#line 846 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7);
          }
#line 849 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 848 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 849 "write_module_interface_files.m"
          else
#line 850 "write_module_interface_files.m"
            {
#line 850 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__Arity_12;
#line 854 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_35_35;

#line 850 "write_module_interface_files.m"
              {
#line 850 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__write_module_interface_files__TypeArgs_10);
              }
#line 851 "write_module_interface_files.m"
              {
#line 851 "write_module_interface_files.m"
                MR_Word base;
#line 851 "write_module_interface_files.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13 = base;
#line 851 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_9));
#line 851 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Arity_12));
#line 851 "write_module_interface_files.m"
              }
#line 853 "write_module_interface_files.m"
              {
#line 853 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_35_35 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13);
              }
#line 854 "write_module_interface_files.m"
              (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_35_35 == (MR_Integer) 0);
#line 857 "write_module_interface_files.m"
              if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 856 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 857 "write_module_interface_files.m"
              else
#line 869 "write_module_interface_files.m"
                {
#line 860 "write_module_interface_files.m"
                  {
#line 860 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(&parse_tree__write_module_interface_files__env);
                  }
#line 869 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 868 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 869 "write_module_interface_files.m"
                  else
#line 870 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 869 "write_module_interface_files.m"
                }
#line 850 "write_module_interface_files.m"
            }
#line 845 "write_module_interface_files.m"
        }
#line 845 "write_module_interface_files.m"
      else
#line 881 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 845 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__IsDummyType_8;
#line 845 "write_module_interface_files.m"
    }
#line 841 "write_module_interface_files.m"
  }
#line 841 "write_module_interface_files.m"
}

#line 775 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 775 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 775 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 775 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16)
#line 775 "write_module_interface_files.m"
{
#line 800 "write_module_interface_files.m"
  {
#line 800 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15)) == (MR_mktag((MR_Integer) 1)));
#line 800 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn0_7;
#line 800 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Ctors_8;
#line 800 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_9;
#line 800 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_10;
#line 781 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn0_6;
#line 781 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 781 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;

#line 781 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 781 "write_module_interface_files.m"
      {
#line 781 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 0)));
#line 781 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 1)));
#line 781 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 781 "write_module_interface_files.m"
          {
#line 781 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 781 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__ItemTypeDefn0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 782 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn0_6)) == (MR_mktag((MR_Integer) 0)));
#line 782 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 782 "write_module_interface_files.m"
              {
#line 782 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 0)));
#line 782 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 1)));
#line 782 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 2)));
#line 782 "write_module_interface_files.m"
              }
#line 781 "write_module_interface_files.m"
          }
#line 781 "write_module_interface_files.m"
      }
#line 800 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 790 "write_module_interface_files.m"
      {
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctor_36;
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ExistQTVars_37;
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Constraints_38;
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Args_40;
#line 819 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 829 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Name_39;
#line 829 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_41;

#line 827 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
          {
#line 827 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
              {
#line 821 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 827 "write_module_interface_files.m"
                  {
#line 827 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Ctor_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 0)));
#line 827 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 1)));
#line 827 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                      {
#line 829 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ExistQTVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_36, (MR_Integer) 0)));
#line 829 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Constraints_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_36, (MR_Integer) 1)));
#line 829 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_36, (MR_Integer) 2)));
#line 829 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_36, (MR_Integer) 3)));
#line 829 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_36, (MR_Integer) 4)));
#line 830 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 819 "write_module_interface_files.m"
                          {
#line 831 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 835 "write_module_interface_files.m"
                              {
#line 835 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Args_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 835 "write_module_interface_files.m"
                                else
#line 837 "write_module_interface_files.m"
                                  {
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__ArgType_43;
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_40, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_40, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 837 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_45_45;

#line 837 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "write_module_interface_files.m"
                                    if (parse_tree__write_module_interface_files__succeeded)
#line 837 "write_module_interface_files.m"
                                      {
#line 837 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 0)));
#line 837 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__ArgType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 1)));
#line 837 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 2)));
#line 837 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_47_47, (MR_Integer) 3)));
#line 838 "write_module_interface_files.m"
                                        {
#line 838 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__V_49_49 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__TypeDefnMap_4, parse_tree__write_module_interface_files__ArgType_43, parse_tree__write_module_interface_files__V_33_33);
                                        }
#line 838 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_49_49 == (MR_Integer) 1);
#line 837 "write_module_interface_files.m"
                                      }
#line 837 "write_module_interface_files.m"
                                  }
#line 835 "write_module_interface_files.m"
                              }
#line 819 "write_module_interface_files.m"
                          }
#line 819 "write_module_interface_files.m"
                      }
#line 827 "write_module_interface_files.m"
                  }
#line 819 "write_module_interface_files.m"
              }
#line 819 "write_module_interface_files.m"
          }
#line 790 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 785 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 790 "write_module_interface_files.m"
        else
#line 795 "write_module_interface_files.m"
          {
#line 795 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Details_12;
#line 795 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Defn_13;
#line 795 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_14;
#line 795 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 793 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__NumBits_11;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 797 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_28_28;
#line 797 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;

#line 791 "write_module_interface_files.m"
            {
#line 791 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_8, &parse_tree__write_module_interface_files__NumBits_11);
            }
#line 793 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 792 "write_module_interface_files.m"
              {
#line 792 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__NumBits_11));
#line 792 "write_module_interface_files.m"
              }
#line 793 "write_module_interface_files.m"
            else
#line 794 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "write_module_interface_files.m"
            {
#line 796 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Defn_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__Defn_13, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Details_12));
#line 796 "write_module_interface_files.m"
            }
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 0)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 1)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 2)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 3)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 4)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 5)));
#line 797 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 6)));
#line 797 "write_module_interface_files.m"
            {
#line 797 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemTypeDefn_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_22_22));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_24_24));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 3) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 4) = ((MR_Box) (parse_tree__write_module_interface_files__V_26_26));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 5) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 797 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 6) = ((MR_Box) (parse_tree__write_module_interface_files__V_28_28));
#line 797 "write_module_interface_files.m"
            }
#line 798 "write_module_interface_files.m"
            {
#line 798 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 798 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_14));
#line 798 "write_module_interface_files.m"
            }
#line 798 "write_module_interface_files.m"
            {
#line 798 "write_module_interface_files.m"
              MR_Word base;
#line 798 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = base;
#line 798 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 798 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "write_module_interface_files.m"
            }
#line 795 "write_module_interface_files.m"
          }
#line 790 "write_module_interface_files.m"
      }
#line 800 "write_module_interface_files.m"
    else
#line 798 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 800 "write_module_interface_files.m"
  }
#line 775 "write_module_interface_files.m"
}

#line 750 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 750 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 750 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 750 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 750 "write_module_interface_files.m"
{
#line 753 "write_module_interface_files.m"
  {
#line 753 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 753 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "write_module_interface_files.m"
      {
#line 753 "write_module_interface_files.m"
        {
#line 753 "write_module_interface_files.m"
          MR_Word base;
#line 753 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 753 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 753 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "write_module_interface_files.m"
        }
#line 753 "write_module_interface_files.m"
      }
#line 753 "write_module_interface_files.m"
    else
#line 754 "write_module_interface_files.m"
      {
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 1)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 2)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 1)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 2)));
#line 754 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_24;
#line 755 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 0)));
#line 755 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 3)));
#line 755 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 4)));
#line 755 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 5)));
#line 755 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 6)));
#line 756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 0)));
#line 756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 3)));
#line 756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 4)));
#line 756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 5)));
#line 756 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 6)));

#line 757 "write_module_interface_files.m"
        {
#line 757 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_24, parse_tree__write_module_interface_files__NewSymName_11, parse_tree__write_module_interface_files__HeadSymName_18);
        }
#line 761 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__CompareSymName_24 == (MR_Integer) 1))
#line 760 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 761 "write_module_interface_files.m"
        else
#line 761 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__CompareSymName_24 == (MR_Integer) 0))
#line 762 "write_module_interface_files.m"
            {
#line 762 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeInfo_31_31 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2];
#line 762 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__NewParamsLength_25;
#line 762 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__HeadParamsLength_26;
#line 762 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Compare_27;

#line 763 "write_module_interface_files.m"
              {
#line 763 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_31_31, parse_tree__write_module_interface_files__NewParams_12, &parse_tree__write_module_interface_files__NewParamsLength_25);
              }
#line 764 "write_module_interface_files.m"
              {
#line 764 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_31_31, parse_tree__write_module_interface_files__HeadParams_19, &parse_tree__write_module_interface_files__HeadParamsLength_26);
              }
#line 765 "write_module_interface_files.m"
              {
#line 765 "write_module_interface_files.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__write_module_interface_files__Compare_27, parse_tree__write_module_interface_files__NewParamsLength_25, parse_tree__write_module_interface_files__HeadParamsLength_26);
              }
#line 766 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Compare_27 == (MR_Integer) 1);
#line 762 "write_module_interface_files.m"
            }
#line 761 "write_module_interface_files.m"
          else
#line 761 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 770 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 769 "write_module_interface_files.m"
          {
#line 769 "write_module_interface_files.m"
            MR_Word base;
#line 769 "write_module_interface_files.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 769 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 769 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_2));
#line 769 "write_module_interface_files.m"
          }
#line 770 "write_module_interface_files.m"
        else
#line 771 "write_module_interface_files.m"
          {
#line 771 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_28;

#line 771 "write_module_interface_files.m"
            {
#line 771 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__New_1, parse_tree__write_module_interface_files__Tail_8, &parse_tree__write_module_interface_files__NewTail_28);
            }
#line 772 "write_module_interface_files.m"
            {
#line 772 "write_module_interface_files.m"
              MR_Word base;
#line 772 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 772 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_7));
#line 772 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_28));
#line 772 "write_module_interface_files.m"
            }
#line 771 "write_module_interface_files.m"
          }
#line 754 "write_module_interface_files.m"
      }
#line 753 "write_module_interface_files.m"
  }
#line 750 "write_module_interface_files.m"
}

#line 733 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_module_spec_4_p_0(
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_1,
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NewModuleSpec_2,
#line 733 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 733 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4)
#line 733 "write_module_interface_files.m"
{
#line 737 "write_module_interface_files.m"
  {
#line 737 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 737 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "write_module_interface_files.m"
      {
#line 737 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__New_7;

#line 738 "write_module_interface_files.m"
        {
#line 738 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__New_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 738 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_1));
#line 738 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewModuleSpec_2));
#line 738 "write_module_interface_files.m"
        }
#line 737 "write_module_interface_files.m"
        {
#line 737 "write_module_interface_files.m"
          MR_Word base;
#line 737 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 737 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_7));
#line 737 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "write_module_interface_files.m"
        }
#line 737 "write_module_interface_files.m"
      }
#line 737 "write_module_interface_files.m"
    else
#line 739 "write_module_interface_files.m"
      {
#line 739 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 739 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 739 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadModuleSpec_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_11, (MR_Integer) 1)));
#line 739 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_16;
#line 740 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_11, (MR_Integer) 0)));

#line 741 "write_module_interface_files.m"
        {
#line 741 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_16, parse_tree__write_module_interface_files__NewModuleSpec_2, parse_tree__write_module_interface_files__HeadModuleSpec_15);
        }
#line 742 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CompareSymName_16 == (MR_Integer) 1);
#line 745 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 743 "write_module_interface_files.m"
          {
#line 743 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__New_17;

#line 743 "write_module_interface_files.m"
            {
#line 743 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__New_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 743 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_1));
#line 743 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewModuleSpec_2));
#line 743 "write_module_interface_files.m"
            }
#line 744 "write_module_interface_files.m"
            {
#line 744 "write_module_interface_files.m"
              MR_Word base;
#line 744 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 744 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_17));
#line 744 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__3_3));
#line 744 "write_module_interface_files.m"
            }
#line 743 "write_module_interface_files.m"
          }
#line 745 "write_module_interface_files.m"
        else
#line 746 "write_module_interface_files.m"
          {
#line 746 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_18;

#line 746 "write_module_interface_files.m"
            {
#line 746 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_1, parse_tree__write_module_interface_files__NewModuleSpec_2, parse_tree__write_module_interface_files__Tail_12, &parse_tree__write_module_interface_files__NewTail_18);
            }
#line 747 "write_module_interface_files.m"
            {
#line 747 "write_module_interface_files.m"
              MR_Word base;
#line 747 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 747 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_11));
#line 747 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_18));
#line 747 "write_module_interface_files.m"
            }
#line 746 "write_module_interface_files.m"
          }
#line 739 "write_module_interface_files.m"
      }
#line 737 "write_module_interface_files.m"
  }
#line 733 "write_module_interface_files.m"
}

#line 681 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9,
#line 681 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10,
#line 681 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11)
#line 681 "write_module_interface_files.m"
{
#line 687 "write_module_interface_files.m"
  while (MR_TRUE)
#line 687 "write_module_interface_files.m"
    {
#line 687 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 687 "write_module_interface_files.m"
      {
#line 687 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 687 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "write_module_interface_files.m"
          {
#line 688 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 688 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 688 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 687 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 687 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 687 "write_module_interface_files.m"
          }
#line 687 "write_module_interface_files.m"
        else
#line 690 "write_module_interface_files.m"
          {
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60;
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61;
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63;
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68;
#line 690 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72;
#line 725 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_34;

#line 691 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_27)) == (MR_mktag((MR_Integer) 2)));
#line 691 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 691 "write_module_interface_files.m"
              {
#line 691 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_34 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_27), (MR_Integer) 2);
#line 692 "write_module_interface_files.m"
                {
#line 692 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 0)));
#line 692 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 1)));
#line 692 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 2)));

#line 700 "write_module_interface_files.m"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 694 "write_module_interface_files.m"
                    {
#line 694 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ImportModules_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 1)));
#line 697 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ModuleSpec_39;
#line 695 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_67_67;

#line 695 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__ImportModules_38)) == (MR_mktag((MR_Integer) 1)));
#line 695 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 695 "write_module_interface_files.m"
                        {
#line 695 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__ModuleSpec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ImportModules_38, (MR_Integer) 0)));
#line 695 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ImportModules_38, (MR_Integer) 1)));
#line 695 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "write_module_interface_files.m"
                        }
#line 697 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 696 "write_module_interface_files.m"
                        {
#line 696 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_36, parse_tree__write_module_interface_files__ModuleSpec_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68);
                        }
#line 697 "write_module_interface_files.m"
                      else
#line 698 "write_module_interface_files.m"
                        {
#line 698 "write_module_interface_files.m"
                          {
#line 698 "write_module_interface_files.m"
                            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.do_standardize_impl_items\'/11", (MR_String) "non-singleton-module import");
#line 698 "write_module_interface_files.m"
                            return;
                          }
#line 698 "write_module_interface_files.m"
                        }
#line 698 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 698 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 698 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 694 "write_module_interface_files.m"
                    }
#line 700 "write_module_interface_files.m"
                  else
#line 700 "write_module_interface_files.m"
                    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 722 "write_module_interface_files.m"
                      {
#line 723 "write_module_interface_files.m"
                        {
#line 723 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 723 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4));
#line 723 "write_module_interface_files.m"
                        }
#line 723 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 723 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 723 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 722 "write_module_interface_files.m"
                      }
#line 700 "write_module_interface_files.m"
                    else
#line 700 "write_module_interface_files.m"
                      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 701 "write_module_interface_files.m"
                        {
#line 701 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__UseModules_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 1)));
#line 704 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__ModuleSpec_79;
#line 702 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_62_62;

#line 702 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__UseModules_40)) == (MR_mktag((MR_Integer) 1)));
#line 702 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 702 "write_module_interface_files.m"
                            {
#line 702 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__ModuleSpec_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__UseModules_40, (MR_Integer) 0)));
#line 702 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__UseModules_40, (MR_Integer) 1)));
#line 702 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "write_module_interface_files.m"
                            }
#line 704 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 703 "write_module_interface_files.m"
                            {
#line 703 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_36, parse_tree__write_module_interface_files__ModuleSpec_79, parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63);
                            }
#line 704 "write_module_interface_files.m"
                          else
#line 705 "write_module_interface_files.m"
                            {
#line 705 "write_module_interface_files.m"
                              {
#line 705 "write_module_interface_files.m"
                                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.do_standardize_impl_items\'/11", (MR_String) "non-singleton-module use");
#line 705 "write_module_interface_files.m"
                                return;
                              }
#line 705 "write_module_interface_files.m"
                            }
#line 705 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 705 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 705 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 701 "write_module_interface_files.m"
                        }
#line 700 "write_module_interface_files.m"
                      else
#line 719 "write_module_interface_files.m"
                        {
#line 720 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = (MR_Integer) 1;
#line 720 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 720 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 720 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 719 "write_module_interface_files.m"
                        }
#line 723 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 692 "write_module_interface_files.m"
                }
#line 691 "write_module_interface_files.m"
              }
#line 691 "write_module_interface_files.m"
            else
#line 727 "write_module_interface_files.m"
              {
#line 727 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_49;

#line 725 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 725 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 725 "write_module_interface_files.m"
                  {
#line 725 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, (MR_Integer) 1)));
#line 726 "write_module_interface_files.m"
                    {
#line 726 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__ItemTypeDefn_49, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72);
                    }
#line 726 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 725 "write_module_interface_files.m"
                  }
#line 725 "write_module_interface_files.m"
                else
#line 728 "write_module_interface_files.m"
                  {
#line 728 "write_module_interface_files.m"
                    {
#line 728 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 728 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4));
#line 728 "write_module_interface_files.m"
                    }
#line 728 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 728 "write_module_interface_files.m"
                  }
#line 728 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 728 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 728 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 727 "write_module_interface_files.m"
              }
#line 730 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 730 "write_module_interface_files.m"
            {
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_28;
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61;
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60;
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68;
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0__tmp_copy_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63;
#line 730 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72;

#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_10;
#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0__tmp_copy_8;
#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0__tmp_copy_6;
#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_4;
#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0__tmp_copy_2;
#line 730 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 730 "write_module_interface_files.m"
            }
#line 730 "write_module_interface_files.m"
            continue;
#line 690 "write_module_interface_files.m"
          }
#line 687 "write_module_interface_files.m"
      }
#line 687 "write_module_interface_files.m"
      break;
#line 687 "write_module_interface_files.m"
    }
#line 681 "write_module_interface_files.m"
}

#line 673 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(
#line 673 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3)
#line 673 "write_module_interface_files.m"
{
#line 675 "write_module_interface_files.m"
  {
#line 675 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_4;
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 0)));
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 1)));
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_7;
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_8;
#line 675 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_9_9;

#line 677 "write_module_interface_files.m"
    {
#line 677 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleSpec_6));
#line 677 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "write_module_interface_files.m"
    }
#line 677 "write_module_interface_files.m"
    {
#line 677 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 677 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_9_9));
#line 677 "write_module_interface_files.m"
    }
#line 678 "write_module_interface_files.m"
    {
#line 678 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 678 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_7));
#line 678 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 678 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 2) = ((MR_Box) ((MR_Integer) -1));
#line 678 "write_module_interface_files.m"
    }
#line 679 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_4 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_8);
#line 675 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_4;
#line 675 "write_module_interface_files.m"
  }
#line 673 "write_module_interface_files.m"
}

#line 665 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(
#line 665 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3)
#line 665 "write_module_interface_files.m"
{
#line 667 "write_module_interface_files.m"
  {
#line 667 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_4;
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 0)));
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 1)));
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_7;
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_8;
#line 667 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_9_9;

#line 669 "write_module_interface_files.m"
    {
#line 669 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleSpec_6));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "write_module_interface_files.m"
    }
#line 669 "write_module_interface_files.m"
    {
#line 669 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_9_9));
#line 669 "write_module_interface_files.m"
    }
#line 670 "write_module_interface_files.m"
    {
#line 670 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_7));
#line 670 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 670 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 2) = ((MR_Box) ((MR_Integer) -1));
#line 670 "write_module_interface_files.m"
    }
#line 671 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_4 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_8);
#line 667 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_4;
#line 667 "write_module_interface_files.m"
  }
#line 665 "write_module_interface_files.m"
}

#line 661 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 661 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3)
#line 661 "write_module_interface_files.m"
{
#line 663 "write_module_interface_files.m"
  {
#line 663 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 663 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__HeadVar__2_2;

#line 663 "write_module_interface_files.m"
    {
#line 663 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 663 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_3));
#line 663 "write_module_interface_files.m"
    }
#line 663 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__HeadVar__2_2;
#line 663 "write_module_interface_files.m"
  }
#line 661 "write_module_interface_files.m"
}

#line 656 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 656 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 656 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 656 "write_module_interface_files.m"
{
#line 656 "write_module_interface_files.m"
  {
#line 656 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 656 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 656 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__2_2;

#line 656 "write_module_interface_files.m"
    {
#line 656 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv2_HeadVar__2_2 = parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 656 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__2_2));
#line 656 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 656 "write_module_interface_files.m"
  }
#line 656 "write_module_interface_files.m"
}

#line 655 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 655 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 655 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 655 "write_module_interface_files.m"
{
#line 655 "write_module_interface_files.m"
  {
#line 655 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 655 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 655 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_Item_4;

#line 655 "write_module_interface_files.m"
    {
#line 655 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv1_Item_4 = parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 655 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_Item_4));
#line 655 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 655 "write_module_interface_files.m"
  }
#line 655 "write_module_interface_files.m"
}

#line 654 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 654 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 654 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 654 "write_module_interface_files.m"
{
#line 654 "write_module_interface_files.m"
  {
#line 654 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 654 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 654 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Item_4;

#line 654 "write_module_interface_files.m"
    {
#line 654 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv0_Item_4 = parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 654 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Item_4));
#line 654 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 654 "write_module_interface_files.m"
  }
#line 654 "write_module_interface_files.m"
}

#line 640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 640 "write_module_interface_files.m"
{
#line 642 "write_module_interface_files.m"
  {
#line 642 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 642 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Unexpected_5;
#line 642 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevRemainderItems_6;
#line 642 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleSpecs_7;
#line 642 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleSpecs_8;
#line 642 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnInfos_9;

#line 643 "write_module_interface_files.m"
    {
#line 643 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 0, &parse_tree__write_module_interface_files__Unexpected_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevRemainderItems_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__ImportModuleSpecs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__UseModuleSpecs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__TypeDefnInfos_9);
    }
#line 651 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__Unexpected_5 == (MR_Integer) 0))
#line 652 "write_module_interface_files.m"
      {
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RemainderItems_10;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImportItems_11;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__UseItems_12;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeDefnItems_13;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 652 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;

#line 653 "write_module_interface_files.m"
        {
#line 653 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__RevRemainderItems_6, &parse_tree__write_module_interface_files__RemainderItems_10);
        }
#line 11820 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_specifier_in_defn_0;
#line 654 "write_module_interface_files.m"
        {
#line 654 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ImportItems_11 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[5], parse_tree__write_module_interface_files__ImportModuleSpecs_7);
        }
#line 655 "write_module_interface_files.m"
        {
#line 655 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__UseItems_12 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[6], parse_tree__write_module_interface_files__UseModuleSpecs_8);
        }
#line 656 "write_module_interface_files.m"
        {
#line 656 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__TypeDefnItems_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[7], parse_tree__write_module_interface_files__TypeDefnInfos_9);
        }
#line 657 "write_module_interface_files.m"
        {
#line 657 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RemainderItems_10));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "write_module_interface_files.m"
        }
#line 657 "write_module_interface_files.m"
        {
#line 657 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 0) = ((MR_Box) (parse_tree__write_module_interface_files__TypeDefnItems_13));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 657 "write_module_interface_files.m"
        }
#line 657 "write_module_interface_files.m"
        {
#line 657 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 0) = ((MR_Box) (parse_tree__write_module_interface_files__UseItems_12));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_24_24));
#line 657 "write_module_interface_files.m"
        }
#line 657 "write_module_interface_files.m"
        {
#line 657 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImportItems_11));
#line 657 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 657 "write_module_interface_files.m"
        }
#line 657 "write_module_interface_files.m"
        {
#line 657 "write_module_interface_files.m"
          mercury__list__condense_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__Items_4);
#line 657 "write_module_interface_files.m"
          return;
        }
#line 652 "write_module_interface_files.m"
      }
#line 651 "write_module_interface_files.m"
    else
#line 646 "write_module_interface_files.m"
      {
#line 647 "write_module_interface_files.m"
        {
#line 647 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.standardize_impl_items\'/2", (MR_String) "unexpected items");
#line 647 "write_module_interface_files.m"
          return;
        }
#line 646 "write_module_interface_files.m"
      }
#line 642 "write_module_interface_files.m"
  }
#line 640 "write_module_interface_files.m"
}

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_6(
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 607 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 607 "write_module_interface_files.m"
{
#line 607 "write_module_interface_files.m"
  {
#line 607 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv5_HeadVar__5_61;

#line 607 "write_module_interface_files.m"
    {
#line 607 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv5_HeadVar__5_61);
    }
#line 607 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv5_HeadVar__5_61));
#line 607 "write_module_interface_files.m"
  }
#line 607 "write_module_interface_files.m"
}

#line 601 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_5(
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 601 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 601 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 601 "write_module_interface_files.m"
{
#line 601 "write_module_interface_files.m"
  {
#line 601 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_HeadVar__3_54;

#line 601 "write_module_interface_files.m"
    {
#line 601 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__601__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_HeadVar__3_54);
    }
#line 601 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_HeadVar__3_54));
#line 601 "write_module_interface_files.m"
  }
#line 601 "write_module_interface_files.m"
}

#line 593 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_4(
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 593 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 593 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 593 "write_module_interface_files.m"
{
#line 593 "write_module_interface_files.m"
  {
#line 593 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 593 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__3_47;

#line 593 "write_module_interface_files.m"
    {
#line 593 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__593__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_HeadVar__3_47);
    }
#line 593 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__3_47));
#line 593 "write_module_interface_files.m"
  }
#line 593 "write_module_interface_files.m"
}

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2(
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 581 "write_module_interface_files.m"
{
#line 581 "write_module_interface_files.m"
  {
#line 581 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 581 "write_module_interface_files.m"
    *((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41));
#line 581 "write_module_interface_files.m"
    {
#line 581 "write_module_interface_files.m"
      ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont)((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr);
#line 581 "write_module_interface_files.m"
      return;
    }
#line 581 "write_module_interface_files.m"
  }
#line 581 "write_module_interface_files.m"
}

#line 581 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3(
#line 581 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 581 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 581 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 581 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr)
#line 581 "write_module_interface_files.m"
{
#line 581 "write_module_interface_files.m"
  {
#line 581 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s parse_tree__write_module_interface_files__env;

#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1 = parse_tree__write_module_interface_files__wrapper_arg_1;
#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont = parse_tree__write_module_interface_files__cont;
#line 581 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr = parse_tree__write_module_interface_files__cont_env_ptr;
#line 581 "write_module_interface_files.m"
    {
#line 581 "write_module_interface_files.m"
      MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 581 "write_module_interface_files.m"
      {
#line 581 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__581__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41, parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2, &parse_tree__write_module_interface_files__env);
      }
#line 581 "write_module_interface_files.m"
    }
#line 581 "write_module_interface_files.m"
  }
#line 581 "write_module_interface_files.m"
}

#line 574 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1(
#line 574 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 574 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 574 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2)
#line 574 "write_module_interface_files.m"
{
#line 574 "write_module_interface_files.m"
  {
#line 574 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 574 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16;

#line 574 "write_module_interface_files.m"
    {
#line 574 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16);
    }
#line 574 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16));
#line 574 "write_module_interface_files.m"
  }
#line 574 "write_module_interface_files.m"
}

#line 547 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(
#line 547 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 547 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 547 "write_module_interface_files.m"
{
#line 552 "write_module_interface_files.m"
  {
#line 552 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_91_91;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_96_96;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_8;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__BothTypesMap_9;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeImplImports_12;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryImplImports_14;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems_30;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_39_39;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_64_64;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68;
#line 552 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69;
#line 598 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49;
#line 612 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63;

#line 551 "write_module_interface_files.m"
    {
#line 551 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_5_p_0(parse_tree__write_module_interface_files__Items0_3, &parse_tree__write_module_interface_files__IntItems0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38);
    }
#line 12172 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 553 "write_module_interface_files.m"
    {
#line 553 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__BothTypesMap_9 = mercury__multi_map__merge_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38);
    }
#line 558 "write_module_interface_files.m"
    {
#line 558 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38, parse_tree__write_module_interface_files__BothTypesMap_9, &parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, &parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11, &parse_tree__write_module_interface_files__NecessaryTypeImplImports_12);
    }
#line 566 "write_module_interface_files.m"
    {
#line 566 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36, &parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13);
    }
#line 569 "write_module_interface_files.m"
    {
#line 569 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__NecessaryImplImports_14 = mercury__set__union_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_module_interface_files__NecessaryTypeImplImports_12, parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13);
    }
#line 574 "write_module_interface_files.m"
    {
#line 574 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 574 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[0]));
#line 574 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1));
#line 574 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 3) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypesMap_9));
#line 574 "write_module_interface_files.m"
    }
#line 12208 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_96_96 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 574 "write_module_interface_files.m"
    {
#line 574 "write_module_interface_files.m"
      mercury__map__map_values_only_3_p_0(parse_tree__write_module_interface_files__TypeInfo_96_96, parse_tree__write_module_interface_files__TypeInfo_96_96, parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__V_39_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40);
    }
#line 581 "write_module_interface_files.m"
    {
#line 581 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 581 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[1]));
#line 581 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3));
#line 581 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 581 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 3) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37));
#line 581 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 4) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40));
#line 581 "write_module_interface_files.m"
    }
#line 592 "write_module_interface_files.m"
    {
#line 592 "write_module_interface_files.m"
      mercury__solutions__solutions_2_p_1(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, &parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22);
    }
#line 598 "write_module_interface_files.m"
    {
#line 598 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49);
    }
#line 598 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49);
#line 612 "write_module_interface_files.m"
    {
#line 612 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__TypeInfo_96_96, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_6[0], parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63);
    }
#line 612 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63);
#line 614 "write_module_interface_files.m"
    {
#line 614 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_64_64 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 614 "write_module_interface_files.m"
    {
#line 614 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntItems_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_30, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_64_64));
#line 614 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_30, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems0_8));
#line 614 "write_module_interface_files.m"
    }
#line 616 "write_module_interface_files.m"
    {
#line 616 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66);
    }
#line 618 "write_module_interface_files.m"
    {
#line 618 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(parse_tree__write_module_interface_files__NecessaryImplImports_14, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67);
    }
#line 619 "write_module_interface_files.m"
    {
#line 619 "write_module_interface_files.m"
      mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11, &parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31);
    }
#line 621 "write_module_interface_files.m"
    {
#line 621 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68);
    }
#line 622 "write_module_interface_files.m"
    {
#line 622 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69);
    }
#line 626 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__Items_4 = parse_tree__write_module_interface_files__IntItems_30;
#line 626 "write_module_interface_files.m"
    else
#line 627 "write_module_interface_files.m"
      {
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__StdImplItems_34;
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImplSectionItem_35;
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_72_72;
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_73_73;
#line 627 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_75_75;

#line 628 "write_module_interface_files.m"
        {
#line 628 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69, &parse_tree__write_module_interface_files__StdImplItems_34);
        }
#line 629 "write_module_interface_files.m"
        {
#line 629 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ImplSectionItem_35 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 630 "write_module_interface_files.m"
        {
#line 630 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImplSectionItem_35));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "write_module_interface_files.m"
        }
#line 630 "write_module_interface_files.m"
        {
#line 630 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_75_75, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdImplItems_34));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "write_module_interface_files.m"
        }
#line 630 "write_module_interface_files.m"
        {
#line 630 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_73_73));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_75_75));
#line 630 "write_module_interface_files.m"
        }
#line 630 "write_module_interface_files.m"
        {
#line 630 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_30));
#line 630 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_72_72));
#line 630 "write_module_interface_files.m"
        }
#line 630 "write_module_interface_files.m"
        {
#line 630 "write_module_interface_files.m"
          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_71_71, parse_tree__write_module_interface_files__Items_4);
#line 630 "write_module_interface_files.m"
          return;
        }
#line 627 "write_module_interface_files.m"
      }
#line 552 "write_module_interface_files.m"
  }
#line 547 "write_module_interface_files.m"
}

#line 528 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(
#line 528 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 528 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 528 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 528 "write_module_interface_files.m"
{
#line 531 "write_module_interface_files.m"
  while (MR_TRUE)
#line 531 "write_module_interface_files.m"
    {
#line 531 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 531 "write_module_interface_files.m"
      {
#line 531 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 531 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 531 "write_module_interface_files.m"
        else
#line 532 "write_module_interface_files.m"
          {
#line 532 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;
#line 536 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPromise_10;
#line 536 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 537 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 537 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 537 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13;
#line 537 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14;
#line 537 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_15_15;

#line 536 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 536 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 536 "write_module_interface_files.m"
              {
#line 536 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemPromise_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 1)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 0)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 1)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 2)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 3)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 4)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 5)));
#line 537 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == (MR_Integer) 3);
#line 536 "write_module_interface_files.m"
              }
#line 540 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 537 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 540 "write_module_interface_files.m"
            else
#line 541 "write_module_interface_files.m"
              {
#line 541 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 541 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 541 "write_module_interface_files.m"
              }
#line 543 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 543 "write_module_interface_files.m"
            {
#line 543 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 543 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;

#line 543 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 543 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 543 "write_module_interface_files.m"
            }
#line 543 "write_module_interface_files.m"
            continue;
#line 532 "write_module_interface_files.m"
          }
#line 531 "write_module_interface_files.m"
      }
#line 531 "write_module_interface_files.m"
      break;
#line 531 "write_module_interface_files.m"
    }
#line 528 "write_module_interface_files.m"
}

#line 468 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(
#line 468 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 468 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 468 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 468 "write_module_interface_files.m"
{
#line 471 "write_module_interface_files.m"
  while (MR_TRUE)
#line 471 "write_module_interface_files.m"
    {
#line 471 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 471 "write_module_interface_files.m"
      {
#line 471 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 471 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 471 "write_module_interface_files.m"
        else
#line 472 "write_module_interface_files.m"
          {
#line 472 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));

#line 500 "write_module_interface_files.m"
            if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 2))))
#line 474 "write_module_interface_files.m"
              {
#line 474 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_7), (MR_Integer) 2);
#line 474 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 0)));
#line 475 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 1)));
#line 475 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 2)));

#line 483 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__ModuleDefn_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 479 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 483 "write_module_interface_files.m"
                else
#line 483 "write_module_interface_files.m"
                  if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_11)) == (MR_mktag((MR_Integer) 1))))
#line 477 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 483 "write_module_interface_files.m"
                  else
#line 483 "write_module_interface_files.m"
                    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_11)) == (MR_mktag((MR_Integer) 2))))
#line 478 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 483 "write_module_interface_files.m"
                    else
#line 496 "write_module_interface_files.m"
                      {
#line 496 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;

#line 497 "write_module_interface_files.m"
                        {
#line 497 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 497 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 497 "write_module_interface_files.m"
                        }
#line 498 "write_module_interface_files.m"
                        /* direct tailcall eliminated */
#line 498 "write_module_interface_files.m"
                        {
#line 498 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 498 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;

#line 498 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 498 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 498 "write_module_interface_files.m"
                        }
#line 498 "write_module_interface_files.m"
                        continue;
#line 496 "write_module_interface_files.m"
                      }
#line 474 "write_module_interface_files.m"
              }
#line 500 "write_module_interface_files.m"
            else
#line 517 "write_module_interface_files.m"
              {
#line 517 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;

#line 518 "write_module_interface_files.m"
                {
#line 518 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 518 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 518 "write_module_interface_files.m"
                }
#line 519 "write_module_interface_files.m"
                /* direct tailcall eliminated */
#line 519 "write_module_interface_files.m"
                {
#line 519 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 519 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;

#line 519 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 519 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 519 "write_module_interface_files.m"
                }
#line 519 "write_module_interface_files.m"
                continue;
#line 517 "write_module_interface_files.m"
              }
#line 472 "write_module_interface_files.m"
          }
#line 471 "write_module_interface_files.m"
      }
#line 471 "write_module_interface_files.m"
      break;
#line 471 "write_module_interface_files.m"
    }
#line 468 "write_module_interface_files.m"
}

#line 455 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(
#line 455 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 455 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 455 "write_module_interface_files.m"
{
#line 458 "write_module_interface_files.m"
  {
#line 458 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 458 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_5;

#line 461 "write_module_interface_files.m"
    {
#line 461 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_5);
    }
#line 462 "write_module_interface_files.m"
    {
#line 462 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(parse_tree__write_module_interface_files__RevItems_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__write_module_interface_files__Items_4);
#line 462 "write_module_interface_files.m"
      return;
    }
#line 458 "write_module_interface_files.m"
  }
#line 455 "write_module_interface_files.m"
}

#line 245 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_8_p_0(
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Section_49,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53)
#line 245 "write_module_interface_files.m"
{
#line 277 "write_module_interface_files.m"
  {
#line 277 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 2)));
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55;
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56;
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_58_58;
#line 252 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_14;
#line 252 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_15;
#line 253 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 253 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_17_17;

#line 252 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 252 "write_module_interface_files.m"
      {
#line 252 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_14 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_10), (MR_Integer) 2);
#line 253 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_14, (MR_Integer) 0)));
#line 253 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_14, (MR_Integer) 1)));
#line 253 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_14, (MR_Integer) 2)));
#line 257 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__ModuleDefn_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 258 "write_module_interface_files.m"
          {
#line 259 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__STATE_VARIABLE_Section_58_58 = (MR_Integer) 0;
#line 259 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 259 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52;
#line 258 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 258 "write_module_interface_files.m"
          }
#line 257 "write_module_interface_files.m"
        else
#line 257 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__ModuleDefn_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "write_module_interface_files.m"
            {
#line 256 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Section_58_58 = (MR_Integer) 1;
#line 256 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 256 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52;
#line 255 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 255 "write_module_interface_files.m"
            }
#line 257 "write_module_interface_files.m"
          else
#line 257 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 261 "write_module_interface_files.m"
              {
#line 270 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48 == (MR_Integer) 0))
#line 271 "write_module_interface_files.m"
                  {
#line 272 "write_module_interface_files.m"
                    {
#line 272 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 272 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52));
#line 272 "write_module_interface_files.m"
                    }
#line 272 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 271 "write_module_interface_files.m"
                  }
#line 270 "write_module_interface_files.m"
                else
#line 267 "write_module_interface_files.m"
                  {
#line 268 "write_module_interface_files.m"
                    {
#line 268 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 268 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50));
#line 268 "write_module_interface_files.m"
                    }
#line 269 "write_module_interface_files.m"
                    {
#line 269 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 269 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52));
#line 269 "write_module_interface_files.m"
                    }
#line 267 "write_module_interface_files.m"
                  }
#line 272 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_Section_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48;
#line 261 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 261 "write_module_interface_files.m"
              }
#line 257 "write_module_interface_files.m"
            else
#line 257 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 252 "write_module_interface_files.m"
      }
#line 277 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 276 "write_module_interface_files.m"
      {
#line 276 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_56_56;
#line 276 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_55_55;
#line 276 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Section_49 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_58_58;
#line 276 "write_module_interface_files.m"
      }
#line 277 "write_module_interface_files.m"
    else
#line 291 "write_module_interface_files.m"
      {
#line 280 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 279 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 280 "write_module_interface_files.m"
        else
#line 280 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 287 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 280 "write_module_interface_files.m"
          else
#line 280 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 285 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 280 "write_module_interface_files.m"
            else
#line 280 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 281 "write_module_interface_files.m"
                {
#line 281 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemPragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 281 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Pragma_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 1)));
#line 281 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 282 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 0)));
#line 282 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 2)));
#line 282 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 3)));

#line 283 "write_module_interface_files.m"
                  {
#line 283 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_59_59 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_22);
                  }
#line 283 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_59_59 == (MR_Integer) 0);
#line 281 "write_module_interface_files.m"
                }
#line 280 "write_module_interface_files.m"
              else
#line 280 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 291 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 290 "write_module_interface_files.m"
          {
#line 290 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52;
#line 290 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 290 "write_module_interface_files.m"
          }
#line 291 "write_module_interface_files.m"
        else
#line 334 "write_module_interface_files.m"
          {
#line 334 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemMutable_27;

#line 292 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 292 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 292 "write_module_interface_files.m"
              {
#line 292 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemMutable_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 295 "write_module_interface_files.m"
                {
#line 295 "write_module_interface_files.m"
                  MR_String parse_tree__write_module_interface_files__MutableName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 0)));
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 1)));
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Inst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 3)));
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Attrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 4)));
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 6)));
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ConstantInterface_36;
#line 295 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ReplacementItems_39;
#line 294 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files___Value_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 2)));
#line 294 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files___Varset_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 5)));
#line 294 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files___SeqNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemMutable_27, (MR_Integer) 7)));

#line 296 "write_module_interface_files.m"
                  {
#line 296 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ConstantInterface_36 = parse_tree__prog_item__mutable_var_constant_1_f_0(parse_tree__write_module_interface_files__Attrs_32);
                  }
#line 305 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__ConstantInterface_36 == (MR_Integer) 0))
#line 306 "write_module_interface_files.m"
                    {
#line 306 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdGetPredDeclItem_40;
#line 306 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdSetPredDeclItem_41;
#line 306 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__IOStateInterface_42;

#line 307 "write_module_interface_files.m"
                      {
#line 307 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdGetPredDeclItem_40 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 309 "write_module_interface_files.m"
                      {
#line 309 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdSetPredDeclItem_41 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 311 "write_module_interface_files.m"
                      {
#line 311 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__IOStateInterface_42 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(parse_tree__write_module_interface_files__Attrs_32);
                      }
#line 321 "write_module_interface_files.m"
                      if ((parse_tree__write_module_interface_files__IOStateInterface_42 == (MR_Integer) 0))
#line 322 "write_module_interface_files.m"
                        {
#line 322 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_60_60;

#line 324 "write_module_interface_files.m"
                          {
#line 324 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_41));
#line 324 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "write_module_interface_files.m"
                          }
#line 324 "write_module_interface_files.m"
                          {
#line 324 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ReplacementItems_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_40));
#line 324 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 324 "write_module_interface_files.m"
                          }
#line 322 "write_module_interface_files.m"
                        }
#line 321 "write_module_interface_files.m"
                      else
#line 313 "write_module_interface_files.m"
                        {
#line 313 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__PureGetPredDeclItem_43;
#line 313 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__PureSetPredDeclItem_44;
#line 313 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_62_62;
#line 313 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_63_63;
#line 313 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_64_64;

#line 314 "write_module_interface_files.m"
                          {
#line 314 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__PureGetPredDeclItem_43 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                          }
#line 316 "write_module_interface_files.m"
                          {
#line 316 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__PureSetPredDeclItem_44 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                          }
#line 320 "write_module_interface_files.m"
                          {
#line 320 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_64_64, 0) = ((MR_Box) (parse_tree__write_module_interface_files__PureSetPredDeclItem_44));
#line 320 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "write_module_interface_files.m"
                          }
#line 320 "write_module_interface_files.m"
                          {
#line 320 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 0) = ((MR_Box) (parse_tree__write_module_interface_files__PureGetPredDeclItem_43));
#line 320 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_64_64));
#line 320 "write_module_interface_files.m"
                          }
#line 319 "write_module_interface_files.m"
                          {
#line 319 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_41));
#line 319 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_63_63));
#line 319 "write_module_interface_files.m"
                          }
#line 319 "write_module_interface_files.m"
                          {
#line 319 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ReplacementItems_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_40));
#line 319 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_62_62));
#line 319 "write_module_interface_files.m"
                          }
#line 313 "write_module_interface_files.m"
                        }
#line 306 "write_module_interface_files.m"
                    }
#line 305 "write_module_interface_files.m"
                  else
#line 298 "write_module_interface_files.m"
                    {
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantGetPredDeclItem_37;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantSetPredDeclItem_38;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_66_66;

#line 299 "write_module_interface_files.m"
                      {
#line 299 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantGetPredDeclItem_37 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 301 "write_module_interface_files.m"
                      {
#line 301 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantSetPredDeclItem_38 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 304 "write_module_interface_files.m"
                      {
#line 304 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_66_66, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_38));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "write_module_interface_files.m"
                      }
#line 304 "write_module_interface_files.m"
                      {
#line 304 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ReplacementItems_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_37));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_66_66));
#line 304 "write_module_interface_files.m"
                      }
#line 298 "write_module_interface_files.m"
                    }
#line 330 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48 == (MR_Integer) 0))
#line 331 "write_module_interface_files.m"
                    {
#line 332 "write_module_interface_files.m"
                      {
#line 332 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__ReplacementItems_39, parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52);
                      }
#line 332 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 331 "write_module_interface_files.m"
                    }
#line 330 "write_module_interface_files.m"
                  else
#line 328 "write_module_interface_files.m"
                    {
#line 329 "write_module_interface_files.m"
                      {
#line 329 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__ReplacementItems_39, parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50);
                      }
#line 329 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52;
#line 328 "write_module_interface_files.m"
                    }
#line 295 "write_module_interface_files.m"
                }
#line 292 "write_module_interface_files.m"
              }
#line 292 "write_module_interface_files.m"
            else
#line 340 "write_module_interface_files.m"
              {
#line 340 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__InsertedItem_47;
#line 338 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__InstanceInfo0_45;

#line 335 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 335 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 335 "write_module_interface_files.m"
                  {
#line 335 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__InstanceInfo0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 336 "write_module_interface_files.m"
                    {
#line 336 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__InstanceInfo_46;

#line 336 "write_module_interface_files.m"
                      {
#line 336 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__InstanceInfo_46 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__write_module_interface_files__InstanceInfo0_45);
                      }
#line 337 "write_module_interface_files.m"
                      {
#line 337 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__InsertedItem_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__InsertedItem_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 337 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__InsertedItem_47, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InstanceInfo_46));
#line 337 "write_module_interface_files.m"
                      }
#line 336 "write_module_interface_files.m"
                    }
#line 335 "write_module_interface_files.m"
                  }
#line 335 "write_module_interface_files.m"
                else
#line 339 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__InsertedItem_47 = parse_tree__write_module_interface_files__Item_10;
#line 344 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48 == (MR_Integer) 0))
#line 345 "write_module_interface_files.m"
                  {
#line 346 "write_module_interface_files.m"
                    {
#line 346 "write_module_interface_files.m"
                      MR_Word base;
#line 346 "write_module_interface_files.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = base;
#line 346 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__InsertedItem_47));
#line 346 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52));
#line 346 "write_module_interface_files.m"
                    }
#line 346 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50;
#line 345 "write_module_interface_files.m"
                  }
#line 344 "write_module_interface_files.m"
                else
#line 342 "write_module_interface_files.m"
                  {
#line 343 "write_module_interface_files.m"
                    {
#line 343 "write_module_interface_files.m"
                      MR_Word base;
#line 343 "write_module_interface_files.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_51 = base;
#line 343 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__InsertedItem_47));
#line 343 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_50));
#line 343 "write_module_interface_files.m"
                    }
#line 343 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_53 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_52;
#line 342 "write_module_interface_files.m"
                  }
#line 340 "write_module_interface_files.m"
              }
#line 334 "write_module_interface_files.m"
          }
#line 346 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Section_49 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_48;
#line 291 "write_module_interface_files.m"
      }
#line 277 "write_module_interface_files.m"
  }
#line 245 "write_module_interface_files.m"
}

#line 232 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_4,
#line 232 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_5,
#line 232 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_6,
#line 232 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_7)
#line 232 "write_module_interface_files.m"
{
#line 236 "write_module_interface_files.m"
  while (MR_TRUE)
#line 236 "write_module_interface_files.m"
    {
#line 236 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 236 "write_module_interface_files.m"
      {
#line 236 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 236 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "write_module_interface_files.m"
          {
#line 237 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_6;
#line 237 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_4;
#line 236 "write_module_interface_files.m"
          }
#line 236 "write_module_interface_files.m"
        else
#line 239 "write_module_interface_files.m"
          {
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_27_27;
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_28_28;
#line 239 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_29_29;

#line 240 "write_module_interface_files.m"
            {
#line 240 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_item_for_private_interface_8_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Item_17, parse_tree__write_module_interface_files__HeadVar__3_3, &parse_tree__write_module_interface_files__STATE_VARIABLE_Section_27_27, parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_4, &parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_28_28, parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_29_29);
            }
#line 242 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 242 "write_module_interface_files.m"
            {
#line 242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_18;
#line 242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_27_27;
#line 242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_28_28;
#line 242 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_29_29;

#line 242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_6;
#line 242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_4;
#line 242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__3_3 = parse_tree__write_module_interface_files__HeadVar__3__tmp_copy_3;
#line 242 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 242 "write_module_interface_files.m"
            }
#line 242 "write_module_interface_files.m"
            continue;
#line 239 "write_module_interface_files.m"
          }
#line 236 "write_module_interface_files.m"
      }
#line 236 "write_module_interface_files.m"
      break;
#line 236 "write_module_interface_files.m"
    }
#line 232 "write_module_interface_files.m"
}

#line 99 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_2_p_0(
#line 99 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 99 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 99 "write_module_interface_files.m"
{
#line 464 "write_module_interface_files.m"
  {
#line 464 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 464 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_5;

#line 465 "write_module_interface_files.m"
    {
#line 465 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_5);
    }
#line 466 "write_module_interface_files.m"
    {
#line 466 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_5, parse_tree__write_module_interface_files__Items_4);
#line 466 "write_module_interface_files.m"
      return;
    }
#line 464 "write_module_interface_files.m"
  }
#line 99 "write_module_interface_files.m"
}

#line 91 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_6_p_0(
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_7,
#line 91 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_8,
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 91 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_10)
#line 91 "write_module_interface_files.m"
{
#line 434 "write_module_interface_files.m"
  {
#line 434 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 434 "write_module_interface_files.m"
    {
#line 434 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__Items0_10);
#line 434 "write_module_interface_files.m"
      return;
    }
#line 434 "write_module_interface_files.m"
  }
#line 91 "write_module_interface_files.m"
}

#line 85 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_8_p_0(
#line 85 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 85 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_10,
#line 85 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SourceFileModuleName_11,
#line 85 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_12,
#line 85 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 85 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_14)
#line 85 "write_module_interface_files.m"
{
#line 358 "write_module_interface_files.m"
  {
#line 358 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 358 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Module0_17;
#line 358 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Specs0_18;
#line 358 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_19;
#line 358 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40;
#line 358 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42;

#line 358 "write_module_interface_files.m"
    {
#line 358 "write_module_interface_files.m"
      parse_tree__modules__get_interface_4_p_0(parse_tree__write_module_interface_files__ModuleName_12, (MR_Integer) 1, parse_tree__write_module_interface_files__Items0_14, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40);
    }
#line 361 "write_module_interface_files.m"
    {
#line 361 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__SourceFileName_10, parse_tree__write_module_interface_files__SourceFileModuleName_11, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40, &parse_tree__write_module_interface_files__Module0_17);
    }
#line 365 "write_module_interface_files.m"
    {
#line 365 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_module_interface_files__Module0_17, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42, &parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Errors_19);
    }
#line 367 "write_module_interface_files.m"
    {
#line 367 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_19);
    }
#line 378 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 370 "write_module_interface_files.m"
      {
#line 370 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__IntFileName_22;
#line 370 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__Int2FileName_23;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_60_60;
#line 370 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_62_62;
#line 369 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_20;
#line 369 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_21;

#line 369 "write_module_interface_files.m"
        {
#line 369 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs0_18, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_20, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_21);
        }
#line 371 "write_module_interface_files.m"
        {
#line 371 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_22);
        }
#line 373 "write_module_interface_files.m"
        {
#line 373 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_module_interface_files__Int2FileName_23);
        }
#line 377 "write_module_interface_files.m"
        {
#line 377 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Int2FileName_23));
#line 377 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 377 "write_module_interface_files.m"
        }
#line 377 "write_module_interface_files.m"
        {
#line 377 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) ((MR_String) "\140"));
#line 377 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_62_62));
#line 377 "write_module_interface_files.m"
        }
#line 376 "write_module_interface_files.m"
        {
#line 376 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_58_58, 0) = ((MR_Box) ((MR_String) "\' and "));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_58_58, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 376 "write_module_interface_files.m"
        }
#line 376 "write_module_interface_files.m"
        {
#line 376 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_22));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_58_58));
#line 376 "write_module_interface_files.m"
        }
#line 376 "write_module_interface_files.m"
        {
#line 376 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_55_55, 0) = ((MR_Box) ((MR_String) "\140"));
#line 376 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_55_55, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_57_57));
#line 376 "write_module_interface_files.m"
        }
#line 375 "write_module_interface_files.m"
        {
#line 375 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_52_52, 0) = ((MR_Box) ((MR_String) "Error reading short interface files.\n"));
#line 375 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_52_52, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_55_55));
#line 375 "write_module_interface_files.m"
        }
#line 375 "write_module_interface_files.m"
        {
#line 375 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_52_52);
#line 375 "write_module_interface_files.m"
          return;
        }
#line 370 "write_module_interface_files.m"
      }
#line 378 "write_module_interface_files.m"
    else
#line 381 "write_module_interface_files.m"
      {
#line 381 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_24;
#line 381 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Specs_29;
#line 381 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30;
#line 381 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__NumErrors_31;
#line 381 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69;
#line 381 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 381 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 382 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 382 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 382 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 382 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 389 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_108;

#line 380 "write_module_interface_files.m"
        {
#line 380 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".m", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_24);
        }
#line 382 "write_module_interface_files.m"
        {
#line 382 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_70_70 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 383 "write_module_interface_files.m"
        {
#line 383 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_24));
#line 383 "write_module_interface_files.m"
        }
#line 382 "write_module_interface_files.m"
        {
#line 382 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_items_13_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69, parse_tree__write_module_interface_files__V_70_70, &parse_tree__write_module_interface_files__V_25_25, parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__V_71_71, (MR_String) "", &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, &parse_tree__write_module_interface_files__V_28_28, parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Specs_29);
        }
#line 387 "write_module_interface_files.m"
        {
#line 387 "write_module_interface_files.m"
          libs__globals__set_option_4_p_0((MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_9, &parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30);
        }
#line 389 "write_module_interface_files.m"
        {
#line 389 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs_29, parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_108, (MR_Integer) 0, &parse_tree__write_module_interface_files__NumErrors_31);
        }
#line 391 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__NumErrors_31 > (MR_Integer) 0);
#line 396 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 393 "write_module_interface_files.m"
          {
#line 393 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_83_83;
#line 393 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_86_86;
#line 393 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__IntFileName_110;

#line 392 "write_module_interface_files.m"
            {
#line 392 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_110);
            }
#line 394 "write_module_interface_files.m"
            {
#line 394 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_110));
#line 394 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[6])));
#line 394 "write_module_interface_files.m"
            }
#line 394 "write_module_interface_files.m"
            {
#line 394 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 0) = ((MR_Box) ((MR_String) "\140"));
#line 394 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_86_86));
#line 394 "write_module_interface_files.m"
            }
#line 394 "write_module_interface_files.m"
            {
#line 394 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_83_83);
#line 394 "write_module_interface_files.m"
              return;
            }
#line 393 "write_module_interface_files.m"
          }
#line 396 "write_module_interface_files.m"
        else
#line 402 "write_module_interface_files.m"
          {
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs0_32;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs_33;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems_36;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94;
#line 402 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112;
#line 408 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings2_34;
#line 408 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors2_35;

#line 402 "write_module_interface_files.m"
            {
#line 402 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92);
            }
#line 403 "write_module_interface_files.m"
            {
#line 403 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93);
            }
#line 404 "write_module_interface_files.m"
            {
#line 404 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__InterfaceSpecs0_32);
            }
#line 406 "write_module_interface_files.m"
            {
#line 406 "write_module_interface_files.m"
              parse_tree__modules__check_int_for_no_exports_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__InterfaceSpecs0_32, &parse_tree__write_module_interface_files__InterfaceSpecs_33);
            }
#line 408 "write_module_interface_files.m"
            {
#line 408 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__InterfaceSpecs_33, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings2_34, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors2_35);
            }
#line 411 "write_module_interface_files.m"
            {
#line 411 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112);
            }
#line 412 "write_module_interface_files.m"
            {
#line 412 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", parse_tree__write_module_interface_files__MaybeTimestamp_13, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112);
            }
#line 414 "write_module_interface_files.m"
            {
#line 414 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__get_short_interface_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112, (MR_Integer) 0, &parse_tree__write_module_interface_files__ShortInterfaceItems_36);
            }
#line 416 "write_module_interface_files.m"
            {
#line 416 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int2", parse_tree__write_module_interface_files__MaybeTimestamp_13, parse_tree__write_module_interface_files__ShortInterfaceItems_36);
            }
#line 419 "write_module_interface_files.m"
            {
#line 419 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".date");
#line 419 "write_module_interface_files.m"
              return;
            }
#line 402 "write_module_interface_files.m"
          }
#line 381 "write_module_interface_files.m"
      }
#line 358 "write_module_interface_files.m"
  }
#line 85 "write_module_interface_files.m"
}

#line 69 "write_module_interface_files.m"
void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_8_p_0(
#line 69 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 69 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__SourceFileName_10,
#line 69 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__SourceFileModuleName_11,
#line 69 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_12,
#line 69 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 69 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_14)
#line 69 "write_module_interface_files.m"
{
#line 142 "write_module_interface_files.m"
  {
#line 142 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 142 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Module_16;
#line 142 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Items1_17;
#line 142 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Specs0_18;
#line 142 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_19;

#line 143 "write_module_interface_files.m"
    {
#line 143 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__SourceFileName_10, parse_tree__write_module_interface_files__SourceFileModuleName_11, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__Items0_14, &parse_tree__write_module_interface_files__Module_16);
    }
#line 147 "write_module_interface_files.m"
    {
#line 147 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_module_interface_files__Module_16, &parse_tree__write_module_interface_files__Items1_17, &parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Errors_19);
    }
#line 148 "write_module_interface_files.m"
    {
#line 148 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_19);
    }
#line 156 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 150 "write_module_interface_files.m"
      {
#line 150 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_20;
#line 150 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 150 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 150 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 152 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_21;
#line 152 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_22;

#line 149 "write_module_interface_files.m"
        {
#line 149 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_20);
        }
#line 152 "write_module_interface_files.m"
        {
#line 152 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs0_18, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_21, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_22);
        }
#line 155 "write_module_interface_files.m"
        {
#line 155 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_20));
#line 155 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 155 "write_module_interface_files.m"
        }
#line 155 "write_module_interface_files.m"
        {
#line 155 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_54_54, 0) = ((MR_Box) ((MR_String) "\140"));
#line 155 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_54_54, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_56_56));
#line 155 "write_module_interface_files.m"
        }
#line 154 "write_module_interface_files.m"
        {
#line 154 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_51_51, 0) = ((MR_Box) ((MR_String) "Error reading interface files.\n"));
#line 154 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_51_51, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_54_54));
#line 154 "write_module_interface_files.m"
        }
#line 154 "write_module_interface_files.m"
        {
#line 154 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_51_51);
#line 154 "write_module_interface_files.m"
          return;
        }
#line 150 "write_module_interface_files.m"
      }
#line 156 "write_module_interface_files.m"
    else
#line 159 "write_module_interface_files.m"
      {
#line 159 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items2_23;
#line 159 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Specs_28;
#line 159 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_63_63;
#line 159 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_64_64;
#line 159 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_94;
#line 160 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 160 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 160 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 160 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;

#line 158 "write_module_interface_files.m"
        {
#line 158 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".m", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_94);
        }
#line 160 "write_module_interface_files.m"
        {
#line 160 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_63_63 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 161 "write_module_interface_files.m"
        {
#line 161 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_64_64, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_94));
#line 161 "write_module_interface_files.m"
        }
#line 160 "write_module_interface_files.m"
        {
#line 160 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_items_13_p_0(parse_tree__write_module_interface_files__Items1_17, &parse_tree__write_module_interface_files__Items2_23, parse_tree__write_module_interface_files__V_63_63, &parse_tree__write_module_interface_files__V_24_24, parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__V_64_64, (MR_String) "", &parse_tree__write_module_interface_files__V_25_25, &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Specs_28);
        }
#line 168 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Specs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "write_module_interface_files.m"
          {
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_100_100;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items3_31;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__RevIntItems0_32;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__RevImplItems0_33;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItems0_34;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImplItems0_35;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__IntItems_36;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImplItems_37;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items4_38;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_39;
#line 169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_69_69;

#line 173 "write_module_interface_files.m"
            {
#line 173 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_imported_items_2_p_0(parse_tree__write_module_interface_files__Items2_23, &parse_tree__write_module_interface_files__Items3_31);
            }
#line 174 "write_module_interface_files.m"
            {
#line 174 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__process_items_for_private_interface_7_p_0(parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__Items3_31, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevIntItems0_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevImplItems0_33);
            }
#line 13943 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 176 "write_module_interface_files.m"
            {
#line 176 "write_module_interface_files.m"
              mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_100_100, parse_tree__write_module_interface_files__RevIntItems0_32, &parse_tree__write_module_interface_files__IntItems0_34);
            }
#line 177 "write_module_interface_files.m"
            {
#line 177 "write_module_interface_files.m"
              mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_100_100, parse_tree__write_module_interface_files__RevImplItems0_33, &parse_tree__write_module_interface_files__ImplItems0_35);
            }
#line 178 "write_module_interface_files.m"
            {
#line 178 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__IntItems0_34, &parse_tree__write_module_interface_files__IntItems_36);
            }
#line 179 "write_module_interface_files.m"
            {
#line 179 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__ImplItems0_35, &parse_tree__write_module_interface_files__ImplItems_37);
            }
#line 180 "write_module_interface_files.m"
            {
#line 180 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_69_69 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            }
#line 180 "write_module_interface_files.m"
            {
#line 180 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Items4_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Items4_38, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_69_69));
#line 180 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Items4_38, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_36));
#line 180 "write_module_interface_files.m"
            }
#line 184 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__ImplItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Items_39 = parse_tree__write_module_interface_files__Items4_38;
#line 184 "write_module_interface_files.m"
            else
#line 185 "write_module_interface_files.m"
              {
#line 185 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 185 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_72_72;

#line 187 "write_module_interface_files.m"
                {
#line 187 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_72_72 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                }
#line 187 "write_module_interface_files.m"
                {
#line 187 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_72_72));
#line 187 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ImplItems_37));
#line 187 "write_module_interface_files.m"
                }
#line 186 "write_module_interface_files.m"
                {
#line 186 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Items_39 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_100_100, parse_tree__write_module_interface_files__Items4_38, parse_tree__write_module_interface_files__V_71_71);
                }
#line 185 "write_module_interface_files.m"
              }
#line 189 "write_module_interface_files.m"
            {
#line 189 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int0", parse_tree__write_module_interface_files__MaybeTimestamp_13, parse_tree__write_module_interface_files__Items_39);
            }
#line 191 "write_module_interface_files.m"
            {
#line 191 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".date0");
#line 191 "write_module_interface_files.m"
              return;
            }
#line 169 "write_module_interface_files.m"
          }
#line 168 "write_module_interface_files.m"
        else
#line 163 "write_module_interface_files.m"
          {
#line 163 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_81_81;
#line 163 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_84_84;
#line 165 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings_88;
#line 165 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors_89;

#line 165 "write_module_interface_files.m"
            {
#line 165 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs_28, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_88, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_89);
            }
#line 167 "write_module_interface_files.m"
            {
#line 167 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_84_84, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_94));
#line 167 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 167 "write_module_interface_files.m"
            }
#line 167 "write_module_interface_files.m"
            {
#line 167 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_81_81, 0) = ((MR_Box) ((MR_String) "\140"));
#line 167 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_81_81, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_84_84));
#line 167 "write_module_interface_files.m"
            }
#line 167 "write_module_interface_files.m"
            {
#line 167 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_81_81);
#line 167 "write_module_interface_files.m"
              return;
            }
#line 163 "write_module_interface_files.m"
          }
#line 159 "write_module_interface_files.m"
      }
#line 142 "write_module_interface_files.m"
  }
#line 69 "write_module_interface_files.m"
}

void mercury__parse_tree__write_module_interface_files__init(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_cur_pos_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_specifier_in_defn_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_map_0);
	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_type_defn_pair_0);
}

void mercury__parse_tree__write_module_interface_files__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.write_module_interface_files. */
