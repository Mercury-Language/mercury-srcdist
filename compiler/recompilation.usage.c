/*
** Automatically generated from `recompilation.usage.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module recompilation.usage. */
/* :- implementation. */

/*
INIT mercury__recompilation__usage__init
ENDINIT
*/

#include "recompilation.usage.mih"


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
#include "hlds.passes_aux.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
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



#line 557 "recompilation.usage.m"
struct recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0_s {
#line 557 "recompilation.usage.m"
  MR_Box * recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__wrapper_arg_1;
#line 557 "recompilation.usage.m"
  MR_Cont recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont;
#line 557 "recompilation.usage.m"
  void * recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont_env_ptr;
#line 557 "recompilation.usage.m"
  MR_Word recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__conv0_VisibleModule_4;
#line 557 "recompilation.usage.m"
};

#line 520 "recompilation.usage.m"
struct recompilation__usage__visible_modules_2_p_0_env_0_s {
#line 520 "recompilation.usage.m"
  MR_Word recompilation__usage__visible_modules_2_p_0_env_0__ModuleInfo_3;
#line 520 "recompilation.usage.m"
  MR_Word * recompilation__usage__visible_modules_2_p_0_env_0__VisibleModule_4;
#line 520 "recompilation.usage.m"
  MR_Cont recompilation__usage__visible_modules_2_p_0_env_0__cont;
#line 520 "recompilation.usage.m"
  void * recompilation__usage__visible_modules_2_p_0_env_0__cont_env_ptr;
#line 522 "recompilation.usage.m"
  MR_bool recompilation__usage__visible_modules_2_p_0_env_0__succeeded;
#line 520 "recompilation.usage.m"
};


#line 176 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0;

#line 179 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 182 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 185 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 188 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 191 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 194 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 197 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 200 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 203 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 206 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 209 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 212 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 215 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 218 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 221 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 224 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 227 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 230 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 233 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 236 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 239 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 242 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 245 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 248 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 251 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 254 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 257 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 260 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0;

#line 263 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 266 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 269 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 272 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 275 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 278 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 281 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 284 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 287 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 290 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 293 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 296 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 299 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 302 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7];

#line 305 "recompilation.usage.c"
static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7];

#line 308 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0;

#line 311 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1];

#line 314 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1];

#line 317 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1];

#line 320 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1];

#line 323 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0;

#line 326 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4];

#line 329 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0;

#line 332 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1];

#line 335 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1;

#line 338 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2];

#line 341 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2;

#line 344 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1];

#line 347 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1];

#line 350 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1];

#line 353 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0[3];

#line 356 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3];

#line 359 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3];

#line 362 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 365 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
#line 368 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 370 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 373 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
#line 376 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 378 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 380 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 383 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
#line 386 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 388 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 391 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
#line 394 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 396 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 398 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 401 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
#line 404 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 406 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 409 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
#line 412 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 414 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 416 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 419 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
#line 422 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 424 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 427 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
#line 430 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 432 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 434 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 437 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
#line 440 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 442 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 444 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 447 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
#line 450 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 452 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 454 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 456 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 459 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
#line 462 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 464 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 467 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
#line 470 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 472 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 474 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 477 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
#line 480 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 482 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 485 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
#line 488 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 490 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 492 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 495 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
#line 498 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 500 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 503 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
#line 506 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 508 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 510 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 513 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
#line 516 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 518 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 520 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 523 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
#line 526 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 528 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 530 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 532 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 535 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
#line 538 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 540 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 542 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 545 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
#line 548 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 550 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 552 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 554 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 557 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0_10001(
#line 560 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 562 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 564 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 567 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
#line 570 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 572 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 574 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 576 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 579 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
#line 582 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 584 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 587 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
#line 590 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 592 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 594 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 597 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
#line 600 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 602 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 605 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
#line 608 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 610 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 612 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 615 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
#line 618 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 620 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 623 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
#line 626 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 628 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 630 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 633 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
#line 636 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 638 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 640 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 643 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
#line 646 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 648 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 650 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 652 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 903 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__V_25_25,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 903 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20);

#line 853 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__V_58_58,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 853 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 414 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 414 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 824 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 824 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 824 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 1261 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1261 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1261 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1261 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15);

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5);

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
#line 1223 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1223 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14);

#line 1188 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1188 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1120 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1120 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1120 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1120 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 793 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 793 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 793 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10);

#line 903 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 903 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20);

#line 853 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 853 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 831 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item__ho1_7_p_0(
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_8,
#line 831 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_9,
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_IdSet_0_19,
#line 831 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_IdSet_20,
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 831 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22);

#line 774 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__774__1_1_f_0(
#line 774 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_47);

#line 751 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__751__1_1_f_0(
#line 751 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_41);

#line 681 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__681__1_2_f_0(
#line 681 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_17,
#line 681 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_35);

#line 264 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__264__1_3_f_0(
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12,
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_47,
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_48);

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 414 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 414 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 824 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 824 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 824 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 496 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
#line 496 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 496 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0(
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 514 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0(
#line 514 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 514 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 510 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
#line 510 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 510 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 516 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
#line 516 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 516 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 1509 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__Item_4,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1509 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1503 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1503 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1495 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__NameArity_6,
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 1495 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11);

#line 1467 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 1467 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22);

#line 1461 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
#line 1461 "recompilation.usage.m"
  MR_Word recompilation__usage__Info_3,
#line 1461 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_4);

#line 1423 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1423 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13);

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
#line 1414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1414 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1414 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1408 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
#line 1408 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraints_4,
#line 1408 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1408 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1400 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
#line 1400 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1400 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1400 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8);

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1369 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
#line 1369 "recompilation.usage.m"
  MR_Word recompilation__usage__InstName_4,
#line 1369 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_22,
#line 1369 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_23);

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1357 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
#line 1357 "recompilation.usage.m"
  MR_Word recompilation__usage__BoundInst_4,
#line 1357 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1357 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1343 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1343 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1321 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
#line 1321 "recompilation.usage.m"
  MR_Word recompilation__usage__Inst_4,
#line 1321 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1321 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25);

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1315 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0(
#line 1315 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1315 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1315 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1303 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
#line 1303 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1303 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1303 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0_1(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1297 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0(
#line 1297 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1297 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1297 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1276 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
#line 1276 "recompilation.usage.m"
  MR_Word recompilation__usage__Type_4,
#line 1276 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1276 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1270 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
#line 1270 "recompilation.usage.m"
  MR_Word recompilation__usage__Types_4,
#line 1270 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1270 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1261 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1261 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1261 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_11,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1261 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15);

#line 1258 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1258 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1252 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_6,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingIdMap_9,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1252 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1250 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1250 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1246 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1246 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage___Arity_2,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5);

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
#line 1223 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1223 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_10,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14);

#line 1220 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1220 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1215 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingCtorMap_7,
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1215 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1213 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1213 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1209 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
#line 1209 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_4,
#line 1209 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1209 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1195 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
#line 1195 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeSpecInfo_4,
#line 1195 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 1195 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17);

#line 1188 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
#line 1188 "recompilation.usage.m"
  MR_Integer recompilation__usage___ProcId_5,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1188 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1182 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1182 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1174 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1174 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1129 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_34,
#line 1129 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_35);

#line 1120 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1120 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1120 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__5_12,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1120 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 1117 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1117 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1112 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingPredMap_9,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1112 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1110 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1110 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1106 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1106 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1094 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
#line 1094 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1094 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1094 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13);

#line 1087 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
#line 1087 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1087 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1087 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1080 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
#line 1080 "recompilation.usage.m"
  MR_Word recompilation__usage__CtorArg_4,
#line 1080 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1080 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8);

#line 1078 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1078 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1072 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
#line 1072 "recompilation.usage.m"
  MR_Word recompilation__usage__Ctor_4,
#line 1072 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1072 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1064 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1064 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1059 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
#line 1059 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1059 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1059 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1047 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
#line 1047 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeAndMode_4,
#line 1047 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1047 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1042 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1042 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1035 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
#line 1035 "recompilation.usage.m"
  MR_Word recompilation__usage__Method_1,
#line 1035 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1035 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1007 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_6,
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1007 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25);

#line 1001 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1001 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1503 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1503 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 992 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__InstanceDefns_6,
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 992 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 974 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 974 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 970 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 970 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 919 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_3,
#line 919 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_4);

#line 793 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage___SymName_7,
#line 793 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 793 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10);

#line 774 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
#line 774 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 774 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 764 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
#line 764 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 764 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 764 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_2);

#line 751 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
#line 751 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 751 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 729 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
#line 729 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_5,
#line 729 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_6,
#line 729 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_7,
#line 729 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedConstructors_8);

#line 720 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 720 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 709 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_9,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_10,
#line 709 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_11,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_12,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_20,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_21);

#line 689 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 689 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 681 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
#line 681 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 681 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 666 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_10,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_12,
#line 666 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_13,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_MatchingNames_0_28,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_MatchingNames_29,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_30,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_31);

#line 652 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__Id_6,
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 652 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 637 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
#line 637 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Queue_0_9,
#line 637 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 637 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11);

#line 623 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
#line 623 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 623 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 595 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 595 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 588 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
#line 588 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_4,
#line 588 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 588 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17);

#line 558 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_3(
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 558 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 557 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
#line 557 "recompilation.usage.m"
  void * recompilation__usage__env_ptr_arg);

#line 557 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_2(
#line 557 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 557 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 557 "recompilation.usage.m"
  MR_Cont recompilation__usage__cont,
#line 557 "recompilation.usage.m"
  void * recompilation__usage__cont_env_ptr);

#line 543 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_8,
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_9,
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__Dependencies_10,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedUsedItems_11,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__UsedTypeClasses_12,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ImportedItems_13,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ModuleInstances_14);

#line 526 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
#line 526 "recompilation.usage.m"
  MR_Word recompilation__usage__VisibleModule_4,
#line 526 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7,
#line 526 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8);

#line 522 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__visible_modules_2_p_0_1(
#line 522 "recompilation.usage.m"
  void * recompilation__usage__env_ptr_arg);

#line 520 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__visible_modules_2_p_0(
#line 520 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_3,
#line 520 "recompilation.usage.m"
  MR_Word * recompilation__usage__VisibleModule_4,
#line 520 "recompilation.usage.m"
  MR_Cont recompilation__usage__cont,
#line 520 "recompilation.usage.m"
  void * recompilation__usage__cont_env_ptr);

#line 453 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
#line 453 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolvedFunctor_4);

#line 442 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_19,
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 439 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 439 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_20,
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 411 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 411 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 404 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
#line 404 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 427 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 2245 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
#line 2248 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 2250 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 2252 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 2254 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 392 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
#line 392 "recompilation.usage.m"
  MR_Word recompilation__usage__Ids_6,
#line 392 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_9,
#line 392 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_10);

#line 387 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 387 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 376 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
#line 376 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 427 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 2297 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
#line 2300 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 2302 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 2304 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 2306 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 356 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 356 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13);

#line 344 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
#line 344 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 341 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 341 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 330 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
#line 330 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 327 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 327 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 307 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 307 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13);

#line 289 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
#line 289 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 264 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_8,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__Timestamps_9,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInstances_10,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleName_11,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12);

#line 223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 223 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 219 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_2(
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 219 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 178 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_1(
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 178 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 151 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0(
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_7,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__NestedSubModules_8,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_9,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__Timestamps_10);


static /* final */ const MR_Box recompilation__usage_scalar_common_1[60][3];

static /* final */ const MR_Box recompilation__usage_scalar_common_2[12][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_3[3][4];

static /* final */ const MR_Box recompilation__usage_scalar_common_4[20][6];

static /* final */ const MR_Box recompilation__usage_scalar_common_5[3][10];

static /* final */ const MR_Box recompilation__usage_scalar_common_6[5][7];

static /* final */ const MR_Integer recompilation__usage_scalar_common_7[1][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_8[7][8];

static /* final */ const MR_Box recompilation__usage_scalar_common_9[5][5];

static /* final */ const MR_Box recompilation__usage_scalar_common_10[1][9];




static /* final */ const MR_Box recompilation__usage_scalar_common_1[60][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[5]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[2]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_3[0]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[1]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[10]))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[0])),
    ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[1])),
    ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[2])),
    ((MR_Box) (recompilation__usage__write_simple_item_matches_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[3])),
    ((MR_Box) (recompilation__usage__write_simple_item_matches_3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[4])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[3]))
  },
  /* row 22 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[0])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[5])),
    ((MR_Box) (recompilation__usage__write_functor_matches_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[5]))
  },
  /* row 25 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[6])),
    ((MR_Box) (recompilation__usage__write_functor_matches_2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[7])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[1])),
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_9[3])),
    ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_9[4])),
    ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[9])),
    ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[10])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_instance_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[13])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_method_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[15])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_body_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[16])),
    ((MR_Box) (recompilation__usage__find_items_used_by_ctor_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[3])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[17])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_modes_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_insts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_bound_inst_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[10])),
    ((MR_Box) (recompilation__usage__record_expanded_items_used_by_item_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_2[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[9]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_3[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0])),
    ((MR_Box) (&recompilation__usage_scalar_common_2[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[7])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[10]))
  },
  /* row 2 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_4[20][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_5[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&recompilation__usage__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Integer recompilation__usage_scalar_common_7[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_8[7][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&recompilation__usage_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&recompilation__usage_scalar_common_7[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_9[5][5] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_8[0])),
    ((MR_Box) (recompilation__usage__write_pred_or_func_matches_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[2])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[20]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_8[0])),
    ((MR_Box) (recompilation__usage__write_functor_matches_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__usage_scalar_common_2[4])),
    ((MR_Box) (&recompilation__usage_scalar_common_1[23]))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
};

static /* final */ const MR_Box recompilation__usage_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 3364 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

#line 3373 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
  }
};

#line 3381 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
  }
};

#line 3390 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3399 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3407 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3417 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 3426 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3435 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3444 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3453 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3462 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3470 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3479 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3488 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 3499 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3508 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3517 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3525 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3534 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3542 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3551 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3561 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3570 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 3578 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3587 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3596 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3605 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_item_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_item_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_item_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3626 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3635 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_items",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3656 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_module_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____module_imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____module_imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "module_imported_items",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3677 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 3685 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
  }
};

#line 3694 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 3702 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 3711 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3720 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3729 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3738 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3746 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3755 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3764 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3773 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3781 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3790 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3800 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0,
  (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
};

#line 3811 "recompilation.usage.c"
static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7] = {
  (MR_String) "module_info",
  (MR_String) "item_queue",
  (MR_String) "imported_items",
  (MR_String) "module_instances",
  (MR_String) "dependencies",
  (MR_String) "used_items",
  (MR_String) "used_typeclasses"
};

#line 3822 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0 = {
  (MR_String) "recompilation_usage_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0,
  recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0,
  NULL,
  NULL
};

#line 3837 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

#line 3842 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0
  }
};

#line 3851 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

#line 3856 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3861 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____recompilation_usage_info_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____recompilation_usage_info_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "recompilation_usage_info",
  {
    recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0
  },
  {
    recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0
};

#line 3882 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1,
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0,
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0
  }
};

#line 3898 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_record_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____record_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____record_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "record_resolved_item",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3919 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3927 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0 = {
  (MR_String) "resolved_functor_pred_or_func",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0,
  NULL,
  NULL,
  NULL
};

#line 3942 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 3947 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1 = {
  (MR_String) "resolved_functor_constructor",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1,
  NULL,
  NULL,
  NULL
};

#line 3962 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 3968 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2 = {
  (MR_String) "resolved_functor_field",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2,
  NULL,
  NULL,
  NULL
};

#line 3983 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

#line 3988 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1
};

#line 3993 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2
};

#line 3998 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2
  }
};

#line 4017 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

#line 4024 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4031 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor",
  {
    recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0
  },
  {
    recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0
};

#line 4052 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4073 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4094 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_list_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_list_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4115 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_map_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_map_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4136 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 4145 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_set_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_set_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4166 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4187 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4208 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_used_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_used_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_used_items",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4229 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_write_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____write_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____write_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "write_resolved_item",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4250 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
#line 4253 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4255 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4257 "recompilation.usage.c"
{
#line 4259 "recompilation.usage.c"
  {
#line 4261 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4264 "recompilation.usage.c"
    {
#line 4266 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____imported_item_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4269 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4271 "recompilation.usage.c"
  }
#line 4273 "recompilation.usage.c"
}

#line 4276 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
#line 4279 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4281 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4283 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4285 "recompilation.usage.c"
{
#line 4287 "recompilation.usage.c"
  {
#line 4289 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4292 "recompilation.usage.c"
    {
#line 4294 "recompilation.usage.c"
      recompilation__usage____Compare____imported_item_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4297 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4299 "recompilation.usage.c"
  }
#line 4301 "recompilation.usage.c"
}

#line 4304 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
#line 4307 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4309 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4311 "recompilation.usage.c"
{
#line 4313 "recompilation.usage.c"
  {
#line 4315 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4318 "recompilation.usage.c"
    {
#line 4320 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____imported_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4323 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4325 "recompilation.usage.c"
  }
#line 4327 "recompilation.usage.c"
}

#line 4330 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
#line 4333 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4335 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4337 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4339 "recompilation.usage.c"
{
#line 4341 "recompilation.usage.c"
  {
#line 4343 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4346 "recompilation.usage.c"
    {
#line 4348 "recompilation.usage.c"
      recompilation__usage____Compare____imported_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4351 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4353 "recompilation.usage.c"
  }
#line 4355 "recompilation.usage.c"
}

#line 4358 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
#line 4361 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4363 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4365 "recompilation.usage.c"
{
#line 4367 "recompilation.usage.c"
  {
#line 4369 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4372 "recompilation.usage.c"
    {
#line 4374 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____module_imported_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4377 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4379 "recompilation.usage.c"
  }
#line 4381 "recompilation.usage.c"
}

#line 4384 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
#line 4387 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4389 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4391 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4393 "recompilation.usage.c"
{
#line 4395 "recompilation.usage.c"
  {
#line 4397 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4400 "recompilation.usage.c"
    {
#line 4402 "recompilation.usage.c"
      recompilation__usage____Compare____module_imported_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4405 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4407 "recompilation.usage.c"
  }
#line 4409 "recompilation.usage.c"
}

#line 4412 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
#line 4415 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4417 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4419 "recompilation.usage.c"
{
#line 4421 "recompilation.usage.c"
  {
#line 4423 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4426 "recompilation.usage.c"
    {
#line 4428 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____recompilation_usage_info_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4431 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4433 "recompilation.usage.c"
  }
#line 4435 "recompilation.usage.c"
}

#line 4438 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
#line 4441 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4443 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4445 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4447 "recompilation.usage.c"
{
#line 4449 "recompilation.usage.c"
  {
#line 4451 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4454 "recompilation.usage.c"
    {
#line 4456 "recompilation.usage.c"
      recompilation__usage____Compare____recompilation_usage_info_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4459 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4461 "recompilation.usage.c"
  }
#line 4463 "recompilation.usage.c"
}

#line 4466 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
#line 4469 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4471 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4473 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4475 "recompilation.usage.c"
{
#line 4477 "recompilation.usage.c"
  {
#line 4479 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4482 "recompilation.usage.c"
    {
#line 4484 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____record_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4487 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4489 "recompilation.usage.c"
  }
#line 4491 "recompilation.usage.c"
}

#line 4494 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
#line 4497 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4499 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4501 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4503 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4505 "recompilation.usage.c"
{
#line 4507 "recompilation.usage.c"
  {
#line 4509 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4512 "recompilation.usage.c"
    {
#line 4514 "recompilation.usage.c"
      recompilation__usage____Compare____record_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4517 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4519 "recompilation.usage.c"
  }
#line 4521 "recompilation.usage.c"
}

#line 4524 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
#line 4527 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4529 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4531 "recompilation.usage.c"
{
#line 4533 "recompilation.usage.c"
  {
#line 4535 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4538 "recompilation.usage.c"
    {
#line 4540 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4543 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4545 "recompilation.usage.c"
  }
#line 4547 "recompilation.usage.c"
}

#line 4550 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
#line 4553 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4555 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4557 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4559 "recompilation.usage.c"
{
#line 4561 "recompilation.usage.c"
  {
#line 4563 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4566 "recompilation.usage.c"
    {
#line 4568 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4571 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4573 "recompilation.usage.c"
  }
#line 4575 "recompilation.usage.c"
}

#line 4578 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
#line 4581 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4583 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4585 "recompilation.usage.c"
{
#line 4587 "recompilation.usage.c"
  {
#line 4589 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4592 "recompilation.usage.c"
    {
#line 4594 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_map_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4597 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4599 "recompilation.usage.c"
  }
#line 4601 "recompilation.usage.c"
}

#line 4604 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
#line 4607 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4609 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4611 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4613 "recompilation.usage.c"
{
#line 4615 "recompilation.usage.c"
  {
#line 4617 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4620 "recompilation.usage.c"
    {
#line 4622 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_map_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4625 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4627 "recompilation.usage.c"
  }
#line 4629 "recompilation.usage.c"
}

#line 4632 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
#line 4635 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4637 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4639 "recompilation.usage.c"
{
#line 4641 "recompilation.usage.c"
  {
#line 4643 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4646 "recompilation.usage.c"
    {
#line 4648 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4651 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4653 "recompilation.usage.c"
  }
#line 4655 "recompilation.usage.c"
}

#line 4658 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
#line 4661 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4663 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4665 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4667 "recompilation.usage.c"
{
#line 4669 "recompilation.usage.c"
  {
#line 4671 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4674 "recompilation.usage.c"
    {
#line 4676 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4679 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4681 "recompilation.usage.c"
  }
#line 4683 "recompilation.usage.c"
}

#line 4686 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
#line 4689 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4691 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4693 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4695 "recompilation.usage.c"
{
#line 4697 "recompilation.usage.c"
  {
#line 4699 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4702 "recompilation.usage.c"
    {
#line 4704 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_list_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4707 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4709 "recompilation.usage.c"
  }
#line 4711 "recompilation.usage.c"
}

#line 4714 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
#line 4717 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4719 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4721 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4723 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4725 "recompilation.usage.c"
{
#line 4727 "recompilation.usage.c"
  {
#line 4729 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4732 "recompilation.usage.c"
    {
#line 4734 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_list_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4737 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4739 "recompilation.usage.c"
  }
#line 4741 "recompilation.usage.c"
}

#line 4744 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
#line 4747 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4749 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4751 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4753 "recompilation.usage.c"
{
#line 4755 "recompilation.usage.c"
  {
#line 4757 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4760 "recompilation.usage.c"
    {
#line 4762 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_map_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4765 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4767 "recompilation.usage.c"
  }
#line 4769 "recompilation.usage.c"
}

#line 4772 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
#line 4775 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4777 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4779 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4781 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4783 "recompilation.usage.c"
{
#line 4785 "recompilation.usage.c"
  {
#line 4787 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4790 "recompilation.usage.c"
    {
#line 4792 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_map_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4795 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4797 "recompilation.usage.c"
  }
#line 4799 "recompilation.usage.c"
}

#line 4802 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0_10001(
#line 4805 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4807 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4809 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4811 "recompilation.usage.c"
{
#line 4813 "recompilation.usage.c"
  {
#line 4815 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4818 "recompilation.usage.c"
    {
#line 4820 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_set_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4823 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4825 "recompilation.usage.c"
  }
#line 4827 "recompilation.usage.c"
}

#line 4830 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
#line 4833 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4835 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4837 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4839 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4841 "recompilation.usage.c"
{
#line 4843 "recompilation.usage.c"
  {
#line 4845 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4848 "recompilation.usage.c"
    {
#line 4850 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_set_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4853 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4855 "recompilation.usage.c"
  }
#line 4857 "recompilation.usage.c"
}

#line 4860 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
#line 4863 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4865 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4867 "recompilation.usage.c"
{
#line 4869 "recompilation.usage.c"
  {
#line 4871 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4874 "recompilation.usage.c"
    {
#line 4876 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_pred_or_func_map_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4879 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4881 "recompilation.usage.c"
  }
#line 4883 "recompilation.usage.c"
}

#line 4886 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
#line 4889 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4891 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4893 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4895 "recompilation.usage.c"
{
#line 4897 "recompilation.usage.c"
  {
#line 4899 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4902 "recompilation.usage.c"
    {
#line 4904 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_pred_or_func_map_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4907 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4909 "recompilation.usage.c"
  }
#line 4911 "recompilation.usage.c"
}

#line 4914 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
#line 4917 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4919 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4921 "recompilation.usage.c"
{
#line 4923 "recompilation.usage.c"
  {
#line 4925 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4928 "recompilation.usage.c"
    {
#line 4930 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_pred_or_func_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4933 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4935 "recompilation.usage.c"
  }
#line 4937 "recompilation.usage.c"
}

#line 4940 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
#line 4943 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4945 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4947 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4949 "recompilation.usage.c"
{
#line 4951 "recompilation.usage.c"
  {
#line 4953 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4956 "recompilation.usage.c"
    {
#line 4958 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_pred_or_func_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4961 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4963 "recompilation.usage.c"
  }
#line 4965 "recompilation.usage.c"
}

#line 4968 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
#line 4971 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4973 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4975 "recompilation.usage.c"
{
#line 4977 "recompilation.usage.c"
  {
#line 4979 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4982 "recompilation.usage.c"
    {
#line 4984 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_used_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4987 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4989 "recompilation.usage.c"
  }
#line 4991 "recompilation.usage.c"
}

#line 4994 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
#line 4997 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4999 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 5001 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 5003 "recompilation.usage.c"
{
#line 5005 "recompilation.usage.c"
  {
#line 5007 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 5010 "recompilation.usage.c"
    {
#line 5012 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_used_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 5015 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 5017 "recompilation.usage.c"
  }
#line 5019 "recompilation.usage.c"
}

#line 5022 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
#line 5025 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 5027 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 5029 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 5031 "recompilation.usage.c"
{
#line 5033 "recompilation.usage.c"
  {
#line 5035 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 5038 "recompilation.usage.c"
    {
#line 5040 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____write_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 5043 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 5045 "recompilation.usage.c"
  }
#line 5047 "recompilation.usage.c"
}

#line 5050 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
#line 5053 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 5055 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 5057 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 5059 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 5061 "recompilation.usage.c"
{
#line 5063 "recompilation.usage.c"
  {
#line 5065 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 5068 "recompilation.usage.c"
    {
#line 5070 "recompilation.usage.c"
      recompilation__usage____Compare____write_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 5073 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 5075 "recompilation.usage.c"
  }
#line 5077 "recompilation.usage.c"
}

#line 903 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__V_25_25,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 903 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20)
#line 903 "recompilation.usage.m"
{
#line 912 "recompilation.usage.m"
  {
#line 912 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 910 "recompilation.usage.m"
    {
#line 910 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_10)));
    }
#line 912 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 911 "recompilation.usage.m"
      {
#line 911 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 911 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_20 = recompilation__usage__STATE_VARIABLE_Info_0_19;
#line 911 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedMap_18 = recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17;
#line 911 "recompilation.usage.m"
      }
#line 912 "recompilation.usage.m"
    else
#line 913 "recompilation.usage.m"
      {
#line 913 "recompilation.usage.m"
        recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_25_25, recompilation__usage__ModuleQualifier_10, recompilation__usage__SymName_11, recompilation__usage__Arity_12, recompilation__usage__Recorded_14, recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, recompilation__usage__STATE_VARIABLE_ResolvedMap_18, recompilation__usage__STATE_VARIABLE_Info_0_19, recompilation__usage__STATE_VARIABLE_Info_20);
#line 913 "recompilation.usage.m"
        return;
      }
#line 912 "recompilation.usage.m"
  }
#line 903 "recompilation.usage.m"
}

#line 853 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__V_58_58,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 853 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 853 "recompilation.usage.m"
{
#line 859 "recompilation.usage.m"
  {
#line 859 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 859 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_for_T_55 = (MR_Word) &recompilation__usage_scalar_common_2[2];

#line 859 "recompilation.usage.m"
    if ((recompilation__usage__STATE_VARIABLE_List_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "recompilation.usage.m"
      {
#line 859 "recompilation.usage.m"
        MR_Word recompilation__usage__Map0_17;

#line 861 "recompilation.usage.m"
        {
#line 861 "recompilation.usage.m"
          mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__Map0_17);
        }
#line 910 "recompilation.usage.m"
        {
#line 910 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__Map0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_1)));
        }
#line 5186 "recompilation.usage.c"
        if (recompilation__usage__succeeded)
#line 5188 "recompilation.usage.c"
          {
#line 911 "recompilation.usage.m"
            *recompilation__usage__Recorded_5 = (MR_Integer) 0;
#line 911 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_9 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 868 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 5196 "recompilation.usage.c"
          }
#line 5198 "recompilation.usage.c"
        else
#line 5200 "recompilation.usage.c"
          {
#line 5202 "recompilation.usage.c"
            MR_Word recompilation__usage__Map_89;

#line 913 "recompilation.usage.m"
            {
#line 913 "recompilation.usage.m"
              recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__Map0_17, &recompilation__usage__Map_89, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
            }
#line 867 "recompilation.usage.m"
            if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 868 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 867 "recompilation.usage.m"
            else
#line 865 "recompilation.usage.m"
              {
#line 865 "recompilation.usage.m"
                MR_Word recompilation__usage__V_25_25;

#line 866 "recompilation.usage.m"
                {
#line 866 "recompilation.usage.m"
                  recompilation__usage__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 866 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 1) = ((MR_Box) (recompilation__usage__Map_89));
#line 866 "recompilation.usage.m"
                }
#line 866 "recompilation.usage.m"
                {
#line 866 "recompilation.usage.m"
                  MR_Word base;
#line 866 "recompilation.usage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 866 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 866 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "recompilation.usage.m"
                }
#line 865 "recompilation.usage.m"
              }
#line 5247 "recompilation.usage.c"
          }
#line 859 "recompilation.usage.m"
      }
#line 859 "recompilation.usage.m"
    else
#line 871 "recompilation.usage.m"
      {
#line 871 "recompilation.usage.m"
        MR_Integer recompilation__usage__ThisArity_34;
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__ArityMap0_35;
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__ListRest0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 1)));
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 0)));

#line 872 "recompilation.usage.m"
        recompilation__usage__ThisArity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 0)));
#line 872 "recompilation.usage.m"
        recompilation__usage__ArityMap0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 1)));
#line 873 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_3 < recompilation__usage__ThisArity_34);
#line 883 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 874 "recompilation.usage.m"
          {
#line 874 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap0_37;

#line 874 "recompilation.usage.m"
            {
#line 874 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__NewArityMap0_37);
            }
#line 910 "recompilation.usage.m"
            {
#line 910 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__NewArityMap0_37, ((MR_Box) (recompilation__usage__ModuleQualifier_1)));
            }
#line 5287 "recompilation.usage.c"
            if (recompilation__usage__succeeded)
#line 5289 "recompilation.usage.c"
              {
#line 911 "recompilation.usage.m"
                *recompilation__usage__Recorded_5 = (MR_Integer) 0;
#line 911 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_9 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 881 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 5297 "recompilation.usage.c"
              }
#line 5299 "recompilation.usage.c"
            else
#line 5301 "recompilation.usage.c"
              {
#line 5303 "recompilation.usage.c"
                MR_Word recompilation__usage__NewArityMap_90;

#line 913 "recompilation.usage.m"
                {
#line 913 "recompilation.usage.m"
                  recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__NewArityMap0_37, &recompilation__usage__NewArityMap_90, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 880 "recompilation.usage.m"
                if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 881 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 880 "recompilation.usage.m"
                else
#line 878 "recompilation.usage.m"
                  {
#line 878 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_48_48;

#line 879 "recompilation.usage.m"
                    {
#line 879 "recompilation.usage.m"
                      recompilation__usage__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 879 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 1) = ((MR_Box) (recompilation__usage__NewArityMap_90));
#line 879 "recompilation.usage.m"
                    }
#line 879 "recompilation.usage.m"
                    {
#line 879 "recompilation.usage.m"
                      MR_Word base;
#line 879 "recompilation.usage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 879 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_48_48));
#line 879 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__STATE_VARIABLE_List_0_6));
#line 879 "recompilation.usage.m"
                    }
#line 878 "recompilation.usage.m"
                  }
#line 5348 "recompilation.usage.c"
              }
#line 874 "recompilation.usage.m"
          }
#line 883 "recompilation.usage.m"
        else
#line 892 "recompilation.usage.m"
          {
#line 883 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__Arity_3 == recompilation__usage__ThisArity_34);
#line 892 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 885 "recompilation.usage.m"
              {
#line 885 "recompilation.usage.m"
                MR_Word recompilation__usage__ArityMap_39;

#line 884 "recompilation.usage.m"
                {
#line 884 "recompilation.usage.m"
                  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ArityMap0_35, &recompilation__usage__ArityMap_39, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 889 "recompilation.usage.m"
                if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 890 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 889 "recompilation.usage.m"
                else
#line 887 "recompilation.usage.m"
                  {
#line 887 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_51_51;

#line 888 "recompilation.usage.m"
                    {
#line 888 "recompilation.usage.m"
                      recompilation__usage__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 1) = ((MR_Box) (recompilation__usage__ArityMap_39));
#line 888 "recompilation.usage.m"
                    }
#line 888 "recompilation.usage.m"
                    {
#line 888 "recompilation.usage.m"
                      MR_Word base;
#line 888 "recompilation.usage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_51_51));
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest0_36));
#line 888 "recompilation.usage.m"
                    }
#line 887 "recompilation.usage.m"
                  }
#line 885 "recompilation.usage.m"
              }
#line 892 "recompilation.usage.m"
            else
#line 894 "recompilation.usage.m"
              {
#line 894 "recompilation.usage.m"
                MR_Word recompilation__usage__ListRest_40;

#line 893 "recompilation.usage.m"
                {
#line 893 "recompilation.usage.m"
                  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ListRest0_36, &recompilation__usage__ListRest_40, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 898 "recompilation.usage.m"
                if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 899 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 898 "recompilation.usage.m"
                else
#line 897 "recompilation.usage.m"
                  {
#line 897 "recompilation.usage.m"
                    MR_Word base;
#line 897 "recompilation.usage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 897 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_45_45));
#line 897 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest_40));
#line 897 "recompilation.usage.m"
                  }
#line 894 "recompilation.usage.m"
              }
#line 892 "recompilation.usage.m"
          }
#line 871 "recompilation.usage.m"
      }
#line 859 "recompilation.usage.m"
  }
#line 853 "recompilation.usage.m"
}

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 414 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 414 "recompilation.usage.m"
{
#line 414 "recompilation.usage.m"
  {
#line 414 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 414 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 414 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 414 "recompilation.usage.m"
    {
#line 414 "recompilation.usage.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 414 "recompilation.usage.m"
      return;
    }
#line 414 "recompilation.usage.m"
  }
#line 414 "recompilation.usage.m"
}

#line 414 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 414 "recompilation.usage.m"
{
#line 414 "recompilation.usage.m"
  {
#line 414 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 414 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 414 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 414 "recompilation.usage.m"
    {
#line 414 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 414 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 414 "recompilation.usage.m"
  }
#line 414 "recompilation.usage.m"
}

#line 824 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 824 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 824 "recompilation.usage.m"
{
#line 824 "recompilation.usage.m"
  {
#line 824 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 824 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 824 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 824 "recompilation.usage.m"
    {
#line 824 "recompilation.usage.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 824 "recompilation.usage.m"
      return;
    }
#line 824 "recompilation.usage.m"
  }
#line 824 "recompilation.usage.m"
}

#line 824 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 824 "recompilation.usage.m"
{
#line 824 "recompilation.usage.m"
  {
#line 824 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 824 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 824 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 824 "recompilation.usage.m"
    {
#line 824 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 824 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 824 "recompilation.usage.m"
  }
#line 824 "recompilation.usage.m"
}

#line 1261 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1261 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1261 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1261 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15)
#line 1261 "recompilation.usage.m"
{
#line 1266 "recompilation.usage.m"
  {
#line 1266 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1266 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;
#line 1266 "recompilation.usage.m"
    MR_Word recompilation__usage__V_18_18;

#line 1268 "recompilation.usage.m"
    {
#line 1268 "recompilation.usage.m"
      recompilation__usage__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_18_18, 0) = ((MR_Box) (recompilation__usage__Module_12));
#line 1268 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_18_18, 1) = ((MR_Box) (recompilation__usage__Name_9));
#line 1268 "recompilation.usage.m"
    }
#line 1268 "recompilation.usage.m"
    {
#line 1268 "recompilation.usage.m"
      recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (recompilation__usage__V_18_18));
#line 1268 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__Arity_10));
#line 1268 "recompilation.usage.m"
    }
#line 1267 "recompilation.usage.m"
    {
#line 1267 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0(recompilation__usage__ItemType_8, recompilation__usage__V_16_16, recompilation__usage__STATE_VARIABLE_Info_0_14, recompilation__usage__STATE_VARIABLE_Info_15);
#line 1267 "recompilation.usage.m"
      return;
    }
#line 1266 "recompilation.usage.m"
  }
#line 1261 "recompilation.usage.m"
}

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5)
#line 1231 "recompilation.usage.m"
{
#line 1234 "recompilation.usage.m"
  {
#line 1234 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1234 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__ResolverFunctor_3)) == (MR_mktag((MR_Integer) 1))))
#line 1239 "recompilation.usage.m"
      {
#line 1239 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));

#line 1241 "recompilation.usage.m"
        {
#line 1241 "recompilation.usage.m"
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, recompilation__usage__TypeCtor_23, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1241 "recompilation.usage.m"
          return;
        }
#line 1239 "recompilation.usage.m"
      }
#line 1234 "recompilation.usage.m"
    else
#line 1234 "recompilation.usage.m"
      if (((MR_tag((MR_Word) recompilation__usage__ResolverFunctor_3)) == (MR_mktag((MR_Integer) 2))))
#line 1242 "recompilation.usage.m"
        {
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));
#line 1243 "recompilation.usage.m"
          MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolverFunctor_3, (MR_Integer) 1)));

#line 1244 "recompilation.usage.m"
          {
#line 1244 "recompilation.usage.m"
            recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, recompilation__usage__TypeCtor_32, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1244 "recompilation.usage.m"
            return;
          }
#line 1242 "recompilation.usage.m"
        }
#line 1234 "recompilation.usage.m"
      else
#line 1234 "recompilation.usage.m"
        {
#line 1234 "recompilation.usage.m"
          MR_Word recompilation__usage__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));
#line 1234 "recompilation.usage.m"
          MR_Word recompilation__usage__PredModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 1)));
#line 1234 "recompilation.usage.m"
          MR_Word recompilation__usage__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 2)));
#line 1234 "recompilation.usage.m"
          MR_Integer recompilation__usage__PredArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 3)));
#line 1234 "recompilation.usage.m"
          MR_Word recompilation__usage__V_16_16;
#line 1234 "recompilation.usage.m"
          MR_Word recompilation__usage__V_17_17;

#line 1237 "recompilation.usage.m"
          {
#line 1237 "recompilation.usage.m"
            recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (recompilation__usage__Name_1));
#line 1237 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__PredArity_13));
#line 1237 "recompilation.usage.m"
          }
#line 1237 "recompilation.usage.m"
          {
#line 1237 "recompilation.usage.m"
            recompilation__usage__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 0) = ((MR_Box) (recompilation__usage__PredId_10));
#line 1237 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 1) = ((MR_Box) (recompilation__usage__PredModule_11));
#line 1237 "recompilation.usage.m"
          }
#line 1237 "recompilation.usage.m"
          {
#line 1237 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_pred_5_p_0(recompilation__usage__PredOrFunc_12, recompilation__usage__V_16_16, recompilation__usage__V_17_17, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1237 "recompilation.usage.m"
            return;
          }
#line 1234 "recompilation.usage.m"
        }
#line 1234 "recompilation.usage.m"
  }
#line 1231 "recompilation.usage.m"
}

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
#line 1223 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1223 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14)
#line 1223 "recompilation.usage.m"
{
#line 1227 "recompilation.usage.m"
  {
#line 1227 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_19;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet0_22;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet0_23;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet_24;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet_25;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_27;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42;
#line 703 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_48_48;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_50_50;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_51_51;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_52_52;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_53_53;
#line 706 "recompilation.usage.m"
    MR_Word recompilation__usage__V_49_49;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 707 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;

#line 1228 "recompilation.usage.m"
    {
#line 1228 "recompilation.usage.m"
      recompilation__usage__SymName_19 = recompilation__module_qualify_name_2_f_0(recompilation__usage__Qualifier_9, recompilation__usage__Name_7);
    }
#line 702 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 702 "recompilation.usage.m"
    recompilation__usage__ItemSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 0)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 1)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 2)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 3)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 4)));
#line 703 "recompilation.usage.m"
    recompilation__usage__IdSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 5)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 6)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 7)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 8)));
#line 703 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 9)));
#line 704 "recompilation.usage.m"
    {
#line 704 "recompilation.usage.m"
      recompilation__usage__record_resolved_item__ho1_7_p_0(recompilation__usage__SymName_19, recompilation__usage__Arity_8, recompilation__usage__IdSet0_23, &recompilation__usage__IdSet_24, recompilation__usage__STATE_VARIABLE_Info_0_13, &recompilation__usage__STATE_VARIABLE_Info_14_27);
    }
#line 706 "recompilation.usage.m"
    recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 0)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 1)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 2)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 3)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 4)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 5)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 6)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 7)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 8)));
#line 706 "recompilation.usage.m"
    recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 9)));
#line 706 "recompilation.usage.m"
    {
#line 706 "recompilation.usage.m"
      recompilation__usage__ItemSet_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 0) = ((MR_Box) (recompilation__usage__V_44_44));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 1) = ((MR_Box) (recompilation__usage__V_45_45));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 2) = ((MR_Box) (recompilation__usage__V_46_46));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 3) = ((MR_Box) (recompilation__usage__V_47_47));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 4) = ((MR_Box) (recompilation__usage__V_48_48));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 5) = ((MR_Box) (recompilation__usage__IdSet_24));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 6) = ((MR_Box) (recompilation__usage__V_50_50));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 7) = ((MR_Box) (recompilation__usage__V_51_51));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 8) = ((MR_Box) (recompilation__usage__V_52_52));
#line 706 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 9) = ((MR_Box) (recompilation__usage__V_53_53));
#line 706 "recompilation.usage.m"
    }
#line 707 "recompilation.usage.m"
    recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 0)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 1)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 2)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 3)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 4)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 5)));
#line 707 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 6)));
#line 707 "recompilation.usage.m"
    {
#line 707 "recompilation.usage.m"
      MR_Word base;
#line 707 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 707 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_14 = base;
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_54_54));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_55_55));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_56_56));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_57_57));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_58_58));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__ItemSet_25));
#line 707 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_60_60));
#line 707 "recompilation.usage.m"
    }
#line 1227 "recompilation.usage.m"
  }
#line 1223 "recompilation.usage.m"
}

#line 1188 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1188 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1188 "recompilation.usage.m"
{
#line 1191 "recompilation.usage.m"
  {
#line 1191 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1191 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgModes_8;

#line 1192 "recompilation.usage.m"
    {
#line 1192 "recompilation.usage.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(recompilation__usage__ProcInfo_6, &recompilation__usage__ArgModes_8);
    }
#line 1193 "recompilation.usage.m"
    {
#line 1193 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_modes_3_p_0(recompilation__usage__ArgModes_8, recompilation__usage__STATE_VARIABLE_Info_0_9, recompilation__usage__STATE_VARIABLE_Info_10);
#line 1193 "recompilation.usage.m"
      return;
    }
#line 1191 "recompilation.usage.m"
  }
#line 1188 "recompilation.usage.m"
}

#line 1120 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1120 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1120 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1120 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1120 "recompilation.usage.m"
{
#line 1125 "recompilation.usage.m"
  {
#line 1125 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1125 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_14;
#line 1125 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17;

#line 1126 "recompilation.usage.m"
    {
#line 1126 "recompilation.usage.m"
      recompilation__usage__SymName_14 = recompilation__module_qualify_name_2_f_0(recompilation__usage__ModuleQualifier_11, recompilation__usage__Name_9);
    }
#line 1127 "recompilation.usage.m"
    {
#line 1127 "recompilation.usage.m"
      recompilation__usage__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 0) = ((MR_Box) (recompilation__usage__SymName_14));
#line 1127 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 1) = ((MR_Box) (recompilation__usage__Arity_10));
#line 1127 "recompilation.usage.m"
    }
#line 1127 "recompilation.usage.m"
    {
#line 1127 "recompilation.usage.m"
      recompilation__usage__record_used_pred_or_func_4_p_0(recompilation__usage__PredOrFunc_8, recompilation__usage__V_17_17, recompilation__usage__STATE_VARIABLE_Info_0_15, recompilation__usage__STATE_VARIABLE_Info_16);
#line 1127 "recompilation.usage.m"
      return;
    }
#line 1125 "recompilation.usage.m"
  }
#line 1120 "recompilation.usage.m"
}

#line 793 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 793 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 793 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10)
#line 793 "recompilation.usage.m"
{
#line 796 "recompilation.usage.m"
  {
#line 796 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 796 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_11;
#line 796 "recompilation.usage.m"
    MR_Word recompilation__usage__PredOrFunc_12;
#line 796 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_13;
#line 796 "recompilation.usage.m"
    MR_Integer recompilation__usage__PredArity_14;
#line 796 "recompilation.usage.m"
    MR_Word recompilation__usage__PredExistQVars_15;
#line 796 "recompilation.usage.m"
    MR_Integer recompilation__usage__OrigArity_16;

#line 797 "recompilation.usage.m"
    {
#line 797 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_6, recompilation__usage__PredId_9, &recompilation__usage__PredInfo_11);
    }
#line 798 "recompilation.usage.m"
    {
#line 798 "recompilation.usage.m"
      recompilation__usage__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 799 "recompilation.usage.m"
    {
#line 799 "recompilation.usage.m"
      recompilation__usage__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 800 "recompilation.usage.m"
    {
#line 800 "recompilation.usage.m"
      recompilation__usage__PredArity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 801 "recompilation.usage.m"
    {
#line 801 "recompilation.usage.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(recompilation__usage__PredInfo_11, &recompilation__usage__PredExistQVars_15);
    }
#line 802 "recompilation.usage.m"
    {
#line 802 "recompilation.usage.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__usage__PredOrFunc_12, &recompilation__usage__OrigArity_16, recompilation__usage__PredArity_14);
    }
#line 809 "recompilation.usage.m"
    if ((recompilation__usage__PredOrFunc_12 == (MR_Integer) 1))
#line 810 "recompilation.usage.m"
      {
#line 811 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 >= recompilation__usage__Arity_8);
#line 810 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 810 "recompilation.usage.m"
          {
#line 815 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__PredExistQVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "recompilation.usage.m"
            if (!(recompilation__usage__succeeded))
#line 816 "recompilation.usage.m"
              recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 == recompilation__usage__Arity_8);
#line 810 "recompilation.usage.m"
          }
#line 810 "recompilation.usage.m"
      }
#line 809 "recompilation.usage.m"
    else
#line 804 "recompilation.usage.m"
      {
#line 805 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 >= recompilation__usage__Arity_8);
#line 804 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 808 "recompilation.usage.m"
          recompilation__usage__succeeded = (recompilation__usage__PredExistQVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "recompilation.usage.m"
      }
#line 796 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 796 "recompilation.usage.m"
      {
#line 819 "recompilation.usage.m"
        {
#line 819 "recompilation.usage.m"
          MR_Word base;
#line 819 "recompilation.usage.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 819 "recompilation.usage.m"
          *recompilation__usage__ResolvedCtor_10 = base;
#line 819 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__PredId_9));
#line 819 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__PredModule_13));
#line 819 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__PredOrFunc_12));
#line 819 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__OrigArity_16));
#line 819 "recompilation.usage.m"
        }
#line 819 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 796 "recompilation.usage.m"
      }
#line 796 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 796 "recompilation.usage.m"
  }
#line 793 "recompilation.usage.m"
}

#line 903 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 903 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 903 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 903 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20)
#line 903 "recompilation.usage.m"
{
#line 912 "recompilation.usage.m"
  {
#line 912 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 910 "recompilation.usage.m"
    {
#line 910 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[4], recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_10)));
    }
#line 912 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 911 "recompilation.usage.m"
      {
#line 911 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 911 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_20 = recompilation__usage__STATE_VARIABLE_Info_0_19;
#line 911 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedMap_18 = recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17;
#line 911 "recompilation.usage.m"
      }
#line 912 "recompilation.usage.m"
    else
#line 913 "recompilation.usage.m"
      {
#line 913 "recompilation.usage.m"
        recompilation__usage__do_record_used_functor_8_p_0(recompilation__usage__ModuleQualifier_10, recompilation__usage__SymName_11, recompilation__usage__Arity_12, recompilation__usage__Recorded_14, recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, recompilation__usage__STATE_VARIABLE_ResolvedMap_18, recompilation__usage__STATE_VARIABLE_Info_0_19, recompilation__usage__STATE_VARIABLE_Info_20);
#line 913 "recompilation.usage.m"
        return;
      }
#line 912 "recompilation.usage.m"
  }
#line 903 "recompilation.usage.m"
}

#line 853 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 853 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 853 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 853 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 853 "recompilation.usage.m"
{
#line 859 "recompilation.usage.m"
  {
#line 859 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 859 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_for_T_55 = (MR_Word) &recompilation__usage_scalar_common_2[4];

#line 859 "recompilation.usage.m"
    if ((recompilation__usage__STATE_VARIABLE_List_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "recompilation.usage.m"
      {
#line 859 "recompilation.usage.m"
        MR_Word recompilation__usage__Map0_17;
#line 859 "recompilation.usage.m"
        MR_Word recompilation__usage__Map_18;

#line 861 "recompilation.usage.m"
        {
#line 861 "recompilation.usage.m"
          mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__Map0_17);
        }
#line 862 "recompilation.usage.m"
        {
#line 862 "recompilation.usage.m"
          recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__Map0_17, &recompilation__usage__Map_18, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
        }
#line 867 "recompilation.usage.m"
        if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 868 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 867 "recompilation.usage.m"
        else
#line 865 "recompilation.usage.m"
          {
#line 865 "recompilation.usage.m"
            MR_Word recompilation__usage__V_25_25;

#line 866 "recompilation.usage.m"
            {
#line 866 "recompilation.usage.m"
              recompilation__usage__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 866 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 1) = ((MR_Box) (recompilation__usage__Map_18));
#line 866 "recompilation.usage.m"
            }
#line 866 "recompilation.usage.m"
            {
#line 866 "recompilation.usage.m"
              MR_Word base;
#line 866 "recompilation.usage.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 866 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 866 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "recompilation.usage.m"
            }
#line 865 "recompilation.usage.m"
          }
#line 859 "recompilation.usage.m"
      }
#line 859 "recompilation.usage.m"
    else
#line 871 "recompilation.usage.m"
      {
#line 871 "recompilation.usage.m"
        MR_Integer recompilation__usage__ThisArity_34;
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__ArityMap0_35;
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__ListRest0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 1)));
#line 871 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 0)));

#line 872 "recompilation.usage.m"
        recompilation__usage__ThisArity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 0)));
#line 872 "recompilation.usage.m"
        recompilation__usage__ArityMap0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 1)));
#line 873 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_3 < recompilation__usage__ThisArity_34);
#line 883 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 874 "recompilation.usage.m"
          {
#line 874 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap0_37;
#line 874 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap_38;

#line 874 "recompilation.usage.m"
            {
#line 874 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__NewArityMap0_37);
            }
#line 875 "recompilation.usage.m"
            {
#line 875 "recompilation.usage.m"
              recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__NewArityMap0_37, &recompilation__usage__NewArityMap_38, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
            }
#line 880 "recompilation.usage.m"
            if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 881 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 880 "recompilation.usage.m"
            else
#line 878 "recompilation.usage.m"
              {
#line 878 "recompilation.usage.m"
                MR_Word recompilation__usage__V_48_48;

#line 879 "recompilation.usage.m"
                {
#line 879 "recompilation.usage.m"
                  recompilation__usage__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 879 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 1) = ((MR_Box) (recompilation__usage__NewArityMap_38));
#line 879 "recompilation.usage.m"
                }
#line 879 "recompilation.usage.m"
                {
#line 879 "recompilation.usage.m"
                  MR_Word base;
#line 879 "recompilation.usage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 879 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_48_48));
#line 879 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__STATE_VARIABLE_List_0_6));
#line 879 "recompilation.usage.m"
                }
#line 878 "recompilation.usage.m"
              }
#line 874 "recompilation.usage.m"
          }
#line 883 "recompilation.usage.m"
        else
#line 892 "recompilation.usage.m"
          {
#line 883 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__Arity_3 == recompilation__usage__ThisArity_34);
#line 892 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 885 "recompilation.usage.m"
              {
#line 885 "recompilation.usage.m"
                MR_Word recompilation__usage__ArityMap_39;

#line 884 "recompilation.usage.m"
                {
#line 884 "recompilation.usage.m"
                  recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ArityMap0_35, &recompilation__usage__ArityMap_39, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 889 "recompilation.usage.m"
                if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 890 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 889 "recompilation.usage.m"
                else
#line 887 "recompilation.usage.m"
                  {
#line 887 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_51_51;

#line 888 "recompilation.usage.m"
                    {
#line 888 "recompilation.usage.m"
                      recompilation__usage__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 1) = ((MR_Box) (recompilation__usage__ArityMap_39));
#line 888 "recompilation.usage.m"
                    }
#line 888 "recompilation.usage.m"
                    {
#line 888 "recompilation.usage.m"
                      MR_Word base;
#line 888 "recompilation.usage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_51_51));
#line 888 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest0_36));
#line 888 "recompilation.usage.m"
                    }
#line 887 "recompilation.usage.m"
                  }
#line 885 "recompilation.usage.m"
              }
#line 892 "recompilation.usage.m"
            else
#line 894 "recompilation.usage.m"
              {
#line 894 "recompilation.usage.m"
                MR_Word recompilation__usage__ListRest_40;

#line 893 "recompilation.usage.m"
                {
#line 893 "recompilation.usage.m"
                  recompilation__usage__record_resolved_item_2__ho6_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ListRest0_36, &recompilation__usage__ListRest_40, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 898 "recompilation.usage.m"
                if ((*recompilation__usage__Recorded_5 == (MR_Integer) 0))
#line 899 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 898 "recompilation.usage.m"
                else
#line 897 "recompilation.usage.m"
                  {
#line 897 "recompilation.usage.m"
                    MR_Word base;
#line 897 "recompilation.usage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 897 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_45_45));
#line 897 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest_40));
#line 897 "recompilation.usage.m"
                  }
#line 894 "recompilation.usage.m"
              }
#line 892 "recompilation.usage.m"
          }
#line 871 "recompilation.usage.m"
      }
#line 859 "recompilation.usage.m"
  }
#line 853 "recompilation.usage.m"
}

#line 831 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item__ho1_7_p_0(
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_8,
#line 831 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_9,
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_IdSet_0_19,
#line 831 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_IdSet_20,
#line 831 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 831 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22)
#line 831 "recompilation.usage.m"
{
#line 836 "recompilation.usage.m"
  {
#line 836 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 836 "recompilation.usage.m"
    MR_String recompilation__usage__UnqualifiedName_13;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleQualifier_14;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames1_16;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__Recorded_17;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames_18;
#line 841 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames0_15;
#line 839 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_MatchingNames0_15;

#line 837 "recompilation.usage.m"
    {
#line 837 "recompilation.usage.m"
      recompilation__usage__UnqualifiedName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_8);
    }
#line 838 "recompilation.usage.m"
    {
#line 838 "recompilation.usage.m"
      recompilation__usage__ModuleQualifier_14 = recompilation__find_module_qualifier_1_f_0(recompilation__usage__SymName_8);
    }
#line 839 "recompilation.usage.m"
    {
#line 839 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__STATE_VARIABLE_IdSet_0_19, ((MR_Box) (recompilation__usage__UnqualifiedName_13)), &recompilation__usage__conv0_MatchingNames0_15);
    }
#line 839 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 839 "recompilation.usage.m"
      {
#line 839 "recompilation.usage.m"
        recompilation__usage__MatchingNames0_15 = ((MR_Word) recompilation__usage__conv0_MatchingNames0_15);
#line 839 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 839 "recompilation.usage.m"
      }
#line 841 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 840 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_16 = recompilation__usage__MatchingNames0_15;
#line 841 "recompilation.usage.m"
    else
#line 842 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "recompilation.usage.m"
    {
#line 844 "recompilation.usage.m"
      recompilation__usage__record_resolved_item_2__ho6_9_p_0(recompilation__usage__ModuleQualifier_14, recompilation__usage__SymName_8, recompilation__usage__Arity_9, &recompilation__usage__Recorded_17, recompilation__usage__MatchingNames1_16, &recompilation__usage__MatchingNames_18, recompilation__usage__STATE_VARIABLE_Info_0_21, recompilation__usage__STATE_VARIABLE_Info_22);
    }
#line 849 "recompilation.usage.m"
    if ((recompilation__usage__Recorded_17 == (MR_Integer) 0))
#line 850 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_IdSet_20 = recompilation__usage__STATE_VARIABLE_IdSet_0_19;
#line 849 "recompilation.usage.m"
    else
#line 847 "recompilation.usage.m"
      {
#line 848 "recompilation.usage.m"
        {
#line 848 "recompilation.usage.m"
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], ((MR_Box) (recompilation__usage__UnqualifiedName_13)), ((MR_Box) (recompilation__usage__MatchingNames_18)), recompilation__usage__STATE_VARIABLE_IdSet_0_19, recompilation__usage__STATE_VARIABLE_IdSet_20);
#line 848 "recompilation.usage.m"
          return;
        }
#line 847 "recompilation.usage.m"
      }
#line 836 "recompilation.usage.m"
  }
#line 831 "recompilation.usage.m"
}

#line 774 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__774__1_1_f_0(
#line 774 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_47)
#line 774 "recompilation.usage.m"
{
#line 774 "recompilation.usage.m"
  {
#line 774 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 774 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__2_48;
#line 774 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 3)));
#line 774 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 2)));
#line 776 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 0)));
#line 776 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 1)));
#line 776 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 4)));
#line 782 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsName_35;
#line 782 "recompilation.usage.m"
    MR_Integer recompilation__usage__ConsArity_36;
#line 778 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;

#line 778 "recompilation.usage.m"
    recompilation__usage__succeeded = ((((MR_tag((MR_Word) recompilation__usage__FieldConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 778 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 778 "recompilation.usage.m"
      {
#line 778 "recompilation.usage.m"
        recompilation__usage__ConsName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 1)));
#line 778 "recompilation.usage.m"
        recompilation__usage__ConsArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 2)));
#line 778 "recompilation.usage.m"
        recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 3)));
#line 779 "recompilation.usage.m"
        {
#line 779 "recompilation.usage.m"
          MR_Word recompilation__usage__V_49_49;
#line 779 "recompilation.usage.m"
          MR_Word recompilation__usage__V_50_50;

#line 780 "recompilation.usage.m"
          {
#line 780 "recompilation.usage.m"
            recompilation__usage__V_49_49 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_60);
          }
#line 781 "recompilation.usage.m"
          {
#line 781 "recompilation.usage.m"
            recompilation__usage__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_50_50, 0) = ((MR_Box) (recompilation__usage__ConsName_35));
#line 781 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_50_50, 1) = ((MR_Box) (recompilation__usage__ConsArity_36));
#line 781 "recompilation.usage.m"
          }
#line 779 "recompilation.usage.m"
          {
#line 779 "recompilation.usage.m"
            recompilation__usage__HeadVar__2_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "recompilation.usage.m"
            MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_48, 0) = ((MR_Box) (recompilation__usage__V_49_49));
#line 779 "recompilation.usage.m"
            MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_48, 1) = ((MR_Box) (recompilation__usage__V_50_50));
#line 779 "recompilation.usage.m"
          }
#line 779 "recompilation.usage.m"
        }
#line 778 "recompilation.usage.m"
      }
#line 778 "recompilation.usage.m"
    else
#line 783 "recompilation.usage.m"
      {
#line 783 "recompilation.usage.m"
        {
#line 783 "recompilation.usage.m"
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_matching_functors\'/4", (MR_String) "weird cons_id in hlds_field_defn");
        }
#line 783 "recompilation.usage.m"
      }
#line 774 "recompilation.usage.m"
    return recompilation__usage__HeadVar__2_48;
#line 774 "recompilation.usage.m"
  }
#line 774 "recompilation.usage.m"
}

#line 751 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__751__1_1_f_0(
#line 751 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_41)
#line 751 "recompilation.usage.m"
{
#line 751 "recompilation.usage.m"
  {
#line 751 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 751 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__2_42;
#line 751 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 0)));
#line 751 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 1)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 2)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 3)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 4)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 5)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 6)));
#line 753 "recompilation.usage.m"
    MR_Word recompilation__usage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 7)));

#line 755 "recompilation.usage.m"
    {
#line 755 "recompilation.usage.m"
      recompilation__usage__V_43_43 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_20);
    }
#line 754 "recompilation.usage.m"
    {
#line 754 "recompilation.usage.m"
      recompilation__usage__HeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 754 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_42, 0) = ((MR_Box) (recompilation__usage__V_43_43));
#line 754 "recompilation.usage.m"
    }
#line 751 "recompilation.usage.m"
    return recompilation__usage__HeadVar__2_42;
#line 751 "recompilation.usage.m"
  }
#line 751 "recompilation.usage.m"
}

#line 681 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__681__1_2_f_0(
#line 681 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_17,
#line 681 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_35)
#line 681 "recompilation.usage.m"
{
#line 681 "recompilation.usage.m"
  {
#line 681 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 681 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__3_36;
#line 681 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_25;
#line 681 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_26;

#line 683 "recompilation.usage.m"
    {
#line 683 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_17, recompilation__usage__HeadVar__2_35, &recompilation__usage__PredInfo_26);
    }
#line 684 "recompilation.usage.m"
    {
#line 684 "recompilation.usage.m"
      recompilation__usage__PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0(recompilation__usage__PredInfo_26);
    }
#line 682 "recompilation.usage.m"
    {
#line 682 "recompilation.usage.m"
      recompilation__usage__HeadVar__3_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 682 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_36, 0) = ((MR_Box) (recompilation__usage__HeadVar__2_35));
#line 682 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_36, 1) = ((MR_Box) (recompilation__usage__PredModule_25));
#line 682 "recompilation.usage.m"
    }
#line 681 "recompilation.usage.m"
    return recompilation__usage__HeadVar__3_36;
#line 681 "recompilation.usage.m"
  }
#line 681 "recompilation.usage.m"
}

#line 264 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__264__1_3_f_0(
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12,
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_47,
#line 264 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_48)
#line 264 "recompilation.usage.m"
{
#line 264 "recompilation.usage.m"
  {
#line 264 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 264 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__4_49;
#line 264 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemNames_24;
#line 266 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleItemNames_24;

#line 266 "recompilation.usage.m"
    {
#line 266 "recompilation.usage.m"
      recompilation__usage__conv0_ModuleItemNames_24 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], recompilation__usage__ModuleUsedItems_12, recompilation__usage__HeadVar__2_47);
    }
#line 266 "recompilation.usage.m"
    recompilation__usage__ModuleItemNames_24 = ((MR_Word) recompilation__usage__conv0_ModuleItemNames_24);
#line 267 "recompilation.usage.m"
    {
#line 267 "recompilation.usage.m"
      mercury__map__select_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__usage__HeadVar__3_48, recompilation__usage__ModuleItemNames_24, &recompilation__usage__HeadVar__4_49);
    }
#line 264 "recompilation.usage.m"
    return recompilation__usage__HeadVar__4_49;
#line 264 "recompilation.usage.m"
  }
#line 264 "recompilation.usage.m"
}

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 414 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 414 "recompilation.usage.m"
{
#line 414 "recompilation.usage.m"
  {
#line 414 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 414 "recompilation.usage.m"
    {
#line 414 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2, recompilation__usage__HeadVar__3_3);
#line 414 "recompilation.usage.m"
      return;
    }
#line 414 "recompilation.usage.m"
  }
#line 414 "recompilation.usage.m"
}

#line 414 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 414 "recompilation.usage.m"
{
#line 414 "recompilation.usage.m"
  {
#line 414 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 414 "recompilation.usage.m"
    {
#line 414 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2);
    }
#line 414 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 414 "recompilation.usage.m"
  }
#line 414 "recompilation.usage.m"
}

#line 37 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0(
#line 37 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 37 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 37 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 37 "recompilation.usage.m"
{
#line 37 "recompilation.usage.m"
  {
#line 37 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 37 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 37 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 37 "recompilation.usage.m"
    {
#line 37 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 37 "recompilation.usage.m"
      return;
    }
#line 37 "recompilation.usage.m"
  }
#line 37 "recompilation.usage.m"
}

#line 37 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0(
#line 37 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 37 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 37 "recompilation.usage.m"
{
#line 37 "recompilation.usage.m"
  {
#line 37 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 37 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 37 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 37 "recompilation.usage.m"
    {
#line 37 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 37 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 37 "recompilation.usage.m"
  }
#line 37 "recompilation.usage.m"
}

#line 41 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0(
#line 41 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 41 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 41 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 41 "recompilation.usage.m"
{
#line 41 "recompilation.usage.m"
  {
#line 41 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 41 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 41 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 41 "recompilation.usage.m"
    {
#line 41 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[7], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 41 "recompilation.usage.m"
      return;
    }
#line 41 "recompilation.usage.m"
  }
#line 41 "recompilation.usage.m"
}

#line 41 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0(
#line 41 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 41 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 41 "recompilation.usage.m"
{
#line 41 "recompilation.usage.m"
  {
#line 41 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 41 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 41 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 41 "recompilation.usage.m"
    {
#line 41 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[7], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 41 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 41 "recompilation.usage.m"
  }
#line 41 "recompilation.usage.m"
}

#line 43 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0(
#line 43 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 43 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 43 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 43 "recompilation.usage.m"
{
#line 43 "recompilation.usage.m"
  {
#line 43 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 43 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 43 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 43 "recompilation.usage.m"
    {
#line 43 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[5], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 43 "recompilation.usage.m"
      return;
    }
#line 43 "recompilation.usage.m"
  }
#line 43 "recompilation.usage.m"
}

#line 43 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0(
#line 43 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 43 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 43 "recompilation.usage.m"
{
#line 43 "recompilation.usage.m"
  {
#line 43 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 43 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 43 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 43 "recompilation.usage.m"
    {
#line 43 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[5], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 43 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 43 "recompilation.usage.m"
  }
#line 43 "recompilation.usage.m"
}

#line 51 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0(
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 51 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 51 "recompilation.usage.m"
{
#line 51 "recompilation.usage.m"
  {
#line 51 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_11_11;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_13_13;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_15_15;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 7105 "recompilation.usage.c"
    {
#line 7107 "recompilation.usage.c"
      recompilation__usage__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7109 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7111 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7113 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_6));
#line 7115 "recompilation.usage.c"
    }
#line 7117 "recompilation.usage.c"
    {
#line 7119 "recompilation.usage.c"
      recompilation__usage__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7121 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7123 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7125 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 2) = ((MR_Box) (recompilation__usage__TypeInfo_11_11));
#line 7127 "recompilation.usage.c"
    }
#line 7129 "recompilation.usage.c"
    {
#line 7131 "recompilation.usage.c"
      recompilation__usage__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7133 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7135 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_15_15, 1) = ((MR_Box) (recompilation__usage__TypeInfo_13_13));
#line 7137 "recompilation.usage.c"
    }
#line 51 "recompilation.usage.m"
    {
#line 51 "recompilation.usage.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recompilation__usage__TypeInfo_15_15, recompilation__usage__HeadVar__1_1, recompilation__usage__Cast_HeadVar1_4, recompilation__usage__Cast_HeadVar2_5);
#line 51 "recompilation.usage.m"
      return;
    }
#line 51 "recompilation.usage.m"
  }
#line 51 "recompilation.usage.m"
}

#line 51 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0(
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 51 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 51 "recompilation.usage.m"
{
#line 51 "recompilation.usage.m"
  {
#line 51 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_10_10;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_12_12;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_14_14;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 51 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 7177 "recompilation.usage.c"
    {
#line 7179 "recompilation.usage.c"
      recompilation__usage__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7181 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7183 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7185 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_5));
#line 7187 "recompilation.usage.c"
    }
#line 7189 "recompilation.usage.c"
    {
#line 7191 "recompilation.usage.c"
      recompilation__usage__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7193 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7195 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7197 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 2) = ((MR_Box) (recompilation__usage__TypeInfo_10_10));
#line 7199 "recompilation.usage.c"
    }
#line 7201 "recompilation.usage.c"
    {
#line 7203 "recompilation.usage.c"
      recompilation__usage__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7205 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7207 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_14_14, 1) = ((MR_Box) (recompilation__usage__TypeInfo_12_12));
#line 7209 "recompilation.usage.c"
    }
#line 51 "recompilation.usage.m"
    {
#line 51 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recompilation__usage__TypeInfo_14_14, recompilation__usage__Cast_HeadVar1_3, recompilation__usage__Cast_HeadVar2_4);
    }
#line 51 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 51 "recompilation.usage.m"
  }
#line 51 "recompilation.usage.m"
}

#line 58 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0(
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 58 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 58 "recompilation.usage.m"
{
#line 58 "recompilation.usage.m"
  {
#line 58 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 58 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 58 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 58 "recompilation.usage.m"
    {
#line 58 "recompilation.usage.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_6, recompilation__usage__HeadVar__1_1, recompilation__usage__Cast_HeadVar1_4, recompilation__usage__Cast_HeadVar2_5);
#line 58 "recompilation.usage.m"
      return;
    }
#line 58 "recompilation.usage.m"
  }
#line 58 "recompilation.usage.m"
}

#line 58 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0(
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 58 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 58 "recompilation.usage.m"
{
#line 58 "recompilation.usage.m"
  {
#line 58 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 58 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 58 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 58 "recompilation.usage.m"
    {
#line 58 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_5, recompilation__usage__Cast_HeadVar1_3, recompilation__usage__Cast_HeadVar2_4);
    }
#line 58 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 58 "recompilation.usage.m"
  }
#line 58 "recompilation.usage.m"
}

#line 56 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0(
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 56 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 56 "recompilation.usage.m"
{
#line 56 "recompilation.usage.m"
  {
#line 56 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_10_10;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_12_12;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 7315 "recompilation.usage.c"
    {
#line 7317 "recompilation.usage.c"
      recompilation__usage__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7319 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7321 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7323 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_6));
#line 7325 "recompilation.usage.c"
    }
#line 7327 "recompilation.usage.c"
    {
#line 7329 "recompilation.usage.c"
      recompilation__usage__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7331 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7333 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7335 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 2) = ((MR_Box) (recompilation__usage__TypeInfo_10_10));
#line 7337 "recompilation.usage.c"
    }
#line 56 "recompilation.usage.m"
    {
#line 56 "recompilation.usage.m"
      mercury__list____Compare____list_1_0(recompilation__usage__TypeInfo_12_12, recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 56 "recompilation.usage.m"
      return;
    }
#line 56 "recompilation.usage.m"
  }
#line 56 "recompilation.usage.m"
}

#line 56 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0(
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 56 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 56 "recompilation.usage.m"
{
#line 56 "recompilation.usage.m"
  {
#line 56 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_9_9;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_11_11;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 56 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 7375 "recompilation.usage.c"
    {
#line 7377 "recompilation.usage.c"
      recompilation__usage__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7379 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7381 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7383 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_5));
#line 7385 "recompilation.usage.c"
    }
#line 7387 "recompilation.usage.c"
    {
#line 7389 "recompilation.usage.c"
      recompilation__usage__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7391 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7393 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7395 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 2) = ((MR_Box) (recompilation__usage__TypeInfo_9_9));
#line 7397 "recompilation.usage.c"
    }
#line 56 "recompilation.usage.m"
    {
#line 56 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__list____Unify____list_1_0(recompilation__usage__TypeInfo_11_11, (MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 56 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 56 "recompilation.usage.m"
  }
#line 56 "recompilation.usage.m"
}

#line 48 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0(
#line 48 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 48 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 48 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 48 "recompilation.usage.m"
{
#line 48 "recompilation.usage.m"
  {
#line 48 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 48 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 48 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 48 "recompilation.usage.m"
    {
#line 48 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 48 "recompilation.usage.m"
      return;
    }
#line 48 "recompilation.usage.m"
  }
#line 48 "recompilation.usage.m"
}

#line 48 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0(
#line 48 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 48 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 48 "recompilation.usage.m"
{
#line 48 "recompilation.usage.m"
  {
#line 48 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 48 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 48 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 48 "recompilation.usage.m"
    {
#line 48 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[10], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 48 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 48 "recompilation.usage.m"
  }
#line 48 "recompilation.usage.m"
}

#line 49 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0(
#line 49 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 49 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 49 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 49 "recompilation.usage.m"
{
#line 49 "recompilation.usage.m"
  {
#line 49 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 49 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 49 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 49 "recompilation.usage.m"
    {
#line 49 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[8], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 49 "recompilation.usage.m"
      return;
    }
#line 49 "recompilation.usage.m"
  }
#line 49 "recompilation.usage.m"
}

#line 49 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0(
#line 49 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 49 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 49 "recompilation.usage.m"
{
#line 49 "recompilation.usage.m"
  {
#line 49 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 49 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 49 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 49 "recompilation.usage.m"
    {
#line 49 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[8], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 49 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 49 "recompilation.usage.m"
  }
#line 49 "recompilation.usage.m"
}

#line 60 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0(
#line 60 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 60 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 60 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 60 "recompilation.usage.m"
{
#line 60 "recompilation.usage.m"
  {
#line 60 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 60 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_50 = (MR_Integer) recompilation__usage__HeadVar__2_2;
#line 60 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_51 = (MR_Integer) recompilation__usage__HeadVar__3_3;

#line 60 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_50 == recompilation__usage__CastY_51);
#line 60 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 7559 "recompilation.usage.c"
      *recompilation__usage__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "recompilation.usage.m"
    else
#line 60 "recompilation.usage.m"
      if (((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 60 "recompilation.usage.m"
        {
#line 60 "recompilation.usage.m"
          MR_Word recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "recompilation.usage.m"
          if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 60 "recompilation.usage.m"
            {
#line 60 "recompilation.usage.m"
              MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "recompilation.usage.m"
              {
#line 60 "recompilation.usage.m"
                recompilation____Compare____item_name_0_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_59_59, recompilation__usage__V_32_32);
#line 60 "recompilation.usage.m"
                return;
              }
#line 60 "recompilation.usage.m"
            }
#line 60 "recompilation.usage.m"
          else
#line 60 "recompilation.usage.m"
            if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7590 "recompilation.usage.c"
              *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "recompilation.usage.m"
            else
#line 7594 "recompilation.usage.c"
              *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "recompilation.usage.m"
        }
#line 60 "recompilation.usage.m"
      else
#line 60 "recompilation.usage.m"
        if (((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 60 "recompilation.usage.m"
          {
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "recompilation.usage.m"
            if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7611 "recompilation.usage.c"
              *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "recompilation.usage.m"
            else
#line 60 "recompilation.usage.m"
              if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 60 "recompilation.usage.m"
                {
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_49_49;

#line 60 "recompilation.usage.m"
                  {
#line 60 "recompilation.usage.m"
                    recompilation____Compare____item_name_0_0(&recompilation__usage__V_49_49, recompilation__usage__V_61_61, recompilation__usage__V_47_47);
                  }
#line 7631 "recompilation.usage.c"
                  recompilation__usage__succeeded = (recompilation__usage__V_49_49 == (MR_Integer) 0);
#line 60 "recompilation.usage.m"
                  recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 60 "recompilation.usage.m"
                  if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                    *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_49_49;
#line 60 "recompilation.usage.m"
                  else
#line 60 "recompilation.usage.m"
                    {
#line 60 "recompilation.usage.m"
                      recompilation____Compare____item_name_0_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_60_60, recompilation__usage__V_48_48);
#line 60 "recompilation.usage.m"
                      return;
                    }
#line 60 "recompilation.usage.m"
                }
#line 60 "recompilation.usage.m"
              else
#line 7652 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "recompilation.usage.m"
          }
#line 60 "recompilation.usage.m"
        else
#line 60 "recompilation.usage.m"
          {
#line 60 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "recompilation.usage.m"
            if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7671 "recompilation.usage.c"
              *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "recompilation.usage.m"
            else
#line 60 "recompilation.usage.m"
              if (((MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7677 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "recompilation.usage.m"
              else
#line 60 "recompilation.usage.m"
                {
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 2)));
#line 60 "recompilation.usage.m"
                  MR_Integer recompilation__usage__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 3)));
#line 60 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_12_12;

#line 60 "recompilation.usage.m"
                  {
#line 60 "recompilation.usage.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&recompilation__usage__V_12_12, recompilation__usage__V_65_65, recompilation__usage__V_8_8);
                  }
#line 7699 "recompilation.usage.c"
                  recompilation__usage__succeeded = (recompilation__usage__V_12_12 == (MR_Integer) 0);
#line 60 "recompilation.usage.m"
                  recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 60 "recompilation.usage.m"
                  if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                    *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_12_12;
#line 60 "recompilation.usage.m"
                  else
#line 60 "recompilation.usage.m"
                    {
#line 60 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_13_13;

#line 60 "recompilation.usage.m"
                      {
#line 60 "recompilation.usage.m"
                        mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__usage__V_13_13, recompilation__usage__V_64_64, recompilation__usage__V_9_9);
                      }
#line 7719 "recompilation.usage.c"
                      recompilation__usage__succeeded = (recompilation__usage__V_13_13 == (MR_Integer) 0);
#line 60 "recompilation.usage.m"
                      recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 60 "recompilation.usage.m"
                      if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                        *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_13_13;
#line 60 "recompilation.usage.m"
                      else
#line 60 "recompilation.usage.m"
                        {
#line 60 "recompilation.usage.m"
                          MR_Word recompilation__usage__V_14_14;
#line 60 "recompilation.usage.m"
                          MR_Integer recompilation__usage__V_66_66 = (MR_Integer) recompilation__usage__V_63_63;
#line 60 "recompilation.usage.m"
                          MR_Integer recompilation__usage__V_67_67 = (MR_Integer) recompilation__usage__V_10_10;

#line 60 "recompilation.usage.m"
                          {
#line 60 "recompilation.usage.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__usage__V_14_14, recompilation__usage__V_66_66, recompilation__usage__V_67_67);
                          }
#line 7743 "recompilation.usage.c"
                          recompilation__usage__succeeded = (recompilation__usage__V_14_14 == (MR_Integer) 0);
#line 60 "recompilation.usage.m"
                          recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 60 "recompilation.usage.m"
                          if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                            *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_14_14;
#line 60 "recompilation.usage.m"
                          else
#line 60 "recompilation.usage.m"
                            {
#line 60 "recompilation.usage.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_62_62, recompilation__usage__V_11_11);
#line 60 "recompilation.usage.m"
                              return;
                            }
#line 60 "recompilation.usage.m"
                        }
#line 60 "recompilation.usage.m"
                    }
#line 60 "recompilation.usage.m"
                }
#line 60 "recompilation.usage.m"
          }
#line 60 "recompilation.usage.m"
  }
#line 60 "recompilation.usage.m"
}

#line 60 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0(
#line 60 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 60 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 60 "recompilation.usage.m"
{
#line 60 "recompilation.usage.m"
  {
#line 60 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 60 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_17 = (MR_Integer) recompilation__usage__HeadVar__1_1;
#line 60 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_18 = (MR_Integer) recompilation__usage__HeadVar__2_2;

#line 60 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_17 == recompilation__usage__CastY_18);
#line 60 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
      recompilation__usage__succeeded = MR_TRUE;
#line 60 "recompilation.usage.m"
    else
#line 60 "recompilation.usage.m"
      if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 60 "recompilation.usage.m"
        {
#line 60 "recompilation.usage.m"
          MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
          MR_Word recompilation__usage__V_12_12;

#line 60 "recompilation.usage.m"
          recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 60 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
            {
#line 60 "recompilation.usage.m"
              recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 7816 "recompilation.usage.c"
              {
#line 7818 "recompilation.usage.c"
                return recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_11_11, recompilation__usage__V_12_12);
              }
#line 60 "recompilation.usage.m"
            }
#line 60 "recompilation.usage.m"
        }
#line 60 "recompilation.usage.m"
      else
#line 60 "recompilation.usage.m"
        if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 60 "recompilation.usage.m"
          {
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_15_15;
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_16_16;

#line 60 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 60 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
              {
#line 60 "recompilation.usage.m"
                recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
                recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 7850 "recompilation.usage.c"
                {
#line 7852 "recompilation.usage.c"
                  recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_13_13, recompilation__usage__V_15_15);
                }
#line 60 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 7857 "recompilation.usage.c"
                  {
#line 7859 "recompilation.usage.c"
                    return recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_14_14, recompilation__usage__V_16_16);
                  }
#line 60 "recompilation.usage.m"
              }
#line 60 "recompilation.usage.m"
          }
#line 60 "recompilation.usage.m"
        else
#line 60 "recompilation.usage.m"
          {
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 60 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_7_7;
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_8_8;
#line 60 "recompilation.usage.m"
            MR_Word recompilation__usage__V_9_9;
#line 60 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_10_10;

#line 60 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 60 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
              {
#line 60 "recompilation.usage.m"
                recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "recompilation.usage.m"
                recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "recompilation.usage.m"
                recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 60 "recompilation.usage.m"
                recompilation__usage__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 7901 "recompilation.usage.c"
                {
#line 7903 "recompilation.usage.c"
                  recompilation__usage__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(recompilation__usage__V_3_3, recompilation__usage__V_7_7);
                }
#line 60 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                  {
#line 7910 "recompilation.usage.c"
                    {
#line 7912 "recompilation.usage.c"
                      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__V_4_4, recompilation__usage__V_8_8);
                    }
#line 60 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 60 "recompilation.usage.m"
                      {
#line 7919 "recompilation.usage.c"
                        recompilation__usage__succeeded = (recompilation__usage__V_5_5 == recompilation__usage__V_9_9);
#line 60 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 7923 "recompilation.usage.c"
                          recompilation__usage__succeeded = (recompilation__usage__V_6_6 == recompilation__usage__V_10_10);
#line 60 "recompilation.usage.m"
                      }
#line 60 "recompilation.usage.m"
                  }
#line 60 "recompilation.usage.m"
              }
#line 60 "recompilation.usage.m"
          }
#line 60 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 60 "recompilation.usage.m"
  }
#line 60 "recompilation.usage.m"
}

#line 824 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 824 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 824 "recompilation.usage.m"
{
#line 824 "recompilation.usage.m"
  {
#line 824 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 824 "recompilation.usage.m"
    {
#line 824 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2, recompilation__usage__HeadVar__3_3);
#line 824 "recompilation.usage.m"
      return;
    }
#line 824 "recompilation.usage.m"
  }
#line 824 "recompilation.usage.m"
}

#line 824 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 824 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 824 "recompilation.usage.m"
{
#line 824 "recompilation.usage.m"
  {
#line 824 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 824 "recompilation.usage.m"
    {
#line 824 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2);
    }
#line 824 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 824 "recompilation.usage.m"
  }
#line 824 "recompilation.usage.m"
}

#line 496 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
#line 496 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 496 "recompilation.usage.m"
{
#line 496 "recompilation.usage.m"
  {
#line 496 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 496 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_24 = (MR_Integer) recompilation__usage__HeadVar__2_2;
#line 496 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_25 = (MR_Integer) recompilation__usage__HeadVar__3_3;

#line 496 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_24 == recompilation__usage__CastY_25);
#line 496 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 8022 "recompilation.usage.c"
      *recompilation__usage__HeadVar__1_1 = (MR_Integer) 0;
#line 496 "recompilation.usage.m"
    else
#line 496 "recompilation.usage.m"
      {
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 4)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 5)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 6)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 2)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 3)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 4)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 5)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 6)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;

#line 496 "recompilation.usage.m"
        {
#line 496 "recompilation.usage.m"
          hlds__hlds_module____Compare____module_info_0_0(&recompilation__usage__V_18_18, recompilation__usage__V_4_4, recompilation__usage__V_11_11);
        }
#line 8064 "recompilation.usage.c"
        recompilation__usage__succeeded = (recompilation__usage__V_18_18 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
        recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
          *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_18_18;
#line 496 "recompilation.usage.m"
        else
#line 496 "recompilation.usage.m"
          {
#line 496 "recompilation.usage.m"
            MR_Word recompilation__usage__V_19_19;

#line 496 "recompilation.usage.m"
            {
#line 496 "recompilation.usage.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[11], &recompilation__usage__V_19_19, ((MR_Box) (recompilation__usage__V_5_5)), ((MR_Box) (recompilation__usage__V_12_12)));
            }
#line 8084 "recompilation.usage.c"
            recompilation__usage__succeeded = (recompilation__usage__V_19_19 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
            recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
              *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_19_19;
#line 496 "recompilation.usage.m"
            else
#line 496 "recompilation.usage.m"
              {
#line 496 "recompilation.usage.m"
                MR_Word recompilation__usage__V_20_20;

#line 496 "recompilation.usage.m"
                {
#line 496 "recompilation.usage.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], &recompilation__usage__V_20_20, ((MR_Box) (recompilation__usage__V_6_6)), ((MR_Box) (recompilation__usage__V_13_13)));
                }
#line 8104 "recompilation.usage.c"
                recompilation__usage__succeeded = (recompilation__usage__V_20_20 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
                recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                  *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_20_20;
#line 496 "recompilation.usage.m"
                else
#line 496 "recompilation.usage.m"
                  {
#line 496 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_21_21;

#line 496 "recompilation.usage.m"
                    {
#line 496 "recompilation.usage.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[14], &recompilation__usage__V_21_21, ((MR_Box) (recompilation__usage__V_7_7)), ((MR_Box) (recompilation__usage__V_14_14)));
                    }
#line 8124 "recompilation.usage.c"
                    recompilation__usage__succeeded = (recompilation__usage__V_21_21 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
                    recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                      *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_21_21;
#line 496 "recompilation.usage.m"
                    else
#line 496 "recompilation.usage.m"
                      {
#line 496 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_22_22;

#line 496 "recompilation.usage.m"
                        {
#line 496 "recompilation.usage.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[15], &recompilation__usage__V_22_22, ((MR_Box) (recompilation__usage__V_8_8)), ((MR_Box) (recompilation__usage__V_15_15)));
                        }
#line 8144 "recompilation.usage.c"
                        recompilation__usage__succeeded = (recompilation__usage__V_22_22 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
                        recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                          *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_22_22;
#line 496 "recompilation.usage.m"
                        else
#line 496 "recompilation.usage.m"
                          {
#line 496 "recompilation.usage.m"
                            MR_Word recompilation__usage__V_23_23;

#line 496 "recompilation.usage.m"
                            {
#line 496 "recompilation.usage.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], &recompilation__usage__V_23_23, ((MR_Box) (recompilation__usage__V_9_9)), ((MR_Box) (recompilation__usage__V_16_16)));
                            }
#line 8164 "recompilation.usage.c"
                            recompilation__usage__succeeded = (recompilation__usage__V_23_23 == (MR_Integer) 0);
#line 496 "recompilation.usage.m"
                            recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 496 "recompilation.usage.m"
                            if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                              *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_23_23;
#line 496 "recompilation.usage.m"
                            else
#line 496 "recompilation.usage.m"
                              {
#line 496 "recompilation.usage.m"
                                {
#line 496 "recompilation.usage.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__V_10_10)), ((MR_Box) (recompilation__usage__V_17_17)));
#line 496 "recompilation.usage.m"
                                  return;
                                }
#line 496 "recompilation.usage.m"
                              }
#line 496 "recompilation.usage.m"
                          }
#line 496 "recompilation.usage.m"
                      }
#line 496 "recompilation.usage.m"
                  }
#line 496 "recompilation.usage.m"
              }
#line 496 "recompilation.usage.m"
          }
#line 496 "recompilation.usage.m"
      }
#line 496 "recompilation.usage.m"
  }
#line 496 "recompilation.usage.m"
}

#line 496 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0(
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 496 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 496 "recompilation.usage.m"
{
#line 496 "recompilation.usage.m"
  {
#line 496 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 496 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_17 = (MR_Integer) recompilation__usage__HeadVar__1_1;
#line 496 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_18 = (MR_Integer) recompilation__usage__HeadVar__2_2;

#line 496 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_17 == recompilation__usage__CastY_18);
#line 496 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
      recompilation__usage__succeeded = MR_TRUE;
#line 496 "recompilation.usage.m"
    else
#line 496 "recompilation.usage.m"
      {
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_20_20;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_21_21;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_22_22;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_23_23;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_24_24;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_25_25;
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 4)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 5)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 4)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 5)));
#line 496 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 6)));

#line 8271 "recompilation.usage.c"
        {
#line 8273 "recompilation.usage.c"
          recompilation__usage__succeeded = hlds__hlds_module____Unify____module_info_0_0(recompilation__usage__V_3_3, recompilation__usage__V_10_10);
        }
#line 496 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
          {
#line 8280 "recompilation.usage.c"
            recompilation__usage__TypeInfo_20_20 = (MR_Word) &recompilation__usage_scalar_common_2[11];
#line 8282 "recompilation.usage.c"
            {
#line 8284 "recompilation.usage.c"
              recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_20_20, ((MR_Box) (recompilation__usage__V_4_4)), ((MR_Box) (recompilation__usage__V_11_11)));
            }
#line 496 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
              {
#line 8291 "recompilation.usage.c"
                recompilation__usage__TypeInfo_21_21 = (MR_Word) &recompilation__usage_scalar_common_1[13];
#line 8293 "recompilation.usage.c"
                {
#line 8295 "recompilation.usage.c"
                  recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_21_21, ((MR_Box) (recompilation__usage__V_5_5)), ((MR_Box) (recompilation__usage__V_12_12)));
                }
#line 496 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                  {
#line 8302 "recompilation.usage.c"
                    recompilation__usage__TypeInfo_22_22 = (MR_Word) &recompilation__usage_scalar_common_1[14];
#line 8304 "recompilation.usage.c"
                    {
#line 8306 "recompilation.usage.c"
                      recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_22_22, ((MR_Box) (recompilation__usage__V_6_6)), ((MR_Box) (recompilation__usage__V_13_13)));
                    }
#line 496 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                      {
#line 8313 "recompilation.usage.c"
                        recompilation__usage__TypeInfo_23_23 = (MR_Word) &recompilation__usage_scalar_common_1[15];
#line 8315 "recompilation.usage.c"
                        {
#line 8317 "recompilation.usage.c"
                          recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_23_23, ((MR_Box) (recompilation__usage__V_7_7)), ((MR_Box) (recompilation__usage__V_14_14)));
                        }
#line 496 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                          {
#line 8324 "recompilation.usage.c"
                            recompilation__usage__TypeInfo_24_24 = (MR_Word) &recompilation__usage_scalar_common_3[1];
#line 8326 "recompilation.usage.c"
                            {
#line 8328 "recompilation.usage.c"
                              recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_24_24, ((MR_Box) (recompilation__usage__V_8_8)), ((MR_Box) (recompilation__usage__V_15_15)));
                            }
#line 496 "recompilation.usage.m"
                            if (recompilation__usage__succeeded)
#line 496 "recompilation.usage.m"
                              {
#line 8335 "recompilation.usage.c"
                                recompilation__usage__TypeInfo_25_25 = (MR_Word) &recompilation__usage_scalar_common_2[1];
#line 8337 "recompilation.usage.c"
                                {
#line 8339 "recompilation.usage.c"
                                  return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_25_25, ((MR_Box) (recompilation__usage__V_9_9)), ((MR_Box) (recompilation__usage__V_16_16)));
                                }
#line 496 "recompilation.usage.m"
                              }
#line 496 "recompilation.usage.m"
                          }
#line 496 "recompilation.usage.m"
                      }
#line 496 "recompilation.usage.m"
                  }
#line 496 "recompilation.usage.m"
              }
#line 496 "recompilation.usage.m"
          }
#line 496 "recompilation.usage.m"
      }
#line 496 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 496 "recompilation.usage.m"
  }
#line 496 "recompilation.usage.m"
}

#line 514 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0(
#line 514 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 514 "recompilation.usage.m"
{
#line 514 "recompilation.usage.m"
  {
#line 514 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 514 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 514 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 514 "recompilation.usage.m"
    {
#line 514 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[0], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 514 "recompilation.usage.m"
      return;
    }
#line 514 "recompilation.usage.m"
  }
#line 514 "recompilation.usage.m"
}

#line 514 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 514 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 514 "recompilation.usage.m"
{
#line 514 "recompilation.usage.m"
  {
#line 514 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 514 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 514 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 514 "recompilation.usage.m"
    {
#line 514 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 514 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 514 "recompilation.usage.m"
  }
#line 514 "recompilation.usage.m"
}

#line 510 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
#line 510 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 510 "recompilation.usage.m"
{
#line 510 "recompilation.usage.m"
  {
#line 510 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 510 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 510 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 510 "recompilation.usage.m"
    {
#line 510 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 510 "recompilation.usage.m"
      return;
    }
#line 510 "recompilation.usage.m"
  }
#line 510 "recompilation.usage.m"
}

#line 510 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 510 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 510 "recompilation.usage.m"
{
#line 510 "recompilation.usage.m"
  {
#line 510 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 510 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 510 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 510 "recompilation.usage.m"
    {
#line 510 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 510 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 510 "recompilation.usage.m"
  }
#line 510 "recompilation.usage.m"
}

#line 516 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
#line 516 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 516 "recompilation.usage.m"
{
#line 516 "recompilation.usage.m"
  {
#line 516 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 516 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 516 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 516 "recompilation.usage.m"
    {
#line 516 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[0], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 516 "recompilation.usage.m"
      return;
    }
#line 516 "recompilation.usage.m"
  }
#line 516 "recompilation.usage.m"
}

#line 516 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 516 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 516 "recompilation.usage.m"
{
#line 516 "recompilation.usage.m"
  {
#line 516 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 516 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 516 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 516 "recompilation.usage.m"
    {
#line 516 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 516 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 516 "recompilation.usage.m"
  }
#line 516 "recompilation.usage.m"
}

#line 1509 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__Item_4,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1509 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1509 "recompilation.usage.m"
{
#line 1512 "recompilation.usage.m"
  {
#line 1512 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1512 "recompilation.usage.m"
    MR_Word recompilation__usage__DepItemType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_4, (MR_Integer) 0)));
#line 1512 "recompilation.usage.m"
    MR_Word recompilation__usage__DepItemId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_4, (MR_Integer) 1)));

#line 1514 "recompilation.usage.m"
    {
#line 1514 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0(recompilation__usage__DepItemType_6, recompilation__usage__DepItemId_7, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
#line 1514 "recompilation.usage.m"
      return;
    }
#line 1512 "recompilation.usage.m"
  }
#line 1509 "recompilation.usage.m"
}

#line 1503 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1503 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1503 "recompilation.usage.m"
{
#line 1503 "recompilation.usage.m"
  {
#line 1503 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1503 "recompilation.usage.m"
    {
#line 1503 "recompilation.usage.m"
      recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1503 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_9));
#line 1503 "recompilation.usage.m"
  }
#line 1503 "recompilation.usage.m"
}

#line 1495 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__NameArity_6,
#line 1495 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 1495 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11)
#line 1495 "recompilation.usage.m"
{
#line 1498 "recompilation.usage.m"
  {
#line 1498 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1498 "recompilation.usage.m"
    MR_Word recompilation__usage__Dependencies_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1499 "recompilation.usage.m"
    MR_Word recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1505 "recompilation.usage.m"
    MR_Word recompilation__usage__EquivTypes_9;
#line 1501 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 1501 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_EquivTypes_9;

#line 1501 "recompilation.usage.m"
    {
#line 1501 "recompilation.usage.m"
      recompilation__usage__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1501 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 0) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1501 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 1) = ((MR_Box) (recompilation__usage__NameArity_6));
#line 1501 "recompilation.usage.m"
    }
#line 1501 "recompilation.usage.m"
    {
#line 1501 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation__usage_scalar_common_2[10], recompilation__usage__Dependencies_8, ((MR_Box) (recompilation__usage__V_12_12)), &recompilation__usage__conv0_EquivTypes_9);
    }
#line 1501 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1501 "recompilation.usage.m"
      {
#line 1501 "recompilation.usage.m"
        recompilation__usage__EquivTypes_9 = ((MR_Word) recompilation__usage__conv0_EquivTypes_9);
#line 1501 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 1501 "recompilation.usage.m"
      }
#line 1505 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1503 "recompilation.usage.m"
      {
#line 1503 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 1503 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14;
#line 1503 "recompilation.usage.m"
        MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_11;

#line 1504 "recompilation.usage.m"
        {
#line 1504 "recompilation.usage.m"
          recompilation__usage__V_14_14 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_27_27, recompilation__usage__EquivTypes_9);
        }
#line 1503 "recompilation.usage.m"
        {
#line 1503 "recompilation.usage.m"
          mercury__list__foldl_4_p_0(recompilation__usage__TypeCtorInfo_27_27, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[59], recompilation__usage__V_14_14, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_10)), &recompilation__usage__conv2_STATE_VARIABLE_Info_11);
        }
#line 1503 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_11 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_11);
#line 1503 "recompilation.usage.m"
      }
#line 1505 "recompilation.usage.m"
    else
#line 1503 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_11 = recompilation__usage__STATE_VARIABLE_Info_0_10;
#line 1498 "recompilation.usage.m"
  }
#line 1495 "recompilation.usage.m"
}

#line 1467 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1467 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 1467 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22)
#line 1467 "recompilation.usage.m"
{
#line 1470 "recompilation.usage.m"
  {
#line 1470 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_46_46;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1470 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__Module_12;
#line 1470 "recompilation.usage.m"
    MR_String recompilation__usage__Name_13;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems0_14;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems1_16;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIds0_17;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIds_18;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems_19;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems_20;
#line 1470 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 1475 "recompilation.usage.m"
    MR_Word recompilation__usage__Module0_10;
#line 1475 "recompilation.usage.m"
    MR_String recompilation__usage__Name0_11;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34;
#line 1482 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems0_15;
#line 1480 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleItems0_15;
#line 1485 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleItemIds0_17;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;

#line 1472 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__SymName_8)) == (MR_mktag((MR_Integer) 1)));
#line 1472 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1472 "recompilation.usage.m"
      {
#line 1472 "recompilation.usage.m"
        recompilation__usage__Module0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__SymName_8, (MR_Integer) 0)));
#line 1472 "recompilation.usage.m"
        recompilation__usage__Name0_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__SymName_8, (MR_Integer) 1)));
#line 1473 "recompilation.usage.m"
        recompilation__usage__Module_12 = recompilation__usage__Module0_10;
#line 1474 "recompilation.usage.m"
        recompilation__usage__Name_13 = recompilation__usage__Name0_11;
#line 1472 "recompilation.usage.m"
      }
#line 1472 "recompilation.usage.m"
    else
#line 1476 "recompilation.usage.m"
      {
#line 1476 "recompilation.usage.m"
        {
#line 1476 "recompilation.usage.m"
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.record_imported_item\'/4", (MR_String) "unqualified item");
#line 1476 "recompilation.usage.m"
          return;
        }
#line 1476 "recompilation.usage.m"
      }
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__ImportedItems0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1479 "recompilation.usage.m"
    recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1480 "recompilation.usage.m"
    {
#line 1480 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], recompilation__usage__ImportedItems0_14, ((MR_Box) (recompilation__usage__Module_12)), &recompilation__usage__conv0_ModuleItems0_15);
    }
#line 1480 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1480 "recompilation.usage.m"
      {
#line 1480 "recompilation.usage.m"
        recompilation__usage__ModuleItems0_15 = ((MR_Word) recompilation__usage__conv0_ModuleItems0_15);
#line 1480 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 1480 "recompilation.usage.m"
      }
#line 1482 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1481 "recompilation.usage.m"
      recompilation__usage__ModuleItems1_16 = recompilation__usage__ModuleItems0_15;
#line 1482 "recompilation.usage.m"
    else
#line 1483 "recompilation.usage.m"
      {
#line 1483 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;

#line 1483 "recompilation.usage.m"
        {
#line 1483 "recompilation.usage.m"
          recompilation__usage__V_26_26 = mercury__set__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0]);
        }
#line 1483 "recompilation.usage.m"
        {
#line 1483 "recompilation.usage.m"
          recompilation__usage__ModuleItems1_16 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__V_26_26)));
        }
#line 1483 "recompilation.usage.m"
      }
#line 8869 "recompilation.usage.c"
    recompilation__usage__TypeInfo_46_46 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1485 "recompilation.usage.m"
    {
#line 1485 "recompilation.usage.m"
      recompilation__usage__conv1_ModuleItemIds0_17 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_46_46, recompilation__usage__ModuleItems1_16, recompilation__usage__ItemType_5);
    }
#line 1485 "recompilation.usage.m"
    recompilation__usage__ModuleItemIds0_17 = ((MR_Word) recompilation__usage__conv1_ModuleItemIds0_17);
#line 1486 "recompilation.usage.m"
    {
#line 1486 "recompilation.usage.m"
      recompilation__usage__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1486 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 0) = ((MR_Box) (recompilation__usage__Name_13));
#line 1486 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 1) = ((MR_Box) (recompilation__usage__Arity_9));
#line 1486 "recompilation.usage.m"
    }
#line 1486 "recompilation.usage.m"
    {
#line 1486 "recompilation.usage.m"
      mercury__set__insert_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], ((MR_Box) (recompilation__usage__V_27_27)), recompilation__usage__ModuleItemIds0_17, &recompilation__usage__ModuleItemIds_18);
    }
#line 1487 "recompilation.usage.m"
    {
#line 1487 "recompilation.usage.m"
      recompilation__usage__ModuleItems_19 = recompilation__update_ids_3_f_0(recompilation__usage__TypeInfo_46_46, recompilation__usage__ModuleItems1_16, recompilation__usage__ItemType_5, ((MR_Box) (recompilation__usage__ModuleItemIds_18)));
    }
#line 1488 "recompilation.usage.m"
    {
#line 1488 "recompilation.usage.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__Module_12)), ((MR_Box) (recompilation__usage__ModuleItems_19)), recompilation__usage__ImportedItems0_14, &recompilation__usage__ImportedItems_20);
    }
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1489 "recompilation.usage.m"
    recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1489 "recompilation.usage.m"
    {
#line 1489 "recompilation.usage.m"
      MR_Word base;
#line 1489 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_22 = base;
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_35_35));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_36_36));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__ImportedItems_20));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_38_38));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_39_39));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__V_40_40));
#line 1489 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1489 "recompilation.usage.m"
    }
#line 1470 "recompilation.usage.m"
  }
#line 1467 "recompilation.usage.m"
}

#line 1461 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
#line 1461 "recompilation.usage.m"
  MR_Word recompilation__usage__Info_3,
#line 1461 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_4)
#line 1461 "recompilation.usage.m"
{
#line 1463 "recompilation.usage.m"
  {
#line 1463 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_5;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_4, (MR_Integer) 0)));
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;
#line 1464 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_4, (MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
    MR_String recompilation__usage__V_6_6;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_14_14;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15;

#line 1464 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1464 "recompilation.usage.m"
      {
#line 1464 "recompilation.usage.m"
        recompilation__usage__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_8_8, (MR_Integer) 0)));
#line 1464 "recompilation.usage.m"
        recompilation__usage__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_8_8, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 0)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 2)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 3)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 4)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 5)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 6)));
#line 1465 "recompilation.usage.m"
        {
#line 1465 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_9_9, &recompilation__usage__V_16_16);
        }
#line 1465 "recompilation.usage.m"
        {
#line 1465 "recompilation.usage.m"
          return recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_5, recompilation__usage__V_16_16);
        }
#line 1464 "recompilation.usage.m"
      }
#line 1463 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 1463 "recompilation.usage.m"
  }
#line 1461 "recompilation.usage.m"
}

#line 1423 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1423 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1423 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13)
#line 1423 "recompilation.usage.m"
{
#line 1426 "recompilation.usage.m"
  {
#line 1426 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded = (recompilation__usage__ItemType_5 == (MR_Integer) 4);
#line 1426 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_21_64;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_22_65;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_23_66;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_24_67;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems_50;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_51;
#line 1454 "recompilation.usage.m"
    MR_String recompilation__usage__Name_52;
#line 1454 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_53;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleIdSet_54;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIdSet_55;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 1454 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 1455 "recompilation.usage.m"
    MR_Word recompilation__usage__V_63_63;
#line 1457 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleIdSet_54;
#line 1458 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleItemIdSet_55;

#line 1431 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1428 "recompilation.usage.m"
      {
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__Classes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__Classes_9;
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1428 "recompilation.usage.m"
        MR_Word recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_25_25;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_27_27;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_29_29;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30;
#line 1430 "recompilation.usage.m"
        MR_Word recompilation__usage__V_31_31;

#line 1429 "recompilation.usage.m"
        {
#line 1429 "recompilation.usage.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, ((MR_Box) (recompilation__usage__ItemName_6)), recompilation__usage__Classes0_8, &recompilation__usage__Classes_9);
        }
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1430 "recompilation.usage.m"
        recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1430 "recompilation.usage.m"
        {
#line 1430 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (recompilation__usage__V_26_26));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (recompilation__usage__V_27_27));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (recompilation__usage__V_28_28));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (recompilation__usage__V_29_29));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (recompilation__usage__V_30_30));
#line 1430 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (recompilation__usage__Classes_9));
#line 1430 "recompilation.usage.m"
        }
#line 1428 "recompilation.usage.m"
      }
#line 1431 "recompilation.usage.m"
    else
#line 1430 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_12;
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__ImportedItems_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1455 "recompilation.usage.m"
    recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1456 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1456 "recompilation.usage.m"
    recompilation__usage__Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1456 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 1456 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1456 "recompilation.usage.m"
      {
#line 1456 "recompilation.usage.m"
        recompilation__usage__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, (MR_Integer) 0)));
#line 1456 "recompilation.usage.m"
        recompilation__usage__Name_52 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, (MR_Integer) 1)));
#line 9195 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_21_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 9197 "recompilation.usage.c"
        recompilation__usage__TypeInfo_22_65 = (MR_Word) &recompilation__usage_scalar_common_3[0];
#line 1457 "recompilation.usage.m"
        {
#line 1457 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_21_64, recompilation__usage__TypeInfo_22_65, recompilation__usage__ImportedItems_50, ((MR_Box) (recompilation__usage__ModuleName_51)), &recompilation__usage__conv0_ModuleIdSet_54);
        }
#line 1457 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1457 "recompilation.usage.m"
          {
#line 1457 "recompilation.usage.m"
            recompilation__usage__ModuleIdSet_54 = ((MR_Word) recompilation__usage__conv0_ModuleIdSet_54);
#line 1457 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1457 "recompilation.usage.m"
          }
#line 1454 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1454 "recompilation.usage.m"
          {
#line 9218 "recompilation.usage.c"
            recompilation__usage__TypeInfo_23_66 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1458 "recompilation.usage.m"
            {
#line 1458 "recompilation.usage.m"
              recompilation__usage__conv1_ModuleItemIdSet_55 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_23_66, recompilation__usage__ModuleIdSet_54, recompilation__usage__ItemType_5);
            }
#line 1458 "recompilation.usage.m"
            recompilation__usage__ModuleItemIdSet_55 = ((MR_Word) recompilation__usage__conv1_ModuleItemIdSet_55);
#line 9227 "recompilation.usage.c"
            recompilation__usage__TypeInfo_24_67 = (MR_Word) &recompilation__usage_scalar_common_1[0];
#line 1459 "recompilation.usage.m"
            {
#line 1459 "recompilation.usage.m"
              recompilation__usage__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_57_57, 0) = ((MR_Box) (recompilation__usage__Name_52));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_57_57, 1) = ((MR_Box) (recompilation__usage__Arity_53));
#line 1459 "recompilation.usage.m"
            }
#line 1459 "recompilation.usage.m"
            {
#line 1459 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__set__member_2_p_0(recompilation__usage__TypeInfo_24_67, ((MR_Box) (recompilation__usage__V_57_57)), recompilation__usage__ModuleItemIdSet_55);
            }
#line 1454 "recompilation.usage.m"
          }
#line 1456 "recompilation.usage.m"
      }
#line 1438 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1435 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_13 = recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1438 "recompilation.usage.m"
    else
#line 1442 "recompilation.usage.m"
      {
#line 1463 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleName_70;
#line 1463 "recompilation.usage.m"
        MR_Word recompilation__usage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1463 "recompilation.usage.m"
        MR_Word recompilation__usage__V_74_74;
#line 1463 "recompilation.usage.m"
        MR_Word recompilation__usage__V_81_81;
#line 1464 "recompilation.usage.m"
        MR_Integer recompilation__usage__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
        MR_String recompilation__usage__V_71_71;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_75_75;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_76_76;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_77_77;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_78_78;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_79_79;
#line 1465 "recompilation.usage.m"
        MR_Word recompilation__usage__V_80_80;

#line 1464 "recompilation.usage.m"
        recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1464 "recompilation.usage.m"
          {
#line 1464 "recompilation.usage.m"
            recompilation__usage__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_73_73, (MR_Integer) 0)));
#line 1464 "recompilation.usage.m"
            recompilation__usage__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_73_73, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1465 "recompilation.usage.m"
            recompilation__usage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1465 "recompilation.usage.m"
            {
#line 1465 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_74_74, &recompilation__usage__V_81_81);
            }
#line 1465 "recompilation.usage.m"
            {
#line 1465 "recompilation.usage.m"
              recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_70, recompilation__usage__V_81_81);
            }
#line 1464 "recompilation.usage.m"
          }
#line 1442 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1438 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_13 = recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1442 "recompilation.usage.m"
        else
#line 1443 "recompilation.usage.m"
          {
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__Queue0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__Queue_11;
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_15_15;
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_16_16;
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1443 "recompilation.usage.m"
            MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_38_38;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_40_40;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_41_41;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_42_42;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_43_43;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_44_44;
#line 1445 "recompilation.usage.m"
            MR_Word recompilation__usage__V_39_39;

#line 1444 "recompilation.usage.m"
            {
#line 1444 "recompilation.usage.m"
              recompilation__usage__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 0) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1444 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 1) = ((MR_Box) (recompilation__usage__ItemName_6));
#line 1444 "recompilation.usage.m"
            }
#line 1444 "recompilation.usage.m"
            {
#line 1444 "recompilation.usage.m"
              mercury__queue__put_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__usage__V_15_15)), recompilation__usage__Queue0_10, &recompilation__usage__Queue_11);
            }
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1445 "recompilation.usage.m"
            recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1445 "recompilation.usage.m"
            {
#line 1445 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (recompilation__usage__V_38_38));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (recompilation__usage__Queue_11));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (recompilation__usage__V_40_40));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (recompilation__usage__V_42_42));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (recompilation__usage__V_43_43));
#line 1445 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (recompilation__usage__V_44_44));
#line 1445 "recompilation.usage.m"
            }
#line 1447 "recompilation.usage.m"
            {
#line 1447 "recompilation.usage.m"
              recompilation__usage__record_imported_item_4_p_0(recompilation__usage__ItemType_5, recompilation__usage__ItemName_6, recompilation__usage__STATE_VARIABLE_Info_16_16, &recompilation__usage__STATE_VARIABLE_Info_17_17);
            }
#line 1448 "recompilation.usage.m"
            {
#line 1448 "recompilation.usage.m"
              recompilation__usage__record_expanded_items_used_by_item_4_p_0(recompilation__usage__ItemType_5, recompilation__usage__ItemName_6, recompilation__usage__STATE_VARIABLE_Info_17_17, recompilation__usage__STATE_VARIABLE_Info_13);
#line 1448 "recompilation.usage.m"
              return;
            }
#line 1443 "recompilation.usage.m"
          }
#line 1442 "recompilation.usage.m"
      }
#line 1426 "recompilation.usage.m"
  }
#line 1423 "recompilation.usage.m"
}

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1274 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1274 "recompilation.usage.m"
  }
#line 1274 "recompilation.usage.m"
}

#line 1414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
#line 1414 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1414 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1414 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1414 "recompilation.usage.m"
{
#line 1417 "recompilation.usage.m"
  {
#line 1417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgTypes_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1417 "recompilation.usage.m"
    MR_Integer recompilation__usage__ClassArity_7;
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_12_12;
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1418 "recompilation.usage.m"
    {
#line 1418 "recompilation.usage.m"
      recompilation__usage__ClassArity_7 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__ArgTypes_5);
    }
#line 1420 "recompilation.usage.m"
    {
#line 1420 "recompilation.usage.m"
      recompilation__usage__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 0) = ((MR_Box) (recompilation__usage__ClassName_4));
#line 1420 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 1) = ((MR_Box) (recompilation__usage__ClassArity_7));
#line 1420 "recompilation.usage.m"
    }
#line 1419 "recompilation.usage.m"
    {
#line 1419 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, recompilation__usage__V_11_11, recompilation__usage__STATE_VARIABLE_Info_0_8, &recompilation__usage__STATE_VARIABLE_Info_12_12);
    }
#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[58], recompilation__usage__ArgTypes_5, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_12_12)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1417 "recompilation.usage.m"
  }
#line 1414 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1408 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
#line 1408 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraints_4,
#line 1408 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1408 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1408 "recompilation.usage.m"
{
#line 1411 "recompilation.usage.m"
  {
#line 1411 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[57], recompilation__usage__Constraints_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1411 "recompilation.usage.m"
  }
#line 1408 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1400 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
#line 1400 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1400 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1400 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8)
#line 1400 "recompilation.usage.m"
{
#line 1404 "recompilation.usage.m"
  {
#line 1404 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1404 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1404 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1404 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_9_9;
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9_9;
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_8;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[55], recompilation__usage__Constraints1_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_7)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9_9);
    }
#line 1412 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_9_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9_9);
#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[56], recompilation__usage__Constraints2_5, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_9_9)), &recompilation__usage__conv3_STATE_VARIABLE_Info_8);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_8 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_8);
#line 1404 "recompilation.usage.m"
  }
#line 1400 "recompilation.usage.m"
}

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1319 "recompilation.usage.m"
{
#line 1319 "recompilation.usage.m"
  {
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1319 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1319 "recompilation.usage.m"
  }
#line 1319 "recompilation.usage.m"
}

#line 1369 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
#line 1369 "recompilation.usage.m"
  MR_Word recompilation__usage__InstName_4,
#line 1369 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_22,
#line 1369 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_23)
#line 1369 "recompilation.usage.m"
{
#line 1374 "recompilation.usage.m"
  while (MR_TRUE)
#line 1374 "recompilation.usage.m"
    {
#line 1374 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 1374 "recompilation.usage.m"
      {
#line 1374 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;

#line 1374 "recompilation.usage.m"
        if (((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 1))))
#line 1381 "recompilation.usage.m"
          {
#line 1381 "recompilation.usage.m"
            MR_Word recompilation__usage__Inst1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1381 "recompilation.usage.m"
            MR_Word recompilation__usage__Inst2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1381 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;

#line 1382 "recompilation.usage.m"
            {
#line 1382 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst1_9, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_28_28);
            }
#line 1383 "recompilation.usage.m"
            {
#line 1383 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst2_10, recompilation__usage__STATE_VARIABLE_Info_28_28, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1383 "recompilation.usage.m"
              return;
            }
#line 1381 "recompilation.usage.m"
          }
#line 1374 "recompilation.usage.m"
        else
#line 1374 "recompilation.usage.m"
          if (((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 2))))
#line 1381 "recompilation.usage.m"
            {
#line 1381 "recompilation.usage.m"
              MR_Word recompilation__usage__Inst1_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1381 "recompilation.usage.m"
              MR_Word recompilation__usage__Inst2_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1381 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_28_42;
#line 1380 "recompilation.usage.m"
              MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1380 "recompilation.usage.m"
              MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 3)));

#line 1382 "recompilation.usage.m"
              {
#line 1382 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst1_40, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_28_42);
              }
#line 1383 "recompilation.usage.m"
              {
#line 1383 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst2_41, recompilation__usage__STATE_VARIABLE_Info_28_42, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1383 "recompilation.usage.m"
                return;
              }
#line 1381 "recompilation.usage.m"
            }
#line 1374 "recompilation.usage.m"
          else
#line 1374 "recompilation.usage.m"
            if (((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 0))))
#line 1374 "recompilation.usage.m"
              {
#line 1374 "recompilation.usage.m"
                MR_Word recompilation__usage__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1374 "recompilation.usage.m"
                MR_Word recompilation__usage__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1374 "recompilation.usage.m"
                MR_Integer recompilation__usage__Arity_8;
#line 1374 "recompilation.usage.m"
                MR_Word recompilation__usage__V_31_31;
#line 1374 "recompilation.usage.m"
                MR_Word recompilation__usage__STATE_VARIABLE_Info_32_32;
#line 1319 "recompilation.usage.m"
                MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_23;

#line 1375 "recompilation.usage.m"
                {
#line 1375 "recompilation.usage.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_7, &recompilation__usage__Arity_8);
                }
#line 1376 "recompilation.usage.m"
                {
#line 1376 "recompilation.usage.m"
                  recompilation__usage__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_31_31, 0) = ((MR_Box) (recompilation__usage__Name_6));
#line 1376 "recompilation.usage.m"
                  MR_hl_field(MR_mktag(0), recompilation__usage__V_31_31, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1376 "recompilation.usage.m"
                }
#line 1376 "recompilation.usage.m"
                {
#line 1376 "recompilation.usage.m"
                  recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, recompilation__usage__V_31_31, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_32_32);
                }
#line 1319 "recompilation.usage.m"
                {
#line 1319 "recompilation.usage.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[54], recompilation__usage__ArgInsts_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_32_32)), &recompilation__usage__conv1_STATE_VARIABLE_Info_23);
                }
#line 1319 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_23 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_23);
#line 1374 "recompilation.usage.m"
              }
#line 1374 "recompilation.usage.m"
            else
#line 1374 "recompilation.usage.m"
              if (((((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1389 "recompilation.usage.m"
                {
#line 1389 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1386 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 1386 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 1386 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1390 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1390 "recompilation.usage.m"
                  {
#line 1390 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_13;

#line 1390 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1390 "recompilation.usage.m"
                  }
#line 1390 "recompilation.usage.m"
                  continue;
#line 1389 "recompilation.usage.m"
                }
#line 1374 "recompilation.usage.m"
              else
#line 1374 "recompilation.usage.m"
                if (((((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1389 "recompilation.usage.m"
                  {
#line 1389 "recompilation.usage.m"
                    MR_Word recompilation__usage__SubInstName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1385 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 1385 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 1385 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1390 "recompilation.usage.m"
                    /* direct tailcall eliminated */
#line 1390 "recompilation.usage.m"
                    {
#line 1390 "recompilation.usage.m"
                      MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_37;

#line 1390 "recompilation.usage.m"
                      recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1390 "recompilation.usage.m"
                    }
#line 1390 "recompilation.usage.m"
                    continue;
#line 1389 "recompilation.usage.m"
                  }
#line 1374 "recompilation.usage.m"
                else
#line 1374 "recompilation.usage.m"
                  if (((((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1389 "recompilation.usage.m"
                    {
#line 1389 "recompilation.usage.m"
                      MR_Word recompilation__usage__SubInstName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1390 "recompilation.usage.m"
                      /* direct tailcall eliminated */
#line 1390 "recompilation.usage.m"
                      {
#line 1390 "recompilation.usage.m"
                        MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_38;

#line 1390 "recompilation.usage.m"
                        recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1390 "recompilation.usage.m"
                      }
#line 1390 "recompilation.usage.m"
                      continue;
#line 1389 "recompilation.usage.m"
                    }
#line 1374 "recompilation.usage.m"
                  else
#line 1374 "recompilation.usage.m"
                    if (((((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1389 "recompilation.usage.m"
                      {
#line 1389 "recompilation.usage.m"
                        MR_Word recompilation__usage__SubInstName_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1390 "recompilation.usage.m"
                        /* direct tailcall eliminated */
#line 1390 "recompilation.usage.m"
                        {
#line 1390 "recompilation.usage.m"
                          MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_39;

#line 1390 "recompilation.usage.m"
                          recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1390 "recompilation.usage.m"
                        }
#line 1390 "recompilation.usage.m"
                        continue;
#line 1389 "recompilation.usage.m"
                      }
#line 1374 "recompilation.usage.m"
                    else
#line 1374 "recompilation.usage.m"
                      if (((((MR_tag((MR_Word) recompilation__usage__InstName_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1392 "recompilation.usage.m"
                        {
#line 1392 "recompilation.usage.m"
                          MR_Word recompilation__usage__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1392 "recompilation.usage.m"
                          MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1393 "recompilation.usage.m"
                          {
#line 1393 "recompilation.usage.m"
                            recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_21, recompilation__usage__STATE_VARIABLE_Info_0_22, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1393 "recompilation.usage.m"
                            return;
                          }
#line 1392 "recompilation.usage.m"
                        }
#line 1374 "recompilation.usage.m"
                      else
#line 1395 "recompilation.usage.m"
                        {
#line 1395 "recompilation.usage.m"
                          MR_Word recompilation__usage__STATE_VARIABLE_Info_24_24;
#line 1395 "recompilation.usage.m"
                          MR_Word recompilation__usage__SubInstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1395 "recompilation.usage.m"
                          MR_Word recompilation__usage__Type_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1396 "recompilation.usage.m"
                          {
#line 1396 "recompilation.usage.m"
                            recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_35, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_24_24);
                          }
#line 1397 "recompilation.usage.m"
                          /* direct tailcall eliminated */
#line 1397 "recompilation.usage.m"
                          {
#line 1397 "recompilation.usage.m"
                            MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_34;
#line 1397 "recompilation.usage.m"
                            MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_22 = recompilation__usage__STATE_VARIABLE_Info_24_24;

#line 1397 "recompilation.usage.m"
                            recompilation__usage__STATE_VARIABLE_Info_0_22 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_22;
#line 1397 "recompilation.usage.m"
                            recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1397 "recompilation.usage.m"
                          }
#line 1397 "recompilation.usage.m"
                          continue;
#line 1395 "recompilation.usage.m"
                        }
#line 1374 "recompilation.usage.m"
      }
#line 1374 "recompilation.usage.m"
      break;
#line 1374 "recompilation.usage.m"
    }
#line 1369 "recompilation.usage.m"
}

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1319 "recompilation.usage.m"
{
#line 1319 "recompilation.usage.m"
  {
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1319 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1319 "recompilation.usage.m"
  }
#line 1319 "recompilation.usage.m"
}

#line 1357 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
#line 1357 "recompilation.usage.m"
  MR_Word recompilation__usage__BoundInst_4,
#line 1357 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1357 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1357 "recompilation.usage.m"
{
#line 1360 "recompilation.usage.m"
  {
#line 1360 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1360 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__BoundInst_4, (MR_Integer) 0)));
#line 1360 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__BoundInst_4, (MR_Integer) 1)));
#line 1360 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1364 "recompilation.usage.m"
    MR_Word recompilation__usage__Name_8;
#line 1364 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9;
#line 1362 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1362 "recompilation.usage.m"
    recompilation__usage__succeeded = ((((MR_tag((MR_Word) recompilation__usage__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1362 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1362 "recompilation.usage.m"
      {
#line 1362 "recompilation.usage.m"
        recompilation__usage__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 1)));
#line 1362 "recompilation.usage.m"
        recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 2)));
#line 1362 "recompilation.usage.m"
        recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 3)));
#line 1363 "recompilation.usage.m"
        {
#line 1363 "recompilation.usage.m"
          MR_Word recompilation__usage__ItemSet0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1363 "recompilation.usage.m"
          MR_Word recompilation__usage__IdSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 5)));
#line 1363 "recompilation.usage.m"
          MR_Word recompilation__usage__IdSet_23;
#line 1363 "recompilation.usage.m"
          MR_Word recompilation__usage__ItemSet_24;
#line 1363 "recompilation.usage.m"
          MR_Word recompilation__usage__STATE_VARIABLE_Info_14_26;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 0)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 1)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 2)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 3)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 4)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 6)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 7)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 8)));
#line 703 "recompilation.usage.m"
          MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 9)));
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_43_43;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_44_44;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_45_45;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_46_46;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_47_47;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_49_49;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_50_50;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_51_51;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_52_52;
#line 706 "recompilation.usage.m"
          MR_Word recompilation__usage__V_48_48;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_53_53;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_54_54;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_55_55;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_56_56;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_57_57;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_59_59;
#line 707 "recompilation.usage.m"
          MR_Word recompilation__usage__V_58_58;

#line 704 "recompilation.usage.m"
          {
#line 704 "recompilation.usage.m"
            recompilation__usage__record_resolved_item__ho1_7_p_0(recompilation__usage__Name_8, recompilation__usage__Arity_9, recompilation__usage__IdSet0_22, &recompilation__usage__IdSet_23, recompilation__usage__STATE_VARIABLE_Info_0_11, &recompilation__usage__STATE_VARIABLE_Info_14_26);
          }
#line 706 "recompilation.usage.m"
          recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 0)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 1)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 2)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 3)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 4)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 5)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 6)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 7)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 8)));
#line 706 "recompilation.usage.m"
          recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 9)));
#line 706 "recompilation.usage.m"
          {
#line 706 "recompilation.usage.m"
            recompilation__usage__ItemSet_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 0) = ((MR_Box) (recompilation__usage__V_43_43));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 1) = ((MR_Box) (recompilation__usage__V_44_44));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 2) = ((MR_Box) (recompilation__usage__V_45_45));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 3) = ((MR_Box) (recompilation__usage__V_46_46));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 4) = ((MR_Box) (recompilation__usage__V_47_47));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 5) = ((MR_Box) (recompilation__usage__IdSet_23));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 6) = ((MR_Box) (recompilation__usage__V_49_49));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 7) = ((MR_Box) (recompilation__usage__V_50_50));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 8) = ((MR_Box) (recompilation__usage__V_51_51));
#line 706 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 9) = ((MR_Box) (recompilation__usage__V_52_52));
#line 706 "recompilation.usage.m"
          }
#line 707 "recompilation.usage.m"
          recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 0)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 1)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 2)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 3)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 4)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 5)));
#line 707 "recompilation.usage.m"
          recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 6)));
#line 707 "recompilation.usage.m"
          {
#line 707 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (recompilation__usage__V_53_53));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (recompilation__usage__V_54_54));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (recompilation__usage__V_55_55));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (recompilation__usage__V_56_56));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (recompilation__usage__V_57_57));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (recompilation__usage__ItemSet_24));
#line 707 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (recompilation__usage__V_59_59));
#line 707 "recompilation.usage.m"
          }
#line 1363 "recompilation.usage.m"
        }
#line 1362 "recompilation.usage.m"
      }
#line 1362 "recompilation.usage.m"
    else
#line 1363 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[53], recompilation__usage__ArgInsts_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_14_14)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1360 "recompilation.usage.m"
  }
#line 1357 "recompilation.usage.m"
}

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1301 "recompilation.usage.m"
{
#line 1301 "recompilation.usage.m"
  {
#line 1301 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_3;

#line 1301 "recompilation.usage.m"
    {
#line 1301 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_3);
    }
#line 1301 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_3));
#line 1301 "recompilation.usage.m"
  }
#line 1301 "recompilation.usage.m"
}

#line 1343 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1343 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1343 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1343 "recompilation.usage.m"
{
#line 1343 "recompilation.usage.m"
  {
#line 1343 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1343 "recompilation.usage.m"
    MR_Word recompilation__usage__conv4_STATE_VARIABLE_Info_12;

#line 1343 "recompilation.usage.m"
    {
#line 1343 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_bound_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv4_STATE_VARIABLE_Info_12);
    }
#line 1343 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv4_STATE_VARIABLE_Info_12));
#line 1343 "recompilation.usage.m"
  }
#line 1343 "recompilation.usage.m"
}

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1319 "recompilation.usage.m"
{
#line 1319 "recompilation.usage.m"
  {
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1319 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_25;

#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_25);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_25));
#line 1319 "recompilation.usage.m"
  }
#line 1319 "recompilation.usage.m"
}

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1301 "recompilation.usage.m"
{
#line 1301 "recompilation.usage.m"
  {
#line 1301 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_3;

#line 1301 "recompilation.usage.m"
    {
#line 1301 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_3);
    }
#line 1301 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_3));
#line 1301 "recompilation.usage.m"
  }
#line 1301 "recompilation.usage.m"
}

#line 1321 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
#line 1321 "recompilation.usage.m"
  MR_Word recompilation__usage__Inst_4,
#line 1321 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1321 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25)
#line 1321 "recompilation.usage.m"
{
#line 1326 "recompilation.usage.m"
  while (MR_TRUE)
#line 1326 "recompilation.usage.m"
    {
#line 1326 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 1326 "recompilation.usage.m"
      {
#line 1326 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;

#line 1326 "recompilation.usage.m"
        if ((recompilation__usage__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1327 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1326 "recompilation.usage.m"
        else
#line 1326 "recompilation.usage.m"
          if ((recompilation__usage__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1326 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1326 "recompilation.usage.m"
          else
#line 1326 "recompilation.usage.m"
            if (((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1334 "recompilation.usage.m"
              {
#line 1334 "recompilation.usage.m"
                MR_Word recompilation__usage__HOInstInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1332 "recompilation.usage.m"
                MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__Inst_4, (MR_Integer) 0)));

#line 1338 "recompilation.usage.m"
                if ((recompilation__usage__HOInstInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1339 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1338 "recompilation.usage.m"
                else
#line 1336 "recompilation.usage.m"
                  {
#line 1336 "recompilation.usage.m"
                    MR_Word recompilation__usage__Modes_12;
#line 1336 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_34_34 = (MR_Word) MR_body(((MR_Word) recompilation__usage__HOInstInfo_9), (MR_Integer) 1);
#line 1336 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 0)));
#line 1336 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_13_13;
#line 1336 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_14_14;
#line 1301 "recompilation.usage.m"
                    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_25;

#line 1336 "recompilation.usage.m"
                    recompilation__usage__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 1)));
#line 1336 "recompilation.usage.m"
                    recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 2)));
#line 1336 "recompilation.usage.m"
                    recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 3)));
#line 1301 "recompilation.usage.m"
                    {
#line 1301 "recompilation.usage.m"
                      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[49], recompilation__usage__Modes_12, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv1_STATE_VARIABLE_Info_25);
                    }
#line 1301 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_25);
#line 1336 "recompilation.usage.m"
                  }
#line 1334 "recompilation.usage.m"
              }
#line 1326 "recompilation.usage.m"
            else
#line 1326 "recompilation.usage.m"
              if (((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 1328 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1326 "recompilation.usage.m"
              else
#line 1326 "recompilation.usage.m"
                if (((((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1351 "recompilation.usage.m"
                  {
#line 1351 "recompilation.usage.m"
                    MR_Word recompilation__usage__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1351 "recompilation.usage.m"
                    MR_Word recompilation__usage__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1351 "recompilation.usage.m"
                    MR_Integer recompilation__usage__Arity_23;
#line 1351 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_27_27;
#line 1351 "recompilation.usage.m"
                    MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;
#line 1319 "recompilation.usage.m"
                    MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_25;

#line 1352 "recompilation.usage.m"
                    {
#line 1352 "recompilation.usage.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_22, &recompilation__usage__Arity_23);
                    }
#line 1353 "recompilation.usage.m"
                    {
#line 1353 "recompilation.usage.m"
                      recompilation__usage__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 0) = ((MR_Box) (recompilation__usage__Name_21));
#line 1353 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 1) = ((MR_Box) (recompilation__usage__Arity_23));
#line 1353 "recompilation.usage.m"
                    }
#line 1353 "recompilation.usage.m"
                    {
#line 1353 "recompilation.usage.m"
                      recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, recompilation__usage__V_27_27, recompilation__usage__STATE_VARIABLE_Info_0_24, &recompilation__usage__STATE_VARIABLE_Info_28_28);
                    }
#line 1319 "recompilation.usage.m"
                    {
#line 1319 "recompilation.usage.m"
                      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[50], recompilation__usage__ArgInsts_22, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_28_28)), &recompilation__usage__conv3_STATE_VARIABLE_Info_25);
                    }
#line 1319 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_25);
#line 1351 "recompilation.usage.m"
                  }
#line 1326 "recompilation.usage.m"
                else
#line 1326 "recompilation.usage.m"
                  if (((((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1342 "recompilation.usage.m"
                    {
#line 1342 "recompilation.usage.m"
                      MR_Word recompilation__usage__BoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 3)));
#line 1342 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1342 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1343 "recompilation.usage.m"
                      MR_Box recompilation__usage__conv5_STATE_VARIABLE_Info_25;

#line 1343 "recompilation.usage.m"
                      {
#line 1343 "recompilation.usage.m"
                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[51], recompilation__usage__BoundInsts_17, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv5_STATE_VARIABLE_Info_25);
                      }
#line 1343 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv5_STATE_VARIABLE_Info_25);
#line 1342 "recompilation.usage.m"
                    }
#line 1326 "recompilation.usage.m"
                  else
#line 1326 "recompilation.usage.m"
                    if (((((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1345 "recompilation.usage.m"
                      {
#line 1345 "recompilation.usage.m"
                        MR_Word recompilation__usage__SubInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1345 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1346 "recompilation.usage.m"
                        /* direct tailcall eliminated */
#line 1346 "recompilation.usage.m"
                        {
#line 1346 "recompilation.usage.m"
                          MR_Word recompilation__usage__Inst__tmp_copy_4 = recompilation__usage__SubInst_19;

#line 1346 "recompilation.usage.m"
                          recompilation__usage__Inst_4 = recompilation__usage__Inst__tmp_copy_4;
#line 1346 "recompilation.usage.m"
                        }
#line 1346 "recompilation.usage.m"
                        continue;
#line 1345 "recompilation.usage.m"
                      }
#line 1326 "recompilation.usage.m"
                    else
#line 1326 "recompilation.usage.m"
                      if (((((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1348 "recompilation.usage.m"
                        {
#line 1348 "recompilation.usage.m"
                          MR_Word recompilation__usage__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1349 "recompilation.usage.m"
                          {
#line 1349 "recompilation.usage.m"
                            recompilation__usage__find_items_used_by_inst_name_3_p_0(recompilation__usage__InstName_20, recompilation__usage__STATE_VARIABLE_Info_0_24, recompilation__usage__STATE_VARIABLE_Info_25);
#line 1349 "recompilation.usage.m"
                            return;
                          }
#line 1348 "recompilation.usage.m"
                        }
#line 1326 "recompilation.usage.m"
                      else
#line 1326 "recompilation.usage.m"
                        if (((((MR_tag((MR_Word) recompilation__usage__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1334 "recompilation.usage.m"
                          {
#line 1334 "recompilation.usage.m"
                            MR_Word recompilation__usage__HOInstInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1333 "recompilation.usage.m"
                            MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1338 "recompilation.usage.m"
                            if ((recompilation__usage__HOInstInfo_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1339 "recompilation.usage.m"
                              *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1338 "recompilation.usage.m"
                            else
#line 1336 "recompilation.usage.m"
                              {
#line 1336 "recompilation.usage.m"
                                MR_Word recompilation__usage__Modes_46;
#line 1336 "recompilation.usage.m"
                                MR_Word recompilation__usage__V_49_49 = (MR_Word) MR_body(((MR_Word) recompilation__usage__HOInstInfo_55), (MR_Integer) 1);
#line 1336 "recompilation.usage.m"
                                MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 0)));
#line 1336 "recompilation.usage.m"
                                MR_Word recompilation__usage__V_43_43;
#line 1336 "recompilation.usage.m"
                                MR_Word recompilation__usage__V_44_44;
#line 1301 "recompilation.usage.m"
                                MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_25;

#line 1336 "recompilation.usage.m"
                                recompilation__usage__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 1)));
#line 1336 "recompilation.usage.m"
                                recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 2)));
#line 1336 "recompilation.usage.m"
                                recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 3)));
#line 1301 "recompilation.usage.m"
                                {
#line 1301 "recompilation.usage.m"
                                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[52], recompilation__usage__Modes_46, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv7_STATE_VARIABLE_Info_25);
                                }
#line 1301 "recompilation.usage.m"
                                *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_25);
#line 1336 "recompilation.usage.m"
                              }
#line 1334 "recompilation.usage.m"
                          }
#line 1326 "recompilation.usage.m"
                        else
#line 1329 "recompilation.usage.m"
                          *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1326 "recompilation.usage.m"
      }
#line 1326 "recompilation.usage.m"
      break;
#line 1326 "recompilation.usage.m"
    }
#line 1321 "recompilation.usage.m"
}

#line 1319 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0_1(
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1319 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1319 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1319 "recompilation.usage.m"
{
#line 1319 "recompilation.usage.m"
  {
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1319 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1319 "recompilation.usage.m"
  }
#line 1319 "recompilation.usage.m"
}

#line 1315 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0(
#line 1315 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1315 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1315 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1315 "recompilation.usage.m"
{
#line 1318 "recompilation.usage.m"
  {
#line 1318 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1319 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1319 "recompilation.usage.m"
    {
#line 1319 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[48], recompilation__usage__Modes_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1319 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1318 "recompilation.usage.m"
  }
#line 1315 "recompilation.usage.m"
}

#line 1303 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
#line 1303 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1303 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1303 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1303 "recompilation.usage.m"
{
#line 1306 "recompilation.usage.m"
  {
#line 1306 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1306 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1306 "recompilation.usage.m"
      {
#line 1306 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1306 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1306 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_9_9;

#line 1307 "recompilation.usage.m"
        {
#line 1307 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst1_4, recompilation__usage__STATE_VARIABLE_Info_0_2, &recompilation__usage__STATE_VARIABLE_Info_9_9);
        }
#line 1308 "recompilation.usage.m"
        {
#line 1308 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst2_5, recompilation__usage__STATE_VARIABLE_Info_9_9, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1308 "recompilation.usage.m"
          return;
        }
#line 1306 "recompilation.usage.m"
      }
#line 1306 "recompilation.usage.m"
    else
#line 1309 "recompilation.usage.m"
      {
#line 1309 "recompilation.usage.m"
        MR_Word recompilation__usage__ModeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "recompilation.usage.m"
        MR_Word recompilation__usage__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "recompilation.usage.m"
        MR_Integer recompilation__usage__ModeArity_14;
#line 1309 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;
#line 1309 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_19_19;

#line 1310 "recompilation.usage.m"
        {
#line 1310 "recompilation.usage.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_12, &recompilation__usage__ModeArity_14);
        }
#line 1311 "recompilation.usage.m"
        {
#line 1311 "recompilation.usage.m"
          recompilation__usage__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_18_18, 0) = ((MR_Box) (recompilation__usage__ModeName_11));
#line 1311 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_18_18, 1) = ((MR_Box) (recompilation__usage__ModeArity_14));
#line 1311 "recompilation.usage.m"
        }
#line 1311 "recompilation.usage.m"
        {
#line 1311 "recompilation.usage.m"
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 2, recompilation__usage__V_18_18, recompilation__usage__STATE_VARIABLE_Info_0_2, &recompilation__usage__STATE_VARIABLE_Info_19_19);
        }
#line 1313 "recompilation.usage.m"
        {
#line 1313 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_insts_3_p_0(recompilation__usage__ArgInsts_12, recompilation__usage__STATE_VARIABLE_Info_19_19, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1313 "recompilation.usage.m"
          return;
        }
#line 1309 "recompilation.usage.m"
      }
#line 1306 "recompilation.usage.m"
  }
#line 1303 "recompilation.usage.m"
}

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0_1(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1301 "recompilation.usage.m"
{
#line 1301 "recompilation.usage.m"
  {
#line 1301 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_3;

#line 1301 "recompilation.usage.m"
    {
#line 1301 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_3);
    }
#line 1301 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_3));
#line 1301 "recompilation.usage.m"
  }
#line 1301 "recompilation.usage.m"
}

#line 1297 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0(
#line 1297 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1297 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1297 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1297 "recompilation.usage.m"
{
#line 1300 "recompilation.usage.m"
  {
#line 1300 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1301 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1301 "recompilation.usage.m"
    {
#line 1301 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[47], recompilation__usage__Modes_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1301 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1300 "recompilation.usage.m"
  }
#line 1297 "recompilation.usage.m"
}

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1274 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1274 "recompilation.usage.m"
  }
#line 1274 "recompilation.usage.m"
}

#line 1276 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
#line 1276 "recompilation.usage.m"
  MR_Word recompilation__usage__Type_4,
#line 1276 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1276 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1276 "recompilation.usage.m"
{
#line 1293 "recompilation.usage.m"
  {
#line 1293 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1293 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_6;
#line 1293 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeArgs_7;

#line 1280 "recompilation.usage.m"
    {
#line 1280 "recompilation.usage.m"
      recompilation__usage__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(recompilation__usage__Type_4, &recompilation__usage__TypeCtor_6, &recompilation__usage__TypeArgs_7);
    }
#line 1293 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1291 "recompilation.usage.m"
      {
#line 1291 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_19_19;
#line 1283 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeCtor_6, (MR_Integer) 0)));
#line 1283 "recompilation.usage.m"
        MR_Integer recompilation__usage__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeCtor_6, (MR_Integer) 1)));
#line 1283 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8;
#line 1283 "recompilation.usage.m"
        MR_String recompilation__usage__V_9_9;
#line 1284 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11;
#line 1284 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12;
#line 1274 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_16;

#line 1283 "recompilation.usage.m"
        recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1283 "recompilation.usage.m"
          {
#line 1283 "recompilation.usage.m"
            recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_17_17, (MR_Integer) 0)));
#line 1283 "recompilation.usage.m"
            recompilation__usage__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_17_17, (MR_Integer) 1)));
#line 1284 "recompilation.usage.m"
            {
#line 1284 "recompilation.usage.m"
              recompilation__usage__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(recompilation__usage__TypeCtor_6, &recompilation__usage__V_11_11, &recompilation__usage__V_12_12);
            }
#line 1284 "recompilation.usage.m"
            recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 1283 "recompilation.usage.m"
          }
#line 1289 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1286 "recompilation.usage.m"
          {
#line 1286 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeCtorItem_14;

#line 1286 "recompilation.usage.m"
            {
#line 1286 "recompilation.usage.m"
              recompilation__usage__TypeCtorItem_14 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_6);
            }
#line 1287 "recompilation.usage.m"
            {
#line 1287 "recompilation.usage.m"
              recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 0, recompilation__usage__TypeCtorItem_14, recompilation__usage__STATE_VARIABLE_Info_0_15, &recompilation__usage__STATE_VARIABLE_Info_19_19);
            }
#line 1286 "recompilation.usage.m"
          }
#line 1289 "recompilation.usage.m"
        else
#line 1287 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_19_19 = recompilation__usage__STATE_VARIABLE_Info_0_15;
#line 1274 "recompilation.usage.m"
        {
#line 1274 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[46], recompilation__usage__TypeArgs_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_19_19)), &recompilation__usage__conv1_STATE_VARIABLE_Info_16);
        }
#line 1274 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_16 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_16);
#line 1291 "recompilation.usage.m"
      }
#line 1293 "recompilation.usage.m"
    else
#line 1292 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_16 = recompilation__usage__STATE_VARIABLE_Info_0_15;
#line 1293 "recompilation.usage.m"
  }
#line 1276 "recompilation.usage.m"
}

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1274 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1274 "recompilation.usage.m"
  }
#line 1274 "recompilation.usage.m"
}

#line 1270 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
#line 1270 "recompilation.usage.m"
  MR_Word recompilation__usage__Types_4,
#line 1270 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1270 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1270 "recompilation.usage.m"
{
#line 1273 "recompilation.usage.m"
  {
#line 1273 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[45], recompilation__usage__Types_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1273 "recompilation.usage.m"
  }
#line 1270 "recompilation.usage.m"
}

#line 1261 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1261 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1261 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_11,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1261 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1261 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15)
#line 1261 "recompilation.usage.m"
{
#line 1266 "recompilation.usage.m"
  {
#line 1266 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1266 "recompilation.usage.m"
    {
#line 1266 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(recompilation__usage__ItemType_8, recompilation__usage__Name_9, recompilation__usage__Arity_10, recompilation__usage__Module_12, recompilation__usage__STATE_VARIABLE_Info_0_14, recompilation__usage__STATE_VARIABLE_Info_15);
#line 1266 "recompilation.usage.m"
      return;
    }
#line 1266 "recompilation.usage.m"
  }
#line 1261 "recompilation.usage.m"
}

#line 1258 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1258 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1258 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1258 "recompilation.usage.m"
{
#line 1258 "recompilation.usage.m"
  {
#line 1258 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1258 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_15;

#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_15);
    }
#line 1258 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_15));
#line 1258 "recompilation.usage.m"
  }
#line 1258 "recompilation.usage.m"
}

#line 1252 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_6,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingIdMap_9,
#line 1252 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1252 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1252 "recompilation.usage.m"
{
#line 1257 "recompilation.usage.m"
  {
#line 1257 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1257 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_19_19;
#line 1257 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1257 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1257 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1258 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      recompilation__usage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[2]));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 3) = ((MR_Box) (recompilation__usage__ItemType_6));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 4) = ((MR_Box) (recompilation__usage__Name_7));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 5) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1258 "recompilation.usage.m"
    }
#line 11206 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_19_19, recompilation__usage__TypeCtorInfo_19_19, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_13_13, recompilation__usage__MatchingIdMap_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1258 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1257 "recompilation.usage.m"
  }
#line 1252 "recompilation.usage.m"
}

#line 1250 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1250 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1250 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1250 "recompilation.usage.m"
{
#line 1250 "recompilation.usage.m"
  {
#line 1250 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1250 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 1250 "recompilation.usage.m"
    {
#line 1250 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 1250 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 1250 "recompilation.usage.m"
  }
#line 1250 "recompilation.usage.m"
}

#line 1246 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1246 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1246 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1246 "recompilation.usage.m"
{
#line 1249 "recompilation.usage.m"
  {
#line 1249 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1249 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1250 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1250 "recompilation.usage.m"
    {
#line 1250 "recompilation.usage.m"
      recompilation__usage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[6]));
#line 1250 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1));
#line 1250 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1250 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 3) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1250 "recompilation.usage.m"
    }
#line 1250 "recompilation.usage.m"
    {
#line 1250 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_10_10, recompilation__usage__Set_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_8)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1250 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1249 "recompilation.usage.m"
  }
#line 1246 "recompilation.usage.m"
}

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage___Arity_2,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5)
#line 1231 "recompilation.usage.m"
{
#line 1234 "recompilation.usage.m"
  {
#line 1234 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1234 "recompilation.usage.m"
    {
#line 1234 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(recompilation__usage__Name_1, recompilation__usage__ResolverFunctor_3, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1234 "recompilation.usage.m"
      return;
    }
#line 1234 "recompilation.usage.m"
  }
#line 1231 "recompilation.usage.m"
}

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
#line 1223 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1223 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_10,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14)
#line 1223 "recompilation.usage.m"
{
#line 1227 "recompilation.usage.m"
  {
#line 1227 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1227 "recompilation.usage.m"
    {
#line 1227 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(recompilation__usage__Name_7, recompilation__usage__Arity_8, recompilation__usage__Qualifier_9, recompilation__usage__STATE_VARIABLE_Info_0_13, recompilation__usage__STATE_VARIABLE_Info_14);
#line 1227 "recompilation.usage.m"
      return;
    }
#line 1227 "recompilation.usage.m"
  }
#line 1223 "recompilation.usage.m"
}

#line 1220 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1220 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1220 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1220 "recompilation.usage.m"
{
#line 1220 "recompilation.usage.m"
  {
#line 1220 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1220 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_14;

#line 1220 "recompilation.usage.m"
    {
#line 1220 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_3_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_14);
    }
#line 1220 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_14));
#line 1220 "recompilation.usage.m"
  }
#line 1220 "recompilation.usage.m"
}

#line 1215 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingCtorMap_7,
#line 1215 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1215 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1215 "recompilation.usage.m"
{
#line 1219 "recompilation.usage.m"
  {
#line 1219 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1219 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_17_17;
#line 1219 "recompilation.usage.m"
    MR_String recompilation__usage__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1219 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1219 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 1220 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_10;

#line 1220 "recompilation.usage.m"
    {
#line 1220 "recompilation.usage.m"
      recompilation__usage__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 0) = ((MR_Box) (&recompilation__usage_scalar_common_10[0]));
#line 1220 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_functors_2_4_p_0_1));
#line 1220 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1220 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 3) = ((MR_Box) (recompilation__usage__Name_5));
#line 1220 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 4) = ((MR_Box) (recompilation__usage__Arity_6));
#line 1220 "recompilation.usage.m"
    }
#line 11446 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1220 "recompilation.usage.m"
    {
#line 1220 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_17_17, recompilation__usage__TypeCtorInfo_17_17, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_11_11, recompilation__usage__MatchingCtorMap_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_9)), &recompilation__usage__conv1_STATE_VARIABLE_Info_10);
    }
#line 1220 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_10 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_10);
#line 1219 "recompilation.usage.m"
  }
#line 1215 "recompilation.usage.m"
}

#line 1213 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1213 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1213 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1213 "recompilation.usage.m"
{
#line 1213 "recompilation.usage.m"
  {
#line 1213 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1213 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1213 "recompilation.usage.m"
    {
#line 1213 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_2_4_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1213 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1213 "recompilation.usage.m"
  }
#line 1213 "recompilation.usage.m"
}

#line 1209 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
#line 1209 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_4,
#line 1209 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1209 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1209 "recompilation.usage.m"
{
#line 1212 "recompilation.usage.m"
  {
#line 1212 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1213 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1213 "recompilation.usage.m"
    {
#line 1213 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[44], recompilation__usage__Set_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1213 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1212 "recompilation.usage.m"
  }
#line 1209 "recompilation.usage.m"
}

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1274 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1274 "recompilation.usage.m"
  }
#line 1274 "recompilation.usage.m"
}

#line 1195 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
#line 1195 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeSpecInfo_4,
#line 1195 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 1195 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17)
#line 1195 "recompilation.usage.m"
{
#line 1198 "recompilation.usage.m"
  {
#line 1198 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1198 "recompilation.usage.m"
    MR_Word recompilation__usage__MaybeModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 4)));
#line 1198 "recompilation.usage.m"
    MR_Word recompilation__usage__Subst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 5)));
#line 1198 "recompilation.usage.m"
    MR_Word recompilation__usage__SubstTypes_15;
#line 1198 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_18_18;
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 0)));
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 1)));
#line 1199 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 2)));
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 3)));
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 6)));
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 7)));
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_17;

#line 1203 "recompilation.usage.m"
    if ((recompilation__usage__MaybeModes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_18_18 = recompilation__usage__STATE_VARIABLE_Info_0_16;
#line 1203 "recompilation.usage.m"
    else
#line 1201 "recompilation.usage.m"
      {
#line 1201 "recompilation.usage.m"
        MR_Word recompilation__usage__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeModes_10, (MR_Integer) 0)));

#line 1202 "recompilation.usage.m"
        {
#line 1202 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_modes_3_p_0(recompilation__usage__Modes_14, recompilation__usage__STATE_VARIABLE_Info_0_16, &recompilation__usage__STATE_VARIABLE_Info_18_18);
        }
#line 1201 "recompilation.usage.m"
      }
#line 1206 "recompilation.usage.m"
    {
#line 1206 "recompilation.usage.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &recompilation__usage_scalar_common_2[9], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__Subst_11, &recompilation__usage__SubstTypes_15);
    }
#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[43], recompilation__usage__SubstTypes_15, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_18_18)), &recompilation__usage__conv1_STATE_VARIABLE_Info_17);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_17 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_17);
#line 1198 "recompilation.usage.m"
  }
#line 1195 "recompilation.usage.m"
}

#line 1188 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
#line 1188 "recompilation.usage.m"
  MR_Integer recompilation__usage___ProcId_5,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1188 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1188 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1188 "recompilation.usage.m"
{
#line 1191 "recompilation.usage.m"
  {
#line 1191 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1191 "recompilation.usage.m"
    {
#line 1191 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(recompilation__usage__ProcInfo_6, recompilation__usage__STATE_VARIABLE_Info_0_9, recompilation__usage__STATE_VARIABLE_Info_10);
#line 1191 "recompilation.usage.m"
      return;
    }
#line 1191 "recompilation.usage.m"
  }
#line 1188 "recompilation.usage.m"
}

#line 1182 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1182 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1182 "recompilation.usage.m"
{
#line 1182 "recompilation.usage.m"
  {
#line 1182 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1182 "recompilation.usage.m"
    MR_Word recompilation__usage__conv5_STATE_VARIABLE_Info_17;

#line 1182 "recompilation.usage.m"
    {
#line 1182 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_spec_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv5_STATE_VARIABLE_Info_17);
    }
#line 1182 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv5_STATE_VARIABLE_Info_17));
#line 1182 "recompilation.usage.m"
  }
#line 1182 "recompilation.usage.m"
}

#line 1174 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1174 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1174 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1174 "recompilation.usage.m"
{
#line 1174 "recompilation.usage.m"
  {
#line 1174 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1174 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_10;

#line 1174 "recompilation.usage.m"
    {
#line 1174 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(((MR_Integer) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv2_STATE_VARIABLE_Info_10);
    }
#line 1174 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_10));
#line 1174 "recompilation.usage.m"
  }
#line 1174 "recompilation.usage.m"
}

#line 1129 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3,
#line 1129 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_34,
#line 1129 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_35)
#line 1129 "recompilation.usage.m"
{
#line 1134 "recompilation.usage.m"
  {
#line 1134 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1134 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1134 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1134 "recompilation.usage.m"
    MR_Word recompilation__usage__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 1134 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 1134 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemType_12;
#line 1134 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_13;
#line 1134 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_14;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 1136 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 1139 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemName_15;
#line 1139 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;

#line 1135 "recompilation.usage.m"
    {
#line 1135 "recompilation.usage.m"
      recompilation__usage__ItemType_12 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__usage__PredOrFunc_6);
    }
#line 1136 "recompilation.usage.m"
    recompilation__usage__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 1136 "recompilation.usage.m"
    recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 1137 "recompilation.usage.m"
    {
#line 1137 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_13, recompilation__usage__PredId_9, &recompilation__usage__PredInfo_14);
    }
#line 1139 "recompilation.usage.m"
    {
#line 1139 "recompilation.usage.m"
      recompilation__usage__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_36_36, 0) = ((MR_Box) (recompilation__usage__PredModule_10));
#line 1139 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_36_36, 1) = ((MR_Box) (recompilation__usage__Name_7));
#line 1139 "recompilation.usage.m"
    }
#line 1139 "recompilation.usage.m"
    {
#line 1139 "recompilation.usage.m"
      recompilation__usage__ItemName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, 0) = ((MR_Box) (recompilation__usage__V_36_36));
#line 1139 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1139 "recompilation.usage.m"
    }
#line 1454 "recompilation.usage.m"
    {
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeCtorInfo_21_93;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_22_94;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_23_95;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_24_96;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__ImportedItems_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleName_80;
#line 1454 "recompilation.usage.m"
      MR_String recompilation__usage__Name_81;
#line 1454 "recompilation.usage.m"
      MR_Integer recompilation__usage__Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, (MR_Integer) 1)));
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleIdSet_83;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleItemIdSet_84;
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, (MR_Integer) 0)));
#line 1454 "recompilation.usage.m"
      MR_Word recompilation__usage__V_86_86;
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 1455 "recompilation.usage.m"
      MR_Word recompilation__usage__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 1457 "recompilation.usage.m"
      MR_Box recompilation__usage__conv0_ModuleIdSet_83;
#line 1458 "recompilation.usage.m"
      MR_Box recompilation__usage__conv1_ModuleItemIdSet_84;

#line 1456 "recompilation.usage.m"
      recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 1456 "recompilation.usage.m"
      if (recompilation__usage__succeeded)
#line 1456 "recompilation.usage.m"
        {
#line 1456 "recompilation.usage.m"
          recompilation__usage__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_85_85, (MR_Integer) 0)));
#line 1456 "recompilation.usage.m"
          recompilation__usage__Name_81 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_85_85, (MR_Integer) 1)));
#line 11872 "recompilation.usage.c"
          recompilation__usage__TypeCtorInfo_21_93 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 11874 "recompilation.usage.c"
          recompilation__usage__TypeInfo_22_94 = (MR_Word) &recompilation__usage_scalar_common_3[0];
#line 1457 "recompilation.usage.m"
          {
#line 1457 "recompilation.usage.m"
            recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_21_93, recompilation__usage__TypeInfo_22_94, recompilation__usage__ImportedItems_79, ((MR_Box) (recompilation__usage__ModuleName_80)), &recompilation__usage__conv0_ModuleIdSet_83);
          }
#line 1457 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 1457 "recompilation.usage.m"
            {
#line 1457 "recompilation.usage.m"
              recompilation__usage__ModuleIdSet_83 = ((MR_Word) recompilation__usage__conv0_ModuleIdSet_83);
#line 1457 "recompilation.usage.m"
              recompilation__usage__succeeded = MR_TRUE;
#line 1457 "recompilation.usage.m"
            }
#line 1454 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 1454 "recompilation.usage.m"
            {
#line 11895 "recompilation.usage.c"
              recompilation__usage__TypeInfo_23_95 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1458 "recompilation.usage.m"
              {
#line 1458 "recompilation.usage.m"
                recompilation__usage__conv1_ModuleItemIdSet_84 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_23_95, recompilation__usage__ModuleIdSet_83, recompilation__usage__ItemType_12);
              }
#line 1458 "recompilation.usage.m"
              recompilation__usage__ModuleItemIdSet_84 = ((MR_Word) recompilation__usage__conv1_ModuleItemIdSet_84);
#line 11904 "recompilation.usage.c"
              recompilation__usage__TypeInfo_24_96 = (MR_Word) &recompilation__usage_scalar_common_1[0];
#line 1459 "recompilation.usage.m"
              {
#line 1459 "recompilation.usage.m"
                recompilation__usage__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_86_86, 0) = ((MR_Box) (recompilation__usage__Name_81));
#line 1459 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_86_86, 1) = ((MR_Box) (recompilation__usage__Arity_82));
#line 1459 "recompilation.usage.m"
              }
#line 1459 "recompilation.usage.m"
              {
#line 1459 "recompilation.usage.m"
                recompilation__usage__succeeded = mercury__set__member_2_p_0(recompilation__usage__TypeInfo_24_96, ((MR_Box) (recompilation__usage__V_86_86)), recompilation__usage__ModuleItemIdSet_84);
              }
#line 1454 "recompilation.usage.m"
            }
#line 1456 "recompilation.usage.m"
        }
#line 1454 "recompilation.usage.m"
    }
#line 1142 "recompilation.usage.m"
    if (!(recompilation__usage__succeeded))
#line 1143 "recompilation.usage.m"
      {
#line 1143 "recompilation.usage.m"
        recompilation__usage__succeeded = recompilation__usage__item_is_local_2_p_0(recompilation__usage__STATE_VARIABLE_Info_0_34, recompilation__usage__ItemName_15);
      }
#line 1148 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1143 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_35 = recompilation__usage__STATE_VARIABLE_Info_0_34;
#line 1148 "recompilation.usage.m"
    else
#line 1167 "recompilation.usage.m"
      {
#line 1151 "recompilation.usage.m"
        MR_Word recompilation__usage__Markers_16;

#line 1151 "recompilation.usage.m"
        {
#line 1151 "recompilation.usage.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__Markers_16);
        }
#line 1152 "recompilation.usage.m"
        {
#line 1152 "recompilation.usage.m"
          recompilation__usage__succeeded = hlds__hlds_pred__check_marker_2_p_0(recompilation__usage__Markers_16, (MR_Integer) 9);
        }
#line 1167 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1156 "recompilation.usage.m"
          {
#line 1156 "recompilation.usage.m"
            MR_Word recompilation__usage__MethodClassContext_17;
#line 1156 "recompilation.usage.m"
            MR_Word recompilation__usage__MethodUnivConstraints_18;
#line 1156 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassName_23;
#line 1156 "recompilation.usage.m"
            MR_Integer recompilation__usage__ClassArity_24;
#line 1156 "recompilation.usage.m"
            MR_Word recompilation__usage__V_43_43;
#line 1157 "recompilation.usage.m"
            MR_Word recompilation__usage__V_19_19;
#line 1161 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassName0_20;
#line 1161 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassArgs_21;
#line 1158 "recompilation.usage.m"
            MR_Word recompilation__usage__V_38_38;
#line 1158 "recompilation.usage.m"
            MR_Word recompilation__usage__V_22_22;

#line 1156 "recompilation.usage.m"
            {
#line 1156 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__MethodClassContext_17);
            }
#line 1157 "recompilation.usage.m"
            recompilation__usage__MethodUnivConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodClassContext_17, (MR_Integer) 0)));
#line 1157 "recompilation.usage.m"
            recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodClassContext_17, (MR_Integer) 1)));
#line 1158 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__MethodUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1158 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1158 "recompilation.usage.m"
              {
#line 1158 "recompilation.usage.m"
                recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MethodUnivConstraints_18, (MR_Integer) 0)));
#line 1158 "recompilation.usage.m"
                recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MethodUnivConstraints_18, (MR_Integer) 1)));
#line 1158 "recompilation.usage.m"
                recompilation__usage__ClassName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, (MR_Integer) 0)));
#line 1158 "recompilation.usage.m"
                recompilation__usage__ClassArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, (MR_Integer) 1)));
#line 1158 "recompilation.usage.m"
                recompilation__usage__succeeded = MR_TRUE;
#line 1158 "recompilation.usage.m"
              }
#line 1161 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1159 "recompilation.usage.m"
              {
#line 1159 "recompilation.usage.m"
                recompilation__usage__ClassName_23 = recompilation__usage__ClassName0_20;
#line 1160 "recompilation.usage.m"
                {
#line 1160 "recompilation.usage.m"
                  recompilation__usage__ClassArity_24 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__ClassArgs_21);
                }
#line 1159 "recompilation.usage.m"
              }
#line 1161 "recompilation.usage.m"
            else
#line 1162 "recompilation.usage.m"
              {
#line 1162 "recompilation.usage.m"
                {
#line 1162 "recompilation.usage.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_pred\'/5", (MR_String) "class method with no class constraints");
#line 1162 "recompilation.usage.m"
                  return;
                }
#line 1162 "recompilation.usage.m"
              }
#line 1166 "recompilation.usage.m"
            {
#line 1166 "recompilation.usage.m"
              recompilation__usage__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_43_43, 0) = ((MR_Box) (recompilation__usage__ClassName_23));
#line 1166 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_43_43, 1) = ((MR_Box) (recompilation__usage__ClassArity_24));
#line 1166 "recompilation.usage.m"
            }
#line 1165 "recompilation.usage.m"
            {
#line 1165 "recompilation.usage.m"
              recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, recompilation__usage__V_43_43, recompilation__usage__STATE_VARIABLE_Info_0_34, recompilation__usage__STATE_VARIABLE_Info_35);
#line 1165 "recompilation.usage.m"
              return;
            }
#line 1156 "recompilation.usage.m"
          }
#line 1167 "recompilation.usage.m"
        else
#line 1168 "recompilation.usage.m"
          {
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeCtorInfo_69_69;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__ArgTypes_25;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__Procs_26;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassContext_27;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeSpecInfo_28;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__PragmaMap_32;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__V_45_45;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_46_46;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_47_47;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_48_48;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_50_50;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_51_51;
#line 1168 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemName_54;
#line 1174 "recompilation.usage.m"
            MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_50_50;
#line 1180 "recompilation.usage.m"
            MR_Word recompilation__usage__V_29_29;
#line 1180 "recompilation.usage.m"
            MR_Word recompilation__usage__V_30_30;
#line 1180 "recompilation.usage.m"
            MR_Word recompilation__usage__V_31_31;
#line 1183 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeSpecPragmas_33;
#line 1181 "recompilation.usage.m"
            MR_Box recompilation__usage__conv4_TypeSpecPragmas_33;

#line 1168 "recompilation.usage.m"
            {
#line 1168 "recompilation.usage.m"
              recompilation__usage__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), recompilation__usage__V_45_45, 0) = ((MR_Box) (recompilation__usage__PredModule_10));
#line 1168 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), recompilation__usage__V_45_45, 1) = ((MR_Box) (recompilation__usage__Name_7));
#line 1168 "recompilation.usage.m"
            }
#line 1168 "recompilation.usage.m"
            {
#line 1168 "recompilation.usage.m"
              recompilation__usage__ItemName_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_54, 0) = ((MR_Box) (recompilation__usage__V_45_45));
#line 1168 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_54, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1168 "recompilation.usage.m"
            }
#line 1169 "recompilation.usage.m"
            {
#line 1169 "recompilation.usage.m"
              recompilation__usage__record_expanded_items_used_by_item_4_p_0(recompilation__usage__ItemType_12, recompilation__usage__ItemName_54, recompilation__usage__STATE_VARIABLE_Info_0_34, &recompilation__usage__STATE_VARIABLE_Info_46_46);
            }
#line 1170 "recompilation.usage.m"
            {
#line 1170 "recompilation.usage.m"
              recompilation__usage__record_imported_item_4_p_0(recompilation__usage__ItemType_12, recompilation__usage__ItemName_54, recompilation__usage__STATE_VARIABLE_Info_46_46, &recompilation__usage__STATE_VARIABLE_Info_47_47);
            }
#line 1171 "recompilation.usage.m"
            {
#line 1171 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__ArgTypes_25);
            }
#line 1172 "recompilation.usage.m"
            {
#line 1172 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_types_3_p_0(recompilation__usage__ArgTypes_25, recompilation__usage__STATE_VARIABLE_Info_47_47, &recompilation__usage__STATE_VARIABLE_Info_48_48);
            }
#line 1173 "recompilation.usage.m"
            {
#line 1173 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__Procs_26);
            }
#line 12140 "recompilation.usage.c"
            recompilation__usage__TypeCtorInfo_69_69 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0;
#line 1174 "recompilation.usage.m"
            {
#line 1174 "recompilation.usage.m"
              mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, recompilation__usage__TypeCtorInfo_69_69, (MR_Word) &recompilation__usage_scalar_common_1[41], recompilation__usage__Procs_26, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_48_48)), &recompilation__usage__conv3_STATE_VARIABLE_Info_50_50);
            }
#line 1174 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_50_50 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_50_50);
#line 1175 "recompilation.usage.m"
            {
#line 1175 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__ClassContext_27);
            }
#line 1176 "recompilation.usage.m"
            {
#line 1176 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_class_context_3_p_0(recompilation__usage__ClassContext_27, recompilation__usage__STATE_VARIABLE_Info_50_50, &recompilation__usage__STATE_VARIABLE_Info_51_51);
            }
#line 1179 "recompilation.usage.m"
            {
#line 1179 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(recompilation__usage__ModuleInfo_13, &recompilation__usage__TypeSpecInfo_28);
            }
#line 1180 "recompilation.usage.m"
            recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 0)));
#line 1180 "recompilation.usage.m"
            recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 1)));
#line 1180 "recompilation.usage.m"
            recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 2)));
#line 1180 "recompilation.usage.m"
            recompilation__usage__PragmaMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 3)));
#line 1181 "recompilation.usage.m"
            {
#line 1181 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &recompilation__usage_scalar_common_2[8], recompilation__usage__PragmaMap_32, ((MR_Box) (recompilation__usage__PredId_9)), &recompilation__usage__conv4_TypeSpecPragmas_33);
            }
#line 1181 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1181 "recompilation.usage.m"
              {
#line 1181 "recompilation.usage.m"
                recompilation__usage__TypeSpecPragmas_33 = ((MR_Word) recompilation__usage__conv4_TypeSpecPragmas_33);
#line 1181 "recompilation.usage.m"
                recompilation__usage__succeeded = MR_TRUE;
#line 1181 "recompilation.usage.m"
              }
#line 1183 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1182 "recompilation.usage.m"
              {
#line 1182 "recompilation.usage.m"
                MR_Box recompilation__usage__conv6_STATE_VARIABLE_Info_35;

#line 1182 "recompilation.usage.m"
                {
#line 1182 "recompilation.usage.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, recompilation__usage__TypeCtorInfo_69_69, (MR_Word) &recompilation__usage_scalar_common_1[42], recompilation__usage__TypeSpecPragmas_33, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_51_51)), &recompilation__usage__conv6_STATE_VARIABLE_Info_35);
                }
#line 1182 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_35 = ((MR_Word) recompilation__usage__conv6_STATE_VARIABLE_Info_35);
#line 1182 "recompilation.usage.m"
              }
#line 1183 "recompilation.usage.m"
            else
#line 1182 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_Info_35 = recompilation__usage__STATE_VARIABLE_Info_51_51;
#line 1168 "recompilation.usage.m"
          }
#line 1167 "recompilation.usage.m"
      }
#line 1134 "recompilation.usage.m"
  }
#line 1129 "recompilation.usage.m"
}

#line 1120 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1120 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1120 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__5_12,
#line 1120 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1120 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1120 "recompilation.usage.m"
{
#line 1125 "recompilation.usage.m"
  {
#line 1125 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1125 "recompilation.usage.m"
    {
#line 1125 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(recompilation__usage__PredOrFunc_8, recompilation__usage__Name_9, recompilation__usage__Arity_10, recompilation__usage__ModuleQualifier_11, recompilation__usage__STATE_VARIABLE_Info_0_15, recompilation__usage__STATE_VARIABLE_Info_16);
#line 1125 "recompilation.usage.m"
      return;
    }
#line 1125 "recompilation.usage.m"
  }
#line 1120 "recompilation.usage.m"
}

#line 1117 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1117 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1117 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1117 "recompilation.usage.m"
{
#line 1117 "recompilation.usage.m"
  {
#line 1117 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1117 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1117 "recompilation.usage.m"
    {
#line 1117 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1117 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1117 "recompilation.usage.m"
  }
#line 1117 "recompilation.usage.m"
}

#line 1112 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingPredMap_9,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1112 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1112 "recompilation.usage.m"
{
#line 1116 "recompilation.usage.m"
  {
#line 1116 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1116 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_19_19;
#line 1116 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1116 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1116 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1117 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1117 "recompilation.usage.m"
    {
#line 1117 "recompilation.usage.m"
      recompilation__usage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[1]));
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_2_5_p_0_1));
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_6));
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 4) = ((MR_Box) (recompilation__usage__Name_7));
#line 1117 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 5) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1117 "recompilation.usage.m"
    }
#line 12334 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1117 "recompilation.usage.m"
    {
#line 1117 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_19_19, recompilation__usage__TypeCtorInfo_19_19, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_13_13, recompilation__usage__MatchingPredMap_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1117 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1116 "recompilation.usage.m"
  }
#line 1112 "recompilation.usage.m"
}

#line 1110 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1110 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1110 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1110 "recompilation.usage.m"
{
#line 1110 "recompilation.usage.m"
  {
#line 1110 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1110 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 1110 "recompilation.usage.m"
    {
#line 1110 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 1110 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 1110 "recompilation.usage.m"
  }
#line 1110 "recompilation.usage.m"
}

#line 1106 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1106 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1106 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1106 "recompilation.usage.m"
{
#line 1109 "recompilation.usage.m"
  {
#line 1109 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1109 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1110 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1110 "recompilation.usage.m"
    {
#line 1110 "recompilation.usage.m"
      recompilation__usage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[5]));
#line 1110 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_4_p_0_1));
#line 1110 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1110 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_5));
#line 1110 "recompilation.usage.m"
    }
#line 1110 "recompilation.usage.m"
    {
#line 1110 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_10_10, recompilation__usage__Set_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_8)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1110 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1109 "recompilation.usage.m"
  }
#line 1106 "recompilation.usage.m"
}

#line 1094 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
#line 1094 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1094 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1094 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13)
#line 1094 "recompilation.usage.m"
{
#line 1097 "recompilation.usage.m"
  {
#line 1097 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1097 "recompilation.usage.m"
    MR_Word recompilation__usage__InstBody_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 2)));
#line 1098 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 0)));
#line 1098 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 1)));
#line 1098 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 3)));
#line 1098 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 4)));

#line 1102 "recompilation.usage.m"
    if ((recompilation__usage__InstBody_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_13 = recompilation__usage__STATE_VARIABLE_Info_0_12;
#line 1102 "recompilation.usage.m"
    else
#line 1100 "recompilation.usage.m"
      {
#line 1100 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstBody_8, (MR_Integer) 0)));

#line 1101 "recompilation.usage.m"
        {
#line 1101 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst_11, recompilation__usage__STATE_VARIABLE_Info_0_12, recompilation__usage__STATE_VARIABLE_Info_13);
#line 1101 "recompilation.usage.m"
          return;
        }
#line 1100 "recompilation.usage.m"
      }
#line 1097 "recompilation.usage.m"
  }
#line 1094 "recompilation.usage.m"
}

#line 1087 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
#line 1087 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1087 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1087 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1087 "recompilation.usage.m"
{
#line 1090 "recompilation.usage.m"
  {
#line 1090 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1090 "recompilation.usage.m"
    MR_Word recompilation__usage__Mode_8;
#line 1090 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 2)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 0)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 1)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 3)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 4)));

#line 1091 "recompilation.usage.m"
    recompilation__usage__Mode_8 = (MR_Word) recompilation__usage__V_13_13;
#line 1092 "recompilation.usage.m"
    {
#line 1092 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(recompilation__usage__Mode_8, recompilation__usage__STATE_VARIABLE_Info_0_11, recompilation__usage__STATE_VARIABLE_Info_12);
#line 1092 "recompilation.usage.m"
      return;
    }
#line 1090 "recompilation.usage.m"
  }
#line 1087 "recompilation.usage.m"
}

#line 1080 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
#line 1080 "recompilation.usage.m"
  MR_Word recompilation__usage__CtorArg_4,
#line 1080 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1080 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8)
#line 1080 "recompilation.usage.m"
{
#line 1083 "recompilation.usage.m"
  {
#line 1083 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1083 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 1)));
#line 1084 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 0)));
#line 1084 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 2)));
#line 1084 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 3)));

#line 1085 "recompilation.usage.m"
    {
#line 1085 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__ArgType_6, recompilation__usage__STATE_VARIABLE_Info_0_7, recompilation__usage__STATE_VARIABLE_Info_8);
#line 1085 "recompilation.usage.m"
      return;
    }
#line 1083 "recompilation.usage.m"
  }
#line 1080 "recompilation.usage.m"
}

#line 1078 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1078 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1078 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1078 "recompilation.usage.m"
{
#line 1078 "recompilation.usage.m"
  {
#line 1078 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1078 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_8;

#line 1078 "recompilation.usage.m"
    {
#line 1078 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_ctor_arg_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_8);
    }
#line 1078 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_8));
#line 1078 "recompilation.usage.m"
  }
#line 1078 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1072 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
#line 1072 "recompilation.usage.m"
  MR_Word recompilation__usage__Ctor_4,
#line 1072 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1072 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1072 "recompilation.usage.m"
{
#line 1075 "recompilation.usage.m"
  {
#line 1075 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1075 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 1)));
#line 1075 "recompilation.usage.m"
    MR_Word recompilation__usage__CtorArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 3)));
#line 1075 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_13_13;
#line 1076 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 0)));
#line 1076 "recompilation.usage.m"
    MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 2)));
#line 1076 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 4)));
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_13_13;
#line 1078 "recompilation.usage.m"
    MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_12;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[39], recompilation__usage__Constraints_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv1_STATE_VARIABLE_Info_13_13);
    }
#line 1412 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_13_13 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_13_13);
#line 1078 "recompilation.usage.m"
    {
#line 1078 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[40], recompilation__usage__CtorArgs_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_13_13)), &recompilation__usage__conv3_STATE_VARIABLE_Info_12);
    }
#line 1078 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_12);
#line 1075 "recompilation.usage.m"
  }
#line 1072 "recompilation.usage.m"
}

#line 1064 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1064 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1064 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1064 "recompilation.usage.m"
{
#line 1064 "recompilation.usage.m"
  {
#line 1064 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1064 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 1064 "recompilation.usage.m"
    {
#line 1064 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_ctor_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 1064 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 1064 "recompilation.usage.m"
  }
#line 1064 "recompilation.usage.m"
}

#line 1059 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
#line 1059 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1059 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1059 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1059 "recompilation.usage.m"
{
#line 1063 "recompilation.usage.m"
  {
#line 1063 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1063 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1063 "recompilation.usage.m"
      {
#line 1063 "recompilation.usage.m"
        MR_Word recompilation__usage__Ctors_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 4)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 5)));
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1062 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 7)));
#line 1064 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_3;

#line 1064 "recompilation.usage.m"
        {
#line 1064 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[38], recompilation__usage__Ctors_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv1_STATE_VARIABLE_Info_3);
        }
#line 1064 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_3);
#line 1063 "recompilation.usage.m"
      }
#line 1063 "recompilation.usage.m"
    else
#line 1063 "recompilation.usage.m"
      if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "recompilation.usage.m"
        {
#line 1065 "recompilation.usage.m"
          MR_Word recompilation__usage__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));

#line 1066 "recompilation.usage.m"
          {
#line 1066 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_18, recompilation__usage__STATE_VARIABLE_Info_0_2, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1066 "recompilation.usage.m"
            return;
          }
#line 1065 "recompilation.usage.m"
        }
#line 1063 "recompilation.usage.m"
      else
#line 1063 "recompilation.usage.m"
        if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1068 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1063 "recompilation.usage.m"
        else
#line 1063 "recompilation.usage.m"
          if (((((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1067 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1063 "recompilation.usage.m"
          else
#line 1070 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1063 "recompilation.usage.m"
  }
#line 1059 "recompilation.usage.m"
}

#line 1047 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
#line 1047 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeAndMode_4,
#line 1047 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1047 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1047 "recompilation.usage.m"
{
#line 1050 "recompilation.usage.m"
  {
#line 1050 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1050 "recompilation.usage.m"
    MR_Word recompilation__usage__Type_6;
#line 1050 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_10_10;

#line 1053 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 1054 "recompilation.usage.m"
      {
#line 1054 "recompilation.usage.m"
        MR_Word recompilation__usage__Mode_7;

#line 1054 "recompilation.usage.m"
        recompilation__usage__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__TypeAndMode_4, (MR_Integer) 0)));
#line 1054 "recompilation.usage.m"
        recompilation__usage__Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__TypeAndMode_4, (MR_Integer) 1)));
#line 1055 "recompilation.usage.m"
        {
#line 1055 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_mode_3_p_0(recompilation__usage__Mode_7, recompilation__usage__STATE_VARIABLE_Info_0_8, &recompilation__usage__STATE_VARIABLE_Info_10_10);
        }
#line 1054 "recompilation.usage.m"
      }
#line 1053 "recompilation.usage.m"
    else
#line 1052 "recompilation.usage.m"
      {
#line 1052 "recompilation.usage.m"
        recompilation__usage__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeAndMode_4, (MR_Integer) 0)));
#line 1052 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_10_10 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 1052 "recompilation.usage.m"
      }
#line 1057 "recompilation.usage.m"
    {
#line 1057 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_6, recompilation__usage__STATE_VARIABLE_Info_10_10, recompilation__usage__STATE_VARIABLE_Info_9);
#line 1057 "recompilation.usage.m"
      return;
    }
#line 1050 "recompilation.usage.m"
  }
#line 1047 "recompilation.usage.m"
}

#line 1301 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1301 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1301 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1301 "recompilation.usage.m"
{
#line 1301 "recompilation.usage.m"
  {
#line 1301 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_3;

#line 1301 "recompilation.usage.m"
    {
#line 1301 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_3);
    }
#line 1301 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_3));
#line 1301 "recompilation.usage.m"
  }
#line 1301 "recompilation.usage.m"
}

#line 1042 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1042 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1042 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1042 "recompilation.usage.m"
{
#line 1042 "recompilation.usage.m"
  {
#line 1042 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1042 "recompilation.usage.m"
    MR_Word recompilation__usage__conv4_STATE_VARIABLE_Info_9;

#line 1042 "recompilation.usage.m"
    {
#line 1042 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_and_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv4_STATE_VARIABLE_Info_9);
    }
#line 1042 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv4_STATE_VARIABLE_Info_9));
#line 1042 "recompilation.usage.m"
  }
#line 1042 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1035 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
#line 1035 "recompilation.usage.m"
  MR_Word recompilation__usage__Method_1,
#line 1035 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1035 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1035 "recompilation.usage.m"
{
#line 1038 "recompilation.usage.m"
  {
#line 1038 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1038 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__Method_1)) == (MR_mktag((MR_Integer) 0))))
#line 1038 "recompilation.usage.m"
      {
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__ArgTypesAndModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 5)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 11)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_21_21;
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraints_17, (MR_Integer) 0)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraints_17, (MR_Integer) 1)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_9_47;
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 0)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 1)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 2)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 3)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 4)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 6)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 7)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 8)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 9)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 10)));
#line 1039 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 12)));
#line 1412 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9_47;
#line 1412 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_21_21;
#line 1042 "recompilation.usage.m"
        MR_Box recompilation__usage__conv5_STATE_VARIABLE_Info_3;

#line 1412 "recompilation.usage.m"
        {
#line 1412 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[34], recompilation__usage__Constraints1_44, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9_47);
        }
#line 1412 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_9_47 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9_47);
#line 1412 "recompilation.usage.m"
        {
#line 1412 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[35], recompilation__usage__Constraints2_45, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_9_47)), &recompilation__usage__conv3_STATE_VARIABLE_Info_21_21);
        }
#line 1412 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_21_21 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_21_21);
#line 1042 "recompilation.usage.m"
        {
#line 1042 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[36], recompilation__usage__ArgTypesAndModes_11, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_21_21)), &recompilation__usage__conv5_STATE_VARIABLE_Info_3);
        }
#line 1042 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv5_STATE_VARIABLE_Info_3);
#line 1038 "recompilation.usage.m"
      }
#line 1038 "recompilation.usage.m"
    else
#line 1043 "recompilation.usage.m"
      {
#line 1043 "recompilation.usage.m"
        MR_Word recompilation__usage__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 3)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 0)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 1)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 2)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 4)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 5)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 6)));
#line 1044 "recompilation.usage.m"
        MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 7)));
#line 1301 "recompilation.usage.m"
        MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_3;

#line 1301 "recompilation.usage.m"
        {
#line 1301 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[37], recompilation__usage__Modes_29, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv7_STATE_VARIABLE_Info_3);
        }
#line 1301 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_3);
#line 1043 "recompilation.usage.m"
      }
#line 1038 "recompilation.usage.m"
  }
#line 1035 "recompilation.usage.m"
}

#line 1274 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1274 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1274 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1274 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_16;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_16);
    }
#line 1274 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_16));
#line 1274 "recompilation.usage.m"
  }
#line 1274 "recompilation.usage.m"
}

#line 1412 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1412 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1412 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1412 "recompilation.usage.m"
{
#line 1412 "recompilation.usage.m"
  {
#line 1412 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1412 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1412 "recompilation.usage.m"
    {
#line 1412 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1412 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1412 "recompilation.usage.m"
  }
#line 1412 "recompilation.usage.m"
}

#line 1007 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_6,
#line 1007 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1007 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25)
#line 1007 "recompilation.usage.m"
{
#line 1010 "recompilation.usage.m"
  {
#line 1010 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1010 "recompilation.usage.m"
    MR_Word recompilation__usage__InstanceModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 0)));
#line 1010 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 3)));
#line 1010 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 4)));
#line 1010 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 1)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 2)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage___OriginalArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 5)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 6)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 7)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 8)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 9)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 1017 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 1018 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;

#line 1018 "recompilation.usage.m"
    {
#line 1018 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_18, &recompilation__usage__V_54_54);
    }
#line 1018 "recompilation.usage.m"
    {
#line 1018 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__InstanceModuleName_8, recompilation__usage__V_54_54);
    }
#line 1020 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1018 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1020 "recompilation.usage.m"
    else
#line 1021 "recompilation.usage.m"
      {
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstances0_19;
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIds1_21;
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIds_22;
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstances_23;
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_26_26;
#line 1021 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_27_27;
#line 1412 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_26_26;
#line 1274 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_27_27;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_35_35;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_36_36;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_37_37;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_38_38;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_39_39;
#line 1023 "recompilation.usage.m"
        MR_Word recompilation__usage__V_40_40;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIdsPrime_20;
#line 1024 "recompilation.usage.m"
        MR_Box recompilation__usage__conv4_ClassIdsPrime_20;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_41_41;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_42_42;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_43_43;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_46_46;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_47_47;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__V_44_44;

#line 1412 "recompilation.usage.m"
        {
#line 1412 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[32], recompilation__usage__Constraints_11, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv1_STATE_VARIABLE_Info_26_26);
        }
#line 1412 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_26_26 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_26_26);
#line 1274 "recompilation.usage.m"
        {
#line 1274 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[33], recompilation__usage__ArgTypes_12, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_26_26)), &recompilation__usage__conv3_STATE_VARIABLE_Info_27_27);
        }
#line 1274 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_27_27 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_27_27);
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__ModuleInstances0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 5)));
#line 1023 "recompilation.usage.m"
        recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 6)));
#line 1024 "recompilation.usage.m"
        {
#line 1024 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__ModuleInstances0_19, ((MR_Box) (recompilation__usage__InstanceModuleName_8)), &recompilation__usage__conv4_ClassIdsPrime_20);
        }
#line 1024 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1024 "recompilation.usage.m"
          {
#line 1024 "recompilation.usage.m"
            recompilation__usage__ClassIdsPrime_20 = ((MR_Word) recompilation__usage__conv4_ClassIdsPrime_20);
#line 1024 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1024 "recompilation.usage.m"
          }
#line 1026 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1025 "recompilation.usage.m"
          recompilation__usage__ClassIds1_21 = recompilation__usage__ClassIdsPrime_20;
#line 1026 "recompilation.usage.m"
        else
#line 1027 "recompilation.usage.m"
          {
#line 1027 "recompilation.usage.m"
            {
#line 1027 "recompilation.usage.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, &recompilation__usage__ClassIds1_21);
            }
#line 1027 "recompilation.usage.m"
          }
#line 1029 "recompilation.usage.m"
        {
#line 1029 "recompilation.usage.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, ((MR_Box) (recompilation__usage__ClassId_5)), recompilation__usage__ClassIds1_21, &recompilation__usage__ClassIds_22);
        }
#line 1030 "recompilation.usage.m"
        {
#line 1030 "recompilation.usage.m"
          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[1], ((MR_Box) (recompilation__usage__InstanceModuleName_8)), ((MR_Box) (recompilation__usage__ClassIds_22)), recompilation__usage__ModuleInstances0_19, &recompilation__usage__ModuleInstances_23);
        }
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 5)));
#line 1032 "recompilation.usage.m"
        recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 6)));
#line 1032 "recompilation.usage.m"
        {
#line 1032 "recompilation.usage.m"
          MR_Word base;
#line 1032 "recompilation.usage.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_25 = base;
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_42_42));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_43_43));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__ModuleInstances_23));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_45_45));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__V_46_46));
#line 1032 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_47_47));
#line 1032 "recompilation.usage.m"
        }
#line 1021 "recompilation.usage.m"
      }
#line 1010 "recompilation.usage.m"
  }
#line 1007 "recompilation.usage.m"
}

#line 1001 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1001 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1001 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1001 "recompilation.usage.m"
{
#line 1001 "recompilation.usage.m"
  {
#line 1001 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1001 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_STATE_VARIABLE_Info_25;

#line 1001 "recompilation.usage.m"
    {
#line 1001 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv3_STATE_VARIABLE_Info_25);
    }
#line 1001 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv3_STATE_VARIABLE_Info_25));
#line 1001 "recompilation.usage.m"
  }
#line 1001 "recompilation.usage.m"
}

#line 1503 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1503 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1503 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1503 "recompilation.usage.m"
{
#line 1503 "recompilation.usage.m"
  {
#line 1503 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1503 "recompilation.usage.m"
    {
#line 1503 "recompilation.usage.m"
      recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1503 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_9));
#line 1503 "recompilation.usage.m"
  }
#line 1503 "recompilation.usage.m"
}

#line 992 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__InstanceDefns_6,
#line 992 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 992 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 992 "recompilation.usage.m"
{
#line 996 "recompilation.usage.m"
  {
#line 996 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 996 "recompilation.usage.m"
    MR_Word recompilation__usage__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_5, (MR_Integer) 0)));
#line 996 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_5, (MR_Integer) 1)));
#line 996 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassIdItem_10;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_24;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 1463 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 1464 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_26_26;
#line 1464 "recompilation.usage.m"
    MR_String recompilation__usage__V_25_25;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33;
#line 1465 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34;

#line 998 "recompilation.usage.m"
    {
#line 998 "recompilation.usage.m"
      recompilation__usage__ClassIdItem_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 998 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, 0) = ((MR_Box) (recompilation__usage__Name_8));
#line 998 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, 1) = ((MR_Box) (recompilation__usage__Arity_9));
#line 998 "recompilation.usage.m"
    }
#line 1464 "recompilation.usage.m"
    recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, (MR_Integer) 0)));
#line 1464 "recompilation.usage.m"
    recompilation__usage__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, (MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1464 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1464 "recompilation.usage.m"
      {
#line 1464 "recompilation.usage.m"
        recompilation__usage__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_27_27, (MR_Integer) 0)));
#line 1464 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_27_27, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1465 "recompilation.usage.m"
        recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1465 "recompilation.usage.m"
        {
#line 1465 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_28_28, &recompilation__usage__V_35_35);
        }
#line 1465 "recompilation.usage.m"
        {
#line 1465 "recompilation.usage.m"
          recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_24, recompilation__usage__V_35_35);
        }
#line 1464 "recompilation.usage.m"
      }
#line 1003 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1000 "recompilation.usage.m"
      {
#line 1000 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1000 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15;
#line 1000 "recompilation.usage.m"
        MR_Word recompilation__usage__Dependencies_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1505 "recompilation.usage.m"
        MR_Word recompilation__usage__EquivTypes_43;
#line 1501 "recompilation.usage.m"
        MR_Word recompilation__usage__V_44_44;
#line 1501 "recompilation.usage.m"
        MR_Box recompilation__usage__conv0_EquivTypes_43;
#line 1001 "recompilation.usage.m"
        MR_Box recompilation__usage__conv4_STATE_VARIABLE_Info_12;

#line 1501 "recompilation.usage.m"
        {
#line 1501 "recompilation.usage.m"
          recompilation__usage__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1501 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_44_44, 0) = ((MR_Box) ((MR_Integer) 4));
#line 1501 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_44_44, 1) = ((MR_Box) (recompilation__usage__ClassIdItem_10));
#line 1501 "recompilation.usage.m"
        }
#line 1501 "recompilation.usage.m"
        {
#line 1501 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation__usage_scalar_common_2[10], recompilation__usage__Dependencies_42, ((MR_Box) (recompilation__usage__V_44_44)), &recompilation__usage__conv0_EquivTypes_43);
        }
#line 1501 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1501 "recompilation.usage.m"
          {
#line 1501 "recompilation.usage.m"
            recompilation__usage__EquivTypes_43 = ((MR_Word) recompilation__usage__conv0_EquivTypes_43);
#line 1501 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1501 "recompilation.usage.m"
          }
#line 1505 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1503 "recompilation.usage.m"
          {
#line 1503 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeCtorInfo_27_59 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 1503 "recompilation.usage.m"
            MR_Word recompilation__usage__V_46_46;
#line 1503 "recompilation.usage.m"
            MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_14_14;

#line 1504 "recompilation.usage.m"
            {
#line 1504 "recompilation.usage.m"
              recompilation__usage__V_46_46 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_27_59, recompilation__usage__EquivTypes_43);
            }
#line 1503 "recompilation.usage.m"
            {
#line 1503 "recompilation.usage.m"
              mercury__list__foldl_4_p_0(recompilation__usage__TypeCtorInfo_27_59, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[31], recompilation__usage__V_46_46, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv2_STATE_VARIABLE_Info_14_14);
            }
#line 1503 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_14_14 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_14_14);
#line 1503 "recompilation.usage.m"
          }
#line 1505 "recompilation.usage.m"
        else
#line 1503 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 1001 "recompilation.usage.m"
        {
#line 1001 "recompilation.usage.m"
          recompilation__usage__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[2]));
#line 1001 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_2));
#line 1001 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1001 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 3) = ((MR_Box) (recompilation__usage__ClassIdItem_10));
#line 1001 "recompilation.usage.m"
        }
#line 1001 "recompilation.usage.m"
        {
#line 1001 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_15_15, recompilation__usage__InstanceDefns_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_14_14)), &recompilation__usage__conv4_STATE_VARIABLE_Info_12);
        }
#line 1001 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv4_STATE_VARIABLE_Info_12);
#line 1000 "recompilation.usage.m"
      }
#line 1003 "recompilation.usage.m"
    else
#line 1001 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_12 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 996 "recompilation.usage.m"
  }
#line 992 "recompilation.usage.m"
}

#line 974 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 974 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 974 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 974 "recompilation.usage.m"
{
#line 974 "recompilation.usage.m"
  {
#line 974 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 974 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_25;

#line 974 "recompilation.usage.m"
    {
#line 974 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_25);
    }
#line 974 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_25));
#line 974 "recompilation.usage.m"
  }
#line 974 "recompilation.usage.m"
}

#line 970 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 970 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 970 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 970 "recompilation.usage.m"
{
#line 970 "recompilation.usage.m"
  {
#line 970 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 970 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_STATE_VARIABLE_Info_3;

#line 970 "recompilation.usage.m"
    {
#line 970 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_method_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv3_STATE_VARIABLE_Info_3);
    }
#line 970 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv3_STATE_VARIABLE_Info_3));
#line 970 "recompilation.usage.m"
  }
#line 970 "recompilation.usage.m"
}

#line 919 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 919 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_3,
#line 919 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_4)
#line 919 "recompilation.usage.m"
{
#line 922 "recompilation.usage.m"
  {
#line 922 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 922 "recompilation.usage.m"
    if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 9))
#line 987 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 922 "recompilation.usage.m"
    else
#line 922 "recompilation.usage.m"
      if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 7))
#line 981 "recompilation.usage.m"
        {
#line 982 "recompilation.usage.m"
          {
#line 982 "recompilation.usage.m"
            recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 1, recompilation__usage__HeadVar__2_2, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 982 "recompilation.usage.m"
            return;
          }
#line 981 "recompilation.usage.m"
        }
#line 922 "recompilation.usage.m"
      else
#line 922 "recompilation.usage.m"
        if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 5))
#line 983 "recompilation.usage.m"
          {
#line 984 "recompilation.usage.m"
            {
#line 984 "recompilation.usage.m"
              mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_item\'/4", (MR_String) "functor");
#line 984 "recompilation.usage.m"
              return;
            }
#line 983 "recompilation.usage.m"
          }
#line 922 "recompilation.usage.m"
        else
#line 922 "recompilation.usage.m"
          if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 3))
#line 949 "recompilation.usage.m"
            {
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__Insts_39;
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__UserInsts_40;
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__UserInstDefns_41;
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__InstId_42;
#line 949 "recompilation.usage.m"
              MR_Word recompilation__usage__InstDefn_43;
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 950 "recompilation.usage.m"
              MR_Word recompilation__usage__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 955 "recompilation.usage.m"
              MR_Box recompilation__usage__conv0_InstDefn_43;

#line 951 "recompilation.usage.m"
              {
#line 951 "recompilation.usage.m"
                hlds__hlds_module__module_info_get_inst_table_2_p_0(recompilation__usage__ModuleInfo_38, &recompilation__usage__Insts_39);
              }
#line 952 "recompilation.usage.m"
              {
#line 952 "recompilation.usage.m"
                hlds__hlds_data__inst_table_get_user_insts_2_p_0(recompilation__usage__Insts_39, &recompilation__usage__UserInsts_40);
              }
#line 953 "recompilation.usage.m"
              {
#line 953 "recompilation.usage.m"
                hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(recompilation__usage__UserInsts_40, &recompilation__usage__UserInstDefns_41);
              }
#line 954 "recompilation.usage.m"
              {
#line 954 "recompilation.usage.m"
                recompilation__usage__InstId_42 = recompilation__item_name_to_inst_id_1_f_0(recompilation__usage__HeadVar__2_2);
              }
#line 955 "recompilation.usage.m"
              {
#line 955 "recompilation.usage.m"
                mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, recompilation__usage__UserInstDefns_41, ((MR_Box) (recompilation__usage__InstId_42)), &recompilation__usage__conv0_InstDefn_43);
              }
#line 955 "recompilation.usage.m"
              recompilation__usage__InstDefn_43 = ((MR_Word) recompilation__usage__conv0_InstDefn_43);
#line 956 "recompilation.usage.m"
              {
#line 956 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_defn_3_p_0(recompilation__usage__InstDefn_43, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 956 "recompilation.usage.m"
                return;
              }
#line 949 "recompilation.usage.m"
            }
#line 922 "recompilation.usage.m"
          else
#line 922 "recompilation.usage.m"
            if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 2))
#line 942 "recompilation.usage.m"
              {
#line 942 "recompilation.usage.m"
                MR_Word recompilation__usage__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 942 "recompilation.usage.m"
                MR_Word recompilation__usage__Modes_29;
#line 942 "recompilation.usage.m"
                MR_Word recompilation__usage__ModeDefns_30;
#line 942 "recompilation.usage.m"
                MR_Word recompilation__usage__ModeId_31;
#line 942 "recompilation.usage.m"
                MR_Word recompilation__usage__ModeDefn_32;
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 943 "recompilation.usage.m"
                MR_Word recompilation__usage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 947 "recompilation.usage.m"
                MR_Box recompilation__usage__conv1_ModeDefn_32;

#line 944 "recompilation.usage.m"
                {
#line 944 "recompilation.usage.m"
                  hlds__hlds_module__module_info_get_mode_table_2_p_0(recompilation__usage__ModuleInfo_28, &recompilation__usage__Modes_29);
                }
#line 945 "recompilation.usage.m"
                {
#line 945 "recompilation.usage.m"
                  hlds__hlds_data__mode_table_get_mode_defns_2_p_0(recompilation__usage__Modes_29, &recompilation__usage__ModeDefns_30);
                }
#line 946 "recompilation.usage.m"
                {
#line 946 "recompilation.usage.m"
                  recompilation__usage__ModeId_31 = recompilation__item_name_to_mode_id_1_f_0(recompilation__usage__HeadVar__2_2);
                }
#line 947 "recompilation.usage.m"
                {
#line 947 "recompilation.usage.m"
                  mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, recompilation__usage__ModeDefns_30, ((MR_Box) (recompilation__usage__ModeId_31)), &recompilation__usage__conv1_ModeDefn_32);
                }
#line 947 "recompilation.usage.m"
                recompilation__usage__ModeDefn_32 = ((MR_Word) recompilation__usage__conv1_ModeDefn_32);
#line 948 "recompilation.usage.m"
                {
#line 948 "recompilation.usage.m"
                  recompilation__usage__find_items_used_by_mode_defn_3_p_0(recompilation__usage__ModeDefn_32, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 948 "recompilation.usage.m"
                  return;
                }
#line 942 "recompilation.usage.m"
              }
#line 922 "recompilation.usage.m"
            else
#line 922 "recompilation.usage.m"
              if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 8))
#line 985 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 922 "recompilation.usage.m"
              else
#line 922 "recompilation.usage.m"
                if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 6))
#line 979 "recompilation.usage.m"
                  {
#line 980 "recompilation.usage.m"
                    {
#line 980 "recompilation.usage.m"
                      recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 0, recompilation__usage__HeadVar__2_2, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 980 "recompilation.usage.m"
                      return;
                    }
#line 979 "recompilation.usage.m"
                  }
#line 922 "recompilation.usage.m"
                else
#line 922 "recompilation.usage.m"
                  if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 0))
#line 922 "recompilation.usage.m"
                    {
#line 922 "recompilation.usage.m"
                      MR_Word recompilation__usage__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 922 "recompilation.usage.m"
                      MR_Word recompilation__usage__TypeTable_8;
#line 922 "recompilation.usage.m"
                      MR_Word recompilation__usage__TypeCtor_9;
#line 922 "recompilation.usage.m"
                      MR_Word recompilation__usage__TypeDefn_10;
#line 922 "recompilation.usage.m"
                      MR_Word recompilation__usage__TypeBody_11;
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 923 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 932 "recompilation.usage.m"
                      MR_Word recompilation__usage__Type_12;

#line 924 "recompilation.usage.m"
                      {
#line 924 "recompilation.usage.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(recompilation__usage__ModuleInfo_7, &recompilation__usage__TypeTable_8);
                      }
#line 925 "recompilation.usage.m"
                      {
#line 925 "recompilation.usage.m"
                        recompilation__usage__TypeCtor_9 = recompilation__item_name_to_type_ctor_1_f_0(recompilation__usage__HeadVar__2_2);
                      }
#line 926 "recompilation.usage.m"
                      {
#line 926 "recompilation.usage.m"
                        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(recompilation__usage__TypeTable_8, recompilation__usage__TypeCtor_9, &recompilation__usage__TypeDefn_10);
                      }
#line 927 "recompilation.usage.m"
                      {
#line 927 "recompilation.usage.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(recompilation__usage__TypeDefn_10, &recompilation__usage__TypeBody_11);
                      }
#line 928 "recompilation.usage.m"
                      recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__TypeBody_11)) == (MR_mktag((MR_Integer) 2)));
#line 928 "recompilation.usage.m"
                      if (recompilation__usage__succeeded)
#line 928 "recompilation.usage.m"
                        {
#line 928 "recompilation.usage.m"
                          recompilation__usage__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__TypeBody_11, (MR_Integer) 0)));
#line 931 "recompilation.usage.m"
                          {
#line 931 "recompilation.usage.m"
                            recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_12, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 931 "recompilation.usage.m"
                            return;
                          }
#line 928 "recompilation.usage.m"
                        }
#line 928 "recompilation.usage.m"
                      else
#line 931 "recompilation.usage.m"
                        *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 922 "recompilation.usage.m"
                    }
#line 922 "recompilation.usage.m"
                  else
#line 922 "recompilation.usage.m"
                    if ((recompilation__usage__HeadVar__1_1 == (MR_Integer) 1))
#line 935 "recompilation.usage.m"
                      {
#line 935 "recompilation.usage.m"
                        MR_Word recompilation__usage__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 935 "recompilation.usage.m"
                        MR_Word recompilation__usage__TypeTable_19;
#line 935 "recompilation.usage.m"
                        MR_Word recompilation__usage__TypeCtor_20;
#line 935 "recompilation.usage.m"
                        MR_Word recompilation__usage__TypeDefn_21;
#line 935 "recompilation.usage.m"
                        MR_Word recompilation__usage__TypeBody_22;
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 936 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));

#line 937 "recompilation.usage.m"
                        {
#line 937 "recompilation.usage.m"
                          hlds__hlds_module__module_info_get_type_table_2_p_0(recompilation__usage__ModuleInfo_18, &recompilation__usage__TypeTable_19);
                        }
#line 938 "recompilation.usage.m"
                        {
#line 938 "recompilation.usage.m"
                          recompilation__usage__TypeCtor_20 = recompilation__item_name_to_type_ctor_1_f_0(recompilation__usage__HeadVar__2_2);
                        }
#line 939 "recompilation.usage.m"
                        {
#line 939 "recompilation.usage.m"
                          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(recompilation__usage__TypeTable_19, recompilation__usage__TypeCtor_20, &recompilation__usage__TypeDefn_21);
                        }
#line 940 "recompilation.usage.m"
                        {
#line 940 "recompilation.usage.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(recompilation__usage__TypeDefn_21, &recompilation__usage__TypeBody_22);
                        }
#line 941 "recompilation.usage.m"
                        {
#line 941 "recompilation.usage.m"
                          recompilation__usage__find_items_used_by_type_body_3_p_0(recompilation__usage__TypeBody_22, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 941 "recompilation.usage.m"
                          return;
                        }
#line 935 "recompilation.usage.m"
                      }
#line 922 "recompilation.usage.m"
                    else
#line 957 "recompilation.usage.m"
                      {
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__TypeCtorInfo_146_146;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__ClassName_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 957 "recompilation.usage.m"
                        MR_Integer recompilation__usage__ClassArity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__ClassId_51;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__ModuleInfo_52;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__Classes_53;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__ClassDefn_54;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__Constraints_55;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__ClassInterface_56;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__Instances_58;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__STATE_VARIABLE_Info_62_62;
#line 957 "recompilation.usage.m"
                        MR_Word recompilation__usage__STATE_VARIABLE_Info_64_64;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_118_118;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_119_119;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_120_120;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_121_121;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_122_122;
#line 960 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_123_123;
#line 962 "recompilation.usage.m"
                        MR_Box recompilation__usage__conv2_ClassDefn_54;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_124_124;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_125_125;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_126_126;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_127_127;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_128_128;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_130_130;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_131_131;
#line 963 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_132_132;
#line 976 "recompilation.usage.m"
                        MR_Word recompilation__usage__InstanceDefns_59;
#line 973 "recompilation.usage.m"
                        MR_Box recompilation__usage__conv5_InstanceDefns_59;

#line 959 "recompilation.usage.m"
                        {
#line 959 "recompilation.usage.m"
                          recompilation__usage__ClassId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 959 "recompilation.usage.m"
                          MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_51, 0) = ((MR_Box) (recompilation__usage__ClassName_49));
#line 959 "recompilation.usage.m"
                          MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_51, 1) = ((MR_Box) (recompilation__usage__ClassArity_50));
#line 959 "recompilation.usage.m"
                        }
#line 960 "recompilation.usage.m"
                        recompilation__usage__ModuleInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 960 "recompilation.usage.m"
                        recompilation__usage__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 961 "recompilation.usage.m"
                        {
#line 961 "recompilation.usage.m"
                          hlds__hlds_module__module_info_get_class_table_2_p_0(recompilation__usage__ModuleInfo_52, &recompilation__usage__Classes_53);
                        }
#line 14171 "recompilation.usage.c"
                        recompilation__usage__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 962 "recompilation.usage.m"
                        {
#line 962 "recompilation.usage.m"
                          mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_146_146, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, recompilation__usage__Classes_53, ((MR_Box) (recompilation__usage__ClassId_51)), &recompilation__usage__conv2_ClassDefn_54);
                        }
#line 962 "recompilation.usage.m"
                        recompilation__usage__ClassDefn_54 = ((MR_Word) recompilation__usage__conv2_ClassDefn_54);
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 0)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__Constraints_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 1)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 2)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 3)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 4)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 5)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__ClassInterface_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 6)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 7)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 8)));
#line 963 "recompilation.usage.m"
                        recompilation__usage__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_54, (MR_Integer) 9)));
#line 965 "recompilation.usage.m"
                        {
#line 965 "recompilation.usage.m"
                          recompilation__usage__find_items_used_by_class_constraints_3_p_0(recompilation__usage__Constraints_55, recompilation__usage__STATE_VARIABLE_Info_0_3, &recompilation__usage__STATE_VARIABLE_Info_62_62);
                        }
#line 968 "recompilation.usage.m"
                        if ((recompilation__usage__ClassInterface_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "recompilation.usage.m"
                          recompilation__usage__STATE_VARIABLE_Info_64_64 = recompilation__usage__STATE_VARIABLE_Info_62_62;
#line 968 "recompilation.usage.m"
                        else
#line 969 "recompilation.usage.m"
                          {
#line 969 "recompilation.usage.m"
                            MR_Word recompilation__usage__Methods_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ClassInterface_56, (MR_Integer) 0)));
#line 970 "recompilation.usage.m"
                            MR_Box recompilation__usage__conv4_STATE_VARIABLE_Info_64_64;

#line 970 "recompilation.usage.m"
                            {
#line 970 "recompilation.usage.m"
                              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[30], recompilation__usage__Methods_57, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_62_62)), &recompilation__usage__conv4_STATE_VARIABLE_Info_64_64);
                            }
#line 970 "recompilation.usage.m"
                            recompilation__usage__STATE_VARIABLE_Info_64_64 = ((MR_Word) recompilation__usage__conv4_STATE_VARIABLE_Info_64_64);
#line 969 "recompilation.usage.m"
                          }
#line 972 "recompilation.usage.m"
                        {
#line 972 "recompilation.usage.m"
                          hlds__hlds_module__module_info_get_instance_table_2_p_0(recompilation__usage__ModuleInfo_52, &recompilation__usage__Instances_58);
                        }
#line 973 "recompilation.usage.m"
                        {
#line 973 "recompilation.usage.m"
                          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_146_146, (MR_Word) &recompilation__usage_scalar_common_2[6], recompilation__usage__Instances_58, ((MR_Box) (recompilation__usage__ClassId_51)), &recompilation__usage__conv5_InstanceDefns_59);
                        }
#line 973 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 973 "recompilation.usage.m"
                          {
#line 973 "recompilation.usage.m"
                            recompilation__usage__InstanceDefns_59 = ((MR_Word) recompilation__usage__conv5_InstanceDefns_59);
#line 973 "recompilation.usage.m"
                            recompilation__usage__succeeded = MR_TRUE;
#line 973 "recompilation.usage.m"
                          }
#line 976 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 974 "recompilation.usage.m"
                          {
#line 974 "recompilation.usage.m"
                            MR_Word recompilation__usage__V_65_65;
#line 974 "recompilation.usage.m"
                            MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_4;

#line 974 "recompilation.usage.m"
                            {
#line 974 "recompilation.usage.m"
                              recompilation__usage__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 974 "recompilation.usage.m"
                              MR_hl_field(MR_mktag(0), recompilation__usage__V_65_65, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[2]));
#line 974 "recompilation.usage.m"
                              MR_hl_field(MR_mktag(0), recompilation__usage__V_65_65, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_2));
#line 974 "recompilation.usage.m"
                              MR_hl_field(MR_mktag(0), recompilation__usage__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 974 "recompilation.usage.m"
                              MR_hl_field(MR_mktag(0), recompilation__usage__V_65_65, 3) = ((MR_Box) (recompilation__usage__HeadVar__2_2));
#line 974 "recompilation.usage.m"
                            }
#line 974 "recompilation.usage.m"
                            {
#line 974 "recompilation.usage.m"
                              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_65_65, recompilation__usage__InstanceDefns_59, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_64_64)), &recompilation__usage__conv7_STATE_VARIABLE_Info_4);
                            }
#line 974 "recompilation.usage.m"
                            *recompilation__usage__STATE_VARIABLE_Info_4 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_4);
#line 974 "recompilation.usage.m"
                          }
#line 976 "recompilation.usage.m"
                        else
#line 974 "recompilation.usage.m"
                          *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_64_64;
#line 957 "recompilation.usage.m"
                      }
#line 922 "recompilation.usage.m"
  }
#line 919 "recompilation.usage.m"
}

#line 793 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage___SymName_7,
#line 793 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 793 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 793 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10)
#line 793 "recompilation.usage.m"
{
#line 796 "recompilation.usage.m"
  {
#line 796 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 796 "recompilation.usage.m"
    {
#line 796 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(recompilation__usage__ModuleInfo_6, recompilation__usage__Arity_8, recompilation__usage__PredId_9, recompilation__usage__ResolvedCtor_10);
    }
#line 796 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 796 "recompilation.usage.m"
  }
#line 793 "recompilation.usage.m"
}

#line 774 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
#line 774 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 774 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 774 "recompilation.usage.m"
{
#line 774 "recompilation.usage.m"
  {
#line 774 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 774 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 774 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_HeadVar__2_48;

#line 774 "recompilation.usage.m"
    {
#line 774 "recompilation.usage.m"
      recompilation__usage__conv3_HeadVar__2_48 = recompilation__usage__IntroducedFrom__func__find_matching_functors__774__1_1_f_0(((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 774 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv3_HeadVar__2_48));
#line 774 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 774 "recompilation.usage.m"
  }
#line 774 "recompilation.usage.m"
}

#line 764 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
#line 764 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 764 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 764 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_2)
#line 764 "recompilation.usage.m"
{
#line 764 "recompilation.usage.m"
  {
#line 764 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 764 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 764 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_ResolvedCtor_10;

#line 764 "recompilation.usage.m"
    {
#line 764 "recompilation.usage.m"
      recompilation__usage__succeeded = recompilation__usage__get_pred_or_func_ctors_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv1_ResolvedCtor_10);
    }
#line 764 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 764 "recompilation.usage.m"
      {
#line 764 "recompilation.usage.m"
        *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv1_ResolvedCtor_10));
#line 764 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 764 "recompilation.usage.m"
      }
#line 764 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 764 "recompilation.usage.m"
  }
#line 764 "recompilation.usage.m"
}

#line 751 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
#line 751 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 751 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 751 "recompilation.usage.m"
{
#line 751 "recompilation.usage.m"
  {
#line 751 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 751 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 751 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_HeadVar__2_42;

#line 751 "recompilation.usage.m"
    {
#line 751 "recompilation.usage.m"
      recompilation__usage__conv0_HeadVar__2_42 = recompilation__usage__IntroducedFrom__func__find_matching_functors__751__1_1_f_0(((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 751 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__2_42));
#line 751 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 751 "recompilation.usage.m"
  }
#line 751 "recompilation.usage.m"
}

#line 729 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
#line 729 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_5,
#line 729 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_6,
#line 729 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_7,
#line 729 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedConstructors_8)
#line 729 "recompilation.usage.m"
{
#line 732 "recompilation.usage.m"
  {
#line 732 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_75_75;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__Ctors_9;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsId_10;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns1_12;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns_16;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingConstructors_17;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__PredicateTable_21;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__PredIds_22;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingPreds_23;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingFields_28;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 732 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 738 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns0_11;
#line 747 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns2_15;
#line 742 "recompilation.usage.m"
    MR_Word recompilation__usage__SymNameMinusNew_13;
#line 742 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsIdMinusNew_14;
#line 742 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 787 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldDefns_27;
#line 770 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_79_79;
#line 770 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_80_80;
#line 770 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldName_25;
#line 770 "recompilation.usage.m"
    MR_Word recompilation__usage__CtorFields_26;
#line 770 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_82_82;
#line 769 "recompilation.usage.m"
    MR_Word recompilation__usage__V_24_24;
#line 772 "recompilation.usage.m"
    MR_Box recompilation__usage__conv2_FieldDefns_27;

#line 734 "recompilation.usage.m"
    {
#line 734 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__Ctors_9);
    }
#line 735 "recompilation.usage.m"
    {
#line 735 "recompilation.usage.m"
      recompilation__usage__V_38_38 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 735 "recompilation.usage.m"
    {
#line 735 "recompilation.usage.m"
      recompilation__usage__ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 735 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 1) = ((MR_Box) (recompilation__usage__SymName_6));
#line 735 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 2) = ((MR_Box) (recompilation__usage__Arity_7));
#line 735 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 3) = ((MR_Box) (recompilation__usage__V_38_38));
#line 735 "recompilation.usage.m"
    }
#line 736 "recompilation.usage.m"
    {
#line 736 "recompilation.usage.m"
      recompilation__usage__succeeded = hlds__hlds_data__search_cons_table_3_p_0(recompilation__usage__Ctors_9, recompilation__usage__ConsId_10, &recompilation__usage__ConsDefns0_11);
    }
#line 738 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 737 "recompilation.usage.m"
      recompilation__usage__ConsDefns1_12 = recompilation__usage__ConsDefns0_11;
#line 738 "recompilation.usage.m"
    else
#line 739 "recompilation.usage.m"
      recompilation__usage__ConsDefns1_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 742 "recompilation.usage.m"
    {
#line 742 "recompilation.usage.m"
      recompilation__usage__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(recompilation__usage__SymName_6, &recompilation__usage__SymNameMinusNew_13);
    }
#line 742 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 742 "recompilation.usage.m"
      {
#line 743 "recompilation.usage.m"
        {
#line 743 "recompilation.usage.m"
          recompilation__usage__V_39_39 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 743 "recompilation.usage.m"
        {
#line 743 "recompilation.usage.m"
          recompilation__usage__ConsIdMinusNew_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 743 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 1) = ((MR_Box) (recompilation__usage__SymNameMinusNew_13));
#line 743 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 2) = ((MR_Box) (recompilation__usage__Arity_7));
#line 743 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 3) = ((MR_Box) (recompilation__usage__V_39_39));
#line 743 "recompilation.usage.m"
        }
#line 744 "recompilation.usage.m"
        {
#line 744 "recompilation.usage.m"
          recompilation__usage__succeeded = hlds__hlds_data__search_cons_table_3_p_0(recompilation__usage__Ctors_9, recompilation__usage__ConsIdMinusNew_14, &recompilation__usage__ConsDefns2_15);
        }
#line 742 "recompilation.usage.m"
      }
#line 747 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 746 "recompilation.usage.m"
      {
#line 746 "recompilation.usage.m"
        {
#line 746 "recompilation.usage.m"
          recompilation__usage__ConsDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, recompilation__usage__ConsDefns1_12, recompilation__usage__ConsDefns2_15);
        }
#line 746 "recompilation.usage.m"
      }
#line 747 "recompilation.usage.m"
    else
#line 748 "recompilation.usage.m"
      recompilation__usage__ConsDefns_16 = recompilation__usage__ConsDefns1_12;
#line 14591 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_75_75 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 751 "recompilation.usage.m"
    {
#line 751 "recompilation.usage.m"
      recompilation__usage__MatchingConstructors_17 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, recompilation__usage__TypeCtorInfo_75_75, (MR_Word) &recompilation__usage_scalar_common_1[28], recompilation__usage__ConsDefns_16);
    }
#line 760 "recompilation.usage.m"
    {
#line 760 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__PredicateTable_21);
    }
#line 761 "recompilation.usage.m"
    {
#line 761 "recompilation.usage.m"
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(recompilation__usage__PredicateTable_21, (MR_Integer) 1, recompilation__usage__SymName_6, &recompilation__usage__PredIds_22);
    }
#line 764 "recompilation.usage.m"
    {
#line 764 "recompilation.usage.m"
      recompilation__usage__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[4]));
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 1) = ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_2));
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 3) = ((MR_Box) (recompilation__usage__ModuleInfo_5));
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 4) = ((MR_Box) (recompilation__usage__SymName_6));
#line 764 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 5) = ((MR_Box) (recompilation__usage__Arity_7));
#line 764 "recompilation.usage.m"
    }
#line 763 "recompilation.usage.m"
    {
#line 763 "recompilation.usage.m"
      recompilation__usage__MatchingPreds_23 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_45_45, recompilation__usage__PredIds_22);
    }
#line 769 "recompilation.usage.m"
    {
#line 769 "recompilation.usage.m"
      recompilation__usage__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(recompilation__usage__ModuleInfo_5, recompilation__usage__SymName_6, &recompilation__usage__V_82_82, &recompilation__usage__V_24_24, &recompilation__usage__FieldName_25);
    }
#line 770 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 770 "recompilation.usage.m"
      {
#line 769 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_7 == recompilation__usage__V_82_82);
#line 770 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 770 "recompilation.usage.m"
          {
#line 771 "recompilation.usage.m"
            {
#line 771 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__CtorFields_26);
            }
#line 14651 "recompilation.usage.c"
            recompilation__usage__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14653 "recompilation.usage.c"
            recompilation__usage__TypeInfo_80_80 = (MR_Word) &recompilation__usage_scalar_common_2[7];
#line 772 "recompilation.usage.m"
            {
#line 772 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_79_79, recompilation__usage__TypeInfo_80_80, recompilation__usage__CtorFields_26, ((MR_Box) (recompilation__usage__FieldName_25)), &recompilation__usage__conv2_FieldDefns_27);
            }
#line 772 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 772 "recompilation.usage.m"
              {
#line 772 "recompilation.usage.m"
                recompilation__usage__FieldDefns_27 = ((MR_Word) recompilation__usage__conv2_FieldDefns_27);
#line 772 "recompilation.usage.m"
                recompilation__usage__succeeded = MR_TRUE;
#line 772 "recompilation.usage.m"
              }
#line 770 "recompilation.usage.m"
          }
#line 770 "recompilation.usage.m"
      }
#line 787 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 774 "recompilation.usage.m"
      {
#line 774 "recompilation.usage.m"
        {
#line 774 "recompilation.usage.m"
          recompilation__usage__MatchingFields_28 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, recompilation__usage__TypeCtorInfo_75_75, (MR_Word) &recompilation__usage_scalar_common_1[29], recompilation__usage__FieldDefns_27);
        }
#line 774 "recompilation.usage.m"
      }
#line 787 "recompilation.usage.m"
    else
#line 788 "recompilation.usage.m"
      recompilation__usage__MatchingFields_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "recompilation.usage.m"
    {
#line 791 "recompilation.usage.m"
      recompilation__usage__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_57_57, 0) = ((MR_Box) (recompilation__usage__MatchingFields_28));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recompilation.usage.m"
    }
#line 791 "recompilation.usage.m"
    {
#line 791 "recompilation.usage.m"
      recompilation__usage__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, 0) = ((MR_Box) (recompilation__usage__MatchingPreds_23));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, 1) = ((MR_Box) (recompilation__usage__V_57_57));
#line 791 "recompilation.usage.m"
    }
#line 791 "recompilation.usage.m"
    {
#line 791 "recompilation.usage.m"
      recompilation__usage__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_55_55, 0) = ((MR_Box) (recompilation__usage__MatchingConstructors_17));
#line 791 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_55_55, 1) = ((MR_Box) (recompilation__usage__V_56_56));
#line 791 "recompilation.usage.m"
    }
#line 790 "recompilation.usage.m"
    {
#line 790 "recompilation.usage.m"
      recompilation__usage__V_54_54 = mercury__list__condense_1_f_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_55_55);
    }
#line 790 "recompilation.usage.m"
    {
#line 790 "recompilation.usage.m"
      *recompilation__usage__ResolvedConstructors_8 = mercury__set__list_to_set_1_f_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_54_54);
    }
#line 732 "recompilation.usage.m"
  }
#line 729 "recompilation.usage.m"
}

#line 720 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 720 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 720 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 720 "recompilation.usage.m"
{
#line 720 "recompilation.usage.m"
  {
#line 720 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 720 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_5;

#line 720 "recompilation.usage.m"
    {
#line 720 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functor_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_5);
    }
#line 720 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_5));
#line 720 "recompilation.usage.m"
  }
#line 720 "recompilation.usage.m"
}

#line 709 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_9,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_10,
#line 709 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_11,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_12,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19,
#line 709 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_20,
#line 709 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_21)
#line 709 "recompilation.usage.m"
{
#line 715 "recompilation.usage.m"
  {
#line 715 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 715 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_34_34;
#line 715 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 715 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingCtors_16;
#line 715 "recompilation.usage.m"
    MR_String recompilation__usage__Name_17;
#line 715 "recompilation.usage.m"
    MR_Word recompilation__usage__V_22_22;
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 716 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 720 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_21;

#line 718 "recompilation.usage.m"
    {
#line 718 "recompilation.usage.m"
      recompilation__usage__find_matching_functors_4_p_0(recompilation__usage__ModuleInfo_15, recompilation__usage__SymName_10, recompilation__usage__Arity_11, &recompilation__usage__MatchingCtors_16);
    }
#line 719 "recompilation.usage.m"
    {
#line 719 "recompilation.usage.m"
      recompilation__usage__Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_10);
    }
#line 720 "recompilation.usage.m"
    {
#line 720 "recompilation.usage.m"
      recompilation__usage__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 720 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[3]));
#line 720 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 1) = ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_1));
#line 720 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 720 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 3) = ((MR_Box) (recompilation__usage__Name_17));
#line 720 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 4) = ((MR_Box) (recompilation__usage__Arity_11));
#line 720 "recompilation.usage.m"
    }
#line 14842 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_34_34 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 720 "recompilation.usage.m"
    {
#line 720 "recompilation.usage.m"
      mercury__set__fold_4_p_0(recompilation__usage__TypeCtorInfo_34_34, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_22_22, recompilation__usage__MatchingCtors_16, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_20)), &recompilation__usage__conv1_STATE_VARIABLE_Info_21);
    }
#line 720 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_21 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_21);
#line 722 "recompilation.usage.m"
    {
#line 722 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__set__empty_1_p_0(recompilation__usage__TypeCtorInfo_34_34, recompilation__usage__MatchingCtors_16);
    }
#line 724 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 723 "recompilation.usage.m"
      {
#line 723 "recompilation.usage.m"
        *recompilation__usage__Recorded_12 = (MR_Integer) 0;
#line 723 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19 = recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18;
#line 723 "recompilation.usage.m"
      }
#line 724 "recompilation.usage.m"
    else
#line 725 "recompilation.usage.m"
      {
#line 725 "recompilation.usage.m"
        *recompilation__usage__Recorded_12 = (MR_Integer) 1;
#line 726 "recompilation.usage.m"
        {
#line 726 "recompilation.usage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[4], ((MR_Box) (recompilation__usage__ModuleQualifier_9)), ((MR_Box) (recompilation__usage__MatchingCtors_16)), recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18, recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19);
#line 726 "recompilation.usage.m"
          return;
        }
#line 725 "recompilation.usage.m"
      }
#line 715 "recompilation.usage.m"
  }
#line 709 "recompilation.usage.m"
}

#line 689 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 689 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 689 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 689 "recompilation.usage.m"
{
#line 689 "recompilation.usage.m"
  {
#line 689 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 689 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_35;

#line 689 "recompilation.usage.m"
    {
#line 689 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_35);
    }
#line 689 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_35));
#line 689 "recompilation.usage.m"
  }
#line 689 "recompilation.usage.m"
}

#line 681 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
#line 681 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 681 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 681 "recompilation.usage.m"
{
#line 681 "recompilation.usage.m"
  {
#line 681 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 681 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 681 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_HeadVar__3_36;

#line 681 "recompilation.usage.m"
    {
#line 681 "recompilation.usage.m"
      recompilation__usage__conv0_HeadVar__3_36 = recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__681__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 681 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__3_36));
#line 681 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 681 "recompilation.usage.m"
  }
#line 681 "recompilation.usage.m"
}

#line 666 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_10,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_12,
#line 666 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_13,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_MatchingNames_0_28,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_MatchingNames_29,
#line 666 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_30,
#line 666 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_31)
#line 666 "recompilation.usage.m"
{
#line 672 "recompilation.usage.m"
  {
#line 672 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 672 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 672 "recompilation.usage.m"
    MR_Word recompilation__usage__PredTable_18;
#line 672 "recompilation.usage.m"
    MR_Integer recompilation__usage__OrigArity_19;
#line 672 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingPredIds_20;
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 673 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));

#line 674 "recompilation.usage.m"
    {
#line 674 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(recompilation__usage__ModuleInfo_17, &recompilation__usage__PredTable_18);
    }
#line 675 "recompilation.usage.m"
    {
#line 675 "recompilation.usage.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__usage__PredOrFunc_10, &recompilation__usage__OrigArity_19, recompilation__usage__Arity_13);
    }
#line 676 "recompilation.usage.m"
    {
#line 676 "recompilation.usage.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(recompilation__usage__PredTable_18, (MR_Integer) 1, recompilation__usage__PredOrFunc_10, recompilation__usage__SymName_12, recompilation__usage__OrigArity_19, &recompilation__usage__MatchingPredIds_20);
    }
#line 691 "recompilation.usage.m"
    if ((recompilation__usage__MatchingPredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "recompilation.usage.m"
      {
#line 693 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 693 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_MatchingNames_29 = recompilation__usage__STATE_VARIABLE_MatchingNames_0_28;
#line 693 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_31 = recompilation__usage__STATE_VARIABLE_Info_0_30;
#line 692 "recompilation.usage.m"
      }
#line 691 "recompilation.usage.m"
    else
#line 679 "recompilation.usage.m"
      {
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_48_48;
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__PredModules_23;
#line 679 "recompilation.usage.m"
        MR_String recompilation__usage__Name_27;
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__V_33_33;
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__V_34_34;
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__V_38_38;
#line 679 "recompilation.usage.m"
        MR_Word recompilation__usage__V_40_40;
#line 689 "recompilation.usage.m"
        MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_31;

#line 680 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 1;
#line 15048 "recompilation.usage.c"
        recompilation__usage__TypeInfo_48_48 = (MR_Word) &recompilation__usage_scalar_common_1[4];
#line 681 "recompilation.usage.m"
        {
#line 681 "recompilation.usage.m"
          recompilation__usage__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 681 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[8]));
#line 681 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_1));
#line 681 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 3) = ((MR_Box) (recompilation__usage__ModuleInfo_17));
#line 681 "recompilation.usage.m"
        }
#line 681 "recompilation.usage.m"
        {
#line 681 "recompilation.usage.m"
          recompilation__usage__V_33_33 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeInfo_48_48, recompilation__usage__V_34_34, recompilation__usage__MatchingPredIds_20);
        }
#line 681 "recompilation.usage.m"
        {
#line 681 "recompilation.usage.m"
          recompilation__usage__PredModules_23 = mercury__set__list_to_set_1_f_0(recompilation__usage__TypeInfo_48_48, recompilation__usage__V_33_33);
        }
#line 687 "recompilation.usage.m"
        {
#line 687 "recompilation.usage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], ((MR_Box) (recompilation__usage__ModuleQualifier_11)), ((MR_Box) (recompilation__usage__PredModules_23)), recompilation__usage__STATE_VARIABLE_MatchingNames_0_28, recompilation__usage__STATE_VARIABLE_MatchingNames_29);
        }
#line 688 "recompilation.usage.m"
        {
#line 688 "recompilation.usage.m"
          recompilation__usage__Name_27 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_12);
        }
#line 689 "recompilation.usage.m"
        {
#line 689 "recompilation.usage.m"
          recompilation__usage__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_40_40, 0) = ((MR_Box) (recompilation__usage__Name_27));
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_40_40, 1) = ((MR_Box) (recompilation__usage__Arity_13));
#line 689 "recompilation.usage.m"
        }
#line 689 "recompilation.usage.m"
        {
#line 689 "recompilation.usage.m"
          recompilation__usage__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[2]));
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_2));
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_10));
#line 689 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 4) = ((MR_Box) (recompilation__usage__V_40_40));
#line 689 "recompilation.usage.m"
        }
#line 689 "recompilation.usage.m"
        {
#line 689 "recompilation.usage.m"
          mercury__set__fold_4_p_0(recompilation__usage__TypeInfo_48_48, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_38_38, recompilation__usage__PredModules_23, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_30)), &recompilation__usage__conv2_STATE_VARIABLE_Info_31);
        }
#line 689 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_31 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_31);
#line 679 "recompilation.usage.m"
      }
#line 672 "recompilation.usage.m"
  }
#line 666 "recompilation.usage.m"
}

#line 652 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__Id_6,
#line 652 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 652 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 652 "recompilation.usage.m"
{
#line 655 "recompilation.usage.m"
  {
#line 655 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_33_33;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_34_34;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_35_35;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemType_8;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet0_9;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet0_10;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_11;
#line 655 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_12;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet_13;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet_14;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_18_18;
#line 655 "recompilation.usage.m"
    MR_String recompilation__usage__UnqualifiedName_54;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleQualifier_55;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames1_57;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__Recorded_58;
#line 655 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames_59;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_20_20;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_21_21;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_22_22;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_23_23;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_24_24;
#line 657 "recompilation.usage.m"
    MR_Word recompilation__usage__V_25_25;
#line 658 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_IdSet0_10;
#line 841 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames0_56;
#line 839 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_MatchingNames0_56;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 664 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;

#line 656 "recompilation.usage.m"
    {
#line 656 "recompilation.usage.m"
      recompilation__usage__ItemType_8 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__usage__PredOrFunc_5);
    }
#line 657 "recompilation.usage.m"
    recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 657 "recompilation.usage.m"
    recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 657 "recompilation.usage.m"
    recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 657 "recompilation.usage.m"
    recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 657 "recompilation.usage.m"
    recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 657 "recompilation.usage.m"
    recompilation__usage__ItemSet0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 657 "recompilation.usage.m"
    recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 15225 "recompilation.usage.c"
    recompilation__usage__TypeInfo_33_33 = (MR_Word) &recompilation__usage_scalar_common_1[3];
#line 15227 "recompilation.usage.c"
    recompilation__usage__TypeInfo_34_34 = (MR_Word) &recompilation__usage_scalar_common_1[7];
#line 15229 "recompilation.usage.c"
    recompilation__usage__TypeInfo_35_35 = (MR_Word) &recompilation__usage_scalar_common_1[10];
#line 658 "recompilation.usage.m"
    {
#line 658 "recompilation.usage.m"
      recompilation__usage__conv0_IdSet0_10 = recompilation__extract_pred_or_func_set_2_f_0(recompilation__usage__TypeInfo_33_33, recompilation__usage__TypeInfo_34_34, recompilation__usage__TypeInfo_35_35, recompilation__usage__ItemSet0_9, recompilation__usage__ItemType_8);
    }
#line 658 "recompilation.usage.m"
    recompilation__usage__IdSet0_10 = ((MR_Word) recompilation__usage__conv0_IdSet0_10);
#line 659 "recompilation.usage.m"
    recompilation__usage__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Id_6, (MR_Integer) 0)));
#line 659 "recompilation.usage.m"
    recompilation__usage__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__Id_6, (MR_Integer) 1)));
#line 837 "recompilation.usage.m"
    {
#line 837 "recompilation.usage.m"
      recompilation__usage__UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_11);
    }
#line 838 "recompilation.usage.m"
    {
#line 838 "recompilation.usage.m"
      recompilation__usage__ModuleQualifier_55 = recompilation__find_module_qualifier_1_f_0(recompilation__usage__SymName_11);
    }
#line 839 "recompilation.usage.m"
    {
#line 839 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__IdSet0_10, ((MR_Box) (recompilation__usage__UnqualifiedName_54)), &recompilation__usage__conv1_MatchingNames0_56);
    }
#line 839 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 839 "recompilation.usage.m"
      {
#line 839 "recompilation.usage.m"
        recompilation__usage__MatchingNames0_56 = ((MR_Word) recompilation__usage__conv1_MatchingNames0_56);
#line 839 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 839 "recompilation.usage.m"
      }
#line 841 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 840 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_57 = recompilation__usage__MatchingNames0_56;
#line 841 "recompilation.usage.m"
    else
#line 842 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "recompilation.usage.m"
    {
#line 844 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(recompilation__usage__PredOrFunc_5, recompilation__usage__ModuleQualifier_55, recompilation__usage__SymName_11, recompilation__usage__Arity_12, &recompilation__usage__Recorded_58, recompilation__usage__MatchingNames1_57, &recompilation__usage__MatchingNames_59, recompilation__usage__STATE_VARIABLE_Info_0_15, &recompilation__usage__STATE_VARIABLE_Info_18_18);
    }
#line 849 "recompilation.usage.m"
    if ((recompilation__usage__Recorded_58 == (MR_Integer) 0))
#line 850 "recompilation.usage.m"
      recompilation__usage__IdSet_13 = recompilation__usage__IdSet0_10;
#line 849 "recompilation.usage.m"
    else
#line 847 "recompilation.usage.m"
      {
#line 848 "recompilation.usage.m"
        {
#line 848 "recompilation.usage.m"
          mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], ((MR_Box) (recompilation__usage__UnqualifiedName_54)), ((MR_Box) (recompilation__usage__MatchingNames_59)), recompilation__usage__IdSet0_10, &recompilation__usage__IdSet_13);
        }
#line 847 "recompilation.usage.m"
      }
#line 663 "recompilation.usage.m"
    {
#line 663 "recompilation.usage.m"
      recompilation__usage__ItemSet_14 = recompilation__update_pred_or_func_set_3_f_0(recompilation__usage__TypeInfo_33_33, recompilation__usage__TypeInfo_34_34, recompilation__usage__TypeInfo_35_35, recompilation__usage__ItemSet0_9, recompilation__usage__ItemType_8, ((MR_Box) (recompilation__usage__IdSet_13)));
    }
#line 664 "recompilation.usage.m"
    recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 1)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 664 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 664 "recompilation.usage.m"
    {
#line 664 "recompilation.usage.m"
      MR_Word base;
#line 664 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 664 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_16 = base;
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_26_26));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_27_27));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_28_28));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_29_29));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_30_30));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__ItemSet_14));
#line 664 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_32_32));
#line 664 "recompilation.usage.m"
    }
#line 655 "recompilation.usage.m"
  }
#line 652 "recompilation.usage.m"
}

#line 637 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
#line 637 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Queue_0_9,
#line 637 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 637 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11)
#line 637 "recompilation.usage.m"
{
#line 646 "recompilation.usage.m"
  while (MR_TRUE)
#line 646 "recompilation.usage.m"
    {
#line 646 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 646 "recompilation.usage.m"
      {
#line 646 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;
#line 646 "recompilation.usage.m"
        MR_Word recompilation__usage__Item_6;
#line 646 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Queue_12_12;
#line 642 "recompilation.usage.m"
        MR_Box recompilation__usage__conv0_Item_6;

#line 642 "recompilation.usage.m"
        {
#line 642 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__queue__get_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__usage__conv0_Item_6, recompilation__usage__STATE_VARIABLE_Queue_0_9, &recompilation__usage__STATE_VARIABLE_Queue_12_12);
        }
#line 642 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 642 "recompilation.usage.m"
          {
#line 642 "recompilation.usage.m"
            recompilation__usage__Item_6 = ((MR_Word) recompilation__usage__conv0_Item_6);
#line 642 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 642 "recompilation.usage.m"
          }
#line 646 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 643 "recompilation.usage.m"
          {
#line 643 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_6, (MR_Integer) 0)));
#line 643 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_6, (MR_Integer) 1)));
#line 643 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_13_13;

#line 644 "recompilation.usage.m"
            {
#line 644 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_item_4_p_0(recompilation__usage__ItemType_7, recompilation__usage__ItemId_8, recompilation__usage__STATE_VARIABLE_Info_0_10, &recompilation__usage__STATE_VARIABLE_Info_13_13);
            }
#line 645 "recompilation.usage.m"
            /* direct tailcall eliminated */
#line 645 "recompilation.usage.m"
            {
#line 645 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Queue_0__tmp_copy_9 = recompilation__usage__STATE_VARIABLE_Queue_12_12;
#line 645 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_10 = recompilation__usage__STATE_VARIABLE_Info_13_13;

#line 645 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_0_10 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_10;
#line 645 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Queue_0_9 = recompilation__usage__STATE_VARIABLE_Queue_0__tmp_copy_9;
#line 645 "recompilation.usage.m"
            }
#line 645 "recompilation.usage.m"
            continue;
#line 643 "recompilation.usage.m"
          }
#line 646 "recompilation.usage.m"
        else
#line 647 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_11 = recompilation__usage__STATE_VARIABLE_Info_0_10;
#line 646 "recompilation.usage.m"
      }
#line 646 "recompilation.usage.m"
      break;
#line 646 "recompilation.usage.m"
    }
#line 637 "recompilation.usage.m"
}

#line 623 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
#line 623 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 623 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 623 "recompilation.usage.m"
{
#line 626 "recompilation.usage.m"
  while (MR_TRUE)
#line 626 "recompilation.usage.m"
    {
#line 626 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 626 "recompilation.usage.m"
      {
#line 626 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_31_31 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__Queue0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__Queue_5;
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_8_8;
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9;
#line 626 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_10_10;
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 627 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_20_20;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_21_21;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_22_22;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_23_23;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_24_24;
#line 628 "recompilation.usage.m"
        MR_Word recompilation__usage__V_19_19;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_25_25;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_27_27;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_29_29;
#line 630 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30;

#line 628 "recompilation.usage.m"
        {
#line 628 "recompilation.usage.m"
          recompilation__usage__V_9_9 = mercury__queue__init_0_f_0(recompilation__usage__TypeCtorInfo_31_31);
        }
#line 628 "recompilation.usage.m"
        recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 628 "recompilation.usage.m"
        recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 628 "recompilation.usage.m"
        {
#line 628 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 0) = ((MR_Box) (recompilation__usage__V_18_18));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 1) = ((MR_Box) (recompilation__usage__V_9_9));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 2) = ((MR_Box) (recompilation__usage__V_20_20));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 3) = ((MR_Box) (recompilation__usage__V_21_21));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 4) = ((MR_Box) (recompilation__usage__V_22_22));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 5) = ((MR_Box) (recompilation__usage__V_23_23));
#line 628 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 6) = ((MR_Box) (recompilation__usage__V_24_24));
#line 628 "recompilation.usage.m"
        }
#line 629 "recompilation.usage.m"
        {
#line 629 "recompilation.usage.m"
          recompilation__usage__process_imported_item_queue_2_3_p_0(recompilation__usage__Queue0_4, recompilation__usage__STATE_VARIABLE_Info_8_8, &recompilation__usage__STATE_VARIABLE_Info_10_10);
        }
#line 630 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 0)));
#line 630 "recompilation.usage.m"
        recompilation__usage__Queue_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 1)));
#line 630 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 2)));
#line 630 "recompilation.usage.m"
        recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 3)));
#line 630 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 4)));
#line 630 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 5)));
#line 630 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 6)));
#line 631 "recompilation.usage.m"
        {
#line 631 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__queue__is_empty_1_p_0(recompilation__usage__TypeCtorInfo_31_31, recompilation__usage__Queue_5);
        }
#line 633 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 631 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_7 = recompilation__usage__STATE_VARIABLE_Info_10_10;
#line 633 "recompilation.usage.m"
        else
#line 634 "recompilation.usage.m"
          {
#line 634 "recompilation.usage.m"
            /* direct tailcall eliminated */
#line 634 "recompilation.usage.m"
            {
#line 634 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_6 = recompilation__usage__STATE_VARIABLE_Info_10_10;

#line 634 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_0_6 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 634 "recompilation.usage.m"
            }
#line 634 "recompilation.usage.m"
            continue;
#line 634 "recompilation.usage.m"
          }
#line 626 "recompilation.usage.m"
      }
#line 626 "recompilation.usage.m"
      break;
#line 626 "recompilation.usage.m"
    }
#line 623 "recompilation.usage.m"
}

#line 595 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 595 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 595 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 595 "recompilation.usage.m"
{
#line 595 "recompilation.usage.m"
  {
#line 595 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 595 "recompilation.usage.m"
    {
#line 595 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instances_4_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 595 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 595 "recompilation.usage.m"
  }
#line 595 "recompilation.usage.m"
}

#line 588 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
#line 588 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_4,
#line 588 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 588 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17)
#line 588 "recompilation.usage.m"
{
#line 591 "recompilation.usage.m"
  {
#line 591 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Instances_7;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Predicates_8;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Functions_9;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Constructors_10;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Types_11;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeBodies_12;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Modes_13;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Classes_14;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__Insts_15;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_19_19;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_21_21;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_23_23;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_24_24;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_26_26;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_30_30;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_32_32;
#line 591 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_34_34;
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 593 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 595 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_19_19;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_48_48;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_49_49;
#line 597 "recompilation.usage.m"
    MR_Word recompilation__usage__V_50_50;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_51_51;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_52_52;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_53_53;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 600 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_63_63;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_64_64;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_65_65;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_66_66;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_67_67;
#line 603 "recompilation.usage.m"
    MR_Word recompilation__usage__V_68_68;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_69_69;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_70_70;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_71_71;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_72_72;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_73_73;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_74_74;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_75_75;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_76_76;
#line 606 "recompilation.usage.m"
    MR_Word recompilation__usage__V_77_77;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_78_78;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_79_79;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_80_80;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_81_81;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_82_82;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_83_83;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_84_84;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_85_85;
#line 609 "recompilation.usage.m"
    MR_Word recompilation__usage__V_86_86;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_87_87;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_88_88;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_89_89;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_90_90;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_91_91;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_92_92;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_93_93;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_94_94;
#line 612 "recompilation.usage.m"
    MR_Word recompilation__usage__V_95_95;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_96_96;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_97_97;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_98_98;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_99_99;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_100_100;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_101_101;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_102_102;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_103_103;
#line 615 "recompilation.usage.m"
    MR_Word recompilation__usage__V_104_104;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_105_105;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_106_106;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_107_107;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_108_108;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_109_109;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_110_110;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_111_111;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_112_112;
#line 618 "recompilation.usage.m"
    MR_Word recompilation__usage__V_113_113;

#line 594 "recompilation.usage.m"
    {
#line 594 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__Instances_7);
    }
#line 595 "recompilation.usage.m"
    {
#line 595 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &recompilation__usage_scalar_common_2[6], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[27], recompilation__usage__Instances_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_16)), &recompilation__usage__conv1_STATE_VARIABLE_Info_19_19);
    }
#line 595 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_19_19 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_19_19);
#line 597 "recompilation.usage.m"
    recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 597 "recompilation.usage.m"
    recompilation__usage__Predicates_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 597 "recompilation.usage.m"
    recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 598 "recompilation.usage.m"
    {
#line 598 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 0, recompilation__usage__Predicates_8, recompilation__usage__STATE_VARIABLE_Info_19_19, &recompilation__usage__STATE_VARIABLE_Info_21_21);
    }
#line 600 "recompilation.usage.m"
    recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 600 "recompilation.usage.m"
    recompilation__usage__Functions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 600 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 601 "recompilation.usage.m"
    {
#line 601 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 1, recompilation__usage__Functions_9, recompilation__usage__STATE_VARIABLE_Info_21_21, &recompilation__usage__STATE_VARIABLE_Info_23_23);
    }
#line 603 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 603 "recompilation.usage.m"
    recompilation__usage__Constructors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 603 "recompilation.usage.m"
    recompilation__usage__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 604 "recompilation.usage.m"
    {
#line 604 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_3_p_0(recompilation__usage__Constructors_10, recompilation__usage__STATE_VARIABLE_Info_23_23, &recompilation__usage__STATE_VARIABLE_Info_24_24);
    }
#line 606 "recompilation.usage.m"
    recompilation__usage__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 606 "recompilation.usage.m"
    recompilation__usage__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 607 "recompilation.usage.m"
    {
#line 607 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 0, recompilation__usage__Types_11, recompilation__usage__STATE_VARIABLE_Info_24_24, &recompilation__usage__STATE_VARIABLE_Info_26_26);
    }
#line 609 "recompilation.usage.m"
    recompilation__usage__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 609 "recompilation.usage.m"
    recompilation__usage__TypeBodies_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 609 "recompilation.usage.m"
    recompilation__usage__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 610 "recompilation.usage.m"
    {
#line 610 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 1, recompilation__usage__TypeBodies_12, recompilation__usage__STATE_VARIABLE_Info_26_26, &recompilation__usage__STATE_VARIABLE_Info_28_28);
    }
#line 612 "recompilation.usage.m"
    recompilation__usage__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 612 "recompilation.usage.m"
    recompilation__usage__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 612 "recompilation.usage.m"
    recompilation__usage__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 613 "recompilation.usage.m"
    {
#line 613 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 2, recompilation__usage__Modes_13, recompilation__usage__STATE_VARIABLE_Info_28_28, &recompilation__usage__STATE_VARIABLE_Info_30_30);
    }
#line 615 "recompilation.usage.m"
    recompilation__usage__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 615 "recompilation.usage.m"
    recompilation__usage__Classes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 615 "recompilation.usage.m"
    recompilation__usage__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 616 "recompilation.usage.m"
    {
#line 616 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 4, recompilation__usage__Classes_14, recompilation__usage__STATE_VARIABLE_Info_30_30, &recompilation__usage__STATE_VARIABLE_Info_32_32);
    }
#line 618 "recompilation.usage.m"
    recompilation__usage__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 618 "recompilation.usage.m"
    recompilation__usage__Insts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 618 "recompilation.usage.m"
    recompilation__usage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 619 "recompilation.usage.m"
    {
#line 619 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 3, recompilation__usage__Insts_15, recompilation__usage__STATE_VARIABLE_Info_32_32, &recompilation__usage__STATE_VARIABLE_Info_34_34);
    }
#line 621 "recompilation.usage.m"
    {
#line 621 "recompilation.usage.m"
      recompilation__usage__process_imported_item_queue_2_p_0(recompilation__usage__STATE_VARIABLE_Info_34_34, recompilation__usage__STATE_VARIABLE_Info_17);
#line 621 "recompilation.usage.m"
      return;
    }
#line 591 "recompilation.usage.m"
  }
#line 588 "recompilation.usage.m"
}

#line 558 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_3(
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 558 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 558 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 558 "recompilation.usage.m"
{
#line 558 "recompilation.usage.m"
  {
#line 558 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 558 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_ImportedItemsMap_8;

#line 558 "recompilation.usage.m"
    {
#line 558 "recompilation.usage.m"
      recompilation__usage__insert_into_imported_items_map_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_ImportedItemsMap_8);
    }
#line 558 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_ImportedItemsMap_8));
#line 558 "recompilation.usage.m"
  }
#line 558 "recompilation.usage.m"
}

#line 557 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
#line 557 "recompilation.usage.m"
  void * recompilation__usage__env_ptr_arg)
#line 557 "recompilation.usage.m"
{
#line 557 "recompilation.usage.m"
  {
#line 557 "recompilation.usage.m"
    struct recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0_s * recompilation__usage__env_ptr = (struct recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0_s *) recompilation__usage__env_ptr_arg;

#line 557 "recompilation.usage.m"
    *((recompilation__usage__env_ptr)->recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((recompilation__usage__env_ptr)->recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__conv0_VisibleModule_4));
#line 557 "recompilation.usage.m"
    {
#line 557 "recompilation.usage.m"
      ((recompilation__usage__env_ptr)->recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont)((recompilation__usage__env_ptr)->recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont_env_ptr);
#line 557 "recompilation.usage.m"
      return;
    }
#line 557 "recompilation.usage.m"
  }
#line 557 "recompilation.usage.m"
}

#line 557 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_2(
#line 557 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 557 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 557 "recompilation.usage.m"
  MR_Cont recompilation__usage__cont,
#line 557 "recompilation.usage.m"
  void * recompilation__usage__cont_env_ptr)
#line 557 "recompilation.usage.m"
{
#line 557 "recompilation.usage.m"
  {
#line 557 "recompilation.usage.m"
    struct recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0_s recompilation__usage__env;

#line 557 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__wrapper_arg_1 = recompilation__usage__wrapper_arg_1;
#line 557 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont = recompilation__usage__cont;
#line 557 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__cont_env_ptr = recompilation__usage__cont_env_ptr;
#line 557 "recompilation.usage.m"
    {
#line 557 "recompilation.usage.m"
      MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 557 "recompilation.usage.m"
      {
#line 557 "recompilation.usage.m"
        recompilation__usage__visible_modules_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), &(recompilation__usage__env).recompilation__usage__find_all_used_imported_items_7_p_0_2_env_0__conv0_VisibleModule_4, recompilation__usage__find_all_used_imported_items_7_p_0_1, &recompilation__usage__env);
      }
#line 557 "recompilation.usage.m"
    }
#line 557 "recompilation.usage.m"
  }
#line 557 "recompilation.usage.m"
}

#line 543 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_8,
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_9,
#line 543 "recompilation.usage.m"
  MR_Word recompilation__usage__Dependencies_10,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedUsedItems_11,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__UsedTypeClasses_12,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ImportedItems_13,
#line 543 "recompilation.usage.m"
  MR_Word * recompilation__usage__ModuleInstances_14)
#line 543 "recompilation.usage.m"
{
#line 550 "recompilation.usage.m"
  {
#line 550 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_64_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_74_74;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_76_76;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems0_15;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems1_16;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemsToProcess0_17;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleUsedClasses_18;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__UsedClasses0_19;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Types_20;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeBodies_21;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Modes_22;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Insts_23;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Classes_24;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedCtors_30;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedPreds_31;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedFuncs_32;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedMutables_33;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedForeignProcs_34;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedUsedItems0_35;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Info0_36;
#line 550 "recompilation.usage.m"
    MR_Word recompilation__usage__Info_37;
#line 557 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 557 "recompilation.usage.m"
    MR_Box recompilation__usage__conv2_ImportedItems1_16;
#line 565 "recompilation.usage.m"
    MR_Word recompilation__usage__V_25_25;
#line 565 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26;
#line 565 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 565 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 565 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 583 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40;
#line 583 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41;
#line 583 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;

#line 555 "recompilation.usage.m"
    {
#line 555 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_64_64, (MR_Word) &recompilation__usage_scalar_common_3[0], &recompilation__usage__ImportedItems0_15);
    }
#line 557 "recompilation.usage.m"
    {
#line 557 "recompilation.usage.m"
      recompilation__usage__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 557 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 0) = ((MR_Box) (&recompilation__usage_scalar_common_9[2]));
#line 557 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 1) = ((MR_Box) (recompilation__usage__find_all_used_imported_items_7_p_0_2));
#line 557 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 557 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 3) = ((MR_Box) (recompilation__usage__ModuleInfo_8));
#line 557 "recompilation.usage.m"
    }
#line 557 "recompilation.usage.m"
    {
#line 557 "recompilation.usage.m"
      mercury__solutions__unsorted_aggregate_4_p_7(recompilation__usage__TypeCtorInfo_64_64, (MR_Word) &recompilation__usage_scalar_common_1[13], recompilation__usage__V_38_38, (MR_Word) &recompilation__usage_scalar_common_1[26], ((MR_Box) (recompilation__usage__ImportedItems0_15)), &recompilation__usage__conv2_ImportedItems1_16);
    }
#line 557 "recompilation.usage.m"
    recompilation__usage__ImportedItems1_16 = ((MR_Word) recompilation__usage__conv2_ImportedItems1_16);
#line 561 "recompilation.usage.m"
    {
#line 561 "recompilation.usage.m"
      mercury__queue__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__usage__ItemsToProcess0_17);
    }
#line 562 "recompilation.usage.m"
    {
#line 562 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_64_64, (MR_Word) &recompilation__usage_scalar_common_2[1], &recompilation__usage__ModuleUsedClasses_18);
    }
#line 563 "recompilation.usage.m"
    {
#line 563 "recompilation.usage.m"
      mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, &recompilation__usage__UsedClasses0_19);
    }
#line 565 "recompilation.usage.m"
    recompilation__usage__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 0)));
#line 565 "recompilation.usage.m"
    recompilation__usage__TypeBodies_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 1)));
#line 565 "recompilation.usage.m"
    recompilation__usage__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 2)));
#line 565 "recompilation.usage.m"
    recompilation__usage__Insts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 3)));
#line 565 "recompilation.usage.m"
    recompilation__usage__Classes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 4)));
#line 565 "recompilation.usage.m"
    recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 5)));
#line 565 "recompilation.usage.m"
    recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 6)));
#line 565 "recompilation.usage.m"
    recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 7)));
#line 565 "recompilation.usage.m"
    recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 8)));
#line 565 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 9)));
#line 16315 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_74_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 567 "recompilation.usage.m"
    {
#line 567 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_74_74, (MR_Word) &recompilation__usage_scalar_common_2[5], &recompilation__usage__ResolvedCtors_30);
    }
#line 16322 "recompilation.usage.c"
    recompilation__usage__TypeInfo_76_76 = (MR_Word) &recompilation__usage_scalar_common_2[3];
#line 568 "recompilation.usage.m"
    {
#line 568 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_74_74, recompilation__usage__TypeInfo_76_76, &recompilation__usage__ResolvedPreds_31);
    }
#line 569 "recompilation.usage.m"
    {
#line 569 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_74_74, recompilation__usage__TypeInfo_76_76, &recompilation__usage__ResolvedFuncs_32);
    }
#line 570 "recompilation.usage.m"
    {
#line 570 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_74_74, recompilation__usage__TypeInfo_76_76, &recompilation__usage__ResolvedMutables_33);
    }
#line 571 "recompilation.usage.m"
    {
#line 571 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_74_74, recompilation__usage__TypeInfo_76_76, &recompilation__usage__ResolvedForeignProcs_34);
    }
#line 572 "recompilation.usage.m"
    {
#line 572 "recompilation.usage.m"
      recompilation__usage__ResolvedUsedItems0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 0) = ((MR_Box) (recompilation__usage__Types_20));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 1) = ((MR_Box) (recompilation__usage__TypeBodies_21));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 2) = ((MR_Box) (recompilation__usage__Modes_22));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 3) = ((MR_Box) (recompilation__usage__Insts_23));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 4) = ((MR_Box) (recompilation__usage__Classes_24));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 5) = ((MR_Box) (recompilation__usage__ResolvedCtors_30));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 6) = ((MR_Box) (recompilation__usage__ResolvedPreds_31));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 7) = ((MR_Box) (recompilation__usage__ResolvedFuncs_32));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 8) = ((MR_Box) (recompilation__usage__ResolvedMutables_33));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_35, 9) = ((MR_Box) (recompilation__usage__ResolvedForeignProcs_34));
#line 572 "recompilation.usage.m"
    }
#line 576 "recompilation.usage.m"
    {
#line 576 "recompilation.usage.m"
      recompilation__usage__Info0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 0) = ((MR_Box) (recompilation__usage__ModuleInfo_8));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 1) = ((MR_Box) (recompilation__usage__ItemsToProcess0_17));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 2) = ((MR_Box) (recompilation__usage__ImportedItems1_16));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 3) = ((MR_Box) (recompilation__usage__ModuleUsedClasses_18));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 4) = ((MR_Box) (recompilation__usage__Dependencies_10));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 5) = ((MR_Box) (recompilation__usage__ResolvedUsedItems0_35));
#line 576 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_36, 6) = ((MR_Box) (recompilation__usage__UsedClasses0_19));
#line 576 "recompilation.usage.m"
    }
#line 580 "recompilation.usage.m"
    {
#line 580 "recompilation.usage.m"
      recompilation__usage__find_all_used_imported_items_2_3_p_0(recompilation__usage__UsedItems_9, recompilation__usage__Info0_36, &recompilation__usage__Info_37);
    }
#line 583 "recompilation.usage.m"
    recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 0)));
#line 583 "recompilation.usage.m"
    recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 1)));
#line 583 "recompilation.usage.m"
    *recompilation__usage__ImportedItems_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 2)));
#line 583 "recompilation.usage.m"
    *recompilation__usage__ModuleInstances_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 3)));
#line 583 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 4)));
#line 583 "recompilation.usage.m"
    *recompilation__usage__ResolvedUsedItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 5)));
#line 583 "recompilation.usage.m"
    *recompilation__usage__UsedTypeClasses_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_37, (MR_Integer) 6)));
#line 550 "recompilation.usage.m"
  }
#line 543 "recompilation.usage.m"
}

#line 526 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
#line 526 "recompilation.usage.m"
  MR_Word recompilation__usage__VisibleModule_4,
#line 526 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7,
#line 526 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8)
#line 526 "recompilation.usage.m"
{
#line 529 "recompilation.usage.m"
  {
#line 529 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 529 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems_6;
#line 529 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9;

#line 530 "recompilation.usage.m"
    {
#line 530 "recompilation.usage.m"
      recompilation__usage__V_9_9 = mercury__set__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0]);
    }
#line 530 "recompilation.usage.m"
    {
#line 530 "recompilation.usage.m"
      recompilation__usage__ModuleItems_6 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__V_9_9)));
    }
#line 538 "recompilation.usage.m"
    {
#line 538 "recompilation.usage.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__VisibleModule_4)), ((MR_Box) (recompilation__usage__ModuleItems_6)), recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7, recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8);
#line 538 "recompilation.usage.m"
      return;
    }
#line 529 "recompilation.usage.m"
  }
#line 526 "recompilation.usage.m"
}

#line 522 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__visible_modules_2_p_0_1(
#line 522 "recompilation.usage.m"
  void * recompilation__usage__env_ptr_arg)
#line 522 "recompilation.usage.m"
{
#line 522 "recompilation.usage.m"
  {
#line 522 "recompilation.usage.m"
    struct recompilation__usage__visible_modules_2_p_0_env_0_s * recompilation__usage__env_ptr = (struct recompilation__usage__visible_modules_2_p_0_env_0_s *) recompilation__usage__env_ptr_arg;

#line 522 "recompilation.usage.m"
    {
#line 524 "recompilation.usage.m"
      MR_Word recompilation__usage__V_5_5;

#line 524 "recompilation.usage.m"
      {
#line 524 "recompilation.usage.m"
        hlds__hlds_module__module_info_get_name_2_p_0((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__ModuleInfo_3, &recompilation__usage__V_5_5);
      }
#line 524 "recompilation.usage.m"
      {
#line 524 "recompilation.usage.m"
        (recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(*((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__VisibleModule_4), recompilation__usage__V_5_5);
      }
#line 524 "recompilation.usage.m"
      (recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__succeeded = !((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__succeeded);
#line 524 "recompilation.usage.m"
      if ((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__succeeded)
#line 524 "recompilation.usage.m"
        {
#line 524 "recompilation.usage.m"
          ((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__cont)((recompilation__usage__env_ptr)->recompilation__usage__visible_modules_2_p_0_env_0__cont_env_ptr);
#line 524 "recompilation.usage.m"
          return;
        }
#line 522 "recompilation.usage.m"
    }
#line 522 "recompilation.usage.m"
  }
#line 522 "recompilation.usage.m"
}

#line 520 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__visible_modules_2_p_0(
#line 520 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_3,
#line 520 "recompilation.usage.m"
  MR_Word * recompilation__usage__VisibleModule_4,
#line 520 "recompilation.usage.m"
  MR_Cont recompilation__usage__cont,
#line 520 "recompilation.usage.m"
  void * recompilation__usage__cont_env_ptr)
#line 520 "recompilation.usage.m"
{
#line 520 "recompilation.usage.m"
  {
#line 520 "recompilation.usage.m"
    struct recompilation__usage__visible_modules_2_p_0_env_0_s recompilation__usage__env;

#line 520 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__ModuleInfo_3 = recompilation__usage__ModuleInfo_3;
#line 520 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__VisibleModule_4 = recompilation__usage__VisibleModule_4;
#line 520 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__cont = recompilation__usage__cont;
#line 520 "recompilation.usage.m"
    (recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__cont_env_ptr = recompilation__usage__cont_env_ptr;
#line 523 "recompilation.usage.m"
    {
#line 523 "recompilation.usage.m"
      hlds__hlds_module__visible_module_2_p_0((recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__VisibleModule_4, (recompilation__usage__env).recompilation__usage__visible_modules_2_p_0_env_0__ModuleInfo_3, recompilation__usage__visible_modules_2_p_0_1, &recompilation__usage__env);
    }
#line 520 "recompilation.usage.m"
  }
#line 520 "recompilation.usage.m"
}

#line 453 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
#line 453 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolvedFunctor_4)
#line 453 "recompilation.usage.m"
{
#line 458 "recompilation.usage.m"
  {
#line 458 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 458 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__ResolvedFunctor_4)) == (MR_mktag((MR_Integer) 1))))
#line 466 "recompilation.usage.m"
      {
#line 466 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));
#line 466 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_10, (MR_Integer) 0)));
#line 466 "recompilation.usage.m"
        MR_Integer recompilation__usage__Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_10, (MR_Integer) 1)));

#line 468 "recompilation.usage.m"
        {
#line 468 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "ctor(");
        }
#line 469 "recompilation.usage.m"
        {
#line 469 "recompilation.usage.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(recompilation__usage__TypeName_11, (MR_Integer) 0);
        }
#line 471 "recompilation.usage.m"
        {
#line 471 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "/");
        }
#line 472 "recompilation.usage.m"
        {
#line 472 "recompilation.usage.m"
          mercury__io__write_int_3_p_0(recompilation__usage__Arity_53);
        }
#line 473 "recompilation.usage.m"
        {
#line 473 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 473 "recompilation.usage.m"
          return;
        }
#line 466 "recompilation.usage.m"
      }
#line 458 "recompilation.usage.m"
    else
#line 458 "recompilation.usage.m"
      if (((MR_tag((MR_Word) recompilation__usage__ResolvedFunctor_4)) == (MR_mktag((MR_Integer) 2))))
#line 475 "recompilation.usage.m"
        {
#line 475 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeItemName_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));
#line 475 "recompilation.usage.m"
          MR_Word recompilation__usage__ConsItemName_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 1)));
#line 475 "recompilation.usage.m"
          MR_Integer recompilation__usage__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeItemName_12, (MR_Integer) 1)));
#line 475 "recompilation.usage.m"
          MR_Word recompilation__usage__ConsName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ConsItemName_13, (MR_Integer) 0)));
#line 475 "recompilation.usage.m"
          MR_Integer recompilation__usage__ConsArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ConsItemName_13, (MR_Integer) 1)));
#line 475 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeName_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeItemName_12, (MR_Integer) 0)));

#line 478 "recompilation.usage.m"
          {
#line 478 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "field(");
          }
#line 479 "recompilation.usage.m"
          {
#line 479 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(recompilation__usage__TypeName_54, (MR_Integer) 0);
          }
#line 481 "recompilation.usage.m"
          {
#line 481 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 482 "recompilation.usage.m"
          {
#line 482 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__TypeArity_14);
          }
#line 483 "recompilation.usage.m"
          {
#line 483 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 484 "recompilation.usage.m"
          {
#line 484 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(recompilation__usage__ConsName_15, (MR_Integer) 0);
          }
#line 486 "recompilation.usage.m"
          {
#line 486 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 487 "recompilation.usage.m"
          {
#line 487 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__ConsArity_16);
          }
#line 488 "recompilation.usage.m"
          {
#line 488 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 488 "recompilation.usage.m"
            return;
          }
#line 475 "recompilation.usage.m"
        }
#line 458 "recompilation.usage.m"
      else
#line 458 "recompilation.usage.m"
        {
#line 458 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 1)));
#line 458 "recompilation.usage.m"
          MR_Word recompilation__usage__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 2)));
#line 458 "recompilation.usage.m"
          MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 3)));
#line 457 "recompilation.usage.m"
          MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));

#line 459 "recompilation.usage.m"
          {
#line 459 "recompilation.usage.m"
            parse_tree__prog_out__write_pred_or_func_3_p_0(recompilation__usage__PredOrFunc_8);
          }
#line 460 "recompilation.usage.m"
          {
#line 460 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
#line 461 "recompilation.usage.m"
          {
#line 461 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_7);
          }
#line 462 "recompilation.usage.m"
          {
#line 462 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 463 "recompilation.usage.m"
          {
#line 463 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__Arity_9);
          }
#line 464 "recompilation.usage.m"
          {
#line 464 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 464 "recompilation.usage.m"
            return;
          }
#line 458 "recompilation.usage.m"
        }
#line 458 "recompilation.usage.m"
  }
#line 453 "recompilation.usage.m"
}

#line 442 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_19,
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 442 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 442 "recompilation.usage.m"
{
#line 446 "recompilation.usage.m"
  {
#line 446 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 446 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_20_20;
#line 446 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_22_22;
#line 446 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "recompilation.usage.m"
    MR_Word recompilation__usage__Matches_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchList_9;

#line 447 "recompilation.usage.m"
    {
#line 447 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__Arity_6);
    }
#line 448 "recompilation.usage.m"
    {
#line 448 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 16745 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_20_20 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 449 "recompilation.usage.m"
    {
#line 449 "recompilation.usage.m"
      mercury__map__to_assoc_list_2_p_0(recompilation__usage__TypeCtorInfo_20_20, recompilation__usage__TypeInfo_for_T_19, recompilation__usage__Matches_7, &recompilation__usage__MatchList_9);
    }
#line 16752 "recompilation.usage.c"
    {
#line 16754 "recompilation.usage.c"
      recompilation__usage__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16756 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 16758 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 1) = ((MR_Box) (recompilation__usage__TypeCtorInfo_20_20));
#line 16760 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_19));
#line 16762 "recompilation.usage.c"
    }
#line 450 "recompilation.usage.m"
    {
#line 450 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeInfo_22_22, (MR_Word) recompilation__usage__MatchList_9, (MR_String) ",\n\t\t\t\t", (MR_Word) recompilation__usage__WriteMatches_5);
    }
#line 451 "recompilation.usage.m"
    {
#line 451 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 451 "recompilation.usage.m"
      return;
    }
#line 446 "recompilation.usage.m"
  }
#line 442 "recompilation.usage.m"
}

#line 439 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 439 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 439 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 439 "recompilation.usage.m"
{
#line 439 "recompilation.usage.m"
  {
#line 439 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 439 "recompilation.usage.m"
    {
#line 439 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_3_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 439 "recompilation.usage.m"
      return;
    }
#line 439 "recompilation.usage.m"
  }
#line 439 "recompilation.usage.m"
}

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_20,
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 430 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 430 "recompilation.usage.m"
{
#line 435 "recompilation.usage.m"
  {
#line 435 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 435 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_27_27;
#line 435 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_29_29;
#line 435 "recompilation.usage.m"
    MR_String recompilation__usage__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 435 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchesAL_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 435 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 435 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;

#line 436 "recompilation.usage.m"
    {
#line 436 "recompilation.usage.m"
      recompilation__usage__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 436 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 0) = ((MR_Box) (recompilation__usage__Name_6));
#line 436 "recompilation.usage.m"
    }
#line 436 "recompilation.usage.m"
    {
#line 436 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__V_11_11);
    }
#line 437 "recompilation.usage.m"
    {
#line 437 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 439 "recompilation.usage.m"
    {
#line 439 "recompilation.usage.m"
      recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[1]));
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__write_resolved_item_set_2_4_p_0_1));
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 3) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_20));
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 4) = ((MR_Box) (recompilation__usage__WriteMatches_5));
#line 439 "recompilation.usage.m"
    }
#line 16873 "recompilation.usage.c"
    {
#line 16875 "recompilation.usage.c"
      recompilation__usage__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16877 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 16879 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 16881 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_20));
#line 16883 "recompilation.usage.c"
    }
#line 16885 "recompilation.usage.c"
    {
#line 16887 "recompilation.usage.c"
      recompilation__usage__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16889 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 16891 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 16893 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 2) = ((MR_Box) (recompilation__usage__TypeInfo_27_27));
#line 16895 "recompilation.usage.c"
    }
#line 438 "recompilation.usage.m"
    {
#line 438 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeInfo_29_29, (MR_Word) recompilation__usage__MatchesAL_7, (MR_String) ",\n\t\t\t", (MR_Word) recompilation__usage__V_16_16);
    }
#line 440 "recompilation.usage.m"
    {
#line 440 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 440 "recompilation.usage.m"
      return;
    }
#line 435 "recompilation.usage.m"
  }
#line 430 "recompilation.usage.m"
}

#line 411 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 411 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 411 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 411 "recompilation.usage.m"
{
#line 411 "recompilation.usage.m"
  {
#line 411 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 411 "recompilation.usage.m"
    {
#line 411 "recompilation.usage.m"
      recompilation__usage__write_resolved_functor_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 411 "recompilation.usage.m"
      return;
    }
#line 411 "recompilation.usage.m"
  }
#line 411 "recompilation.usage.m"
}

#line 404 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
#line 404 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 404 "recompilation.usage.m"
{
#line 407 "recompilation.usage.m"
  {
#line 407 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 407 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_18_18;
#line 407 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingCtors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 407 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;

#line 408 "recompilation.usage.m"
    {
#line 408 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 409 "recompilation.usage.m"
    {
#line 409 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " => (");
    }
#line 16974 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_18_18 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 410 "recompilation.usage.m"
    {
#line 410 "recompilation.usage.m"
      recompilation__usage__V_12_12 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_18_18, recompilation__usage__MatchingCtors_5);
    }
#line 410 "recompilation.usage.m"
    {
#line 410 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_18_18, recompilation__usage__V_12_12, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[25]);
    }
#line 412 "recompilation.usage.m"
    {
#line 412 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 412 "recompilation.usage.m"
      return;
    }
#line 407 "recompilation.usage.m"
  }
#line 404 "recompilation.usage.m"
}

#line 427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 427 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 427 "recompilation.usage.m"
{
#line 427 "recompilation.usage.m"
  {
#line 427 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 427 "recompilation.usage.m"
    {
#line 427 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 427 "recompilation.usage.m"
      return;
    }
#line 427 "recompilation.usage.m"
  }
#line 427 "recompilation.usage.m"
}

#line 17028 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
#line 17031 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 17033 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 17035 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 17037 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 17039 "recompilation.usage.c"
{
#line 17041 "recompilation.usage.c"
  {
#line 17043 "recompilation.usage.c"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 17046 "recompilation.usage.c"
    {
#line 17048 "recompilation.usage.c"
      recompilation__usage__write_functor_matches_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 17050 "recompilation.usage.c"
      return;
    }
#line 17053 "recompilation.usage.c"
  }
#line 17055 "recompilation.usage.c"
}

#line 392 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
#line 392 "recompilation.usage.m"
  MR_Word recompilation__usage__Ids_6,
#line 392 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_9,
#line 392 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_10)
#line 392 "recompilation.usage.m"
{
#line 398 "recompilation.usage.m"
  {
#line 398 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 396 "recompilation.usage.m"
    {
#line 396 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__Ids_6);
    }
#line 398 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 397 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_10 = recompilation__usage__STATE_VARIABLE_WriteComma_0_9;
#line 398 "recompilation.usage.m"
    else
#line 399 "recompilation.usage.m"
      {
#line 399 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_40;
#line 399 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_41;

#line 302 "recompilation.usage.m"
        if ((recompilation__usage__STATE_VARIABLE_WriteComma_0_9 == (MR_Integer) 0))
#line 303 "recompilation.usage.m"
          {
#line 303 "recompilation.usage.m"
          }
#line 302 "recompilation.usage.m"
        else
#line 300 "recompilation.usage.m"
          {
#line 301 "recompilation.usage.m"
            {
#line 301 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
#line 300 "recompilation.usage.m"
          }
#line 305 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_10 = (MR_Integer) 1;
#line 422 "recompilation.usage.m"
        {
#line 422 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_40, (MR_Integer) 5);
        }
#line 423 "recompilation.usage.m"
        {
#line 423 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_40);
        }
#line 424 "recompilation.usage.m"
        {
#line 424 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 425 "recompilation.usage.m"
        {
#line 425 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__Ids_6, &recompilation__usage__ItemList_41);
        }
#line 426 "recompilation.usage.m"
        {
#line 426 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[24], recompilation__usage__ItemList_41, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_9[1]);
        }
#line 428 "recompilation.usage.m"
        {
#line 428 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 428 "recompilation.usage.m"
          return;
        }
#line 399 "recompilation.usage.m"
      }
#line 398 "recompilation.usage.m"
  }
#line 392 "recompilation.usage.m"
}

#line 387 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 387 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 387 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 387 "recompilation.usage.m"
{
#line 387 "recompilation.usage.m"
  {
#line 387 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 387 "recompilation.usage.m"
    {
#line 387 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 387 "recompilation.usage.m"
      return;
    }
#line 387 "recompilation.usage.m"
  }
#line 387 "recompilation.usage.m"
}

#line 376 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
#line 376 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 376 "recompilation.usage.m"
{
#line 380 "recompilation.usage.m"
  {
#line 380 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 380 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 380 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "recompilation.usage.m"
    MR_Word recompilation__usage__PredIdModuleNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleNames_7;
#line 380 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26;

#line 381 "recompilation.usage.m"
    {
#line 381 "recompilation.usage.m"
      recompilation__usage__V_10_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &recompilation__usage_scalar_common_1[4], recompilation__usage__PredIdModuleNames_5);
    }
#line 381 "recompilation.usage.m"
    {
#line 381 "recompilation.usage.m"
      recompilation__usage__ModuleNames_7 = mercury__assoc_list__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeCtorInfo_21_21, recompilation__usage__V_10_10);
    }
#line 382 "recompilation.usage.m"
    {
#line 382 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 383 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__ModuleNames_7)) == (MR_mktag((MR_Integer) 1)));
#line 383 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 383 "recompilation.usage.m"
      {
#line 383 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ModuleNames_7, (MR_Integer) 0)));
#line 383 "recompilation.usage.m"
        recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ModuleNames_7, (MR_Integer) 1)));
#line 383 "recompilation.usage.m"
        {
#line 383 "recompilation.usage.m"
          recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__Qualifier_4, recompilation__usage__V_26_26);
        }
#line 383 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 383 "recompilation.usage.m"
          recompilation__usage__succeeded = (recompilation__usage__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "recompilation.usage.m"
      }
#line 385 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 383 "recompilation.usage.m"
      {
#line 383 "recompilation.usage.m"
      }
#line 385 "recompilation.usage.m"
    else
#line 386 "recompilation.usage.m"
      {
#line 386 "recompilation.usage.m"
        {
#line 386 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => (");
        }
#line 387 "recompilation.usage.m"
        {
#line 387 "recompilation.usage.m"
          mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_21_21, recompilation__usage__ModuleNames_7, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[22]);
        }
#line 389 "recompilation.usage.m"
        {
#line 389 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 389 "recompilation.usage.m"
          return;
        }
#line 386 "recompilation.usage.m"
      }
#line 380 "recompilation.usage.m"
  }
#line 376 "recompilation.usage.m"
}

#line 427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 427 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 427 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 427 "recompilation.usage.m"
{
#line 427 "recompilation.usage.m"
  {
#line 427 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 427 "recompilation.usage.m"
    {
#line 427 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 427 "recompilation.usage.m"
      return;
    }
#line 427 "recompilation.usage.m"
  }
#line 427 "recompilation.usage.m"
}

#line 17306 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
#line 17309 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 17311 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 17313 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 17315 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 17317 "recompilation.usage.c"
{
#line 17319 "recompilation.usage.c"
  {
#line 17321 "recompilation.usage.c"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 17324 "recompilation.usage.c"
    {
#line 17326 "recompilation.usage.c"
      recompilation__usage__write_pred_or_func_matches_3_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 17328 "recompilation.usage.c"
      return;
    }
#line 17331 "recompilation.usage.c"
  }
#line 17333 "recompilation.usage.c"
}

#line 356 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 356 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 356 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13)
#line 356 "recompilation.usage.m"
{
#line 360 "recompilation.usage.m"
  {
#line 360 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 360 "recompilation.usage.m"
    MR_Word recompilation__usage__Ids_11;
#line 361 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_Ids_11;

#line 361 "recompilation.usage.m"
    {
#line 361 "recompilation.usage.m"
      recompilation__usage__conv0_Ids_11 = recompilation__extract_pred_or_func_set_2_f_0((MR_Word) &recompilation__usage_scalar_common_1[3], (MR_Word) &recompilation__usage_scalar_common_1[7], (MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__UsedItems_8, recompilation__usage__ItemType_7);
    }
#line 361 "recompilation.usage.m"
    recompilation__usage__Ids_11 = ((MR_Word) recompilation__usage__conv0_Ids_11);
#line 362 "recompilation.usage.m"
    {
#line 362 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__Ids_11);
    }
#line 364 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 363 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_13 = recompilation__usage__STATE_VARIABLE_WriteComma_0_12;
#line 364 "recompilation.usage.m"
    else
#line 365 "recompilation.usage.m"
      {
#line 365 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_51;
#line 365 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_52;

#line 302 "recompilation.usage.m"
        if ((recompilation__usage__STATE_VARIABLE_WriteComma_0_12 == (MR_Integer) 0))
#line 303 "recompilation.usage.m"
          {
#line 303 "recompilation.usage.m"
          }
#line 302 "recompilation.usage.m"
        else
#line 300 "recompilation.usage.m"
          {
#line 301 "recompilation.usage.m"
            {
#line 301 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
#line 300 "recompilation.usage.m"
          }
#line 305 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
#line 422 "recompilation.usage.m"
        {
#line 422 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_51, recompilation__usage__ItemType_7);
        }
#line 423 "recompilation.usage.m"
        {
#line 423 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_51);
        }
#line 424 "recompilation.usage.m"
        {
#line 424 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 425 "recompilation.usage.m"
        {
#line 425 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__Ids_11, &recompilation__usage__ItemList_52);
        }
#line 426 "recompilation.usage.m"
        {
#line 426 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[21], recompilation__usage__ItemList_52, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_9[0]);
        }
#line 428 "recompilation.usage.m"
        {
#line 428 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 428 "recompilation.usage.m"
          return;
        }
#line 365 "recompilation.usage.m"
      }
#line 360 "recompilation.usage.m"
  }
#line 356 "recompilation.usage.m"
}

#line 344 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
#line 344 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 344 "recompilation.usage.m"
{
#line 347 "recompilation.usage.m"
  {
#line 347 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 347 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));

#line 348 "recompilation.usage.m"
    {
#line 348 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 349 "recompilation.usage.m"
    {
#line 349 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__Qualifier_4, recompilation__usage__ModuleName_5);
    }
#line 351 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 349 "recompilation.usage.m"
      {
#line 349 "recompilation.usage.m"
      }
#line 351 "recompilation.usage.m"
    else
#line 352 "recompilation.usage.m"
      {
#line 352 "recompilation.usage.m"
        {
#line 352 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 353 "recompilation.usage.m"
        {
#line 353 "recompilation.usage.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_5);
#line 353 "recompilation.usage.m"
          return;
        }
#line 352 "recompilation.usage.m"
      }
#line 347 "recompilation.usage.m"
  }
#line 344 "recompilation.usage.m"
}

#line 341 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 341 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 341 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 341 "recompilation.usage.m"
{
#line 341 "recompilation.usage.m"
  {
#line 341 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 341 "recompilation.usage.m"
    {
#line 341 "recompilation.usage.m"
      recompilation__usage__write_simple_item_matches_4_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 341 "recompilation.usage.m"
      return;
    }
#line 341 "recompilation.usage.m"
  }
#line 341 "recompilation.usage.m"
}

#line 330 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
#line 330 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 330 "recompilation.usage.m"
{
#line 334 "recompilation.usage.m"
  {
#line 334 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 334 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_25_25;
#line 334 "recompilation.usage.m"
    MR_String recompilation__usage__Name_4;
#line 334 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_5;
#line 334 "recompilation.usage.m"
    MR_Word recompilation__usage__Matches_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchList_8;
#line 334 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;

#line 334 "recompilation.usage.m"
    recompilation__usage__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, (MR_Integer) 0)));
#line 334 "recompilation.usage.m"
    recompilation__usage__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, (MR_Integer) 1)));
#line 335 "recompilation.usage.m"
    {
#line 335 "recompilation.usage.m"
      recompilation__usage__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 335 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 0) = ((MR_Box) (recompilation__usage__Name_4));
#line 335 "recompilation.usage.m"
    }
#line 335 "recompilation.usage.m"
    {
#line 335 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0(recompilation__usage__V_12_12, (MR_Integer) 0);
    }
#line 337 "recompilation.usage.m"
    {
#line 337 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 338 "recompilation.usage.m"
    {
#line 338 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__Arity_5);
    }
#line 339 "recompilation.usage.m"
    {
#line 339 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 17584 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 340 "recompilation.usage.m"
    {
#line 340 "recompilation.usage.m"
      mercury__map__to_assoc_list_2_p_0(recompilation__usage__TypeCtorInfo_25_25, recompilation__usage__TypeCtorInfo_25_25, recompilation__usage__Matches_6, &recompilation__usage__MatchList_8);
    }
#line 341 "recompilation.usage.m"
    {
#line 341 "recompilation.usage.m"
      mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[12], recompilation__usage__MatchList_8, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[19]);
    }
#line 342 "recompilation.usage.m"
    {
#line 342 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 342 "recompilation.usage.m"
      return;
    }
#line 334 "recompilation.usage.m"
  }
#line 330 "recompilation.usage.m"
}

#line 327 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 327 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 327 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 327 "recompilation.usage.m"
{
#line 327 "recompilation.usage.m"
  {
#line 327 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 327 "recompilation.usage.m"
    {
#line 327 "recompilation.usage.m"
      recompilation__usage__write_simple_item_matches_3_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 327 "recompilation.usage.m"
      return;
    }
#line 327 "recompilation.usage.m"
  }
#line 327 "recompilation.usage.m"
}

#line 307 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 307 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 307 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13)
#line 307 "recompilation.usage.m"
{
#line 310 "recompilation.usage.m"
  {
#line 310 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 310 "recompilation.usage.m"
    MR_Word recompilation__usage__Ids_11;
#line 311 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_Ids_11;

#line 311 "recompilation.usage.m"
    {
#line 311 "recompilation.usage.m"
      recompilation__usage__conv0_Ids_11 = recompilation__extract_simple_item_set_2_f_0((MR_Word) &recompilation__usage_scalar_common_1[3], (MR_Word) &recompilation__usage_scalar_common_1[7], (MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__UsedItems_8, recompilation__usage__ItemType_7);
    }
#line 311 "recompilation.usage.m"
    recompilation__usage__Ids_11 = ((MR_Word) recompilation__usage__conv0_Ids_11);
#line 312 "recompilation.usage.m"
    {
#line 312 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], recompilation__usage__Ids_11);
    }
#line 314 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 313 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_13 = recompilation__usage__STATE_VARIABLE_WriteComma_0_12;
#line 314 "recompilation.usage.m"
    else
#line 315 "recompilation.usage.m"
      {
#line 315 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_38;
#line 315 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_39;

#line 302 "recompilation.usage.m"
        if ((recompilation__usage__STATE_VARIABLE_WriteComma_0_12 == (MR_Integer) 0))
#line 303 "recompilation.usage.m"
          {
#line 303 "recompilation.usage.m"
          }
#line 302 "recompilation.usage.m"
        else
#line 300 "recompilation.usage.m"
          {
#line 301 "recompilation.usage.m"
            {
#line 301 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n\t");
            }
#line 300 "recompilation.usage.m"
          }
#line 305 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
#line 323 "recompilation.usage.m"
        {
#line 323 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_38, recompilation__usage__ItemType_7);
        }
#line 324 "recompilation.usage.m"
        {
#line 324 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_38);
        }
#line 325 "recompilation.usage.m"
        {
#line 325 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 326 "recompilation.usage.m"
        {
#line 326 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], recompilation__usage__Ids_11, &recompilation__usage__ItemList_39);
        }
#line 327 "recompilation.usage.m"
        {
#line 327 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[11], recompilation__usage__ItemList_39, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_1[18]);
        }
#line 328 "recompilation.usage.m"
        {
#line 328 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 328 "recompilation.usage.m"
          return;
        }
#line 315 "recompilation.usage.m"
      }
#line 310 "recompilation.usage.m"
  }
#line 307 "recompilation.usage.m"
}

#line 289 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
#line 289 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 289 "recompilation.usage.m"
{
#line 291 "recompilation.usage.m"
  {
#line 291 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 291 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "recompilation.usage.m"
    MR_Integer recompilation__usage__ClassArity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));

#line 292 "recompilation.usage.m"
    {
#line 292 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ClassName_4);
    }
#line 293 "recompilation.usage.m"
    {
#line 293 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 294 "recompilation.usage.m"
    {
#line 294 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__ClassArity_5);
#line 294 "recompilation.usage.m"
      return;
    }
#line 291 "recompilation.usage.m"
  }
#line 289 "recompilation.usage.m"
}

#line 264 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 264 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 264 "recompilation.usage.m"
{
#line 264 "recompilation.usage.m"
  {
#line 264 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_3;
#line 264 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 264 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_HeadVar__4_49;

#line 264 "recompilation.usage.m"
    {
#line 264 "recompilation.usage.m"
      recompilation__usage__conv2_HeadVar__4_49 = recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__264__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 264 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_HeadVar__4_49));
#line 264 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_3;
#line 264 "recompilation.usage.m"
  }
#line 264 "recompilation.usage.m"
}

#line 231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_8,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__Timestamps_9,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInstances_10,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleName_11,
#line 231 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12)
#line 231 "recompilation.usage.m"
{
#line 237 "recompilation.usage.m"
  {
#line 237 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 237 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_63_63;
#line 237 "recompilation.usage.m"
    MR_String recompilation__usage__Suffix_14;
#line 237 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleTimestamp_15;
#line 237 "recompilation.usage.m"
    MR_Word recompilation__usage__NeedQualifier_16;
#line 237 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 242 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_V_36_36;
#line 283 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleVersions_17;
#line 257 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_65_65;
#line 257 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 258 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 258 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 258 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 258 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleVersions_17;

#line 238 "recompilation.usage.m"
    {
#line 238 "recompilation.usage.m"
      mercury__io__nl_2_p_0();
    }
#line 239 "recompilation.usage.m"
    {
#line 239 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 240 "recompilation.usage.m"
    {
#line 240 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_11);
    }
#line 241 "recompilation.usage.m"
    {
#line 241 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 17881 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_63_63 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 242 "recompilation.usage.m"
    {
#line 242 "recompilation.usage.m"
      mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_63_63, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, recompilation__usage__Timestamps_9, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv0_V_36_36);
    }
#line 242 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) recompilation__usage__conv0_V_36_36);
#line 243 "recompilation.usage.m"
    recompilation__usage__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 0)));
#line 243 "recompilation.usage.m"
    recompilation__usage__ModuleTimestamp_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 1)));
#line 243 "recompilation.usage.m"
    recompilation__usage__NeedQualifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 2)));
#line 244 "recompilation.usage.m"
    {
#line 244 "recompilation.usage.m"
      mercury__io__write_string_3_p_0(recompilation__usage__Suffix_14);
    }
#line 245 "recompilation.usage.m"
    {
#line 245 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 246 "recompilation.usage.m"
    {
#line 246 "recompilation.usage.m"
      recompilation__write_version_number_3_p_0(recompilation__usage__ModuleTimestamp_15);
    }
#line 250 "recompilation.usage.m"
    if ((recompilation__usage__NeedQualifier_16 == (MR_Integer) 1))
#line 251 "recompilation.usage.m"
      {
#line 252 "recompilation.usage.m"
        {
#line 252 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 251 "recompilation.usage.m"
      }
#line 250 "recompilation.usage.m"
    else
#line 248 "recompilation.usage.m"
      {
#line 249 "recompilation.usage.m"
        {
#line 249 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ", used)");
        }
#line 248 "recompilation.usage.m"
      }
#line 257 "recompilation.usage.m"
    {
#line 257 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(recompilation__usage__ModuleName_11);
    }
#line 257 "recompilation.usage.m"
    recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 257 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 257 "recompilation.usage.m"
      {
#line 258 "recompilation.usage.m"
        recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 0)));
#line 258 "recompilation.usage.m"
        recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 1)));
#line 258 "recompilation.usage.m"
        recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 2)));
#line 258 "recompilation.usage.m"
        recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 3)));
#line 17952 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_65_65 = (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0;
#line 258 "recompilation.usage.m"
        {
#line 258 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_63_63, recompilation__usage__TypeCtorInfo_65_65, recompilation__usage__V_45_45, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv1_ModuleVersions_17);
        }
#line 258 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 258 "recompilation.usage.m"
          {
#line 258 "recompilation.usage.m"
            recompilation__usage__ModuleVersions_17 = ((MR_Word) recompilation__usage__conv1_ModuleVersions_17);
#line 258 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 258 "recompilation.usage.m"
          }
#line 257 "recompilation.usage.m"
      }
#line 283 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 263 "recompilation.usage.m"
      {
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_66_66 = (MR_Word) &recompilation__usage_scalar_common_1[1];
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_71_71;
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleItemVersions_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ModuleVersions_17, (MR_Integer) 0)));
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstanceVersions_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ModuleVersions_17, (MR_Integer) 1)));
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedItemVersions_20;
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedInstanceVersions_26;
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedVersionNumbers_27;
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__V_46_46;
#line 263 "recompilation.usage.m"
        MR_Word recompilation__usage__V_50_50;
#line 273 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedInstances_25;
#line 270 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_ModuleUsedInstances_25;

#line 264 "recompilation.usage.m"
        {
#line 264 "recompilation.usage.m"
          recompilation__usage__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 264 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_46_46, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[0]));
#line 264 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_46_46, 1) = ((MR_Box) (recompilation__usage__write_module_name_and_used_items_7_p_0_1));
#line 264 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 264 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_46_46, 3) = ((MR_Box) (recompilation__usage__ModuleUsedItems_12));
#line 264 "recompilation.usage.m"
        }
#line 18012 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_71_71 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 269 "recompilation.usage.m"
        {
#line 269 "recompilation.usage.m"
          recompilation__usage__V_50_50 = mercury__map__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0], recompilation__usage__TypeCtorInfo_71_71);
        }
#line 264 "recompilation.usage.m"
        {
#line 264 "recompilation.usage.m"
          recompilation__usage__ModuleUsedItemVersions_20 = recompilation__map_ids_3_f_0(recompilation__usage__TypeInfo_66_66, recompilation__usage__TypeInfo_66_66, recompilation__usage__V_46_46, recompilation__usage__ModuleItemVersions_18, ((MR_Box) (recompilation__usage__V_50_50)));
        }
#line 270 "recompilation.usage.m"
        {
#line 270 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_63_63, (MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__ModuleInstances_10, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv3_ModuleUsedInstances_25);
        }
#line 270 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 270 "recompilation.usage.m"
          {
#line 270 "recompilation.usage.m"
            recompilation__usage__ModuleUsedInstances_25 = ((MR_Word) recompilation__usage__conv3_ModuleUsedInstances_25);
#line 270 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 270 "recompilation.usage.m"
          }
#line 273 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 271 "recompilation.usage.m"
          {
#line 271 "recompilation.usage.m"
            {
#line 271 "recompilation.usage.m"
              mercury__map__select_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__TypeCtorInfo_71_71, recompilation__usage__ModuleInstanceVersions_19, recompilation__usage__ModuleUsedInstances_25, &recompilation__usage__ModuleUsedInstanceVersions_26);
            }
#line 271 "recompilation.usage.m"
          }
#line 273 "recompilation.usage.m"
        else
#line 274 "recompilation.usage.m"
          {
#line 274 "recompilation.usage.m"
            {
#line 274 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__TypeCtorInfo_71_71, &recompilation__usage__ModuleUsedInstanceVersions_26);
            }
#line 274 "recompilation.usage.m"
          }
#line 277 "recompilation.usage.m"
        {
#line 277 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 278 "recompilation.usage.m"
        {
#line 278 "recompilation.usage.m"
          recompilation__usage__ModuleUsedVersionNumbers_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__ModuleUsedVersionNumbers_27, 0) = ((MR_Box) (recompilation__usage__ModuleUsedItemVersions_20));
#line 278 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__ModuleUsedVersionNumbers_27, 1) = ((MR_Box) (recompilation__usage__ModuleUsedInstanceVersions_26));
#line 278 "recompilation.usage.m"
        }
#line 281 "recompilation.usage.m"
        {
#line 281 "recompilation.usage.m"
          recompilation__version__write_version_numbers_3_p_0(recompilation__usage__ModuleUsedVersionNumbers_27);
        }
#line 282 "recompilation.usage.m"
        {
#line 282 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 282 "recompilation.usage.m"
          return;
        }
#line 263 "recompilation.usage.m"
      }
#line 283 "recompilation.usage.m"
    else
#line 286 "recompilation.usage.m"
      {
#line 286 "recompilation.usage.m"
        {
#line 286 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 286 "recompilation.usage.m"
          return;
        }
#line 286 "recompilation.usage.m"
      }
#line 237 "recompilation.usage.m"
  }
#line 231 "recompilation.usage.m"
}

#line 223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 223 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 223 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 223 "recompilation.usage.m"
{
#line 223 "recompilation.usage.m"
  {
#line 223 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 223 "recompilation.usage.m"
    {
#line 223 "recompilation.usage.m"
      recompilation__usage__write_module_name_and_used_items_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
#line 223 "recompilation.usage.m"
      return;
    }
#line 223 "recompilation.usage.m"
  }
#line 223 "recompilation.usage.m"
}

#line 219 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_2(
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 219 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 219 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 219 "recompilation.usage.m"
{
#line 219 "recompilation.usage.m"
  {
#line 219 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 219 "recompilation.usage.m"
    {
#line 219 "recompilation.usage.m"
      recompilation__usage__write_classname_and_arity_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 219 "recompilation.usage.m"
      return;
    }
#line 219 "recompilation.usage.m"
  }
#line 219 "recompilation.usage.m"
}

#line 178 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_1(
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 178 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 178 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 178 "recompilation.usage.m"
{
#line 178 "recompilation.usage.m"
  {
#line 178 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 178 "recompilation.usage.m"
    {
#line 178 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 178 "recompilation.usage.m"
      return;
    }
#line 178 "recompilation.usage.m"
  }
#line 178 "recompilation.usage.m"
}

#line 151 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0(
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_7,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__NestedSubModules_8,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_9,
#line 151 "recompilation.usage.m"
  MR_Word recompilation__usage__Timestamps_10)
#line 151 "recompilation.usage.m"
{
#line 156 "recompilation.usage.m"
  {
#line 156 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_115_115;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__ThisModuleName_12;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__ThisModuleTimestamp_14;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__UsedItems_18;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedUsedItems_19;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__UsedClasses_20;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems_21;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInstances_22;
#line 156 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_27_27;
#line 156 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_31_31;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__V_95_95;
#line 156 "recompilation.usage.m"
    MR_Word recompilation__usage__V_101_101;
#line 163 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_V_35_35;
#line 164 "recompilation.usage.m"
    MR_String recompilation__usage__V_13_13;
#line 164 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15;
#line 182 "recompilation.usage.m"
    MR_Word recompilation__usage__V_100_100;
#line 182 "recompilation.usage.m"
    MR_Word recompilation__usage__V_102_102;
#line 187 "recompilation.usage.m"
    MR_Word recompilation__usage__V_131_131;
#line 223 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_IO_96_96;

#line 157 "recompilation.usage.m"
    {
#line 157 "recompilation.usage.m"
      recompilation__usage__V_27_27 = recompilation__usage__usage_file_version_number_0_f_0();
    }
#line 157 "recompilation.usage.m"
    {
#line 157 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__V_27_27);
    }
#line 158 "recompilation.usage.m"
    {
#line 158 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 159 "recompilation.usage.m"
    {
#line 159 "recompilation.usage.m"
      recompilation__usage__V_31_31 = recompilation__version__version_numbers_version_number_0_f_0();
    }
#line 159 "recompilation.usage.m"
    {
#line 159 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__V_31_31);
    }
#line 160 "recompilation.usage.m"
    {
#line 160 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n\n");
    }
#line 162 "recompilation.usage.m"
    {
#line 162 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_7, &recompilation__usage__ThisModuleName_12);
    }
#line 18293 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_115_115 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 163 "recompilation.usage.m"
    {
#line 163 "recompilation.usage.m"
      mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_115_115, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, recompilation__usage__Timestamps_10, ((MR_Box) (recompilation__usage__ThisModuleName_12)), &recompilation__usage__conv0_V_35_35);
    }
#line 163 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) recompilation__usage__conv0_V_35_35);
#line 164 "recompilation.usage.m"
    recompilation__usage__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__V_35_35, (MR_Integer) 0)));
#line 164 "recompilation.usage.m"
    recompilation__usage__ThisModuleTimestamp_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_35_35, (MR_Integer) 1)));
#line 164 "recompilation.usage.m"
    recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_35_35, (MR_Integer) 2)));
#line 165 "recompilation.usage.m"
    {
#line 165 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 166 "recompilation.usage.m"
    {
#line 166 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ThisModuleName_12);
    }
#line 167 "recompilation.usage.m"
    {
#line 167 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ", \".m\", ");
    }
#line 168 "recompilation.usage.m"
    {
#line 168 "recompilation.usage.m"
      recompilation__write_version_number_3_p_0(recompilation__usage__ThisModuleTimestamp_14);
    }
#line 169 "recompilation.usage.m"
    {
#line 169 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n\n");
    }
#line 174 "recompilation.usage.m"
    if ((recompilation__usage__NestedSubModules_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "recompilation.usage.m"
      {
#line 173 "recompilation.usage.m"
        {
#line 173 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "sub_modules.\n\n");
        }
#line 172 "recompilation.usage.m"
      }
#line 174 "recompilation.usage.m"
    else
#line 175 "recompilation.usage.m"
      {
#line 176 "recompilation.usage.m"
        {
#line 176 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "sub_modules(");
        }
#line 177 "recompilation.usage.m"
        {
#line 177 "recompilation.usage.m"
          mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_115_115, recompilation__usage__NestedSubModules_8, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[16]);
        }
#line 179 "recompilation.usage.m"
        {
#line 179 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n\n");
        }
#line 175 "recompilation.usage.m"
      }
#line 182 "recompilation.usage.m"
    recompilation__usage__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_9, (MR_Integer) 0)));
#line 182 "recompilation.usage.m"
    recompilation__usage__UsedItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_9, (MR_Integer) 1)));
#line 182 "recompilation.usage.m"
    recompilation__usage__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_9, (MR_Integer) 2)));
#line 182 "recompilation.usage.m"
    recompilation__usage__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_9, (MR_Integer) 3)));
#line 183 "recompilation.usage.m"
    {
#line 183 "recompilation.usage.m"
      recompilation__usage__find_all_used_imported_items_7_p_0(recompilation__usage__ModuleInfo_7, recompilation__usage__UsedItems_18, recompilation__usage__V_101_101, &recompilation__usage__ResolvedUsedItems_19, &recompilation__usage__UsedClasses_20, &recompilation__usage__ImportedItems_21, &recompilation__usage__ModuleInstances_22);
    }
#line 187 "recompilation.usage.m"
    {
#line 187 "recompilation.usage.m"
      recompilation__usage__V_131_131 = recompilation__init_used_items_0_f_0();
    }
#line 187 "recompilation.usage.m"
    {
#line 187 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_3[2], ((MR_Box) (recompilation__usage__UsedItems_18)), ((MR_Box) (recompilation__usage__V_131_131)));
    }
#line 189 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 188 "recompilation.usage.m"
      {
#line 188 "recompilation.usage.m"
        {
#line 188 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "used_items.\n");
        }
#line 188 "recompilation.usage.m"
      }
#line 189 "recompilation.usage.m"
    else
#line 190 "recompilation.usage.m"
      {
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_60_60;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_63_63;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_66_66;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_69_69;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_72_72;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_75_75;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_78_78;
#line 190 "recompilation.usage.m"
        MR_Word recompilation__usage__V_80_80;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_106_106;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_107_107;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_108_108;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_109_109;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_110_110;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_111_111;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_112_112;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_113_113;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__V_114_114;
#line 207 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_81_81;

#line 190 "recompilation.usage.m"
        {
#line 190 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "used_items(\n\t");
        }
#line 193 "recompilation.usage.m"
        {
#line 193 "recompilation.usage.m"
          recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 0, recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 0, &recompilation__usage__STATE_VARIABLE_WriteComma_60_60);
        }
#line 195 "recompilation.usage.m"
        {
#line 195 "recompilation.usage.m"
          recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 1, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_60_60, &recompilation__usage__STATE_VARIABLE_WriteComma_63_63);
        }
#line 197 "recompilation.usage.m"
        {
#line 197 "recompilation.usage.m"
          recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 2, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_63_63, &recompilation__usage__STATE_VARIABLE_WriteComma_66_66);
        }
#line 199 "recompilation.usage.m"
        {
#line 199 "recompilation.usage.m"
          recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 3, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_66_66, &recompilation__usage__STATE_VARIABLE_WriteComma_69_69);
        }
#line 201 "recompilation.usage.m"
        {
#line 201 "recompilation.usage.m"
          recompilation__usage__write_simple_item_matches_6_p_0((MR_Integer) 4, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_69_69, &recompilation__usage__STATE_VARIABLE_WriteComma_72_72);
        }
#line 203 "recompilation.usage.m"
        {
#line 203 "recompilation.usage.m"
          recompilation__usage__write_pred_or_func_matches_6_p_0((MR_Integer) 6, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_72_72, &recompilation__usage__STATE_VARIABLE_WriteComma_75_75);
        }
#line 205 "recompilation.usage.m"
        {
#line 205 "recompilation.usage.m"
          recompilation__usage__write_pred_or_func_matches_6_p_0((MR_Integer) 7, recompilation__usage__ResolvedUsedItems_19, recompilation__usage__STATE_VARIABLE_WriteComma_75_75, &recompilation__usage__STATE_VARIABLE_WriteComma_78_78);
        }
#line 207 "recompilation.usage.m"
        recompilation__usage__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 0)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 1)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 2)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 3)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 4)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 5)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 6)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 7)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 8)));
#line 207 "recompilation.usage.m"
        recompilation__usage__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems_19, (MR_Integer) 9)));
#line 207 "recompilation.usage.m"
        {
#line 207 "recompilation.usage.m"
          recompilation__usage__write_functor_matches_5_p_0(recompilation__usage__V_80_80, recompilation__usage__STATE_VARIABLE_WriteComma_78_78, &recompilation__usage__STATE_VARIABLE_WriteComma_81_81);
        }
#line 211 "recompilation.usage.m"
        {
#line 211 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n).\n\n");
        }
#line 190 "recompilation.usage.m"
      }
#line 214 "recompilation.usage.m"
    {
#line 214 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__set__empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__UsedClasses_20);
    }
#line 216 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 215 "recompilation.usage.m"
      {
#line 215 "recompilation.usage.m"
        {
#line 215 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "used_classes.\n");
        }
#line 215 "recompilation.usage.m"
      }
#line 216 "recompilation.usage.m"
    else
#line 217 "recompilation.usage.m"
      {
#line 217 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_121_121;
#line 217 "recompilation.usage.m"
        MR_Word recompilation__usage__V_89_89;

#line 217 "recompilation.usage.m"
        {
#line 217 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "used_classes(");
        }
#line 18542 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_121_121 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0;
#line 218 "recompilation.usage.m"
        {
#line 218 "recompilation.usage.m"
          recompilation__usage__V_89_89 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_121_121, recompilation__usage__UsedClasses_20);
        }
#line 218 "recompilation.usage.m"
        {
#line 218 "recompilation.usage.m"
          mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_121_121, recompilation__usage__V_89_89, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[17]);
        }
#line 220 "recompilation.usage.m"
        {
#line 220 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 217 "recompilation.usage.m"
      }
#line 223 "recompilation.usage.m"
    {
#line 223 "recompilation.usage.m"
      recompilation__usage__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[0]));
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 1) = ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_3));
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 3) = ((MR_Box) (recompilation__usage__RecompInfo_9));
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 4) = ((MR_Box) (recompilation__usage__Timestamps_10));
#line 223 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 5) = ((MR_Box) (recompilation__usage__ModuleInstances_22));
#line 223 "recompilation.usage.m"
    }
#line 223 "recompilation.usage.m"
    {
#line 223 "recompilation.usage.m"
      mercury__map__foldl_4_p_2(recompilation__usage__TypeCtorInfo_115_115, (MR_Word) &recompilation__usage_scalar_common_3[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, recompilation__usage__V_95_95, recompilation__usage__ImportedItems_21, ((MR_Box) ((MR_Integer) 0)), &recompilation__usage__conv1_STATE_VARIABLE_IO_96_96);
    }
#line 228 "recompilation.usage.m"
    {
#line 228 "recompilation.usage.m"
      mercury__io__nl_2_p_0();
    }
#line 229 "recompilation.usage.m"
    {
#line 229 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "done.\n");
#line 229 "recompilation.usage.m"
      return;
    }
#line 156 "recompilation.usage.m"
  }
#line 151 "recompilation.usage.m"
}

#line 82 "recompilation.usage.m"
MR_Integer MR_CALL 
recompilation__usage__usage_file_version_number_0_f_0(void)
#line 82 "recompilation.usage.m"
{
#line 491 "recompilation.usage.m"
  {
#line 491 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 491 "recompilation.usage.m"
    return (MR_Integer) 2;
#line 491 "recompilation.usage.m"
  }
#line 82 "recompilation.usage.m"
}

#line 75 "recompilation.usage.m"
void MR_CALL 
recompilation__usage__write_usage_file_5_p_0(
#line 75 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 75 "recompilation.usage.m"
  MR_Word recompilation__usage__NestedSubModules_7,
#line 75 "recompilation.usage.m"
  MR_Word recompilation__usage__MaybeTimestamps_8)
#line 75 "recompilation.usage.m"
{
#line 114 "recompilation.usage.m"
  {
#line 114 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 114 "recompilation.usage.m"
    MR_Word recompilation__usage__MaybeRecompInfo_10;
#line 147 "recompilation.usage.m"
    MR_Word recompilation__usage__RecompInfo_11;
#line 147 "recompilation.usage.m"
    MR_Word recompilation__usage__Timestamps_12;

#line 115 "recompilation.usage.m"
    {
#line 115 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__MaybeRecompInfo_10);
    }
#line 117 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__MaybeRecompInfo_10)) == (MR_mktag((MR_Integer) 1)));
#line 117 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 117 "recompilation.usage.m"
      {
#line 117 "recompilation.usage.m"
        recompilation__usage__RecompInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeRecompInfo_10, (MR_Integer) 0)));
#line 118 "recompilation.usage.m"
        recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__MaybeTimestamps_8)) == (MR_mktag((MR_Integer) 1)));
#line 118 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 118 "recompilation.usage.m"
          recompilation__usage__Timestamps_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeTimestamps_8, (MR_Integer) 0)));
#line 117 "recompilation.usage.m"
      }
#line 147 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 120 "recompilation.usage.m"
      {
#line 120 "recompilation.usage.m"
        MR_Word recompilation__usage__Globals_13;
#line 120 "recompilation.usage.m"
        MR_Word recompilation__usage__Verbose_14;
#line 120 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleName_15;
#line 120 "recompilation.usage.m"
        MR_String recompilation__usage__FileName_16;
#line 120 "recompilation.usage.m"
        MR_Word recompilation__usage__FileResult_17;

#line 120 "recompilation.usage.m"
        {
#line 120 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__Globals_13);
        }
#line 121 "recompilation.usage.m"
        {
#line 121 "recompilation.usage.m"
          libs__globals__lookup_bool_option_3_p_0(recompilation__usage__Globals_13, (MR_Integer) 44, &recompilation__usage__Verbose_14);
        }
#line 122 "recompilation.usage.m"
        {
#line 122 "recompilation.usage.m"
          libs__file_util__maybe_write_string_4_p_0(recompilation__usage__Verbose_14, (MR_String) "% Writing recompilation compilation dependency information\n");
        }
#line 126 "recompilation.usage.m"
        {
#line 126 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__ModuleName_15);
        }
#line 127 "recompilation.usage.m"
        {
#line 127 "recompilation.usage.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(recompilation__usage__Globals_13, recompilation__usage__ModuleName_15, (MR_String) ".used", (MR_Integer) 0, &recompilation__usage__FileName_16);
        }
#line 129 "recompilation.usage.m"
        {
#line 129 "recompilation.usage.m"
          mercury__io__open_output_4_p_0(recompilation__usage__FileName_16, &recompilation__usage__FileResult_17);
        }
#line 137 "recompilation.usage.m"
        if (((MR_tag((MR_Word) recompilation__usage__FileResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 138 "recompilation.usage.m"
          {
#line 138 "recompilation.usage.m"
            MR_Word recompilation__usage__IOError_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__FileResult_17, (MR_Integer) 0)));
#line 138 "recompilation.usage.m"
            MR_String recompilation__usage__IOErrorMessage_22;

#line 139 "recompilation.usage.m"
            {
#line 139 "recompilation.usage.m"
              mercury__io__error_message_2_p_0(recompilation__usage__IOError_21, &recompilation__usage__IOErrorMessage_22);
            }
#line 140 "recompilation.usage.m"
            {
#line 140 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) "\nError opening \140");
            }
#line 141 "recompilation.usage.m"
            {
#line 141 "recompilation.usage.m"
              mercury__io__write_string_3_p_0(recompilation__usage__FileName_16);
            }
#line 142 "recompilation.usage.m"
            {
#line 142 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) "\'for output: ");
            }
#line 143 "recompilation.usage.m"
            {
#line 143 "recompilation.usage.m"
              mercury__io__write_string_3_p_0(recompilation__usage__IOErrorMessage_22);
            }
#line 144 "recompilation.usage.m"
            {
#line 144 "recompilation.usage.m"
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
#line 145 "recompilation.usage.m"
            {
#line 145 "recompilation.usage.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 145 "recompilation.usage.m"
              return;
            }
#line 138 "recompilation.usage.m"
          }
#line 137 "recompilation.usage.m"
        else
#line 131 "recompilation.usage.m"
          {
#line 131 "recompilation.usage.m"
            MR_Word recompilation__usage__Stream0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__FileResult_17, (MR_Integer) 0)));
#line 131 "recompilation.usage.m"
            MR_Word recompilation__usage__OldStream_19;
#line 131 "recompilation.usage.m"
            MR_Word recompilation__usage__Stream_20;

#line 132 "recompilation.usage.m"
            {
#line 132 "recompilation.usage.m"
              mercury__io__set_output_stream_4_p_0(recompilation__usage__Stream0_18, &recompilation__usage__OldStream_19);
            }
#line 133 "recompilation.usage.m"
            {
#line 133 "recompilation.usage.m"
              recompilation__usage__write_usage_file_2_6_p_0(recompilation__usage__ModuleInfo_6, recompilation__usage__NestedSubModules_7, recompilation__usage__RecompInfo_11, recompilation__usage__Timestamps_12);
            }
#line 135 "recompilation.usage.m"
            {
#line 135 "recompilation.usage.m"
              mercury__io__set_output_stream_4_p_0(recompilation__usage__OldStream_19, &recompilation__usage__Stream_20);
            }
#line 136 "recompilation.usage.m"
            {
#line 136 "recompilation.usage.m"
              mercury__io__close_output_3_p_0(recompilation__usage__Stream_20);
#line 136 "recompilation.usage.m"
              return;
            }
#line 131 "recompilation.usage.m"
          }
#line 120 "recompilation.usage.m"
      }
#line 147 "recompilation.usage.m"
    else
#line 145 "recompilation.usage.m"
      {
#line 145 "recompilation.usage.m"
      }
#line 114 "recompilation.usage.m"
  }
#line 75 "recompilation.usage.m"
}

void mercury__recompilation__usage__init(void)
{
}

void mercury__recompilation__usage__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_imported_item_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_imported_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_module_imported_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_record_resolved_item_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_map_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_list_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_map_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_set_1);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_map_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_set_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_resolved_used_items_0);
	MR_register_type_ctor_info(&recompilation__usage__recompilation__usage__type_ctor_info_write_resolved_item_1);
}

void mercury__recompilation__usage__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module recompilation.usage. */
