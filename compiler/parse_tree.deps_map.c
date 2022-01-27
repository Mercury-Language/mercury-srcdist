/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


/* :- module parse_tree.deps_map. */
/* :- implementation. */

/*
INIT mercury__parse_tree__deps_map__init
ENDINIT
*/

#include "parse_tree.deps_map.mih"


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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 139 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 142 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 145 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 148 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 151 "parse_tree.deps_map.c"
static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2];

#line 154 "parse_tree.deps_map.c"
static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0;

#line 157 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1];

#line 160 "parse_tree.deps_map.c"
static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1];

#line 163 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1];

#line 166 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1];

#line 169 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0;

#line 172 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0;

#line 175 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1;

#line 178 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2];

#line 181 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2];

#line 184 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2];

#line 187 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0;

#line 190 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1;

#line 193 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2;

#line 196 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3];

#line 199 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3];

#line 202 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3];

#line 205 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
#line 208 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 210 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 213 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
#line 216 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 218 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 220 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 223 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
#line 226 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 228 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 231 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
#line 234 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 236 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 238 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 241 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
#line 244 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 246 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 249 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
#line 252 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 254 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 256 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 259 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
#line 262 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 264 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2);

#line 267 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
#line 270 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 272 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 274 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3);

#line 153 "deps_map.m"
static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__153__1_1_f_0(
#line 153 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_36);

#line 188 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_2(
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 188 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_3);

#line 221 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
#line 221 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 221 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 221 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_2);

#line 177 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_12,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__Done_13,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleImports_15);

#line 153 "deps_map.m"
static MR_Box MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0_1(
#line 153 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 153 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1);

#line 136 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_24,
#line 136 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_25,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_13,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_26,
#line 136 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_27);

#line 121 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
#line 121 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_16);


static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[4][3];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][2];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][11];

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][6];




static /* final */ const MR_Box parse_tree__deps_map_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_3[0])),
    ((MR_Box) (parse_tree__deps_map__generate_deps_map_step_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__deps_map_scalar_common_5[0])),
    ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_4[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_error_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__deps_map_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0))
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



#line 469 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 477 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__deps_map__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 485 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__deps_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 493 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 502 "parse_tree.deps_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__deps_map__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 511 "parse_tree.deps_map.c"
static const MR_PseudoTypeInfo parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0,
  (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
};

#line 517 "parse_tree.deps_map.c"
static const MR_DuFunctorDesc parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0 = {
  (MR_String) "deps",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__deps_map__parse_tree__deps_map__field_types_deps_0_0,
  NULL,
  NULL,
  NULL
};

#line 532 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

#line 537 "parse_tree.deps_map.c"
static const MR_DuPtagLayout parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__deps_map__parse_tree__deps_map__du_stag_ordered_deps_0_0
  }
};

#line 546 "parse_tree.deps_map.c"
static const MR_DuFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0[1] = {
  &parse_tree__deps_map__parse_tree__deps_map__du_functor_desc_deps_0_0
};

#line 551 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0[1] = {
  (MR_Integer) 0
};

#line 556 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps",
  {
    parse_tree__deps_map__parse_tree__deps_map__du_name_ordered_deps_0
  },
  {
    parse_tree__deps_map__parse_tree__deps_map__du_ptag_ordered_deps_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_deps_0
};

#line 577 "parse_tree.deps_map.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 586 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__deps_map____Unify____deps_map_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____deps_map_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "deps_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__deps_map__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 607 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
  (MR_String) "not_yet_processed",
  (MR_Integer) 0
};

#line 613 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
  (MR_String) "already_processed",
  (MR_Integer) 1
};

#line 619 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1
};

#line 625 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0[2] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_have_processed_0_0
};

#line 631 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 637 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____have_processed_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____have_processed_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "have_processed",
  {
    parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_have_processed_0
  },
  {
    parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_have_processed_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_have_processed_0
};

#line 658 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
  (MR_String) "toplevel",
  (MR_Integer) 0
};

#line 664 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
  (MR_String) "nested_submodule",
  (MR_Integer) 1
};

#line 670 "parse_tree.deps_map.c"
static const MR_EnumFunctorDesc parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
  (MR_String) "separate_submodule",
  (MR_Integer) 2
};

#line 676 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2
};

#line 683 "parse_tree.deps_map.c"
static const MR_EnumFunctorDescPtr parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0[3] = {
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2,
  &parse_tree__deps_map__parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0
};

#line 690 "parse_tree.deps_map.c"
static const MR_Integer parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 697 "parse_tree.deps_map.c"
const MR_TypeCtorInfo_Struct parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__deps_map____Unify____submodule_kind_0_0_10001)),
  ((MR_Box) (parse_tree__deps_map____Compare____submodule_kind_0_0_10001)),
  (MR_String) "parse_tree.deps_map",
  (MR_String) "submodule_kind",
  {
    parse_tree__deps_map__parse_tree__deps_map__enum_name_ordered_submodule_kind_0
  },
  {
    parse_tree__deps_map__parse_tree__deps_map__enum_value_ordered_submodule_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__deps_map__parse_tree__deps_map__functor_number_map_submodule_kind_0
};

#line 718 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0_10001(
#line 721 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 723 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 725 "parse_tree.deps_map.c"
{
#line 727 "parse_tree.deps_map.c"
  {
#line 729 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 732 "parse_tree.deps_map.c"
    {
#line 734 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 737 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 739 "parse_tree.deps_map.c"
  }
#line 741 "parse_tree.deps_map.c"
}

#line 744 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0_10001(
#line 747 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 749 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 751 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 753 "parse_tree.deps_map.c"
{
#line 755 "parse_tree.deps_map.c"
  {
#line 757 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 760 "parse_tree.deps_map.c"
    {
#line 762 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____deps_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 765 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 767 "parse_tree.deps_map.c"
  }
#line 769 "parse_tree.deps_map.c"
}

#line 772 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0_10001(
#line 775 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 777 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 779 "parse_tree.deps_map.c"
{
#line 781 "parse_tree.deps_map.c"
  {
#line 783 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 786 "parse_tree.deps_map.c"
    {
#line 788 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____deps_map_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 791 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 793 "parse_tree.deps_map.c"
  }
#line 795 "parse_tree.deps_map.c"
}

#line 798 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0_10001(
#line 801 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 803 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 805 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 807 "parse_tree.deps_map.c"
{
#line 809 "parse_tree.deps_map.c"
  {
#line 811 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 814 "parse_tree.deps_map.c"
    {
#line 816 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____deps_map_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 819 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 821 "parse_tree.deps_map.c"
  }
#line 823 "parse_tree.deps_map.c"
}

#line 826 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0_10001(
#line 829 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 831 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 833 "parse_tree.deps_map.c"
{
#line 835 "parse_tree.deps_map.c"
  {
#line 837 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 840 "parse_tree.deps_map.c"
    {
#line 842 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____have_processed_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 845 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 847 "parse_tree.deps_map.c"
  }
#line 849 "parse_tree.deps_map.c"
}

#line 852 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0_10001(
#line 855 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 857 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 859 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 861 "parse_tree.deps_map.c"
{
#line 863 "parse_tree.deps_map.c"
  {
#line 865 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 868 "parse_tree.deps_map.c"
    {
#line 870 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____have_processed_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 873 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 875 "parse_tree.deps_map.c"
  }
#line 877 "parse_tree.deps_map.c"
}

#line 880 "parse_tree.deps_map.c"
static MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0_10001(
#line 883 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 885 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2)
#line 887 "parse_tree.deps_map.c"
{
#line 889 "parse_tree.deps_map.c"
  {
#line 891 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded;

#line 894 "parse_tree.deps_map.c"
    {
#line 896 "parse_tree.deps_map.c"
      parse_tree__deps_map__succeeded = parse_tree__deps_map____Unify____submodule_kind_0_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2));
    }
#line 899 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 901 "parse_tree.deps_map.c"
  }
#line 903 "parse_tree.deps_map.c"
}

#line 906 "parse_tree.deps_map.c"
static void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0_10001(
#line 909 "parse_tree.deps_map.c"
  MR_Box * parse_tree__deps_map__wrapper_arg_1,
#line 911 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 913 "parse_tree.deps_map.c"
  MR_Box parse_tree__deps_map__wrapper_arg_3)
#line 915 "parse_tree.deps_map.c"
{
#line 917 "parse_tree.deps_map.c"
  {
#line 919 "parse_tree.deps_map.c"
    MR_Word parse_tree__deps_map__conv0_HeadVar__1_1;

#line 922 "parse_tree.deps_map.c"
    {
#line 924 "parse_tree.deps_map.c"
      parse_tree__deps_map____Compare____submodule_kind_0_0(&parse_tree__deps_map__conv0_HeadVar__1_1, ((MR_Word) parse_tree__deps_map__wrapper_arg_2), ((MR_Word) parse_tree__deps_map__wrapper_arg_3));
    }
#line 927 "parse_tree.deps_map.c"
    *parse_tree__deps_map__wrapper_arg_1 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__1_1));
#line 929 "parse_tree.deps_map.c"
  }
#line 931 "parse_tree.deps_map.c"
}

#line 153 "deps_map.m"
static MR_Word MR_CALL 
parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__153__1_1_f_0(
#line 153 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_36)
#line 153 "deps_map.m"
{
#line 153 "deps_map.m"
  {
#line 153 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 153 "deps_map.m"
    MR_Word parse_tree__deps_map__HeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_36, (MR_Integer) 1)));
#line 153 "deps_map.m"
    MR_Word parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_36, (MR_Integer) 0)));
#line 153 "deps_map.m"
    MR_Word parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_36, (MR_Integer) 2)));

#line 153 "deps_map.m"
    return parse_tree__deps_map__HeadVar__2_37;
#line 153 "deps_map.m"
  }
#line 153 "deps_map.m"
}

#line 41 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____submodule_kind_0_0(
#line 41 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 41 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 41 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 41 "deps_map.m"
{
#line 41 "deps_map.m"
  {
#line 41 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 41 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 41 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 41 "deps_map.m"
    {
#line 41 "deps_map.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
#line 41 "deps_map.m"
      return;
    }
#line 41 "deps_map.m"
  }
#line 41 "deps_map.m"
}

#line 41 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____submodule_kind_0_0(
#line 41 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_1,
#line 41 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 41 "deps_map.m"
{
#line 1000 "parse_tree.deps_map.c"
  {
#line 1002 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

#line 1005 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 1007 "parse_tree.deps_map.c"
  }
#line 41 "deps_map.m"
}

#line 30 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____have_processed_0_0(
#line 30 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 30 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 30 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 30 "deps_map.m"
{
#line 30 "deps_map.m"
  {
#line 30 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 30 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar1_4 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 30 "deps_map.m"
    MR_Integer parse_tree__deps_map__Cast_HeadVar2_5 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 30 "deps_map.m"
    {
#line 30 "deps_map.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__Cast_HeadVar1_4, parse_tree__deps_map__Cast_HeadVar2_5);
#line 30 "deps_map.m"
      return;
    }
#line 30 "deps_map.m"
  }
#line 30 "deps_map.m"
}

#line 30 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____have_processed_0_0(
#line 30 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_1,
#line 30 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 30 "deps_map.m"
{
#line 1053 "parse_tree.deps_map.c"
  {
#line 1055 "parse_tree.deps_map.c"
    MR_bool parse_tree__deps_map__succeeded = (parse_tree__deps_map__HeadVar__2_1 == parse_tree__deps_map__HeadVar__2_2);

#line 1058 "parse_tree.deps_map.c"
    return parse_tree__deps_map__succeeded;
#line 1060 "parse_tree.deps_map.c"
  }
#line 30 "deps_map.m"
}

#line 34 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____deps_map_0_0(
#line 34 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 34 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 34 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 34 "deps_map.m"
{
#line 34 "deps_map.m"
  {
#line 34 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 34 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar1_4 = parse_tree__deps_map__HeadVar__2_2;
#line 34 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar2_5 = parse_tree__deps_map__HeadVar__3_3;

#line 34 "deps_map.m"
    {
#line 34 "deps_map.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], parse_tree__deps_map__HeadVar__1_1, ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_5)));
#line 34 "deps_map.m"
      return;
    }
#line 34 "deps_map.m"
  }
#line 34 "deps_map.m"
}

#line 34 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_map_0_0(
#line 34 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_1,
#line 34 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 34 "deps_map.m"
{
#line 34 "deps_map.m"
  {
#line 34 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 34 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar1_3 = parse_tree__deps_map__HeadVar__1_1;
#line 34 "deps_map.m"
    MR_Word parse_tree__deps_map__Cast_HeadVar2_4 = parse_tree__deps_map__HeadVar__2_2;

#line 34 "deps_map.m"
    {
#line 34 "deps_map.m"
      return parse_tree__deps_map__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[0], ((MR_Box) (parse_tree__deps_map__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__deps_map__Cast_HeadVar2_4)));
    }
#line 34 "deps_map.m"
    return parse_tree__deps_map__succeeded;
#line 34 "deps_map.m"
  }
#line 34 "deps_map.m"
}

#line 35 "deps_map.m"
void MR_CALL 
parse_tree__deps_map____Compare____deps_0_0(
#line 35 "deps_map.m"
  MR_Word * parse_tree__deps_map__HeadVar__1_1,
#line 35 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2,
#line 35 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__3_3)
#line 35 "deps_map.m"
{
#line 35 "deps_map.m"
  {
#line 35 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 35 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastX_9 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;
#line 35 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastY_10 = (MR_Integer) parse_tree__deps_map__HeadVar__3_3;

#line 35 "deps_map.m"
    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_9 == parse_tree__deps_map__CastY_10);
#line 35 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 1151 "parse_tree.deps_map.c"
      *parse_tree__deps_map__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "deps_map.m"
    else
#line 35 "deps_map.m"
      {
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_8_8;
#line 35 "deps_map.m"
        MR_Integer parse_tree__deps_map__V_13_13 = (MR_Integer) parse_tree__deps_map__V_4_4;
#line 35 "deps_map.m"
        MR_Integer parse_tree__deps_map__V_14_14 = (MR_Integer) parse_tree__deps_map__V_6_6;

#line 35 "deps_map.m"
        {
#line 35 "deps_map.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__deps_map__V_8_8, parse_tree__deps_map__V_13_13, parse_tree__deps_map__V_14_14);
        }
#line 1177 "parse_tree.deps_map.c"
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_8_8 == (MR_Integer) 0);
#line 35 "deps_map.m"
        parse_tree__deps_map__succeeded = !(parse_tree__deps_map__succeeded);
#line 35 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 35 "deps_map.m"
          *parse_tree__deps_map__HeadVar__1_1 = parse_tree__deps_map__V_8_8;
#line 35 "deps_map.m"
        else
#line 35 "deps_map.m"
          {
#line 35 "deps_map.m"
            parse_tree__module_imports____Compare____module_and_imports_0_0(parse_tree__deps_map__HeadVar__1_1, parse_tree__deps_map__V_5_5, parse_tree__deps_map__V_7_7);
#line 35 "deps_map.m"
            return;
          }
#line 35 "deps_map.m"
      }
#line 35 "deps_map.m"
  }
#line 35 "deps_map.m"
}

#line 35 "deps_map.m"
MR_bool MR_CALL 
parse_tree__deps_map____Unify____deps_0_0(
#line 35 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__1_1,
#line 35 "deps_map.m"
  MR_Word parse_tree__deps_map__HeadVar__2_2)
#line 35 "deps_map.m"
{
#line 35 "deps_map.m"
  {
#line 35 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 35 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastX_7 = (MR_Integer) parse_tree__deps_map__HeadVar__1_1;
#line 35 "deps_map.m"
    MR_Integer parse_tree__deps_map__CastY_8 = (MR_Integer) parse_tree__deps_map__HeadVar__2_2;

#line 35 "deps_map.m"
    parse_tree__deps_map__succeeded = (parse_tree__deps_map__CastX_7 == parse_tree__deps_map__CastY_8);
#line 35 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 35 "deps_map.m"
      parse_tree__deps_map__succeeded = MR_TRUE;
#line 35 "deps_map.m"
    else
#line 35 "deps_map.m"
      {
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "deps_map.m"
        MR_Word parse_tree__deps_map__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__HeadVar__2_2, (MR_Integer) 1)));

#line 1238 "parse_tree.deps_map.c"
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__V_3_3 == parse_tree__deps_map__V_5_5);
#line 35 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 1242 "parse_tree.deps_map.c"
          {
#line 1244 "parse_tree.deps_map.c"
            return parse_tree__deps_map__succeeded = parse_tree__module_imports____Unify____module_and_imports_0_0(parse_tree__deps_map__V_4_4, parse_tree__deps_map__V_6_6);
          }
#line 35 "deps_map.m"
      }
#line 35 "deps_map.m"
    return parse_tree__deps_map__succeeded;
#line 35 "deps_map.m"
  }
#line 35 "deps_map.m"
}

#line 188 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_2(
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 188 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_2,
#line 188 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_3)
#line 188 "deps_map.m"
{
#line 188 "deps_map.m"
  {
#line 188 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 188 "deps_map.m"
    MR_Word parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_8;

#line 188 "deps_map.m"
    {
#line 188 "deps_map.m"
      parse_tree__deps_map__insert_into_deps_map_3_p_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1), ((MR_Word) parse_tree__deps_map__wrapper_arg_2), &parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_8);
    }
#line 188 "deps_map.m"
    *parse_tree__deps_map__wrapper_arg_3 = ((MR_Box) (parse_tree__deps_map__conv2_STATE_VARIABLE_DepsMap_8));
#line 188 "deps_map.m"
  }
#line 188 "deps_map.m"
}

#line 221 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0_1(
#line 221 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 221 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1,
#line 221 "deps_map.m"
  MR_Box * parse_tree__deps_map__wrapper_arg_2)
#line 221 "deps_map.m"
{
#line 221 "deps_map.m"
  {
#line 221 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 221 "deps_map.m"
    MR_Word parse_tree__deps_map__conv1_HeadVar__8_8;

#line 221 "deps_map.m"
    {
#line 221 "deps_map.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__closure, (MR_Integer) 8))), ((MR_Word) parse_tree__deps_map__wrapper_arg_1), &parse_tree__deps_map__conv1_HeadVar__8_8);
    }
#line 221 "deps_map.m"
    *parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv1_HeadVar__8_8));
#line 221 "deps_map.m"
  }
#line 221 "deps_map.m"
}

#line 177 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__lookup_dependencies_9_p_0(
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_12,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__Done_13,
#line 177 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_21,
#line 177 "deps_map.m"
  MR_Word * parse_tree__deps_map__ModuleImports_15)
#line 177 "deps_map.m"
{
#line 186 "deps_map.m"
  {
#line 186 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 186 "deps_map.m"
    MR_Word parse_tree__deps_map__DonePrime_17;
#line 186 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleImportsPrime_18;
#line 183 "deps_map.m"
    MR_Word parse_tree__deps_map__V_24_24;
#line 183 "deps_map.m"
    MR_Box parse_tree__deps_map__conv0_V_24_24;

#line 183 "deps_map.m"
    {
#line 183 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20, ((MR_Box) (parse_tree__deps_map__Module_11)), &parse_tree__deps_map__conv0_V_24_24);
    }
#line 183 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 183 "deps_map.m"
      {
#line 183 "deps_map.m"
        parse_tree__deps_map__V_24_24 = ((MR_Word) parse_tree__deps_map__conv0_V_24_24);
#line 183 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 183 "deps_map.m"
      }
#line 183 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 183 "deps_map.m"
      {
#line 183 "deps_map.m"
        parse_tree__deps_map__DonePrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 0)));
#line 183 "deps_map.m"
        parse_tree__deps_map__ModuleImportsPrime_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_24_24, (MR_Integer) 1)));
#line 183 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 183 "deps_map.m"
      }
#line 186 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 184 "deps_map.m"
      {
#line 184 "deps_map.m"
        *parse_tree__deps_map__Done_13 = parse_tree__deps_map__DonePrime_17;
#line 185 "deps_map.m"
        *parse_tree__deps_map__ModuleImports_15 = parse_tree__deps_map__ModuleImportsPrime_18;
#line 185 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20;
#line 184 "deps_map.m"
      }
#line 186 "deps_map.m"
    else
#line 187 "deps_map.m"
      {
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__ModuleImportsList_19;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__V_28_28;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__Items0_45;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__Error_46;
#line 187 "deps_map.m"
        MR_String parse_tree__deps_map__FileName0_47;
#line 187 "deps_map.m"
        MR_String parse_tree__deps_map__FileName_51;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__SubModuleList_53;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__SubModuleNames_57;
#line 187 "deps_map.m"
        MR_Word parse_tree__deps_map__V_72_72;
#line 203 "deps_map.m"
        MR_Word parse_tree__deps_map__V_48_48;
#line 188 "deps_map.m"
        MR_Box parse_tree__deps_map__conv3_STATE_VARIABLE_DepsMap_21;
#line 189 "deps_map.m"
        MR_Box parse_tree__deps_map__conv4_V_28_28;

#line 203 "deps_map.m"
        {
#line 203 "deps_map.m"
          parse_tree__read_modules__read_module_ignore_errors_12_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__Module_11, (MR_String) ".m", (MR_String) "Getting dependencies for module", parse_tree__deps_map__Search_12, (MR_Integer) 1, &parse_tree__deps_map__Items0_45, &parse_tree__deps_map__Error_46, &parse_tree__deps_map__FileName0_47, &parse_tree__deps_map__V_48_48);
        }
#line 207 "deps_map.m"
        parse_tree__deps_map__succeeded = (parse_tree__deps_map__Items0_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 208 "deps_map.m"
          parse_tree__deps_map__succeeded = (parse_tree__deps_map__Error_46 == (MR_Integer) 2);
#line 214 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 212 "deps_map.m"
          {
#line 212 "deps_map.m"
            MR_Word parse_tree__deps_map__Items_49;
#line 212 "deps_map.m"
            MR_Word parse_tree__deps_map__V_66_66;
#line 210 "deps_map.m"
            MR_Word parse_tree__deps_map___Error_50;
#line 210 "deps_map.m"
            MR_Word parse_tree__deps_map__V_52_52;

#line 210 "deps_map.m"
            {
#line 210 "deps_map.m"
              parse_tree__read_modules__read_module_ignore_errors_12_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__Module_11, (MR_String) ".int", (MR_String) "Getting dependencies for module interface", parse_tree__deps_map__Search_12, (MR_Integer) 1, &parse_tree__deps_map__Items_49, &parse_tree__deps_map___Error_50, &parse_tree__deps_map__FileName_51, &parse_tree__deps_map__V_52_52);
            }
#line 213 "deps_map.m"
            {
#line 213 "deps_map.m"
              parse_tree__deps_map__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "deps_map.m"
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 0) = ((MR_Box) (parse_tree__deps_map__Module_11));
#line 213 "deps_map.m"
              MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_66_66, 1) = ((MR_Box) (parse_tree__deps_map__Items_49));
#line 213 "deps_map.m"
            }
#line 213 "deps_map.m"
            {
#line 213 "deps_map.m"
              parse_tree__deps_map__SubModuleList_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "deps_map.m"
              MR_hl_field(MR_mktag(1), parse_tree__deps_map__SubModuleList_53, 0) = ((MR_Box) (parse_tree__deps_map__V_66_66));
#line 213 "deps_map.m"
              MR_hl_field(MR_mktag(1), parse_tree__deps_map__SubModuleList_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "deps_map.m"
            }
#line 212 "deps_map.m"
          }
#line 214 "deps_map.m"
        else
#line 215 "deps_map.m"
          {
#line 215 "deps_map.m"
            MR_Word parse_tree__deps_map__Specs_54;
#line 218 "deps_map.m"
            MR_Integer parse_tree__deps_map___NumWarnings_55;
#line 218 "deps_map.m"
            MR_Integer parse_tree__deps_map___NumErrors_56;

#line 215 "deps_map.m"
            parse_tree__deps_map__FileName_51 = parse_tree__deps_map__FileName0_47;
#line 217 "deps_map.m"
            {
#line 217 "deps_map.m"
              parse_tree__modules__split_into_submodules_5_p_0(parse_tree__deps_map__Module_11, parse_tree__deps_map__Items0_45, &parse_tree__deps_map__SubModuleList_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__deps_map__Specs_54);
            }
#line 218 "deps_map.m"
            {
#line 218 "deps_map.m"
              parse_tree__error_util__write_error_specs_8_p_0(parse_tree__deps_map__Specs_54, parse_tree__deps_map__Globals_10, (MR_Integer) 0, &parse_tree__deps_map___NumWarnings_55, (MR_Integer) 0, &parse_tree__deps_map___NumErrors_56);
            }
#line 215 "deps_map.m"
          }
#line 220 "deps_map.m"
        {
#line 220 "deps_map.m"
          mercury__assoc_list__keys_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map_scalar_common_2[0], parse_tree__deps_map__SubModuleList_53, &parse_tree__deps_map__SubModuleNames_57);
        }
#line 221 "deps_map.m"
        {
#line 221 "deps_map.m"
          parse_tree__deps_map__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 0) = ((MR_Box) (&parse_tree__deps_map_scalar_common_4[0]));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 1) = ((MR_Box) (parse_tree__deps_map__lookup_dependencies_9_p_0_1));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 3) = ((MR_Box) (parse_tree__deps_map__FileName_51));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 4) = ((MR_Box) (parse_tree__deps_map__Module_11));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 5) = ((MR_Box) (parse_tree__deps_map__SubModuleNames_57));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 7) = ((MR_Box) (parse_tree__deps_map__Error_46));
#line 221 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_72_72, 8) = ((MR_Box) (parse_tree__deps_map__Globals_10));
#line 221 "deps_map.m"
        }
#line 221 "deps_map.m"
        {
#line 221 "deps_map.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__deps_map_scalar_common_1[1], (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, parse_tree__deps_map__V_72_72, parse_tree__deps_map__SubModuleList_53, &parse_tree__deps_map__ModuleImportsList_19);
        }
#line 188 "deps_map.m"
        {
#line 188 "deps_map.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &parse_tree__deps_map_scalar_common_1[0], (MR_Word) &parse_tree__deps_map_scalar_common_1[3], parse_tree__deps_map__ModuleImportsList_19, ((MR_Box) (parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_20)), &parse_tree__deps_map__conv3_STATE_VARIABLE_DepsMap_21);
        }
#line 188 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21 = ((MR_Word) parse_tree__deps_map__conv3_STATE_VARIABLE_DepsMap_21);
#line 189 "deps_map.m"
        {
#line 189 "deps_map.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, *parse_tree__deps_map__STATE_VARIABLE_DepsMap_21, ((MR_Box) (parse_tree__deps_map__Module_11)), &parse_tree__deps_map__conv4_V_28_28);
        }
#line 189 "deps_map.m"
        parse_tree__deps_map__V_28_28 = ((MR_Word) parse_tree__deps_map__conv4_V_28_28);
#line 189 "deps_map.m"
        *parse_tree__deps_map__Done_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 0)));
#line 189 "deps_map.m"
        *parse_tree__deps_map__ModuleImports_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_28_28, (MR_Integer) 1)));
#line 187 "deps_map.m"
      }
#line 186 "deps_map.m"
  }
#line 177 "deps_map.m"
}

#line 153 "deps_map.m"
static MR_Box MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0_1(
#line 153 "deps_map.m"
  MR_Box parse_tree__deps_map__closure_arg,
#line 153 "deps_map.m"
  MR_Box parse_tree__deps_map__wrapper_arg_1)
#line 153 "deps_map.m"
{
#line 153 "deps_map.m"
  {
#line 153 "deps_map.m"
    MR_Box parse_tree__deps_map__wrapper_arg_2;
#line 153 "deps_map.m"
    MR_Box parse_tree__deps_map__closure = parse_tree__deps_map__closure_arg;
#line 153 "deps_map.m"
    MR_Word parse_tree__deps_map__conv0_HeadVar__2_37;

#line 153 "deps_map.m"
    {
#line 153 "deps_map.m"
      parse_tree__deps_map__conv0_HeadVar__2_37 = parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__153__1_1_f_0(((MR_Word) parse_tree__deps_map__wrapper_arg_1));
    }
#line 153 "deps_map.m"
    parse_tree__deps_map__wrapper_arg_2 = ((MR_Box) (parse_tree__deps_map__conv0_HeadVar__2_37));
#line 153 "deps_map.m"
    return parse_tree__deps_map__wrapper_arg_2;
#line 153 "deps_map.m"
  }
#line 153 "deps_map.m"
}

#line 136 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_step_9_p_0(
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_10,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Module_11,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_24,
#line 136 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_Modules_25,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_13,
#line 136 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_26,
#line 136 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_27)
#line 136 "deps_map.m"
{
#line 140 "deps_map.m"
  {
#line 140 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 140 "deps_map.m"
    MR_Word parse_tree__deps_map__Done_16;
#line 140 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleImports_17;
#line 140 "deps_map.m"
    MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_30_30;

#line 143 "deps_map.m"
    {
#line 143 "deps_map.m"
      parse_tree__deps_map__lookup_dependencies_9_p_0(parse_tree__deps_map__Globals_10, parse_tree__deps_map__Module_11, parse_tree__deps_map__Search_13, &parse_tree__deps_map__Done_16, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_26, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_30_30, &parse_tree__deps_map__ModuleImports_17);
    }
#line 169 "deps_map.m"
    if ((parse_tree__deps_map__Done_16 == (MR_Integer) 1))
#line 170 "deps_map.m"
      {
#line 170 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_Modules_25 = parse_tree__deps_map__STATE_VARIABLE_Modules_0_24;
#line 170 "deps_map.m"
        *parse_tree__deps_map__STATE_VARIABLE_DepsMap_27 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_30_30;
#line 170 "deps_map.m"
      }
#line 169 "deps_map.m"
    else
#line 150 "deps_map.m"
      {
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__TypeCtorInfo_150_150;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__ForeignImportedModules_18;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__ModulesToAdd_22;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__ModulesToAddSet_23;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_32_32;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_38_38;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_39_39;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_40_40;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_41_41;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_43_43;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_45_45;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_47_47;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_77_77;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_78_78;
#line 150 "deps_map.m"
        MR_Word parse_tree__deps_map__V_81_81;
#line 153 "deps_map.m"
        MR_String parse_tree__deps_map__V_55_55;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_56_56;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_57_57;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_58_58;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_59_59;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_60_60;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_61_61;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_62_62;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_63_63;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_64_64;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_65_65;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_66_66;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_67_67;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_68_68;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_69_69;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_70_70;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_71_71;
#line 153 "deps_map.m"
        MR_Word parse_tree__deps_map__V_72_72;
#line 153 "deps_map.m"
        MR_String parse_tree__deps_map__V_73_73;
#line 158 "deps_map.m"
        MR_String parse_tree__deps_map__V_74_74;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_75_75;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_76_76;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_79_79;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_80_80;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_82_82;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_83_83;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_84_84;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_85_85;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_86_86;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_87_87;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_88_88;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_89_89;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_90_90;
#line 158 "deps_map.m"
        MR_Word parse_tree__deps_map__V_91_91;
#line 158 "deps_map.m"
        MR_String parse_tree__deps_map__V_92_92;

#line 151 "deps_map.m"
        {
#line 151 "deps_map.m"
          parse_tree__deps_map__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 151 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_32_32, 0) = ((MR_Box) ((MR_Integer) 1));
#line 151 "deps_map.m"
          MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_32_32, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_17));
#line 151 "deps_map.m"
        }
#line 1745 "parse_tree.deps_map.c"
        parse_tree__deps_map__TypeCtorInfo_150_150 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 151 "deps_map.m"
        {
#line 151 "deps_map.m"
          mercury__map__set_4_p_0(parse_tree__deps_map__TypeCtorInfo_150_150, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__Module_11)), ((MR_Box) (parse_tree__deps_map__V_32_32)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_30_30, parse_tree__deps_map__STATE_VARIABLE_DepsMap_27);
        }
#line 153 "deps_map.m"
        parse_tree__deps_map__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
#line 153 "deps_map.m"
        parse_tree__deps_map__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
#line 152 "deps_map.m"
        {
#line 152 "deps_map.m"
          parse_tree__deps_map__ForeignImportedModules_18 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__deps_map__TypeCtorInfo_150_150, (MR_Word) &parse_tree__deps_map_scalar_common_1[2], parse_tree__deps_map__V_38_38);
        }
#line 158 "deps_map.m"
        parse_tree__deps_map__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 0)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 1)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 2)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 3)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 4)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 5)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 6)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 7)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 8)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 9)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 10)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 11)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 12)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 13)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 14)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 15)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 16)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 17)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 18)));
#line 158 "deps_map.m"
        parse_tree__deps_map__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_17, (MR_Integer) 19)));
#line 161 "deps_map.m"
        {
#line 161 "deps_map.m"
          parse_tree__deps_map__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_47_47, 0) = ((MR_Box) (parse_tree__deps_map__ForeignImportedModules_18));
#line 161 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "deps_map.m"
        }
#line 160 "deps_map.m"
        {
#line 160 "deps_map.m"
          parse_tree__deps_map__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_45_45, 0) = ((MR_Box) (parse_tree__deps_map__V_81_81));
#line 160 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_45_45, 1) = ((MR_Box) (parse_tree__deps_map__V_47_47));
#line 160 "deps_map.m"
        }
#line 159 "deps_map.m"
        {
#line 159 "deps_map.m"
          parse_tree__deps_map__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_43_43, 0) = ((MR_Box) (parse_tree__deps_map__V_78_78));
#line 159 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_43_43, 1) = ((MR_Box) (parse_tree__deps_map__V_45_45));
#line 159 "deps_map.m"
        }
#line 158 "deps_map.m"
        {
#line 158 "deps_map.m"
          parse_tree__deps_map__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_41_41, 0) = ((MR_Box) (parse_tree__deps_map__V_77_77));
#line 158 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_41_41, 1) = ((MR_Box) (parse_tree__deps_map__V_43_43));
#line 158 "deps_map.m"
        }
#line 157 "deps_map.m"
        {
#line 157 "deps_map.m"
          parse_tree__deps_map__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_39_39, 0) = ((MR_Box) (parse_tree__deps_map__V_40_40));
#line 157 "deps_map.m"
          MR_hl_field(MR_mktag(1), parse_tree__deps_map__V_39_39, 1) = ((MR_Box) (parse_tree__deps_map__V_41_41));
#line 157 "deps_map.m"
        }
#line 157 "deps_map.m"
        {
#line 157 "deps_map.m"
          mercury__list__condense_2_p_0(parse_tree__deps_map__TypeCtorInfo_150_150, parse_tree__deps_map__V_39_39, &parse_tree__deps_map__ModulesToAdd_22);
        }
#line 167 "deps_map.m"
        {
#line 167 "deps_map.m"
          mercury__set__list_to_set_2_p_0(parse_tree__deps_map__TypeCtorInfo_150_150, parse_tree__deps_map__ModulesToAdd_22, &parse_tree__deps_map__ModulesToAddSet_23);
        }
#line 168 "deps_map.m"
        {
#line 168 "deps_map.m"
          mercury__set__union_3_p_0(parse_tree__deps_map__TypeCtorInfo_150_150, parse_tree__deps_map__ModulesToAddSet_23, parse_tree__deps_map__STATE_VARIABLE_Modules_0_24, parse_tree__deps_map__STATE_VARIABLE_Modules_25);
#line 168 "deps_map.m"
          return;
        }
#line 150 "deps_map.m"
      }
#line 140 "deps_map.m"
  }
#line 136 "deps_map.m"
}

#line 121 "deps_map.m"
static void MR_CALL 
parse_tree__deps_map__generate_deps_map_loop_7_p_0(
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0_14,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 121 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15,
#line 121 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_16)
#line 121 "deps_map.m"
{
#line 130 "deps_map.m"
  while (MR_TRUE)
#line 130 "deps_map.m"
    {
#line 130 "deps_map.m"
      /* tailcall optimized into a loop */
#line 130 "deps_map.m"
      {
#line 130 "deps_map.m"
        MR_bool parse_tree__deps_map__succeeded;
#line 130 "deps_map.m"
        MR_Word parse_tree__deps_map__Module_13;
#line 130 "deps_map.m"
        MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_19_19;
#line 126 "deps_map.m"
        MR_Box parse_tree__deps_map__conv0_Module_13;

#line 126 "deps_map.m"
        {
#line 126 "deps_map.m"
          parse_tree__deps_map__succeeded = mercury__set__remove_least_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, &parse_tree__deps_map__conv0_Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_0_14, &parse_tree__deps_map__STATE_VARIABLE_Modules_19_19);
        }
#line 126 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 126 "deps_map.m"
          {
#line 126 "deps_map.m"
            parse_tree__deps_map__Module_13 = ((MR_Word) parse_tree__deps_map__conv0_Module_13);
#line 126 "deps_map.m"
            parse_tree__deps_map__succeeded = MR_TRUE;
#line 126 "deps_map.m"
          }
#line 130 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 128 "deps_map.m"
          {
#line 128 "deps_map.m"
            MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
#line 128 "deps_map.m"
            MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

#line 127 "deps_map.m"
            {
#line 127 "deps_map.m"
              parse_tree__deps_map__generate_deps_map_step_9_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__Module_13, parse_tree__deps_map__STATE_VARIABLE_Modules_19_19, &parse_tree__deps_map__STATE_VARIABLE_Modules_20_20, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15, &parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21);
            }
#line 129 "deps_map.m"
            /* direct tailcall eliminated */
#line 129 "deps_map.m"
            {
#line 129 "deps_map.m"
              MR_Word parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_20_20;
#line 129 "deps_map.m"
              MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_21_21;

#line 129 "deps_map.m"
              parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0__tmp_copy_15;
#line 129 "deps_map.m"
              parse_tree__deps_map__STATE_VARIABLE_Modules_0_14 = parse_tree__deps_map__STATE_VARIABLE_Modules_0__tmp_copy_14;
#line 129 "deps_map.m"
            }
#line 129 "deps_map.m"
            continue;
#line 128 "deps_map.m"
          }
#line 130 "deps_map.m"
        else
#line 133 "deps_map.m"
          *parse_tree__deps_map__STATE_VARIABLE_DepsMap_16 = parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_15;
#line 130 "deps_map.m"
      }
#line 130 "deps_map.m"
      break;
#line 130 "deps_map.m"
    }
#line 121 "deps_map.m"
}

#line 77 "deps_map.m"
void MR_CALL 
parse_tree__deps_map__insert_into_deps_map_3_p_0(
#line 77 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleImports_4,
#line 77 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7,
#line 77 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_8)
#line 77 "deps_map.m"
{
#line 192 "deps_map.m"
  {
#line 192 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 192 "deps_map.m"
    MR_Word parse_tree__deps_map__ModuleName_6;
#line 192 "deps_map.m"
    MR_Word parse_tree__deps_map__V_9_9;

#line 193 "deps_map.m"
    {
#line 193 "deps_map.m"
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__deps_map__ModuleImports_4, &parse_tree__deps_map__ModuleName_6);
    }
#line 194 "deps_map.m"
    {
#line 194 "deps_map.m"
      parse_tree__deps_map__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 194 "deps_map.m"
      MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_9_9, 1) = ((MR_Box) (parse_tree__deps_map__ModuleImports_4));
#line 194 "deps_map.m"
    }
#line 194 "deps_map.m"
    {
#line 194 "deps_map.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, ((MR_Box) (parse_tree__deps_map__ModuleName_6)), ((MR_Box) (parse_tree__deps_map__V_9_9)), parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_7, parse_tree__deps_map__STATE_VARIABLE_DepsMap_8);
#line 194 "deps_map.m"
      return;
    }
#line 192 "deps_map.m"
  }
#line 77 "deps_map.m"
}

#line 53 "deps_map.m"
void MR_CALL 
parse_tree__deps_map__generate_deps_map_7_p_0(
#line 53 "deps_map.m"
  MR_Word parse_tree__deps_map__Globals_8,
#line 53 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_9,
#line 53 "deps_map.m"
  MR_Word parse_tree__deps_map__Search_10,
#line 53 "deps_map.m"
  MR_Word parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13,
#line 53 "deps_map.m"
  MR_Word * parse_tree__deps_map__STATE_VARIABLE_DepsMap_14)
#line 53 "deps_map.m"
{
#line 117 "deps_map.m"
  {
#line 117 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 117 "deps_map.m"
    MR_Word parse_tree__deps_map__V_17_17;

#line 118 "deps_map.m"
    {
#line 118 "deps_map.m"
      parse_tree__deps_map__V_17_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__deps_map__ModuleName_9)));
    }
#line 118 "deps_map.m"
    {
#line 118 "deps_map.m"
      parse_tree__deps_map__generate_deps_map_loop_7_p_0(parse_tree__deps_map__Globals_8, parse_tree__deps_map__V_17_17, parse_tree__deps_map__Search_10, parse_tree__deps_map__STATE_VARIABLE_DepsMap_0_13, parse_tree__deps_map__STATE_VARIABLE_DepsMap_14);
#line 118 "deps_map.m"
      return;
    }
#line 117 "deps_map.m"
  }
#line 53 "deps_map.m"
}

#line 49 "deps_map.m"
MR_Word MR_CALL 
parse_tree__deps_map__get_submodule_kind_2_f_0(
#line 49 "deps_map.m"
  MR_Word parse_tree__deps_map__ModuleName_4,
#line 49 "deps_map.m"
  MR_Word parse_tree__deps_map__DepsMap_5)
#line 49 "deps_map.m"
{
#line 99 "deps_map.m"
  {
#line 99 "deps_map.m"
    MR_bool parse_tree__deps_map__succeeded;
#line 99 "deps_map.m"
    MR_Word parse_tree__deps_map__Kind_6;
#line 99 "deps_map.m"
    MR_Word parse_tree__deps_map__Ancestors_7;
#line 111 "deps_map.m"
    MR_Word parse_tree__deps_map__Parent_8;
#line 101 "deps_map.m"
    MR_Box parse_tree__deps_map__conv0_Parent_8;

#line 100 "deps_map.m"
    {
#line 100 "deps_map.m"
      parse_tree__deps_map__Ancestors_7 = mdbcomp__prim_data__get_ancestors_1_f_0(parse_tree__deps_map__ModuleName_4);
    }
#line 101 "deps_map.m"
    {
#line 101 "deps_map.m"
      parse_tree__deps_map__succeeded = mercury__list__last_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__deps_map__Ancestors_7, &parse_tree__deps_map__conv0_Parent_8);
    }
#line 101 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 101 "deps_map.m"
      {
#line 101 "deps_map.m"
        parse_tree__deps_map__Parent_8 = ((MR_Word) parse_tree__deps_map__conv0_Parent_8);
#line 101 "deps_map.m"
        parse_tree__deps_map__succeeded = MR_TRUE;
#line 101 "deps_map.m"
      }
#line 111 "deps_map.m"
    if (parse_tree__deps_map__succeeded)
#line 102 "deps_map.m"
      {
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__ModuleImports_10;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__ParentImports_12;
#line 102 "deps_map.m"
        MR_String parse_tree__deps_map__ModuleFileName_13;
#line 102 "deps_map.m"
        MR_String parse_tree__deps_map__ParentFileName_14;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__V_15_15;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__V_16_16;
#line 102 "deps_map.m"
        MR_Box parse_tree__deps_map__conv1_V_15_15;
#line 102 "deps_map.m"
        MR_Word parse_tree__deps_map__V_9_9;
#line 103 "deps_map.m"
        MR_Box parse_tree__deps_map__conv2_V_16_16;
#line 103 "deps_map.m"
        MR_Word parse_tree__deps_map__V_11_11;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_17_17;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_18_18;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_19_19;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_20_20;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_21_21;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_22_22;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_23_23;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_24_24;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_25_25;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_26_26;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_27_27;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_28_28;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_29_29;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_30_30;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_31_31;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_32_32;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_33_33;
#line 104 "deps_map.m"
        MR_Word parse_tree__deps_map__V_34_34;
#line 104 "deps_map.m"
        MR_String parse_tree__deps_map__V_35_35;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_36_36;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_37_37;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_38_38;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_39_39;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_40_40;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_41_41;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_42_42;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_43_43;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_44_44;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_45_45;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_46_46;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_47_47;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_48_48;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_49_49;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_50_50;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_51_51;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_52_52;
#line 105 "deps_map.m"
        MR_Word parse_tree__deps_map__V_53_53;
#line 105 "deps_map.m"
        MR_String parse_tree__deps_map__V_54_54;

#line 102 "deps_map.m"
        {
#line 102 "deps_map.m"
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_56_56, parse_tree__deps_map__TypeCtorInfo_57_57, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__ModuleName_4)), &parse_tree__deps_map__conv1_V_15_15);
        }
#line 102 "deps_map.m"
        parse_tree__deps_map__V_15_15 = ((MR_Word) parse_tree__deps_map__conv1_V_15_15);
#line 102 "deps_map.m"
        parse_tree__deps_map__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 0)));
#line 102 "deps_map.m"
        parse_tree__deps_map__ModuleImports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_15_15, (MR_Integer) 1)));
#line 103 "deps_map.m"
        {
#line 103 "deps_map.m"
          mercury__map__lookup_3_p_0(parse_tree__deps_map__TypeCtorInfo_56_56, parse_tree__deps_map__TypeCtorInfo_57_57, parse_tree__deps_map__DepsMap_5, ((MR_Box) (parse_tree__deps_map__Parent_8)), &parse_tree__deps_map__conv2_V_16_16);
        }
#line 103 "deps_map.m"
        parse_tree__deps_map__V_16_16 = ((MR_Word) parse_tree__deps_map__conv2_V_16_16);
#line 103 "deps_map.m"
        parse_tree__deps_map__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 0)));
#line 103 "deps_map.m"
        parse_tree__deps_map__ParentImports_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__V_16_16, (MR_Integer) 1)));
#line 104 "deps_map.m"
        parse_tree__deps_map__ModuleFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 0)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 1)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 2)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 3)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 4)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 5)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 6)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 7)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 8)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 9)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 10)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 11)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 12)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 13)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 14)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 15)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 16)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 17)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 18)));
#line 104 "deps_map.m"
        parse_tree__deps_map__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ModuleImports_10, (MR_Integer) 19)));
#line 105 "deps_map.m"
        parse_tree__deps_map__ParentFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 0)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 1)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 2)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 3)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 4)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 5)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 6)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 7)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 8)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 9)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 10)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 11)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 12)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 13)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 14)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 15)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 16)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 17)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 18)));
#line 105 "deps_map.m"
        parse_tree__deps_map__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__deps_map__ParentImports_12, (MR_Integer) 19)));
#line 106 "deps_map.m"
        parse_tree__deps_map__succeeded = (strcmp(parse_tree__deps_map__ModuleFileName_13, parse_tree__deps_map__ParentFileName_14) == 0);
#line 108 "deps_map.m"
        if (parse_tree__deps_map__succeeded)
#line 107 "deps_map.m"
          parse_tree__deps_map__Kind_6 = (MR_Integer) 1;
#line 108 "deps_map.m"
        else
#line 109 "deps_map.m"
          parse_tree__deps_map__Kind_6 = (MR_Integer) 2;
#line 102 "deps_map.m"
      }
#line 111 "deps_map.m"
    else
#line 112 "deps_map.m"
      parse_tree__deps_map__Kind_6 = (MR_Integer) 0;
#line 99 "deps_map.m"
    return parse_tree__deps_map__Kind_6;
#line 99 "deps_map.m"
  }
#line 49 "deps_map.m"
}

void mercury__parse_tree__deps_map__init(void)
{
}

void mercury__parse_tree__deps_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_map_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_have_processed_0);
	MR_register_type_ctor_info(&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_submodule_kind_0);
}

void mercury__parse_tree__deps_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.deps_map. */
