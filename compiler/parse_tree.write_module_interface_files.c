/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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



#line 587 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s {
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37;
#line 587 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__HeadVar__3_41;
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont;
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont_env_ptr;
#line 587 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded;
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeCtorInfo_97_97;
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeInfo_100_100;
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defns_17;
#line 589 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv1_HeadVar__3_41;
#line 589 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv0_Defns_17;
#line 590 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__commit_0;
#line 590 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defn_18;
#line 590 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__V_42_42;
#line 591 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv2_V_42_42;
#line 587 "write_module_interface_files.m"
};

#line 1550 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s {
#line 1550 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15;
#line 1552 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded;
#line 1552 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19;
#line 1555 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0;
#line 1555 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17;
#line 1555 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23;
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23;
#line 1565 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1;
#line 1565 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20;
#line 1565 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24;
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24;
#line 1550 "write_module_interface_files.m"
};

#line 1483 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s {
#line 1486 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded;
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8;
#line 1486 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28;
#line 1555 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0;
#line 1555 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26;
#line 1555 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32;
#line 1555 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32;
#line 1565 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1;
#line 1565 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29;
#line 1565 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33;
#line 1565 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33;
#line 1483 "write_module_interface_files.m"
};

#line 847 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s {
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5;
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6;
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7;
#line 851 "write_module_interface_files.m"
  MR_bool parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded;
#line 856 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13;
#line 866 "write_module_interface_files.m"
  jmp_buf parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47;
#line 866 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53;
#line 867 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36;
#line 847 "write_module_interface_files.m"
};

#line 587 "write_module_interface_files.m"
struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s {
#line 587 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1;
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont;
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr;
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41;
#line 587 "write_module_interface_files.m"
};


#line 290 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 293 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 296 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 299 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 302 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 305 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0;

#line 308 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 311 "parse_tree.write_module_interface_files.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_module_interface_files____vpti_pred_3__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 314 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 317 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 320 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 323 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0;

#line 326 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1;

#line 329 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2;

#line 332 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_cur_pos_0[3];

#line 335 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_cur_pos_0[3];

#line 338 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_cur_pos_0[3];

#line 341 "parse_tree.write_module_interface_files.c"
static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_specifier_in_defn_0_0[2];

#line 344 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0;

#line 347 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0[1];

#line 350 "parse_tree.write_module_interface_files.c"
static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_specifier_in_defn_0[1];

#line 353 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_specifier_in_defn_0[1];

#line 356 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_specifier_in_defn_0[1];

#line 359 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 362 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 365 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0_10001(
#line 368 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 370 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 373 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0_10001(
#line 376 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 378 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 380 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 383 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0_10001(
#line 386 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 388 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 391 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0_10001(
#line 394 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 396 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 398 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 401 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 404 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 406 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 409 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 412 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 414 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 416 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 419 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 422 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 424 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2);

#line 427 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 430 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 432 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 434 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3);

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_49_51_95_95_49_95_95_91_50_93_95_48_5_p_0(
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 613 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61);

#line 1400 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_11,
#line 1400 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__Suffix_12,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceItems0_14);

#line 1573 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1573__1_1_p_0(
#line 1573 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_21);

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__613__1_5_p_0(
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_58,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 613 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61);

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_3_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_52,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_53,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_54);

#line 599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__599__1_3_p_0(
#line 599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_45,
#line 599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_46,
#line 599 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_47);

#line 589 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_2(
#line 589 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_3(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 591 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_5(
#line 591 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_4(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_6(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_1(
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0(
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37,
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40,
#line 587 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_41,
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr);

#line 1147 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1147 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1147 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1145 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1145 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1145 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(
#line 640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 640 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0(
#line 1640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1640 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0(
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1992 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 1992 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 1992 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 1992 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6);

#line 1987 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1868 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1868 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3);

#line 1855 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1855 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1736 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1736 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1728 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_1_p_0(
#line 1728 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1);

#line 1717 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_5(
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1717 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1713 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_4(
#line 1713 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1713 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1711 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_3(
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1709 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_2(
#line 1709 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1709 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1708 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_1(
#line 1708 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1708 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1701 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0(
#line 1701 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1701 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2);

#line 1645 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(
#line 1645 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1645 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CurPos_2,
#line 1645 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 1621 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1612 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(
#line 1612 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2);

#line 1609 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1599 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 1571 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_10(
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1561 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_5(
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1550 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1550 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15,
#line 1550 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16);

#line 1492 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3,
#line 1492 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4);

#line 1609 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_11(
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1571 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_10(
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1561 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_5(
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_3(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_8(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 1483 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0(
#line 1483 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_4,
#line 1483 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Kind_5,
#line 1483 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6);

#line 1390 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1390 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1390 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5);

#line 1344 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1344 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1344 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5);

#line 1337 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(
#line 1337 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1337 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1337 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1337 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);

#line 1317 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1317 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1317 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 1315 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1315 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1315 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 1311 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6,
#line 1311 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_5(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_4(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_3(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_2(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_1(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1270 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(
#line 1270 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1270 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1270 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24);

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0_1(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1249 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(
#line 1249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1227 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0_1(
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1227 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1220 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25);

#line 1217 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0_1(
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1217 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1213 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(
#line 1213 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplItems_3,
#line 1213 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_4);

#line 1159 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0(
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10);

#line 1150 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_5_p_0(
#line 1150 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_6,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplItems_8,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntTypesMap_9,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplTypesMap_10);

#line 1136 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1136 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1136 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1136 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1127 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1127 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3);

#line 1122 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1122 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1092 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1092 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1092 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1092 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14);

#line 1075 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1075 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1075 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1075 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);

#line 1070 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1070 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1063 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1061 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1061 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 1050 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27);

#line 1044 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 1036 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20);

#line 993 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);

#line 985 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 982 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7);

#line 974 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12);

#line 939 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 939 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 939 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 937 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 937 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 937 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 933 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 933 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 905 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 905 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 905 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4);

#line 903 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 903 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 903 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 899 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 899 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 867 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 867 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 847 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7);

#line 781 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 781 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16);

#line 756 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 756 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 756 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 756 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3);

#line 739 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_module_spec_4_p_0(
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_1,
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NewModuleSpec_2,
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 739 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4);

#line 687 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11);

#line 679 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(
#line 679 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3);

#line 671 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(
#line 671 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3);

#line 667 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 667 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3);

#line 662 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 661 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 661 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 661 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 660 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 660 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 660 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1);

#line 646 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 646 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 646 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_6(
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 613 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4);

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_5(
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 607 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_4(
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 599 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3);

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2(
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg);

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3(
#line 587 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 587 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr);

#line 580 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1(
#line 580 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 580 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 580 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2);

#line 553 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(
#line 553 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 553 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 534 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 474 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(
#line 474 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 474 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 474 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3);

#line 461 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(
#line 461 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 461 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4);

#line 245 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_8_p_0(
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Section_55,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59);

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



#line 2248 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2257 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2265 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2274 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2282 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_defn_0__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2291 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2299 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2307 "parse_tree.write_module_interface_files.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_module_interface_files____vpti_pred_3__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2318 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2326 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_module_interface_files__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2334 "parse_tree.write_module_interface_files.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_module_interface_files__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2343 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0 = {
  (MR_String) "in_interface",
  (MR_Integer) 0
};

#line 2349 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1 = {
  (MR_String) "in_implementation",
  (MR_Integer) 1
};

#line 2355 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2 = {
  (MR_String) "other",
  (MR_Integer) 2
};

#line 2361 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_value_ordered_cur_pos_0[3] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2
};

#line 2368 "parse_tree.write_module_interface_files.c"
static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_cur_pos_0[3] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_cur_pos_0_2
};

#line 2375 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_cur_pos_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2382 "parse_tree.write_module_interface_files.c"
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

#line 2403 "parse_tree.write_module_interface_files.c"
static const MR_PseudoTypeInfo parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__field_types_module_specifier_in_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 2409 "parse_tree.write_module_interface_files.c"
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

#line 2424 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0
};

#line 2429 "parse_tree.write_module_interface_files.c"
static const MR_DuPtagLayout parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_ptag_ordered_module_specifier_in_defn_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_stag_ordered_module_specifier_in_defn_0_0
  }
};

#line 2438 "parse_tree.write_module_interface_files.c"
static const MR_DuFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_name_ordered_module_specifier_in_defn_0[1] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__du_functor_desc_module_specifier_in_defn_0_0
};

#line 2443 "parse_tree.write_module_interface_files.c"
static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_module_specifier_in_defn_0[1] = {
  (MR_Integer) 0
};

#line 2448 "parse_tree.write_module_interface_files.c"
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

#line 2469 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2478 "parse_tree.write_module_interface_files.c"
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

#line 2499 "parse_tree.write_module_interface_files.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__write_module_interface_files__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_defn_0parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 2508 "parse_tree.write_module_interface_files.c"
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

#line 2529 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0_10001(
#line 2532 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2534 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2536 "parse_tree.write_module_interface_files.c"
{
#line 2538 "parse_tree.write_module_interface_files.c"
  {
#line 2540 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2543 "parse_tree.write_module_interface_files.c"
    {
#line 2545 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____cur_pos_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2548 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2550 "parse_tree.write_module_interface_files.c"
  }
#line 2552 "parse_tree.write_module_interface_files.c"
}

#line 2555 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0_10001(
#line 2558 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2560 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2562 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2564 "parse_tree.write_module_interface_files.c"
{
#line 2566 "parse_tree.write_module_interface_files.c"
  {
#line 2568 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2571 "parse_tree.write_module_interface_files.c"
    {
#line 2573 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____cur_pos_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2576 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2578 "parse_tree.write_module_interface_files.c"
  }
#line 2580 "parse_tree.write_module_interface_files.c"
}

#line 2583 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0_10001(
#line 2586 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2588 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2590 "parse_tree.write_module_interface_files.c"
{
#line 2592 "parse_tree.write_module_interface_files.c"
  {
#line 2594 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2597 "parse_tree.write_module_interface_files.c"
    {
#line 2599 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2602 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2604 "parse_tree.write_module_interface_files.c"
  }
#line 2606 "parse_tree.write_module_interface_files.c"
}

#line 2609 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0_10001(
#line 2612 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2614 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2616 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2618 "parse_tree.write_module_interface_files.c"
{
#line 2620 "parse_tree.write_module_interface_files.c"
  {
#line 2622 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2625 "parse_tree.write_module_interface_files.c"
    {
#line 2627 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2630 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2632 "parse_tree.write_module_interface_files.c"
  }
#line 2634 "parse_tree.write_module_interface_files.c"
}

#line 2637 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0_10001(
#line 2640 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2642 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2644 "parse_tree.write_module_interface_files.c"
{
#line 2646 "parse_tree.write_module_interface_files.c"
  {
#line 2648 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2651 "parse_tree.write_module_interface_files.c"
    {
#line 2653 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2656 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2658 "parse_tree.write_module_interface_files.c"
  }
#line 2660 "parse_tree.write_module_interface_files.c"
}

#line 2663 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0_10001(
#line 2666 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2668 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2670 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2672 "parse_tree.write_module_interface_files.c"
{
#line 2674 "parse_tree.write_module_interface_files.c"
  {
#line 2676 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2679 "parse_tree.write_module_interface_files.c"
    {
#line 2681 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2684 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2686 "parse_tree.write_module_interface_files.c"
  }
#line 2688 "parse_tree.write_module_interface_files.c"
}

#line 2691 "parse_tree.write_module_interface_files.c"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0_10001(
#line 2694 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2696 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2)
#line 2698 "parse_tree.write_module_interface_files.c"
{
#line 2700 "parse_tree.write_module_interface_files.c"
  {
#line 2702 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 2705 "parse_tree.write_module_interface_files.c"
    {
#line 2707 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2));
    }
#line 2710 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 2712 "parse_tree.write_module_interface_files.c"
  }
#line 2714 "parse_tree.write_module_interface_files.c"
}

#line 2717 "parse_tree.write_module_interface_files.c"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0_10001(
#line 2720 "parse_tree.write_module_interface_files.c"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 2722 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 2724 "parse_tree.write_module_interface_files.c"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3)
#line 2726 "parse_tree.write_module_interface_files.c"
{
#line 2728 "parse_tree.write_module_interface_files.c"
  {
#line 2730 "parse_tree.write_module_interface_files.c"
    MR_Word parse_tree__write_module_interface_files__conv0_HeadVar__1_1;

#line 2733 "parse_tree.write_module_interface_files.c"
    {
#line 2735 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(&parse_tree__write_module_interface_files__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3));
    }
#line 2738 "parse_tree.write_module_interface_files.c"
    *parse_tree__write_module_interface_files__wrapper_arg_1 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_HeadVar__1_1));
#line 2740 "parse_tree.write_module_interface_files.c"
  }
#line 2742 "parse_tree.write_module_interface_files.c"
}

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_49_51_95_95_49_95_95_91_50_93_95_48_5_p_0(
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 613 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61)
#line 613 "write_module_interface_files.m"
{
#line 613 "write_module_interface_files.m"
  {
#line 613 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 616 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_HeadVar__5_61;

#line 616 "write_module_interface_files.m"
    {
#line 616 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], parse_tree__write_module_interface_files__AddProjectedItem_24, parse_tree__write_module_interface_files__HeadVar__3_59, ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__4_60)), &parse_tree__write_module_interface_files__conv0_HeadVar__5_61);
    }
#line 616 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__HeadVar__5_61 = ((MR_Word) parse_tree__write_module_interface_files__conv0_HeadVar__5_61);
#line 613 "write_module_interface_files.m"
  }
#line 613 "write_module_interface_files.m"
}

#line 1400 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Globals_9,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_11,
#line 1400 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__Suffix_12,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__MaybeTimestamp_13,
#line 1400 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceItems0_14)
#line 1400 "write_module_interface_files.m"
{
#line 1405 "write_module_interface_files.m"
  {
#line 1405 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1405 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpSuffix_16;
#line 1405 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__OutputFileName_17;
#line 1405 "write_module_interface_files.m"
    MR_String parse_tree__write_module_interface_files__TmpOutputFileName_18;
#line 1405 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NoLineNumGlobals_19;
#line 1405 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__GenerateVersionNumbers_20;
#line 1405 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__DisableVersionNumbers_21;
#line 1405 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems_37;

#line 1407 "write_module_interface_files.m"
    {
#line 1407 "write_module_interface_files.m"
      mercury__string__append_3_p_2(parse_tree__write_module_interface_files__Suffix_12, (MR_String) ".tmp", &parse_tree__write_module_interface_files__TmpSuffix_16);
    }
#line 1408 "write_module_interface_files.m"
    {
#line 1408 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__Suffix_12, (MR_Integer) 0, &parse_tree__write_module_interface_files__OutputFileName_17);
    }
#line 1410 "write_module_interface_files.m"
    {
#line 1410 "write_module_interface_files.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__TmpSuffix_16, (MR_Integer) 1, &parse_tree__write_module_interface_files__TmpOutputFileName_18);
    }
#line 1413 "write_module_interface_files.m"
    {
#line 1413 "write_module_interface_files.m"
      libs__globals__set_option_4_p_0((MR_Integer) 137, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_9, &parse_tree__write_module_interface_files__NoLineNumGlobals_19);
    }
#line 1414 "write_module_interface_files.m"
    {
#line 1414 "write_module_interface_files.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, (MR_Integer) 116, &parse_tree__write_module_interface_files__GenerateVersionNumbers_20);
    }
#line 1416 "write_module_interface_files.m"
    {
#line 1416 "write_module_interface_files.m"
      libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&parse_tree__write_module_interface_files__DisableVersionNumbers_21);
    }
#line 1418 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__GenerateVersionNumbers_20 == (MR_Integer) 1);
#line 1418 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1419 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__DisableVersionNumbers_21 == (MR_Integer) 0);
#line 1461 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1456 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__MaybeTimestamp_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1457 "write_module_interface_files.m"
        {
#line 1458 "write_module_interface_files.m"
          {
#line 1458 "write_module_interface_files.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/8", (MR_String) "with \140--smart-recompilation\', timestamp not read");
#line 1458 "write_module_interface_files.m"
            return;
          }
#line 1457 "write_module_interface_files.m"
        }
#line 1456 "write_module_interface_files.m"
      else
#line 1423 "write_module_interface_files.m"
        {
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Timestamp_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeTimestamp_13, (MR_Integer) 0)));
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__OldItems_23;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__OldErrors_24;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__MaybeOldItems_27;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumbers_28;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__VersionNumberItem_30;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 1423 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 1426 "write_module_interface_files.m"
          MR_String parse_tree__write_module_interface_files___OldIntFileName_25;
#line 1426 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files___OldTimestamp_26;
#line 1452 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstItem_31;
#line 1452 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__InterfaceItems1_32;
#line 1444 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstItemModuleDefn_33;
#line 1444 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__FirstModuleDefn_34;
#line 1446 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1446 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_36_36;

#line 1426 "write_module_interface_files.m"
          {
#line 1426 "write_module_interface_files.m"
            parse_tree__read_modules__read_module_ignore_errors_12_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__Suffix_12, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 1, &parse_tree__write_module_interface_files__OldItems_23, &parse_tree__write_module_interface_files__OldErrors_24, &parse_tree__write_module_interface_files___OldIntFileName_25, &parse_tree__write_module_interface_files___OldTimestamp_26);
          }
#line 1430 "write_module_interface_files.m"
          {
#line 1430 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__OldErrors_24);
          }
#line 1432 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1431 "write_module_interface_files.m"
            {
#line 1431 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__MaybeOldItems_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeOldItems_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__OldItems_23));
#line 1431 "write_module_interface_files.m"
            }
#line 1432 "write_module_interface_files.m"
          else
#line 1435 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__MaybeOldItems_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1437 "write_module_interface_files.m"
          {
#line 1437 "write_module_interface_files.m"
            recompilation__version__compute_version_numbers_4_p_0(parse_tree__write_module_interface_files__Timestamp_22, parse_tree__write_module_interface_files__InterfaceItems0_14, parse_tree__write_module_interface_files__MaybeOldItems_27, &parse_tree__write_module_interface_files__VersionNumbers_28);
          }
#line 1440 "write_module_interface_files.m"
          {
#line 1440 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1440 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_11));
#line 1440 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_57_57, 2) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumbers_28));
#line 1440 "write_module_interface_files.m"
          }
#line 1441 "write_module_interface_files.m"
          {
#line 1441 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_58_58 = mercury__term__context_init_0_f_0();
          }
#line 1439 "write_module_interface_files.m"
          {
#line 1439 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_57_57));
#line 1439 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_58_58));
#line 1439 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29, 2) = ((MR_Box) ((MR_Integer) -1));
#line 1439 "write_module_interface_files.m"
          }
#line 1442 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__VersionNumberItem_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__VersionNumberItemModuleDefn_29);
#line 1444 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__InterfaceItems0_14)) == (MR_mktag((MR_Integer) 1)));
#line 1444 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1444 "write_module_interface_files.m"
            {
#line 1444 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__FirstItem_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems0_14, (MR_Integer) 0)));
#line 1444 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__InterfaceItems1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems0_14, (MR_Integer) 1)));
#line 1445 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__FirstItem_31)) == (MR_mktag((MR_Integer) 2)));
#line 1445 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 1445 "write_module_interface_files.m"
                {
#line 1445 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__FirstItemModuleDefn_33 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__FirstItem_31), (MR_Integer) 2);
#line 1446 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__FirstModuleDefn_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 0)));
#line 1446 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 1)));
#line 1446 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FirstItemModuleDefn_33, (MR_Integer) 2)));
#line 1448 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__FirstModuleDefn_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "write_module_interface_files.m"
                }
#line 1444 "write_module_interface_files.m"
            }
#line 1452 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1450 "write_module_interface_files.m"
            {
#line 1450 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_60_60;

#line 1451 "write_module_interface_files.m"
              {
#line 1451 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumberItem_30));
#line 1451 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceItems1_32));
#line 1451 "write_module_interface_files.m"
              }
#line 1450 "write_module_interface_files.m"
              {
#line 1450 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__InterfaceItems_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FirstItem_31));
#line 1450 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 1450 "write_module_interface_files.m"
              }
#line 1450 "write_module_interface_files.m"
            }
#line 1452 "write_module_interface_files.m"
          else
#line 1453 "write_module_interface_files.m"
            {
#line 1453 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_61_61;
#line 1453 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_63_63;

#line 1453 "write_module_interface_files.m"
              {
#line 1453 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_61_61 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
              }
#line 1454 "write_module_interface_files.m"
              {
#line 1454 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 0) = ((MR_Box) (parse_tree__write_module_interface_files__VersionNumberItem_30));
#line 1454 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_63_63, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceItems0_14));
#line 1454 "write_module_interface_files.m"
              }
#line 1453 "write_module_interface_files.m"
              {
#line 1453 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__InterfaceItems_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_61_61));
#line 1453 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__InterfaceItems_37, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_63_63));
#line 1453 "write_module_interface_files.m"
              }
#line 1453 "write_module_interface_files.m"
            }
#line 1423 "write_module_interface_files.m"
        }
#line 1461 "write_module_interface_files.m"
    else
#line 1462 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__InterfaceItems_37 = parse_tree__write_module_interface_files__InterfaceItems0_14;
#line 1464 "write_module_interface_files.m"
    {
#line 1464 "write_module_interface_files.m"
      parse_tree__mercury_to_mercury__convert_to_mercury_6_p_0(parse_tree__write_module_interface_files__NoLineNumGlobals_19, parse_tree__write_module_interface_files__ModuleName_11, parse_tree__write_module_interface_files__TmpOutputFileName_18, parse_tree__write_module_interface_files__InterfaceItems_37);
    }
#line 1467 "write_module_interface_files.m"
    {
#line 1467 "write_module_interface_files.m"
      parse_tree__module_cmds__update_interface_4_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__OutputFileName_17);
#line 1467 "write_module_interface_files.m"
      return;
    }
#line 1405 "write_module_interface_files.m"
  }
#line 1400 "write_module_interface_files.m"
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
#line 440 "write_module_interface_files.m"
  {
#line 440 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems0_13;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems1_14;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__InterfaceItems_15;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems0_16;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems_17;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_46;
#line 440 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_54;
#line 448 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 448 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 448 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 448 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 451 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumWarnings_22;
#line 451 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___NumErrors_23;

#line 441 "write_module_interface_files.m"
    {
#line 441 "write_module_interface_files.m"
      parse_tree__modules__get_interface_4_p_0(parse_tree__write_module_interface_files__ModuleName_9, (MR_Integer) 0, parse_tree__write_module_interface_files__Items0_10, &parse_tree__write_module_interface_files__InterfaceItems0_13);
    }
#line 531 "write_module_interface_files.m"
    {
#line 531 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(parse_tree__write_module_interface_files__InterfaceItems0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_46);
    }
#line 532 "write_module_interface_files.m"
    {
#line 532 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_46, &parse_tree__write_module_interface_files__InterfaceItems1_14);
    }
#line 1341 "write_module_interface_files.m"
    {
#line 1341 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(parse_tree__write_module_interface_files__InterfaceItems1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28);
    }
#line 1342 "write_module_interface_files.m"
    {
#line 1342 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_54, &parse_tree__write_module_interface_files__InterfaceItems_15);
    }
#line 447 "write_module_interface_files.m"
    {
#line 447 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0(parse_tree__write_module_interface_files__InterfaceItems_15, (MR_Integer) 1, &parse_tree__write_module_interface_files__ShortInterfaceItems0_16);
    }
#line 449 "write_module_interface_files.m"
    {
#line 449 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_30_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
    }
#line 448 "write_module_interface_files.m"
    {
#line 448 "write_module_interface_files.m"
      parse_tree__module_qual__module_qualify_items_13_p_0(parse_tree__write_module_interface_files__ShortInterfaceItems0_16, &parse_tree__write_module_interface_files__ShortInterfaceItems_17, parse_tree__write_module_interface_files__V_30_30, &parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "", &parse_tree__write_module_interface_files__V_19_19, &parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_28_28, &parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33);
    }
#line 451 "write_module_interface_files.m"
    {
#line 451 "write_module_interface_files.m"
      parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_33_33, parse_tree__write_module_interface_files__Globals_7, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_22, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_23);
    }
#line 454 "write_module_interface_files.m"
    {
#line 454 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_String) ".int3", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__write_module_interface_files__ShortInterfaceItems_17);
    }
#line 456 "write_module_interface_files.m"
    {
#line 456 "write_module_interface_files.m"
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, (MR_String) ".date3");
#line 456 "write_module_interface_files.m"
      return;
    }
#line 440 "write_module_interface_files.m"
  }
#line 91 "write_module_interface_files.m"
}

#line 1573 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1573__1_1_p_0(
#line 1573 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_21)
#line 1573 "write_module_interface_files.m"
{
#line 1573 "write_module_interface_files.m"
  {
#line 1573 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__1_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1574 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ThisItemPragma_9;
#line 1574 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_10;
#line 1575 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1575 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 1575 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_13_13;
#line 1576 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_14_14;

#line 1574 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1574 "write_module_interface_files.m"
      {
#line 1574 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ThisItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__1_21, (MR_Integer) 1)));
#line 1575 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 0)));
#line 1575 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 1)));
#line 1575 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 2)));
#line 1575 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ThisItemPragma_9, (MR_Integer) 3)));
#line 1576 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1576 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1576 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 1)));
#line 1574 "write_module_interface_files.m"
      }
#line 1573 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1573 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1573 "write_module_interface_files.m"
  }
#line 1573 "write_module_interface_files.m"
}

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__613__1_5_p_0(
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__AddProjectedItem_24,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_58,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_59,
#line 613 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__4_60,
#line 613 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__5_61)
#line 613 "write_module_interface_files.m"
{
#line 613 "write_module_interface_files.m"
  {
#line 613 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 613 "write_module_interface_files.m"
    {
#line 613 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_116_114_105_112_95_117_110_110_101_99_101_115_115_97_114_121_95_105_109_112_108_95_100_101_102_110_115_95_95_54_49_51_95_95_49_95_95_91_50_93_95_48_5_p_0(parse_tree__write_module_interface_files__AddProjectedItem_24, parse_tree__write_module_interface_files__HeadVar__3_59, parse_tree__write_module_interface_files__HeadVar__4_60, parse_tree__write_module_interface_files__HeadVar__5_61);
#line 613 "write_module_interface_files.m"
      return;
    }
#line 613 "write_module_interface_files.m"
  }
#line 613 "write_module_interface_files.m"
}

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_3_p_0(
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_52,
#line 607 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_53,
#line 607 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_54)
#line 607 "write_module_interface_files.m"
{
#line 607 "write_module_interface_files.m"
  {
#line 607 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_27;
#line 607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_52, (MR_Integer) 1)));
#line 608 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_52, (MR_Integer) 0)));

#line 610 "write_module_interface_files.m"
    {
#line 610 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 610 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_83));
#line 610 "write_module_interface_files.m"
    }
#line 611 "write_module_interface_files.m"
    {
#line 611 "write_module_interface_files.m"
      MR_Word base;
#line 611 "write_module_interface_files.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__3_54 = base;
#line 611 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 611 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_53));
#line 611 "write_module_interface_files.m"
    }
#line 607 "write_module_interface_files.m"
  }
#line 607 "write_module_interface_files.m"
}

#line 599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__599__1_3_p_0(
#line 599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_45,
#line 599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_46,
#line 599 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_47)
#line 599 "write_module_interface_files.m"
{
#line 599 "write_module_interface_files.m"
  {
#line 599 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 602 "write_module_interface_files.m"
    {
#line 602 "write_module_interface_files.m"
      mercury__multi_map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__1_45)), parse_tree__write_module_interface_files__HeadVar__2_46, parse_tree__write_module_interface_files__HeadVar__3_47);
#line 602 "write_module_interface_files.m"
      return;
    }
#line 599 "write_module_interface_files.m"
  }
#line 599 "write_module_interface_files.m"
}

#line 589 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_2(
#line 589 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 589 "write_module_interface_files.m"
{
#line 589 "write_module_interface_files.m"
  {
#line 589 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 589 "write_module_interface_files.m"
    *((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__HeadVar__3_41) = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv1_HeadVar__3_41);
#line 589 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defns_17 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv0_Defns_17);
#line 589 "write_module_interface_files.m"
    {
#line 589 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 589 "write_module_interface_files.m"
      return;
    }
#line 589 "write_module_interface_files.m"
  }
#line 589 "write_module_interface_files.m"
}

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_3(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 590 "write_module_interface_files.m"
{
#line 590 "write_module_interface_files.m"
  {
#line 590 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 590 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__commit_0, 1);
#line 590 "write_module_interface_files.m"
  }
#line 590 "write_module_interface_files.m"
}

#line 591 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_5(
#line 591 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 591 "write_module_interface_files.m"
{
#line 591 "write_module_interface_files.m"
  {
#line 591 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 591 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__V_42_42 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv2_V_42_42);
#line 591 "write_module_interface_files.m"
    {
#line 591 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_4(parse_tree__write_module_interface_files__env_ptr);
#line 591 "write_module_interface_files.m"
      return;
    }
#line 591 "write_module_interface_files.m"
  }
#line 591 "write_module_interface_files.m"
}

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_4(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 590 "write_module_interface_files.m"
{
#line 590 "write_module_interface_files.m"
  {
#line 590 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 590 "write_module_interface_files.m"
    {
#line 591 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 593 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Details_20;
#line 594 "write_module_interface_files.m"
      MR_Integer parse_tree__write_module_interface_files__V_21_21;

#line 591 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defn_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__V_42_42, (MR_Integer) 0)));
#line 591 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__V_42_42, (MR_Integer) 1)));
#line 593 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defn_18)) == (MR_mktag((MR_Integer) 2)));
#line 593 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded)
#line 593 "write_module_interface_files.m"
        {
#line 593 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Details_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defn_18, (MR_Integer) 0)));
#line 593 "write_module_interface_files.m"
          {
#line 594 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Details_20)) == (MR_mktag((MR_Integer) 1)));
#line 594 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded)
#line 594 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_20, (MR_Integer) 0)));
#line 594 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded);
#line 593 "write_module_interface_files.m"
          }
#line 593 "write_module_interface_files.m"
        }
#line 592 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded);
#line 592 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded)
#line 592 "write_module_interface_files.m"
        {
#line 592 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_3(parse_tree__write_module_interface_files__env_ptr);
#line 592 "write_module_interface_files.m"
          return;
        }
#line 590 "write_module_interface_files.m"
    }
#line 590 "write_module_interface_files.m"
  }
#line 590 "write_module_interface_files.m"
}

#line 590 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_6(
#line 590 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 590 "write_module_interface_files.m"
{
#line 590 "write_module_interface_files.m"
  {
#line 590 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 590 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__commit_0) == 0)
#line 590 "write_module_interface_files.m"
      {
#line 590 "write_module_interface_files.m"
        {
#line 591 "write_module_interface_files.m"
          {
#line 591 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv2_V_42_42, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__Defns_17, parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_5, parse_tree__write_module_interface_files__env_ptr);
          }
#line 590 "write_module_interface_files.m"
        }
#line 590 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = MR_FALSE;
#line 590 "write_module_interface_files.m"
      }
#line 590 "write_module_interface_files.m"
    else
#line 590 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = MR_TRUE;
#line 590 "write_module_interface_files.m"
  }
#line 590 "write_module_interface_files.m"
}

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_1(
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 587 "write_module_interface_files.m"
{
#line 587 "write_module_interface_files.m"
  {
#line 587 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 590 "write_module_interface_files.m"
    {
#line 590 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_6(parse_tree__write_module_interface_files__env_ptr);
    }
#line 590 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = !((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded);
#line 587 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded)
#line 587 "write_module_interface_files.m"
      {
#line 3554 "parse_tree.write_module_interface_files.c"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 596 "write_module_interface_files.m"
        {
#line 596 "write_module_interface_files.m"
          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded = mercury__multi_map__contains_2_p_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeCtorInfo_97_97, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeInfo_100_100, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37, ((MR_Box) (*((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__HeadVar__3_41))));
        }
#line 596 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__succeeded)
#line 596 "write_module_interface_files.m"
          {
#line 596 "write_module_interface_files.m"
            ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont)((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont_env_ptr);
#line 596 "write_module_interface_files.m"
            return;
          }
#line 587 "write_module_interface_files.m"
      }
#line 587 "write_module_interface_files.m"
  }
#line 587 "write_module_interface_files.m"
}

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0(
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37,
#line 587 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40,
#line 587 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_41,
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr)
#line 587 "write_module_interface_files.m"
{
#line 587 "write_module_interface_files.m"
  {
#line 587 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__STATE_VARIABLE_IntTypesMap_37_37 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37;
#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__HeadVar__3_41 = parse_tree__write_module_interface_files__HeadVar__3_41;
#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont = parse_tree__write_module_interface_files__cont;
#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__cont_env_ptr = parse_tree__write_module_interface_files__cont_env_ptr;
#line 3605 "parse_tree.write_module_interface_files.c"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 589 "write_module_interface_files.m"
    {
#line 589 "write_module_interface_files.m"
      mercury__map__member_3_p_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__TypeCtorInfo_97_97, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv1_HeadVar__3_41, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_env_0__conv0_Defns_17, parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0_2, &parse_tree__write_module_interface_files__env);
    }
#line 587 "write_module_interface_files.m"
  }
#line 587 "write_module_interface_files.m"
}

#line 1147 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_pair_0_0(
#line 1147 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1147 "write_module_interface_files.m"
{
#line 1147 "write_module_interface_files.m"
  {
#line 1147 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1147 "write_module_interface_files.m"
    {
#line 1147 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1147 "write_module_interface_files.m"
      return;
    }
#line 1147 "write_module_interface_files.m"
  }
#line 1147 "write_module_interface_files.m"
}

#line 1147 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_pair_0_0(
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1147 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1147 "write_module_interface_files.m"
{
#line 1147 "write_module_interface_files.m"
  {
#line 1147 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1147 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1147 "write_module_interface_files.m"
    {
#line 1147 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1147 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1147 "write_module_interface_files.m"
  }
#line 1147 "write_module_interface_files.m"
}

#line 1145 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____type_defn_map_0_0(
#line 1145 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1145 "write_module_interface_files.m"
{
#line 1145 "write_module_interface_files.m"
  {
#line 1145 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1145 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_4 = parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1145 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_5 = parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1145 "write_module_interface_files.m"
    {
#line 1145 "write_module_interface_files.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], parse_tree__write_module_interface_files__HeadVar__1_1, ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_5)));
#line 1145 "write_module_interface_files.m"
      return;
    }
#line 1145 "write_module_interface_files.m"
  }
#line 1145 "write_module_interface_files.m"
}

#line 1145 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____type_defn_map_0_0(
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1145 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1145 "write_module_interface_files.m"
{
#line 1145 "write_module_interface_files.m"
  {
#line 1145 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1145 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar1_3 = parse_tree__write_module_interface_files__HeadVar__1_1;
#line 1145 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Cast_HeadVar2_4 = parse_tree__write_module_interface_files__HeadVar__2_2;

#line 1145 "write_module_interface_files.m"
    {
#line 1145 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_module_interface_files__Cast_HeadVar2_4)));
    }
#line 1145 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1145 "write_module_interface_files.m"
  }
#line 1145 "write_module_interface_files.m"
}

#line 640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____module_specifier_in_defn_0_0(
#line 640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 640 "write_module_interface_files.m"
{
#line 640 "write_module_interface_files.m"
  {
#line 640 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastX_9 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastY_10 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 640 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CastX_9 == parse_tree__write_module_interface_files__CastY_10);
#line 640 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 3765 "parse_tree.write_module_interface_files.c"
      *parse_tree__write_module_interface_files__HeadVar__1_1 = (MR_Integer) 0;
#line 640 "write_module_interface_files.m"
    else
#line 640 "write_module_interface_files.m"
      {
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 640 "write_module_interface_files.m"
        {
#line 640 "write_module_interface_files.m"
          mercury__term____Compare____context_0_0(&parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__V_4_4, parse_tree__write_module_interface_files__V_6_6);
        }
#line 3787 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_8_8 == (MR_Integer) 0);
#line 640 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 640 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 640 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__V_8_8;
#line 640 "write_module_interface_files.m"
        else
#line 640 "write_module_interface_files.m"
          {
#line 640 "write_module_interface_files.m"
            mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__V_5_5, parse_tree__write_module_interface_files__V_7_7);
#line 640 "write_module_interface_files.m"
            return;
          }
#line 640 "write_module_interface_files.m"
      }
#line 640 "write_module_interface_files.m"
  }
#line 640 "write_module_interface_files.m"
}

#line 640 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____module_specifier_in_defn_0_0(
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 640 "write_module_interface_files.m"
{
#line 640 "write_module_interface_files.m"
  {
#line 640 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastX_7 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__1_1;
#line 640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__CastY_8 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;

#line 640 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CastX_7 == parse_tree__write_module_interface_files__CastY_8);
#line 640 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 640 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 640 "write_module_interface_files.m"
    else
#line 640 "write_module_interface_files.m"
      {
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 640 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));

#line 3848 "parse_tree.write_module_interface_files.c"
        {
#line 3850 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__succeeded = mercury__term____Unify____context_0_0(parse_tree__write_module_interface_files__V_3_3, parse_tree__write_module_interface_files__V_5_5);
        }
#line 640 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 3855 "parse_tree.write_module_interface_files.c"
          {
#line 3857 "parse_tree.write_module_interface_files.c"
            return parse_tree__write_module_interface_files__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_module_interface_files__V_4_4, parse_tree__write_module_interface_files__V_6_6);
          }
#line 640 "write_module_interface_files.m"
      }
#line 640 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 640 "write_module_interface_files.m"
  }
#line 640 "write_module_interface_files.m"
}

#line 1640 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files____Compare____cur_pos_0_0(
#line 1640 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1640 "write_module_interface_files.m"
{
#line 1640 "write_module_interface_files.m"
  {
#line 1640 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar1_4 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__2_2;
#line 1640 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__Cast_HeadVar2_5 = (MR_Integer) parse_tree__write_module_interface_files__HeadVar__3_3;

#line 1640 "write_module_interface_files.m"
    {
#line 1640 "write_module_interface_files.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__write_module_interface_files__HeadVar__1_1, parse_tree__write_module_interface_files__Cast_HeadVar1_4, parse_tree__write_module_interface_files__Cast_HeadVar2_5);
#line 1640 "write_module_interface_files.m"
      return;
    }
#line 1640 "write_module_interface_files.m"
  }
#line 1640 "write_module_interface_files.m"
}

#line 1640 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____cur_pos_0_0(
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_1,
#line 1640 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1640 "write_module_interface_files.m"
{
#line 3910 "parse_tree.write_module_interface_files.c"
  {
#line 3912 "parse_tree.write_module_interface_files.c"
    MR_bool parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__HeadVar__2_1 == parse_tree__write_module_interface_files__HeadVar__2_2);

#line 3915 "parse_tree.write_module_interface_files.c"
    return parse_tree__write_module_interface_files__succeeded;
#line 3917 "parse_tree.write_module_interface_files.c"
  }
#line 1640 "write_module_interface_files.m"
}

#line 1992 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__compare_by_symname_3_p_0(
#line 1992 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemA_4,
#line 1992 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemB_5,
#line 1992 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Result_6)
#line 1992 "write_module_interface_files.m"
{
#line 2000 "write_module_interface_files.m"
  {
#line 2000 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 2000 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameA_7;
#line 2000 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymNameB_8;

#line 1980 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1983 "write_module_interface_files.m"
      {
#line 1983 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModeDecl_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_30_30;
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_31_31;
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1984 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1984 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_36_36;

#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 0)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 1)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 2)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 3)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 4)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 5)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 6)));
#line 1984 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_16, (MR_Integer) 7)));
#line 1983 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1983 "write_module_interface_files.m"
      }
#line 1980 "write_module_interface_files.m"
    else
#line 1980 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1980 "write_module_interface_files.m"
        {
#line 1980 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPredDecl_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemA_4, (MR_Integer) 1)));
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1981 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1981 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_29_29;

#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__SymNameA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 0)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 1)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 2)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 3)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 4)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 5)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 6)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 7)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 8)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 9)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 10)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 11)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 12)));
#line 1981 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_15, (MR_Integer) 13)));
#line 1980 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1980 "write_module_interface_files.m"
        }
#line 1980 "write_module_interface_files.m"
      else
#line 1980 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1996 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1980 "write_module_interface_files.m"
      {
#line 1980 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1983 "write_module_interface_files.m"
          {
#line 1983 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModeDecl_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 1984 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_59_59;
#line 1984 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_60_60;

#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 0)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 1)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 2)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 3)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 4)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 5)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 6)));
#line 1984 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModeDecl_40, (MR_Integer) 7)));
#line 1983 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1983 "write_module_interface_files.m"
          }
#line 1980 "write_module_interface_files.m"
        else
#line 1980 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ItemB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1980 "write_module_interface_files.m"
            {
#line 1980 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ItemPredDecl_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ItemB_5, (MR_Integer) 1)));
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_41_41;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_42_42;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_43_43;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_44_44;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_45_45;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_46_46;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_47_47;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_48_48;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_50_50;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 1981 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 1981 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__V_53_53;

#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__SymNameB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 0)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 1)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 2)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 3)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 4)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 5)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 6)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 7)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 8)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 9)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 10)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 11)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 12)));
#line 1981 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPredDecl_39, (MR_Integer) 13)));
#line 1980 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1980 "write_module_interface_files.m"
            }
#line 1980 "write_module_interface_files.m"
          else
#line 1980 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1980 "write_module_interface_files.m"
      }
#line 2000 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1999 "write_module_interface_files.m"
      {
#line 1999 "write_module_interface_files.m"
        mdbcomp__sym_name____Compare____sym_name_0_0(parse_tree__write_module_interface_files__Result_6, parse_tree__write_module_interface_files__SymNameA_7, parse_tree__write_module_interface_files__SymNameB_8);
#line 1999 "write_module_interface_files.m"
        return;
      }
#line 2000 "write_module_interface_files.m"
    else
#line 2001 "write_module_interface_files.m"
      {
#line 2001 "write_module_interface_files.m"
        {
#line 2001 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.compare_by_symname\'/3", (MR_String) "symname not found");
#line 2001 "write_module_interface_files.m"
          return;
        }
#line 2001 "write_module_interface_files.m"
      }
#line 2000 "write_module_interface_files.m"
  }
#line 1992 "write_module_interface_files.m"
}

#line 1987 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__symname_orderable_1_p_0(
#line 1987 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1987 "write_module_interface_files.m"
{
#line 1980 "write_module_interface_files.m"
  {
#line 1980 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1980 "write_module_interface_files.m"
    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1983 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1980 "write_module_interface_files.m"
    else
#line 1980 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1980 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1980 "write_module_interface_files.m"
      else
#line 1980 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1980 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1980 "write_module_interface_files.m"
  }
#line 1987 "write_module_interface_files.m"
}

#line 1868 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__chunkable_item_1_f_0(
#line 1868 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_3)
#line 1868 "write_module_interface_files.m"
{
#line 1872 "write_module_interface_files.m"
  {
#line 1872 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1872 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Chunkable_4;

#line 1872 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 2))))
#line 1872 "write_module_interface_files.m"
      {
#line 1872 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_3), (MR_Integer) 2);
#line 1872 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 1873 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 1873 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));

#line 1910 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1911 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1910 "write_module_interface_files.m"
        else
#line 1924 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1872 "write_module_interface_files.m"
      }
#line 1872 "write_module_interface_files.m"
    else
#line 1872 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1876 "write_module_interface_files.m"
        {
#line 1876 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 1)));
#line 1876 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 0)));
#line 1877 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 1)));
#line 1877 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 2)));
#line 1877 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_9, (MR_Integer) 3)));

#line 1956 "write_module_interface_files.m"
          if (((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 8)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 14)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 27)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_10, (MR_Integer) 0)))) == (MR_Integer) 20))))))
#line 1968 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1956 "write_module_interface_files.m"
          else
#line 1957 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1876 "write_module_interface_files.m"
        }
#line 1872 "write_module_interface_files.m"
      else
#line 1872 "write_module_interface_files.m"
        if (((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_3, (MR_Integer) 0)))) == (MR_Integer) 12))))))
#line 1899 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 0;
#line 1872 "write_module_interface_files.m"
        else
#line 1893 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable_4 = (MR_Integer) 1;
#line 1872 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Chunkable_4;
#line 1872 "write_module_interface_files.m"
  }
#line 1868 "write_module_interface_files.m"
}

#line 1855 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_chunkable_1_p_0(
#line 1855 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1855 "write_module_interface_files.m"
{
#line 1872 "write_module_interface_files.m"
  {
#line 1872 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1872 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2))))
#line 1872 "write_module_interface_files.m"
      {
#line 1872 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1872 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1873 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1873 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1910 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1911 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1910 "write_module_interface_files.m"
        else
#line 1910 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1872 "write_module_interface_files.m"
      }
#line 1872 "write_module_interface_files.m"
    else
#line 1872 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1876 "write_module_interface_files.m"
        {
#line 1876 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1876 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1877 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1877 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1877 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1956 "write_module_interface_files.m"
          if (((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 21)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 1957 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1956 "write_module_interface_files.m"
          else
#line 1956 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1876 "write_module_interface_files.m"
        }
#line 1872 "write_module_interface_files.m"
      else
#line 1872 "write_module_interface_files.m"
        if (((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 0)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1893 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1872 "write_module_interface_files.m"
        else
#line 1872 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1872 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1872 "write_module_interface_files.m"
  }
#line 1855 "write_module_interface_files.m"
}

#line 1736 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_reorderable_1_p_0(
#line 1736 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1736 "write_module_interface_files.m"
{
#line 1756 "write_module_interface_files.m"
  {
#line 1756 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1756 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2))))
#line 1756 "write_module_interface_files.m"
      {
#line 1756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_6 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1756 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 0)));
#line 1757 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 1)));
#line 1757 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_6, (MR_Integer) 2)));

#line 1794 "write_module_interface_files.m"
        if (((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 1795 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1794 "write_module_interface_files.m"
        else
#line 1794 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1756 "write_module_interface_files.m"
      }
#line 1756 "write_module_interface_files.m"
    else
#line 1756 "write_module_interface_files.m"
      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1760 "write_module_interface_files.m"
        {
#line 1760 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ItemPragma_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 1)));
#line 1760 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Pragma_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 0)));
#line 1761 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 1)));
#line 1761 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 2)));
#line 1761 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_10, (MR_Integer) 3)));

#line 1841 "write_module_interface_files.m"
          if (((((((((((((((((((((((((((((((((((((((((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 23)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 22)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 8)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 24)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 12)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 11)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 16)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 17)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 18)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 29)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 28)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 26)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 25)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 13)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 21)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 19)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_11, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 1842 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1841 "write_module_interface_files.m"
          else
#line 1841 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1760 "write_module_interface_files.m"
        }
#line 1756 "write_module_interface_files.m"
      else
#line 1756 "write_module_interface_files.m"
        if (((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_2, (MR_Integer) 0)))) == (MR_Integer) 8))))))
#line 1771 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1756 "write_module_interface_files.m"
        else
#line 1756 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1756 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1756 "write_module_interface_files.m"
  }
#line 1736 "write_module_interface_files.m"
}

#line 1728 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__import_or_use_1_p_0(
#line 1728 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1)
#line 1728 "write_module_interface_files.m"
{
#line 1730 "write_module_interface_files.m"
  {
#line 1730 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
#line 1730 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_2;
#line 1730 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_3;
#line 1731 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_4_4;
#line 1731 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_5_5;

#line 1730 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1730 "write_module_interface_files.m"
      {
#line 1730 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_2 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__HeadVar__1_1), (MR_Integer) 2);
#line 1731 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 0)));
#line 1731 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 1)));
#line 1731 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_2, (MR_Integer) 2)));
#line 1733 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1732 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1733 "write_module_interface_files.m"
        else
#line 1733 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1733 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1733 "write_module_interface_files.m"
          else
#line 1733 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1730 "write_module_interface_files.m"
      }
#line 1730 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1730 "write_module_interface_files.m"
  }
#line 1728 "write_module_interface_files.m"
}

#line 1717 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_5(
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1717 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1717 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1717 "write_module_interface_files.m"
{
#line 1717 "write_module_interface_files.m"
  {
#line 1717 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1717 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Result_6;

#line 1717 "write_module_interface_files.m"
    {
#line 1717 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__compare_by_symname_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_Result_6);
    }
#line 1717 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Result_6));
#line 1717 "write_module_interface_files.m"
  }
#line 1717 "write_module_interface_files.m"
}

#line 1713 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_4(
#line 1713 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1713 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1713 "write_module_interface_files.m"
{
#line 1713 "write_module_interface_files.m"
  {
#line 1713 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1713 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1713 "write_module_interface_files.m"
    {
#line 1713 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__symname_orderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1713 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1713 "write_module_interface_files.m"
  }
#line 1713 "write_module_interface_files.m"
}

#line 1711 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_3(
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1711 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1711 "write_module_interface_files.m"
{
#line 1711 "write_module_interface_files.m"
  {
#line 1711 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1711 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1711 "write_module_interface_files.m"
    {
#line 1711 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__import_or_use_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1711 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1711 "write_module_interface_files.m"
  }
#line 1711 "write_module_interface_files.m"
}

#line 1709 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_2(
#line 1709 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1709 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1709 "write_module_interface_files.m"
{
#line 1709 "write_module_interface_files.m"
  {
#line 1709 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1709 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1709 "write_module_interface_files.m"
    {
#line 1709 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_reorderable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1709 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1709 "write_module_interface_files.m"
  }
#line 1709 "write_module_interface_files.m"
}

#line 1708 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0_1(
#line 1708 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1708 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1708 "write_module_interface_files.m"
{
#line 1708 "write_module_interface_files.m"
  {
#line 1708 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1708 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1708 "write_module_interface_files.m"
    {
#line 1708 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_chunkable_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1708 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1708 "write_module_interface_files.m"
  }
#line 1708 "write_module_interface_files.m"
}

#line 1701 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_order_items_2_p_0(
#line 1701 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1701 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__2_2)
#line 1701 "write_module_interface_files.m"
{
#line 1703 "write_module_interface_files.m"
  {
#line 1703 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1703 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1703 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1703 "write_module_interface_files.m"
    else
#line 1704 "write_module_interface_files.m"
      {
#line 1704 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1704 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1704 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Chunkable0_6;

#line 1705 "write_module_interface_files.m"
        {
#line 1705 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__Chunkable0_6 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__Item0_3);
        }
#line 1722 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__Chunkable0_6 == (MR_Integer) 0))
#line 1723 "write_module_interface_files.m"
          {
#line 1723 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedItemsTail_17;

#line 1724 "write_module_interface_files.m"
            {
#line 1724 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__OrderedItemsTail_17);
            }
#line 1725 "write_module_interface_files.m"
            {
#line 1725 "write_module_interface_files.m"
              MR_Word base;
#line 1725 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__2_2 = base;
#line 1725 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1725 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__OrderedItemsTail_17));
#line 1725 "write_module_interface_files.m"
            }
#line 1723 "write_module_interface_files.m"
          }
#line 1722 "write_module_interface_files.m"
        else
#line 1707 "write_module_interface_files.m"
          {
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__FrontItems_7;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__RemainItems_8;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ReorderableItems_9;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonReorderableItems_10;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ImportReorderableItems_11;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonImportReorderableItems_12;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__SymNameItems_13;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NonSymNameItems_14;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedSymNameItems_15;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__OrderedRemainItems_16;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1707 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_28_28;

#line 1708 "write_module_interface_files.m"
            {
#line 1708 "write_module_interface_files.m"
              mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[25], parse_tree__write_module_interface_files__Items0_4, &parse_tree__write_module_interface_files__FrontItems_7, &parse_tree__write_module_interface_files__RemainItems_8);
            }
#line 1709 "write_module_interface_files.m"
            {
#line 1709 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1709 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_3));
#line 1709 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__FrontItems_7));
#line 1709 "write_module_interface_files.m"
            }
#line 1709 "write_module_interface_files.m"
            {
#line 1709 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[26], parse_tree__write_module_interface_files__V_20_20, &parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__NonReorderableItems_10);
            }
#line 1711 "write_module_interface_files.m"
            {
#line 1711 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[27], parse_tree__write_module_interface_files__ReorderableItems_9, &parse_tree__write_module_interface_files__ImportReorderableItems_11, &parse_tree__write_module_interface_files__NonImportReorderableItems_12);
            }
#line 1713 "write_module_interface_files.m"
            {
#line 1713 "write_module_interface_files.m"
              mercury__list__filter_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[28], parse_tree__write_module_interface_files__NonReorderableItems_10, &parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__NonSymNameItems_14);
            }
#line 1717 "write_module_interface_files.m"
            {
#line 1717 "write_module_interface_files.m"
              mercury__list__sort_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[29], parse_tree__write_module_interface_files__SymNameItems_13, &parse_tree__write_module_interface_files__OrderedSymNameItems_15);
            }
#line 1718 "write_module_interface_files.m"
            {
#line 1718 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__RemainItems_8, &parse_tree__write_module_interface_files__OrderedRemainItems_16);
            }
#line 1719 "write_module_interface_files.m"
            {
#line 1719 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_24_24 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__ImportReorderableItems_11);
            }
#line 1720 "write_module_interface_files.m"
            {
#line 1720 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_26_26 = mercury__list__sort_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonImportReorderableItems_12);
            }
#line 1721 "write_module_interface_files.m"
            {
#line 1721 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_28_28 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__NonSymNameItems_14, parse_tree__write_module_interface_files__OrderedRemainItems_16);
            }
#line 1721 "write_module_interface_files.m"
            {
#line 1721 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_27_27 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__OrderedSymNameItems_15, parse_tree__write_module_interface_files__V_28_28);
            }
#line 1720 "write_module_interface_files.m"
            {
#line 1720 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_26_26, parse_tree__write_module_interface_files__V_27_27);
            }
#line 1719 "write_module_interface_files.m"
            {
#line 1719 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_24_24, parse_tree__write_module_interface_files__V_25_25);
            }
#line 1707 "write_module_interface_files.m"
          }
#line 1704 "write_module_interface_files.m"
      }
#line 1703 "write_module_interface_files.m"
  }
#line 1701 "write_module_interface_files.m"
}

#line 1645 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(
#line 1645 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1645 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CurPos_2,
#line 1645 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 1645 "write_module_interface_files.m"
{
#line 1648 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1648 "write_module_interface_files.m"
    {
#line 1648 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1648 "write_module_interface_files.m"
      {
#line 1648 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1648 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1648 "write_module_interface_files.m"
        else
#line 1648 "write_module_interface_files.m"
          {
#line 1648 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1648 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));

#line 1648 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1649 "write_module_interface_files.m"
              {
#line 1649 "write_module_interface_files.m"
                {
#line 1649 "write_module_interface_files.m"
                  MR_Word base;
#line 1649 "write_module_interface_files.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 1649 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_49_49));
#line 1649 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1649 "write_module_interface_files.m"
                }
#line 1649 "write_module_interface_files.m"
              }
#line 1648 "write_module_interface_files.m"
            else
#line 1650 "write_module_interface_files.m"
              {
#line 1650 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Item2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_48_48, (MR_Integer) 0)));
#line 1650 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Items0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_48_48, (MR_Integer) 1)));
#line 1652 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_14;
#line 1652 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn2_17;
#line 1652 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1652 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1654 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_15_15;
#line 1654 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_16_16;
#line 1656 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1656 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_19_19;

#line 1652 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CurPos_2 == (MR_Integer) 0);
#line 1652 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1652 "write_module_interface_files.m"
                  {
#line 1653 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1653 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1653 "write_module_interface_files.m"
                      {
#line 1653 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ItemModuleDefn1_14 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1654 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 0)));
#line 1654 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 1)));
#line 1654 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_14, (MR_Integer) 2)));
#line 1654 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1652 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1652 "write_module_interface_files.m"
                          {
#line 1655 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item2_10)) == (MR_mktag((MR_Integer) 2)));
#line 1655 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1655 "write_module_interface_files.m"
                              {
#line 1655 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__ItemModuleDefn2_17 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item2_10), (MR_Integer) 2);
#line 1656 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 0)));
#line 1656 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 1)));
#line 1656 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_17, (MR_Integer) 2)));
#line 1656 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "write_module_interface_files.m"
                              }
#line 1652 "write_module_interface_files.m"
                          }
#line 1653 "write_module_interface_files.m"
                      }
#line 1652 "write_module_interface_files.m"
                  }
#line 1659 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1658 "write_module_interface_files.m"
                  {
#line 1658 "write_module_interface_files.m"
                    /* direct tailcall eliminated */
#line 1658 "write_module_interface_files.m"
                    {
#line 1658 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_11;

#line 1658 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1658 "write_module_interface_files.m"
                    }
#line 1658 "write_module_interface_files.m"
                    continue;
#line 1658 "write_module_interface_files.m"
                  }
#line 1659 "write_module_interface_files.m"
                else
#line 1667 "write_module_interface_files.m"
                  {
#line 1660 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1660 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_35_35;
#line 1660 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_39;
#line 1660 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn2_40;
#line 1662 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1662 "write_module_interface_files.m"
                    MR_Integer parse_tree__write_module_interface_files__V_21_21;
#line 1664 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1664 "write_module_interface_files.m"
                    MR_Integer parse_tree__write_module_interface_files__V_23_23;

#line 1660 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CurPos_2 == (MR_Integer) 1);
#line 1660 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1660 "write_module_interface_files.m"
                      {
#line 1661 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1661 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1661 "write_module_interface_files.m"
                          {
#line 1661 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ItemModuleDefn1_39 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1662 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 0)));
#line 1662 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 1)));
#line 1662 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_39, (MR_Integer) 2)));
#line 1662 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1660 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1660 "write_module_interface_files.m"
                              {
#line 1663 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item2_10)) == (MR_mktag((MR_Integer) 2)));
#line 1663 "write_module_interface_files.m"
                                if (parse_tree__write_module_interface_files__succeeded)
#line 1663 "write_module_interface_files.m"
                                  {
#line 1663 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__ItemModuleDefn2_40 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item2_10), (MR_Integer) 2);
#line 1664 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 0)));
#line 1664 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 1)));
#line 1664 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn2_40, (MR_Integer) 2)));
#line 1664 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1663 "write_module_interface_files.m"
                                  }
#line 1660 "write_module_interface_files.m"
                              }
#line 1661 "write_module_interface_files.m"
                          }
#line 1660 "write_module_interface_files.m"
                      }
#line 1667 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 1666 "write_module_interface_files.m"
                      {
#line 1666 "write_module_interface_files.m"
                        /* direct tailcall eliminated */
#line 1666 "write_module_interface_files.m"
                        {
#line 1666 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_11;

#line 1666 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1666 "write_module_interface_files.m"
                        }
#line 1666 "write_module_interface_files.m"
                        continue;
#line 1666 "write_module_interface_files.m"
                      }
#line 1667 "write_module_interface_files.m"
                    else
#line 1687 "write_module_interface_files.m"
                      {
#line 1687 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__NextPos_26;
#line 1687 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ItemsTail_30;
#line 1669 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1669 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_41;
#line 1670 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 1670 "write_module_interface_files.m"
                        MR_Integer parse_tree__write_module_interface_files__V_25_25;

#line 1669 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1669 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1669 "write_module_interface_files.m"
                          {
#line 1669 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ItemModuleDefn1_41 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1670 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 0)));
#line 1670 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 1)));
#line 1670 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_41, (MR_Integer) 2)));
#line 1670 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1669 "write_module_interface_files.m"
                          }
#line 1673 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 1672 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 1;
#line 1673 "write_module_interface_files.m"
                        else
#line 1678 "write_module_interface_files.m"
                          {
#line 1674 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_37_37;
#line 1674 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn1_42;
#line 1675 "write_module_interface_files.m"
                            MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1675 "write_module_interface_files.m"
                            MR_Integer parse_tree__write_module_interface_files__V_28_28;

#line 1674 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_49_49)) == (MR_mktag((MR_Integer) 2)));
#line 1674 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1674 "write_module_interface_files.m"
                              {
#line 1674 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__ItemModuleDefn1_42 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__V_49_49), (MR_Integer) 2);
#line 1675 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 0)));
#line 1675 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 1)));
#line 1675 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn1_42, (MR_Integer) 2)));
#line 1675 "write_module_interface_files.m"
                                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1674 "write_module_interface_files.m"
                              }
#line 1678 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 1677 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 0;
#line 1678 "write_module_interface_files.m"
                            else
#line 1679 "write_module_interface_files.m"
                              {
#line 1679 "write_module_interface_files.m"
                                MR_Word parse_tree__write_module_interface_files__Chunkable1_29;

#line 1679 "write_module_interface_files.m"
                                {
#line 1679 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Chunkable1_29 = parse_tree__write_module_interface_files__chunkable_item_1_f_0(parse_tree__write_module_interface_files__V_49_49);
                                }
#line 1683 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Chunkable1_29 == (MR_Integer) 0))
#line 1684 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__NextPos_26 = (MR_Integer) 2;
#line 1683 "write_module_interface_files.m"
                                else
#line 1681 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__NextPos_26 = parse_tree__write_module_interface_files__CurPos_2;
#line 1679 "write_module_interface_files.m"
                              }
#line 1678 "write_module_interface_files.m"
                          }
#line 1688 "write_module_interface_files.m"
                        {
#line 1688 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__V_48_48, parse_tree__write_module_interface_files__NextPos_26, &parse_tree__write_module_interface_files__ItemsTail_30);
                        }
#line 1689 "write_module_interface_files.m"
                        {
#line 1689 "write_module_interface_files.m"
                          MR_Word base;
#line 1689 "write_module_interface_files.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 1689 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_49_49));
#line 1689 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemsTail_30));
#line 1689 "write_module_interface_files.m"
                        }
#line 1687 "write_module_interface_files.m"
                      }
#line 1667 "write_module_interface_files.m"
                  }
#line 1650 "write_module_interface_files.m"
              }
#line 1648 "write_module_interface_files.m"
          }
#line 1648 "write_module_interface_files.m"
      }
#line 1648 "write_module_interface_files.m"
      break;
#line 1648 "write_module_interface_files.m"
    }
#line 1645 "write_module_interface_files.m"
}

#line 1621 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(
#line 1621 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1621 "write_module_interface_files.m"
{
#line 1624 "write_module_interface_files.m"
  {
#line 1624 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2)));
#line 1628 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_4;
#line 1628 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_5;
#line 1630 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_6_6;
#line 1630 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_7_7;

#line 1629 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1629 "write_module_interface_files.m"
      {
#line 1629 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_4 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1630 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 0)));
#line 1630 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 1)));
#line 1630 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_4, (MR_Integer) 2)));
#line 1632 "write_module_interface_files.m"
        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1631 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1632 "write_module_interface_files.m"
        else
#line 1632 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1632 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1632 "write_module_interface_files.m"
          else
#line 1632 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1629 "write_module_interface_files.m"
      }
#line 1624 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1624 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1624 "write_module_interface_files.m"
  }
#line 1621 "write_module_interface_files.m"
}

#line 1612 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(
#line 1612 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_2)
#line 1612 "write_module_interface_files.m"
{
#line 1614 "write_module_interface_files.m"
  {
#line 1614 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_2)) == (MR_mktag((MR_Integer) 2)));
#line 1614 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_3;
#line 1614 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_4;
#line 1616 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1616 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_6_6;

#line 1615 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1615 "write_module_interface_files.m"
      {
#line 1615 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_3 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_2), (MR_Integer) 2);
#line 1616 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ModuleDefn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 0)));
#line 1616 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 1)));
#line 1616 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_3, (MR_Integer) 2)));
#line 1618 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__ModuleDefn_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1618 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1618 "write_module_interface_files.m"
        else
#line 1618 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__ModuleDefn_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1617 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1618 "write_module_interface_files.m"
          else
#line 1618 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1615 "write_module_interface_files.m"
      }
#line 1614 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1614 "write_module_interface_files.m"
  }
#line 1612 "write_module_interface_files.m"
}

#line 1609 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0_1(
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1609 "write_module_interface_files.m"
{
#line 1609 "write_module_interface_files.m"
  {
#line 1609 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1609 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1609 "write_module_interface_files.m"
    {
#line 1609 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1609 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1609 "write_module_interface_files.m"
  }
#line 1609 "write_module_interface_files.m"
}

#line 1599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__order_items_2_p_0(
#line 1599 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 1599 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 1599 "write_module_interface_files.m"
{
#line 1601 "write_module_interface_files.m"
  {
#line 1601 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_12_12;
#line 1601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Items1_5;
#line 1601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Items2_6;
#line 1601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems2_7;
#line 1601 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_9;
#line 1609 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1602 "write_module_interface_files.m"
    {
#line 1602 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 2, &parse_tree__write_module_interface_files__Items1_5);
    }
#line 1603 "write_module_interface_files.m"
    {
#line 1603 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items1_5, &parse_tree__write_module_interface_files__Items2_6);
    }
#line 5399 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1608 "write_module_interface_files.m"
    {
#line 1608 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, parse_tree__write_module_interface_files__Items2_6, &parse_tree__write_module_interface_files__RevItems2_7);
    }
#line 1609 "write_module_interface_files.m"
    {
#line 1609 "write_module_interface_files.m"
      mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[24], parse_tree__write_module_interface_files__RevItems2_7, &parse_tree__write_module_interface_files__V_8_8, &parse_tree__write_module_interface_files__RevItems_9);
    }
#line 1610 "write_module_interface_files.m"
    {
#line 1610 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_12, parse_tree__write_module_interface_files__RevItems_9, parse_tree__write_module_interface_files__Items_4);
#line 1610 "write_module_interface_files.m"
      return;
    }
#line 1601 "write_module_interface_files.m"
  }
#line 1599 "write_module_interface_files.m"
}

#line 1571 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_10(
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1571 "write_module_interface_files.m"
{
#line 1571 "write_module_interface_files.m"
  {
#line 1571 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1571 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1571 "write_module_interface_files.m"
    {
#line 1571 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1573__1_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1571 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1571 "write_module_interface_files.m"
  }
#line 1571 "write_module_interface_files.m"
}

#line 1561 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_5(
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1561 "write_module_interface_files.m"
{
#line 1561 "write_module_interface_files.m"
  {
#line 1561 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1561 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1561 "write_module_interface_files.m"
    {
#line 1561 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1561 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1561 "write_module_interface_files.m"
  }
#line 1561 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0, 1);
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23);
#line 1555 "write_module_interface_files.m"
    {
#line 1555 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 1555 "write_module_interface_files.m"
      return;
    }
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_2(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1556 "write_module_interface_files.m"
    {
#line 1556 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17 = parse_tree__item_util__item_needs_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_23);
    }
#line 1556 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_17_17 == (MR_Integer) 1);
#line 1556 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1556 "write_module_interface_files.m"
      {
#line 1556 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 1556 "write_module_interface_files.m"
        return;
      }
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_0) == 0)
#line 1555 "write_module_interface_files.m"
      {
#line 1555 "write_module_interface_files.m"
        {
#line 1555 "write_module_interface_files.m"
          {
#line 1555 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv0_Item_23, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15, parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1555 "write_module_interface_files.m"
        }
#line 1555 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_FALSE;
#line 1555 "write_module_interface_files.m"
      }
#line 1555 "write_module_interface_files.m"
    else
#line 1555 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_TRUE;
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1, 1);
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24);
#line 1565 "write_module_interface_files.m"
    {
#line 1565 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(parse_tree__write_module_interface_files__env_ptr);
#line 1565 "write_module_interface_files.m"
      return;
    }
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_7(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    {
#line 1566 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_5_5;
#line 1566 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_6_6;

#line 1566 "write_module_interface_files.m"
      {
#line 1566 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20 = parse_tree__item_util__item_needs_foreign_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__Item_24);
      }
#line 1566 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1566 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1566 "write_module_interface_files.m"
        {
#line 1566 "write_module_interface_files.m"
          {
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 1566 "write_module_interface_files.m"
          }
#line 1566 "write_module_interface_files.m"
          {
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_6(parse_tree__write_module_interface_files__env_ptr);
#line 1566 "write_module_interface_files.m"
            return;
          }
#line 1566 "write_module_interface_files.m"
        }
#line 1565 "write_module_interface_files.m"
    }
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__commit_1) == 0)
#line 1565 "write_module_interface_files.m"
      {
#line 1565 "write_module_interface_files.m"
        {
#line 1565 "write_module_interface_files.m"
          {
#line 1565 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__conv1_Item_24, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19, parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_8, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1565 "write_module_interface_files.m"
        }
#line 1565 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_FALSE;
#line 1565 "write_module_interface_files.m"
      }
#line 1565 "write_module_interface_files.m"
    else
#line 1565 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded = MR_TRUE;
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1550 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(
#line 1550 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15,
#line 1550 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16)
#line 1550 "write_module_interface_files.m"
{
#line 1550 "write_module_interface_files.m"
  {
#line 1550 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 1550 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15 = parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_15;
#line 1555 "write_module_interface_files.m"
    {
#line 1555 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_4(&parse_tree__write_module_interface_files__env);
    }
#line 1560 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15;
#line 1560 "write_module_interface_files.m"
    else
#line 1561 "write_module_interface_files.m"
      {
#line 1561 "write_module_interface_files.m"
        {
#line 1561 "write_module_interface_files.m"
          mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[22], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_0_15, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19);
        }
#line 1561 "write_module_interface_files.m"
      }
#line 1565 "write_module_interface_files.m"
    {
#line 1565 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_9(&parse_tree__write_module_interface_files__env);
    }
#line 1570 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__succeeded)
#line 1570 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19;
#line 1570 "write_module_interface_files.m"
    else
#line 1578 "write_module_interface_files.m"
      {
#line 1579 "write_module_interface_files.m"
        {
#line 1579 "write_module_interface_files.m"
          mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[23], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0_env_0__STATE_VARIABLE_Items_19_19, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_16);
#line 1579 "write_module_interface_files.m"
          return;
        }
#line 1578 "write_module_interface_files.m"
      }
#line 1550 "write_module_interface_files.m"
  }
#line 1550 "write_module_interface_files.m"
}

#line 1492 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1492 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3,
#line 1492 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4)
#line 1492 "write_module_interface_files.m"
{
#line 1495 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1495 "write_module_interface_files.m"
    {
#line 1495 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1495 "write_module_interface_files.m"
      {
#line 1495 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1495 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 1495 "write_module_interface_files.m"
        else
#line 1496 "write_module_interface_files.m"
          {
#line 1496 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1496 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1496 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17;
#line 1499 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__AbstractItem_13;

#line 1497 "write_module_interface_files.m"
            {
#line 1497 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_defn_3_p_0(parse_tree__write_module_interface_files__Item_9, parse_tree__write_module_interface_files__HeadVar__2_2, &parse_tree__write_module_interface_files__AbstractItem_13);
            }
#line 1499 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1498 "write_module_interface_files.m"
              {
#line 1498 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_13));
#line 1498 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1498 "write_module_interface_files.m"
              }
#line 1499 "write_module_interface_files.m"
            else
#line 1501 "write_module_interface_files.m"
              {
#line 1501 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__AbstractItem_21;

#line 1499 "write_module_interface_files.m"
                {
#line 1499 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = parse_tree__item_util__make_abstract_unify_compare_3_p_0(parse_tree__write_module_interface_files__Item_9, parse_tree__write_module_interface_files__HeadVar__2_2, &parse_tree__write_module_interface_files__AbstractItem_21);
                }
#line 1501 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1500 "write_module_interface_files.m"
                  {
#line 1500 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbstractItem_21));
#line 1500 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1500 "write_module_interface_files.m"
                  }
#line 1501 "write_module_interface_files.m"
                else
#line 5879 "parse_tree.write_module_interface_files.c"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 5881 "parse_tree.write_module_interface_files.c"
                    {
#line 5883 "parse_tree.write_module_interface_files.c"
                      MR_Word parse_tree__write_module_interface_files__ItemPragma_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 1)));
#line 5885 "parse_tree.write_module_interface_files.c"
                      MR_Word parse_tree__write_module_interface_files__Pragma_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 0)));
#line 1527 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 1)));
#line 1527 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 2)));
#line 1527 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_31, (MR_Integer) 3)));
#line 1531 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_36_36;

#line 1531 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1531 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1531 "write_module_interface_files.m"
                        {
#line 1531 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_32, (MR_Integer) 1)));
#line 1505 "write_module_interface_files.m"
                          {
#line 1505 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_9));
#line 1505 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1505 "write_module_interface_files.m"
                          }
#line 1531 "write_module_interface_files.m"
                        }
#line 1531 "write_module_interface_files.m"
                      else
#line 1507 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 5920 "parse_tree.write_module_interface_files.c"
                    }
#line 5922 "parse_tree.write_module_interface_files.c"
                  else
#line 5924 "parse_tree.write_module_interface_files.c"
                    if (((((((((((((((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 2)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 0)))))) || (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_9, (MR_Integer) 0)))) == (MR_Integer) 1))))))
#line 1505 "write_module_interface_files.m"
                      {
#line 1505 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_9));
#line 1505 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3));
#line 1505 "write_module_interface_files.m"
                      }
#line 5936 "parse_tree.write_module_interface_files.c"
                    else
#line 1507 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3;
#line 1501 "write_module_interface_files.m"
              }
#line 1510 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1510 "write_module_interface_files.m"
            {
#line 1510 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_10;
#line 1510 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_17_17;

#line 1510 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_3;
#line 1510 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1510 "write_module_interface_files.m"
            }
#line 1510 "write_module_interface_files.m"
            continue;
#line 1496 "write_module_interface_files.m"
          }
#line 1495 "write_module_interface_files.m"
      }
#line 1495 "write_module_interface_files.m"
      break;
#line 1495 "write_module_interface_files.m"
    }
#line 1492 "write_module_interface_files.m"
}

#line 1609 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_11(
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1609 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1609 "write_module_interface_files.m"
{
#line 1609 "write_module_interface_files.m"
  {
#line 1609 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1609 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1609 "write_module_interface_files.m"
    {
#line 1609 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__interface_or_import_marker_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1609 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1609 "write_module_interface_files.m"
  }
#line 1609 "write_module_interface_files.m"
}

#line 1571 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_10(
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1571 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1571 "write_module_interface_files.m"
{
#line 1571 "write_module_interface_files.m"
  {
#line 1571 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1571 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1571 "write_module_interface_files.m"
    {
#line 1571 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__IntroducedFrom__pred__maybe_strip_import_decls__1573__1_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1571 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1571 "write_module_interface_files.m"
  }
#line 1571 "write_module_interface_files.m"
}

#line 1561 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_5(
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1561 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1561 "write_module_interface_files.m"
{
#line 1561 "write_module_interface_files.m"
  {
#line 1561 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1561 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1561 "write_module_interface_files.m"
    {
#line 1561 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__not_import_or_use_item_1_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1561 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1561 "write_module_interface_files.m"
  }
#line 1561 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0, 1);
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_3(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32);
#line 1555 "write_module_interface_files.m"
    {
#line 1555 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 1555 "write_module_interface_files.m"
      return;
    }
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_2(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1556 "write_module_interface_files.m"
    {
#line 1556 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26 = parse_tree__item_util__item_needs_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_32);
    }
#line 1556 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_26_26 == (MR_Integer) 1);
#line 1556 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1556 "write_module_interface_files.m"
      {
#line 1556 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 1556 "write_module_interface_files.m"
        return;
      }
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1555 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(
#line 1555 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1555 "write_module_interface_files.m"
{
#line 1555 "write_module_interface_files.m"
  {
#line 1555 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1555 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_0) == 0)
#line 1555 "write_module_interface_files.m"
      {
#line 1555 "write_module_interface_files.m"
        {
#line 1555 "write_module_interface_files.m"
          {
#line 1555 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv0_Item_32, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8, parse_tree__write_module_interface_files__get_short_interface_3_p_0_3, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1555 "write_module_interface_files.m"
        }
#line 1555 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_FALSE;
#line 1555 "write_module_interface_files.m"
      }
#line 1555 "write_module_interface_files.m"
    else
#line 1555 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_TRUE;
#line 1555 "write_module_interface_files.m"
  }
#line 1555 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1, 1);
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_8(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33);
#line 1565 "write_module_interface_files.m"
    {
#line 1565 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(parse_tree__write_module_interface_files__env_ptr);
#line 1565 "write_module_interface_files.m"
      return;
    }
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_7(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    {
#line 1566 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1566 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_17_17;

#line 1566 "write_module_interface_files.m"
      {
#line 1566 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29 = parse_tree__item_util__item_needs_foreign_imports_1_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Item_33);
      }
#line 1566 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1566 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1566 "write_module_interface_files.m"
        {
#line 1566 "write_module_interface_files.m"
          {
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29, (MR_Integer) 0)));
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__V_29_29, (MR_Integer) 1)));
#line 1566 "write_module_interface_files.m"
          }
#line 1566 "write_module_interface_files.m"
          {
#line 1566 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__get_short_interface_3_p_0_6(parse_tree__write_module_interface_files__env_ptr);
#line 1566 "write_module_interface_files.m"
            return;
          }
#line 1566 "write_module_interface_files.m"
        }
#line 1565 "write_module_interface_files.m"
    }
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1565 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(
#line 1565 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 1565 "write_module_interface_files.m"
{
#line 1565 "write_module_interface_files.m"
  {
#line 1565 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 1565 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__commit_1) == 0)
#line 1565 "write_module_interface_files.m"
      {
#line 1565 "write_module_interface_files.m"
        {
#line 1565 "write_module_interface_files.m"
          {
#line 1565 "write_module_interface_files.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__conv1_Item_33, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28, parse_tree__write_module_interface_files__get_short_interface_3_p_0_8, parse_tree__write_module_interface_files__env_ptr);
          }
#line 1565 "write_module_interface_files.m"
        }
#line 1565 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_FALSE;
#line 1565 "write_module_interface_files.m"
      }
#line 1565 "write_module_interface_files.m"
    else
#line 1565 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded = MR_TRUE;
#line 1565 "write_module_interface_files.m"
  }
#line 1565 "write_module_interface_files.m"
}

#line 1483 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_short_interface_3_p_0(
#line 1483 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_4,
#line 1483 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Kind_5,
#line 1483 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6)
#line 1483 "write_module_interface_files.m"
{
#line 1483 "write_module_interface_files.m"
  {
#line 1483 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0_s parse_tree__write_module_interface_files__env;

#line 1486 "write_module_interface_files.m"
    {
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_12_49;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems_7;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items2_9;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items1_42;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__Items2_43;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems2_44;
#line 1486 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__RevItems_46;
#line 1609 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_45_45;

#line 1487 "write_module_interface_files.m"
      {
#line 1487 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_acc_4_p_0(parse_tree__write_module_interface_files__Items0_4, parse_tree__write_module_interface_files__Kind_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_7);
      }
#line 1488 "write_module_interface_files.m"
      {
#line 1488 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_7, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8);
      }
#line 1555 "write_module_interface_files.m"
      {
#line 1555 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_4(&parse_tree__write_module_interface_files__env);
      }
#line 1560 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1560 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8;
#line 1560 "write_module_interface_files.m"
      else
#line 1561 "write_module_interface_files.m"
        {
#line 1561 "write_module_interface_files.m"
          {
#line 1561 "write_module_interface_files.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[19], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__Items1_8, &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28);
          }
#line 1561 "write_module_interface_files.m"
        }
#line 1565 "write_module_interface_files.m"
      {
#line 1565 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__get_short_interface_3_p_0_9(&parse_tree__write_module_interface_files__env);
      }
#line 1570 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__succeeded)
#line 1570 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Items2_9 = (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28;
#line 1570 "write_module_interface_files.m"
      else
#line 1578 "write_module_interface_files.m"
        {
#line 1579 "write_module_interface_files.m"
          {
#line 1579 "write_module_interface_files.m"
            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[20], (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__get_short_interface_3_p_0_env_0__STATE_VARIABLE_Items_19_28, &parse_tree__write_module_interface_files__Items2_9);
          }
#line 1578 "write_module_interface_files.m"
        }
#line 1602 "write_module_interface_files.m"
      {
#line 1602 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__filter_unnecessary_flips_3_p_0(parse_tree__write_module_interface_files__Items2_9, (MR_Integer) 2, &parse_tree__write_module_interface_files__Items1_42);
      }
#line 1603 "write_module_interface_files.m"
      {
#line 1603 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__do_order_items_2_p_0(parse_tree__write_module_interface_files__Items1_42, &parse_tree__write_module_interface_files__Items2_43);
      }
#line 6402 "parse_tree.write_module_interface_files.c"
      parse_tree__write_module_interface_files__TypeCtorInfo_12_49 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1608 "write_module_interface_files.m"
      {
#line 1608 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, parse_tree__write_module_interface_files__Items2_43, &parse_tree__write_module_interface_files__RevItems2_44);
      }
#line 1609 "write_module_interface_files.m"
      {
#line 1609 "write_module_interface_files.m"
        mercury__list__takewhile_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[21], parse_tree__write_module_interface_files__RevItems2_44, &parse_tree__write_module_interface_files__V_45_45, &parse_tree__write_module_interface_files__RevItems_46);
      }
#line 1610 "write_module_interface_files.m"
      {
#line 1610 "write_module_interface_files.m"
        mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_12_49, parse_tree__write_module_interface_files__RevItems_46, parse_tree__write_module_interface_files__Items_6);
#line 1610 "write_module_interface_files.m"
        return;
      }
#line 1486 "write_module_interface_files.m"
    }
#line 1483 "write_module_interface_files.m"
  }
#line 1483 "write_module_interface_files.m"
}

#line 1390 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0(
#line 1390 "write_module_interface_files.m"
  MR_String parse_tree__write_module_interface_files__ClauseOrPragma_4,
#line 1390 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_5)
#line 1390 "write_module_interface_files.m"
{
#line 1392 "write_module_interface_files.m"
  {
#line 1392 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Spec_6;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pieces_7;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1392 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1393 "write_module_interface_files.m"
    {
#line 1393 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__V_11_11, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ClauseOrPragma_4));
#line 1393 "write_module_interface_files.m"
    }
#line 1393 "write_module_interface_files.m"
    {
#line 1393 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_11_11));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[11])));
#line 1393 "write_module_interface_files.m"
    }
#line 1393 "write_module_interface_files.m"
    {
#line 1393 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_2[8])));
#line 1393 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Pieces_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_10_10));
#line 1393 "write_module_interface_files.m"
    }
#line 1396 "write_module_interface_files.m"
    {
#line 1396 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Pieces_7));
#line 1396 "write_module_interface_files.m"
    }
#line 1396 "write_module_interface_files.m"
    {
#line 1396 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_21_21));
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "write_module_interface_files.m"
    }
#line 1396 "write_module_interface_files.m"
    {
#line 1396 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 1396 "write_module_interface_files.m"
    }
#line 1396 "write_module_interface_files.m"
    {
#line 1396 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_19_19));
#line 1396 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "write_module_interface_files.m"
    }
#line 1395 "write_module_interface_files.m"
    {
#line 1395 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_6, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_18_18));
#line 1395 "write_module_interface_files.m"
    }
#line 1392 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Spec_6;
#line 1392 "write_module_interface_files.m"
  }
#line 1390 "write_module_interface_files.m"
}

#line 1344 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 1344 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3,
#line 1344 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4,
#line 1344 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5)
#line 1344 "write_module_interface_files.m"
{
#line 1348 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1348 "write_module_interface_files.m"
    {
#line 1348 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1348 "write_module_interface_files.m"
      {
#line 1348 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1348 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1348 "write_module_interface_files.m"
          {
#line 1348 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1348 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1348 "write_module_interface_files.m"
          }
#line 1348 "write_module_interface_files.m"
        else
#line 1350 "write_module_interface_files.m"
          {
#line 1350 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1350 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1350 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;
#line 1350 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48;

#line 1357 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1353 "write_module_interface_files.m"
              {
#line 1353 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemClause0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1353 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 6)));
#line 1353 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Spec_18;
#line 1353 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_76_76;
#line 1353 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_77_77;
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 0)));
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 1)));
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 2)));
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 3)));
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 4)));
#line 1354 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 5)));
#line 1354 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemClause0_16, (MR_Integer) 7)));

#line 1396 "write_module_interface_files.m"
                {
#line 1396 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_77_77, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_17));
#line 1396 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[14])));
#line 1396 "write_module_interface_files.m"
                }
#line 1396 "write_module_interface_files.m"
                {
#line 1396 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_77_77));
#line 1396 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "write_module_interface_files.m"
                }
#line 1395 "write_module_interface_files.m"
                {
#line 1395 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Spec_18, 2) = ((MR_Box) (parse_tree__write_module_interface_files__V_76_76));
#line 1395 "write_module_interface_files.m"
                }
#line 1356 "write_module_interface_files.m"
                {
#line 1356 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_18));
#line 1356 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1356 "write_module_interface_files.m"
                }
#line 1353 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1353 "write_module_interface_files.m"
              }
#line 1357 "write_module_interface_files.m"
            else
#line 1357 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1358 "write_module_interface_files.m"
                {
#line 1358 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ItemPragma_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item0_12, (MR_Integer) 1)));
#line 1358 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Pragma_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 0)));
#line 1358 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__AllowedInInterface_23;
#line 1358 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 2)));
#line 1359 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 1)));
#line 1359 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_19, (MR_Integer) 3)));

#line 1360 "write_module_interface_files.m"
                  {
#line 1360 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__AllowedInInterface_23 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_20);
                  }
#line 1365 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__AllowedInInterface_23 == (MR_Integer) 0))
#line 1362 "write_module_interface_files.m"
                    {
#line 1362 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Spec_51;

#line 1363 "write_module_interface_files.m"
                      {
#line 1363 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Spec_51 = parse_tree__write_module_interface_files__clause_in_interface_warning_2_f_0((MR_String) "pragma", parse_tree__write_module_interface_files__Context_53);
                      }
#line 1364 "write_module_interface_files.m"
                      {
#line 1364 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Spec_51));
#line 1364 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4));
#line 1364 "write_module_interface_files.m"
                      }
#line 1362 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 1362 "write_module_interface_files.m"
                    }
#line 1365 "write_module_interface_files.m"
                  else
#line 1366 "write_module_interface_files.m"
                    {
#line 1367 "write_module_interface_files.m"
                      {
#line 1367 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1367 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1367 "write_module_interface_files.m"
                      }
#line 1366 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1366 "write_module_interface_files.m"
                    }
#line 1358 "write_module_interface_files.m"
                }
#line 1357 "write_module_interface_files.m"
              else
#line 1385 "write_module_interface_files.m"
                {
#line 1386 "write_module_interface_files.m"
                  {
#line 1386 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item0_12));
#line 1386 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 1386 "write_module_interface_files.m"
                  }
#line 1385 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4;
#line 1385 "write_module_interface_files.m"
                }
#line 1388 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1388 "write_module_interface_files.m"
            {
#line 1388 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items0_13;
#line 1388 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;
#line 1388 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_48_48;

#line 1388 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 1388 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 1388 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1388 "write_module_interface_files.m"
            }
#line 1388 "write_module_interface_files.m"
            continue;
#line 1350 "write_module_interface_files.m"
          }
#line 1348 "write_module_interface_files.m"
      }
#line 1348 "write_module_interface_files.m"
      break;
#line 1348 "write_module_interface_files.m"
    }
#line 1344 "write_module_interface_files.m"
}

#line 1337 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(
#line 1337 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_5,
#line 1337 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_6,
#line 1337 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9,
#line 1337 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10)
#line 1337 "write_module_interface_files.m"
{
#line 1340 "write_module_interface_files.m"
  {
#line 1340 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1340 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_8;

#line 1341 "write_module_interface_files.m"
    {
#line 1341 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_loop_5_p_0(parse_tree__write_module_interface_files__Items0_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_0_9, parse_tree__write_module_interface_files__STATE_VARIABLE_Specs_10);
    }
#line 1342 "write_module_interface_files.m"
    {
#line 1342 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_8, parse_tree__write_module_interface_files__Items_6);
#line 1342 "write_module_interface_files.m"
      return;
    }
#line 1340 "write_module_interface_files.m"
  }
#line 1337 "write_module_interface_files.m"
}

#line 1317 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(
#line 1317 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_3,
#line 1317 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 1317 "write_module_interface_files.m"
{
#line 1331 "write_module_interface_files.m"
  {
#line 1331 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1331 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 1321 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemPragma_5;
#line 1321 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Pragma_6;
#line 1321 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FEInfo_10;
#line 1322 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_7_7;
#line 1322 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;
#line 1322 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files__V_9_9;
#line 1324 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Lang_11;
#line 1324 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Values_13;

#line 1321 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1321 "write_module_interface_files.m"
      {
#line 1321 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemPragma_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1322 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__Pragma_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 0)));
#line 1322 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 1)));
#line 1322 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 2)));
#line 1322 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_5, (MR_Integer) 3)));
#line 1323 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Pragma_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1323 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1323 "write_module_interface_files.m"
          {
#line 1323 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__FEInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Pragma_6, (MR_Integer) 1)));
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 0)));
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 1)));
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files___Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FEInfo_10, (MR_Integer) 2)));
#line 1324 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1323 "write_module_interface_files.m"
          }
#line 1321 "write_module_interface_files.m"
      }
#line 1331 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1329 "write_module_interface_files.m"
      {
#line 1329 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Defns_14;
#line 1329 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv0_Defns_14;
#line 1330 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 1330 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1330 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1330 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1330 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_15_15;

#line 1329 "write_module_interface_files.m"
        {
#line 1329 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__TypeDefnMap_3, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_Defns_14);
        }
#line 1329 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1329 "write_module_interface_files.m"
          {
#line 1329 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Defns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_Defns_14);
#line 1329 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1329 "write_module_interface_files.m"
          }
#line 1329 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1329 "write_module_interface_files.m"
          {
#line 1330 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Defns_14)) == (MR_mktag((MR_Integer) 1)));
#line 1330 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1330 "write_module_interface_files.m"
              {
#line 1330 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 0)));
#line 1330 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Defns_14, (MR_Integer) 1)));
#line 1330 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 1330 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 1330 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 1330 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1330 "write_module_interface_files.m"
                  {
#line 1330 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__V_18_18, (MR_Integer) 0)));
#line 1330 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "write_module_interface_files.m"
                  }
#line 1330 "write_module_interface_files.m"
              }
#line 1330 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = !(parse_tree__write_module_interface_files__succeeded);
#line 1329 "write_module_interface_files.m"
          }
#line 1329 "write_module_interface_files.m"
      }
#line 1331 "write_module_interface_files.m"
    else
#line 1332 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1331 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1331 "write_module_interface_files.m"
  }
#line 1317 "write_module_interface_files.m"
}

#line 1315 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1(
#line 1315 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1315 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 1315 "write_module_interface_files.m"
{
#line 1315 "write_module_interface_files.m"
  {
#line 1315 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1315 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 1315 "write_module_interface_files.m"
    {
#line 1315 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__foreign_enum_is_local_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 1315 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 1315 "write_module_interface_files.m"
  }
#line 1315 "write_module_interface_files.m"
}

#line 1311 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__IntTypeMap_4,
#line 1311 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6,
#line 1311 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7)
#line 1311 "write_module_interface_files.m"
{
#line 1314 "write_module_interface_files.m"
  {
#line 1314 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1314 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 1315 "write_module_interface_files.m"
    {
#line 1315 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1315 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[4]));
#line 1315 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0_1));
#line 1315 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1315 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__IntTypeMap_4));
#line 1315 "write_module_interface_files.m"
    }
#line 1315 "write_module_interface_files.m"
    {
#line 1315 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_7);
#line 1315 "write_module_interface_files.m"
      return;
    }
#line 1314 "write_module_interface_files.m"
  }
#line 1311 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_5(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_4(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_3(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_2(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0_1(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1270 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(
#line 1270 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ArgType_4,
#line 1270 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23,
#line 1270 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24)
#line 1270 "write_module_interface_files.m"
{
#line 1277 "write_module_interface_files.m"
  {
#line 1277 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1277 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 2))))
#line 1278 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1277 "write_module_interface_files.m"
    else
#line 1277 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 1))))
#line 1281 "write_module_interface_files.m"
        {
#line 1281 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)));
#line 1281 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1281 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27;
#line 1281 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1284 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleName_12;
#line 1268 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24;

#line 1282 "write_module_interface_files.m"
          {
#line 1282 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(parse_tree__write_module_interface_files__TypeName_9, &parse_tree__write_module_interface_files__ModuleName_12);
          }
#line 1284 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 1283 "write_module_interface_files.m"
            {
#line 1283 "write_module_interface_files.m"
              {
#line 1283 "write_module_interface_files.m"
                mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27);
              }
#line 1283 "write_module_interface_files.m"
            }
#line 1284 "write_module_interface_files.m"
          else
#line 1285 "write_module_interface_files.m"
            {
#line 1285 "write_module_interface_files.m"
              {
#line 1285 "write_module_interface_files.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.get_modules_from_constraint_arg_type\'/3", (MR_String) "unknown type encountered");
#line 1285 "write_module_interface_files.m"
                return;
              }
#line 1285 "write_module_interface_files.m"
            }
#line 1268 "write_module_interface_files.m"
          {
#line 1268 "write_module_interface_files.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[14], parse_tree__write_module_interface_files__Args_10, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27_27)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
          }
#line 1268 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_24);
#line 1281 "write_module_interface_files.m"
        }
#line 1277 "write_module_interface_files.m"
      else
#line 1277 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 0))))
#line 1277 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23;
#line 1277 "write_module_interface_files.m"
        else
#line 1277 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1304 "write_module_interface_files.m"
            {
#line 1304 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1292 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1292 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1268 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
              {
#line 1268 "write_module_interface_files.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[15], parse_tree__write_module_interface_files__Args_32, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
              }
#line 1268 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_Modules_24);
#line 1304 "write_module_interface_files.m"
            }
#line 1277 "write_module_interface_files.m"
          else
#line 1277 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1304 "write_module_interface_files.m"
              {
#line 1304 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1304 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__MaybeRetType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1304 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__Args_34;
#line 1296 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 3)));
#line 1268 "write_module_interface_files.m"
                MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24;

#line 1300 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__MaybeRetType_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1302 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__Args_34 = parse_tree__write_module_interface_files__Args0_18;
#line 1300 "write_module_interface_files.m"
                else
#line 1298 "write_module_interface_files.m"
                  {
#line 1298 "write_module_interface_files.m"
                    MR_Word parse_tree__write_module_interface_files__RetType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__MaybeRetType_19, (MR_Integer) 0)));

#line 1299 "write_module_interface_files.m"
                    {
#line 1299 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__Args_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_34, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RetType_22));
#line 1299 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_34, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Args0_18));
#line 1299 "write_module_interface_files.m"
                    }
#line 1298 "write_module_interface_files.m"
                  }
#line 1268 "write_module_interface_files.m"
                {
#line 1268 "write_module_interface_files.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[16], parse_tree__write_module_interface_files__Args_34, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
                }
#line 1268 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_24);
#line 1304 "write_module_interface_files.m"
              }
#line 1277 "write_module_interface_files.m"
            else
#line 1277 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ArgType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1304 "write_module_interface_files.m"
                {
#line 1304 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__KindedType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1304 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_35;
#line 1294 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1268 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24;

#line 1294 "write_module_interface_files.m"
                  {
#line 1294 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Args_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_35, 0) = ((MR_Box) (parse_tree__write_module_interface_files__KindedType_16));
#line 1294 "write_module_interface_files.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "write_module_interface_files.m"
                  }
#line 1268 "write_module_interface_files.m"
                  {
#line 1268 "write_module_interface_files.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[17], parse_tree__write_module_interface_files__Args_35, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
                  }
#line 1268 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_Modules_24);
#line 1304 "write_module_interface_files.m"
                }
#line 1277 "write_module_interface_files.m"
              else
#line 1304 "write_module_interface_files.m"
                {
#line 1304 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Args_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 1)));
#line 1290 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ArgType_4, (MR_Integer) 2)));
#line 1268 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
                  {
#line 1268 "write_module_interface_files.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[18], parse_tree__write_module_interface_files__Args_36, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_23)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
                  }
#line 1268 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_24 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_24);
#line 1304 "write_module_interface_files.m"
                }
#line 1277 "write_module_interface_files.m"
  }
#line 1270 "write_module_interface_files.m"
}

#line 1268 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0_1(
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1268 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1268 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1268 "write_module_interface_files.m"
{
#line 1268 "write_module_interface_files.m"
  {
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1268 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24;

#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_modules_from_constraint_arg_type_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_24));
#line 1268 "write_module_interface_files.m"
  }
#line 1268 "write_module_interface_files.m"
}

#line 1249 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(
#line 1249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Constraint_4,
#line 1249 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1249 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1249 "write_module_interface_files.m"
{
#line 1252 "write_module_interface_files.m"
  {
#line 1252 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1252 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 0)));
#line 1252 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Constraint_4, (MR_Integer) 1)));
#line 1252 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16;
#line 1268 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12;

#line 1258 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ClassName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1256 "write_module_interface_files.m"
      {
#line 1256 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 0)));
#line 1256 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ClassName_6, (MR_Integer) 1)));

#line 1257 "write_module_interface_files.m"
        {
#line 1257 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, &parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16);
        }
#line 1256 "write_module_interface_files.m"
      }
#line 1258 "write_module_interface_files.m"
    else
#line 1259 "write_module_interface_files.m"
      {
#line 1260 "write_module_interface_files.m"
        {
#line 1260 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.get_requirements_of_impl_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
#line 1260 "write_module_interface_files.m"
          return;
        }
#line 1259 "write_module_interface_files.m"
      }
#line 1268 "write_module_interface_files.m"
    {
#line 1268 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[13], parse_tree__write_module_interface_files__ArgTypes_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_16_16)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
    }
#line 1268 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_12);
#line 1252 "write_module_interface_files.m"
  }
#line 1249 "write_module_interface_files.m"
}

#line 1227 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0_1(
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1227 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1227 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1227 "write_module_interface_files.m"
{
#line 1227 "write_module_interface_files.m"
  {
#line 1227 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1227 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1227 "write_module_interface_files.m"
    {
#line 1227 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_from_constraint_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1227 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1227 "write_module_interface_files.m"
  }
#line 1227 "write_module_interface_files.m"
}

#line 1220 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4,
#line 1220 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24,
#line 1220 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25)
#line 1220 "write_module_interface_files.m"
{
#line 1225 "write_module_interface_files.m"
  {
#line 1225 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1225 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2))))
#line 1232 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
    else
#line 1225 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 1))))
#line 1231 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
      else
#line 1225 "write_module_interface_files.m"
        if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 0))))
#line 1230 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
        else
#line 1225 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1233 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
          else
#line 1225 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1243 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
            else
#line 1225 "write_module_interface_files.m"
              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1242 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
              else
#line 1225 "write_module_interface_files.m"
                if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1235 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                else
#line 1225 "write_module_interface_files.m"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1241 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                  else
#line 1225 "write_module_interface_files.m"
                    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1238 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                    else
#line 1225 "write_module_interface_files.m"
                      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1236 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                      else
#line 1225 "write_module_interface_files.m"
                        if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1244 "write_module_interface_files.m"
                          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                        else
#line 1225 "write_module_interface_files.m"
                          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1245 "write_module_interface_files.m"
                            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                          else
#line 1225 "write_module_interface_files.m"
                            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1239 "write_module_interface_files.m"
                              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                            else
#line 1225 "write_module_interface_files.m"
                              if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1237 "write_module_interface_files.m"
                                *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                              else
#line 1225 "write_module_interface_files.m"
                                if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1240 "write_module_interface_files.m"
                                  *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                                else
#line 1225 "write_module_interface_files.m"
                                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1234 "write_module_interface_files.m"
                                    *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24;
#line 1225 "write_module_interface_files.m"
                                  else
#line 1225 "write_module_interface_files.m"
                                    {
#line 1225 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__ItemTypeClass_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 1225 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 2)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 0)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 1)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 3)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 4)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 5)));
#line 1226 "write_module_interface_files.m"
                                      MR_Word parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 6)));
#line 1226 "write_module_interface_files.m"
                                      MR_Integer parse_tree__write_module_interface_files__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeClass_6, (MR_Integer) 7)));
#line 1227 "write_module_interface_files.m"
                                      MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25;

#line 1227 "write_module_interface_files.m"
                                      {
#line 1227 "write_module_interface_files.m"
                                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[12], parse_tree__write_module_interface_files__Constraints_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_24)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25);
                                      }
#line 1227 "write_module_interface_files.m"
                                      *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_25 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_25);
#line 1225 "write_module_interface_files.m"
                                    }
#line 1225 "write_module_interface_files.m"
  }
#line 1220 "write_module_interface_files.m"
}

#line 1217 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0_1(
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1217 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1217 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1217 "write_module_interface_files.m"
{
#line 1217 "write_module_interface_files.m"
  {
#line 1217 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1217 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25;

#line 1217 "write_module_interface_files.m"
    {
#line 1217 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_typeclass_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25);
    }
#line 1217 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_25));
#line 1217 "write_module_interface_files.m"
  }
#line 1217 "write_module_interface_files.m"
}

#line 1213 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(
#line 1213 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplItems_3,
#line 1213 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_4)
#line 1213 "write_module_interface_files.m"
{
#line 1216 "write_module_interface_files.m"
  {
#line 1216 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1216 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_6_6;
#line 1217 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv1_Modules_4;

#line 1218 "write_module_interface_files.m"
    {
#line 1218 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 1217 "write_module_interface_files.m"
    {
#line 1217 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[11], parse_tree__write_module_interface_files__ImplItems_3, ((MR_Box) (parse_tree__write_module_interface_files__V_6_6)), &parse_tree__write_module_interface_files__conv1_Modules_4);
    }
#line 1217 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_4 = ((MR_Word) parse_tree__write_module_interface_files__conv1_Modules_4);
#line 1216 "write_module_interface_files.m"
  }
#line 1213 "write_module_interface_files.m"
}

#line 1159 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0(
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8,
#line 1159 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9,
#line 1159 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10)
#line 1159 "write_module_interface_files.m"
{
#line 1164 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1164 "write_module_interface_files.m"
    {
#line 1164 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1164 "write_module_interface_files.m"
      {
#line 1164 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1164 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "write_module_interface_files.m"
          {
#line 1165 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1165 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1164 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1164 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1164 "write_module_interface_files.m"
          }
#line 1164 "write_module_interface_files.m"
        else
#line 1167 "write_module_interface_files.m"
          {
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_53_53;
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55;
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56;
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57;
#line 1167 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58;
#line 1180 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewInInterface_35;
#line 1169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_31;
#line 1169 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ModuleDefn_32;
#line 1170 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_33_33;
#line 1170 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_34_34;

#line 1169 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_25)) == (MR_mktag((MR_Integer) 2)));
#line 1169 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1169 "write_module_interface_files.m"
              {
#line 1169 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_25), (MR_Integer) 2);
#line 1170 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ModuleDefn_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 0)));
#line 1170 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 1)));
#line 1170 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_31, (MR_Integer) 2)));
#line 1174 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__ModuleDefn_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1176 "write_module_interface_files.m"
                  {
#line 1176 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__NewInInterface_35 = (MR_Integer) 0;
#line 1176 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1176 "write_module_interface_files.m"
                  }
#line 1174 "write_module_interface_files.m"
                else
#line 1174 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__ModuleDefn_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "write_module_interface_files.m"
                    {
#line 1173 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__NewInInterface_35 = (MR_Integer) 1;
#line 1173 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1173 "write_module_interface_files.m"
                    }
#line 1174 "write_module_interface_files.m"
                  else
#line 1174 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1169 "write_module_interface_files.m"
              }
#line 1180 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1179 "write_module_interface_files.m"
              {
#line 1179 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_53_53 = parse_tree__write_module_interface_files__NewInInterface_35;
#line 1179 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1179 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1179 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1179 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1179 "write_module_interface_files.m"
              }
#line 1180 "write_module_interface_files.m"
            else
#line 1195 "write_module_interface_files.m"
              {
#line 1195 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_36;

#line 1181 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1181 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1181 "write_module_interface_files.m"
                  {
#line 1181 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_25, (MR_Integer) 1)));
#line 1183 "write_module_interface_files.m"
                    {
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 0)));
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 1)));
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Body_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 2)));
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__TypeCtor_43;
#line 1183 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_54_54;
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 3)));
#line 1183 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 4)));
#line 1183 "write_module_interface_files.m"
                      MR_Integer parse_tree__write_module_interface_files__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_36, (MR_Integer) 5)));

#line 1184 "write_module_interface_files.m"
                      {
#line 1184 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_54_54 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], parse_tree__write_module_interface_files__Args_38);
                      }
#line 1184 "write_module_interface_files.m"
                      {
#line 1184 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__TypeCtor_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_43, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Name_37));
#line 1184 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_43, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_54_54));
#line 1184 "write_module_interface_files.m"
                      }
#line 1189 "write_module_interface_files.m"
                      if ((parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 == (MR_Integer) 0))
#line 1190 "write_module_interface_files.m"
                        {
#line 1190 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_71_71;

#line 1211 "write_module_interface_files.m"
                          {
#line 1211 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_39));
#line 1211 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_71_71, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_36));
#line 1211 "write_module_interface_files.m"
                          }
#line 1211 "write_module_interface_files.m"
                          {
#line 1211 "write_module_interface_files.m"
                            mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_43)), ((MR_Box) (parse_tree__write_module_interface_files__V_71_71)), parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55);
                          }
#line 1190 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1190 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1190 "write_module_interface_files.m"
                        }
#line 1189 "write_module_interface_files.m"
                      else
#line 1186 "write_module_interface_files.m"
                        {
#line 1186 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_81_81;

#line 1187 "write_module_interface_files.m"
                          {
#line 1187 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1187 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3));
#line 1187 "write_module_interface_files.m"
                          }
#line 1211 "write_module_interface_files.m"
                          {
#line 1211 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_81_81, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Body_39));
#line 1211 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_81_81, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_36));
#line 1211 "write_module_interface_files.m"
                          }
#line 1211 "write_module_interface_files.m"
                          {
#line 1211 "write_module_interface_files.m"
                            mercury__multi_map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_43)), ((MR_Box) (parse_tree__write_module_interface_files__V_81_81)), parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57);
                          }
#line 1186 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1186 "write_module_interface_files.m"
                        }
#line 1183 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1183 "write_module_interface_files.m"
                    }
#line 1181 "write_module_interface_files.m"
                  }
#line 1181 "write_module_interface_files.m"
                else
#line 1199 "write_module_interface_files.m"
                  {
#line 1199 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 == (MR_Integer) 0))
#line 1200 "write_module_interface_files.m"
                      {
#line 1201 "write_module_interface_files.m"
                        {
#line 1201 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1201 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5));
#line 1201 "write_module_interface_files.m"
                        }
#line 1200 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3;
#line 1200 "write_module_interface_files.m"
                      }
#line 1199 "write_module_interface_files.m"
                    else
#line 1197 "write_module_interface_files.m"
                      {
#line 1198 "write_module_interface_files.m"
                        {
#line 1198 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_25));
#line 1198 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3));
#line 1198 "write_module_interface_files.m"
                        }
#line 1197 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5;
#line 1197 "write_module_interface_files.m"
                      }
#line 1199 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9;
#line 1199 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7;
#line 1199 "write_module_interface_files.m"
                  }
#line 1195 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_53_53 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1;
#line 1195 "write_module_interface_files.m"
              }
#line 1204 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1204 "write_module_interface_files.m"
            {
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0__tmp_copy_1 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_53_53;
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2 = parse_tree__write_module_interface_files__Items_26;
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_56_56;
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_58_58;
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0__tmp_copy_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_57_57;
#line 1204 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0__tmp_copy_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_55_55;

#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_0__tmp_copy_9;
#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_0__tmp_copy_7;
#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0__tmp_copy_5;
#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0__tmp_copy_3;
#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__2_2 = parse_tree__write_module_interface_files__HeadVar__2__tmp_copy_2;
#line 1204 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0_1 = parse_tree__write_module_interface_files__STATE_VARIABLE_InInterface_0__tmp_copy_1;
#line 1204 "write_module_interface_files.m"
            }
#line 1204 "write_module_interface_files.m"
            continue;
#line 1167 "write_module_interface_files.m"
          }
#line 1164 "write_module_interface_files.m"
      }
#line 1164 "write_module_interface_files.m"
      break;
#line 1164 "write_module_interface_files.m"
    }
#line 1159 "write_module_interface_files.m"
}

#line 1150 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__gather_type_defns_5_p_0(
#line 1150 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_6,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntItems_7,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplItems_8,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__IntTypesMap_9,
#line 1150 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__ImplTypesMap_10)
#line 1150 "write_module_interface_files.m"
{
#line 1153 "write_module_interface_files.m"
  {
#line 1153 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_19_19 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_20_20;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevIntItems_11;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevImplItems_12;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 1153 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;

#line 1155 "write_module_interface_files.m"
    {
#line 1155 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_18_18, parse_tree__write_module_interface_files__TypeInfo_19_19);
    }
#line 1155 "write_module_interface_files.m"
    {
#line 1155 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_17_17 = mercury__map__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_18_18, parse_tree__write_module_interface_files__TypeInfo_19_19);
    }
#line 1154 "write_module_interface_files.m"
    {
#line 1154 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_2_10_p_0((MR_Integer) 0, parse_tree__write_module_interface_files__Items0_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevIntItems_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevImplItems_12, parse_tree__write_module_interface_files__V_16_16, parse_tree__write_module_interface_files__IntTypesMap_9, parse_tree__write_module_interface_files__V_17_17, parse_tree__write_module_interface_files__ImplTypesMap_10);
    }
#line 8166 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1156 "write_module_interface_files.m"
    {
#line 1156 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_20_20, parse_tree__write_module_interface_files__RevIntItems_11, parse_tree__write_module_interface_files__IntItems_7);
    }
#line 1157 "write_module_interface_files.m"
    {
#line 1157 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_20_20, parse_tree__write_module_interface_files__RevImplItems_12, parse_tree__write_module_interface_files__ImplItems_8);
#line 1157 "write_module_interface_files.m"
      return;
    }
#line 1153 "write_module_interface_files.m"
  }
#line 1150 "write_module_interface_files.m"
}

#line 1136 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(
#line 1136 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1136 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1136 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1136 "write_module_interface_files.m"
{
#line 1139 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1139 "write_module_interface_files.m"
    {
#line 1139 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1139 "write_module_interface_files.m"
      {
#line 1139 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1139 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1139 "write_module_interface_files.m"
        else
#line 1140 "write_module_interface_files.m"
          {
#line 1140 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1140 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1140 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 1)));
#line 1140 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;
#line 1141 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 0)));
#line 1141 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 2)));
#line 1141 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Arg_7, (MR_Integer) 3)));

#line 1142 "write_module_interface_files.m"
            {
#line 1142 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Type_11, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16);
            }
#line 1143 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1143 "write_module_interface_files.m"
            {
#line 1143 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Args_8;
#line 1143 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_16_16;

#line 1143 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1143 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1143 "write_module_interface_files.m"
            }
#line 1143 "write_module_interface_files.m"
            continue;
#line 1140 "write_module_interface_files.m"
          }
#line 1139 "write_module_interface_files.m"
      }
#line 1139 "write_module_interface_files.m"
      break;
#line 1139 "write_module_interface_files.m"
    }
#line 1136 "write_module_interface_files.m"
}

#line 1127 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 1127 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2,
#line 1127 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3)
#line 1127 "write_module_interface_files.m"
{
#line 1130 "write_module_interface_files.m"
  while (MR_TRUE)
#line 1130 "write_module_interface_files.m"
    {
#line 1130 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 1130 "write_module_interface_files.m"
      {
#line 1130 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 1130 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2;
#line 1130 "write_module_interface_files.m"
        else
#line 1131 "write_module_interface_files.m"
          {
#line 1131 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 1131 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 1131 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 3)));
#line 1131 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17;
#line 1132 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 0)));
#line 1132 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 1)));
#line 1132 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 2)));
#line 1132 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_7, (MR_Integer) 4)));

#line 1133 "write_module_interface_files.m"
            {
#line 1133 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__cons_args_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__ConsArgs_13, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17);
            }
#line 1134 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 1134 "write_module_interface_files.m"
            {
#line 1134 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Ctors_8;
#line 1134 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_17_17;

#line 1134 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0__tmp_copy_2;
#line 1134 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 1134 "write_module_interface_files.m"
            }
#line 1134 "write_module_interface_files.m"
            continue;
#line 1131 "write_module_interface_files.m"
          }
#line 1130 "write_module_interface_files.m"
      }
#line 1130 "write_module_interface_files.m"
      break;
#line 1130 "write_module_interface_files.m"
    }
#line 1127 "write_module_interface_files.m"
}

#line 1122 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0_1(
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1122 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1122 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1122 "write_module_interface_files.m"
{
#line 1122 "write_module_interface_files.m"
  {
#line 1122 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1122 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14;

#line 1122 "write_module_interface_files.m"
    {
#line 1122 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14);
    }
#line 1122 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeCtors_14));
#line 1122 "write_module_interface_files.m"
  }
#line 1122 "write_module_interface_files.m"
}

#line 1092 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(
#line 1092 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_4,
#line 1092 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13,
#line 1092 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14)
#line 1092 "write_module_interface_files.m"
{
#line 1123 "write_module_interface_files.m"
  {
#line 1123 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1123 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_6;
#line 1123 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Args_7;

#line 1096 "write_module_interface_files.m"
    {
#line 1096 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(parse_tree__write_module_interface_files__Type_4, &parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__Args_7);
    }
#line 1123 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1097 "write_module_interface_files.m"
      {
#line 1097 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 0)));
#line 1097 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19;
#line 1097 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_6, (MR_Integer) 1)));
#line 1099 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_10_10;
#line 1099 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 1122 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14;

#line 1099 "write_module_interface_files.m"
        {
#line 1099 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(parse_tree__write_module_interface_files__TypeCtor_6, &parse_tree__write_module_interface_files__V_10_10, &parse_tree__write_module_interface_files__V_11_11);
        }
#line 1104 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1104 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1104 "write_module_interface_files.m"
        else
#line 1110 "write_module_interface_files.m"
          {
#line 1105 "write_module_interface_files.m"
            {
#line 1105 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(parse_tree__write_module_interface_files__TypeCtor_6);
            }
#line 1110 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1110 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1110 "write_module_interface_files.m"
            else
#line 1119 "write_module_interface_files.m"
              {
#line 1112 "write_module_interface_files.m"
                MR_String parse_tree__write_module_interface_files__V_28_28;

#line 1111 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_8)) == (MR_mktag((MR_Integer) 0)));
#line 1111 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1111 "write_module_interface_files.m"
                  {
#line 1111 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__SymName_8, (MR_Integer) 0)));
#line 1112 "write_module_interface_files.m"
                    if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "int") == 0))
#line 1111 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1112 "write_module_interface_files.m"
                    else
#line 1112 "write_module_interface_files.m"
                      if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "float") == 0))
#line 1112 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1112 "write_module_interface_files.m"
                      else
#line 1112 "write_module_interface_files.m"
                        if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "string") == 0))
#line 1113 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1112 "write_module_interface_files.m"
                        else
#line 1112 "write_module_interface_files.m"
                          if ((strcmp(parse_tree__write_module_interface_files__V_28_28, (MR_String) "character") == 0))
#line 1114 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1112 "write_module_interface_files.m"
                          else
#line 1112 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 1111 "write_module_interface_files.m"
                  }
#line 1119 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 1119 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1119 "write_module_interface_files.m"
                else
#line 1120 "write_module_interface_files.m"
                  {
#line 1120 "write_module_interface_files.m"
                    {
#line 1120 "write_module_interface_files.m"
                      mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_6)), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19);
                    }
#line 1120 "write_module_interface_files.m"
                  }
#line 1119 "write_module_interface_files.m"
              }
#line 1110 "write_module_interface_files.m"
          }
#line 1122 "write_module_interface_files.m"
        {
#line 1122 "write_module_interface_files.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[10], parse_tree__write_module_interface_files__Args_7, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_19_19)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
        }
#line 1122 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_TypeCtors_14);
#line 1097 "write_module_interface_files.m"
      }
#line 1123 "write_module_interface_files.m"
    else
#line 1123 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_14 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeCtors_0_13;
#line 1123 "write_module_interface_files.m"
  }
#line 1092 "write_module_interface_files.m"
}

#line 1075 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_modules_3_p_0(
#line 1075 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_4,
#line 1075 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11,
#line 1075 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12)
#line 1075 "write_module_interface_files.m"
{
#line 1078 "write_module_interface_files.m"
  {
#line 1078 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1078 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 0)));
#line 1080 "write_module_interface_files.m"
    MR_Integer parse_tree__write_module_interface_files___Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_4, (MR_Integer) 1)));

#line 1084 "write_module_interface_files.m"
    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__SymName_6)) == (MR_mktag((MR_Integer) 1))))
#line 1082 "write_module_interface_files.m"
      {
#line 1082 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 0)));
#line 1082 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__SymName_6, (MR_Integer) 1)));

#line 1083 "write_module_interface_files.m"
        {
#line 1083 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_8)), parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_11, parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_12);
#line 1083 "write_module_interface_files.m"
          return;
        }
#line 1082 "write_module_interface_files.m"
      }
#line 1084 "write_module_interface_files.m"
    else
#line 1085 "write_module_interface_files.m"
      {
#line 1086 "write_module_interface_files.m"
        {
#line 1086 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.accumulate_modules\'/3", (MR_String) "unqualified type encountered");
#line 1086 "write_module_interface_files.m"
          return;
        }
#line 1085 "write_module_interface_files.m"
      }
#line 1078 "write_module_interface_files.m"
  }
#line 1075 "write_module_interface_files.m"
}

#line 1070 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_3(
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1070 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1070 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1070 "write_module_interface_files.m"
{
#line 1070 "write_module_interface_files.m"
  {
#line 1070 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1070 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12;

#line 1070 "write_module_interface_files.m"
    {
#line 1070 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12);
    }
#line 1070 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_Modules_12));
#line 1070 "write_module_interface_files.m"
  }
#line 1070 "write_module_interface_files.m"
}

#line 1063 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2(
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1063 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1063 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1063 "write_module_interface_files.m"
{
#line 1063 "write_module_interface_files.m"
  {
#line 1063 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1063 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1063 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1063 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20;

#line 1063 "write_module_interface_files.m"
    {
#line 1063 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20);
    }
#line 1063 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 1063 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 1063 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_Modules_20));
#line 1063 "write_module_interface_files.m"
  }
#line 1063 "write_module_interface_files.m"
}

#line 1061 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_1(
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1061 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1061 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 1061 "write_module_interface_files.m"
{
#line 1061 "write_module_interface_files.m"
  {
#line 1061 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1061 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12;

#line 1061 "write_module_interface_files.m"
    {
#line 1061 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_modules_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12);
    }
#line 1061 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_Modules_12));
#line 1061 "write_module_interface_files.m"
  }
#line 1061 "write_module_interface_files.m"
}

#line 1050 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25,
#line 1050 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26,
#line 1050 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27)
#line 1050 "write_module_interface_files.m"
{
#line 1057 "write_module_interface_files.m"
  {
#line 1057 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1057 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 1056 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 1065 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RhsType_15;

#line 1058 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1058 "write_module_interface_files.m"
      {
#line 1058 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__RhsType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1059 "write_module_interface_files.m"
        {
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_47_47;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_55_55;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_16;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__NewRhsTypeCtors_17;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 1059 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_34_34;
#line 1061 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30;
#line 1063 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 1063 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1063 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv6_V_18_18;
#line 1063 "write_module_interface_files.m"
          MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27;

#line 1059 "write_module_interface_files.m"
          {
#line 1059 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_28_28 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 1059 "write_module_interface_files.m"
          {
#line 1059 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__type_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__RhsType_15, parse_tree__write_module_interface_files__V_28_28, &parse_tree__write_module_interface_files__RhsTypeCtors_16);
          }
#line 1060 "write_module_interface_files.m"
          {
#line 1060 "write_module_interface_files.m"
            mercury__set__difference_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__RhsTypeCtors_16, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__NewRhsTypeCtors_17);
          }
#line 8775 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_47_47 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4];
#line 1061 "write_module_interface_files.m"
          {
#line 1061 "write_module_interface_files.m"
            mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_47_47, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[8], parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
          }
#line 1061 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30 = ((MR_Word) parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_30_30);
#line 1062 "write_module_interface_files.m"
          {
#line 1062 "write_module_interface_files.m"
            mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22, &parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31);
          }
#line 1063 "write_module_interface_files.m"
          {
#line 1063 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 1063 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0_2));
#line 1063 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1063 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_32_32, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1063 "write_module_interface_files.m"
          }
#line 1064 "write_module_interface_files.m"
          {
#line 1064 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_34_34 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43);
          }
#line 8808 "parse_tree.write_module_interface_files.c"
          parse_tree__write_module_interface_files__TypeInfo_55_55 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 1063 "write_module_interface_files.m"
          {
#line 1063 "write_module_interface_files.m"
            mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_55_55, parse_tree__write_module_interface_files__TypeInfo_47_47, parse_tree__write_module_interface_files__V_32_32, parse_tree__write_module_interface_files__NewRhsTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_31_31)), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Box) (parse_tree__write_module_interface_files__V_34_34)), &parse_tree__write_module_interface_files__conv6_V_18_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_30_30)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
          }
#line 1063 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = ((MR_Word) parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_AbsEqvRhsTypeCtors_23);
#line 1063 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) parse_tree__write_module_interface_files__conv6_V_18_18);
#line 1063 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_Modules_27);
#line 1059 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1059 "write_module_interface_files.m"
        }
#line 1058 "write_module_interface_files.m"
      }
#line 1058 "write_module_interface_files.m"
    else
#line 1071 "write_module_interface_files.m"
      {
#line 1071 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctors_19;
#line 1065 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1065 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;

#line 1065 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_10)) == (MR_mktag((MR_Integer) 0)));
#line 1065 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1065 "write_module_interface_files.m"
          {
#line 1065 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 0)));
#line 1065 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 1)));
#line 1065 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_10, (MR_Integer) 2)));
#line 1068 "write_module_interface_files.m"
            {
#line 1068 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1068 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_36_36;
#line 1068 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__RhsTypeCtors_40;
#line 1070 "write_module_interface_files.m"
              MR_Box parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27;

#line 1068 "write_module_interface_files.m"
              {
#line 1068 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_36_36 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56);
              }
#line 1068 "write_module_interface_files.m"
              {
#line 1068 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ctors_to_type_ctor_set_3_p_0(parse_tree__write_module_interface_files__Ctors_19, parse_tree__write_module_interface_files__V_36_36, &parse_tree__write_module_interface_files__RhsTypeCtors_40);
              }
#line 1069 "write_module_interface_files.m"
              {
#line 1069 "write_module_interface_files.m"
                mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, parse_tree__write_module_interface_files__RhsTypeCtors_40, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24, parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25);
              }
#line 1070 "write_module_interface_files.m"
              {
#line 1070 "write_module_interface_files.m"
                mercury__set__fold_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_56_56, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[9], parse_tree__write_module_interface_files__RhsTypeCtors_40, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26)), &parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
              }
#line 1070 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = ((MR_Word) parse_tree__write_module_interface_files__conv9_STATE_VARIABLE_Modules_27);
#line 1068 "write_module_interface_files.m"
            }
#line 1065 "write_module_interface_files.m"
          }
#line 1065 "write_module_interface_files.m"
        else
#line 1072 "write_module_interface_files.m"
          {
#line 1072 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_27 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_26;
#line 1072 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_25 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_24;
#line 1072 "write_module_interface_files.m"
          }
#line 1071 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_23 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_22;
#line 1071 "write_module_interface_files.m"
      }
#line 1057 "write_module_interface_files.m"
  }
#line 1050 "write_module_interface_files.m"
}

#line 1044 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1(
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 1044 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 1044 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 1044 "write_module_interface_files.m"
{
#line 1044 "write_module_interface_files.m"
  {
#line 1044 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 1044 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23;
#line 1044 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25;
#line 1044 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27;

#line 1044 "write_module_interface_files.m"
    {
#line 1044 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_eqv_type_rhs_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27);
    }
#line 1044 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_AbsEqvRhsTypeCtors_23));
#line 1044 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_ForeignDuFieldTypeCtors_25));
#line 1044 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_Modules_27));
#line 1044 "write_module_interface_files.m"
  }
#line 1044 "write_module_interface_files.m"
}

#line 1036 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_9,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeCtor_10,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18,
#line 1036 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19,
#line 1036 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20)
#line 1036 "write_module_interface_files.m"
{
#line 1046 "write_module_interface_files.m"
  {
#line 1046 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1046 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefns_14;
#line 1043 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_TypeDefns_14;

#line 1043 "write_module_interface_files.m"
    {
#line 1043 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__ImplTypeMap_9, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_10)), &parse_tree__write_module_interface_files__conv0_TypeDefns_14);
    }
#line 1043 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1043 "write_module_interface_files.m"
      {
#line 1043 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__TypeDefns_14 = ((MR_Word) parse_tree__write_module_interface_files__conv0_TypeDefns_14);
#line 1043 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1043 "write_module_interface_files.m"
      }
#line 1046 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1044 "write_module_interface_files.m"
      {
#line 1044 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_35_35;
#line 1044 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1044 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 1044 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 1044 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20;

#line 1044 "write_module_interface_files.m"
        {
#line 1044 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[1]));
#line 1044 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 1) = ((MR_Box) (parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0_1));
#line 1044 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1044 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_21_21, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_9));
#line 1044 "write_module_interface_files.m"
        }
#line 9028 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_35_35 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 1044 "write_module_interface_files.m"
        {
#line 1044 "write_module_interface_files.m"
          mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__TypeInfo_35_35, parse_tree__write_module_interface_files__TypeInfo_35_35, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_21_21, parse_tree__write_module_interface_files__TypeDefns_14, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17)), &parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19)), &parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
        }
#line 1044 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_AbsEqvRhsTypeCtors_16);
#line 1044 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = ((MR_Word) parse_tree__write_module_interface_files__conv5_STATE_VARIABLE_ForeignDuFieldTypeCtors_18);
#line 1044 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = ((MR_Word) parse_tree__write_module_interface_files__conv4_STATE_VARIABLE_Modules_20);
#line 1044 "write_module_interface_files.m"
      }
#line 1046 "write_module_interface_files.m"
    else
#line 1047 "write_module_interface_files.m"
      {
#line 1047 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_20 = parse_tree__write_module_interface_files__STATE_VARIABLE_Modules_0_19;
#line 1047 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_18 = parse_tree__write_module_interface_files__STATE_VARIABLE_ForeignDuFieldTypeCtors_0_17;
#line 1047 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvRhsTypeCtors_0_15;
#line 1047 "write_module_interface_files.m"
      }
#line 1046 "write_module_interface_files.m"
  }
#line 1036 "write_module_interface_files.m"
}

#line 993 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_10,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypesMap_11,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32,
#line 993 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33,
#line 993 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34)
#line 993 "write_module_interface_files.m"
{
#line 1002 "write_module_interface_files.m"
  {
#line 1002 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 1002 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 1002 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn_13;
#line 1002 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 1001 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___Item_14;
#line 1007 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_40_40;
#line 1007 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 1007 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files___RhsType_18;
#line 1008 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 1008 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv0_V_19_19;

#line 1001 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__TypeDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 0)));
#line 1001 "write_module_interface_files.m"
    parse_tree__write_module_interface_files___Item_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_35_35, (MR_Integer) 1)));
#line 1007 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 1)));
#line 1007 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1007 "write_module_interface_files.m"
      {
#line 1007 "write_module_interface_files.m"
        parse_tree__write_module_interface_files___RhsType_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 9118 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 9120 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1008 "write_module_interface_files.m"
        {
#line 1008 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_40_40, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv0_V_19_19);
        }
#line 1008 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1008 "write_module_interface_files.m"
          {
#line 1008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) parse_tree__write_module_interface_files__conv0_V_19_19);
#line 1008 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1008 "write_module_interface_files.m"
          }
#line 1007 "write_module_interface_files.m"
      }
#line 1011 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 1010 "write_module_interface_files.m"
      {
#line 1010 "write_module_interface_files.m"
        {
#line 1010 "write_module_interface_files.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
        }
#line 1010 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1010 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1010 "write_module_interface_files.m"
      }
#line 1011 "write_module_interface_files.m"
    else
#line 1016 "write_module_interface_files.m"
      {
#line 1012 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_43_43;
#line 1012 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeInfo_44_44;
#line 1012 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 1012 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 1012 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 1013 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 1013 "write_module_interface_files.m"
        MR_Box parse_tree__write_module_interface_files__conv1_V_23_23;

#line 1012 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1012 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1012 "write_module_interface_files.m"
          {
#line 1012 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1012 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1012 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 3)));
#line 9185 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 9187 "parse_tree.write_module_interface_files.c"
            parse_tree__write_module_interface_files__TypeInfo_44_44 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 1013 "write_module_interface_files.m"
            {
#line 1013 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_43_43, parse_tree__write_module_interface_files__TypeInfo_44_44, parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv1_V_23_23);
            }
#line 1013 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1013 "write_module_interface_files.m"
              {
#line 1013 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) parse_tree__write_module_interface_files__conv1_V_23_23);
#line 1013 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1013 "write_module_interface_files.m"
              }
#line 1012 "write_module_interface_files.m"
          }
#line 1016 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 1015 "write_module_interface_files.m"
          {
#line 1015 "write_module_interface_files.m"
            {
#line 1015 "write_module_interface_files.m"
              mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30);
            }
#line 1015 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1015 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1015 "write_module_interface_files.m"
          }
#line 1016 "write_module_interface_files.m"
        else
#line 1032 "write_module_interface_files.m"
          {
#line 1032 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Ctors_24;
#line 1032 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_25;
#line 1032 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_26;

#line 1017 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn_13)) == (MR_mktag((MR_Integer) 0)));
#line 1017 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 1017 "write_module_interface_files.m"
              {
#line 1017 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 0)));
#line 1017 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 1)));
#line 1017 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn_13, (MR_Integer) 2)));
#line 1024 "write_module_interface_files.m"
                {
#line 1020 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 1020 "write_module_interface_files.m"
                  MR_Box parse_tree__write_module_interface_files__conv2_V_27_27;
#line 1021 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files___NumBits_28;

#line 1020 "write_module_interface_files.m"
                  {
#line 1020 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0], parse_tree__write_module_interface_files__InterfaceTypeMap_10, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), &parse_tree__write_module_interface_files__conv2_V_27_27);
                  }
#line 1020 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1020 "write_module_interface_files.m"
                    {
#line 1020 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__V_27_27 = ((MR_Word) parse_tree__write_module_interface_files__conv2_V_27_27);
#line 1020 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 1020 "write_module_interface_files.m"
                    }
#line 1020 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1021 "write_module_interface_files.m"
                    {
#line 1021 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_24, &parse_tree__write_module_interface_files___NumBits_28);
                    }
#line 1024 "write_module_interface_files.m"
                  if (parse_tree__write_module_interface_files__succeeded)
#line 1023 "write_module_interface_files.m"
                    {
#line 1023 "write_module_interface_files.m"
                      {
#line 1023 "write_module_interface_files.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31, parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32);
                      }
#line 1023 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1023 "write_module_interface_files.m"
                    }
#line 1024 "write_module_interface_files.m"
                  else
#line 1029 "write_module_interface_files.m"
                    {
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_54_54;
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Ctor_57;
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ExistQTVars_58;
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Constraints_59;
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__Args_61;
#line 825 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_67_67;
#line 835 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Name_60;
#line 835 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files___Context_62;

#line 833 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                        {
#line 833 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                            {
#line 827 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_24)) == (MR_mktag((MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                              if (parse_tree__write_module_interface_files__succeeded)
#line 833 "write_module_interface_files.m"
                                {
#line 833 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__Ctor_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 0)));
#line 833 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_24, (MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                                  if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                                    {
#line 835 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__ExistQTVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 0)));
#line 835 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Constraints_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 1)));
#line 835 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 2)));
#line 835 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 3)));
#line 835 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files___Context_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_57, (MR_Integer) 4)));
#line 836 "write_module_interface_files.m"
                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                                      if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                                        {
#line 837 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                                          if (parse_tree__write_module_interface_files__succeeded)
#line 841 "write_module_interface_files.m"
                                            {
#line 841 "write_module_interface_files.m"
                                              if ((parse_tree__write_module_interface_files__Args_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 841 "write_module_interface_files.m"
                                              else
#line 843 "write_module_interface_files.m"
                                                {
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__ArgType_64;
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_61, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_63_63;
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_65_65;
#line 843 "write_module_interface_files.m"
                                                  MR_Word parse_tree__write_module_interface_files__V_66_66;

#line 843 "write_module_interface_files.m"
                                                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "write_module_interface_files.m"
                                                  if (parse_tree__write_module_interface_files__succeeded)
#line 843 "write_module_interface_files.m"
                                                    {
#line 843 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__ArgType_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 2)));
#line 843 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_68_68, (MR_Integer) 3)));
#line 844 "write_module_interface_files.m"
                                                      {
#line 844 "write_module_interface_files.m"
                                                        parse_tree__write_module_interface_files__V_70_70 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__BothTypesMap_11, parse_tree__write_module_interface_files__ArgType_64, parse_tree__write_module_interface_files__V_54_54);
                                                      }
#line 844 "write_module_interface_files.m"
                                                      parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_70_70 == (MR_Integer) 1);
#line 843 "write_module_interface_files.m"
                                                    }
#line 843 "write_module_interface_files.m"
                                                }
#line 841 "write_module_interface_files.m"
                                            }
#line 825 "write_module_interface_files.m"
                                        }
#line 825 "write_module_interface_files.m"
                                    }
#line 833 "write_module_interface_files.m"
                                }
#line 825 "write_module_interface_files.m"
                            }
#line 825 "write_module_interface_files.m"
                        }
#line 1029 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 1028 "write_module_interface_files.m"
                        {
#line 1028 "write_module_interface_files.m"
                          {
#line 1028 "write_module_interface_files.m"
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33, parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34);
                          }
#line 1028 "write_module_interface_files.m"
                        }
#line 1029 "write_module_interface_files.m"
                      else
#line 1029 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1029 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1029 "write_module_interface_files.m"
                    }
#line 1024 "write_module_interface_files.m"
                }
#line 1017 "write_module_interface_files.m"
              }
#line 1017 "write_module_interface_files.m"
            else
#line 1033 "write_module_interface_files.m"
              {
#line 1033 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_34 = parse_tree__write_module_interface_files__STATE_VARIABLE_DummyTypeCtors_0_33;
#line 1033 "write_module_interface_files.m"
                *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_32 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsImplExpEnumTypeCtors_0_31;
#line 1033 "write_module_interface_files.m"
              }
#line 1032 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_30 = parse_tree__write_module_interface_files__STATE_VARIABLE_AbsEqvLhsTypeCtors_0_29;
#line 1032 "write_module_interface_files.m"
          }
#line 1016 "write_module_interface_files.m"
      }
#line 1002 "write_module_interface_files.m"
  }
#line 993 "write_module_interface_files.m"
}

#line 985 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2(
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 985 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 985 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 985 "write_module_interface_files.m"
{
#line 985 "write_module_interface_files.m"
  {
#line 985 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 985 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16;
#line 985 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18;
#line 985 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20;

#line 985 "write_module_interface_files.m"
    {
#line 985 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_rhs_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20);
    }
#line 985 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv8_STATE_VARIABLE_AbsEqvRhsTypeCtors_16));
#line 985 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv7_STATE_VARIABLE_ForeignDuFieldTypeCtors_18));
#line 985 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_Modules_20));
#line 985 "write_module_interface_files.m"
  }
#line 985 "write_module_interface_files.m"
}

#line 982 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1(
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_4,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_5,
#line 982 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_6,
#line 982 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_7)
#line 982 "write_module_interface_files.m"
{
#line 982 "write_module_interface_files.m"
  {
#line 982 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 982 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30;
#line 982 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32;
#line 982 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34;

#line 982 "write_module_interface_files.m"
    {
#line 982 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__accumulate_abs_impl_exported_type_lhs_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_4), &parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32, ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_6), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34);
    }
#line 982 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_STATE_VARIABLE_AbsEqvLhsTypeCtors_30));
#line 982 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_5 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_STATE_VARIABLE_AbsImplExpEnumTypeCtors_32));
#line 982 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_7 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_DummyTypeCtors_34));
#line 982 "write_module_interface_files.m"
  }
#line 982 "write_module_interface_files.m"
}

#line 974 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__InterfaceTypeMap_7,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ImplTypeMap_8,
#line 974 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__BothTypeMap_9,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__DummyTypeCtors_10,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__NecessaryTypeCtors_11,
#line 974 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Modules_12)
#line 974 "write_module_interface_files.m"
{
#line 979 "write_module_interface_files.m"
  {
#line 979 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_41_41;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImplTypes_13;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_19_19;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_21_21;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 979 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_29_29;
#line 981 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14;
#line 981 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15;
#line 981 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10;
#line 985 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16;
#line 985 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17;
#line 985 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv9_Modules_12;

#line 980 "write_module_interface_files.m"
    {
#line 980 "write_module_interface_files.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__ImplTypeMap_8, &parse_tree__write_module_interface_files__ImplTypes_13);
    }
#line 982 "write_module_interface_files.m"
    {
#line 982 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 982 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_8[0]));
#line 982 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_1));
#line 982 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 982 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 3) = ((MR_Box) (parse_tree__write_module_interface_files__InterfaceTypeMap_7));
#line 982 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_18_18, 4) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypeMap_9));
#line 982 "write_module_interface_files.m"
    }
#line 983 "write_module_interface_files.m"
    {
#line 983 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_19_19 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 984 "write_module_interface_files.m"
    {
#line 984 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_20_20 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 984 "write_module_interface_files.m"
    {
#line 984 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_21_21 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 9669 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_41_41 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[3];
#line 981 "write_module_interface_files.m"
    {
#line 981 "write_module_interface_files.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[2], parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__V_18_18, parse_tree__write_module_interface_files__ImplTypes_13, ((MR_Box) (parse_tree__write_module_interface_files__V_19_19)), &parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_20_20)), &parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15, ((MR_Box) (parse_tree__write_module_interface_files__V_21_21)), &parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
    }
#line 981 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14 = ((MR_Word) parse_tree__write_module_interface_files__conv5_AbsImplExpLhsTypeCtors_14);
#line 981 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15 = ((MR_Word) parse_tree__write_module_interface_files__conv4_AbsImplExpEnumTypeCtors_15);
#line 981 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__DummyTypeCtors_10 = ((MR_Word) parse_tree__write_module_interface_files__conv3_DummyTypeCtors_10);
#line 985 "write_module_interface_files.m"
    {
#line 985 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_9[0]));
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0_2));
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_22_22, 3) = ((MR_Box) (parse_tree__write_module_interface_files__ImplTypeMap_8));
#line 985 "write_module_interface_files.m"
    }
#line 987 "write_module_interface_files.m"
    {
#line 987 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_23_23 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 987 "write_module_interface_files.m"
    {
#line 987 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_24_24 = mercury__set__init_0_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31);
    }
#line 988 "write_module_interface_files.m"
    {
#line 988 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_25_25 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    }
#line 985 "write_module_interface_files.m"
    {
#line 985 "write_module_interface_files.m"
      mercury__set__fold3_8_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeInfo_41_41, parse_tree__write_module_interface_files__TypeInfo_41_41, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[4], parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14, ((MR_Box) (parse_tree__write_module_interface_files__V_23_23)), &parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16, ((MR_Box) (parse_tree__write_module_interface_files__V_24_24)), &parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17, ((MR_Box) (parse_tree__write_module_interface_files__V_25_25)), &parse_tree__write_module_interface_files__conv9_Modules_12);
    }
#line 985 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16 = ((MR_Word) parse_tree__write_module_interface_files__conv11_AbsEqvRhsTypeCtors_16);
#line 985 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17 = ((MR_Word) parse_tree__write_module_interface_files__conv10_ForeignDuFieldTypeCtors_17);
#line 985 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__Modules_12 = ((MR_Word) parse_tree__write_module_interface_files__conv9_Modules_12);
#line 991 "write_module_interface_files.m"
    {
#line 991 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpEnumTypeCtors_15));
#line 991 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "write_module_interface_files.m"
    }
#line 990 "write_module_interface_files.m"
    {
#line 990 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ForeignDuFieldTypeCtors_17));
#line 990 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_28_28, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_29_29));
#line 990 "write_module_interface_files.m"
    }
#line 990 "write_module_interface_files.m"
    {
#line 990 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsEqvRhsTypeCtors_16));
#line 990 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_27_27, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_28_28));
#line 990 "write_module_interface_files.m"
    }
#line 989 "write_module_interface_files.m"
    {
#line 989 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 0) = ((MR_Box) (parse_tree__write_module_interface_files__AbsImplExpLhsTypeCtors_14));
#line 989 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_26_26, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 989 "write_module_interface_files.m"
    }
#line 989 "write_module_interface_files.m"
    {
#line 989 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__NecessaryTypeCtors_11 = mercury__set__union_list_1_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__V_26_26);
    }
#line 979 "write_module_interface_files.m"
  }
#line 974 "write_module_interface_files.m"
}

#line 939 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(
#line 939 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_3,
#line 939 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 939 "write_module_interface_files.m"
{
#line 946 "write_module_interface_files.m"
  {
#line 946 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 946 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_5;

#line 942 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 942 "write_module_interface_files.m"
      {
#line 942 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemTypeDefn_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_4, (MR_Integer) 1)));
#line 943 "write_module_interface_files.m"
        {
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 0)));
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Params_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 1)));
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeCtor_12;
#line 943 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_13_13;
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 2)));
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 3)));
#line 943 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 4)));
#line 943 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_5, (MR_Integer) 5)));

#line 944 "write_module_interface_files.m"
          {
#line 944 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2], parse_tree__write_module_interface_files__Params_7);
          }
#line 944 "write_module_interface_files.m"
          {
#line 944 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_6));
#line 944 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeCtor_12, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_13_13));
#line 944 "write_module_interface_files.m"
          }
#line 945 "write_module_interface_files.m"
          {
#line 945 "write_module_interface_files.m"
            return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__write_module_interface_files__TypeCtor_12)), parse_tree__write_module_interface_files__NecessaryTypeCtors_3);
          }
#line 943 "write_module_interface_files.m"
        }
#line 942 "write_module_interface_files.m"
      }
#line 942 "write_module_interface_files.m"
    else
#line 947 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 946 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 946 "write_module_interface_files.m"
  }
#line 939 "write_module_interface_files.m"
}

#line 937 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1(
#line 937 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 937 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 937 "write_module_interface_files.m"
{
#line 937 "write_module_interface_files.m"
  {
#line 937 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 937 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 937 "write_module_interface_files.m"
    {
#line 937 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 937 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 937 "write_module_interface_files.m"
  }
#line 937 "write_module_interface_files.m"
}

#line 933 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryTypeCtors_4,
#line 933 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 933 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 933 "write_module_interface_files.m"
{
#line 936 "write_module_interface_files.m"
  {
#line 936 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 936 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 937 "write_module_interface_files.m"
    {
#line 937 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 937 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[3]));
#line 937 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0_1));
#line 937 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 937 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryTypeCtors_4));
#line 937 "write_module_interface_files.m"
    }
#line 937 "write_module_interface_files.m"
    {
#line 937 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 937 "write_module_interface_files.m"
      return;
    }
#line 936 "write_module_interface_files.m"
  }
#line 933 "write_module_interface_files.m"
}

#line 905 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(
#line 905 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_3,
#line 905 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_4)
#line 905 "write_module_interface_files.m"
{
#line 924 "write_module_interface_files.m"
  {
#line 924 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_4)) == (MR_mktag((MR_Integer) 2)));
#line 924 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_5;

#line 909 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 909 "write_module_interface_files.m"
      {
#line 909 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__ItemModuleDefn_5 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_4), (MR_Integer) 2);
#line 910 "write_module_interface_files.m"
        {
#line 910 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__ModuleDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 0)));
#line 910 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 1)));
#line 910 "write_module_interface_files.m"
          MR_Integer parse_tree__write_module_interface_files__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_5, (MR_Integer) 2)));
#line 921 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__Modules_9;

#line 913 "write_module_interface_files.m"
          if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 913 "write_module_interface_files.m"
            {
#line 913 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Modules_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 1)));
#line 913 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 913 "write_module_interface_files.m"
            }
#line 913 "write_module_interface_files.m"
          else
#line 913 "write_module_interface_files.m"
            if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 912 "write_module_interface_files.m"
              {
#line 912 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Modules_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_6, (MR_Integer) 1)));
#line 912 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 912 "write_module_interface_files.m"
              }
#line 913 "write_module_interface_files.m"
            else
#line 913 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 921 "write_module_interface_files.m"
          if (parse_tree__write_module_interface_files__succeeded)
#line 918 "write_module_interface_files.m"
            {
#line 918 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__ModuleName_10;
#line 916 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_11_11;

#line 916 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Modules_9)) == (MR_mktag((MR_Integer) 1)));
#line 916 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 916 "write_module_interface_files.m"
                {
#line 916 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Modules_9, (MR_Integer) 0)));
#line 916 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Modules_9, (MR_Integer) 1)));
#line 916 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "write_module_interface_files.m"
                }
#line 918 "write_module_interface_files.m"
              if (parse_tree__write_module_interface_files__succeeded)
#line 917 "write_module_interface_files.m"
                {
#line 917 "write_module_interface_files.m"
                  {
#line 917 "write_module_interface_files.m"
                    return parse_tree__write_module_interface_files__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__write_module_interface_files__ModuleName_10)), parse_tree__write_module_interface_files__NecessaryImports_3);
                  }
#line 917 "write_module_interface_files.m"
                }
#line 918 "write_module_interface_files.m"
              else
#line 919 "write_module_interface_files.m"
                {
#line 919 "write_module_interface_files.m"
                  {
#line 919 "write_module_interface_files.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.is_not_unnecessary_impl_import\'/2", (MR_String) "non-singleton import or use decl");
                  }
#line 919 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 919 "write_module_interface_files.m"
                }
#line 918 "write_module_interface_files.m"
            }
#line 921 "write_module_interface_files.m"
          else
#line 922 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 910 "write_module_interface_files.m"
        }
#line 909 "write_module_interface_files.m"
      }
#line 909 "write_module_interface_files.m"
    else
#line 925 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 924 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 924 "write_module_interface_files.m"
  }
#line 905 "write_module_interface_files.m"
}

#line 903 "write_module_interface_files.m"
static MR_bool MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1(
#line 903 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 903 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 903 "write_module_interface_files.m"
{
#line 903 "write_module_interface_files.m"
  {
#line 903 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 903 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 903 "write_module_interface_files.m"
    {
#line 903 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__succeeded = parse_tree__write_module_interface_files__is_not_unnecessary_impl_import_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 903 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__succeeded;
#line 903 "write_module_interface_files.m"
  }
#line 903 "write_module_interface_files.m"
}

#line 899 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NecessaryImports_4,
#line 899 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6,
#line 899 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7)
#line 899 "write_module_interface_files.m"
{
#line 902 "write_module_interface_files.m"
  {
#line 902 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 902 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_8_8;

#line 903 "write_module_interface_files.m"
    {
#line 903 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 903 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_7[2]));
#line 903 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0_1));
#line 903 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 903 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_8_8, 3) = ((MR_Box) (parse_tree__write_module_interface_files__NecessaryImports_4));
#line 903 "write_module_interface_files.m"
    }
#line 903 "write_module_interface_files.m"
    {
#line 903 "write_module_interface_files.m"
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_8_8, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_0_6, parse_tree__write_module_interface_files__STATE_VARIABLE_Items_7);
#line 903 "write_module_interface_files.m"
      return;
    }
#line 902 "write_module_interface_files.m"
  }
#line 899 "write_module_interface_files.m"
}

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 866 "write_module_interface_files.m"
{
#line 866 "write_module_interface_files.m"
  {
#line 866 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 866 "write_module_interface_files.m"
    MR_builtin_longjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0, 1);
#line 866 "write_module_interface_files.m"
  }
#line 866 "write_module_interface_files.m"
}

#line 867 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3(
#line 867 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 867 "write_module_interface_files.m"
{
#line 867 "write_module_interface_files.m"
  {
#line 867 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 867 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36 = ((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36);
#line 867 "write_module_interface_files.m"
    {
#line 867 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(parse_tree__write_module_interface_files__env_ptr);
#line 867 "write_module_interface_files.m"
      return;
    }
#line 867 "write_module_interface_files.m"
  }
#line 867 "write_module_interface_files.m"
}

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_2(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 866 "write_module_interface_files.m"
{
#line 866 "write_module_interface_files.m"
  {
#line 866 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 866 "write_module_interface_files.m"
    {
#line 867 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__V_16_16;
#line 835 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Name_46;
#line 835 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files___Context_48;

#line 867 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 0)));
#line 867 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_36_36, (MR_Integer) 1)));
#line 868 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 868 "write_module_interface_files.m"
      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 868 "write_module_interface_files.m"
        {
#line 868 "write_module_interface_files.m"
          {
#line 868 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 0)));
#line 868 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 1)));
#line 868 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefn_15, (MR_Integer) 2)));
#line 868 "write_module_interface_files.m"
          }
#line 866 "write_module_interface_files.m"
          {
#line 833 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeEqCmp_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "write_module_interface_files.m"
            if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 866 "write_module_interface_files.m"
              {
#line 833 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__MaybeDirectArgCtors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 866 "write_module_interface_files.m"
                  {
#line 833 "write_module_interface_files.m"
                    (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17)) == (MR_mktag((MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                    if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 833 "write_module_interface_files.m"
                      {
#line 833 "write_module_interface_files.m"
                        {
#line 833 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 0)));
#line 833 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtors_17, (MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                        }
#line 866 "write_module_interface_files.m"
                        {
#line 833 "write_module_interface_files.m"
                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "write_module_interface_files.m"
                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 866 "write_module_interface_files.m"
                            {
#line 835 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 0)));
#line 835 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 1)));
#line 835 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 2)));
#line 835 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 3)));
#line 835 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files___Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Ctor_43, (MR_Integer) 4)));
#line 836 "write_module_interface_files.m"
                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__ExistQTVars_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "write_module_interface_files.m"
                              if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 866 "write_module_interface_files.m"
                                {
#line 837 "write_module_interface_files.m"
                                  (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Constraints_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "write_module_interface_files.m"
                                  if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 866 "write_module_interface_files.m"
                                    {
#line 870 "write_module_interface_files.m"
                                      {
#line 870 "write_module_interface_files.m"
                                        MR_Word base;
#line 870 "write_module_interface_files.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20 = base;
#line 870 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6));
#line 870 "write_module_interface_files.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7));
#line 870 "write_module_interface_files.m"
                                      }
#line 841 "write_module_interface_files.m"
                                      if (((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "write_module_interface_files.m"
                                        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 841 "write_module_interface_files.m"
                                      else
#line 843 "write_module_interface_files.m"
                                        {
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__ArgType_50;
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Args_47, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_56_56;
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_49_49;
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_51_51;
#line 843 "write_module_interface_files.m"
                                          MR_Word parse_tree__write_module_interface_files__V_52_52;

#line 843 "write_module_interface_files.m"
                                          (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "write_module_interface_files.m"
                                          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 843 "write_module_interface_files.m"
                                            {
#line 843 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__ArgType_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 2)));
#line 843 "write_module_interface_files.m"
                                              parse_tree__write_module_interface_files__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_54_54, (MR_Integer) 3)));
#line 844 "write_module_interface_files.m"
                                              {
#line 844 "write_module_interface_files.m"
                                                parse_tree__write_module_interface_files__V_56_56 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, parse_tree__write_module_interface_files__ArgType_50, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes_20);
                                              }
#line 844 "write_module_interface_files.m"
                                              (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_56_56 == (MR_Integer) 1);
#line 843 "write_module_interface_files.m"
                                            }
#line 843 "write_module_interface_files.m"
                                        }
#line 841 "write_module_interface_files.m"
                                      if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 841 "write_module_interface_files.m"
                                        {
#line 841 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_1(parse_tree__write_module_interface_files__env_ptr);
#line 841 "write_module_interface_files.m"
                                          return;
                                        }
#line 866 "write_module_interface_files.m"
                                    }
#line 866 "write_module_interface_files.m"
                                }
#line 866 "write_module_interface_files.m"
                            }
#line 866 "write_module_interface_files.m"
                        }
#line 833 "write_module_interface_files.m"
                      }
#line 866 "write_module_interface_files.m"
                  }
#line 866 "write_module_interface_files.m"
              }
#line 866 "write_module_interface_files.m"
          }
#line 868 "write_module_interface_files.m"
        }
#line 866 "write_module_interface_files.m"
    }
#line 866 "write_module_interface_files.m"
  }
#line 866 "write_module_interface_files.m"
}

#line 866 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(
#line 866 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 866 "write_module_interface_files.m"
{
#line 866 "write_module_interface_files.m"
  {
#line 866 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 866 "write_module_interface_files.m"
    if (MR_builtin_setjmp((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__commit_0) == 0)
#line 866 "write_module_interface_files.m"
      {
#line 866 "write_module_interface_files.m"
        {
#line 866 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeInfo_40_40 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0];
#line 866 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeDefns_14;

#line 866 "write_module_interface_files.m"
          {
#line 866 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, parse_tree__write_module_interface_files__TypeInfo_40_40, (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5, ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13)), &parse_tree__write_module_interface_files__TypeDefns_14);
          }
#line 866 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 867 "write_module_interface_files.m"
            {
#line 867 "write_module_interface_files.m"
              mercury__list__member_2_p_1(parse_tree__write_module_interface_files__TypeInfo_40_40, &(parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__conv0_V_36_36, parse_tree__write_module_interface_files__TypeDefns_14, parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_3, parse_tree__write_module_interface_files__env_ptr);
            }
#line 866 "write_module_interface_files.m"
        }
#line 866 "write_module_interface_files.m"
        (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_FALSE;
#line 866 "write_module_interface_files.m"
      }
#line 866 "write_module_interface_files.m"
    else
#line 866 "write_module_interface_files.m"
      (parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = MR_TRUE;
#line 866 "write_module_interface_files.m"
  }
#line 866 "write_module_interface_files.m"
}

#line 847 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_5,
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Type_6,
#line 847 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__CoveredTypes0_7)
#line 847 "write_module_interface_files.m"
{
#line 847 "write_module_interface_files.m"
  {
#line 847 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0_s parse_tree__write_module_interface_files__env;

#line 847 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeDefnMap_5 = parse_tree__write_module_interface_files__TypeDefnMap_5;
#line 847 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6 = parse_tree__write_module_interface_files__Type_6;
#line 847 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7 = parse_tree__write_module_interface_files__CoveredTypes0_7;
#line 851 "write_module_interface_files.m"
    {
#line 851 "write_module_interface_files.m"
      MR_Word parse_tree__write_module_interface_files__IsDummyType_8;

#line 851 "write_module_interface_files.m"
      if (((MR_tag((MR_Word) (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)) == (MR_mktag((MR_Integer) 1))))
#line 851 "write_module_interface_files.m"
        {
#line 851 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 0)));
#line 851 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files__TypeArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 1)));
#line 851 "write_module_interface_files.m"
          MR_Word parse_tree__write_module_interface_files___Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6, (MR_Integer) 2)));

#line 852 "write_module_interface_files.m"
          {
#line 852 "write_module_interface_files.m"
            (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__Type_6)), (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__CoveredTypes0_7);
          }
#line 855 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 854 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 855 "write_module_interface_files.m"
          else
#line 856 "write_module_interface_files.m"
            {
#line 856 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__Arity_12;
#line 860 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__V_35_35;

#line 856 "write_module_interface_files.m"
              {
#line 856 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__write_module_interface_files__TypeArgs_10);
              }
#line 857 "write_module_interface_files.m"
              {
#line 857 "write_module_interface_files.m"
                MR_Word base;
#line 857 "write_module_interface_files.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 857 "write_module_interface_files.m"
                (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13 = base;
#line 857 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__SymName_9));
#line 857 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Arity_12));
#line 857 "write_module_interface_files.m"
              }
#line 859 "write_module_interface_files.m"
              {
#line 859 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_35_35 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__TypeCtor_13);
              }
#line 860 "write_module_interface_files.m"
              (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded = (parse_tree__write_module_interface_files__V_35_35 == (MR_Integer) 0);
#line 863 "write_module_interface_files.m"
              if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 862 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 863 "write_module_interface_files.m"
              else
#line 875 "write_module_interface_files.m"
                {
#line 866 "write_module_interface_files.m"
                  {
#line 866 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0_4(&parse_tree__write_module_interface_files__env);
                  }
#line 875 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_4_f_0_env_0__succeeded)
#line 874 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 1;
#line 875 "write_module_interface_files.m"
                  else
#line 876 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 875 "write_module_interface_files.m"
                }
#line 856 "write_module_interface_files.m"
            }
#line 851 "write_module_interface_files.m"
        }
#line 851 "write_module_interface_files.m"
      else
#line 887 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__IsDummyType_8 = (MR_Integer) 0;
#line 851 "write_module_interface_files.m"
      return parse_tree__write_module_interface_files__IsDummyType_8;
#line 851 "write_module_interface_files.m"
    }
#line 847 "write_module_interface_files.m"
  }
#line 847 "write_module_interface_files.m"
}

#line 781 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__TypeDefnMap_4,
#line 781 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15,
#line 781 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16)
#line 781 "write_module_interface_files.m"
{
#line 806 "write_module_interface_files.m"
  {
#line 806 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15)) == (MR_mktag((MR_Integer) 1)));
#line 806 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemTypeDefn0_7;
#line 806 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Ctors_8;
#line 806 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeEqCmp_9;
#line 806 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__MaybeDirectArgCtors_10;
#line 787 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefn0_6;
#line 787 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_17_17;
#line 787 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_18_18;

#line 787 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 787 "write_module_interface_files.m"
      {
#line 787 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 0)));
#line 787 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15, (MR_Integer) 1)));
#line 787 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 787 "write_module_interface_files.m"
          {
#line 787 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__TypeDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 0)));
#line 787 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__ItemTypeDefn0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_17_17, (MR_Integer) 1)));
#line 788 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__TypeDefn0_6)) == (MR_mktag((MR_Integer) 0)));
#line 788 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 788 "write_module_interface_files.m"
              {
#line 788 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Ctors_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 0)));
#line 788 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeEqCmp_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 1)));
#line 788 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__TypeDefn0_6, (MR_Integer) 2)));
#line 788 "write_module_interface_files.m"
              }
#line 787 "write_module_interface_files.m"
          }
#line 787 "write_module_interface_files.m"
      }
#line 806 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 796 "write_module_interface_files.m"
      {
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_32_32;
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Ctor_35;
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ExistQTVars_36;
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Constraints_37;
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Args_39;
#line 825 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_45_45;
#line 835 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Name_38;
#line 835 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files___Context_40;

#line 833 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeEqCmp_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
          {
#line 833 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__MaybeDirectArgCtors_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
              {
#line 827 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 833 "write_module_interface_files.m"
                  {
#line 833 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__Ctor_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 0)));
#line 833 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Ctors_8, (MR_Integer) 1)));
#line 833 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                    if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                      {
#line 835 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ExistQTVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 0)));
#line 835 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Constraints_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 1)));
#line 835 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Name_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 2)));
#line 835 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__Args_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 3)));
#line 835 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Ctor_35, (MR_Integer) 4)));
#line 836 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__ExistQTVars_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                        if (parse_tree__write_module_interface_files__succeeded)
#line 825 "write_module_interface_files.m"
                          {
#line 837 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Constraints_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "write_module_interface_files.m"
                            if (parse_tree__write_module_interface_files__succeeded)
#line 841 "write_module_interface_files.m"
                              {
#line 841 "write_module_interface_files.m"
                                if ((parse_tree__write_module_interface_files__Args_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "write_module_interface_files.m"
                                  parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 841 "write_module_interface_files.m"
                                else
#line 843 "write_module_interface_files.m"
                                  {
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__ArgType_42;
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Args_39, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_48_48;
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_41_41;
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_43_43;
#line 843 "write_module_interface_files.m"
                                    MR_Word parse_tree__write_module_interface_files__V_44_44;

#line 843 "write_module_interface_files.m"
                                    parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "write_module_interface_files.m"
                                    if (parse_tree__write_module_interface_files__succeeded)
#line 843 "write_module_interface_files.m"
                                      {
#line 843 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_46_46, (MR_Integer) 0)));
#line 843 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__ArgType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_46_46, (MR_Integer) 1)));
#line 843 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_46_46, (MR_Integer) 2)));
#line 843 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_46_46, (MR_Integer) 3)));
#line 844 "write_module_interface_files.m"
                                        {
#line 844 "write_module_interface_files.m"
                                          parse_tree__write_module_interface_files__V_48_48 = parse_tree__write_module_interface_files__ctor_arg_is_dummy_type_3_f_0(parse_tree__write_module_interface_files__TypeDefnMap_4, parse_tree__write_module_interface_files__ArgType_42, parse_tree__write_module_interface_files__V_32_32);
                                        }
#line 844 "write_module_interface_files.m"
                                        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_48_48 == (MR_Integer) 1);
#line 843 "write_module_interface_files.m"
                                      }
#line 843 "write_module_interface_files.m"
                                  }
#line 841 "write_module_interface_files.m"
                              }
#line 825 "write_module_interface_files.m"
                          }
#line 825 "write_module_interface_files.m"
                      }
#line 833 "write_module_interface_files.m"
                  }
#line 825 "write_module_interface_files.m"
              }
#line 825 "write_module_interface_files.m"
          }
#line 796 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 796 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 796 "write_module_interface_files.m"
        else
#line 801 "write_module_interface_files.m"
          {
#line 801 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Details_12;
#line 801 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Defn_13;
#line 801 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_14;
#line 801 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_20_20;
#line 799 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__NumBits_11;
#line 803 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 803 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 803 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 803 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 803 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_27_27;
#line 803 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_24_24;

#line 797 "write_module_interface_files.m"
            {
#line 797 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = parse_tree__prog_type__du_type_is_enum_2_p_0(parse_tree__write_module_interface_files__Ctors_8, &parse_tree__write_module_interface_files__NumBits_11);
            }
#line 799 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 798 "write_module_interface_files.m"
              {
#line 798 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__Details_12, 0) = ((MR_Box) (parse_tree__write_module_interface_files__NumBits_11));
#line 798 "write_module_interface_files.m"
              }
#line 799 "write_module_interface_files.m"
            else
#line 800 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Details_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 802 "write_module_interface_files.m"
            {
#line 802 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__Defn_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(2), parse_tree__write_module_interface_files__Defn_13, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Details_12));
#line 802 "write_module_interface_files.m"
            }
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 0)));
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 1)));
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 2)));
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 3)));
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 4)));
#line 803 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn0_7, (MR_Integer) 5)));
#line 803 "write_module_interface_files.m"
            {
#line 803 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__ItemTypeDefn_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_22_22));
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 2) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 3) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 4) = ((MR_Box) (parse_tree__write_module_interface_files__V_26_26));
#line 803 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemTypeDefn_14, 5) = ((MR_Box) (parse_tree__write_module_interface_files__V_27_27));
#line 803 "write_module_interface_files.m"
            }
#line 804 "write_module_interface_files.m"
            {
#line 804 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Defn_13));
#line 804 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_20_20, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_14));
#line 804 "write_module_interface_files.m"
            }
#line 804 "write_module_interface_files.m"
            {
#line 804 "write_module_interface_files.m"
              MR_Word base;
#line 804 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = base;
#line 804 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_20_20));
#line 804 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "write_module_interface_files.m"
            }
#line 801 "write_module_interface_files.m"
          }
#line 796 "write_module_interface_files.m"
      }
#line 806 "write_module_interface_files.m"
    else
#line 806 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_16 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefnPairs_0_15;
#line 806 "write_module_interface_files.m"
  }
#line 781 "write_module_interface_files.m"
}

#line 756 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_type_defn_3_p_0(
#line 756 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__New_1,
#line 756 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__2_2,
#line 756 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__3_3)
#line 756 "write_module_interface_files.m"
{
#line 759 "write_module_interface_files.m"
  {
#line 759 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 759 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "write_module_interface_files.m"
      {
#line 759 "write_module_interface_files.m"
        {
#line 759 "write_module_interface_files.m"
          MR_Word base;
#line 759 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 759 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 759 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "write_module_interface_files.m"
        }
#line 759 "write_module_interface_files.m"
      }
#line 759 "write_module_interface_files.m"
    else
#line 760 "write_module_interface_files.m"
      {
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 0)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__2_2, (MR_Integer) 1)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 0)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NewParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 1)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 0)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 1)));
#line 760 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_22;
#line 761 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 2)));
#line 761 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 3)));
#line 761 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 4)));
#line 761 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_1, (MR_Integer) 5)));
#line 762 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 2)));
#line 762 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 3)));
#line 762 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 4)));
#line 762 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_7, (MR_Integer) 5)));

#line 763 "write_module_interface_files.m"
        {
#line 763 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_22, parse_tree__write_module_interface_files__NewSymName_10, parse_tree__write_module_interface_files__HeadSymName_16);
        }
#line 767 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__CompareSymName_22 == (MR_Integer) 1))
#line 766 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__succeeded = MR_TRUE;
#line 767 "write_module_interface_files.m"
        else
#line 767 "write_module_interface_files.m"
          if ((parse_tree__write_module_interface_files__CompareSymName_22 == (MR_Integer) 0))
#line 768 "write_module_interface_files.m"
            {
#line 768 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__TypeInfo_29_29 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[2];
#line 768 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__NewParamsLength_23;
#line 768 "write_module_interface_files.m"
              MR_Integer parse_tree__write_module_interface_files__HeadParamsLength_24;
#line 768 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__Compare_25;

#line 769 "write_module_interface_files.m"
              {
#line 769 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__NewParams_11, &parse_tree__write_module_interface_files__NewParamsLength_23);
              }
#line 770 "write_module_interface_files.m"
              {
#line 770 "write_module_interface_files.m"
                mercury__list__length_2_p_0(parse_tree__write_module_interface_files__TypeInfo_29_29, parse_tree__write_module_interface_files__HeadParams_17, &parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 771 "write_module_interface_files.m"
              {
#line 771 "write_module_interface_files.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__write_module_interface_files__Compare_25, parse_tree__write_module_interface_files__NewParamsLength_23, parse_tree__write_module_interface_files__HeadParamsLength_24);
              }
#line 772 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__Compare_25 == (MR_Integer) 1);
#line 768 "write_module_interface_files.m"
            }
#line 767 "write_module_interface_files.m"
          else
#line 767 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = MR_FALSE;
#line 776 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 775 "write_module_interface_files.m"
          {
#line 775 "write_module_interface_files.m"
            MR_Word base;
#line 775 "write_module_interface_files.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 775 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_1));
#line 775 "write_module_interface_files.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__2_2));
#line 775 "write_module_interface_files.m"
          }
#line 776 "write_module_interface_files.m"
        else
#line 777 "write_module_interface_files.m"
          {
#line 777 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_26;

#line 777 "write_module_interface_files.m"
            {
#line 777 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__New_1, parse_tree__write_module_interface_files__Tail_8, &parse_tree__write_module_interface_files__NewTail_26);
            }
#line 778 "write_module_interface_files.m"
            {
#line 778 "write_module_interface_files.m"
              MR_Word base;
#line 778 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__3_3 = base;
#line 778 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_7));
#line 778 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_26));
#line 778 "write_module_interface_files.m"
            }
#line 777 "write_module_interface_files.m"
          }
#line 760 "write_module_interface_files.m"
      }
#line 759 "write_module_interface_files.m"
  }
#line 756 "write_module_interface_files.m"
}

#line 739 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__insert_module_spec_4_p_0(
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Context_1,
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__NewModuleSpec_2,
#line 739 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__3_3,
#line 739 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__HeadVar__4_4)
#line 739 "write_module_interface_files.m"
{
#line 743 "write_module_interface_files.m"
  {
#line 743 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 743 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 743 "write_module_interface_files.m"
      {
#line 743 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__New_7;

#line 744 "write_module_interface_files.m"
        {
#line 744 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__New_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_7, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_1));
#line 744 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewModuleSpec_2));
#line 744 "write_module_interface_files.m"
        }
#line 743 "write_module_interface_files.m"
        {
#line 743 "write_module_interface_files.m"
          MR_Word base;
#line 743 "write_module_interface_files.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 743 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_7));
#line 743 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 743 "write_module_interface_files.m"
        }
#line 743 "write_module_interface_files.m"
      }
#line 743 "write_module_interface_files.m"
    else
#line 745 "write_module_interface_files.m"
      {
#line 745 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Head_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 0)));
#line 745 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__3_3, (MR_Integer) 1)));
#line 745 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__HeadModuleSpec_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_11, (MR_Integer) 1)));
#line 745 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__CompareSymName_16;
#line 746 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__Head_11, (MR_Integer) 0)));

#line 747 "write_module_interface_files.m"
        {
#line 747 "write_module_interface_files.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__write_module_interface_files__CompareSymName_16, parse_tree__write_module_interface_files__NewModuleSpec_2, parse_tree__write_module_interface_files__HeadModuleSpec_15);
        }
#line 748 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__CompareSymName_16 == (MR_Integer) 1);
#line 751 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 749 "write_module_interface_files.m"
          {
#line 749 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__New_17;

#line 749 "write_module_interface_files.m"
            {
#line 749 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__New_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_17, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Context_1));
#line 749 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__New_17, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewModuleSpec_2));
#line 749 "write_module_interface_files.m"
            }
#line 750 "write_module_interface_files.m"
            {
#line 750 "write_module_interface_files.m"
              MR_Word base;
#line 750 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 750 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__New_17));
#line 750 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__HeadVar__3_3));
#line 750 "write_module_interface_files.m"
            }
#line 749 "write_module_interface_files.m"
          }
#line 751 "write_module_interface_files.m"
        else
#line 752 "write_module_interface_files.m"
          {
#line 752 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__NewTail_18;

#line 752 "write_module_interface_files.m"
            {
#line 752 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_1, parse_tree__write_module_interface_files__NewModuleSpec_2, parse_tree__write_module_interface_files__Tail_12, &parse_tree__write_module_interface_files__NewTail_18);
            }
#line 753 "write_module_interface_files.m"
            {
#line 753 "write_module_interface_files.m"
              MR_Word base;
#line 753 "write_module_interface_files.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_module_interface_files.m"
              *parse_tree__write_module_interface_files__HeadVar__4_4 = base;
#line 753 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Head_11));
#line 753 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__NewTail_18));
#line 753 "write_module_interface_files.m"
            }
#line 752 "write_module_interface_files.m"
          }
#line 745 "write_module_interface_files.m"
      }
#line 743 "write_module_interface_files.m"
  }
#line 739 "write_module_interface_files.m"
}

#line 687 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9,
#line 687 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10,
#line 687 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11)
#line 687 "write_module_interface_files.m"
{
#line 693 "write_module_interface_files.m"
  while (MR_TRUE)
#line 693 "write_module_interface_files.m"
    {
#line 693 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 693 "write_module_interface_files.m"
      {
#line 693 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 693 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 693 "write_module_interface_files.m"
          {
#line 694 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_11 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 694 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_9 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 694 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_7 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 693 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_5 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 693 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 693 "write_module_interface_files.m"
          }
#line 693 "write_module_interface_files.m"
        else
#line 696 "write_module_interface_files.m"
          {
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60;
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61;
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63;
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68;
#line 696 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72;
#line 731 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_34;

#line 697 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_27)) == (MR_mktag((MR_Integer) 2)));
#line 697 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 697 "write_module_interface_files.m"
              {
#line 697 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemModuleDefn_34 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_27), (MR_Integer) 2);
#line 698 "write_module_interface_files.m"
                {
#line 698 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__ModuleDefn_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 0)));
#line 698 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 1)));
#line 698 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_34, (MR_Integer) 2)));

#line 706 "write_module_interface_files.m"
                  if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 700 "write_module_interface_files.m"
                    {
#line 700 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ImportModules_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 1)));
#line 703 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ModuleSpec_39;
#line 701 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_67_67;

#line 701 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__ImportModules_38)) == (MR_mktag((MR_Integer) 1)));
#line 701 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 701 "write_module_interface_files.m"
                        {
#line 701 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__ModuleSpec_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ImportModules_38, (MR_Integer) 0)));
#line 701 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ImportModules_38, (MR_Integer) 1)));
#line 701 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "write_module_interface_files.m"
                        }
#line 703 "write_module_interface_files.m"
                      if (parse_tree__write_module_interface_files__succeeded)
#line 702 "write_module_interface_files.m"
                        {
#line 702 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_36, parse_tree__write_module_interface_files__ModuleSpec_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68);
                        }
#line 703 "write_module_interface_files.m"
                      else
#line 704 "write_module_interface_files.m"
                        {
#line 704 "write_module_interface_files.m"
                          {
#line 704 "write_module_interface_files.m"
                            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.do_standardize_impl_items\'/11", (MR_String) "non-singleton-module import");
#line 704 "write_module_interface_files.m"
                            return;
                          }
#line 704 "write_module_interface_files.m"
                        }
#line 700 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 700 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 700 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 700 "write_module_interface_files.m"
                    }
#line 706 "write_module_interface_files.m"
                  else
#line 706 "write_module_interface_files.m"
                    if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 728 "write_module_interface_files.m"
                      {
#line 729 "write_module_interface_files.m"
                        {
#line 729 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 729 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4));
#line 729 "write_module_interface_files.m"
                        }
#line 728 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 728 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 728 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 728 "write_module_interface_files.m"
                      }
#line 706 "write_module_interface_files.m"
                    else
#line 706 "write_module_interface_files.m"
                      if (((((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 707 "write_module_interface_files.m"
                        {
#line 707 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__UseModules_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_35, (MR_Integer) 1)));
#line 710 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__ModuleSpec_79;
#line 708 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_62_62;

#line 708 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__UseModules_40)) == (MR_mktag((MR_Integer) 1)));
#line 708 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 708 "write_module_interface_files.m"
                            {
#line 708 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__ModuleSpec_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__UseModules_40, (MR_Integer) 0)));
#line 708 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__UseModules_40, (MR_Integer) 1)));
#line 708 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "write_module_interface_files.m"
                            }
#line 710 "write_module_interface_files.m"
                          if (parse_tree__write_module_interface_files__succeeded)
#line 709 "write_module_interface_files.m"
                            {
#line 709 "write_module_interface_files.m"
                              parse_tree__write_module_interface_files__insert_module_spec_4_p_0(parse_tree__write_module_interface_files__Context_36, parse_tree__write_module_interface_files__ModuleSpec_79, parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63);
                            }
#line 710 "write_module_interface_files.m"
                          else
#line 711 "write_module_interface_files.m"
                            {
#line 711 "write_module_interface_files.m"
                              {
#line 711 "write_module_interface_files.m"
                                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.do_standardize_impl_items\'/11", (MR_String) "non-singleton-module use");
#line 711 "write_module_interface_files.m"
                                return;
                              }
#line 711 "write_module_interface_files.m"
                            }
#line 707 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 707 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 707 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 707 "write_module_interface_files.m"
                        }
#line 706 "write_module_interface_files.m"
                      else
#line 725 "write_module_interface_files.m"
                        {
#line 726 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = (MR_Integer) 1;
#line 725 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 725 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 725 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 725 "write_module_interface_files.m"
                        }
#line 698 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 698 "write_module_interface_files.m"
                }
#line 697 "write_module_interface_files.m"
              }
#line 697 "write_module_interface_files.m"
            else
#line 733 "write_module_interface_files.m"
              {
#line 733 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_49;

#line 731 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 731 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 731 "write_module_interface_files.m"
                  {
#line 731 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__ItemTypeDefn_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_27, (MR_Integer) 1)));
#line 732 "write_module_interface_files.m"
                    {
#line 732 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__insert_type_defn_3_p_0(parse_tree__write_module_interface_files__ItemTypeDefn_49, parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10, &parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72);
                    }
#line 732 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4;
#line 731 "write_module_interface_files.m"
                  }
#line 731 "write_module_interface_files.m"
                else
#line 734 "write_module_interface_files.m"
                  {
#line 734 "write_module_interface_files.m"
                    {
#line 734 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_27));
#line 734 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4));
#line 734 "write_module_interface_files.m"
                    }
#line 734 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10;
#line 734 "write_module_interface_files.m"
                  }
#line 733 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8;
#line 733 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6;
#line 733 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2;
#line 733 "write_module_interface_files.m"
              }
#line 736 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 736 "write_module_interface_files.m"
            {
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_28;
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_61_61;
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_60_60;
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0__tmp_copy_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_68_68;
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0__tmp_copy_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_63_63;
#line 736 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_72_72;

#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0_10 = parse_tree__write_module_interface_files__STATE_VARIABLE_TypeDefns_0__tmp_copy_10;
#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0_8 = parse_tree__write_module_interface_files__STATE_VARIABLE_UseSpecs_0__tmp_copy_8;
#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0_6 = parse_tree__write_module_interface_files__STATE_VARIABLE_ImportSpecs_0__tmp_copy_6;
#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0_4 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevRemainderItems_0__tmp_copy_4;
#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_Unexpected_0__tmp_copy_2;
#line 736 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 736 "write_module_interface_files.m"
            }
#line 736 "write_module_interface_files.m"
            continue;
#line 696 "write_module_interface_files.m"
          }
#line 693 "write_module_interface_files.m"
      }
#line 693 "write_module_interface_files.m"
      break;
#line 693 "write_module_interface_files.m"
    }
#line 687 "write_module_interface_files.m"
}

#line 679 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(
#line 679 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3)
#line 679 "write_module_interface_files.m"
{
#line 681 "write_module_interface_files.m"
  {
#line 681 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_4;
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 0)));
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 1)));
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_7;
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_8;
#line 681 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_9_9;

#line 683 "write_module_interface_files.m"
    {
#line 683 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleSpec_6));
#line 683 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "write_module_interface_files.m"
    }
#line 683 "write_module_interface_files.m"
    {
#line 683 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 683 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_9_9));
#line 683 "write_module_interface_files.m"
    }
#line 684 "write_module_interface_files.m"
    {
#line 684 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_7));
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 684 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 2) = ((MR_Box) ((MR_Integer) -1));
#line 684 "write_module_interface_files.m"
    }
#line 685 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_4 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_8);
#line 681 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_4;
#line 681 "write_module_interface_files.m"
  }
#line 679 "write_module_interface_files.m"
}

#line 671 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(
#line 671 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleSpecInDefn_3)
#line 671 "write_module_interface_files.m"
{
#line 673 "write_module_interface_files.m"
  {
#line 673 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Item_4;
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 0)));
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ModuleSpecInDefn_3, (MR_Integer) 1)));
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ModuleDefn_7;
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_8;
#line 673 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_9_9;

#line 675 "write_module_interface_files.m"
    {
#line 675 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleSpec_6));
#line 675 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "write_module_interface_files.m"
    }
#line 675 "write_module_interface_files.m"
    {
#line 675 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ModuleDefn_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 675 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ModuleDefn_7, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_9_9));
#line 675 "write_module_interface_files.m"
    }
#line 676 "write_module_interface_files.m"
    {
#line 676 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__ItemModuleDefn_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ModuleDefn_7));
#line 676 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 1) = ((MR_Box) (parse_tree__write_module_interface_files__Context_5));
#line 676 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_8, 2) = ((MR_Box) ((MR_Integer) -1));
#line 676 "write_module_interface_files.m"
    }
#line 677 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__Item_4 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__write_module_interface_files__ItemModuleDefn_8);
#line 673 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__Item_4;
#line 673 "write_module_interface_files.m"
  }
#line 671 "write_module_interface_files.m"
}

#line 667 "write_module_interface_files.m"
static MR_Word MR_CALL 
parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(
#line 667 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ItemTypeDefn_3)
#line 667 "write_module_interface_files.m"
{
#line 669 "write_module_interface_files.m"
  {
#line 669 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 669 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__HeadVar__2_2;

#line 669 "write_module_interface_files.m"
    {
#line 669 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 669 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ItemTypeDefn_3));
#line 669 "write_module_interface_files.m"
    }
#line 669 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__HeadVar__2_2;
#line 669 "write_module_interface_files.m"
  }
#line 667 "write_module_interface_files.m"
}

#line 662 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_3(
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 662 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 662 "write_module_interface_files.m"
{
#line 662 "write_module_interface_files.m"
  {
#line 662 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 662 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 662 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__2_2;

#line 662 "write_module_interface_files.m"
    {
#line 662 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv2_HeadVar__2_2 = parse_tree__write_module_interface_files__wrap_type_defn_item_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 662 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__2_2));
#line 662 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 662 "write_module_interface_files.m"
  }
#line 662 "write_module_interface_files.m"
}

#line 661 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_2(
#line 661 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 661 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 661 "write_module_interface_files.m"
{
#line 661 "write_module_interface_files.m"
  {
#line 661 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 661 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 661 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv1_Item_4;

#line 661 "write_module_interface_files.m"
    {
#line 661 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv1_Item_4 = parse_tree__write_module_interface_files__wrap_use_module_spec_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 661 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv1_Item_4));
#line 661 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 661 "write_module_interface_files.m"
  }
#line 661 "write_module_interface_files.m"
}

#line 660 "write_module_interface_files.m"
static MR_Box MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0_1(
#line 660 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 660 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1)
#line 660 "write_module_interface_files.m"
{
#line 660 "write_module_interface_files.m"
  {
#line 660 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__wrapper_arg_2;
#line 660 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 660 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_Item_4;

#line 660 "write_module_interface_files.m"
    {
#line 660 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__conv0_Item_4 = parse_tree__write_module_interface_files__wrap_import_module_spec_1_f_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1));
    }
#line 660 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_Item_4));
#line 660 "write_module_interface_files.m"
    return parse_tree__write_module_interface_files__wrapper_arg_2;
#line 660 "write_module_interface_files.m"
  }
#line 660 "write_module_interface_files.m"
}

#line 646 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(
#line 646 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 646 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 646 "write_module_interface_files.m"
{
#line 648 "write_module_interface_files.m"
  {
#line 648 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 648 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Unexpected_5;
#line 648 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevRemainderItems_6;
#line 648 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__ImportModuleSpecs_7;
#line 648 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__UseModuleSpecs_8;
#line 648 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeDefnInfos_9;

#line 649 "write_module_interface_files.m"
    {
#line 649 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__do_standardize_impl_items_11_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Integer) 0, &parse_tree__write_module_interface_files__Unexpected_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevRemainderItems_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__ImportModuleSpecs_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__UseModuleSpecs_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__TypeDefnInfos_9);
    }
#line 657 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__Unexpected_5 == (MR_Integer) 0))
#line 658 "write_module_interface_files.m"
      {
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_31_31;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__RemainderItems_10;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImportItems_11;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__UseItems_12;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__TypeDefnItems_13;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_22_22;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_23_23;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_24_24;
#line 658 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;

#line 659 "write_module_interface_files.m"
        {
#line 659 "write_module_interface_files.m"
          mercury__list__reverse_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__RevRemainderItems_6, &parse_tree__write_module_interface_files__RemainderItems_10);
        }
#line 11819 "parse_tree.write_module_interface_files.c"
        parse_tree__write_module_interface_files__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_module_specifier_in_defn_0;
#line 660 "write_module_interface_files.m"
        {
#line 660 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ImportItems_11 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[5], parse_tree__write_module_interface_files__ImportModuleSpecs_7);
        }
#line 661 "write_module_interface_files.m"
        {
#line 661 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__UseItems_12 = mercury__list__map_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_31_31, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[6], parse_tree__write_module_interface_files__UseModuleSpecs_8);
        }
#line 662 "write_module_interface_files.m"
        {
#line 662 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__TypeDefnItems_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0, parse_tree__write_module_interface_files__TypeCtorInfo_30_30, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[7], parse_tree__write_module_interface_files__TypeDefnInfos_9);
        }
#line 663 "write_module_interface_files.m"
        {
#line 663 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 0) = ((MR_Box) (parse_tree__write_module_interface_files__RemainderItems_10));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "write_module_interface_files.m"
        }
#line 663 "write_module_interface_files.m"
        {
#line 663 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 0) = ((MR_Box) (parse_tree__write_module_interface_files__TypeDefnItems_13));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_24_24, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_25_25));
#line 663 "write_module_interface_files.m"
        }
#line 663 "write_module_interface_files.m"
        {
#line 663 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 0) = ((MR_Box) (parse_tree__write_module_interface_files__UseItems_12));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_23_23, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_24_24));
#line 663 "write_module_interface_files.m"
        }
#line 663 "write_module_interface_files.m"
        {
#line 663 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImportItems_11));
#line 663 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_22_22, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_23_23));
#line 663 "write_module_interface_files.m"
        }
#line 663 "write_module_interface_files.m"
        {
#line 663 "write_module_interface_files.m"
          mercury__list__condense_2_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_30_30, parse_tree__write_module_interface_files__V_22_22, parse_tree__write_module_interface_files__Items_4);
#line 663 "write_module_interface_files.m"
          return;
        }
#line 658 "write_module_interface_files.m"
      }
#line 657 "write_module_interface_files.m"
    else
#line 652 "write_module_interface_files.m"
      {
#line 653 "write_module_interface_files.m"
        {
#line 653 "write_module_interface_files.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_module_interface_files", (MR_String) "predicate \140parse_tree.write_module_interface_files.standardize_impl_items\'/2", (MR_String) "unexpected items");
#line 653 "write_module_interface_files.m"
          return;
        }
#line 652 "write_module_interface_files.m"
      }
#line 648 "write_module_interface_files.m"
  }
#line 646 "write_module_interface_files.m"
}

#line 613 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_6(
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 613 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_3,
#line 613 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_4)
#line 613 "write_module_interface_files.m"
{
#line 613 "write_module_interface_files.m"
  {
#line 613 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 613 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv5_HeadVar__5_61;

#line 613 "write_module_interface_files.m"
    {
#line 613 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__613__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_3), &parse_tree__write_module_interface_files__conv5_HeadVar__5_61);
    }
#line 613 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_4 = ((MR_Box) (parse_tree__write_module_interface_files__conv5_HeadVar__5_61));
#line 613 "write_module_interface_files.m"
  }
#line 613 "write_module_interface_files.m"
}

#line 607 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_5(
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 607 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 607 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 607 "write_module_interface_files.m"
{
#line 607 "write_module_interface_files.m"
  {
#line 607 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 607 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv4_HeadVar__3_54;

#line 607 "write_module_interface_files.m"
    {
#line 607 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__607__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv4_HeadVar__3_54);
    }
#line 607 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv4_HeadVar__3_54));
#line 607 "write_module_interface_files.m"
  }
#line 607 "write_module_interface_files.m"
}

#line 599 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_4(
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 599 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_2,
#line 599 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_3)
#line 599 "write_module_interface_files.m"
{
#line 599 "write_module_interface_files.m"
  {
#line 599 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 599 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv2_HeadVar__3_47;

#line 599 "write_module_interface_files.m"
    {
#line 599 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__599__1_3_p_0(((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_2), &parse_tree__write_module_interface_files__conv2_HeadVar__3_47);
    }
#line 599 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_3 = ((MR_Box) (parse_tree__write_module_interface_files__conv2_HeadVar__3_47));
#line 599 "write_module_interface_files.m"
  }
#line 599 "write_module_interface_files.m"
}

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2(
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__env_ptr_arg)
#line 587 "write_module_interface_files.m"
{
#line 587 "write_module_interface_files.m"
  {
#line 587 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s * parse_tree__write_module_interface_files__env_ptr = (struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s *) parse_tree__write_module_interface_files__env_ptr_arg;

#line 587 "write_module_interface_files.m"
    *((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41));
#line 587 "write_module_interface_files.m"
    {
#line 587 "write_module_interface_files.m"
      ((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont)((parse_tree__write_module_interface_files__env_ptr)->parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr);
#line 587 "write_module_interface_files.m"
      return;
    }
#line 587 "write_module_interface_files.m"
  }
#line 587 "write_module_interface_files.m"
}

#line 587 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3(
#line 587 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 587 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_1,
#line 587 "write_module_interface_files.m"
  MR_Cont parse_tree__write_module_interface_files__cont,
#line 587 "write_module_interface_files.m"
  void * parse_tree__write_module_interface_files__cont_env_ptr)
#line 587 "write_module_interface_files.m"
{
#line 587 "write_module_interface_files.m"
  {
#line 587 "write_module_interface_files.m"
    struct parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0_s parse_tree__write_module_interface_files__env;

#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__wrapper_arg_1 = parse_tree__write_module_interface_files__wrapper_arg_1;
#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont = parse_tree__write_module_interface_files__cont;
#line 587 "write_module_interface_files.m"
    (parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__cont_env_ptr = parse_tree__write_module_interface_files__cont_env_ptr;
#line 587 "write_module_interface_files.m"
    {
#line 587 "write_module_interface_files.m"
      MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;

#line 587 "write_module_interface_files.m"
      {
#line 587 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__IntroducedFrom__pred__strip_unnecessary_impl_defns__587__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 4))), &(parse_tree__write_module_interface_files__env).parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3_env_0__conv1_HeadVar__3_41, parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_2, &parse_tree__write_module_interface_files__env);
      }
#line 587 "write_module_interface_files.m"
    }
#line 587 "write_module_interface_files.m"
  }
#line 587 "write_module_interface_files.m"
}

#line 580 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1(
#line 580 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__closure_arg,
#line 580 "write_module_interface_files.m"
  MR_Box parse_tree__write_module_interface_files__wrapper_arg_1,
#line 580 "write_module_interface_files.m"
  MR_Box * parse_tree__write_module_interface_files__wrapper_arg_2)
#line 580 "write_module_interface_files.m"
{
#line 580 "write_module_interface_files.m"
  {
#line 580 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__closure = parse_tree__write_module_interface_files__closure_arg;
#line 580 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16;

#line 580 "write_module_interface_files.m"
    {
#line 580 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__make_impl_type_abstract_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_module_interface_files__wrapper_arg_1), &parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16);
    }
#line 580 "write_module_interface_files.m"
    *parse_tree__write_module_interface_files__wrapper_arg_2 = ((MR_Box) (parse_tree__write_module_interface_files__conv0_STATE_VARIABLE_TypeDefnPairs_16));
#line 580 "write_module_interface_files.m"
  }
#line 580 "write_module_interface_files.m"
}

#line 553 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(
#line 553 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 553 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 553 "write_module_interface_files.m"
{
#line 558 "write_module_interface_files.m"
  {
#line 558 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeCtorInfo_91_91;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__TypeInfo_96_96;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems0_8;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__BothTypesMap_9;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeImplImports_12;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__NecessaryImplImports_14;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__IntItems_30;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_39_39;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__V_64_64;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68;
#line 558 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69;
#line 604 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49;
#line 618 "write_module_interface_files.m"
    MR_Box parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63;

#line 557 "write_module_interface_files.m"
    {
#line 557 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__gather_type_defns_5_p_0(parse_tree__write_module_interface_files__Items0_3, &parse_tree__write_module_interface_files__IntItems0_8, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36, &parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38);
    }
#line 12171 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 559 "write_module_interface_files.m"
    {
#line 559 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__BothTypesMap_9 = mercury__multi_map__merge_2_f_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[0], parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38);
    }
#line 564 "write_module_interface_files.m"
    {
#line 564 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_exported_types_6_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38, parse_tree__write_module_interface_files__BothTypesMap_9, &parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, &parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11, &parse_tree__write_module_interface_files__NecessaryTypeImplImports_12);
    }
#line 572 "write_module_interface_files.m"
    {
#line 572 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__get_requirements_of_impl_typeclasses_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36, &parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13);
    }
#line 575 "write_module_interface_files.m"
    {
#line 575 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__NecessaryImplImports_14 = mercury__set__union_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_module_interface_files__NecessaryTypeImplImports_12, parse_tree__write_module_interface_files__NecessaryTypeclassImplImports_13);
    }
#line 580 "write_module_interface_files.m"
    {
#line 580 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[0]));
#line 580 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_1));
#line 580 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__V_39_39, 3) = ((MR_Box) (parse_tree__write_module_interface_files__BothTypesMap_9));
#line 580 "write_module_interface_files.m"
    }
#line 12207 "parse_tree.write_module_interface_files.c"
    parse_tree__write_module_interface_files__TypeInfo_96_96 = (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[0];
#line 580 "write_module_interface_files.m"
    {
#line 580 "write_module_interface_files.m"
      mercury__map__map_values_only_3_p_0(parse_tree__write_module_interface_files__TypeInfo_96_96, parse_tree__write_module_interface_files__TypeInfo_96_96, parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__V_39_39, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_38_38, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40);
    }
#line 587 "write_module_interface_files.m"
    {
#line 587 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 587 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 0) = ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_4[1]));
#line 587 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 1) = ((MR_Box) (parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0_3));
#line 587 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 587 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 3) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37));
#line 587 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, 4) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40));
#line 587 "write_module_interface_files.m"
    }
#line 598 "write_module_interface_files.m"
    {
#line 598 "write_module_interface_files.m"
      mercury__solutions__solutions_2_p_1(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__FindRemovableAbsExpTypes_15, &parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22);
    }
#line 604 "write_module_interface_files.m"
    {
#line 604 "write_module_interface_files.m"
      mercury__list__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_1[3], parse_tree__write_module_interface_files__RemovableAbstractExportedTypes_22, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_40_40)), &parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49);
    }
#line 604 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49 = ((MR_Word) parse_tree__write_module_interface_files__conv3_STATE_VARIABLE_ImplTypesMap_49_49);
#line 618 "write_module_interface_files.m"
    {
#line 618 "write_module_interface_files.m"
      mercury__map__foldl_4_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__TypeInfo_96_96, (MR_Word) &parse_tree__write_module_interface_files_scalar_common_2[1], (MR_Word) &parse_tree__write_module_interface_files_scalar_common_6[0], parse_tree__write_module_interface_files__STATE_VARIABLE_ImplTypesMap_49_49, ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_36_36)), &parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63);
    }
#line 618 "write_module_interface_files.m"
    parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63 = ((MR_Word) parse_tree__write_module_interface_files__conv6_STATE_VARIABLE_ImplItems_63_63);
#line 620 "write_module_interface_files.m"
    {
#line 620 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__V_64_64 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 620 "write_module_interface_files.m"
    {
#line 620 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__IntItems_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_30, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_64_64));
#line 620 "write_module_interface_files.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__IntItems_30, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems0_8));
#line 620 "write_module_interface_files.m"
    }
#line 622 "write_module_interface_files.m"
    {
#line 622 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__maybe_strip_import_decls_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_63_63, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66);
    }
#line 624 "write_module_interface_files.m"
    {
#line 624 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_imports_3_p_0(parse_tree__write_module_interface_files__NecessaryImplImports_14, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_66_66, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67);
    }
#line 625 "write_module_interface_files.m"
    {
#line 625 "write_module_interface_files.m"
      mercury__set__union_3_p_0(parse_tree__write_module_interface_files__TypeCtorInfo_91_91, parse_tree__write_module_interface_files__NecessaryDummyTypeCtors_10, parse_tree__write_module_interface_files__NecessaryAbsImplExpTypeCtors_11, &parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31);
    }
#line 627 "write_module_interface_files.m"
    {
#line 627 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_unnecessary_impl_types_3_p_0(parse_tree__write_module_interface_files__AllNecessaryTypeCtors_31, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_67_67, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68);
    }
#line 628 "write_module_interface_files.m"
    {
#line 628 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_local_foreign_enum_pragmas_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_IntTypesMap_37_37, parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_68_68, &parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69);
    }
#line 632 "write_module_interface_files.m"
    if ((parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "write_module_interface_files.m"
      *parse_tree__write_module_interface_files__Items_4 = parse_tree__write_module_interface_files__IntItems_30;
#line 632 "write_module_interface_files.m"
    else
#line 633 "write_module_interface_files.m"
      {
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__StdImplItems_34;
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__ImplSectionItem_35;
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_72_72;
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_73_73;
#line 633 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_75_75;

#line 634 "write_module_interface_files.m"
        {
#line 634 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__standardize_impl_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_ImplItems_69_69, &parse_tree__write_module_interface_files__StdImplItems_34);
        }
#line 635 "write_module_interface_files.m"
        {
#line 635 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__ImplSectionItem_35 = parse_tree__item_util__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 636 "write_module_interface_files.m"
        {
#line 636 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ImplSectionItem_35));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "write_module_interface_files.m"
        }
#line 636 "write_module_interface_files.m"
        {
#line 636 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_75_75, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdImplItems_34));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "write_module_interface_files.m"
        }
#line 636 "write_module_interface_files.m"
        {
#line 636 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 0) = ((MR_Box) (parse_tree__write_module_interface_files__V_73_73));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_75_75));
#line 636 "write_module_interface_files.m"
        }
#line 636 "write_module_interface_files.m"
        {
#line 636 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntItems_30));
#line 636 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_72_72));
#line 636 "write_module_interface_files.m"
        }
#line 636 "write_module_interface_files.m"
        {
#line 636 "write_module_interface_files.m"
          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__V_71_71, parse_tree__write_module_interface_files__Items_4);
#line 636 "write_module_interface_files.m"
          return;
        }
#line 633 "write_module_interface_files.m"
      }
#line 558 "write_module_interface_files.m"
  }
#line 553 "write_module_interface_files.m"
}

#line 534 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 534 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 534 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 534 "write_module_interface_files.m"
{
#line 537 "write_module_interface_files.m"
  while (MR_TRUE)
#line 537 "write_module_interface_files.m"
    {
#line 537 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 537 "write_module_interface_files.m"
      {
#line 537 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 537 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 537 "write_module_interface_files.m"
        else
#line 538 "write_module_interface_files.m"
          {
#line 538 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 538 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;
#line 542 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ItemPromise_10;
#line 542 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_18_18;
#line 543 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_11_11;
#line 543 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_12_12;
#line 543 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_13_13;
#line 543 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_14_14;
#line 543 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files__V_15_15;

#line 542 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 542 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 542 "write_module_interface_files.m"
              {
#line 542 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__ItemPromise_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_7, (MR_Integer) 1)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 0)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 1)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 2)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 3)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 4)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPromise_10, (MR_Integer) 5)));
#line 543 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_18_18 == (MR_Integer) 3);
#line 542 "write_module_interface_files.m"
              }
#line 546 "write_module_interface_files.m"
            if (parse_tree__write_module_interface_files__succeeded)
#line 546 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 546 "write_module_interface_files.m"
            else
#line 547 "write_module_interface_files.m"
              {
#line 547 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 547 "write_module_interface_files.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 547 "write_module_interface_files.m"
              }
#line 549 "write_module_interface_files.m"
            /* direct tailcall eliminated */
#line 549 "write_module_interface_files.m"
            {
#line 549 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 549 "write_module_interface_files.m"
              MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_19_19;

#line 549 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 549 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 549 "write_module_interface_files.m"
            }
#line 549 "write_module_interface_files.m"
            continue;
#line 538 "write_module_interface_files.m"
          }
#line 537 "write_module_interface_files.m"
      }
#line 537 "write_module_interface_files.m"
      break;
#line 537 "write_module_interface_files.m"
    }
#line 534 "write_module_interface_files.m"
}

#line 474 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(
#line 474 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__HeadVar__1_1,
#line 474 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2,
#line 474 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3)
#line 474 "write_module_interface_files.m"
{
#line 477 "write_module_interface_files.m"
  while (MR_TRUE)
#line 477 "write_module_interface_files.m"
    {
#line 477 "write_module_interface_files.m"
      /* tailcall optimized into a loop */
#line 477 "write_module_interface_files.m"
      {
#line 477 "write_module_interface_files.m"
        MR_bool parse_tree__write_module_interface_files__succeeded;

#line 477 "write_module_interface_files.m"
        if ((parse_tree__write_module_interface_files__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "write_module_interface_files.m"
          *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 477 "write_module_interface_files.m"
        else
#line 478 "write_module_interface_files.m"
          {
#line 478 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Item_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 0)));
#line 478 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__Items_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__HeadVar__1_1, (MR_Integer) 1)));

#line 506 "write_module_interface_files.m"
            if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_7)) == (MR_mktag((MR_Integer) 2))))
#line 480 "write_module_interface_files.m"
              {
#line 480 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ItemModuleDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__write_module_interface_files__Item_7), (MR_Integer) 2);
#line 480 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__ModuleDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 0)));
#line 481 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 1)));
#line 481 "write_module_interface_files.m"
                MR_Integer parse_tree__write_module_interface_files__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemModuleDefn_10, (MR_Integer) 2)));

#line 489 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__ModuleDefn_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 485 "write_module_interface_files.m"
                  *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 489 "write_module_interface_files.m"
                else
#line 489 "write_module_interface_files.m"
                  if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_11)) == (MR_mktag((MR_Integer) 1))))
#line 483 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 489 "write_module_interface_files.m"
                  else
#line 489 "write_module_interface_files.m"
                    if (((MR_tag((MR_Word) parse_tree__write_module_interface_files__ModuleDefn_11)) == (MR_mktag((MR_Integer) 2))))
#line 484 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_3 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2;
#line 489 "write_module_interface_files.m"
                    else
#line 502 "write_module_interface_files.m"
                      {
#line 502 "write_module_interface_files.m"
                        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;

#line 503 "write_module_interface_files.m"
                        {
#line 503 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 503 "write_module_interface_files.m"
                          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 503 "write_module_interface_files.m"
                        }
#line 504 "write_module_interface_files.m"
                        /* direct tailcall eliminated */
#line 504 "write_module_interface_files.m"
                        {
#line 504 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 504 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_44_44;

#line 504 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 504 "write_module_interface_files.m"
                          parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 504 "write_module_interface_files.m"
                        }
#line 504 "write_module_interface_files.m"
                        continue;
#line 502 "write_module_interface_files.m"
                      }
#line 480 "write_module_interface_files.m"
              }
#line 506 "write_module_interface_files.m"
            else
#line 523 "write_module_interface_files.m"
              {
#line 523 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;

#line 524 "write_module_interface_files.m"
                {
#line 524 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_7));
#line 524 "write_module_interface_files.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2));
#line 524 "write_module_interface_files.m"
                }
#line 525 "write_module_interface_files.m"
                /* direct tailcall eliminated */
#line 525 "write_module_interface_files.m"
                {
#line 525 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1 = parse_tree__write_module_interface_files__Items_8;
#line 525 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_42_42;

#line 525 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0_2 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevItems_0__tmp_copy_2;
#line 525 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__HeadVar__1_1 = parse_tree__write_module_interface_files__HeadVar__1__tmp_copy_1;
#line 525 "write_module_interface_files.m"
                }
#line 525 "write_module_interface_files.m"
                continue;
#line 523 "write_module_interface_files.m"
              }
#line 478 "write_module_interface_files.m"
          }
#line 477 "write_module_interface_files.m"
      }
#line 477 "write_module_interface_files.m"
      break;
#line 477 "write_module_interface_files.m"
    }
#line 474 "write_module_interface_files.m"
}

#line 461 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(
#line 461 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Items0_3,
#line 461 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__Items_4)
#line 461 "write_module_interface_files.m"
{
#line 464 "write_module_interface_files.m"
  {
#line 464 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 464 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_5;

#line 467 "write_module_interface_files.m"
    {
#line 467 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_5);
    }
#line 468 "write_module_interface_files.m"
    {
#line 468 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_assertions_loop_3_p_0(parse_tree__write_module_interface_files__RevItems_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__write_module_interface_files__Items_4);
#line 468 "write_module_interface_files.m"
      return;
    }
#line 464 "write_module_interface_files.m"
  }
#line 461 "write_module_interface_files.m"
}

#line 245 "write_module_interface_files.m"
static void MR_CALL 
parse_tree__write_module_interface_files__process_item_for_private_interface_8_p_0(
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__ModuleName_9,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__Item_10,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_Section_55,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57,
#line 245 "write_module_interface_files.m"
  MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58,
#line 245 "write_module_interface_files.m"
  MR_Word * parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59)
#line 245 "write_module_interface_files.m"
{
#line 277 "write_module_interface_files.m"
  {
#line 277 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded = ((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 2)));
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61;
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62;
#line 277 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_Section_64_64;
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
            parse_tree__write_module_interface_files__STATE_VARIABLE_Section_64_64 = (MR_Integer) 0;
#line 258 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 258 "write_module_interface_files.m"
            parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58;
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
              parse_tree__write_module_interface_files__STATE_VARIABLE_Section_64_64 = (MR_Integer) 1;
#line 255 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 255 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58;
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
                if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54 == (MR_Integer) 0))
#line 271 "write_module_interface_files.m"
                  {
#line 272 "write_module_interface_files.m"
                    {
#line 272 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 272 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58));
#line 272 "write_module_interface_files.m"
                    }
#line 271 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 271 "write_module_interface_files.m"
                  }
#line 270 "write_module_interface_files.m"
                else
#line 267 "write_module_interface_files.m"
                  {
#line 268 "write_module_interface_files.m"
                    {
#line 268 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 268 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56));
#line 268 "write_module_interface_files.m"
                    }
#line 269 "write_module_interface_files.m"
                    {
#line 269 "write_module_interface_files.m"
                      parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Item_10));
#line 269 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58));
#line 269 "write_module_interface_files.m"
                    }
#line 267 "write_module_interface_files.m"
                  }
#line 261 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__STATE_VARIABLE_Section_64_64 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54;
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
        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_62_62;
#line 276 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_61_61;
#line 276 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Section_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_64_64;
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
                  MR_Word parse_tree__write_module_interface_files__Pragma_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 0)));
#line 281 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_65_65;
#line 282 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 1)));
#line 282 "write_module_interface_files.m"
                  MR_Word parse_tree__write_module_interface_files__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 2)));
#line 282 "write_module_interface_files.m"
                  MR_Integer parse_tree__write_module_interface_files__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__write_module_interface_files__ItemPragma_20, (MR_Integer) 3)));

#line 283 "write_module_interface_files.m"
                  {
#line 283 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__V_65_65 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(parse_tree__write_module_interface_files__Pragma_21);
                  }
#line 283 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__V_65_65 == (MR_Integer) 0);
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
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58;
#line 290 "write_module_interface_files.m"
            *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 290 "write_module_interface_files.m"
          }
#line 291 "write_module_interface_files.m"
        else
#line 340 "write_module_interface_files.m"
          {
#line 340 "write_module_interface_files.m"
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
                  MR_Word parse_tree__write_module_interface_files__ReplacementItems_41;
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
#line 307 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__ConstantInterface_36 == (MR_Integer) 1))
#line 298 "write_module_interface_files.m"
                    {
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantGetPredDecl_37;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantSetPredDecl_38;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantGetPredDeclItem_39;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__ConstantSetPredDeclItem_40;
#line 298 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__V_72_72;

#line 299 "write_module_interface_files.m"
                      {
#line 299 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantGetPredDecl_37 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 301 "write_module_interface_files.m"
                      {
#line 301 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantSetPredDecl_38 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 303 "write_module_interface_files.m"
                      {
#line 303 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantGetPredDeclItem_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 303 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantGetPredDeclItem_39, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDecl_37));
#line 303 "write_module_interface_files.m"
                      }
#line 304 "write_module_interface_files.m"
                      {
#line 304 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ConstantSetPredDeclItem_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 304 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__ConstantSetPredDeclItem_40, 1) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDecl_38));
#line 304 "write_module_interface_files.m"
                      }
#line 306 "write_module_interface_files.m"
                      {
#line 306 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantSetPredDeclItem_40));
#line 306 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "write_module_interface_files.m"
                      }
#line 306 "write_module_interface_files.m"
                      {
#line 306 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__ReplacementItems_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 0) = ((MR_Box) (parse_tree__write_module_interface_files__ConstantGetPredDeclItem_39));
#line 306 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_72_72));
#line 306 "write_module_interface_files.m"
                      }
#line 298 "write_module_interface_files.m"
                    }
#line 307 "write_module_interface_files.m"
                  else
#line 308 "write_module_interface_files.m"
                    {
#line 308 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdGetPredDecl_42;
#line 308 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdSetPredDecl_43;
#line 308 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdGetPredDeclItem_44;
#line 308 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__StdSetPredDeclItem_45;
#line 308 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__IOStateInterface_46;

#line 309 "write_module_interface_files.m"
                      {
#line 309 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdGetPredDecl_42 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 311 "write_module_interface_files.m"
                      {
#line 311 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdSetPredDecl_43 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                      }
#line 313 "write_module_interface_files.m"
                      {
#line 313 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdGetPredDeclItem_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 313 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdGetPredDeclItem_44, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDecl_42));
#line 313 "write_module_interface_files.m"
                      }
#line 314 "write_module_interface_files.m"
                      {
#line 314 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__StdSetPredDeclItem_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 314 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__StdSetPredDeclItem_45, 1) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDecl_43));
#line 314 "write_module_interface_files.m"
                      }
#line 315 "write_module_interface_files.m"
                      {
#line 315 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__IOStateInterface_46 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(parse_tree__write_module_interface_files__Attrs_32);
                      }
#line 327 "write_module_interface_files.m"
                      if ((parse_tree__write_module_interface_files__IOStateInterface_46 == (MR_Integer) 1))
#line 317 "write_module_interface_files.m"
                        {
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDecl_47;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDecl_48;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOGetPredDeclItem_49;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__IOSetPredDeclItem_50;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_68_68;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_69_69;
#line 317 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_70_70;

#line 318 "write_module_interface_files.m"
                          {
#line 318 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDecl_47 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                          }
#line 320 "write_module_interface_files.m"
                          {
#line 320 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDecl_48 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__MutableName_28, parse_tree__write_module_interface_files__Type_29, parse_tree__write_module_interface_files__Inst_31, parse_tree__write_module_interface_files__Context_34);
                          }
#line 322 "write_module_interface_files.m"
                          {
#line 322 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOGetPredDeclItem_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 322 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOGetPredDeclItem_49, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDecl_47));
#line 322 "write_module_interface_files.m"
                          }
#line 323 "write_module_interface_files.m"
                          {
#line 323 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__IOSetPredDeclItem_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 323 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__IOSetPredDeclItem_50, 1) = ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDecl_48));
#line 323 "write_module_interface_files.m"
                          }
#line 326 "write_module_interface_files.m"
                          {
#line 326 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IOSetPredDeclItem_50));
#line 326 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "write_module_interface_files.m"
                          }
#line 326 "write_module_interface_files.m"
                          {
#line 326 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_69_69, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IOGetPredDeclItem_49));
#line 326 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_69_69, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_70_70));
#line 326 "write_module_interface_files.m"
                          }
#line 325 "write_module_interface_files.m"
                          {
#line 325 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_68_68, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_45));
#line 325 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_68_68, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_69_69));
#line 325 "write_module_interface_files.m"
                          }
#line 325 "write_module_interface_files.m"
                          {
#line 325 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ReplacementItems_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_44));
#line 325 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_68_68));
#line 325 "write_module_interface_files.m"
                          }
#line 317 "write_module_interface_files.m"
                        }
#line 327 "write_module_interface_files.m"
                      else
#line 328 "write_module_interface_files.m"
                        {
#line 328 "write_module_interface_files.m"
                          MR_Word parse_tree__write_module_interface_files__V_66_66;

#line 330 "write_module_interface_files.m"
                          {
#line 330 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_66_66, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdSetPredDeclItem_45));
#line 330 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "write_module_interface_files.m"
                          }
#line 330 "write_module_interface_files.m"
                          {
#line 330 "write_module_interface_files.m"
                            parse_tree__write_module_interface_files__ReplacementItems_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 0) = ((MR_Box) (parse_tree__write_module_interface_files__StdGetPredDeclItem_44));
#line 330 "write_module_interface_files.m"
                            MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__ReplacementItems_41, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_66_66));
#line 330 "write_module_interface_files.m"
                          }
#line 328 "write_module_interface_files.m"
                        }
#line 308 "write_module_interface_files.m"
                    }
#line 336 "write_module_interface_files.m"
                  if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54 == (MR_Integer) 0))
#line 337 "write_module_interface_files.m"
                    {
#line 338 "write_module_interface_files.m"
                      {
#line 338 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__ReplacementItems_41, parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58);
                      }
#line 337 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 337 "write_module_interface_files.m"
                    }
#line 336 "write_module_interface_files.m"
                  else
#line 334 "write_module_interface_files.m"
                    {
#line 335 "write_module_interface_files.m"
                      {
#line 335 "write_module_interface_files.m"
                        *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__ReplacementItems_41, parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56);
                      }
#line 334 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58;
#line 334 "write_module_interface_files.m"
                    }
#line 295 "write_module_interface_files.m"
                }
#line 292 "write_module_interface_files.m"
              }
#line 292 "write_module_interface_files.m"
            else
#line 346 "write_module_interface_files.m"
              {
#line 346 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__InsertedItem_53;
#line 344 "write_module_interface_files.m"
                MR_Word parse_tree__write_module_interface_files__InstanceInfo0_51;

#line 341 "write_module_interface_files.m"
                parse_tree__write_module_interface_files__succeeded = ((((MR_tag((MR_Word) parse_tree__write_module_interface_files__Item_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 341 "write_module_interface_files.m"
                if (parse_tree__write_module_interface_files__succeeded)
#line 341 "write_module_interface_files.m"
                  {
#line 341 "write_module_interface_files.m"
                    parse_tree__write_module_interface_files__InstanceInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__Item_10, (MR_Integer) 1)));
#line 342 "write_module_interface_files.m"
                    {
#line 342 "write_module_interface_files.m"
                      MR_Word parse_tree__write_module_interface_files__InstanceInfo_52;

#line 342 "write_module_interface_files.m"
                      {
#line 342 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__InstanceInfo_52 = parse_tree__item_util__make_instance_abstract_1_f_0(parse_tree__write_module_interface_files__InstanceInfo0_51);
                      }
#line 343 "write_module_interface_files.m"
                      {
#line 343 "write_module_interface_files.m"
                        parse_tree__write_module_interface_files__InsertedItem_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__InsertedItem_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 343 "write_module_interface_files.m"
                        MR_hl_field(MR_mktag(3), parse_tree__write_module_interface_files__InsertedItem_53, 1) = ((MR_Box) (parse_tree__write_module_interface_files__InstanceInfo_52));
#line 343 "write_module_interface_files.m"
                      }
#line 342 "write_module_interface_files.m"
                    }
#line 341 "write_module_interface_files.m"
                  }
#line 341 "write_module_interface_files.m"
                else
#line 345 "write_module_interface_files.m"
                  parse_tree__write_module_interface_files__InsertedItem_53 = parse_tree__write_module_interface_files__Item_10;
#line 350 "write_module_interface_files.m"
                if ((parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54 == (MR_Integer) 0))
#line 351 "write_module_interface_files.m"
                  {
#line 352 "write_module_interface_files.m"
                    {
#line 352 "write_module_interface_files.m"
                      MR_Word base;
#line 352 "write_module_interface_files.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = base;
#line 352 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__InsertedItem_53));
#line 352 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58));
#line 352 "write_module_interface_files.m"
                    }
#line 351 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56;
#line 351 "write_module_interface_files.m"
                  }
#line 350 "write_module_interface_files.m"
                else
#line 348 "write_module_interface_files.m"
                  {
#line 349 "write_module_interface_files.m"
                    {
#line 349 "write_module_interface_files.m"
                      MR_Word base;
#line 349 "write_module_interface_files.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_module_interface_files.m"
                      *parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_57 = base;
#line 349 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_module_interface_files__InsertedItem_53));
#line 349 "write_module_interface_files.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_module_interface_files__STATE_VARIABLE_RevIntItems_0_56));
#line 349 "write_module_interface_files.m"
                    }
#line 348 "write_module_interface_files.m"
                    *parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_59 = parse_tree__write_module_interface_files__STATE_VARIABLE_RevImplItems_0_58;
#line 348 "write_module_interface_files.m"
                  }
#line 346 "write_module_interface_files.m"
              }
#line 340 "write_module_interface_files.m"
          }
#line 291 "write_module_interface_files.m"
        *parse_tree__write_module_interface_files__STATE_VARIABLE_Section_55 = parse_tree__write_module_interface_files__STATE_VARIABLE_Section_0_54;
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
#line 470 "write_module_interface_files.m"
  {
#line 470 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 470 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__RevItems_5;

#line 471 "write_module_interface_files.m"
    {
#line 471 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__strip_imported_items_loop_3_p_0(parse_tree__write_module_interface_files__Items0_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__RevItems_5);
    }
#line 472 "write_module_interface_files.m"
    {
#line 472 "write_module_interface_files.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__write_module_interface_files__RevItems_5, parse_tree__write_module_interface_files__Items_4);
#line 472 "write_module_interface_files.m"
      return;
    }
#line 470 "write_module_interface_files.m"
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
#line 440 "write_module_interface_files.m"
  {
#line 440 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;

#line 440 "write_module_interface_files.m"
    {
#line 440 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(parse_tree__write_module_interface_files__Globals_7, parse_tree__write_module_interface_files__ModuleName_9, parse_tree__write_module_interface_files__Items0_10);
#line 440 "write_module_interface_files.m"
      return;
    }
#line 440 "write_module_interface_files.m"
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
#line 364 "write_module_interface_files.m"
  {
#line 364 "write_module_interface_files.m"
    MR_bool parse_tree__write_module_interface_files__succeeded;
#line 364 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Module0_17;
#line 364 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Specs0_18;
#line 364 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__Errors_19;
#line 364 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40;
#line 364 "write_module_interface_files.m"
    MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42;

#line 364 "write_module_interface_files.m"
    {
#line 364 "write_module_interface_files.m"
      parse_tree__modules__get_interface_4_p_0(parse_tree__write_module_interface_files__ModuleName_12, (MR_Integer) 1, parse_tree__write_module_interface_files__Items0_14, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40);
    }
#line 367 "write_module_interface_files.m"
    {
#line 367 "write_module_interface_files.m"
      parse_tree__modules__grab_unqual_imported_modules_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__SourceFileName_10, parse_tree__write_module_interface_files__SourceFileModuleName_11, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_40_40, &parse_tree__write_module_interface_files__Module0_17);
    }
#line 371 "write_module_interface_files.m"
    {
#line 371 "write_module_interface_files.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_module_interface_files__Module0_17, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42, &parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Errors_19);
    }
#line 373 "write_module_interface_files.m"
    {
#line 373 "write_module_interface_files.m"
      parse_tree__write_module_interface_files__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, parse_tree__write_module_interface_files__Errors_19);
    }
#line 384 "write_module_interface_files.m"
    if (parse_tree__write_module_interface_files__succeeded)
#line 376 "write_module_interface_files.m"
      {
#line 376 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__IntFileName_22;
#line 376 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__Int2FileName_23;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_52_52;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_55_55;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_57_57;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_58_58;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_60_60;
#line 376 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_62_62;
#line 375 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_20;
#line 375 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumErrors_21;

#line 375 "write_module_interface_files.m"
        {
#line 375 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs0_18, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_20, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors_21);
        }
#line 377 "write_module_interface_files.m"
        {
#line 377 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_22);
        }
#line 379 "write_module_interface_files.m"
        {
#line 379 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_module_interface_files__Int2FileName_23);
        }
#line 383 "write_module_interface_files.m"
        {
#line 383 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 0) = ((MR_Box) (parse_tree__write_module_interface_files__Int2FileName_23));
#line 383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[7])));
#line 383 "write_module_interface_files.m"
        }
#line 383 "write_module_interface_files.m"
        {
#line 383 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 0) = ((MR_Box) ((MR_String) "\140"));
#line 383 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_60_60, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_62_62));
#line 383 "write_module_interface_files.m"
        }
#line 382 "write_module_interface_files.m"
        {
#line 382 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_58_58, 0) = ((MR_Box) ((MR_String) "\' and "));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_58_58, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_60_60));
#line 382 "write_module_interface_files.m"
        }
#line 382 "write_module_interface_files.m"
        {
#line 382 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_57_57, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_22));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_57_57, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_58_58));
#line 382 "write_module_interface_files.m"
        }
#line 382 "write_module_interface_files.m"
        {
#line 382 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_55_55, 0) = ((MR_Box) ((MR_String) "\140"));
#line 382 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_55_55, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_57_57));
#line 382 "write_module_interface_files.m"
        }
#line 381 "write_module_interface_files.m"
        {
#line 381 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_52_52, 0) = ((MR_Box) ((MR_String) "Error reading short interface files.\n"));
#line 381 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_52_52, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_55_55));
#line 381 "write_module_interface_files.m"
        }
#line 381 "write_module_interface_files.m"
        {
#line 381 "write_module_interface_files.m"
          mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_52_52);
#line 381 "write_module_interface_files.m"
          return;
        }
#line 376 "write_module_interface_files.m"
      }
#line 384 "write_module_interface_files.m"
    else
#line 387 "write_module_interface_files.m"
      {
#line 387 "write_module_interface_files.m"
        MR_String parse_tree__write_module_interface_files__FileName_24;
#line 387 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__Specs_29;
#line 387 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30;
#line 387 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files__NumErrors_31;
#line 387 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69;
#line 387 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_70_70;
#line 387 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_71_71;
#line 388 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_25_25;
#line 388 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_26_26;
#line 388 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_27_27;
#line 388 "write_module_interface_files.m"
        MR_Word parse_tree__write_module_interface_files__V_28_28;
#line 395 "write_module_interface_files.m"
        MR_Integer parse_tree__write_module_interface_files___NumWarnings_108;

#line 386 "write_module_interface_files.m"
        {
#line 386 "write_module_interface_files.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".m", (MR_Integer) 1, &parse_tree__write_module_interface_files__FileName_24);
        }
#line 388 "write_module_interface_files.m"
        {
#line 388 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_70_70 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0);
        }
#line 389 "write_module_interface_files.m"
        {
#line 389 "write_module_interface_files.m"
          parse_tree__write_module_interface_files__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "write_module_interface_files.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_71_71, 0) = ((MR_Box) (parse_tree__write_module_interface_files__FileName_24));
#line 389 "write_module_interface_files.m"
        }
#line 388 "write_module_interface_files.m"
        {
#line 388 "write_module_interface_files.m"
          parse_tree__module_qual__module_qualify_items_13_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_42_42, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69, parse_tree__write_module_interface_files__V_70_70, &parse_tree__write_module_interface_files__V_25_25, parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__V_71_71, (MR_String) "", &parse_tree__write_module_interface_files__V_26_26, &parse_tree__write_module_interface_files__V_27_27, &parse_tree__write_module_interface_files__V_28_28, parse_tree__write_module_interface_files__Specs0_18, &parse_tree__write_module_interface_files__Specs_29);
        }
#line 393 "write_module_interface_files.m"
        {
#line 393 "write_module_interface_files.m"
          libs__globals__set_option_4_p_0((MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_3[0]), parse_tree__write_module_interface_files__Globals_9, &parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30);
        }
#line 395 "write_module_interface_files.m"
        {
#line 395 "write_module_interface_files.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__Specs_29, parse_tree__write_module_interface_files__NoHaltAtWarnGlobals_30, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings_108, (MR_Integer) 0, &parse_tree__write_module_interface_files__NumErrors_31);
        }
#line 397 "write_module_interface_files.m"
        parse_tree__write_module_interface_files__succeeded = (parse_tree__write_module_interface_files__NumErrors_31 > (MR_Integer) 0);
#line 402 "write_module_interface_files.m"
        if (parse_tree__write_module_interface_files__succeeded)
#line 399 "write_module_interface_files.m"
          {
#line 399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_83_83;
#line 399 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__V_86_86;
#line 399 "write_module_interface_files.m"
            MR_String parse_tree__write_module_interface_files__IntFileName_110;

#line 398 "write_module_interface_files.m"
            {
#line 398 "write_module_interface_files.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_module_interface_files__IntFileName_110);
            }
#line 400 "write_module_interface_files.m"
            {
#line 400 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 0) = ((MR_Box) (parse_tree__write_module_interface_files__IntFileName_110));
#line 400 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[6])));
#line 400 "write_module_interface_files.m"
            }
#line 400 "write_module_interface_files.m"
            {
#line 400 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 0) = ((MR_Box) ((MR_String) "\140"));
#line 400 "write_module_interface_files.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_module_interface_files__V_83_83, 1) = ((MR_Box) (parse_tree__write_module_interface_files__V_86_86));
#line 400 "write_module_interface_files.m"
            }
#line 400 "write_module_interface_files.m"
            {
#line 400 "write_module_interface_files.m"
              mercury__io__write_strings_3_p_0(parse_tree__write_module_interface_files__V_83_83);
#line 400 "write_module_interface_files.m"
              return;
            }
#line 399 "write_module_interface_files.m"
          }
#line 402 "write_module_interface_files.m"
        else
#line 408 "write_module_interface_files.m"
          {
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs0_32;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__InterfaceSpecs_33;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__ShortInterfaceItems_36;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94;
#line 408 "write_module_interface_files.m"
            MR_Word parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112;
#line 414 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumWarnings2_34;
#line 414 "write_module_interface_files.m"
            MR_Integer parse_tree__write_module_interface_files___NumErrors2_35;

#line 408 "write_module_interface_files.m"
            {
#line 408 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_imported_items_and_assertions_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_69_69, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92);
            }
#line 409 "write_module_interface_files.m"
            {
#line 409 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__strip_unnecessary_impl_defns_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_92_92, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93);
            }
#line 410 "write_module_interface_files.m"
            {
#line 410 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__report_and_strip_clauses_in_interface_4_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_93_93, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_module_interface_files__InterfaceSpecs0_32);
            }
#line 412 "write_module_interface_files.m"
            {
#line 412 "write_module_interface_files.m"
              parse_tree__modules__check_int_for_no_exports_7_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, parse_tree__write_module_interface_files__ModuleName_12, parse_tree__write_module_interface_files__InterfaceSpecs0_32, &parse_tree__write_module_interface_files__InterfaceSpecs_33);
            }
#line 414 "write_module_interface_files.m"
            {
#line 414 "write_module_interface_files.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__write_module_interface_files__InterfaceSpecs_33, parse_tree__write_module_interface_files__Globals_9, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumWarnings2_34, (MR_Integer) 0, &parse_tree__write_module_interface_files___NumErrors2_35);
            }
#line 417 "write_module_interface_files.m"
            {
#line 417 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__order_items_2_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_94_94, &parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112);
            }
#line 418 "write_module_interface_files.m"
            {
#line 418 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int", parse_tree__write_module_interface_files__MaybeTimestamp_13, parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112);
            }
#line 420 "write_module_interface_files.m"
            {
#line 420 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__get_short_interface_3_p_0(parse_tree__write_module_interface_files__STATE_VARIABLE_InterfaceItems_100_112, (MR_Integer) 0, &parse_tree__write_module_interface_files__ShortInterfaceItems_36);
            }
#line 422 "write_module_interface_files.m"
            {
#line 422 "write_module_interface_files.m"
              parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_8_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".int2", parse_tree__write_module_interface_files__MaybeTimestamp_13, parse_tree__write_module_interface_files__ShortInterfaceItems_36);
            }
#line 425 "write_module_interface_files.m"
            {
#line 425 "write_module_interface_files.m"
              parse_tree__module_cmds__touch_interface_datestamp_5_p_0(parse_tree__write_module_interface_files__Globals_9, parse_tree__write_module_interface_files__ModuleName_12, (MR_String) ".date");
#line 425 "write_module_interface_files.m"
              return;
            }
#line 408 "write_module_interface_files.m"
          }
#line 387 "write_module_interface_files.m"
      }
#line 364 "write_module_interface_files.m"
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
#line 14014 "parse_tree.write_module_interface_files.c"
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
