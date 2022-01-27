/*
** Automatically generated from `recompilation.usage.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0;

#line 157 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 160 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 163 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 166 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 169 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 172 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

#line 175 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 178 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 181 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 184 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 187 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 190 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 193 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 196 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 199 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 202 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 205 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 208 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 211 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 214 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 217 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 220 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 223 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 226 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 229 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 232 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 235 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 238 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0;

#line 241 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

#line 244 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 247 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 250 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 253 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 256 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 259 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 262 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 265 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 268 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 271 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 274 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 277 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

#line 280 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7];

#line 283 "recompilation.usage.c"
static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7];

#line 286 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0;

#line 289 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1];

#line 292 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1];

#line 295 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1];

#line 298 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1];

#line 301 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct8 recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0;

#line 304 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4];

#line 307 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0;

#line 310 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1];

#line 313 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1;

#line 316 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2];

#line 319 "recompilation.usage.c"
static const MR_DuFunctorDesc recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2;

#line 322 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1];

#line 325 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1];

#line 328 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1];

#line 331 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0[3];

#line 334 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3];

#line 337 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3];

#line 340 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

#line 343 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
#line 346 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 348 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 351 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
#line 354 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 356 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 358 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 361 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
#line 364 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 366 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 369 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
#line 372 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 374 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 376 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 379 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
#line 382 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 384 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 387 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
#line 390 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 392 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 394 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 397 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
#line 400 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 402 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 405 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
#line 408 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 410 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 412 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 415 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
#line 418 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 420 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 422 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 425 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
#line 428 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 430 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 432 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 434 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 437 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
#line 440 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 442 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 445 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
#line 448 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 450 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 452 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 455 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
#line 458 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 460 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 463 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
#line 466 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 468 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 470 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 473 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
#line 476 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 478 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 481 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
#line 484 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 486 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 488 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 491 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
#line 494 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 496 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 498 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 501 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
#line 504 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 506 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 508 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 510 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 513 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
#line 516 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 518 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 520 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 523 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
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
recompilation__usage____Unify____resolved_item_set_1_0_10001(
#line 538 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 540 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 542 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 545 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
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
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
#line 560 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 562 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 565 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
#line 568 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 570 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 572 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 575 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
#line 578 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 580 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 583 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
#line 586 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 588 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 590 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 593 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
#line 596 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 598 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 601 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
#line 604 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 606 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 608 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 611 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
#line 614 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 616 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 618 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3);

#line 621 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
#line 624 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 626 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 628 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 630 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4);

#line 898 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__V_25_25,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 898 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20);

#line 848 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__V_58_58,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 848 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 417 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 417 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 417 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 819 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 819 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 819 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 1269 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1269 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1269 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1269 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15);

#line 1239 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
#line 1239 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1239 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5);

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14);

#line 1196 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1196 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1126 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1126 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1126 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1126 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 788 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 788 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 788 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10);

#line 898 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 898 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20);

#line 848 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 848 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 826 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item__ho1_7_p_0(
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_8,
#line 826 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_9,
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_IdSet_0_19,
#line 826 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_IdSet_20,
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 826 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22);

#line 769 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(
#line 769 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_47);

#line 746 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(
#line 746 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_41);

#line 676 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(
#line 676 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_17,
#line 676 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_35);

#line 267 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__267__1_3_f_0(
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12,
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_48,
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_49);

#line 417 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 417 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 417 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 819 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 819 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 819 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 499 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
#line 499 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 499 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0(
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0(
#line 517 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 517 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 513 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
#line 513 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 513 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 519 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
#line 519 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3);

#line 519 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 1523 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
#line 1523 "recompilation.usage.m"
  MR_Word recompilation__usage__Item_4,
#line 1523 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1523 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1517 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1509 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__NameArity_6,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 1509 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11);

#line 1481 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 1481 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22);

#line 1475 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
#line 1475 "recompilation.usage.m"
  MR_Word recompilation__usage__Info_3,
#line 1475 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_4);

#line 1437 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1437 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13);

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
#line 1427 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraint_4,
#line 1427 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1427 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1421 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
#line 1421 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraints_4,
#line 1421 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1421 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1413 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
#line 1413 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1413 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1413 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8);

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1382 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
#line 1382 "recompilation.usage.m"
  MR_Word recompilation__usage__InstName_4,
#line 1382 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_22,
#line 1382 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_23);

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1370 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
#line 1370 "recompilation.usage.m"
  MR_Word recompilation__usage__BoundInst_4,
#line 1370 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1370 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1356 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1356 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1334 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
#line 1334 "recompilation.usage.m"
  MR_Word recompilation__usage__Inst_4,
#line 1334 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1334 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25);

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1328 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0(
#line 1328 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1328 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1328 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1316 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
#line 1316 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1316 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1316 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0_1(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1310 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0(
#line 1310 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1310 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1310 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1295 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
#line 1295 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeCtor_4,
#line 1295 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1295 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14);

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1284 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
#line 1284 "recompilation.usage.m"
  MR_Word recompilation__usage__Type_4,
#line 1284 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1284 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1278 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
#line 1278 "recompilation.usage.m"
  MR_Word recompilation__usage__Types_4,
#line 1278 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1278 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1269 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1269 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1269 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_11,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1269 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15);

#line 1266 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1266 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1260 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_6,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingIdMap_9,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1260 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1258 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
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

#line 1254 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1254 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1239 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
#line 1239 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1239 "recompilation.usage.m"
  MR_Integer recompilation__usage___Arity_2,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1239 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5);

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_10,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14);

#line 1228 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1228 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingCtorMap_7,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1221 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1221 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1217 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
#line 1217 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_4,
#line 1217 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1217 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1203 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
#line 1203 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeSpecInfo_4,
#line 1203 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 1203 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17);

#line 1196 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
#line 1196 "recompilation.usage.m"
  MR_Integer recompilation__usage___ProcId_5,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1196 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10);

#line 1190 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1190 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1182 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1182 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1135 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_34,
#line 1135 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_35);

#line 1126 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1126 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1126 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__5_12,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1126 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 1123 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1123 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1118 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingPredMap_9,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1118 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1116 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1116 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 1112 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1112 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1104 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0_1(
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1104 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1088 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
#line 1088 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1088 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1088 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 1081 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
#line 1081 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1081 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1081 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 1074 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
#line 1074 "recompilation.usage.m"
  MR_Word recompilation__usage__CtorArg_4,
#line 1074 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1074 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8);

#line 1072 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1072 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1066 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
#line 1066 "recompilation.usage.m"
  MR_Word recompilation__usage__Ctor_4,
#line 1066 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1066 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13);

#line 1058 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1058 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1053 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
#line 1053 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1053 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1053 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1041 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
#line 1041 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeAndMode_4,
#line 1041 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1041 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9);

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1036 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1036 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1029 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
#line 1029 "recompilation.usage.m"
  MR_Word recompilation__usage__Method_1,
#line 1029 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1029 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3);

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1001 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_6,
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1001 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25);

#line 995 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 995 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 1517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1517 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 986 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__InstanceDefns_6,
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 986 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12);

#line 968 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 968 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 964 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 964 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 914 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_3,
#line 914 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_4);

#line 788 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage___SymName_7,
#line 788 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 788 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10);

#line 769 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
#line 769 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 769 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 759 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
#line 759 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 759 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 759 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_2);

#line 746 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
#line 746 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 746 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 724 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
#line 724 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_5,
#line 724 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_6,
#line 724 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_7,
#line 724 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedConstructors_8);

#line 715 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 715 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 704 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_9,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_10,
#line 704 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_11,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_12,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_20,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_21);

#line 684 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 684 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 676 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
#line 676 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 676 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1);

#line 661 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_10,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_12,
#line 661 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_13,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_MatchingNames_0_28,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_MatchingNames_29,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_30,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_31);

#line 647 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__Id_6,
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 647 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16);

#line 632 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
#line 632 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Queue_0_9,
#line 632 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 632 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11);

#line 618 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
#line 618 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 618 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7);

#line 590 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 590 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4);

#line 583 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
#line 583 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_4,
#line 583 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 583 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17);

#line 554 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 554 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 537 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_8,
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_9,
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__Dependencies_10,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedUsedItems_11,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__UsedTypeClasses_12,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ImportedItems_13,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ModuleInstances_14);

#line 523 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
#line 523 "recompilation.usage.m"
  MR_Word recompilation__usage__VisibleModule_4,
#line 523 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7,
#line 523 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8);

#line 456 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
#line 456 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolvedFunctor_4);

#line 445 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_19,
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 442 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 442 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 433 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_20,
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2);

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 414 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 407 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
#line 407 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 430 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 2209 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
#line 2212 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 2214 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 2216 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 2218 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 395 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
#line 395 "recompilation.usage.m"
  MR_Word recompilation__usage__Ids_6,
#line 395 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_9,
#line 395 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_10);

#line 390 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 390 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 379 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
#line 379 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 430 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 2261 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
#line 2264 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 2266 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 2268 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 2270 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 359 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 359 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13);

#line 347 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
#line 347 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 344 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 344 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 333 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
#line 333 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 330 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 330 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3);

#line 310 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 310 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13);

#line 292 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
#line 292 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1);

#line 267 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2);

#line 233 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_8,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__TimestampMap_9,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInstances_10,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleName_11,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12);

#line 224 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 224 "recompilation.usage.m"
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
  MR_Word recompilation__usage__TimestampMap_10);


static /* final */ const MR_Box recompilation__usage_scalar_common_1[61][3];

static /* final */ const MR_Box recompilation__usage_scalar_common_2[12][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_3[3][4];

static /* final */ const MR_Box recompilation__usage_scalar_common_4[21][6];

static /* final */ const MR_Box recompilation__usage_scalar_common_5[3][10];

static /* final */ const MR_Box recompilation__usage_scalar_common_6[5][7];

static /* final */ const MR_Integer recompilation__usage_scalar_common_7[1][2];

static /* final */ const MR_Box recompilation__usage_scalar_common_8[7][8];

static /* final */ const MR_Box recompilation__usage_scalar_common_9[4][5];

static /* final */ const MR_Box recompilation__usage_scalar_common_10[1][9];




static /* final */ const MR_Box recompilation__usage_scalar_common_1[61][3] = {
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
    ((MR_Box) (recompilation__usage__find_all_used_imported_items_7_p_0_1)),
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
    ((MR_Box) (&recompilation__usage_scalar_common_9[2])),
    ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_9[3])),
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
    ((MR_Box) (&recompilation__usage_scalar_common_4[17])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_defn_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[3])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[18])),
    ((MR_Box) (recompilation__usage__find_items_used_by_pred_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_spec_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_6[4])),
    ((MR_Box) (recompilation__usage__find_items_used_by_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_type_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_modes_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_insts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[20])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[14])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_bound_inst_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[19])),
    ((MR_Box) (recompilation__usage__find_items_used_by_inst_name_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_context_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[11])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&recompilation__usage_scalar_common_4[12])),
    ((MR_Box) (recompilation__usage__find_items_used_by_class_constraint_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 60 */
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

static /* final */ const MR_Box recompilation__usage_scalar_common_4[21][6] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0))
  },
  /* row 20 */
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

static /* final */ const MR_Box recompilation__usage_scalar_common_9[4][5] = {
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 3 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 3327 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0
  }
};

#line 3336 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
  }
};

#line 3344 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
  }
};

#line 3353 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3362 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3370 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct3 recompilation__usage__recompilation__pti_item_id_set_3__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3380 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

#line 3389 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3398 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3407 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3416 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3425 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3433 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3442 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3451 "recompilation.usage.c"
static const MR_VA_PseudoTypeInfo_Struct3 recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 3462 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3471 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3480 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3488 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 3497 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3505 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3514 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3524 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3533 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct1 recompilation__usage__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 3541 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3550 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3559 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3568 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_item_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_item_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3585 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0
  }
};

#line 3594 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "imported_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3611 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_module_imported_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____module_imported_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____module_imported_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "module_imported_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3628 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 3636 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
  }
};

#line 3645 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 3653 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 3662 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3671 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3680 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3689 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3697 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 3706 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3715 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3724 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct1 recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recompilation__usage__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3732 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct2 recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &recompilation__usage__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3741 "recompilation.usage.c"
static const MR_FA_TypeInfo_Struct3 recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0
  }
};

#line 3751 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_recompilation_usage_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &recompilation__usage__queue__ti_queue_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__ti_item_id_set_3set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0,
  (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0,
  (MR_PseudoTypeInfo) &recompilation__usage__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0
};

#line 3762 "recompilation.usage.c"
static const MR_ConstString recompilation__usage__recompilation__usage__field_names_recompilation_usage_info_0_0[7] = {
  (MR_String) "module_info",
  (MR_String) "item_queue",
  (MR_String) "imported_items",
  (MR_String) "module_instances",
  (MR_String) "dependencies",
  (MR_String) "used_items",
  (MR_String) "used_typeclasses"
};

#line 3773 "recompilation.usage.c"
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

#line 3788 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

#line 3793 "recompilation.usage.c"
static const MR_DuPtagLayout recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__usage__recompilation__usage__du_stag_ordered_recompilation_usage_info_0_0
  }
};

#line 3802 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_recompilation_usage_info_0_0
};

#line 3807 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0[1] = {
  (MR_Integer) 0
};

#line 3812 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____recompilation_usage_info_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____recompilation_usage_info_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "recompilation_usage_info",
  {     recompilation__usage__recompilation__usage__du_name_ordered_recompilation_usage_info_0 },
  {     recompilation__usage__recompilation__usage__du_ptag_ordered_recompilation_usage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_recompilation_usage_info_0
};

#line 3829 "recompilation.usage.c"
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

#line 3845 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_record_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____record_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____record_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "record_resolved_item",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage____vpti_pred_8__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0__plain_bool__type_ctor_info_bool_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0__plain_recompilation__usage__type_ctor_info_recompilation_usage_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3862 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3870 "recompilation.usage.c"
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

#line 3885 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_1[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 3890 "recompilation.usage.c"
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

#line 3905 "recompilation.usage.c"
static const MR_PseudoTypeInfo recompilation__usage__recompilation__usage__field_types_resolved_functor_0_2[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

#line 3911 "recompilation.usage.c"
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

#line 3926 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_0[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

#line 3931 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_1[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1
};

#line 3936 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_stag_ordered_resolved_functor_0_2[1] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2
};

#line 3941 "recompilation.usage.c"
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

#line 3960 "recompilation.usage.c"
static const MR_DuFunctorDescPtr recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0[3] = {
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_1,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_2,
  &recompilation__usage__recompilation__usage__du_functor_desc_resolved_functor_0_0
};

#line 3967 "recompilation.usage.c"
static const MR_Integer recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3974 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor",
  {     recompilation__usage__recompilation__usage__du_name_ordered_resolved_functor_0 },
  {     recompilation__usage__recompilation__usage__du_ptag_ordered_resolved_functor_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  recompilation__usage__recompilation__usage__functor_number_map_resolved_functor_0
};

#line 3991 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4008 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_functor_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_functor_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_functor_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4025 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_list_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_list_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4042 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_map_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_map_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4059 "recompilation.usage.c"
static const MR_FA_PseudoTypeInfo_Struct2 recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &recompilation__usage__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1
  }
};

#line 4068 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_item_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____resolved_item_set_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_item_set_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4085 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4102 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_pred_or_func_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4119 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_resolved_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__usage____Unify____resolved_used_items_0_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____resolved_used_items_0_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "resolved_used_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4136 "recompilation.usage.c"
const MR_TypeCtorInfo_Struct recompilation__usage__recompilation__usage__type_ctor_info_write_resolved_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__usage____Unify____write_resolved_item_1_0_10001)),
  ((MR_Box) (recompilation__usage____Compare____write_resolved_item_1_0_10001)),
  (MR_String) "recompilation.usage",
  (MR_String) "write_resolved_item",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__usage____vpti_pred_3__pseudo_pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4153 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0_10001(
#line 4156 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4158 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4160 "recompilation.usage.c"
{
#line 4162 "recompilation.usage.c"
  {
#line 4164 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4167 "recompilation.usage.c"
    {
#line 4169 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____imported_item_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4172 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4174 "recompilation.usage.c"
  }
#line 4176 "recompilation.usage.c"
}

#line 4179 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0_10001(
#line 4182 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4184 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4186 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4188 "recompilation.usage.c"
{
#line 4190 "recompilation.usage.c"
  {
#line 4192 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4195 "recompilation.usage.c"
    {
#line 4197 "recompilation.usage.c"
      recompilation__usage____Compare____imported_item_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4200 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4202 "recompilation.usage.c"
  }
#line 4204 "recompilation.usage.c"
}

#line 4207 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0_10001(
#line 4210 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4212 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4214 "recompilation.usage.c"
{
#line 4216 "recompilation.usage.c"
  {
#line 4218 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4221 "recompilation.usage.c"
    {
#line 4223 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____imported_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4226 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4228 "recompilation.usage.c"
  }
#line 4230 "recompilation.usage.c"
}

#line 4233 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0_10001(
#line 4236 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4238 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4240 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4242 "recompilation.usage.c"
{
#line 4244 "recompilation.usage.c"
  {
#line 4246 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4249 "recompilation.usage.c"
    {
#line 4251 "recompilation.usage.c"
      recompilation__usage____Compare____imported_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4254 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4256 "recompilation.usage.c"
  }
#line 4258 "recompilation.usage.c"
}

#line 4261 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0_10001(
#line 4264 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4266 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4268 "recompilation.usage.c"
{
#line 4270 "recompilation.usage.c"
  {
#line 4272 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4275 "recompilation.usage.c"
    {
#line 4277 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____module_imported_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4280 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4282 "recompilation.usage.c"
  }
#line 4284 "recompilation.usage.c"
}

#line 4287 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0_10001(
#line 4290 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4292 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4294 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4296 "recompilation.usage.c"
{
#line 4298 "recompilation.usage.c"
  {
#line 4300 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4303 "recompilation.usage.c"
    {
#line 4305 "recompilation.usage.c"
      recompilation__usage____Compare____module_imported_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4308 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4310 "recompilation.usage.c"
  }
#line 4312 "recompilation.usage.c"
}

#line 4315 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0_10001(
#line 4318 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4320 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4322 "recompilation.usage.c"
{
#line 4324 "recompilation.usage.c"
  {
#line 4326 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4329 "recompilation.usage.c"
    {
#line 4331 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____recompilation_usage_info_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4334 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4336 "recompilation.usage.c"
  }
#line 4338 "recompilation.usage.c"
}

#line 4341 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0_10001(
#line 4344 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4346 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4348 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4350 "recompilation.usage.c"
{
#line 4352 "recompilation.usage.c"
  {
#line 4354 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4357 "recompilation.usage.c"
    {
#line 4359 "recompilation.usage.c"
      recompilation__usage____Compare____recompilation_usage_info_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4362 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4364 "recompilation.usage.c"
  }
#line 4366 "recompilation.usage.c"
}

#line 4369 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0_10001(
#line 4372 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4374 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4376 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4378 "recompilation.usage.c"
{
#line 4380 "recompilation.usage.c"
  {
#line 4382 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4385 "recompilation.usage.c"
    {
#line 4387 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____record_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4390 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4392 "recompilation.usage.c"
  }
#line 4394 "recompilation.usage.c"
}

#line 4397 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0_10001(
#line 4400 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4402 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4404 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4406 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4408 "recompilation.usage.c"
{
#line 4410 "recompilation.usage.c"
  {
#line 4412 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4415 "recompilation.usage.c"
    {
#line 4417 "recompilation.usage.c"
      recompilation__usage____Compare____record_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4420 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4422 "recompilation.usage.c"
  }
#line 4424 "recompilation.usage.c"
}

#line 4427 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0_10001(
#line 4430 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4432 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4434 "recompilation.usage.c"
{
#line 4436 "recompilation.usage.c"
  {
#line 4438 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4441 "recompilation.usage.c"
    {
#line 4443 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4446 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4448 "recompilation.usage.c"
  }
#line 4450 "recompilation.usage.c"
}

#line 4453 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0_10001(
#line 4456 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4458 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4460 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4462 "recompilation.usage.c"
{
#line 4464 "recompilation.usage.c"
  {
#line 4466 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4469 "recompilation.usage.c"
    {
#line 4471 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4474 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4476 "recompilation.usage.c"
  }
#line 4478 "recompilation.usage.c"
}

#line 4481 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0_10001(
#line 4484 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4486 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4488 "recompilation.usage.c"
{
#line 4490 "recompilation.usage.c"
  {
#line 4492 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4495 "recompilation.usage.c"
    {
#line 4497 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_map_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4500 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4502 "recompilation.usage.c"
  }
#line 4504 "recompilation.usage.c"
}

#line 4507 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0_10001(
#line 4510 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4512 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4514 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4516 "recompilation.usage.c"
{
#line 4518 "recompilation.usage.c"
  {
#line 4520 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4523 "recompilation.usage.c"
    {
#line 4525 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_map_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4528 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4530 "recompilation.usage.c"
  }
#line 4532 "recompilation.usage.c"
}

#line 4535 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0_10001(
#line 4538 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4540 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4542 "recompilation.usage.c"
{
#line 4544 "recompilation.usage.c"
  {
#line 4546 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4549 "recompilation.usage.c"
    {
#line 4551 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_functor_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4554 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4556 "recompilation.usage.c"
  }
#line 4558 "recompilation.usage.c"
}

#line 4561 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0_10001(
#line 4564 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4566 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4568 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4570 "recompilation.usage.c"
{
#line 4572 "recompilation.usage.c"
  {
#line 4574 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4577 "recompilation.usage.c"
    {
#line 4579 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_functor_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4582 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4584 "recompilation.usage.c"
  }
#line 4586 "recompilation.usage.c"
}

#line 4589 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0_10001(
#line 4592 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4594 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4596 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4598 "recompilation.usage.c"
{
#line 4600 "recompilation.usage.c"
  {
#line 4602 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4605 "recompilation.usage.c"
    {
#line 4607 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_list_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4610 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4612 "recompilation.usage.c"
  }
#line 4614 "recompilation.usage.c"
}

#line 4617 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0_10001(
#line 4620 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4622 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4624 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4626 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4628 "recompilation.usage.c"
{
#line 4630 "recompilation.usage.c"
  {
#line 4632 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4635 "recompilation.usage.c"
    {
#line 4637 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_list_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4640 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4642 "recompilation.usage.c"
  }
#line 4644 "recompilation.usage.c"
}

#line 4647 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0_10001(
#line 4650 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4652 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4654 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4656 "recompilation.usage.c"
{
#line 4658 "recompilation.usage.c"
  {
#line 4660 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4663 "recompilation.usage.c"
    {
#line 4665 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_map_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4668 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4670 "recompilation.usage.c"
  }
#line 4672 "recompilation.usage.c"
}

#line 4675 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0_10001(
#line 4678 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4680 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4682 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4684 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4686 "recompilation.usage.c"
{
#line 4688 "recompilation.usage.c"
  {
#line 4690 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4693 "recompilation.usage.c"
    {
#line 4695 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_map_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4698 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4700 "recompilation.usage.c"
  }
#line 4702 "recompilation.usage.c"
}

#line 4705 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0_10001(
#line 4708 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4710 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4712 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4714 "recompilation.usage.c"
{
#line 4716 "recompilation.usage.c"
  {
#line 4718 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4721 "recompilation.usage.c"
    {
#line 4723 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_item_set_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4726 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4728 "recompilation.usage.c"
  }
#line 4730 "recompilation.usage.c"
}

#line 4733 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0_10001(
#line 4736 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4738 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4740 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4742 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4744 "recompilation.usage.c"
{
#line 4746 "recompilation.usage.c"
  {
#line 4748 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4751 "recompilation.usage.c"
    {
#line 4753 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_item_set_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4756 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4758 "recompilation.usage.c"
  }
#line 4760 "recompilation.usage.c"
}

#line 4763 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0_10001(
#line 4766 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4768 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4770 "recompilation.usage.c"
{
#line 4772 "recompilation.usage.c"
  {
#line 4774 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4777 "recompilation.usage.c"
    {
#line 4779 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_pred_or_func_map_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4782 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4784 "recompilation.usage.c"
  }
#line 4786 "recompilation.usage.c"
}

#line 4789 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0_10001(
#line 4792 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4794 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4796 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4798 "recompilation.usage.c"
{
#line 4800 "recompilation.usage.c"
  {
#line 4802 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4805 "recompilation.usage.c"
    {
#line 4807 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_pred_or_func_map_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4810 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4812 "recompilation.usage.c"
  }
#line 4814 "recompilation.usage.c"
}

#line 4817 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0_10001(
#line 4820 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4822 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4824 "recompilation.usage.c"
{
#line 4826 "recompilation.usage.c"
  {
#line 4828 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4831 "recompilation.usage.c"
    {
#line 4833 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_pred_or_func_set_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4836 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4838 "recompilation.usage.c"
  }
#line 4840 "recompilation.usage.c"
}

#line 4843 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0_10001(
#line 4846 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4848 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4850 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4852 "recompilation.usage.c"
{
#line 4854 "recompilation.usage.c"
  {
#line 4856 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4859 "recompilation.usage.c"
    {
#line 4861 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_pred_or_func_set_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4864 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4866 "recompilation.usage.c"
  }
#line 4868 "recompilation.usage.c"
}

#line 4871 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0_10001(
#line 4874 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4876 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 4878 "recompilation.usage.c"
{
#line 4880 "recompilation.usage.c"
  {
#line 4882 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4885 "recompilation.usage.c"
    {
#line 4887 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____resolved_used_items_0_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 4890 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4892 "recompilation.usage.c"
  }
#line 4894 "recompilation.usage.c"
}

#line 4897 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0_10001(
#line 4900 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_1,
#line 4902 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4904 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4906 "recompilation.usage.c"
{
#line 4908 "recompilation.usage.c"
  {
#line 4910 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4913 "recompilation.usage.c"
    {
#line 4915 "recompilation.usage.c"
      recompilation__usage____Compare____resolved_used_items_0_0(&recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4918 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_1 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4920 "recompilation.usage.c"
  }
#line 4922 "recompilation.usage.c"
}

#line 4925 "recompilation.usage.c"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0_10001(
#line 4928 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4930 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 4932 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3)
#line 4934 "recompilation.usage.c"
{
#line 4936 "recompilation.usage.c"
  {
#line 4938 "recompilation.usage.c"
    MR_bool recompilation__usage__succeeded;

#line 4941 "recompilation.usage.c"
    {
#line 4943 "recompilation.usage.c"
      recompilation__usage__succeeded = recompilation__usage____Unify____write_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3));
    }
#line 4946 "recompilation.usage.c"
    return recompilation__usage__succeeded;
#line 4948 "recompilation.usage.c"
  }
#line 4950 "recompilation.usage.c"
}

#line 4953 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0_10001(
#line 4956 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 4958 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_2,
#line 4960 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 4962 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_4)
#line 4964 "recompilation.usage.c"
{
#line 4966 "recompilation.usage.c"
  {
#line 4968 "recompilation.usage.c"
    MR_Word recompilation__usage__conv0_HeadVar__1_1;

#line 4971 "recompilation.usage.c"
    {
#line 4973 "recompilation.usage.c"
      recompilation__usage____Compare____write_resolved_item_1_0(((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv0_HeadVar__1_1, ((MR_Word) recompilation__usage__wrapper_arg_3), ((MR_Word) recompilation__usage__wrapper_arg_4));
    }
#line 4976 "recompilation.usage.c"
    *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__1_1));
#line 4978 "recompilation.usage.c"
  }
#line 4980 "recompilation.usage.c"
}

#line 898 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__V_25_25,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 898 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20)
#line 898 "recompilation.usage.m"
{
#line 907 "recompilation.usage.m"
  {
#line 907 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 905 "recompilation.usage.m"
    {
#line 905 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_10)));
    }
#line 907 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 906 "recompilation.usage.m"
      {
#line 906 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 906 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_20 = recompilation__usage__STATE_VARIABLE_Info_0_19;
#line 906 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedMap_18 = recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17;
#line 906 "recompilation.usage.m"
      }
#line 907 "recompilation.usage.m"
    else
#line 908 "recompilation.usage.m"
      {
#line 908 "recompilation.usage.m"
        recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_25_25, recompilation__usage__ModuleQualifier_10, recompilation__usage__SymName_11, recompilation__usage__Arity_12, recompilation__usage__Recorded_14, recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, recompilation__usage__STATE_VARIABLE_ResolvedMap_18, recompilation__usage__STATE_VARIABLE_Info_0_19, recompilation__usage__STATE_VARIABLE_Info_20);
#line 908 "recompilation.usage.m"
        return;
      }
#line 907 "recompilation.usage.m"
  }
#line 898 "recompilation.usage.m"
}

#line 848 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__V_58_58,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 848 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 848 "recompilation.usage.m"
{
#line 854 "recompilation.usage.m"
  {
#line 854 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 854 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_for_T_55 = (MR_Word) &recompilation__usage_scalar_common_2[2];

#line 854 "recompilation.usage.m"
    if ((recompilation__usage__STATE_VARIABLE_List_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "recompilation.usage.m"
      {
#line 854 "recompilation.usage.m"
        MR_Word recompilation__usage__Map0_17;

#line 856 "recompilation.usage.m"
        {
#line 856 "recompilation.usage.m"
          mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__Map0_17);
        }
#line 905 "recompilation.usage.m"
        {
#line 905 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__Map0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_1)));
        }
#line 5089 "recompilation.usage.c"
        if (recompilation__usage__succeeded)
#line 5091 "recompilation.usage.c"
          {
#line 906 "recompilation.usage.m"
            *recompilation__usage__Recorded_5 = (MR_Integer) 0;
#line 906 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_9 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 863 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 5099 "recompilation.usage.c"
          }
#line 5101 "recompilation.usage.c"
        else
#line 5103 "recompilation.usage.c"
          {
#line 5105 "recompilation.usage.c"
            MR_Word recompilation__usage__Map_89;

#line 908 "recompilation.usage.m"
            {
#line 908 "recompilation.usage.m"
              recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__Map0_17, &recompilation__usage__Map_89, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
            }
#line 862 "recompilation.usage.m"
#line 862 "recompilation.usage.m"
            switch (*recompilation__usage__Recorded_5) {
#line 862 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 862 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 863 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 862 "recompilation.usage.m"
                break;
#line 862 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 860 "recompilation.usage.m"
                {
#line 860 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_25_25;

#line 861 "recompilation.usage.m"
                  {
#line 861 "recompilation.usage.m"
                    recompilation__usage__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 861 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 1) = ((MR_Box) (recompilation__usage__Map_89));
#line 861 "recompilation.usage.m"
                  }
#line 861 "recompilation.usage.m"
                  {
#line 861 "recompilation.usage.m"
                    MR_Word base;
#line 861 "recompilation.usage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 861 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 861 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "recompilation.usage.m"
                  }
#line 860 "recompilation.usage.m"
                }
#line 862 "recompilation.usage.m"
                break;
#line 862 "recompilation.usage.m"
            }
#line 5161 "recompilation.usage.c"
          }
#line 854 "recompilation.usage.m"
      }
#line 854 "recompilation.usage.m"
    else
#line 866 "recompilation.usage.m"
      {
#line 866 "recompilation.usage.m"
        MR_Integer recompilation__usage__ThisArity_34;
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__ArityMap0_35;
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__ListRest0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 1)));
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 0)));

#line 867 "recompilation.usage.m"
        recompilation__usage__ThisArity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 0)));
#line 867 "recompilation.usage.m"
        recompilation__usage__ArityMap0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 1)));
#line 868 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_3 < recompilation__usage__ThisArity_34);
#line 878 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 869 "recompilation.usage.m"
          {
#line 869 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap0_37;

#line 869 "recompilation.usage.m"
            {
#line 869 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__NewArityMap0_37);
            }
#line 905 "recompilation.usage.m"
            {
#line 905 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], recompilation__usage__NewArityMap0_37, ((MR_Box) (recompilation__usage__ModuleQualifier_1)));
            }
#line 5201 "recompilation.usage.c"
            if (recompilation__usage__succeeded)
#line 5203 "recompilation.usage.c"
              {
#line 906 "recompilation.usage.m"
                *recompilation__usage__Recorded_5 = (MR_Integer) 0;
#line 906 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_9 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 876 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 5211 "recompilation.usage.c"
              }
#line 5213 "recompilation.usage.c"
            else
#line 5215 "recompilation.usage.c"
              {
#line 5217 "recompilation.usage.c"
                MR_Word recompilation__usage__NewArityMap_90;

#line 908 "recompilation.usage.m"
                {
#line 908 "recompilation.usage.m"
                  recompilation__usage__do_record_used_pred_or_func_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__NewArityMap0_37, &recompilation__usage__NewArityMap_90, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 875 "recompilation.usage.m"
#line 875 "recompilation.usage.m"
                switch (*recompilation__usage__Recorded_5) {
#line 875 "recompilation.usage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 875 "recompilation.usage.m"
                  case (MR_Integer) 0:
#line 876 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 875 "recompilation.usage.m"
                    break;
#line 875 "recompilation.usage.m"
                  case (MR_Integer) 1:
#line 873 "recompilation.usage.m"
                    {
#line 873 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_48_48;

#line 874 "recompilation.usage.m"
                      {
#line 874 "recompilation.usage.m"
                        recompilation__usage__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 874 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 1) = ((MR_Box) (recompilation__usage__NewArityMap_90));
#line 874 "recompilation.usage.m"
                      }
#line 874 "recompilation.usage.m"
                      {
#line 874 "recompilation.usage.m"
                        MR_Word base;
#line 874 "recompilation.usage.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "recompilation.usage.m"
                        *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 874 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_48_48));
#line 874 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__STATE_VARIABLE_List_0_6));
#line 874 "recompilation.usage.m"
                      }
#line 873 "recompilation.usage.m"
                    }
#line 875 "recompilation.usage.m"
                    break;
#line 875 "recompilation.usage.m"
                }
#line 5273 "recompilation.usage.c"
              }
#line 869 "recompilation.usage.m"
          }
#line 878 "recompilation.usage.m"
        else
#line 887 "recompilation.usage.m"
          {
#line 878 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__Arity_3 == recompilation__usage__ThisArity_34);
#line 887 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 880 "recompilation.usage.m"
              {
#line 880 "recompilation.usage.m"
                MR_Word recompilation__usage__ArityMap_39;

#line 879 "recompilation.usage.m"
                {
#line 879 "recompilation.usage.m"
                  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_51_95_95_104_111_56_95_95_91_53_93_95_48_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ArityMap0_35, &recompilation__usage__ArityMap_39, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 884 "recompilation.usage.m"
#line 884 "recompilation.usage.m"
                switch (*recompilation__usage__Recorded_5) {
#line 884 "recompilation.usage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 884 "recompilation.usage.m"
                  case (MR_Integer) 0:
#line 885 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 884 "recompilation.usage.m"
                    break;
#line 884 "recompilation.usage.m"
                  case (MR_Integer) 1:
#line 882 "recompilation.usage.m"
                    {
#line 882 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_51_51;

#line 883 "recompilation.usage.m"
                      {
#line 883 "recompilation.usage.m"
                        recompilation__usage__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 1) = ((MR_Box) (recompilation__usage__ArityMap_39));
#line 883 "recompilation.usage.m"
                      }
#line 883 "recompilation.usage.m"
                      {
#line 883 "recompilation.usage.m"
                        MR_Word base;
#line 883 "recompilation.usage.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "recompilation.usage.m"
                        *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_51_51));
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest0_36));
#line 883 "recompilation.usage.m"
                      }
#line 882 "recompilation.usage.m"
                    }
#line 884 "recompilation.usage.m"
                    break;
#line 884 "recompilation.usage.m"
                }
#line 880 "recompilation.usage.m"
              }
#line 887 "recompilation.usage.m"
            else
#line 889 "recompilation.usage.m"
              {
#line 889 "recompilation.usage.m"
                MR_Word recompilation__usage__ListRest_40;

#line 888 "recompilation.usage.m"
                {
#line 888 "recompilation.usage.m"
                  recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(recompilation__usage__V_58_58, recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ListRest0_36, &recompilation__usage__ListRest_40, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 893 "recompilation.usage.m"
#line 893 "recompilation.usage.m"
                switch (*recompilation__usage__Recorded_5) {
#line 893 "recompilation.usage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 893 "recompilation.usage.m"
                  case (MR_Integer) 0:
#line 894 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 893 "recompilation.usage.m"
                    break;
#line 893 "recompilation.usage.m"
                  case (MR_Integer) 1:
#line 892 "recompilation.usage.m"
                    {
#line 892 "recompilation.usage.m"
                      MR_Word base;
#line 892 "recompilation.usage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 892 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_45_45));
#line 892 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest_40));
#line 892 "recompilation.usage.m"
                    }
#line 893 "recompilation.usage.m"
                    break;
#line 893 "recompilation.usage.m"
                }
#line 889 "recompilation.usage.m"
              }
#line 887 "recompilation.usage.m"
          }
#line 866 "recompilation.usage.m"
      }
#line 854 "recompilation.usage.m"
  }
#line 848 "recompilation.usage.m"
}

#line 417 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 417 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 417 "recompilation.usage.m"
{
#line 417 "recompilation.usage.m"
  {
#line 417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 417 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 417 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 417 "recompilation.usage.m"
    {
#line 417 "recompilation.usage.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 417 "recompilation.usage.m"
      return;
    }
#line 417 "recompilation.usage.m"
  }
#line 417 "recompilation.usage.m"
}

#line 417 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 417 "recompilation.usage.m"
{
#line 417 "recompilation.usage.m"
  {
#line 417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 417 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 417 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 417 "recompilation.usage.m"
    {
#line 417 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 417 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 417 "recompilation.usage.m"
  }
#line 417 "recompilation.usage.m"
}

#line 819 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(
#line 819 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 819 "recompilation.usage.m"
{
#line 819 "recompilation.usage.m"
  {
#line 819 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 819 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 819 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 819 "recompilation.usage.m"
    {
#line 819 "recompilation.usage.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 819 "recompilation.usage.m"
      return;
    }
#line 819 "recompilation.usage.m"
  }
#line 819 "recompilation.usage.m"
}

#line 819 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 819 "recompilation.usage.m"
{
#line 819 "recompilation.usage.m"
  {
#line 819 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 819 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 819 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 819 "recompilation.usage.m"
    {
#line 819 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 819 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 819 "recompilation.usage.m"
  }
#line 819 "recompilation.usage.m"
}

#line 1269 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1269 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1269 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1269 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15)
#line 1269 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;
#line 1274 "recompilation.usage.m"
    MR_Word recompilation__usage__V_18_18;

#line 1276 "recompilation.usage.m"
    {
#line 1276 "recompilation.usage.m"
      recompilation__usage__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_18_18, 0) = ((MR_Box) (recompilation__usage__Module_12));
#line 1276 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_18_18, 1) = ((MR_Box) (recompilation__usage__Name_9));
#line 1276 "recompilation.usage.m"
    }
#line 1276 "recompilation.usage.m"
    {
#line 1276 "recompilation.usage.m"
      recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (recompilation__usage__V_18_18));
#line 1276 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__Arity_10));
#line 1276 "recompilation.usage.m"
    }
#line 1275 "recompilation.usage.m"
    {
#line 1275 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0(recompilation__usage__ItemType_8, recompilation__usage__V_16_16, recompilation__usage__STATE_VARIABLE_Info_0_14, recompilation__usage__STATE_VARIABLE_Info_15);
#line 1275 "recompilation.usage.m"
      return;
    }
#line 1274 "recompilation.usage.m"
  }
#line 1269 "recompilation.usage.m"
}

#line 1239 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(
#line 1239 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1239 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5)
#line 1239 "recompilation.usage.m"
{
#line 1242 "recompilation.usage.m"
  {
#line 1242 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1242 "recompilation.usage.m"
#line 1242 "recompilation.usage.m"
    switch (MR_tag((MR_Word) recompilation__usage__ResolverFunctor_3)) {
#line 1242 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1242 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 1242 "recompilation.usage.m"
        {
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__PredModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 1)));
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__PredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 2)));
#line 1242 "recompilation.usage.m"
          MR_Integer recompilation__usage__PredArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolverFunctor_3, (MR_Integer) 3)));
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__V_16_16;
#line 1242 "recompilation.usage.m"
          MR_Word recompilation__usage__V_17_17;

#line 1245 "recompilation.usage.m"
          {
#line 1245 "recompilation.usage.m"
            recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (recompilation__usage__Name_1));
#line 1245 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__PredArity_13));
#line 1245 "recompilation.usage.m"
          }
#line 1245 "recompilation.usage.m"
          {
#line 1245 "recompilation.usage.m"
            recompilation__usage__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 0) = ((MR_Box) (recompilation__usage__PredId_10));
#line 1245 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 1) = ((MR_Box) (recompilation__usage__PredModule_11));
#line 1245 "recompilation.usage.m"
          }
#line 1245 "recompilation.usage.m"
          {
#line 1245 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_pred_5_p_0(recompilation__usage__PredOrFunc_12, recompilation__usage__V_16_16, recompilation__usage__V_17_17, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1245 "recompilation.usage.m"
            return;
          }
#line 1242 "recompilation.usage.m"
        }
#line 1242 "recompilation.usage.m"
        break;
#line 1242 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 1247 "recompilation.usage.m"
        {
#line 1247 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtor_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));

#line 1249 "recompilation.usage.m"
          {
#line 1249 "recompilation.usage.m"
            recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, recompilation__usage__TypeCtor_23, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1249 "recompilation.usage.m"
            return;
          }
#line 1247 "recompilation.usage.m"
        }
#line 1242 "recompilation.usage.m"
        break;
#line 1242 "recompilation.usage.m"
      case (MR_Integer) 2:
#line 1250 "recompilation.usage.m"
        {
#line 1250 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolverFunctor_3, (MR_Integer) 0)));
#line 1251 "recompilation.usage.m"
          MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolverFunctor_3, (MR_Integer) 1)));

#line 1252 "recompilation.usage.m"
          {
#line 1252 "recompilation.usage.m"
            recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 1, recompilation__usage__TypeCtor_32, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1252 "recompilation.usage.m"
            return;
          }
#line 1250 "recompilation.usage.m"
        }
#line 1242 "recompilation.usage.m"
        break;
#line 1242 "recompilation.usage.m"
    }
#line 1242 "recompilation.usage.m"
  }
#line 1239 "recompilation.usage.m"
}

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14)
#line 1231 "recompilation.usage.m"
{
#line 1235 "recompilation.usage.m"
  {
#line 1235 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_19;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet0_22;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet0_23;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet_24;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet_25;
#line 1235 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_27;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33;
#line 697 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42;
#line 698 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_48_48;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_50_50;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_51_51;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_52_52;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_53_53;
#line 701 "recompilation.usage.m"
    MR_Word recompilation__usage__V_49_49;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 702 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;

#line 1236 "recompilation.usage.m"
    {
#line 1236 "recompilation.usage.m"
      recompilation__usage__SymName_19 = recompilation__module_qualify_name_2_f_0(recompilation__usage__Qualifier_9, recompilation__usage__Name_7);
    }
#line 697 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 697 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 697 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 697 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 697 "recompilation.usage.m"
    recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 697 "recompilation.usage.m"
    recompilation__usage__ItemSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 697 "recompilation.usage.m"
    recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 0)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 1)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 2)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 3)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 4)));
#line 698 "recompilation.usage.m"
    recompilation__usage__IdSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 5)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 6)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 7)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 8)));
#line 698 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 9)));
#line 699 "recompilation.usage.m"
    {
#line 699 "recompilation.usage.m"
      recompilation__usage__record_resolved_item__ho1_7_p_0(recompilation__usage__SymName_19, recompilation__usage__Arity_8, recompilation__usage__IdSet0_23, &recompilation__usage__IdSet_24, recompilation__usage__STATE_VARIABLE_Info_0_13, &recompilation__usage__STATE_VARIABLE_Info_14_27);
    }
#line 701 "recompilation.usage.m"
    recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 0)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 1)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 2)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 3)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 4)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 5)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 6)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 7)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 8)));
#line 701 "recompilation.usage.m"
    recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_22, (MR_Integer) 9)));
#line 701 "recompilation.usage.m"
    {
#line 701 "recompilation.usage.m"
      recompilation__usage__ItemSet_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 0) = ((MR_Box) (recompilation__usage__V_44_44));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 1) = ((MR_Box) (recompilation__usage__V_45_45));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 2) = ((MR_Box) (recompilation__usage__V_46_46));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 3) = ((MR_Box) (recompilation__usage__V_47_47));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 4) = ((MR_Box) (recompilation__usage__V_48_48));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 5) = ((MR_Box) (recompilation__usage__IdSet_24));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 6) = ((MR_Box) (recompilation__usage__V_50_50));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 7) = ((MR_Box) (recompilation__usage__V_51_51));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 8) = ((MR_Box) (recompilation__usage__V_52_52));
#line 701 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_25, 9) = ((MR_Box) (recompilation__usage__V_53_53));
#line 701 "recompilation.usage.m"
    }
#line 702 "recompilation.usage.m"
    recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 0)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 1)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 2)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 3)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 4)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 5)));
#line 702 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_27, (MR_Integer) 6)));
#line 702 "recompilation.usage.m"
    {
#line 702 "recompilation.usage.m"
      MR_Word base;
#line 702 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 702 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_14 = base;
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_54_54));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_55_55));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_56_56));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_57_57));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_58_58));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__ItemSet_25));
#line 702 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_60_60));
#line 702 "recompilation.usage.m"
    }
#line 1235 "recompilation.usage.m"
  }
#line 1231 "recompilation.usage.m"
}

#line 1196 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1196 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1196 "recompilation.usage.m"
{
#line 1199 "recompilation.usage.m"
  {
#line 1199 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1199 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgModes_8;

#line 1200 "recompilation.usage.m"
    {
#line 1200 "recompilation.usage.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(recompilation__usage__ProcInfo_6, &recompilation__usage__ArgModes_8);
    }
#line 1201 "recompilation.usage.m"
    {
#line 1201 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_modes_3_p_0(recompilation__usage__ArgModes_8, recompilation__usage__STATE_VARIABLE_Info_0_9, recompilation__usage__STATE_VARIABLE_Info_10);
#line 1201 "recompilation.usage.m"
      return;
    }
#line 1199 "recompilation.usage.m"
  }
#line 1196 "recompilation.usage.m"
}

#line 1126 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1126 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1126 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1126 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1126 "recompilation.usage.m"
{
#line 1131 "recompilation.usage.m"
  {
#line 1131 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1131 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_14;
#line 1131 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17;

#line 1132 "recompilation.usage.m"
    {
#line 1132 "recompilation.usage.m"
      recompilation__usage__SymName_14 = recompilation__module_qualify_name_2_f_0(recompilation__usage__ModuleQualifier_11, recompilation__usage__Name_9);
    }
#line 1133 "recompilation.usage.m"
    {
#line 1133 "recompilation.usage.m"
      recompilation__usage__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 0) = ((MR_Box) (recompilation__usage__SymName_14));
#line 1133 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_17_17, 1) = ((MR_Box) (recompilation__usage__Arity_10));
#line 1133 "recompilation.usage.m"
    }
#line 1133 "recompilation.usage.m"
    {
#line 1133 "recompilation.usage.m"
      recompilation__usage__record_used_pred_or_func_4_p_0(recompilation__usage__PredOrFunc_8, recompilation__usage__V_17_17, recompilation__usage__STATE_VARIABLE_Info_0_15, recompilation__usage__STATE_VARIABLE_Info_16);
#line 1133 "recompilation.usage.m"
      return;
    }
#line 1131 "recompilation.usage.m"
  }
#line 1126 "recompilation.usage.m"
}

#line 788 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 788 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 788 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10)
#line 788 "recompilation.usage.m"
{
#line 791 "recompilation.usage.m"
  {
#line 791 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 791 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_11;
#line 791 "recompilation.usage.m"
    MR_Word recompilation__usage__PredOrFunc_12;
#line 791 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_13;
#line 791 "recompilation.usage.m"
    MR_Integer recompilation__usage__PredArity_14;
#line 791 "recompilation.usage.m"
    MR_Word recompilation__usage__PredExistQVars_15;
#line 791 "recompilation.usage.m"
    MR_Integer recompilation__usage__OrigArity_16;

#line 792 "recompilation.usage.m"
    {
#line 792 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_6, recompilation__usage__PredId_9, &recompilation__usage__PredInfo_11);
    }
#line 793 "recompilation.usage.m"
    {
#line 793 "recompilation.usage.m"
      recompilation__usage__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 794 "recompilation.usage.m"
    {
#line 794 "recompilation.usage.m"
      recompilation__usage__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 795 "recompilation.usage.m"
    {
#line 795 "recompilation.usage.m"
      recompilation__usage__PredArity_14 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(recompilation__usage__PredInfo_11);
    }
#line 796 "recompilation.usage.m"
    {
#line 796 "recompilation.usage.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(recompilation__usage__PredInfo_11, &recompilation__usage__PredExistQVars_15);
    }
#line 797 "recompilation.usage.m"
    {
#line 797 "recompilation.usage.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__usage__PredOrFunc_12, &recompilation__usage__OrigArity_16, recompilation__usage__PredArity_14);
    }
#line 804 "recompilation.usage.m"
#line 804 "recompilation.usage.m"
    switch (recompilation__usage__PredOrFunc_12) {
#line 804 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 804 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 805 "recompilation.usage.m"
        {
#line 806 "recompilation.usage.m"
          recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 >= recompilation__usage__Arity_8);
#line 805 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 805 "recompilation.usage.m"
            {
#line 810 "recompilation.usage.m"
              recompilation__usage__succeeded = (recompilation__usage__PredExistQVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "recompilation.usage.m"
              if (!(recompilation__usage__succeeded))
#line 811 "recompilation.usage.m"
                recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 == recompilation__usage__Arity_8);
#line 805 "recompilation.usage.m"
            }
#line 805 "recompilation.usage.m"
        }
#line 804 "recompilation.usage.m"
        break;
#line 804 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 799 "recompilation.usage.m"
        {
#line 800 "recompilation.usage.m"
          recompilation__usage__succeeded = (recompilation__usage__OrigArity_16 >= recompilation__usage__Arity_8);
#line 799 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 803 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__PredExistQVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "recompilation.usage.m"
        }
#line 804 "recompilation.usage.m"
        break;
#line 804 "recompilation.usage.m"
    }
#line 791 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 791 "recompilation.usage.m"
      {
#line 814 "recompilation.usage.m"
        {
#line 814 "recompilation.usage.m"
          MR_Word base;
#line 814 "recompilation.usage.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "recompilation.usage.m"
          *recompilation__usage__ResolvedCtor_10 = base;
#line 814 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__PredId_9));
#line 814 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__PredModule_13));
#line 814 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__PredOrFunc_12));
#line 814 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__OrigArity_16));
#line 814 "recompilation.usage.m"
        }
#line 814 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 791 "recompilation.usage.m"
      }
#line 791 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 791 "recompilation.usage.m"
  }
#line 788 "recompilation.usage.m"
}

#line 898 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_3__ho7_9_p_0(
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_10,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_11,
#line 898 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_12,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedMap_18,
#line 898 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_19,
#line 898 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_20)
#line 898 "recompilation.usage.m"
{
#line 907 "recompilation.usage.m"
  {
#line 907 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 905 "recompilation.usage.m"
    {
#line 905 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[4], recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, ((MR_Box) (recompilation__usage__ModuleQualifier_10)));
    }
#line 907 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 906 "recompilation.usage.m"
      {
#line 906 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 906 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_20 = recompilation__usage__STATE_VARIABLE_Info_0_19;
#line 906 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedMap_18 = recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17;
#line 906 "recompilation.usage.m"
      }
#line 907 "recompilation.usage.m"
    else
#line 908 "recompilation.usage.m"
      {
#line 908 "recompilation.usage.m"
        recompilation__usage__do_record_used_functor_8_p_0(recompilation__usage__ModuleQualifier_10, recompilation__usage__SymName_11, recompilation__usage__Arity_12, recompilation__usage__Recorded_14, recompilation__usage__STATE_VARIABLE_ResolvedMap_0_17, recompilation__usage__STATE_VARIABLE_ResolvedMap_18, recompilation__usage__STATE_VARIABLE_Info_0_19, recompilation__usage__STATE_VARIABLE_Info_20);
#line 908 "recompilation.usage.m"
        return;
      }
#line 907 "recompilation.usage.m"
  }
#line 898 "recompilation.usage.m"
}

#line 848 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item_2__ho6_9_p_0(
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_1,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_2,
#line 848 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_3,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_5,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_List_0_6,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_List_7,
#line 848 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 848 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 848 "recompilation.usage.m"
{
#line 854 "recompilation.usage.m"
  {
#line 854 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 854 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_for_T_55 = (MR_Word) &recompilation__usage_scalar_common_2[4];

#line 854 "recompilation.usage.m"
    if ((recompilation__usage__STATE_VARIABLE_List_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 854 "recompilation.usage.m"
      {
#line 854 "recompilation.usage.m"
        MR_Word recompilation__usage__Map0_17;
#line 854 "recompilation.usage.m"
        MR_Word recompilation__usage__Map_18;

#line 856 "recompilation.usage.m"
        {
#line 856 "recompilation.usage.m"
          mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__Map0_17);
        }
#line 857 "recompilation.usage.m"
        {
#line 857 "recompilation.usage.m"
          recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__Map0_17, &recompilation__usage__Map_18, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
        }
#line 862 "recompilation.usage.m"
#line 862 "recompilation.usage.m"
        switch (*recompilation__usage__Recorded_5) {
#line 862 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 862 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 863 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 862 "recompilation.usage.m"
            break;
#line 862 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 860 "recompilation.usage.m"
            {
#line 860 "recompilation.usage.m"
              MR_Word recompilation__usage__V_25_25;

#line 861 "recompilation.usage.m"
              {
#line 861 "recompilation.usage.m"
                recompilation__usage__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 861 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_25_25, 1) = ((MR_Box) (recompilation__usage__Map_18));
#line 861 "recompilation.usage.m"
              }
#line 861 "recompilation.usage.m"
              {
#line 861 "recompilation.usage.m"
                MR_Word base;
#line 861 "recompilation.usage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 861 "recompilation.usage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 861 "recompilation.usage.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "recompilation.usage.m"
              }
#line 860 "recompilation.usage.m"
            }
#line 862 "recompilation.usage.m"
            break;
#line 862 "recompilation.usage.m"
        }
#line 854 "recompilation.usage.m"
      }
#line 854 "recompilation.usage.m"
    else
#line 866 "recompilation.usage.m"
      {
#line 866 "recompilation.usage.m"
        MR_Integer recompilation__usage__ThisArity_34;
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__ArityMap0_35;
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__ListRest0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 1)));
#line 866 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__STATE_VARIABLE_List_0_6, (MR_Integer) 0)));

#line 867 "recompilation.usage.m"
        recompilation__usage__ThisArity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 0)));
#line 867 "recompilation.usage.m"
        recompilation__usage__ArityMap0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, (MR_Integer) 1)));
#line 868 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_3 < recompilation__usage__ThisArity_34);
#line 878 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 869 "recompilation.usage.m"
          {
#line 869 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap0_37;
#line 869 "recompilation.usage.m"
            MR_Word recompilation__usage__NewArityMap_38;

#line 869 "recompilation.usage.m"
            {
#line 869 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_55, &recompilation__usage__NewArityMap0_37);
            }
#line 870 "recompilation.usage.m"
            {
#line 870 "recompilation.usage.m"
              recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__NewArityMap0_37, &recompilation__usage__NewArityMap_38, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
            }
#line 875 "recompilation.usage.m"
#line 875 "recompilation.usage.m"
            switch (*recompilation__usage__Recorded_5) {
#line 875 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 875 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 876 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 875 "recompilation.usage.m"
                break;
#line 875 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 873 "recompilation.usage.m"
                {
#line 873 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_48_48;

#line 874 "recompilation.usage.m"
                  {
#line 874 "recompilation.usage.m"
                    recompilation__usage__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 874 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_48_48, 1) = ((MR_Box) (recompilation__usage__NewArityMap_38));
#line 874 "recompilation.usage.m"
                  }
#line 874 "recompilation.usage.m"
                  {
#line 874 "recompilation.usage.m"
                    MR_Word base;
#line 874 "recompilation.usage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 874 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_48_48));
#line 874 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__STATE_VARIABLE_List_0_6));
#line 874 "recompilation.usage.m"
                  }
#line 873 "recompilation.usage.m"
                }
#line 875 "recompilation.usage.m"
                break;
#line 875 "recompilation.usage.m"
            }
#line 869 "recompilation.usage.m"
          }
#line 878 "recompilation.usage.m"
        else
#line 887 "recompilation.usage.m"
          {
#line 878 "recompilation.usage.m"
            recompilation__usage__succeeded = (recompilation__usage__Arity_3 == recompilation__usage__ThisArity_34);
#line 887 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 880 "recompilation.usage.m"
              {
#line 880 "recompilation.usage.m"
                MR_Word recompilation__usage__ArityMap_39;

#line 879 "recompilation.usage.m"
                {
#line 879 "recompilation.usage.m"
                  recompilation__usage__record_resolved_item_3__ho7_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ArityMap0_35, &recompilation__usage__ArityMap_39, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 884 "recompilation.usage.m"
#line 884 "recompilation.usage.m"
                switch (*recompilation__usage__Recorded_5) {
#line 884 "recompilation.usage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 884 "recompilation.usage.m"
                  case (MR_Integer) 0:
#line 885 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 884 "recompilation.usage.m"
                    break;
#line 884 "recompilation.usage.m"
                  case (MR_Integer) 1:
#line 882 "recompilation.usage.m"
                    {
#line 882 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_51_51;

#line 883 "recompilation.usage.m"
                      {
#line 883 "recompilation.usage.m"
                        recompilation__usage__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 0) = ((MR_Box) (recompilation__usage__Arity_3));
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(0), recompilation__usage__V_51_51, 1) = ((MR_Box) (recompilation__usage__ArityMap_39));
#line 883 "recompilation.usage.m"
                      }
#line 883 "recompilation.usage.m"
                      {
#line 883 "recompilation.usage.m"
                        MR_Word base;
#line 883 "recompilation.usage.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "recompilation.usage.m"
                        *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_51_51));
#line 883 "recompilation.usage.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest0_36));
#line 883 "recompilation.usage.m"
                      }
#line 882 "recompilation.usage.m"
                    }
#line 884 "recompilation.usage.m"
                    break;
#line 884 "recompilation.usage.m"
                }
#line 880 "recompilation.usage.m"
              }
#line 887 "recompilation.usage.m"
            else
#line 889 "recompilation.usage.m"
              {
#line 889 "recompilation.usage.m"
                MR_Word recompilation__usage__ListRest_40;

#line 888 "recompilation.usage.m"
                {
#line 888 "recompilation.usage.m"
                  recompilation__usage__record_resolved_item_2__ho6_9_p_0(recompilation__usage__ModuleQualifier_1, recompilation__usage__SymName_2, recompilation__usage__Arity_3, recompilation__usage__Recorded_5, recompilation__usage__ListRest0_36, &recompilation__usage__ListRest_40, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
                }
#line 893 "recompilation.usage.m"
#line 893 "recompilation.usage.m"
                switch (*recompilation__usage__Recorded_5) {
#line 893 "recompilation.usage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 893 "recompilation.usage.m"
                  case (MR_Integer) 0:
#line 894 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_List_7 = recompilation__usage__STATE_VARIABLE_List_0_6;
#line 893 "recompilation.usage.m"
                    break;
#line 893 "recompilation.usage.m"
                  case (MR_Integer) 1:
#line 892 "recompilation.usage.m"
                    {
#line 892 "recompilation.usage.m"
                      MR_Word base;
#line 892 "recompilation.usage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_List_7 = base;
#line 892 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__usage__V_45_45));
#line 892 "recompilation.usage.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recompilation__usage__ListRest_40));
#line 892 "recompilation.usage.m"
                    }
#line 893 "recompilation.usage.m"
                    break;
#line 893 "recompilation.usage.m"
                }
#line 889 "recompilation.usage.m"
              }
#line 887 "recompilation.usage.m"
          }
#line 866 "recompilation.usage.m"
      }
#line 854 "recompilation.usage.m"
  }
#line 848 "recompilation.usage.m"
}

#line 826 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_resolved_item__ho1_7_p_0(
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_8,
#line 826 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_9,
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_IdSet_0_19,
#line 826 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_IdSet_20,
#line 826 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 826 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22)
#line 826 "recompilation.usage.m"
{
#line 831 "recompilation.usage.m"
  {
#line 831 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 831 "recompilation.usage.m"
    MR_String recompilation__usage__UnqualifiedName_13;
#line 831 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleQualifier_14;
#line 831 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames1_16;
#line 831 "recompilation.usage.m"
    MR_Word recompilation__usage__Recorded_17;
#line 831 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames_18;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames0_15;
#line 834 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_MatchingNames0_15;

#line 832 "recompilation.usage.m"
    {
#line 832 "recompilation.usage.m"
      recompilation__usage__UnqualifiedName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_8);
    }
#line 833 "recompilation.usage.m"
    {
#line 833 "recompilation.usage.m"
      recompilation__usage__ModuleQualifier_14 = recompilation__find_module_qualifier_1_f_0(recompilation__usage__SymName_8);
    }
#line 834 "recompilation.usage.m"
    {
#line 834 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__STATE_VARIABLE_IdSet_0_19, ((MR_Box) (recompilation__usage__UnqualifiedName_13)), &recompilation__usage__conv0_MatchingNames0_15);
    }
#line 834 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 834 "recompilation.usage.m"
      {
#line 834 "recompilation.usage.m"
        recompilation__usage__MatchingNames0_15 = ((MR_Word) recompilation__usage__conv0_MatchingNames0_15);
#line 834 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 834 "recompilation.usage.m"
      }
#line 836 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 835 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_16 = recompilation__usage__MatchingNames0_15;
#line 836 "recompilation.usage.m"
    else
#line 837 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "recompilation.usage.m"
    {
#line 839 "recompilation.usage.m"
      recompilation__usage__record_resolved_item_2__ho6_9_p_0(recompilation__usage__ModuleQualifier_14, recompilation__usage__SymName_8, recompilation__usage__Arity_9, &recompilation__usage__Recorded_17, recompilation__usage__MatchingNames1_16, &recompilation__usage__MatchingNames_18, recompilation__usage__STATE_VARIABLE_Info_0_21, recompilation__usage__STATE_VARIABLE_Info_22);
    }
#line 844 "recompilation.usage.m"
#line 844 "recompilation.usage.m"
    switch (recompilation__usage__Recorded_17) {
#line 844 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 844 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 845 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_IdSet_20 = recompilation__usage__STATE_VARIABLE_IdSet_0_19;
#line 844 "recompilation.usage.m"
        break;
#line 844 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 842 "recompilation.usage.m"
        {
#line 843 "recompilation.usage.m"
          {
#line 843 "recompilation.usage.m"
            mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], ((MR_Box) (recompilation__usage__UnqualifiedName_13)), ((MR_Box) (recompilation__usage__MatchingNames_18)), recompilation__usage__STATE_VARIABLE_IdSet_0_19, recompilation__usage__STATE_VARIABLE_IdSet_20);
#line 843 "recompilation.usage.m"
            return;
          }
#line 842 "recompilation.usage.m"
        }
#line 844 "recompilation.usage.m"
        break;
#line 844 "recompilation.usage.m"
    }
#line 831 "recompilation.usage.m"
  }
#line 826 "recompilation.usage.m"
}

#line 769 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(
#line 769 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_47)
#line 769 "recompilation.usage.m"
{
#line 769 "recompilation.usage.m"
  {
#line 769 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 769 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__2_48;
#line 769 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 3)));
#line 769 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 2)));
#line 771 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 0)));
#line 771 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 1)));
#line 771 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_47, (MR_Integer) 4)));
#line 777 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsName_35;
#line 777 "recompilation.usage.m"
    MR_Integer recompilation__usage__ConsArity_36;
#line 773 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;

#line 773 "recompilation.usage.m"
    recompilation__usage__succeeded = ((((MR_tag((MR_Word) recompilation__usage__FieldConsId_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 773 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 773 "recompilation.usage.m"
      {
#line 773 "recompilation.usage.m"
        recompilation__usage__ConsName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 1)));
#line 773 "recompilation.usage.m"
        recompilation__usage__ConsArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 2)));
#line 773 "recompilation.usage.m"
        recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__FieldConsId_33, (MR_Integer) 3)));
#line 774 "recompilation.usage.m"
        {
#line 774 "recompilation.usage.m"
          MR_Word recompilation__usage__V_49_49;
#line 774 "recompilation.usage.m"
          MR_Word recompilation__usage__V_50_50;

#line 775 "recompilation.usage.m"
          {
#line 775 "recompilation.usage.m"
            recompilation__usage__V_49_49 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_60);
          }
#line 776 "recompilation.usage.m"
          {
#line 776 "recompilation.usage.m"
            recompilation__usage__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 776 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_50_50, 0) = ((MR_Box) (recompilation__usage__ConsName_35));
#line 776 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__V_50_50, 1) = ((MR_Box) (recompilation__usage__ConsArity_36));
#line 776 "recompilation.usage.m"
          }
#line 774 "recompilation.usage.m"
          {
#line 774 "recompilation.usage.m"
            recompilation__usage__HeadVar__2_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "recompilation.usage.m"
            MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_48, 0) = ((MR_Box) (recompilation__usage__V_49_49));
#line 774 "recompilation.usage.m"
            MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_48, 1) = ((MR_Box) (recompilation__usage__V_50_50));
#line 774 "recompilation.usage.m"
          }
#line 774 "recompilation.usage.m"
        }
#line 773 "recompilation.usage.m"
      }
#line 773 "recompilation.usage.m"
    else
#line 778 "recompilation.usage.m"
      {
#line 778 "recompilation.usage.m"
        {
#line 778 "recompilation.usage.m"
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_matching_functors\'/4", (MR_String) "weird cons_id in hlds_field_defn");
        }
#line 778 "recompilation.usage.m"
      }
#line 769 "recompilation.usage.m"
    return recompilation__usage__HeadVar__2_48;
#line 769 "recompilation.usage.m"
  }
#line 769 "recompilation.usage.m"
}

#line 746 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(
#line 746 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_41)
#line 746 "recompilation.usage.m"
{
#line 746 "recompilation.usage.m"
  {
#line 746 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 746 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__2_42;
#line 746 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 0)));
#line 746 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 1)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 2)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 3)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 4)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 5)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 6)));
#line 748 "recompilation.usage.m"
    MR_Word recompilation__usage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_41, (MR_Integer) 7)));

#line 750 "recompilation.usage.m"
    {
#line 750 "recompilation.usage.m"
      recompilation__usage__V_43_43 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_20);
    }
#line 749 "recompilation.usage.m"
    {
#line 749 "recompilation.usage.m"
      recompilation__usage__HeadVar__2_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 749 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_42, 0) = ((MR_Box) (recompilation__usage__V_43_43));
#line 749 "recompilation.usage.m"
    }
#line 746 "recompilation.usage.m"
    return recompilation__usage__HeadVar__2_42;
#line 746 "recompilation.usage.m"
  }
#line 746 "recompilation.usage.m"
}

#line 676 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(
#line 676 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_17,
#line 676 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_35)
#line 676 "recompilation.usage.m"
{
#line 676 "recompilation.usage.m"
  {
#line 676 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 676 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__3_36;
#line 676 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_25;
#line 676 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_26;

#line 678 "recompilation.usage.m"
    {
#line 678 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_17, recompilation__usage__HeadVar__2_35, &recompilation__usage__PredInfo_26);
    }
#line 679 "recompilation.usage.m"
    {
#line 679 "recompilation.usage.m"
      recompilation__usage__PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0(recompilation__usage__PredInfo_26);
    }
#line 677 "recompilation.usage.m"
    {
#line 677 "recompilation.usage.m"
      recompilation__usage__HeadVar__3_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_36, 0) = ((MR_Box) (recompilation__usage__HeadVar__2_35));
#line 677 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_36, 1) = ((MR_Box) (recompilation__usage__PredModule_25));
#line 677 "recompilation.usage.m"
    }
#line 676 "recompilation.usage.m"
    return recompilation__usage__HeadVar__3_36;
#line 676 "recompilation.usage.m"
  }
#line 676 "recompilation.usage.m"
}

#line 267 "recompilation.usage.m"
static MR_Word MR_CALL 
recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__267__1_3_f_0(
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12,
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_48,
#line 267 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_49)
#line 267 "recompilation.usage.m"
{
#line 267 "recompilation.usage.m"
  {
#line 267 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 267 "recompilation.usage.m"
    MR_Word recompilation__usage__HeadVar__4_50;
#line 267 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemNames_24;
#line 269 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleItemNames_24;

#line 269 "recompilation.usage.m"
    {
#line 269 "recompilation.usage.m"
      recompilation__usage__conv0_ModuleItemNames_24 = recompilation__extract_ids_2_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], recompilation__usage__ModuleUsedItems_12, recompilation__usage__HeadVar__2_48);
    }
#line 269 "recompilation.usage.m"
    recompilation__usage__ModuleItemNames_24 = ((MR_Word) recompilation__usage__conv0_ModuleItemNames_24);
#line 270 "recompilation.usage.m"
    {
#line 270 "recompilation.usage.m"
      mercury__map__select_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0, recompilation__usage__HeadVar__3_49, recompilation__usage__ModuleItemNames_24, &recompilation__usage__HeadVar__4_50);
    }
#line 267 "recompilation.usage.m"
    return recompilation__usage__HeadVar__4_50;
#line 267 "recompilation.usage.m"
  }
#line 267 "recompilation.usage.m"
}

#line 417 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____write_resolved_item_1_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 417 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 417 "recompilation.usage.m"
{
#line 417 "recompilation.usage.m"
  {
#line 417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 417 "recompilation.usage.m"
    {
#line 417 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2, recompilation__usage__HeadVar__3_3);
#line 417 "recompilation.usage.m"
      return;
    }
#line 417 "recompilation.usage.m"
  }
#line 417 "recompilation.usage.m"
}

#line 417 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____write_resolved_item_1_0(
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 417 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 417 "recompilation.usage.m"
{
#line 417 "recompilation.usage.m"
  {
#line 417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 417 "recompilation.usage.m"
    {
#line 417 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_119_114_105_116_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2);
    }
#line 417 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 417 "recompilation.usage.m"
  }
#line 417 "recompilation.usage.m"
}

#line 36 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_used_items_0_0(
#line 36 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 36 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 36 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 36 "recompilation.usage.m"
{
#line 36 "recompilation.usage.m"
  {
#line 36 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 36 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 36 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 36 "recompilation.usage.m"
    {
#line 36 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 36 "recompilation.usage.m"
      return;
    }
#line 36 "recompilation.usage.m"
  }
#line 36 "recompilation.usage.m"
}

#line 36 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_used_items_0_0(
#line 36 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 36 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 36 "recompilation.usage.m"
{
#line 36 "recompilation.usage.m"
  {
#line 36 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 36 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 36 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 36 "recompilation.usage.m"
    {
#line 36 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 36 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 36 "recompilation.usage.m"
  }
#line 36 "recompilation.usage.m"
}

#line 40 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_set_0_0(
#line 40 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 40 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 40 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 40 "recompilation.usage.m"
{
#line 40 "recompilation.usage.m"
  {
#line 40 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 40 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 40 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 40 "recompilation.usage.m"
    {
#line 40 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[7], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 40 "recompilation.usage.m"
      return;
    }
#line 40 "recompilation.usage.m"
  }
#line 40 "recompilation.usage.m"
}

#line 40 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_set_0_0(
#line 40 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 40 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 40 "recompilation.usage.m"
{
#line 40 "recompilation.usage.m"
  {
#line 40 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 40 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 40 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 40 "recompilation.usage.m"
    {
#line 40 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[7], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 40 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 40 "recompilation.usage.m"
  }
#line 40 "recompilation.usage.m"
}

#line 42 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_pred_or_func_map_0_0(
#line 42 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 42 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 42 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 42 "recompilation.usage.m"
{
#line 42 "recompilation.usage.m"
  {
#line 42 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 42 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 42 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 42 "recompilation.usage.m"
    {
#line 42 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[5], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 42 "recompilation.usage.m"
      return;
    }
#line 42 "recompilation.usage.m"
  }
#line 42 "recompilation.usage.m"
}

#line 42 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_pred_or_func_map_0_0(
#line 42 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 42 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 42 "recompilation.usage.m"
{
#line 42 "recompilation.usage.m"
  {
#line 42 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 42 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 42 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 42 "recompilation.usage.m"
    {
#line 42 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[5], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 42 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 42 "recompilation.usage.m"
  }
#line 42 "recompilation.usage.m"
}

#line 50 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_set_1_0(
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 50 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 50 "recompilation.usage.m"
{
#line 50 "recompilation.usage.m"
  {
#line 50 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_11_11;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_13_13;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_15_15;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 7129 "recompilation.usage.c"
    {
#line 7131 "recompilation.usage.c"
      recompilation__usage__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7133 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7135 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7137 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_6));
#line 7139 "recompilation.usage.c"
    }
#line 7141 "recompilation.usage.c"
    {
#line 7143 "recompilation.usage.c"
      recompilation__usage__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7145 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7147 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7149 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_13_13, 2) = ((MR_Box) (recompilation__usage__TypeInfo_11_11));
#line 7151 "recompilation.usage.c"
    }
#line 7153 "recompilation.usage.c"
    {
#line 7155 "recompilation.usage.c"
      recompilation__usage__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7157 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_15_15, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7159 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_15_15, 1) = ((MR_Box) (recompilation__usage__TypeInfo_13_13));
#line 7161 "recompilation.usage.c"
    }
#line 50 "recompilation.usage.m"
    {
#line 50 "recompilation.usage.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recompilation__usage__TypeInfo_15_15, recompilation__usage__HeadVar__1_1, recompilation__usage__Cast_HeadVar1_4, recompilation__usage__Cast_HeadVar2_5);
#line 50 "recompilation.usage.m"
      return;
    }
#line 50 "recompilation.usage.m"
  }
#line 50 "recompilation.usage.m"
}

#line 50 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_set_1_0(
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 50 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 50 "recompilation.usage.m"
{
#line 50 "recompilation.usage.m"
  {
#line 50 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_10_10;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_12_12;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_14_14;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 50 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 7201 "recompilation.usage.c"
    {
#line 7203 "recompilation.usage.c"
      recompilation__usage__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7205 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7207 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7209 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_5));
#line 7211 "recompilation.usage.c"
    }
#line 7213 "recompilation.usage.c"
    {
#line 7215 "recompilation.usage.c"
      recompilation__usage__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7217 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7219 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7221 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 2) = ((MR_Box) (recompilation__usage__TypeInfo_10_10));
#line 7223 "recompilation.usage.c"
    }
#line 7225 "recompilation.usage.c"
    {
#line 7227 "recompilation.usage.c"
      recompilation__usage__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7229 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7231 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_14_14, 1) = ((MR_Box) (recompilation__usage__TypeInfo_12_12));
#line 7233 "recompilation.usage.c"
    }
#line 50 "recompilation.usage.m"
    {
#line 50 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recompilation__usage__TypeInfo_14_14, recompilation__usage__Cast_HeadVar1_3, recompilation__usage__Cast_HeadVar2_4);
    }
#line 50 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 50 "recompilation.usage.m"
  }
#line 50 "recompilation.usage.m"
}

#line 57 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_map_1_0(
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 57 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 57 "recompilation.usage.m"
{
#line 57 "recompilation.usage.m"
  {
#line 57 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 57 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 57 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 57 "recompilation.usage.m"
    {
#line 57 "recompilation.usage.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_6, recompilation__usage__HeadVar__1_1, recompilation__usage__Cast_HeadVar1_4, recompilation__usage__Cast_HeadVar2_5);
#line 57 "recompilation.usage.m"
      return;
    }
#line 57 "recompilation.usage.m"
  }
#line 57 "recompilation.usage.m"
}

#line 57 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_map_1_0(
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 57 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 57 "recompilation.usage.m"
{
#line 57 "recompilation.usage.m"
  {
#line 57 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 57 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 57 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 57 "recompilation.usage.m"
    {
#line 57 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__TypeInfo_for_T_5, recompilation__usage__Cast_HeadVar1_3, recompilation__usage__Cast_HeadVar2_4);
    }
#line 57 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 57 "recompilation.usage.m"
  }
#line 57 "recompilation.usage.m"
}

#line 55 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_item_list_1_0(
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 55 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 55 "recompilation.usage.m"
{
#line 55 "recompilation.usage.m"
  {
#line 55 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_10_10;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_12_12;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 7339 "recompilation.usage.c"
    {
#line 7341 "recompilation.usage.c"
      recompilation__usage__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7343 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7345 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7347 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_10_10, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_6));
#line 7349 "recompilation.usage.c"
    }
#line 7351 "recompilation.usage.c"
    {
#line 7353 "recompilation.usage.c"
      recompilation__usage__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7355 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7357 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7359 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_12_12, 2) = ((MR_Box) (recompilation__usage__TypeInfo_10_10));
#line 7361 "recompilation.usage.c"
    }
#line 55 "recompilation.usage.m"
    {
#line 55 "recompilation.usage.m"
      mercury__list____Compare____list_1_0(recompilation__usage__TypeInfo_12_12, recompilation__usage__HeadVar__1_1, (MR_Word) recompilation__usage__Cast_HeadVar1_4, (MR_Word) recompilation__usage__Cast_HeadVar2_5);
#line 55 "recompilation.usage.m"
      return;
    }
#line 55 "recompilation.usage.m"
  }
#line 55 "recompilation.usage.m"
}

#line 55 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_item_list_1_0(
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 55 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 55 "recompilation.usage.m"
{
#line 55 "recompilation.usage.m"
  {
#line 55 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_9_9;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_11_11;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 55 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 7399 "recompilation.usage.c"
    {
#line 7401 "recompilation.usage.c"
      recompilation__usage__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7403 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 7405 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 7407 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_9_9, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_5));
#line 7409 "recompilation.usage.c"
    }
#line 7411 "recompilation.usage.c"
    {
#line 7413 "recompilation.usage.c"
      recompilation__usage__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7415 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7417 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 7419 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_11_11, 2) = ((MR_Box) (recompilation__usage__TypeInfo_9_9));
#line 7421 "recompilation.usage.c"
    }
#line 55 "recompilation.usage.m"
    {
#line 55 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__list____Unify____list_1_0(recompilation__usage__TypeInfo_11_11, (MR_Word) recompilation__usage__Cast_HeadVar1_3, (MR_Word) recompilation__usage__Cast_HeadVar2_4);
    }
#line 55 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 55 "recompilation.usage.m"
  }
#line 55 "recompilation.usage.m"
}

#line 47 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_set_0_0(
#line 47 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 47 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 47 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 47 "recompilation.usage.m"
{
#line 47 "recompilation.usage.m"
  {
#line 47 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 47 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 47 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 47 "recompilation.usage.m"
    {
#line 47 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 47 "recompilation.usage.m"
      return;
    }
#line 47 "recompilation.usage.m"
  }
#line 47 "recompilation.usage.m"
}

#line 47 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_set_0_0(
#line 47 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 47 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 47 "recompilation.usage.m"
{
#line 47 "recompilation.usage.m"
  {
#line 47 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 47 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 47 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 47 "recompilation.usage.m"
    {
#line 47 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[10], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 47 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 47 "recompilation.usage.m"
  }
#line 47 "recompilation.usage.m"
}

#line 48 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[8], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 48 "recompilation.usage.m"
      return;
    }
#line 48 "recompilation.usage.m"
  }
#line 48 "recompilation.usage.m"
}

#line 48 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_map_0_0(
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
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[8], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 48 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 48 "recompilation.usage.m"
  }
#line 48 "recompilation.usage.m"
}

#line 59 "recompilation.usage.m"
void MR_CALL 
recompilation__usage____Compare____resolved_functor_0_0(
#line 59 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 59 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 59 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 59 "recompilation.usage.m"
{
#line 59 "recompilation.usage.m"
  {
#line 59 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 59 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_50 = (MR_Integer) recompilation__usage__HeadVar__2_2;
#line 59 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_51 = (MR_Integer) recompilation__usage__HeadVar__3_3;

#line 59 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_50 == recompilation__usage__CastY_51);
#line 59 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 7583 "recompilation.usage.c"
      *recompilation__usage__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "recompilation.usage.m"
    else
#line 59 "recompilation.usage.m"
#line 59 "recompilation.usage.m"
      switch (MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) {
#line 59 "recompilation.usage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 59 "recompilation.usage.m"
        case (MR_Integer) 0:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "recompilation.usage.m"
#line 59 "recompilation.usage.m"
            switch (MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) {
#line 59 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 59 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 59 "recompilation.usage.m"
                {
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 2)));
#line 59 "recompilation.usage.m"
                  MR_Integer recompilation__usage__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 3)));
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_12_12;

#line 59 "recompilation.usage.m"
                  {
#line 59 "recompilation.usage.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&recompilation__usage__V_12_12, recompilation__usage__V_65_65, recompilation__usage__V_8_8);
                  }
#line 7630 "recompilation.usage.c"
                  recompilation__usage__succeeded = (recompilation__usage__V_12_12 == (MR_Integer) 0);
#line 59 "recompilation.usage.m"
                  recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 59 "recompilation.usage.m"
                  if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                    *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_12_12;
#line 59 "recompilation.usage.m"
                  else
#line 59 "recompilation.usage.m"
                    {
#line 59 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_13_13;

#line 59 "recompilation.usage.m"
                      {
#line 59 "recompilation.usage.m"
                        mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__usage__V_13_13, recompilation__usage__V_64_64, recompilation__usage__V_9_9);
                      }
#line 7650 "recompilation.usage.c"
                      recompilation__usage__succeeded = (recompilation__usage__V_13_13 == (MR_Integer) 0);
#line 59 "recompilation.usage.m"
                      recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 59 "recompilation.usage.m"
                      if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                        *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_13_13;
#line 59 "recompilation.usage.m"
                      else
#line 59 "recompilation.usage.m"
                        {
#line 59 "recompilation.usage.m"
                          MR_Word recompilation__usage__V_14_14;
#line 59 "recompilation.usage.m"
                          MR_Integer recompilation__usage__V_66_66 = (MR_Integer) recompilation__usage__V_63_63;
#line 59 "recompilation.usage.m"
                          MR_Integer recompilation__usage__V_67_67 = (MR_Integer) recompilation__usage__V_10_10;

#line 59 "recompilation.usage.m"
                          {
#line 59 "recompilation.usage.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__usage__V_14_14, recompilation__usage__V_66_66, recompilation__usage__V_67_67);
                          }
#line 7674 "recompilation.usage.c"
                          recompilation__usage__succeeded = (recompilation__usage__V_14_14 == (MR_Integer) 0);
#line 59 "recompilation.usage.m"
                          recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 59 "recompilation.usage.m"
                          if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                            *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_14_14;
#line 59 "recompilation.usage.m"
                          else
#line 59 "recompilation.usage.m"
                            {
#line 59 "recompilation.usage.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_62_62, recompilation__usage__V_11_11);
#line 59 "recompilation.usage.m"
                              return;
                            }
#line 59 "recompilation.usage.m"
                        }
#line 59 "recompilation.usage.m"
                    }
#line 59 "recompilation.usage.m"
                }
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 7701 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 2:
#line 7707 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
            }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
        case (MR_Integer) 1:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "recompilation.usage.m"
#line 59 "recompilation.usage.m"
            switch (MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) {
#line 59 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 59 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 7731 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 59 "recompilation.usage.m"
                {
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));

#line 59 "recompilation.usage.m"
                  {
#line 59 "recompilation.usage.m"
                    recompilation____Compare____item_name_0_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_59_59, recompilation__usage__V_32_32);
#line 59 "recompilation.usage.m"
                    return;
                  }
#line 59 "recompilation.usage.m"
                }
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 2:
#line 7755 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
            }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
        case (MR_Integer) 2:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "recompilation.usage.m"
#line 59 "recompilation.usage.m"
            switch (MR_tag((MR_Word) recompilation__usage__HeadVar__3_3)) {
#line 59 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 59 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 7781 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 7787 "recompilation.usage.c"
                *recompilation__usage__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
              case (MR_Integer) 2:
#line 59 "recompilation.usage.m"
                {
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_49_49;

#line 59 "recompilation.usage.m"
                  {
#line 59 "recompilation.usage.m"
                    recompilation____Compare____item_name_0_0(&recompilation__usage__V_49_49, recompilation__usage__V_61_61, recompilation__usage__V_47_47);
                  }
#line 7807 "recompilation.usage.c"
                  recompilation__usage__succeeded = (recompilation__usage__V_49_49 == (MR_Integer) 0);
#line 59 "recompilation.usage.m"
                  recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 59 "recompilation.usage.m"
                  if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                    *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_49_49;
#line 59 "recompilation.usage.m"
                  else
#line 59 "recompilation.usage.m"
                    {
#line 59 "recompilation.usage.m"
                      recompilation____Compare____item_name_0_0(recompilation__usage__HeadVar__1_1, recompilation__usage__V_60_60, recompilation__usage__V_48_48);
#line 59 "recompilation.usage.m"
                      return;
                    }
#line 59 "recompilation.usage.m"
                }
#line 59 "recompilation.usage.m"
                break;
#line 59 "recompilation.usage.m"
            }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
      }
#line 59 "recompilation.usage.m"
  }
#line 59 "recompilation.usage.m"
}

#line 59 "recompilation.usage.m"
MR_bool MR_CALL 
recompilation__usage____Unify____resolved_functor_0_0(
#line 59 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 59 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 59 "recompilation.usage.m"
{
#line 59 "recompilation.usage.m"
  {
#line 59 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 59 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_17 = (MR_Integer) recompilation__usage__HeadVar__1_1;
#line 59 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_18 = (MR_Integer) recompilation__usage__HeadVar__2_2;

#line 59 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_17 == recompilation__usage__CastY_18);
#line 59 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
      recompilation__usage__succeeded = MR_TRUE;
#line 59 "recompilation.usage.m"
    else
#line 59 "recompilation.usage.m"
#line 59 "recompilation.usage.m"
      switch (MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) {
#line 59 "recompilation.usage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 59 "recompilation.usage.m"
        case (MR_Integer) 0:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 59 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_7_7;
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_8_8;
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_9_9;
#line 59 "recompilation.usage.m"
            MR_Integer recompilation__usage__V_10_10;

#line 59 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 59 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
              {
#line 59 "recompilation.usage.m"
                recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
                recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
                recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 59 "recompilation.usage.m"
                recompilation__usage__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 7907 "recompilation.usage.c"
                {
#line 7909 "recompilation.usage.c"
                  recompilation__usage__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(recompilation__usage__V_3_3, recompilation__usage__V_7_7);
                }
#line 59 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                  {
#line 7916 "recompilation.usage.c"
                    {
#line 7918 "recompilation.usage.c"
                      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__V_4_4, recompilation__usage__V_8_8);
                    }
#line 59 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
                      {
#line 7925 "recompilation.usage.c"
                        recompilation__usage__succeeded = (recompilation__usage__V_5_5 == recompilation__usage__V_9_9);
#line 59 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 7929 "recompilation.usage.c"
                          recompilation__usage__succeeded = (recompilation__usage__V_6_6 == recompilation__usage__V_10_10);
#line 59 "recompilation.usage.m"
                      }
#line 59 "recompilation.usage.m"
                  }
#line 59 "recompilation.usage.m"
              }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
        case (MR_Integer) 1:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_12_12;

#line 59 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 59 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
              {
#line 59 "recompilation.usage.m"
                recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 7958 "recompilation.usage.c"
                {
#line 7960 "recompilation.usage.c"
                  return recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_11_11, recompilation__usage__V_12_12);
                }
#line 59 "recompilation.usage.m"
              }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
        case (MR_Integer) 2:
#line 59 "recompilation.usage.m"
          {
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_15_15;
#line 59 "recompilation.usage.m"
            MR_Word recompilation__usage__V_16_16;

#line 59 "recompilation.usage.m"
            recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 59 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 59 "recompilation.usage.m"
              {
#line 59 "recompilation.usage.m"
                recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "recompilation.usage.m"
                recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 7992 "recompilation.usage.c"
                {
#line 7994 "recompilation.usage.c"
                  recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_13_13, recompilation__usage__V_15_15);
                }
#line 59 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 7999 "recompilation.usage.c"
                  {
#line 8001 "recompilation.usage.c"
                    return recompilation__usage__succeeded = recompilation____Unify____item_name_0_0(recompilation__usage__V_14_14, recompilation__usage__V_16_16);
                  }
#line 59 "recompilation.usage.m"
              }
#line 59 "recompilation.usage.m"
          }
#line 59 "recompilation.usage.m"
          break;
#line 59 "recompilation.usage.m"
      }
#line 59 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 59 "recompilation.usage.m"
  }
#line 59 "recompilation.usage.m"
}

#line 819 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____record_resolved_item_1_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_6,
#line 819 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 819 "recompilation.usage.m"
{
#line 819 "recompilation.usage.m"
  {
#line 819 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 819 "recompilation.usage.m"
    {
#line 819 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_3_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2, recompilation__usage__HeadVar__3_3);
#line 819 "recompilation.usage.m"
      return;
    }
#line 819 "recompilation.usage.m"
  }
#line 819 "recompilation.usage.m"
}

#line 819 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____record_resolved_item_1_0(
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_5,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 819 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 819 "recompilation.usage.m"
{
#line 819 "recompilation.usage.m"
  {
#line 819 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 819 "recompilation.usage.m"
    {
#line 819 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_117_115_97_103_101_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_49_95_95_91_49_93_95_48_2_p_0(recompilation__usage__HeadVar__1_1, recompilation__usage__HeadVar__2_2);
    }
#line 819 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 819 "recompilation.usage.m"
  }
#line 819 "recompilation.usage.m"
}

#line 499 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____recompilation_usage_info_0_0(
#line 499 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 499 "recompilation.usage.m"
{
#line 499 "recompilation.usage.m"
  {
#line 499 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 499 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_24 = (MR_Integer) recompilation__usage__HeadVar__2_2;
#line 499 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_25 = (MR_Integer) recompilation__usage__HeadVar__3_3;

#line 499 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_24 == recompilation__usage__CastY_25);
#line 499 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 8101 "recompilation.usage.c"
      *recompilation__usage__HeadVar__1_1 = (MR_Integer) 0;
#line 499 "recompilation.usage.m"
    else
#line 499 "recompilation.usage.m"
      {
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 4)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 5)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 6)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 2)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 3)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 4)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 5)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 6)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;

#line 499 "recompilation.usage.m"
        {
#line 499 "recompilation.usage.m"
          hlds__hlds_module____Compare____module_info_0_0(&recompilation__usage__V_18_18, recompilation__usage__V_4_4, recompilation__usage__V_11_11);
        }
#line 8143 "recompilation.usage.c"
        recompilation__usage__succeeded = (recompilation__usage__V_18_18 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
        recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
          *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_18_18;
#line 499 "recompilation.usage.m"
        else
#line 499 "recompilation.usage.m"
          {
#line 499 "recompilation.usage.m"
            MR_Word recompilation__usage__V_19_19;

#line 499 "recompilation.usage.m"
            {
#line 499 "recompilation.usage.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[11], &recompilation__usage__V_19_19, ((MR_Box) (recompilation__usage__V_5_5)), ((MR_Box) (recompilation__usage__V_12_12)));
            }
#line 8163 "recompilation.usage.c"
            recompilation__usage__succeeded = (recompilation__usage__V_19_19 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
            recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
              *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_19_19;
#line 499 "recompilation.usage.m"
            else
#line 499 "recompilation.usage.m"
              {
#line 499 "recompilation.usage.m"
                MR_Word recompilation__usage__V_20_20;

#line 499 "recompilation.usage.m"
                {
#line 499 "recompilation.usage.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], &recompilation__usage__V_20_20, ((MR_Box) (recompilation__usage__V_6_6)), ((MR_Box) (recompilation__usage__V_13_13)));
                }
#line 8183 "recompilation.usage.c"
                recompilation__usage__succeeded = (recompilation__usage__V_20_20 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
                recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                  *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_20_20;
#line 499 "recompilation.usage.m"
                else
#line 499 "recompilation.usage.m"
                  {
#line 499 "recompilation.usage.m"
                    MR_Word recompilation__usage__V_21_21;

#line 499 "recompilation.usage.m"
                    {
#line 499 "recompilation.usage.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[14], &recompilation__usage__V_21_21, ((MR_Box) (recompilation__usage__V_7_7)), ((MR_Box) (recompilation__usage__V_14_14)));
                    }
#line 8203 "recompilation.usage.c"
                    recompilation__usage__succeeded = (recompilation__usage__V_21_21 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
                    recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                      *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_21_21;
#line 499 "recompilation.usage.m"
                    else
#line 499 "recompilation.usage.m"
                      {
#line 499 "recompilation.usage.m"
                        MR_Word recompilation__usage__V_22_22;

#line 499 "recompilation.usage.m"
                        {
#line 499 "recompilation.usage.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[15], &recompilation__usage__V_22_22, ((MR_Box) (recompilation__usage__V_8_8)), ((MR_Box) (recompilation__usage__V_15_15)));
                        }
#line 8223 "recompilation.usage.c"
                        recompilation__usage__succeeded = (recompilation__usage__V_22_22 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
                        recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                          *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_22_22;
#line 499 "recompilation.usage.m"
                        else
#line 499 "recompilation.usage.m"
                          {
#line 499 "recompilation.usage.m"
                            MR_Word recompilation__usage__V_23_23;

#line 499 "recompilation.usage.m"
                            {
#line 499 "recompilation.usage.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[1], &recompilation__usage__V_23_23, ((MR_Box) (recompilation__usage__V_9_9)), ((MR_Box) (recompilation__usage__V_16_16)));
                            }
#line 8243 "recompilation.usage.c"
                            recompilation__usage__succeeded = (recompilation__usage__V_23_23 == (MR_Integer) 0);
#line 499 "recompilation.usage.m"
                            recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 499 "recompilation.usage.m"
                            if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                              *recompilation__usage__HeadVar__1_1 = recompilation__usage__V_23_23;
#line 499 "recompilation.usage.m"
                            else
#line 499 "recompilation.usage.m"
                              {
#line 499 "recompilation.usage.m"
                                {
#line 499 "recompilation.usage.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__V_10_10)), ((MR_Box) (recompilation__usage__V_17_17)));
#line 499 "recompilation.usage.m"
                                  return;
                                }
#line 499 "recompilation.usage.m"
                              }
#line 499 "recompilation.usage.m"
                          }
#line 499 "recompilation.usage.m"
                      }
#line 499 "recompilation.usage.m"
                  }
#line 499 "recompilation.usage.m"
              }
#line 499 "recompilation.usage.m"
          }
#line 499 "recompilation.usage.m"
      }
#line 499 "recompilation.usage.m"
  }
#line 499 "recompilation.usage.m"
}

#line 499 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____recompilation_usage_info_0_0(
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 499 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 499 "recompilation.usage.m"
{
#line 499 "recompilation.usage.m"
  {
#line 499 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 499 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastX_17 = (MR_Integer) recompilation__usage__HeadVar__1_1;
#line 499 "recompilation.usage.m"
    MR_Integer recompilation__usage__CastY_18 = (MR_Integer) recompilation__usage__HeadVar__2_2;

#line 499 "recompilation.usage.m"
    recompilation__usage__succeeded = (recompilation__usage__CastX_17 == recompilation__usage__CastY_18);
#line 499 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
      recompilation__usage__succeeded = MR_TRUE;
#line 499 "recompilation.usage.m"
    else
#line 499 "recompilation.usage.m"
      {
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_20_20;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_21_21;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_22_22;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_23_23;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_24_24;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_25_25;
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 4)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 5)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 2)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 3)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 4)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 5)));
#line 499 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 6)));

#line 8350 "recompilation.usage.c"
        {
#line 8352 "recompilation.usage.c"
          recompilation__usage__succeeded = hlds__hlds_module____Unify____module_info_0_0(recompilation__usage__V_3_3, recompilation__usage__V_10_10);
        }
#line 499 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
          {
#line 8359 "recompilation.usage.c"
            recompilation__usage__TypeInfo_20_20 = (MR_Word) &recompilation__usage_scalar_common_2[11];
#line 8361 "recompilation.usage.c"
            {
#line 8363 "recompilation.usage.c"
              recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_20_20, ((MR_Box) (recompilation__usage__V_4_4)), ((MR_Box) (recompilation__usage__V_11_11)));
            }
#line 499 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
              {
#line 8370 "recompilation.usage.c"
                recompilation__usage__TypeInfo_21_21 = (MR_Word) &recompilation__usage_scalar_common_1[13];
#line 8372 "recompilation.usage.c"
                {
#line 8374 "recompilation.usage.c"
                  recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_21_21, ((MR_Box) (recompilation__usage__V_5_5)), ((MR_Box) (recompilation__usage__V_12_12)));
                }
#line 499 "recompilation.usage.m"
                if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                  {
#line 8381 "recompilation.usage.c"
                    recompilation__usage__TypeInfo_22_22 = (MR_Word) &recompilation__usage_scalar_common_1[14];
#line 8383 "recompilation.usage.c"
                    {
#line 8385 "recompilation.usage.c"
                      recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_22_22, ((MR_Box) (recompilation__usage__V_6_6)), ((MR_Box) (recompilation__usage__V_13_13)));
                    }
#line 499 "recompilation.usage.m"
                    if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                      {
#line 8392 "recompilation.usage.c"
                        recompilation__usage__TypeInfo_23_23 = (MR_Word) &recompilation__usage_scalar_common_1[15];
#line 8394 "recompilation.usage.c"
                        {
#line 8396 "recompilation.usage.c"
                          recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_23_23, ((MR_Box) (recompilation__usage__V_7_7)), ((MR_Box) (recompilation__usage__V_14_14)));
                        }
#line 499 "recompilation.usage.m"
                        if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                          {
#line 8403 "recompilation.usage.c"
                            recompilation__usage__TypeInfo_24_24 = (MR_Word) &recompilation__usage_scalar_common_3[1];
#line 8405 "recompilation.usage.c"
                            {
#line 8407 "recompilation.usage.c"
                              recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_24_24, ((MR_Box) (recompilation__usage__V_8_8)), ((MR_Box) (recompilation__usage__V_15_15)));
                            }
#line 499 "recompilation.usage.m"
                            if (recompilation__usage__succeeded)
#line 499 "recompilation.usage.m"
                              {
#line 8414 "recompilation.usage.c"
                                recompilation__usage__TypeInfo_25_25 = (MR_Word) &recompilation__usage_scalar_common_2[1];
#line 8416 "recompilation.usage.c"
                                {
#line 8418 "recompilation.usage.c"
                                  return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0(recompilation__usage__TypeInfo_25_25, ((MR_Box) (recompilation__usage__V_9_9)), ((MR_Box) (recompilation__usage__V_16_16)));
                                }
#line 499 "recompilation.usage.m"
                              }
#line 499 "recompilation.usage.m"
                          }
#line 499 "recompilation.usage.m"
                      }
#line 499 "recompilation.usage.m"
                  }
#line 499 "recompilation.usage.m"
              }
#line 499 "recompilation.usage.m"
          }
#line 499 "recompilation.usage.m"
      }
#line 499 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 499 "recompilation.usage.m"
  }
#line 499 "recompilation.usage.m"
}

#line 517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____module_imported_items_0_0(
#line 517 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 517 "recompilation.usage.m"
{
#line 517 "recompilation.usage.m"
  {
#line 517 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 517 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 517 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 517 "recompilation.usage.m"
    {
#line 517 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_3[0], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 517 "recompilation.usage.m"
      return;
    }
#line 517 "recompilation.usage.m"
  }
#line 517 "recompilation.usage.m"
}

#line 517 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____module_imported_items_0_0(
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 517 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 517 "recompilation.usage.m"
{
#line 517 "recompilation.usage.m"
  {
#line 517 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 517 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 517 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 517 "recompilation.usage.m"
    {
#line 517 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 517 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 517 "recompilation.usage.m"
  }
#line 517 "recompilation.usage.m"
}

#line 513 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_items_0_0(
#line 513 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 513 "recompilation.usage.m"
{
#line 513 "recompilation.usage.m"
  {
#line 513 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 513 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 513 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 513 "recompilation.usage.m"
    {
#line 513 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 513 "recompilation.usage.m"
      return;
    }
#line 513 "recompilation.usage.m"
  }
#line 513 "recompilation.usage.m"
}

#line 513 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_items_0_0(
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 513 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 513 "recompilation.usage.m"
{
#line 513 "recompilation.usage.m"
  {
#line 513 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 513 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 513 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 513 "recompilation.usage.m"
    {
#line 513 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[13], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 513 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 513 "recompilation.usage.m"
  }
#line 513 "recompilation.usage.m"
}

#line 519 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage____Compare____imported_item_set_0_0(
#line 519 "recompilation.usage.m"
  MR_Word * recompilation__usage__HeadVar__1_1,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3)
#line 519 "recompilation.usage.m"
{
#line 519 "recompilation.usage.m"
  {
#line 519 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 519 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_4 = recompilation__usage__HeadVar__2_2;
#line 519 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_5 = recompilation__usage__HeadVar__3_3;

#line 519 "recompilation.usage.m"
    {
#line 519 "recompilation.usage.m"
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation__usage_scalar_common_2[0], recompilation__usage__HeadVar__1_1, ((MR_Box) (recompilation__usage__Cast_HeadVar1_4)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_5)));
#line 519 "recompilation.usage.m"
      return;
    }
#line 519 "recompilation.usage.m"
  }
#line 519 "recompilation.usage.m"
}

#line 519 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage____Unify____imported_item_set_0_0(
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 519 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 519 "recompilation.usage.m"
{
#line 519 "recompilation.usage.m"
  {
#line 519 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 519 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar1_3 = recompilation__usage__HeadVar__1_1;
#line 519 "recompilation.usage.m"
    MR_Word recompilation__usage__Cast_HeadVar2_4 = recompilation__usage__HeadVar__2_2;

#line 519 "recompilation.usage.m"
    {
#line 519 "recompilation.usage.m"
      return recompilation__usage__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__Cast_HeadVar1_3)), ((MR_Box) (recompilation__usage__Cast_HeadVar2_4)));
    }
#line 519 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 519 "recompilation.usage.m"
  }
#line 519 "recompilation.usage.m"
}

#line 1523 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(
#line 1523 "recompilation.usage.m"
  MR_Word recompilation__usage__Item_4,
#line 1523 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1523 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1523 "recompilation.usage.m"
{
#line 1526 "recompilation.usage.m"
  {
#line 1526 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1526 "recompilation.usage.m"
    MR_Word recompilation__usage__DepItemType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_4, (MR_Integer) 0)));
#line 1526 "recompilation.usage.m"
    MR_Word recompilation__usage__DepItemId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_4, (MR_Integer) 1)));

#line 1528 "recompilation.usage.m"
    {
#line 1528 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0(recompilation__usage__DepItemType_6, recompilation__usage__DepItemId_7, recompilation__usage__STATE_VARIABLE_Info_0_8, recompilation__usage__STATE_VARIABLE_Info_9);
#line 1528 "recompilation.usage.m"
      return;
    }
#line 1526 "recompilation.usage.m"
  }
#line 1523 "recompilation.usage.m"
}

#line 1517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0_1(
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1517 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1517 "recompilation.usage.m"
{
#line 1517 "recompilation.usage.m"
  {
#line 1517 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1517 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1517 "recompilation.usage.m"
    {
#line 1517 "recompilation.usage.m"
      recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1517 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_9));
#line 1517 "recompilation.usage.m"
  }
#line 1517 "recompilation.usage.m"
}

#line 1509 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_expanded_items_used_by_item_4_p_0(
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__NameArity_6,
#line 1509 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 1509 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11)
#line 1509 "recompilation.usage.m"
{
#line 1512 "recompilation.usage.m"
  {
#line 1512 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1512 "recompilation.usage.m"
    MR_Word recompilation__usage__Dependencies_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
#line 1513 "recompilation.usage.m"
    MR_Word recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
#line 1519 "recompilation.usage.m"
    MR_Word recompilation__usage__EquivTypes_9;
#line 1515 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 1515 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_EquivTypes_9;

#line 1515 "recompilation.usage.m"
    {
#line 1515 "recompilation.usage.m"
      recompilation__usage__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 0) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1515 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 1) = ((MR_Box) (recompilation__usage__NameArity_6));
#line 1515 "recompilation.usage.m"
    }
#line 1515 "recompilation.usage.m"
    {
#line 1515 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation__usage_scalar_common_2[10], recompilation__usage__Dependencies_8, ((MR_Box) (recompilation__usage__V_12_12)), &recompilation__usage__conv0_EquivTypes_9);
    }
#line 1515 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1515 "recompilation.usage.m"
      {
#line 1515 "recompilation.usage.m"
        recompilation__usage__EquivTypes_9 = ((MR_Word) recompilation__usage__conv0_EquivTypes_9);
#line 1515 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 1515 "recompilation.usage.m"
      }
#line 1519 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1517 "recompilation.usage.m"
      {
#line 1517 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 1517 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14;
#line 1517 "recompilation.usage.m"
        MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_11;

#line 1518 "recompilation.usage.m"
        {
#line 1518 "recompilation.usage.m"
          recompilation__usage__V_14_14 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_27_27, recompilation__usage__EquivTypes_9);
        }
#line 1517 "recompilation.usage.m"
        {
#line 1517 "recompilation.usage.m"
          mercury__list__foldl_4_p_0(recompilation__usage__TypeCtorInfo_27_27, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[60], recompilation__usage__V_14_14, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_10)), &recompilation__usage__conv2_STATE_VARIABLE_Info_11);
        }
#line 1517 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_11 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_11);
#line 1517 "recompilation.usage.m"
      }
#line 1519 "recompilation.usage.m"
    else
#line 1519 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_11 = recompilation__usage__STATE_VARIABLE_Info_0_10;
#line 1512 "recompilation.usage.m"
  }
#line 1509 "recompilation.usage.m"
}

#line 1481 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_imported_item_4_p_0(
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1481 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_21,
#line 1481 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_22)
#line 1481 "recompilation.usage.m"
{
#line 1484 "recompilation.usage.m"
  {
#line 1484 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_46_46;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1484 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__Module_12;
#line 1484 "recompilation.usage.m"
    MR_String recompilation__usage__Name_13;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems0_14;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems1_16;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIds0_17;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIds_18;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems_19;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems_20;
#line 1484 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 1489 "recompilation.usage.m"
    MR_Word recompilation__usage__Module0_10;
#line 1489 "recompilation.usage.m"
    MR_String recompilation__usage__Name0_11;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33;
#line 1493 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34;
#line 1496 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems0_15;
#line 1494 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleItems0_15;
#line 1499 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleItemIds0_17;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41;
#line 1503 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37;

#line 1486 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__SymName_8)) == (MR_mktag((MR_Integer) 1)));
#line 1486 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1486 "recompilation.usage.m"
      {
#line 1486 "recompilation.usage.m"
        recompilation__usage__Module0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__SymName_8, (MR_Integer) 0)));
#line 1486 "recompilation.usage.m"
        recompilation__usage__Name0_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__SymName_8, (MR_Integer) 1)));
#line 1487 "recompilation.usage.m"
        recompilation__usage__Module_12 = recompilation__usage__Module0_10;
#line 1488 "recompilation.usage.m"
        recompilation__usage__Name_13 = recompilation__usage__Name0_11;
#line 1486 "recompilation.usage.m"
      }
#line 1486 "recompilation.usage.m"
    else
#line 1490 "recompilation.usage.m"
      {
#line 1490 "recompilation.usage.m"
        {
#line 1490 "recompilation.usage.m"
          mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.record_imported_item\'/4", (MR_String) "unqualified item");
#line 1490 "recompilation.usage.m"
          return;
        }
#line 1490 "recompilation.usage.m"
      }
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__ImportedItems0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1493 "recompilation.usage.m"
    recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1494 "recompilation.usage.m"
    {
#line 1494 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], recompilation__usage__ImportedItems0_14, ((MR_Box) (recompilation__usage__Module_12)), &recompilation__usage__conv0_ModuleItems0_15);
    }
#line 1494 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1494 "recompilation.usage.m"
      {
#line 1494 "recompilation.usage.m"
        recompilation__usage__ModuleItems0_15 = ((MR_Word) recompilation__usage__conv0_ModuleItems0_15);
#line 1494 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 1494 "recompilation.usage.m"
      }
#line 1496 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1495 "recompilation.usage.m"
      recompilation__usage__ModuleItems1_16 = recompilation__usage__ModuleItems0_15;
#line 1496 "recompilation.usage.m"
    else
#line 1497 "recompilation.usage.m"
      {
#line 1497 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;

#line 1497 "recompilation.usage.m"
        {
#line 1497 "recompilation.usage.m"
          recompilation__usage__V_26_26 = mercury__set__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0]);
        }
#line 1497 "recompilation.usage.m"
        {
#line 1497 "recompilation.usage.m"
          recompilation__usage__ModuleItems1_16 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__V_26_26)));
        }
#line 1497 "recompilation.usage.m"
      }
#line 8948 "recompilation.usage.c"
    recompilation__usage__TypeInfo_46_46 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1499 "recompilation.usage.m"
    {
#line 1499 "recompilation.usage.m"
      recompilation__usage__conv1_ModuleItemIds0_17 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_46_46, recompilation__usage__ModuleItems1_16, recompilation__usage__ItemType_5);
    }
#line 1499 "recompilation.usage.m"
    recompilation__usage__ModuleItemIds0_17 = ((MR_Word) recompilation__usage__conv1_ModuleItemIds0_17);
#line 1500 "recompilation.usage.m"
    {
#line 1500 "recompilation.usage.m"
      recompilation__usage__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 0) = ((MR_Box) (recompilation__usage__Name_13));
#line 1500 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 1) = ((MR_Box) (recompilation__usage__Arity_9));
#line 1500 "recompilation.usage.m"
    }
#line 1500 "recompilation.usage.m"
    {
#line 1500 "recompilation.usage.m"
      mercury__set__insert_3_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], ((MR_Box) (recompilation__usage__V_27_27)), recompilation__usage__ModuleItemIds0_17, &recompilation__usage__ModuleItemIds_18);
    }
#line 1501 "recompilation.usage.m"
    {
#line 1501 "recompilation.usage.m"
      recompilation__update_ids_4_p_0(recompilation__usage__TypeInfo_46_46, recompilation__usage__ItemType_5, ((MR_Box) (recompilation__usage__ModuleItemIds_18)), recompilation__usage__ModuleItems1_16, &recompilation__usage__ModuleItems_19);
    }
#line 1502 "recompilation.usage.m"
    {
#line 1502 "recompilation.usage.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__Module_12)), ((MR_Box) (recompilation__usage__ModuleItems_19)), recompilation__usage__ImportedItems0_14, &recompilation__usage__ImportedItems_20);
    }
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 1)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
#line 1503 "recompilation.usage.m"
    recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
#line 1503 "recompilation.usage.m"
    {
#line 1503 "recompilation.usage.m"
      MR_Word base;
#line 1503 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_22 = base;
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_35_35));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_36_36));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__ImportedItems_20));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_38_38));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_39_39));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__V_40_40));
#line 1503 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1503 "recompilation.usage.m"
    }
#line 1484 "recompilation.usage.m"
  }
#line 1481 "recompilation.usage.m"
}

#line 1475 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__item_is_local_2_p_0(
#line 1475 "recompilation.usage.m"
  MR_Word recompilation__usage__Info_3,
#line 1475 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_4)
#line 1475 "recompilation.usage.m"
{
#line 1477 "recompilation.usage.m"
  {
#line 1477 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_5;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_4, (MR_Integer) 0)));
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;
#line 1478 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_4, (MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
    MR_String recompilation__usage__V_6_6;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_14_14;
#line 1479 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15;

#line 1478 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1478 "recompilation.usage.m"
      {
#line 1478 "recompilation.usage.m"
        recompilation__usage__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_8_8, (MR_Integer) 0)));
#line 1478 "recompilation.usage.m"
        recompilation__usage__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_8_8, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 0)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 2)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 3)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 4)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 5)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_3, (MR_Integer) 6)));
#line 1479 "recompilation.usage.m"
        {
#line 1479 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_9_9, &recompilation__usage__V_16_16);
        }
#line 1479 "recompilation.usage.m"
        {
#line 1479 "recompilation.usage.m"
          return recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_5, recompilation__usage__V_16_16);
        }
#line 1478 "recompilation.usage.m"
      }
#line 1477 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 1477 "recompilation.usage.m"
  }
#line 1475 "recompilation.usage.m"
}

#line 1437 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__maybe_record_item_to_process_4_p_0(
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemName_6,
#line 1437 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1437 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13)
#line 1437 "recompilation.usage.m"
{
#line 1440 "recompilation.usage.m"
  {
#line 1440 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded = (recompilation__usage__ItemType_5 == (MR_Integer) 4);
#line 1440 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_21_64;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_22_65;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_23_66;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_24_67;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems_50;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_51;
#line 1468 "recompilation.usage.m"
    MR_String recompilation__usage__Name_52;
#line 1468 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_53;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleIdSet_54;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItemIdSet_55;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 1468 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 1469 "recompilation.usage.m"
    MR_Word recompilation__usage__V_63_63;
#line 1471 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_ModuleIdSet_54;
#line 1472 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleItemIdSet_55;

#line 1445 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1442 "recompilation.usage.m"
      {
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__Classes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__Classes_9;
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1442 "recompilation.usage.m"
        MR_Word recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_25_25;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_27_27;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_29_29;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30;
#line 1444 "recompilation.usage.m"
        MR_Word recompilation__usage__V_31_31;

#line 1443 "recompilation.usage.m"
        {
#line 1443 "recompilation.usage.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, ((MR_Box) (recompilation__usage__ItemName_6)), recompilation__usage__Classes0_8, &recompilation__usage__Classes_9);
        }
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 1444 "recompilation.usage.m"
        recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 1444 "recompilation.usage.m"
        {
#line 1444 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (recompilation__usage__V_25_25));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (recompilation__usage__V_26_26));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (recompilation__usage__V_27_27));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (recompilation__usage__V_28_28));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (recompilation__usage__V_29_29));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (recompilation__usage__V_30_30));
#line 1444 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (recompilation__usage__Classes_9));
#line 1444 "recompilation.usage.m"
        }
#line 1442 "recompilation.usage.m"
      }
#line 1445 "recompilation.usage.m"
    else
#line 1445 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_12;
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__ImportedItems_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1469 "recompilation.usage.m"
    recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1470 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1470 "recompilation.usage.m"
    recompilation__usage__Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1470 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 1470 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1470 "recompilation.usage.m"
      {
#line 1470 "recompilation.usage.m"
        recompilation__usage__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, (MR_Integer) 0)));
#line 1470 "recompilation.usage.m"
        recompilation__usage__Name_52 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, (MR_Integer) 1)));
#line 9274 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_21_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 9276 "recompilation.usage.c"
        recompilation__usage__TypeInfo_22_65 = (MR_Word) &recompilation__usage_scalar_common_3[0];
#line 1471 "recompilation.usage.m"
        {
#line 1471 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_21_64, recompilation__usage__TypeInfo_22_65, recompilation__usage__ImportedItems_50, ((MR_Box) (recompilation__usage__ModuleName_51)), &recompilation__usage__conv0_ModuleIdSet_54);
        }
#line 1471 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1471 "recompilation.usage.m"
          {
#line 1471 "recompilation.usage.m"
            recompilation__usage__ModuleIdSet_54 = ((MR_Word) recompilation__usage__conv0_ModuleIdSet_54);
#line 1471 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1471 "recompilation.usage.m"
          }
#line 1468 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1468 "recompilation.usage.m"
          {
#line 9297 "recompilation.usage.c"
            recompilation__usage__TypeInfo_23_66 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1472 "recompilation.usage.m"
            {
#line 1472 "recompilation.usage.m"
              recompilation__usage__conv1_ModuleItemIdSet_55 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_23_66, recompilation__usage__ModuleIdSet_54, recompilation__usage__ItemType_5);
            }
#line 1472 "recompilation.usage.m"
            recompilation__usage__ModuleItemIdSet_55 = ((MR_Word) recompilation__usage__conv1_ModuleItemIdSet_55);
#line 9306 "recompilation.usage.c"
            recompilation__usage__TypeInfo_24_67 = (MR_Word) &recompilation__usage_scalar_common_1[0];
#line 1473 "recompilation.usage.m"
            {
#line 1473 "recompilation.usage.m"
              recompilation__usage__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_57_57, 0) = ((MR_Box) (recompilation__usage__Name_52));
#line 1473 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_57_57, 1) = ((MR_Box) (recompilation__usage__Arity_53));
#line 1473 "recompilation.usage.m"
            }
#line 1473 "recompilation.usage.m"
            {
#line 1473 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__set__member_2_p_0(recompilation__usage__TypeInfo_24_67, ((MR_Box) (recompilation__usage__V_57_57)), recompilation__usage__ModuleItemIdSet_55);
            }
#line 1468 "recompilation.usage.m"
          }
#line 1470 "recompilation.usage.m"
      }
#line 1452 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1452 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_13 = recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1452 "recompilation.usage.m"
    else
#line 1456 "recompilation.usage.m"
      {
#line 1477 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleName_70;
#line 1477 "recompilation.usage.m"
        MR_Word recompilation__usage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 0)));
#line 1477 "recompilation.usage.m"
        MR_Word recompilation__usage__V_74_74;
#line 1477 "recompilation.usage.m"
        MR_Word recompilation__usage__V_81_81;
#line 1478 "recompilation.usage.m"
        MR_Integer recompilation__usage__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_6, (MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
        MR_String recompilation__usage__V_71_71;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_75_75;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_76_76;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_77_77;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_78_78;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_79_79;
#line 1479 "recompilation.usage.m"
        MR_Word recompilation__usage__V_80_80;

#line 1478 "recompilation.usage.m"
        recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1478 "recompilation.usage.m"
          {
#line 1478 "recompilation.usage.m"
            recompilation__usage__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_73_73, (MR_Integer) 0)));
#line 1478 "recompilation.usage.m"
            recompilation__usage__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_73_73, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1479 "recompilation.usage.m"
            recompilation__usage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1479 "recompilation.usage.m"
            {
#line 1479 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_74_74, &recompilation__usage__V_81_81);
            }
#line 1479 "recompilation.usage.m"
            {
#line 1479 "recompilation.usage.m"
              recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_70, recompilation__usage__V_81_81);
            }
#line 1478 "recompilation.usage.m"
          }
#line 1456 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1456 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_13 = recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1456 "recompilation.usage.m"
        else
#line 1457 "recompilation.usage.m"
          {
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__Queue0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__Queue_11;
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_15_15;
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_16_16;
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1457 "recompilation.usage.m"
            MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_38_38;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_40_40;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_41_41;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_42_42;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_43_43;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_44_44;
#line 1459 "recompilation.usage.m"
            MR_Word recompilation__usage__V_39_39;

#line 1458 "recompilation.usage.m"
            {
#line 1458 "recompilation.usage.m"
              recompilation__usage__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 0) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1458 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 1) = ((MR_Box) (recompilation__usage__ItemName_6));
#line 1458 "recompilation.usage.m"
            }
#line 1458 "recompilation.usage.m"
            {
#line 1458 "recompilation.usage.m"
              mercury__queue__put_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__usage__V_15_15)), recompilation__usage__Queue0_10, &recompilation__usage__Queue_11);
            }
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 0)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 1)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 2)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 3)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 4)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 5)));
#line 1459 "recompilation.usage.m"
            recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, (MR_Integer) 6)));
#line 1459 "recompilation.usage.m"
            {
#line 1459 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (recompilation__usage__V_38_38));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (recompilation__usage__Queue_11));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (recompilation__usage__V_40_40));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) (recompilation__usage__V_42_42));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 5) = ((MR_Box) (recompilation__usage__V_43_43));
#line 1459 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_16_16, 6) = ((MR_Box) (recompilation__usage__V_44_44));
#line 1459 "recompilation.usage.m"
            }
#line 1461 "recompilation.usage.m"
            {
#line 1461 "recompilation.usage.m"
              recompilation__usage__record_imported_item_4_p_0(recompilation__usage__ItemType_5, recompilation__usage__ItemName_6, recompilation__usage__STATE_VARIABLE_Info_16_16, &recompilation__usage__STATE_VARIABLE_Info_17_17);
            }
#line 1462 "recompilation.usage.m"
            {
#line 1462 "recompilation.usage.m"
              recompilation__usage__record_expanded_items_used_by_item_4_p_0(recompilation__usage__ItemType_5, recompilation__usage__ItemName_6, recompilation__usage__STATE_VARIABLE_Info_17_17, recompilation__usage__STATE_VARIABLE_Info_13);
#line 1462 "recompilation.usage.m"
              return;
            }
#line 1457 "recompilation.usage.m"
          }
#line 1456 "recompilation.usage.m"
      }
#line 1440 "recompilation.usage.m"
  }
#line 1437 "recompilation.usage.m"
}

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1282 "recompilation.usage.m"
{
#line 1282 "recompilation.usage.m"
  {
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1282 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1282 "recompilation.usage.m"
  }
#line 1282 "recompilation.usage.m"
}

#line 1427 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraint_3_p_0(
#line 1427 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraint_4,
#line 1427 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1427 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1427 "recompilation.usage.m"
{
#line 1430 "recompilation.usage.m"
  {
#line 1430 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1430 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraint_4, (MR_Integer) 0)));
#line 1430 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraint_4, (MR_Integer) 1)));
#line 1430 "recompilation.usage.m"
    MR_Integer recompilation__usage__ClassArity_8;
#line 1430 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 1430 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_13_13;
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_10;

#line 1432 "recompilation.usage.m"
    {
#line 1432 "recompilation.usage.m"
      recompilation__usage__ClassArity_8 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__ArgTypes_7);
    }
#line 1434 "recompilation.usage.m"
    {
#line 1434 "recompilation.usage.m"
      recompilation__usage__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 0) = ((MR_Box) (recompilation__usage__ClassName_6));
#line 1434 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_12_12, 1) = ((MR_Box) (recompilation__usage__ClassArity_8));
#line 1434 "recompilation.usage.m"
    }
#line 1433 "recompilation.usage.m"
    {
#line 1433 "recompilation.usage.m"
      recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, recompilation__usage__V_12_12, recompilation__usage__STATE_VARIABLE_Info_0_9, &recompilation__usage__STATE_VARIABLE_Info_13_13);
    }
#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[59], recompilation__usage__ArgTypes_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_13_13)), &recompilation__usage__conv1_STATE_VARIABLE_Info_10);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_10 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_10);
#line 1430 "recompilation.usage.m"
  }
#line 1427 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1421 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_constraints_3_p_0(
#line 1421 "recompilation.usage.m"
  MR_Word recompilation__usage__Constraints_4,
#line 1421 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1421 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1421 "recompilation.usage.m"
{
#line 1424 "recompilation.usage.m"
  {
#line 1424 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[58], recompilation__usage__Constraints_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1424 "recompilation.usage.m"
  }
#line 1421 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_2(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1413 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_context_3_p_0(
#line 1413 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1413 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1413 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8)
#line 1413 "recompilation.usage.m"
{
#line 1417 "recompilation.usage.m"
  {
#line 1417 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1417 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_9_9;
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9_9;
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_8;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[56], recompilation__usage__Constraints1_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_7)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9_9);
    }
#line 1425 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_9_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9_9);
#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[57], recompilation__usage__Constraints2_5, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_9_9)), &recompilation__usage__conv3_STATE_VARIABLE_Info_8);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_8 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_8);
#line 1417 "recompilation.usage.m"
  }
#line 1413 "recompilation.usage.m"
}

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1332 "recompilation.usage.m"
{
#line 1332 "recompilation.usage.m"
  {
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1332 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1332 "recompilation.usage.m"
  }
#line 1332 "recompilation.usage.m"
}

#line 1382 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_name_3_p_0(
#line 1382 "recompilation.usage.m"
  MR_Word recompilation__usage__InstName_4,
#line 1382 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_22,
#line 1382 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_23)
#line 1382 "recompilation.usage.m"
{
#line 1387 "recompilation.usage.m"
  while (MR_TRUE)
#line 1387 "recompilation.usage.m"
    {
#line 1387 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 1387 "recompilation.usage.m"
      {
#line 1387 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;

#line 1387 "recompilation.usage.m"
#line 1387 "recompilation.usage.m"
        switch (MR_tag((MR_Word) recompilation__usage__InstName_4)) {
#line 1387 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 1387 "recompilation.usage.m"
            {
#line 1387 "recompilation.usage.m"
              MR_Word recompilation__usage__Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1387 "recompilation.usage.m"
              MR_Word recompilation__usage__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1387 "recompilation.usage.m"
              MR_Integer recompilation__usage__Arity_8;
#line 1387 "recompilation.usage.m"
              MR_Word recompilation__usage__V_31_31;
#line 1387 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_32_32;
#line 1332 "recompilation.usage.m"
              MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_23;

#line 1388 "recompilation.usage.m"
              {
#line 1388 "recompilation.usage.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_7, &recompilation__usage__Arity_8);
              }
#line 1389 "recompilation.usage.m"
              {
#line 1389 "recompilation.usage.m"
                recompilation__usage__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1389 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_31_31, 0) = ((MR_Box) (recompilation__usage__Name_6));
#line 1389 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_31_31, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1389 "recompilation.usage.m"
              }
#line 1389 "recompilation.usage.m"
              {
#line 1389 "recompilation.usage.m"
                recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, recompilation__usage__V_31_31, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_32_32);
              }
#line 1332 "recompilation.usage.m"
              {
#line 1332 "recompilation.usage.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[55], recompilation__usage__ArgInsts_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_32_32)), &recompilation__usage__conv1_STATE_VARIABLE_Info_23);
              }
#line 1332 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_Info_23 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_23);
#line 1387 "recompilation.usage.m"
            }
#line 1387 "recompilation.usage.m"
            break;
#line 1387 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 1394 "recompilation.usage.m"
            {
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__InstA_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__InstB_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 3)));
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_28_42;
#line 1393 "recompilation.usage.m"
              MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1393 "recompilation.usage.m"
              MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1395 "recompilation.usage.m"
              {
#line 1395 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__InstA_40, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_28_42);
              }
#line 1396 "recompilation.usage.m"
              {
#line 1396 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__InstB_41, recompilation__usage__STATE_VARIABLE_Info_28_42, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1396 "recompilation.usage.m"
                return;
              }
#line 1394 "recompilation.usage.m"
            }
#line 1387 "recompilation.usage.m"
            break;
#line 1387 "recompilation.usage.m"
          case (MR_Integer) 2:
#line 1394 "recompilation.usage.m"
            {
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__InstA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 0)));
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__InstB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1394 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;

#line 1395 "recompilation.usage.m"
              {
#line 1395 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__InstA_9, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_28_28);
              }
#line 1396 "recompilation.usage.m"
              {
#line 1396 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__InstB_10, recompilation__usage__STATE_VARIABLE_Info_28_28, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1396 "recompilation.usage.m"
                return;
              }
#line 1394 "recompilation.usage.m"
            }
#line 1387 "recompilation.usage.m"
            break;
#line 1387 "recompilation.usage.m"
          case (MR_Integer) 3:
#line 1387 "recompilation.usage.m"
#line 1387 "recompilation.usage.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 0)))) {
#line 1387 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 1402 "recompilation.usage.m"
                {
#line 1402 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1398 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1398 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1398 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1403 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1403 "recompilation.usage.m"
                  {
#line 1403 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_37;

#line 1403 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1403 "recompilation.usage.m"
                  }
#line 1403 "recompilation.usage.m"
                  continue;
#line 1402 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 1402 "recompilation.usage.m"
                {
#line 1402 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));
#line 1399 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1399 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1399 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1403 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1403 "recompilation.usage.m"
                  {
#line 1403 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_13;

#line 1403 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1403 "recompilation.usage.m"
                  }
#line 1403 "recompilation.usage.m"
                  continue;
#line 1402 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 2:
#line 1402 "recompilation.usage.m"
                {
#line 1402 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1403 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1403 "recompilation.usage.m"
                  {
#line 1403 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_39;

#line 1403 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1403 "recompilation.usage.m"
                  }
#line 1403 "recompilation.usage.m"
                  continue;
#line 1402 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 3:
#line 1402 "recompilation.usage.m"
                {
#line 1402 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1403 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1403 "recompilation.usage.m"
                  {
#line 1403 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_38;

#line 1403 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1403 "recompilation.usage.m"
                  }
#line 1403 "recompilation.usage.m"
                  continue;
#line 1402 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 4:
#line 1405 "recompilation.usage.m"
                {
#line 1405 "recompilation.usage.m"
                  MR_Word recompilation__usage__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1405 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1406 "recompilation.usage.m"
                  {
#line 1406 "recompilation.usage.m"
                    recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_21, recompilation__usage__STATE_VARIABLE_Info_0_22, recompilation__usage__STATE_VARIABLE_Info_23);
#line 1406 "recompilation.usage.m"
                    return;
                  }
#line 1405 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
              case (MR_Integer) 5:
#line 1408 "recompilation.usage.m"
                {
#line 1408 "recompilation.usage.m"
                  MR_Word recompilation__usage__STATE_VARIABLE_Info_24_24;
#line 1408 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInstName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 2)));
#line 1408 "recompilation.usage.m"
                  MR_Word recompilation__usage__Type_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__InstName_4, (MR_Integer) 1)));

#line 1409 "recompilation.usage.m"
                  {
#line 1409 "recompilation.usage.m"
                    recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_35, recompilation__usage__STATE_VARIABLE_Info_0_22, &recompilation__usage__STATE_VARIABLE_Info_24_24);
                  }
#line 1410 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1410 "recompilation.usage.m"
                  {
#line 1410 "recompilation.usage.m"
                    MR_Word recompilation__usage__InstName__tmp_copy_4 = recompilation__usage__SubInstName_34;
#line 1410 "recompilation.usage.m"
                    MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_22 = recompilation__usage__STATE_VARIABLE_Info_24_24;

#line 1410 "recompilation.usage.m"
                    recompilation__usage__STATE_VARIABLE_Info_0_22 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_22;
#line 1410 "recompilation.usage.m"
                    recompilation__usage__InstName_4 = recompilation__usage__InstName__tmp_copy_4;
#line 1410 "recompilation.usage.m"
                  }
#line 1410 "recompilation.usage.m"
                  continue;
#line 1408 "recompilation.usage.m"
                }
#line 1387 "recompilation.usage.m"
                break;
#line 1387 "recompilation.usage.m"
            }
#line 1387 "recompilation.usage.m"
            break;
#line 1387 "recompilation.usage.m"
        }
#line 1387 "recompilation.usage.m"
      }
#line 1387 "recompilation.usage.m"
      break;
#line 1387 "recompilation.usage.m"
    }
#line 1382 "recompilation.usage.m"
}

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1332 "recompilation.usage.m"
{
#line 1332 "recompilation.usage.m"
  {
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1332 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1332 "recompilation.usage.m"
  }
#line 1332 "recompilation.usage.m"
}

#line 1370 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_bound_inst_3_p_0(
#line 1370 "recompilation.usage.m"
  MR_Word recompilation__usage__BoundInst_4,
#line 1370 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1370 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1370 "recompilation.usage.m"
{
#line 1373 "recompilation.usage.m"
  {
#line 1373 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1373 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__BoundInst_4, (MR_Integer) 0)));
#line 1373 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__BoundInst_4, (MR_Integer) 1)));
#line 1373 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1377 "recompilation.usage.m"
    MR_Word recompilation__usage__Name_8;
#line 1377 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9;
#line 1375 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1375 "recompilation.usage.m"
    recompilation__usage__succeeded = ((((MR_tag((MR_Word) recompilation__usage__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1375 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1375 "recompilation.usage.m"
      {
#line 1375 "recompilation.usage.m"
        recompilation__usage__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 1)));
#line 1375 "recompilation.usage.m"
        recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 2)));
#line 1375 "recompilation.usage.m"
        recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_6, (MR_Integer) 3)));
#line 1376 "recompilation.usage.m"
        {
#line 1376 "recompilation.usage.m"
          MR_Word recompilation__usage__ItemSet0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1376 "recompilation.usage.m"
          MR_Word recompilation__usage__IdSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 5)));
#line 1376 "recompilation.usage.m"
          MR_Word recompilation__usage__IdSet_23;
#line 1376 "recompilation.usage.m"
          MR_Word recompilation__usage__ItemSet_24;
#line 1376 "recompilation.usage.m"
          MR_Word recompilation__usage__STATE_VARIABLE_Info_14_26;
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 697 "recompilation.usage.m"
          MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 0)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 1)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 2)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 3)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 4)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 6)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 7)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 8)));
#line 698 "recompilation.usage.m"
          MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 9)));
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_43_43;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_44_44;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_45_45;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_46_46;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_47_47;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_49_49;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_50_50;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_51_51;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_52_52;
#line 701 "recompilation.usage.m"
          MR_Word recompilation__usage__V_48_48;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_53_53;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_54_54;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_55_55;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_56_56;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_57_57;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_59_59;
#line 702 "recompilation.usage.m"
          MR_Word recompilation__usage__V_58_58;

#line 699 "recompilation.usage.m"
          {
#line 699 "recompilation.usage.m"
            recompilation__usage__record_resolved_item__ho1_7_p_0(recompilation__usage__Name_8, recompilation__usage__Arity_9, recompilation__usage__IdSet0_22, &recompilation__usage__IdSet_23, recompilation__usage__STATE_VARIABLE_Info_0_11, &recompilation__usage__STATE_VARIABLE_Info_14_26);
          }
#line 701 "recompilation.usage.m"
          recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 0)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 1)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 2)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 3)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 4)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 5)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 6)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 7)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 8)));
#line 701 "recompilation.usage.m"
          recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet0_21, (MR_Integer) 9)));
#line 701 "recompilation.usage.m"
          {
#line 701 "recompilation.usage.m"
            recompilation__usage__ItemSet_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 0) = ((MR_Box) (recompilation__usage__V_43_43));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 1) = ((MR_Box) (recompilation__usage__V_44_44));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 2) = ((MR_Box) (recompilation__usage__V_45_45));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 3) = ((MR_Box) (recompilation__usage__V_46_46));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 4) = ((MR_Box) (recompilation__usage__V_47_47));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 5) = ((MR_Box) (recompilation__usage__IdSet_23));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 6) = ((MR_Box) (recompilation__usage__V_49_49));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 7) = ((MR_Box) (recompilation__usage__V_50_50));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 8) = ((MR_Box) (recompilation__usage__V_51_51));
#line 701 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ItemSet_24, 9) = ((MR_Box) (recompilation__usage__V_52_52));
#line 701 "recompilation.usage.m"
          }
#line 702 "recompilation.usage.m"
          recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 0)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 1)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 2)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 3)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 4)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 5)));
#line 702 "recompilation.usage.m"
          recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_26, (MR_Integer) 6)));
#line 702 "recompilation.usage.m"
          {
#line 702 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 0) = ((MR_Box) (recompilation__usage__V_53_53));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 1) = ((MR_Box) (recompilation__usage__V_54_54));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 2) = ((MR_Box) (recompilation__usage__V_55_55));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 3) = ((MR_Box) (recompilation__usage__V_56_56));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 4) = ((MR_Box) (recompilation__usage__V_57_57));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 5) = ((MR_Box) (recompilation__usage__ItemSet_24));
#line 702 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_14_14, 6) = ((MR_Box) (recompilation__usage__V_59_59));
#line 702 "recompilation.usage.m"
          }
#line 1376 "recompilation.usage.m"
        }
#line 1375 "recompilation.usage.m"
      }
#line 1375 "recompilation.usage.m"
    else
#line 1377 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[54], recompilation__usage__ArgInsts_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_14_14)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1373 "recompilation.usage.m"
  }
#line 1370 "recompilation.usage.m"
}

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_4(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1314 "recompilation.usage.m"
{
#line 1314 "recompilation.usage.m"
  {
#line 1314 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1314 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_3;

#line 1314 "recompilation.usage.m"
    {
#line 1314 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_3);
    }
#line 1314 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_3));
#line 1314 "recompilation.usage.m"
  }
#line 1314 "recompilation.usage.m"
}

#line 1356 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_3(
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1356 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1356 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1356 "recompilation.usage.m"
{
#line 1356 "recompilation.usage.m"
  {
#line 1356 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1356 "recompilation.usage.m"
    MR_Word recompilation__usage__conv4_STATE_VARIABLE_Info_12;

#line 1356 "recompilation.usage.m"
    {
#line 1356 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_bound_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv4_STATE_VARIABLE_Info_12);
    }
#line 1356 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv4_STATE_VARIABLE_Info_12));
#line 1356 "recompilation.usage.m"
  }
#line 1356 "recompilation.usage.m"
}

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_2(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1314 "recompilation.usage.m"
{
#line 1314 "recompilation.usage.m"
  {
#line 1314 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1314 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_3;

#line 1314 "recompilation.usage.m"
    {
#line 1314 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_3);
    }
#line 1314 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_3));
#line 1314 "recompilation.usage.m"
  }
#line 1314 "recompilation.usage.m"
}

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1332 "recompilation.usage.m"
{
#line 1332 "recompilation.usage.m"
  {
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1332 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1332 "recompilation.usage.m"
  }
#line 1332 "recompilation.usage.m"
}

#line 1334 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_3_p_0(
#line 1334 "recompilation.usage.m"
  MR_Word recompilation__usage__Inst_4,
#line 1334 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1334 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25)
#line 1334 "recompilation.usage.m"
{
#line 1339 "recompilation.usage.m"
  while (MR_TRUE)
#line 1339 "recompilation.usage.m"
    {
#line 1339 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 1339 "recompilation.usage.m"
      {
#line 1339 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;

#line 1339 "recompilation.usage.m"
#line 1339 "recompilation.usage.m"
        switch (MR_tag((MR_Word) recompilation__usage__Inst_4)) {
#line 1339 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1339 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 1339 "recompilation.usage.m"
#line 1339 "recompilation.usage.m"
            switch (MR_unmkbody(recompilation__usage__Inst_4)) {
#line 1339 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 1340 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 1339 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
            }
#line 1339 "recompilation.usage.m"
            break;
#line 1339 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 1341 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1339 "recompilation.usage.m"
            break;
#line 1339 "recompilation.usage.m"
          case (MR_Integer) 2:
#line 1347 "recompilation.usage.m"
            {
#line 1347 "recompilation.usage.m"
              MR_Word recompilation__usage__HOInstInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1345 "recompilation.usage.m"
              MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__Inst_4, (MR_Integer) 0)));

#line 1351 "recompilation.usage.m"
              if ((recompilation__usage__HOInstInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1351 "recompilation.usage.m"
              else
#line 1349 "recompilation.usage.m"
                {
#line 1349 "recompilation.usage.m"
                  MR_Word recompilation__usage__Modes_12;
#line 1349 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_34_34 = (MR_Word) MR_body(((MR_Word) recompilation__usage__HOInstInfo_9), (MR_Integer) 1);
#line 1349 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 0)));
#line 1349 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_13_13;
#line 1349 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_14_14;
#line 1314 "recompilation.usage.m"
                  MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_25;

#line 1349 "recompilation.usage.m"
                  recompilation__usage__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 1)));
#line 1349 "recompilation.usage.m"
                  recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 2)));
#line 1349 "recompilation.usage.m"
                  recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, (MR_Integer) 3)));
#line 1314 "recompilation.usage.m"
                  {
#line 1314 "recompilation.usage.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[51], recompilation__usage__Modes_12, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv3_STATE_VARIABLE_Info_25);
                  }
#line 1314 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_25);
#line 1349 "recompilation.usage.m"
                }
#line 1347 "recompilation.usage.m"
            }
#line 1339 "recompilation.usage.m"
            break;
#line 1339 "recompilation.usage.m"
          case (MR_Integer) 3:
#line 1339 "recompilation.usage.m"
#line 1339 "recompilation.usage.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 0)))) {
#line 1339 "recompilation.usage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 0:
#line 1355 "recompilation.usage.m"
                {
#line 1355 "recompilation.usage.m"
                  MR_Word recompilation__usage__BoundInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 3)));
#line 1355 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1355 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1356 "recompilation.usage.m"
                  MR_Box recompilation__usage__conv5_STATE_VARIABLE_Info_25;

#line 1356 "recompilation.usage.m"
                  {
#line 1356 "recompilation.usage.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[52], recompilation__usage__BoundInsts_17, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv5_STATE_VARIABLE_Info_25);
                  }
#line 1356 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv5_STATE_VARIABLE_Info_25);
#line 1355 "recompilation.usage.m"
                }
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 1:
#line 1347 "recompilation.usage.m"
                {
#line 1347 "recompilation.usage.m"
                  MR_Word recompilation__usage__HOInstInfo_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1346 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1351 "recompilation.usage.m"
                  if ((recompilation__usage__HOInstInfo_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1352 "recompilation.usage.m"
                    *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1351 "recompilation.usage.m"
                  else
#line 1349 "recompilation.usage.m"
                    {
#line 1349 "recompilation.usage.m"
                      MR_Word recompilation__usage__Modes_46;
#line 1349 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_49_49 = (MR_Word) MR_body(((MR_Word) recompilation__usage__HOInstInfo_55), (MR_Integer) 1);
#line 1349 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 0)));
#line 1349 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_43_43;
#line 1349 "recompilation.usage.m"
                      MR_Word recompilation__usage__V_44_44;
#line 1314 "recompilation.usage.m"
                      MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_25;

#line 1349 "recompilation.usage.m"
                      recompilation__usage__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 1)));
#line 1349 "recompilation.usage.m"
                      recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 2)));
#line 1349 "recompilation.usage.m"
                      recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_49_49, (MR_Integer) 3)));
#line 1314 "recompilation.usage.m"
                      {
#line 1314 "recompilation.usage.m"
                        mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[53], recompilation__usage__Modes_46, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv7_STATE_VARIABLE_Info_25);
                      }
#line 1314 "recompilation.usage.m"
                      *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_25);
#line 1349 "recompilation.usage.m"
                    }
#line 1347 "recompilation.usage.m"
                }
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 2:
#line 1342 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 3:
#line 1358 "recompilation.usage.m"
                {
#line 1358 "recompilation.usage.m"
                  MR_Word recompilation__usage__SubInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1358 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1359 "recompilation.usage.m"
                  /* direct tailcall eliminated */
#line 1359 "recompilation.usage.m"
                  {
#line 1359 "recompilation.usage.m"
                    MR_Word recompilation__usage__Inst__tmp_copy_4 = recompilation__usage__SubInst_19;

#line 1359 "recompilation.usage.m"
                    recompilation__usage__Inst_4 = recompilation__usage__Inst__tmp_copy_4;
#line 1359 "recompilation.usage.m"
                  }
#line 1359 "recompilation.usage.m"
                  continue;
#line 1358 "recompilation.usage.m"
                }
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 4:
#line 1361 "recompilation.usage.m"
                {
#line 1361 "recompilation.usage.m"
                  MR_Word recompilation__usage__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));

#line 1362 "recompilation.usage.m"
                  {
#line 1362 "recompilation.usage.m"
                    recompilation__usage__find_items_used_by_inst_name_3_p_0(recompilation__usage__InstName_20, recompilation__usage__STATE_VARIABLE_Info_0_24, recompilation__usage__STATE_VARIABLE_Info_25);
#line 1362 "recompilation.usage.m"
                    return;
                  }
#line 1361 "recompilation.usage.m"
                }
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
              case (MR_Integer) 5:
#line 1364 "recompilation.usage.m"
                {
#line 1364 "recompilation.usage.m"
                  MR_Word recompilation__usage__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 1)));
#line 1364 "recompilation.usage.m"
                  MR_Word recompilation__usage__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__Inst_4, (MR_Integer) 2)));
#line 1364 "recompilation.usage.m"
                  MR_Integer recompilation__usage__Arity_23;
#line 1364 "recompilation.usage.m"
                  MR_Word recompilation__usage__V_27_27;
#line 1364 "recompilation.usage.m"
                  MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;
#line 1332 "recompilation.usage.m"
                  MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_25;

#line 1365 "recompilation.usage.m"
                  {
#line 1365 "recompilation.usage.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_22, &recompilation__usage__Arity_23);
                  }
#line 1366 "recompilation.usage.m"
                  {
#line 1366 "recompilation.usage.m"
                    recompilation__usage__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 0) = ((MR_Box) (recompilation__usage__Name_21));
#line 1366 "recompilation.usage.m"
                    MR_hl_field(MR_mktag(0), recompilation__usage__V_27_27, 1) = ((MR_Box) (recompilation__usage__Arity_23));
#line 1366 "recompilation.usage.m"
                  }
#line 1366 "recompilation.usage.m"
                  {
#line 1366 "recompilation.usage.m"
                    recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 3, recompilation__usage__V_27_27, recompilation__usage__STATE_VARIABLE_Info_0_24, &recompilation__usage__STATE_VARIABLE_Info_28_28);
                  }
#line 1332 "recompilation.usage.m"
                  {
#line 1332 "recompilation.usage.m"
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[50], recompilation__usage__ArgInsts_22, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_28_28)), &recompilation__usage__conv1_STATE_VARIABLE_Info_25);
                  }
#line 1332 "recompilation.usage.m"
                  *recompilation__usage__STATE_VARIABLE_Info_25 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_25);
#line 1364 "recompilation.usage.m"
                }
#line 1339 "recompilation.usage.m"
                break;
#line 1339 "recompilation.usage.m"
            }
#line 1339 "recompilation.usage.m"
            break;
#line 1339 "recompilation.usage.m"
        }
#line 1339 "recompilation.usage.m"
      }
#line 1339 "recompilation.usage.m"
      break;
#line 1339 "recompilation.usage.m"
    }
#line 1334 "recompilation.usage.m"
}

#line 1332 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0_1(
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1332 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1332 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1332 "recompilation.usage.m"
{
#line 1332 "recompilation.usage.m"
  {
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1332 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_25;

#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_inst_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_25);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_25));
#line 1332 "recompilation.usage.m"
  }
#line 1332 "recompilation.usage.m"
}

#line 1328 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_insts_3_p_0(
#line 1328 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1328 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1328 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1328 "recompilation.usage.m"
{
#line 1331 "recompilation.usage.m"
  {
#line 1331 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1332 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1332 "recompilation.usage.m"
    {
#line 1332 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[49], recompilation__usage__Modes_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1332 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1331 "recompilation.usage.m"
  }
#line 1328 "recompilation.usage.m"
}

#line 1316 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_3_p_0(
#line 1316 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1316 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1316 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1316 "recompilation.usage.m"
{
#line 1319 "recompilation.usage.m"
  {
#line 1319 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1319 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1319 "recompilation.usage.m"
      {
#line 1319 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1319 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1319 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_9_9;

#line 1320 "recompilation.usage.m"
        {
#line 1320 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst1_4, recompilation__usage__STATE_VARIABLE_Info_0_2, &recompilation__usage__STATE_VARIABLE_Info_9_9);
        }
#line 1321 "recompilation.usage.m"
        {
#line 1321 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst2_5, recompilation__usage__STATE_VARIABLE_Info_9_9, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1321 "recompilation.usage.m"
          return;
        }
#line 1319 "recompilation.usage.m"
      }
#line 1319 "recompilation.usage.m"
    else
#line 1322 "recompilation.usage.m"
      {
#line 1322 "recompilation.usage.m"
        MR_Word recompilation__usage__ModeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1322 "recompilation.usage.m"
        MR_Word recompilation__usage__ArgInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1322 "recompilation.usage.m"
        MR_Integer recompilation__usage__ModeArity_14;
#line 1322 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;
#line 1322 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_19_19;

#line 1323 "recompilation.usage.m"
        {
#line 1323 "recompilation.usage.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, recompilation__usage__ArgInsts_12, &recompilation__usage__ModeArity_14);
        }
#line 1324 "recompilation.usage.m"
        {
#line 1324 "recompilation.usage.m"
          recompilation__usage__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_18_18, 0) = ((MR_Box) (recompilation__usage__ModeName_11));
#line 1324 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_18_18, 1) = ((MR_Box) (recompilation__usage__ModeArity_14));
#line 1324 "recompilation.usage.m"
        }
#line 1324 "recompilation.usage.m"
        {
#line 1324 "recompilation.usage.m"
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 2, recompilation__usage__V_18_18, recompilation__usage__STATE_VARIABLE_Info_0_2, &recompilation__usage__STATE_VARIABLE_Info_19_19);
        }
#line 1326 "recompilation.usage.m"
        {
#line 1326 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_insts_3_p_0(recompilation__usage__ArgInsts_12, recompilation__usage__STATE_VARIABLE_Info_19_19, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1326 "recompilation.usage.m"
          return;
        }
#line 1322 "recompilation.usage.m"
      }
#line 1319 "recompilation.usage.m"
  }
#line 1316 "recompilation.usage.m"
}

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0_1(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1314 "recompilation.usage.m"
{
#line 1314 "recompilation.usage.m"
  {
#line 1314 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1314 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_3;

#line 1314 "recompilation.usage.m"
    {
#line 1314 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_3);
    }
#line 1314 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_3));
#line 1314 "recompilation.usage.m"
  }
#line 1314 "recompilation.usage.m"
}

#line 1310 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_modes_3_p_0(
#line 1310 "recompilation.usage.m"
  MR_Word recompilation__usage__Modes_4,
#line 1310 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1310 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1310 "recompilation.usage.m"
{
#line 1313 "recompilation.usage.m"
  {
#line 1313 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1314 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1314 "recompilation.usage.m"
    {
#line 1314 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[48], recompilation__usage__Modes_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1314 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1313 "recompilation.usage.m"
  }
#line 1310 "recompilation.usage.m"
}

#line 1295 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_ctor_3_p_0(
#line 1295 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeCtor_4,
#line 1295 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1295 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14)
#line 1295 "recompilation.usage.m"
{
#line 1306 "recompilation.usage.m"
  {
#line 1306 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeCtor_4, (MR_Integer) 0)));
#line 1301 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeCtor_4, (MR_Integer) 1)));
#line 1301 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6;
#line 1301 "recompilation.usage.m"
    MR_String recompilation__usage__V_7_7;
#line 1302 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9;
#line 1302 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;

#line 1301 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1301 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1301 "recompilation.usage.m"
      {
#line 1301 "recompilation.usage.m"
        recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_15_15, (MR_Integer) 0)));
#line 1301 "recompilation.usage.m"
        recompilation__usage__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_15_15, (MR_Integer) 1)));
#line 1302 "recompilation.usage.m"
        {
#line 1302 "recompilation.usage.m"
          recompilation__usage__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(recompilation__usage__TypeCtor_4, &recompilation__usage__V_9_9, &recompilation__usage__V_10_10);
        }
#line 1302 "recompilation.usage.m"
        recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 1301 "recompilation.usage.m"
      }
#line 1306 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1304 "recompilation.usage.m"
      {
#line 1304 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorItem_12;

#line 1304 "recompilation.usage.m"
        {
#line 1304 "recompilation.usage.m"
          recompilation__usage__TypeCtorItem_12 = recompilation__type_ctor_to_item_name_1_f_0(recompilation__usage__TypeCtor_4);
        }
#line 1305 "recompilation.usage.m"
        {
#line 1305 "recompilation.usage.m"
          recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 0, recompilation__usage__TypeCtorItem_12, recompilation__usage__STATE_VARIABLE_Info_0_13, recompilation__usage__STATE_VARIABLE_Info_14);
#line 1305 "recompilation.usage.m"
          return;
        }
#line 1304 "recompilation.usage.m"
      }
#line 1306 "recompilation.usage.m"
    else
#line 1306 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_14 = recompilation__usage__STATE_VARIABLE_Info_0_13;
#line 1306 "recompilation.usage.m"
  }
#line 1295 "recompilation.usage.m"
}

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1282 "recompilation.usage.m"
{
#line 1282 "recompilation.usage.m"
  {
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1282 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1282 "recompilation.usage.m"
  }
#line 1282 "recompilation.usage.m"
}

#line 1284 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_3_p_0(
#line 1284 "recompilation.usage.m"
  MR_Word recompilation__usage__Type_4,
#line 1284 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1284 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1284 "recompilation.usage.m"
{
#line 1291 "recompilation.usage.m"
  {
#line 1291 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1291 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtor_6;
#line 1291 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeArgs_7;

#line 1288 "recompilation.usage.m"
    {
#line 1288 "recompilation.usage.m"
      recompilation__usage__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(recompilation__usage__Type_4, &recompilation__usage__TypeCtor_6, &recompilation__usage__TypeArgs_7);
    }
#line 1291 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1289 "recompilation.usage.m"
      {
#line 1289 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_10_10;
#line 1282 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1289 "recompilation.usage.m"
        {
#line 1289 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_type_ctor_3_p_0(recompilation__usage__TypeCtor_6, recompilation__usage__STATE_VARIABLE_Info_0_8, &recompilation__usage__STATE_VARIABLE_Info_10_10);
        }
#line 1282 "recompilation.usage.m"
        {
#line 1282 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[47], recompilation__usage__TypeArgs_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_10_10)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
        }
#line 1282 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1289 "recompilation.usage.m"
      }
#line 1291 "recompilation.usage.m"
    else
#line 1291 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_9 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 1291 "recompilation.usage.m"
  }
#line 1284 "recompilation.usage.m"
}

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1282 "recompilation.usage.m"
{
#line 1282 "recompilation.usage.m"
  {
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1282 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1282 "recompilation.usage.m"
  }
#line 1282 "recompilation.usage.m"
}

#line 1278 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_types_3_p_0(
#line 1278 "recompilation.usage.m"
  MR_Word recompilation__usage__Types_4,
#line 1278 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1278 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1278 "recompilation.usage.m"
{
#line 1281 "recompilation.usage.m"
  {
#line 1281 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[46], recompilation__usage__Types_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1281 "recompilation.usage.m"
  }
#line 1278 "recompilation.usage.m"
}

#line 1269 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_8,
#line 1269 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1269 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_11,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__Module_12,
#line 1269 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_14,
#line 1269 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_15)
#line 1269 "recompilation.usage.m"
{
#line 1274 "recompilation.usage.m"
  {
#line 1274 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1274 "recompilation.usage.m"
    {
#line 1274 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_115_105_109_112_108_101_95_105_116_101_109_95_115_101_116_95_51_95_95_91_52_93_95_48_7_p_0(recompilation__usage__ItemType_8, recompilation__usage__Name_9, recompilation__usage__Arity_10, recompilation__usage__Module_12, recompilation__usage__STATE_VARIABLE_Info_0_14, recompilation__usage__STATE_VARIABLE_Info_15);
#line 1274 "recompilation.usage.m"
      return;
    }
#line 1274 "recompilation.usage.m"
  }
#line 1269 "recompilation.usage.m"
}

#line 1266 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1(
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1266 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1266 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1266 "recompilation.usage.m"
{
#line 1266 "recompilation.usage.m"
  {
#line 1266 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1266 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_15;

#line 1266 "recompilation.usage.m"
    {
#line 1266 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_15);
    }
#line 1266 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_15));
#line 1266 "recompilation.usage.m"
  }
#line 1266 "recompilation.usage.m"
}

#line 1260 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_6,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingIdMap_9,
#line 1260 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1260 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1260 "recompilation.usage.m"
{
#line 1265 "recompilation.usage.m"
  {
#line 1265 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1265 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_19_19;
#line 1265 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1265 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1265 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1266 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1266 "recompilation.usage.m"
    {
#line 1266 "recompilation.usage.m"
      recompilation__usage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[2]));
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0_1));
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 3) = ((MR_Box) (recompilation__usage__ItemType_6));
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 4) = ((MR_Box) (recompilation__usage__Name_7));
#line 1266 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 5) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1266 "recompilation.usage.m"
    }
#line 11368 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1266 "recompilation.usage.m"
    {
#line 1266 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_19_19, recompilation__usage__TypeCtorInfo_19_19, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_13_13, recompilation__usage__MatchingIdMap_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1266 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1265 "recompilation.usage.m"
  }
#line 1260 "recompilation.usage.m"
}

#line 1258 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1(
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
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 1258 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 1258 "recompilation.usage.m"
  }
#line 1258 "recompilation.usage.m"
}

#line 1254 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_simple_item_set_4_p_0(
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_5,
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1254 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1254 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1254 "recompilation.usage.m"
{
#line 1257 "recompilation.usage.m"
  {
#line 1257 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1257 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1258 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      recompilation__usage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[6]));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_simple_item_set_4_p_0_1));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1258 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 3) = ((MR_Box) (recompilation__usage__ItemType_5));
#line 1258 "recompilation.usage.m"
    }
#line 1258 "recompilation.usage.m"
    {
#line 1258 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_10_10, recompilation__usage__Set_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_8)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1258 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1257 "recompilation.usage.m"
  }
#line 1254 "recompilation.usage.m"
}

#line 1239 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functor_5_p_0(
#line 1239 "recompilation.usage.m"
  MR_String recompilation__usage__Name_1,
#line 1239 "recompilation.usage.m"
  MR_Integer recompilation__usage___Arity_2,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolverFunctor_3,
#line 1239 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_4,
#line 1239 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_5)
#line 1239 "recompilation.usage.m"
{
#line 1242 "recompilation.usage.m"
  {
#line 1242 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1242 "recompilation.usage.m"
    {
#line 1242 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_95_95_91_50_93_95_48_5_p_0(recompilation__usage__Name_1, recompilation__usage__ResolverFunctor_3, recompilation__usage__STATE_VARIABLE_Info_0_4, recompilation__usage__STATE_VARIABLE_Info_5);
#line 1242 "recompilation.usage.m"
      return;
    }
#line 1242 "recompilation.usage.m"
  }
#line 1239 "recompilation.usage.m"
}

#line 1231 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_6_p_0(
#line 1231 "recompilation.usage.m"
  MR_String recompilation__usage__Name_7,
#line 1231 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__Qualifier_9,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__4_10,
#line 1231 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_13,
#line 1231 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_14)
#line 1231 "recompilation.usage.m"
{
#line 1235 "recompilation.usage.m"
  {
#line 1235 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1235 "recompilation.usage.m"
    {
#line 1235 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_102_117_110_99_116_111_114_115_95_51_95_95_91_52_93_95_48_6_p_0(recompilation__usage__Name_7, recompilation__usage__Arity_8, recompilation__usage__Qualifier_9, recompilation__usage__STATE_VARIABLE_Info_0_13, recompilation__usage__STATE_VARIABLE_Info_14);
#line 1235 "recompilation.usage.m"
      return;
    }
#line 1235 "recompilation.usage.m"
  }
#line 1231 "recompilation.usage.m"
}

#line 1228 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0_1(
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1228 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1228 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1228 "recompilation.usage.m"
{
#line 1228 "recompilation.usage.m"
  {
#line 1228 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1228 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_14;

#line 1228 "recompilation.usage.m"
    {
#line 1228 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_3_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_14);
    }
#line 1228 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_14));
#line 1228 "recompilation.usage.m"
  }
#line 1228 "recompilation.usage.m"
}

#line 1223 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_2_4_p_0(
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingCtorMap_7,
#line 1223 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1223 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1223 "recompilation.usage.m"
{
#line 1227 "recompilation.usage.m"
  {
#line 1227 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_17_17;
#line 1227 "recompilation.usage.m"
    MR_String recompilation__usage__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1227 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1227 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 1228 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_10;

#line 1228 "recompilation.usage.m"
    {
#line 1228 "recompilation.usage.m"
      recompilation__usage__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 0) = ((MR_Box) (&recompilation__usage_scalar_common_10[0]));
#line 1228 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_functors_2_4_p_0_1));
#line 1228 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1228 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 3) = ((MR_Box) (recompilation__usage__Name_5));
#line 1228 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 4) = ((MR_Box) (recompilation__usage__Arity_6));
#line 1228 "recompilation.usage.m"
    }
#line 11608 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1228 "recompilation.usage.m"
    {
#line 1228 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_17_17, recompilation__usage__TypeCtorInfo_17_17, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_11_11, recompilation__usage__MatchingCtorMap_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_9)), &recompilation__usage__conv1_STATE_VARIABLE_Info_10);
    }
#line 1228 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_10 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_10);
#line 1227 "recompilation.usage.m"
  }
#line 1223 "recompilation.usage.m"
}

#line 1221 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0_1(
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1221 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1221 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1221 "recompilation.usage.m"
{
#line 1221 "recompilation.usage.m"
  {
#line 1221 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1221 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1221 "recompilation.usage.m"
    {
#line 1221 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_2_4_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1221 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1221 "recompilation.usage.m"
  }
#line 1221 "recompilation.usage.m"
}

#line 1217 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_functors_3_p_0(
#line 1217 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_4,
#line 1217 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 1217 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 1217 "recompilation.usage.m"
{
#line 1220 "recompilation.usage.m"
  {
#line 1220 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1221 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_7;

#line 1221 "recompilation.usage.m"
    {
#line 1221 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[45], recompilation__usage__Set_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_6)), &recompilation__usage__conv1_STATE_VARIABLE_Info_7);
    }
#line 1221 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_7 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_7);
#line 1220 "recompilation.usage.m"
  }
#line 1217 "recompilation.usage.m"
}

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0_1(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1282 "recompilation.usage.m"
{
#line 1282 "recompilation.usage.m"
  {
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1282 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_9;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_9);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_9));
#line 1282 "recompilation.usage.m"
  }
#line 1282 "recompilation.usage.m"
}

#line 1203 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_spec_3_p_0(
#line 1203 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeSpecInfo_4,
#line 1203 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 1203 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17)
#line 1203 "recompilation.usage.m"
{
#line 1206 "recompilation.usage.m"
  {
#line 1206 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1206 "recompilation.usage.m"
    MR_Word recompilation__usage__MaybeModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 4)));
#line 1206 "recompilation.usage.m"
    MR_Word recompilation__usage__Subst_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 5)));
#line 1206 "recompilation.usage.m"
    MR_Word recompilation__usage__SubstTypes_15;
#line 1206 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_18_18;
#line 1207 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 0)));
#line 1207 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 1)));
#line 1207 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 2)));
#line 1207 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 3)));
#line 1207 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 6)));
#line 1207 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_4, (MR_Integer) 7)));
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_17;

#line 1211 "recompilation.usage.m"
    if ((recompilation__usage__MaybeModes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_18_18 = recompilation__usage__STATE_VARIABLE_Info_0_16;
#line 1211 "recompilation.usage.m"
    else
#line 1209 "recompilation.usage.m"
      {
#line 1209 "recompilation.usage.m"
        MR_Word recompilation__usage__Modes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeModes_10, (MR_Integer) 0)));

#line 1210 "recompilation.usage.m"
        {
#line 1210 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_modes_3_p_0(recompilation__usage__Modes_14, recompilation__usage__STATE_VARIABLE_Info_0_16, &recompilation__usage__STATE_VARIABLE_Info_18_18);
        }
#line 1209 "recompilation.usage.m"
      }
#line 1214 "recompilation.usage.m"
    {
#line 1214 "recompilation.usage.m"
      mercury__assoc_list__values_2_p_0((MR_Word) &recompilation__usage_scalar_common_2[9], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__Subst_11, &recompilation__usage__SubstTypes_15);
    }
#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[44], recompilation__usage__SubstTypes_15, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_18_18)), &recompilation__usage__conv1_STATE_VARIABLE_Info_17);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_17 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_17);
#line 1206 "recompilation.usage.m"
  }
#line 1203 "recompilation.usage.m"
}

#line 1196 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(
#line 1196 "recompilation.usage.m"
  MR_Integer recompilation__usage___ProcId_5,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__ProcInfo_6,
#line 1196 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_9,
#line 1196 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_10)
#line 1196 "recompilation.usage.m"
{
#line 1199 "recompilation.usage.m"
  {
#line 1199 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1199 "recompilation.usage.m"
    {
#line 1199 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_111_99_95_97_114_103_95_109_111_100_101_115_95_95_91_49_93_95_48_4_p_0(recompilation__usage__ProcInfo_6, recompilation__usage__STATE_VARIABLE_Info_0_9, recompilation__usage__STATE_VARIABLE_Info_10);
#line 1199 "recompilation.usage.m"
      return;
    }
#line 1199 "recompilation.usage.m"
  }
#line 1196 "recompilation.usage.m"
}

#line 1190 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_2(
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1190 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1190 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1190 "recompilation.usage.m"
{
#line 1190 "recompilation.usage.m"
  {
#line 1190 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1190 "recompilation.usage.m"
    MR_Word recompilation__usage__conv5_STATE_VARIABLE_Info_17;

#line 1190 "recompilation.usage.m"
    {
#line 1190 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_spec_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv5_STATE_VARIABLE_Info_17);
    }
#line 1190 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv5_STATE_VARIABLE_Info_17));
#line 1190 "recompilation.usage.m"
  }
#line 1190 "recompilation.usage.m"
}

#line 1182 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0_1(
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1182 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1182 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1182 "recompilation.usage.m"
{
#line 1182 "recompilation.usage.m"
  {
#line 1182 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1182 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_10;

#line 1182 "recompilation.usage.m"
    {
#line 1182 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_proc_arg_modes_4_p_0(((MR_Integer) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv2_STATE_VARIABLE_Info_10);
    }
#line 1182 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_10));
#line 1182 "recompilation.usage.m"
  }
#line 1182 "recompilation.usage.m"
}

#line 1135 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_pred_5_p_0(
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__3_3,
#line 1135 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_34,
#line 1135 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_35)
#line 1135 "recompilation.usage.m"
{
#line 1140 "recompilation.usage.m"
  {
#line 1140 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1140 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1140 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1140 "recompilation.usage.m"
    MR_Word recompilation__usage__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 0)));
#line 1140 "recompilation.usage.m"
    MR_Word recompilation__usage__PredModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__3_3, (MR_Integer) 1)));
#line 1140 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemType_12;
#line 1140 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_13;
#line 1140 "recompilation.usage.m"
    MR_Word recompilation__usage__PredInfo_14;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 1142 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 1145 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemName_15;
#line 1145 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;

#line 1141 "recompilation.usage.m"
    {
#line 1141 "recompilation.usage.m"
      recompilation__usage__ItemType_12 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__usage__PredOrFunc_6);
    }
#line 1142 "recompilation.usage.m"
    recompilation__usage__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 1142 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 1143 "recompilation.usage.m"
    {
#line 1143 "recompilation.usage.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(recompilation__usage__ModuleInfo_13, recompilation__usage__PredId_9, &recompilation__usage__PredInfo_14);
    }
#line 1145 "recompilation.usage.m"
    {
#line 1145 "recompilation.usage.m"
      recompilation__usage__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_36_36, 0) = ((MR_Box) (recompilation__usage__PredModule_10));
#line 1145 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_36_36, 1) = ((MR_Box) (recompilation__usage__Name_7));
#line 1145 "recompilation.usage.m"
    }
#line 1145 "recompilation.usage.m"
    {
#line 1145 "recompilation.usage.m"
      recompilation__usage__ItemName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, 0) = ((MR_Box) (recompilation__usage__V_36_36));
#line 1145 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1145 "recompilation.usage.m"
    }
#line 1468 "recompilation.usage.m"
    {
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeCtorInfo_21_92;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_22_93;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_23_94;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__TypeInfo_24_95;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__ImportedItems_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleName_79;
#line 1468 "recompilation.usage.m"
      MR_String recompilation__usage__Name_80;
#line 1468 "recompilation.usage.m"
      MR_Integer recompilation__usage__Arity_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, (MR_Integer) 1)));
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleIdSet_82;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__ModuleItemIdSet_83;
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_15, (MR_Integer) 0)));
#line 1468 "recompilation.usage.m"
      MR_Word recompilation__usage__V_85_85;
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 1469 "recompilation.usage.m"
      MR_Word recompilation__usage__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 1471 "recompilation.usage.m"
      MR_Box recompilation__usage__conv0_ModuleIdSet_82;
#line 1472 "recompilation.usage.m"
      MR_Box recompilation__usage__conv1_ModuleItemIdSet_83;

#line 1470 "recompilation.usage.m"
      recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 1470 "recompilation.usage.m"
      if (recompilation__usage__succeeded)
#line 1470 "recompilation.usage.m"
        {
#line 1470 "recompilation.usage.m"
          recompilation__usage__ModuleName_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_84_84, (MR_Integer) 0)));
#line 1470 "recompilation.usage.m"
          recompilation__usage__Name_80 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_84_84, (MR_Integer) 1)));
#line 12034 "recompilation.usage.c"
          recompilation__usage__TypeCtorInfo_21_92 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 12036 "recompilation.usage.c"
          recompilation__usage__TypeInfo_22_93 = (MR_Word) &recompilation__usage_scalar_common_3[0];
#line 1471 "recompilation.usage.m"
          {
#line 1471 "recompilation.usage.m"
            recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_21_92, recompilation__usage__TypeInfo_22_93, recompilation__usage__ImportedItems_78, ((MR_Box) (recompilation__usage__ModuleName_79)), &recompilation__usage__conv0_ModuleIdSet_82);
          }
#line 1471 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 1471 "recompilation.usage.m"
            {
#line 1471 "recompilation.usage.m"
              recompilation__usage__ModuleIdSet_82 = ((MR_Word) recompilation__usage__conv0_ModuleIdSet_82);
#line 1471 "recompilation.usage.m"
              recompilation__usage__succeeded = MR_TRUE;
#line 1471 "recompilation.usage.m"
            }
#line 1468 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 1468 "recompilation.usage.m"
            {
#line 12057 "recompilation.usage.c"
              recompilation__usage__TypeInfo_23_94 = (MR_Word) &recompilation__usage_scalar_common_2[0];
#line 1472 "recompilation.usage.m"
              {
#line 1472 "recompilation.usage.m"
                recompilation__usage__conv1_ModuleItemIdSet_83 = recompilation__extract_ids_2_f_0(recompilation__usage__TypeInfo_23_94, recompilation__usage__ModuleIdSet_82, recompilation__usage__ItemType_12);
              }
#line 1472 "recompilation.usage.m"
              recompilation__usage__ModuleItemIdSet_83 = ((MR_Word) recompilation__usage__conv1_ModuleItemIdSet_83);
#line 12066 "recompilation.usage.c"
              recompilation__usage__TypeInfo_24_95 = (MR_Word) &recompilation__usage_scalar_common_1[0];
#line 1473 "recompilation.usage.m"
              {
#line 1473 "recompilation.usage.m"
                recompilation__usage__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_85_85, 0) = ((MR_Box) (recompilation__usage__Name_80));
#line 1473 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_85_85, 1) = ((MR_Box) (recompilation__usage__Arity_81));
#line 1473 "recompilation.usage.m"
              }
#line 1473 "recompilation.usage.m"
              {
#line 1473 "recompilation.usage.m"
                recompilation__usage__succeeded = mercury__set__member_2_p_0(recompilation__usage__TypeInfo_24_95, ((MR_Box) (recompilation__usage__V_85_85)), recompilation__usage__ModuleItemIdSet_83);
              }
#line 1468 "recompilation.usage.m"
            }
#line 1470 "recompilation.usage.m"
        }
#line 1468 "recompilation.usage.m"
    }
#line 1148 "recompilation.usage.m"
    if (!(recompilation__usage__succeeded))
#line 1149 "recompilation.usage.m"
      {
#line 1149 "recompilation.usage.m"
        recompilation__usage__succeeded = recompilation__usage__item_is_local_2_p_0(recompilation__usage__STATE_VARIABLE_Info_0_34, recompilation__usage__ItemName_15);
      }
#line 1154 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1154 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_35 = recompilation__usage__STATE_VARIABLE_Info_0_34;
#line 1154 "recompilation.usage.m"
    else
#line 1175 "recompilation.usage.m"
      {
#line 1157 "recompilation.usage.m"
        MR_Word recompilation__usage__Markers_16;

#line 1157 "recompilation.usage.m"
        {
#line 1157 "recompilation.usage.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__Markers_16);
        }
#line 1158 "recompilation.usage.m"
        {
#line 1158 "recompilation.usage.m"
          recompilation__usage__succeeded = hlds__hlds_pred__check_marker_2_p_0(recompilation__usage__Markers_16, (MR_Integer) 9);
        }
#line 1175 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1162 "recompilation.usage.m"
          {
#line 1162 "recompilation.usage.m"
            MR_Word recompilation__usage__MethodClassContext_17;
#line 1162 "recompilation.usage.m"
            MR_Word recompilation__usage__MethodUnivConstraints_18;
#line 1162 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassName_22;
#line 1162 "recompilation.usage.m"
            MR_Integer recompilation__usage__ClassArity_24;
#line 1162 "recompilation.usage.m"
            MR_Word recompilation__usage__V_42_42;
#line 1163 "recompilation.usage.m"
            MR_Word recompilation__usage__V_19_19;

#line 1162 "recompilation.usage.m"
            {
#line 1162 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__MethodClassContext_17);
            }
#line 1163 "recompilation.usage.m"
            recompilation__usage__MethodUnivConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodClassContext_17, (MR_Integer) 0)));
#line 1163 "recompilation.usage.m"
            recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodClassContext_17, (MR_Integer) 1)));
#line 1168 "recompilation.usage.m"
            if ((recompilation__usage__MethodUnivConstraints_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "recompilation.usage.m"
              {
#line 1170 "recompilation.usage.m"
                {
#line 1170 "recompilation.usage.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_pred\'/5", (MR_String) "class method with no class constraints");
#line 1170 "recompilation.usage.m"
                  return;
                }
#line 1169 "recompilation.usage.m"
              }
#line 1168 "recompilation.usage.m"
            else
#line 1165 "recompilation.usage.m"
              {
#line 1165 "recompilation.usage.m"
                MR_Word recompilation__usage__MethodUnivConstraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MethodUnivConstraints_18, (MR_Integer) 0)));
#line 1165 "recompilation.usage.m"
                MR_Word recompilation__usage__ClassArgTypes_23;
#line 1165 "recompilation.usage.m"
                MR_Word recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MethodUnivConstraints_18, (MR_Integer) 1)));

#line 1166 "recompilation.usage.m"
                recompilation__usage__ClassName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodUnivConstraint_20, (MR_Integer) 0)));
#line 1166 "recompilation.usage.m"
                recompilation__usage__ClassArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__MethodUnivConstraint_20, (MR_Integer) 1)));
#line 1167 "recompilation.usage.m"
                {
#line 1167 "recompilation.usage.m"
                  recompilation__usage__ClassArity_24 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, recompilation__usage__ClassArgTypes_23);
                }
#line 1165 "recompilation.usage.m"
              }
#line 1174 "recompilation.usage.m"
            {
#line 1174 "recompilation.usage.m"
              recompilation__usage__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_42_42, 0) = ((MR_Box) (recompilation__usage__ClassName_22));
#line 1174 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__V_42_42, 1) = ((MR_Box) (recompilation__usage__ClassArity_24));
#line 1174 "recompilation.usage.m"
            }
#line 1173 "recompilation.usage.m"
            {
#line 1173 "recompilation.usage.m"
              recompilation__usage__maybe_record_item_to_process_4_p_0((MR_Integer) 4, recompilation__usage__V_42_42, recompilation__usage__STATE_VARIABLE_Info_0_34, recompilation__usage__STATE_VARIABLE_Info_35);
#line 1173 "recompilation.usage.m"
              return;
            }
#line 1162 "recompilation.usage.m"
          }
#line 1175 "recompilation.usage.m"
        else
#line 1176 "recompilation.usage.m"
          {
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeCtorInfo_68_68;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__ArgTypes_25;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__Procs_26;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__ClassContext_27;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeSpecInfo_28;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__PragmaMap_32;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__V_44_44;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_45_45;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_46_46;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_47_47;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_49_49;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_50_50;
#line 1176 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemName_53;
#line 1182 "recompilation.usage.m"
            MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_49_49;
#line 1188 "recompilation.usage.m"
            MR_Word recompilation__usage__V_29_29;
#line 1188 "recompilation.usage.m"
            MR_Word recompilation__usage__V_30_30;
#line 1188 "recompilation.usage.m"
            MR_Word recompilation__usage__V_31_31;
#line 1191 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeSpecPragmas_33;
#line 1189 "recompilation.usage.m"
            MR_Box recompilation__usage__conv4_TypeSpecPragmas_33;

#line 1176 "recompilation.usage.m"
            {
#line 1176 "recompilation.usage.m"
              recompilation__usage__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), recompilation__usage__V_44_44, 0) = ((MR_Box) (recompilation__usage__PredModule_10));
#line 1176 "recompilation.usage.m"
              MR_hl_field(MR_mktag(1), recompilation__usage__V_44_44, 1) = ((MR_Box) (recompilation__usage__Name_7));
#line 1176 "recompilation.usage.m"
            }
#line 1176 "recompilation.usage.m"
            {
#line 1176 "recompilation.usage.m"
              recompilation__usage__ItemName_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_53, 0) = ((MR_Box) (recompilation__usage__V_44_44));
#line 1176 "recompilation.usage.m"
              MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_53, 1) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1176 "recompilation.usage.m"
            }
#line 1177 "recompilation.usage.m"
            {
#line 1177 "recompilation.usage.m"
              recompilation__usage__record_expanded_items_used_by_item_4_p_0(recompilation__usage__ItemType_12, recompilation__usage__ItemName_53, recompilation__usage__STATE_VARIABLE_Info_0_34, &recompilation__usage__STATE_VARIABLE_Info_45_45);
            }
#line 1178 "recompilation.usage.m"
            {
#line 1178 "recompilation.usage.m"
              recompilation__usage__record_imported_item_4_p_0(recompilation__usage__ItemType_12, recompilation__usage__ItemName_53, recompilation__usage__STATE_VARIABLE_Info_45_45, &recompilation__usage__STATE_VARIABLE_Info_46_46);
            }
#line 1179 "recompilation.usage.m"
            {
#line 1179 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__ArgTypes_25);
            }
#line 1180 "recompilation.usage.m"
            {
#line 1180 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_types_3_p_0(recompilation__usage__ArgTypes_25, recompilation__usage__STATE_VARIABLE_Info_46_46, &recompilation__usage__STATE_VARIABLE_Info_47_47);
            }
#line 1181 "recompilation.usage.m"
            {
#line 1181 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__Procs_26);
            }
#line 12285 "recompilation.usage.c"
            recompilation__usage__TypeCtorInfo_68_68 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0;
#line 1182 "recompilation.usage.m"
            {
#line 1182 "recompilation.usage.m"
              mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, recompilation__usage__TypeCtorInfo_68_68, (MR_Word) &recompilation__usage_scalar_common_1[42], recompilation__usage__Procs_26, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_47_47)), &recompilation__usage__conv3_STATE_VARIABLE_Info_49_49);
            }
#line 1182 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_49_49 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_49_49);
#line 1183 "recompilation.usage.m"
            {
#line 1183 "recompilation.usage.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(recompilation__usage__PredInfo_14, &recompilation__usage__ClassContext_27);
            }
#line 1184 "recompilation.usage.m"
            {
#line 1184 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_class_context_3_p_0(recompilation__usage__ClassContext_27, recompilation__usage__STATE_VARIABLE_Info_49_49, &recompilation__usage__STATE_VARIABLE_Info_50_50);
            }
#line 1187 "recompilation.usage.m"
            {
#line 1187 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(recompilation__usage__ModuleInfo_13, &recompilation__usage__TypeSpecInfo_28);
            }
#line 1188 "recompilation.usage.m"
            recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 0)));
#line 1188 "recompilation.usage.m"
            recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 1)));
#line 1188 "recompilation.usage.m"
            recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 2)));
#line 1188 "recompilation.usage.m"
            recompilation__usage__PragmaMap_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeSpecInfo_28, (MR_Integer) 3)));
#line 1189 "recompilation.usage.m"
            {
#line 1189 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &recompilation__usage_scalar_common_2[8], recompilation__usage__PragmaMap_32, ((MR_Box) (recompilation__usage__PredId_9)), &recompilation__usage__conv4_TypeSpecPragmas_33);
            }
#line 1189 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1189 "recompilation.usage.m"
              {
#line 1189 "recompilation.usage.m"
                recompilation__usage__TypeSpecPragmas_33 = ((MR_Word) recompilation__usage__conv4_TypeSpecPragmas_33);
#line 1189 "recompilation.usage.m"
                recompilation__usage__succeeded = MR_TRUE;
#line 1189 "recompilation.usage.m"
              }
#line 1191 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 1190 "recompilation.usage.m"
              {
#line 1190 "recompilation.usage.m"
                MR_Box recompilation__usage__conv6_STATE_VARIABLE_Info_35;

#line 1190 "recompilation.usage.m"
                {
#line 1190 "recompilation.usage.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, recompilation__usage__TypeCtorInfo_68_68, (MR_Word) &recompilation__usage_scalar_common_1[43], recompilation__usage__TypeSpecPragmas_33, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_50_50)), &recompilation__usage__conv6_STATE_VARIABLE_Info_35);
                }
#line 1190 "recompilation.usage.m"
                *recompilation__usage__STATE_VARIABLE_Info_35 = ((MR_Word) recompilation__usage__conv6_STATE_VARIABLE_Info_35);
#line 1190 "recompilation.usage.m"
              }
#line 1191 "recompilation.usage.m"
            else
#line 1191 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_Info_35 = recompilation__usage__STATE_VARIABLE_Info_50_50;
#line 1176 "recompilation.usage.m"
          }
#line 1175 "recompilation.usage.m"
      }
#line 1140 "recompilation.usage.m"
  }
#line 1135 "recompilation.usage.m"
}

#line 1126 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_3_7_p_0(
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_8,
#line 1126 "recompilation.usage.m"
  MR_String recompilation__usage__Name_9,
#line 1126 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_10,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__5_12,
#line 1126 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1126 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1126 "recompilation.usage.m"
{
#line 1131 "recompilation.usage.m"
  {
#line 1131 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1131 "recompilation.usage.m"
    {
#line 1131 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_105_116_101_109_115_95_117_115_101_100_95_98_121_95_112_114_101_100_115_95_51_95_95_91_53_93_95_48_7_p_0(recompilation__usage__PredOrFunc_8, recompilation__usage__Name_9, recompilation__usage__Arity_10, recompilation__usage__ModuleQualifier_11, recompilation__usage__STATE_VARIABLE_Info_0_15, recompilation__usage__STATE_VARIABLE_Info_16);
#line 1131 "recompilation.usage.m"
      return;
    }
#line 1131 "recompilation.usage.m"
  }
#line 1126 "recompilation.usage.m"
}

#line 1123 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0_1(
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1123 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1123 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1123 "recompilation.usage.m"
{
#line 1123 "recompilation.usage.m"
  {
#line 1123 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1123 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_16;

#line 1123 "recompilation.usage.m"
    {
#line 1123 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_16);
    }
#line 1123 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_16));
#line 1123 "recompilation.usage.m"
  }
#line 1123 "recompilation.usage.m"
}

#line 1118 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_2_5_p_0(
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_6,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__MatchingPredMap_9,
#line 1118 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1118 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1118 "recompilation.usage.m"
{
#line 1122 "recompilation.usage.m"
  {
#line 1122 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1122 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_19_19;
#line 1122 "recompilation.usage.m"
    MR_String recompilation__usage__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 1122 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 1122 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;
#line 1123 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_12;

#line 1123 "recompilation.usage.m"
    {
#line 1123 "recompilation.usage.m"
      recompilation__usage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[1]));
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_2_5_p_0_1));
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_6));
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 4) = ((MR_Box) (recompilation__usage__Name_7));
#line 1123 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 5) = ((MR_Box) (recompilation__usage__Arity_8));
#line 1123 "recompilation.usage.m"
    }
#line 12479 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1123 "recompilation.usage.m"
    {
#line 1123 "recompilation.usage.m"
      mercury__map__foldl_4_p_0(recompilation__usage__TypeCtorInfo_19_19, recompilation__usage__TypeCtorInfo_19_19, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_13_13, recompilation__usage__MatchingPredMap_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv1_STATE_VARIABLE_Info_12);
    }
#line 1123 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_12);
#line 1122 "recompilation.usage.m"
  }
#line 1118 "recompilation.usage.m"
}

#line 1116 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0_1(
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1116 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 1116 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 1116 "recompilation.usage.m"
{
#line 1116 "recompilation.usage.m"
  {
#line 1116 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1116 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 1116 "recompilation.usage.m"
    {
#line 1116 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 1116 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 1116 "recompilation.usage.m"
  }
#line 1116 "recompilation.usage.m"
}

#line 1112 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_preds_4_p_0(
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__Set_6,
#line 1112 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1112 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1112 "recompilation.usage.m"
{
#line 1115 "recompilation.usage.m"
  {
#line 1115 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1115 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 1116 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1116 "recompilation.usage.m"
    {
#line 1116 "recompilation.usage.m"
      recompilation__usage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[5]));
#line 1116 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_preds_4_p_0_1));
#line 1116 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1116 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_10_10, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_5));
#line 1116 "recompilation.usage.m"
    }
#line 1116 "recompilation.usage.m"
    {
#line 1116 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_10_10, recompilation__usage__Set_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_8)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1116 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_9 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9);
#line 1115 "recompilation.usage.m"
  }
#line 1112 "recompilation.usage.m"
}

#line 1104 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0_1(
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1104 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1104 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1104 "recompilation.usage.m"
{
#line 1104 "recompilation.usage.m"
  {
#line 1104 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1104 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_14;

#line 1104 "recompilation.usage.m"
    {
#line 1104 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_ctor_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_14);
    }
#line 1104 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_14));
#line 1104 "recompilation.usage.m"
  }
#line 1104 "recompilation.usage.m"
}

#line 1088 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_inst_defn_3_p_0(
#line 1088 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1088 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 1088 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 1088 "recompilation.usage.m"
{
#line 1091 "recompilation.usage.m"
  {
#line 1091 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__InstBody_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 2)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__IFTC_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 3)));
#line 1091 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1092 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 0)));
#line 1092 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 1)));
#line 1092 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 4)));
#line 1092 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 5)));

#line 1096 "recompilation.usage.m"
    if ((recompilation__usage__InstBody_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1097 "recompilation.usage.m"
      recompilation__usage__STATE_VARIABLE_Info_17_17 = recompilation__usage__STATE_VARIABLE_Info_0_15;
#line 1096 "recompilation.usage.m"
    else
#line 1094 "recompilation.usage.m"
      {
#line 1094 "recompilation.usage.m"
        MR_Word recompilation__usage__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__InstBody_8, (MR_Integer) 0)));

#line 1095 "recompilation.usage.m"
        {
#line 1095 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_inst_3_p_0(recompilation__usage__Inst_12, recompilation__usage__STATE_VARIABLE_Info_0_15, &recompilation__usage__STATE_VARIABLE_Info_17_17);
        }
#line 1094 "recompilation.usage.m"
      }
#line 1102 "recompilation.usage.m"
#line 1102 "recompilation.usage.m"
    switch (MR_tag((MR_Word) recompilation__usage__IFTC_9)) {
#line 1102 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 1102 "recompilation.usage.m"
#line 1102 "recompilation.usage.m"
        switch (MR_unmkbody(recompilation__usage__IFTC_9)) {
#line 1102 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 1108 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_16 = recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1102 "recompilation.usage.m"
            break;
#line 1102 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 1106 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_16 = recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1102 "recompilation.usage.m"
            break;
#line 1102 "recompilation.usage.m"
          case (MR_Integer) 2:
#line 1107 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_16 = recompilation__usage__STATE_VARIABLE_Info_17_17;
#line 1102 "recompilation.usage.m"
            break;
#line 1102 "recompilation.usage.m"
        }
#line 1102 "recompilation.usage.m"
        break;
#line 1102 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 1100 "recompilation.usage.m"
        {
#line 1100 "recompilation.usage.m"
          MR_Word recompilation__usage__ForTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__IFTC_9, (MR_Integer) 0)));

#line 1101 "recompilation.usage.m"
          {
#line 1101 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_type_ctor_3_p_0(recompilation__usage__ForTypeCtor_13, recompilation__usage__STATE_VARIABLE_Info_17_17, recompilation__usage__STATE_VARIABLE_Info_16);
#line 1101 "recompilation.usage.m"
            return;
          }
#line 1100 "recompilation.usage.m"
        }
#line 1102 "recompilation.usage.m"
        break;
#line 1102 "recompilation.usage.m"
      case (MR_Integer) 2:
#line 1103 "recompilation.usage.m"
        {
#line 1103 "recompilation.usage.m"
          MR_Word recompilation__usage__MatchingTypeCtors_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__IFTC_9, (MR_Integer) 0)));
#line 1104 "recompilation.usage.m"
          MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_16;

#line 1104 "recompilation.usage.m"
          {
#line 1104 "recompilation.usage.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[41], recompilation__usage__MatchingTypeCtors_14, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_17_17)), &recompilation__usage__conv1_STATE_VARIABLE_Info_16);
          }
#line 1104 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_16 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_16);
#line 1103 "recompilation.usage.m"
        }
#line 1102 "recompilation.usage.m"
        break;
#line 1102 "recompilation.usage.m"
    }
#line 1091 "recompilation.usage.m"
  }
#line 1088 "recompilation.usage.m"
}

#line 1081 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_mode_defn_3_p_0(
#line 1081 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_4,
#line 1081 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 1081 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 1081 "recompilation.usage.m"
{
#line 1084 "recompilation.usage.m"
  {
#line 1084 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1084 "recompilation.usage.m"
    MR_Word recompilation__usage__Mode_8;
#line 1084 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 2)));
#line 1085 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 0)));
#line 1085 "recompilation.usage.m"
    MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 1)));
#line 1085 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 3)));
#line 1085 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_4, (MR_Integer) 4)));

#line 1085 "recompilation.usage.m"
    recompilation__usage__Mode_8 = (MR_Word) recompilation__usage__V_13_13;
#line 1086 "recompilation.usage.m"
    {
#line 1086 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(recompilation__usage__Mode_8, recompilation__usage__STATE_VARIABLE_Info_0_11, recompilation__usage__STATE_VARIABLE_Info_12);
#line 1086 "recompilation.usage.m"
      return;
    }
#line 1084 "recompilation.usage.m"
  }
#line 1081 "recompilation.usage.m"
}

#line 1074 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_arg_3_p_0(
#line 1074 "recompilation.usage.m"
  MR_Word recompilation__usage__CtorArg_4,
#line 1074 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_7,
#line 1074 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_8)
#line 1074 "recompilation.usage.m"
{
#line 1077 "recompilation.usage.m"
  {
#line 1077 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1077 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgType_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 1)));
#line 1078 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 0)));
#line 1078 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 2)));
#line 1078 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__CtorArg_4, (MR_Integer) 3)));

#line 1079 "recompilation.usage.m"
    {
#line 1079 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__ArgType_6, recompilation__usage__STATE_VARIABLE_Info_0_7, recompilation__usage__STATE_VARIABLE_Info_8);
#line 1079 "recompilation.usage.m"
      return;
    }
#line 1077 "recompilation.usage.m"
  }
#line 1074 "recompilation.usage.m"
}

#line 1072 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_2(
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1072 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1072 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1072 "recompilation.usage.m"
{
#line 1072 "recompilation.usage.m"
  {
#line 1072 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1072 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_8;

#line 1072 "recompilation.usage.m"
    {
#line 1072 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_ctor_arg_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_8);
    }
#line 1072 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_8));
#line 1072 "recompilation.usage.m"
  }
#line 1072 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1066 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_ctor_3_p_0(
#line 1066 "recompilation.usage.m"
  MR_Word recompilation__usage__Ctor_4,
#line 1066 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_12,
#line 1066 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_13)
#line 1066 "recompilation.usage.m"
{
#line 1069 "recompilation.usage.m"
  {
#line 1069 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1069 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 1)));
#line 1069 "recompilation.usage.m"
    MR_Word recompilation__usage__CtorArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 3)));
#line 1069 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 1070 "recompilation.usage.m"
    MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 0)));
#line 1070 "recompilation.usage.m"
    MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 2)));
#line 1070 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 4)));
#line 1070 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Ctor_4, (MR_Integer) 5)));
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_14_14;
#line 1072 "recompilation.usage.m"
    MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_13;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[39], recompilation__usage__Constraints_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_12)), &recompilation__usage__conv1_STATE_VARIABLE_Info_14_14);
    }
#line 1425 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_14_14 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_14_14);
#line 1072 "recompilation.usage.m"
    {
#line 1072 "recompilation.usage.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[40], recompilation__usage__CtorArgs_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_14_14)), &recompilation__usage__conv3_STATE_VARIABLE_Info_13);
    }
#line 1072 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_13 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_13);
#line 1069 "recompilation.usage.m"
  }
#line 1066 "recompilation.usage.m"
}

#line 1058 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0_1(
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1058 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1058 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1058 "recompilation.usage.m"
{
#line 1058 "recompilation.usage.m"
  {
#line 1058 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1058 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_13;

#line 1058 "recompilation.usage.m"
    {
#line 1058 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_ctor_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_13);
    }
#line 1058 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_13));
#line 1058 "recompilation.usage.m"
  }
#line 1058 "recompilation.usage.m"
}

#line 1053 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_body_3_p_0(
#line 1053 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 1053 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1053 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1053 "recompilation.usage.m"
{
#line 1057 "recompilation.usage.m"
  {
#line 1057 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1057 "recompilation.usage.m"
#line 1057 "recompilation.usage.m"
    switch (MR_tag((MR_Word) recompilation__usage__HeadVar__1_1)) {
#line 1057 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 1062 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1057 "recompilation.usage.m"
        break;
#line 1057 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 1057 "recompilation.usage.m"
        {
#line 1057 "recompilation.usage.m"
          MR_Word recompilation__usage__Ctors_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 2)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 3)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 4)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 5)));
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1056 "recompilation.usage.m"
          MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__HeadVar__1_1, (MR_Integer) 7)));
#line 1058 "recompilation.usage.m"
          MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_3;

#line 1058 "recompilation.usage.m"
          {
#line 1058 "recompilation.usage.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[38], recompilation__usage__Ctors_4, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv1_STATE_VARIABLE_Info_3);
          }
#line 1058 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_3);
#line 1057 "recompilation.usage.m"
        }
#line 1057 "recompilation.usage.m"
        break;
#line 1057 "recompilation.usage.m"
      case (MR_Integer) 2:
#line 1059 "recompilation.usage.m"
        {
#line 1059 "recompilation.usage.m"
          MR_Word recompilation__usage__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));

#line 1060 "recompilation.usage.m"
          {
#line 1060 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_18, recompilation__usage__STATE_VARIABLE_Info_0_2, recompilation__usage__STATE_VARIABLE_Info_3);
#line 1060 "recompilation.usage.m"
            return;
          }
#line 1059 "recompilation.usage.m"
        }
#line 1057 "recompilation.usage.m"
        break;
#line 1057 "recompilation.usage.m"
      case (MR_Integer) 3:
#line 1057 "recompilation.usage.m"
#line 1057 "recompilation.usage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1057 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 1064 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1057 "recompilation.usage.m"
            break;
#line 1057 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 1061 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_3 = recompilation__usage__STATE_VARIABLE_Info_0_2;
#line 1057 "recompilation.usage.m"
            break;
#line 1057 "recompilation.usage.m"
        }
#line 1057 "recompilation.usage.m"
        break;
#line 1057 "recompilation.usage.m"
    }
#line 1057 "recompilation.usage.m"
  }
#line 1053 "recompilation.usage.m"
}

#line 1041 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_type_and_mode_3_p_0(
#line 1041 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeAndMode_4,
#line 1041 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_8,
#line 1041 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_9)
#line 1041 "recompilation.usage.m"
{
#line 1044 "recompilation.usage.m"
  {
#line 1044 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1044 "recompilation.usage.m"
    MR_Word recompilation__usage__Type_6;
#line 1044 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_10_10;

#line 1047 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__TypeAndMode_4)) == (MR_mktag((MR_Integer) 1))))
#line 1048 "recompilation.usage.m"
      {
#line 1048 "recompilation.usage.m"
        MR_Word recompilation__usage__Mode_7;

#line 1048 "recompilation.usage.m"
        recompilation__usage__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__TypeAndMode_4, (MR_Integer) 0)));
#line 1048 "recompilation.usage.m"
        recompilation__usage__Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__TypeAndMode_4, (MR_Integer) 1)));
#line 1049 "recompilation.usage.m"
        {
#line 1049 "recompilation.usage.m"
          recompilation__usage__find_items_used_by_mode_3_p_0(recompilation__usage__Mode_7, recompilation__usage__STATE_VARIABLE_Info_0_8, &recompilation__usage__STATE_VARIABLE_Info_10_10);
        }
#line 1048 "recompilation.usage.m"
      }
#line 1047 "recompilation.usage.m"
    else
#line 1046 "recompilation.usage.m"
      {
#line 1046 "recompilation.usage.m"
        recompilation__usage__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeAndMode_4, (MR_Integer) 0)));
#line 1046 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_10_10 = recompilation__usage__STATE_VARIABLE_Info_0_8;
#line 1046 "recompilation.usage.m"
      }
#line 1051 "recompilation.usage.m"
    {
#line 1051 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_6, recompilation__usage__STATE_VARIABLE_Info_10_10, recompilation__usage__STATE_VARIABLE_Info_9);
#line 1051 "recompilation.usage.m"
      return;
    }
#line 1044 "recompilation.usage.m"
  }
#line 1041 "recompilation.usage.m"
}

#line 1314 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_4(
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1314 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1314 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1314 "recompilation.usage.m"
{
#line 1314 "recompilation.usage.m"
  {
#line 1314 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1314 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_3;

#line 1314 "recompilation.usage.m"
    {
#line 1314 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_3);
    }
#line 1314 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_3));
#line 1314 "recompilation.usage.m"
  }
#line 1314 "recompilation.usage.m"
}

#line 1036 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_3(
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1036 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1036 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1036 "recompilation.usage.m"
{
#line 1036 "recompilation.usage.m"
  {
#line 1036 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1036 "recompilation.usage.m"
    MR_Word recompilation__usage__conv4_STATE_VARIABLE_Info_9;

#line 1036 "recompilation.usage.m"
    {
#line 1036 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_and_mode_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv4_STATE_VARIABLE_Info_9);
    }
#line 1036 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv4_STATE_VARIABLE_Info_9));
#line 1036 "recompilation.usage.m"
  }
#line 1036 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_2(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1029 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_class_method_3_p_0(
#line 1029 "recompilation.usage.m"
  MR_Word recompilation__usage__Method_1,
#line 1029 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_2,
#line 1029 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_3)
#line 1029 "recompilation.usage.m"
{
#line 1032 "recompilation.usage.m"
  {
#line 1032 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 1032 "recompilation.usage.m"
    if (((MR_tag((MR_Word) recompilation__usage__Method_1)) == (MR_mktag((MR_Integer) 0))))
#line 1032 "recompilation.usage.m"
      {
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__ArgTypesAndModes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 2)));
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 10)));
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_20_20;
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraints_16, (MR_Integer) 0)));
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__Constraints2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Constraints_16, (MR_Integer) 1)));
#line 1032 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_9_45;
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 0)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 1)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 3)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 4)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 5)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 6)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 7)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 8)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 9)));
#line 1033 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Method_1, (MR_Integer) 11)));
#line 1425 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_9_45;
#line 1425 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_20_20;
#line 1036 "recompilation.usage.m"
        MR_Box recompilation__usage__conv5_STATE_VARIABLE_Info_3;

#line 1425 "recompilation.usage.m"
        {
#line 1425 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[34], recompilation__usage__Constraints1_42, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv1_STATE_VARIABLE_Info_9_45);
        }
#line 1425 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_9_45 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_9_45);
#line 1425 "recompilation.usage.m"
        {
#line 1425 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[35], recompilation__usage__Constraints2_43, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_9_45)), &recompilation__usage__conv3_STATE_VARIABLE_Info_20_20);
        }
#line 1425 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_20_20 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_20_20);
#line 1036 "recompilation.usage.m"
        {
#line 1036 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[36], recompilation__usage__ArgTypesAndModes_8, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_20_20)), &recompilation__usage__conv5_STATE_VARIABLE_Info_3);
        }
#line 1036 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv5_STATE_VARIABLE_Info_3);
#line 1032 "recompilation.usage.m"
      }
#line 1032 "recompilation.usage.m"
    else
#line 1037 "recompilation.usage.m"
      {
#line 1037 "recompilation.usage.m"
        MR_Word recompilation__usage__Modes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 2)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 0)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 1)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 3)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 4)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 5)));
#line 1038 "recompilation.usage.m"
        MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__Method_1, (MR_Integer) 6)));
#line 1314 "recompilation.usage.m"
        MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_3;

#line 1314 "recompilation.usage.m"
        {
#line 1314 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[37], recompilation__usage__Modes_27, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_2)), &recompilation__usage__conv7_STATE_VARIABLE_Info_3);
        }
#line 1314 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_3 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_3);
#line 1037 "recompilation.usage.m"
      }
#line 1032 "recompilation.usage.m"
  }
#line 1029 "recompilation.usage.m"
}

#line 1282 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_2(
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1282 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1282 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1282 "recompilation.usage.m"
{
#line 1282 "recompilation.usage.m"
  {
#line 1282 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1282 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_STATE_VARIABLE_Info_9;

#line 1282 "recompilation.usage.m"
    {
#line 1282 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_type_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv2_STATE_VARIABLE_Info_9);
    }
#line 1282 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_STATE_VARIABLE_Info_9));
#line 1282 "recompilation.usage.m"
  }
#line 1282 "recompilation.usage.m"
}

#line 1425 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0_1(
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1425 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1425 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1425 "recompilation.usage.m"
{
#line 1425 "recompilation.usage.m"
  {
#line 1425 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1425 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_10;

#line 1425 "recompilation.usage.m"
    {
#line 1425 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_constraint_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_10);
    }
#line 1425 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_10));
#line 1425 "recompilation.usage.m"
  }
#line 1425 "recompilation.usage.m"
}

#line 1001 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instance_4_p_0(
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__Defn_6,
#line 1001 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_24,
#line 1001 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_25)
#line 1001 "recompilation.usage.m"
{
#line 1004 "recompilation.usage.m"
  {
#line 1004 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 1004 "recompilation.usage.m"
    MR_Word recompilation__usage__InstanceModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 0)));
#line 1004 "recompilation.usage.m"
    MR_Word recompilation__usage__ArgTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 1)));
#line 1004 "recompilation.usage.m"
    MR_Word recompilation__usage__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 5)));
#line 1004 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage___OriginalArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 2)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 3)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 4)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 6)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 7)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 8)));
#line 1006 "recompilation.usage.m"
    MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Defn_6, (MR_Integer) 9)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 1011 "recompilation.usage.m"
    MR_Word recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 1012 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;

#line 1012 "recompilation.usage.m"
    {
#line 1012 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_18, &recompilation__usage__V_54_54);
    }
#line 1012 "recompilation.usage.m"
    {
#line 1012 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__InstanceModuleName_8, recompilation__usage__V_54_54);
    }
#line 1014 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1014 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_25 = recompilation__usage__STATE_VARIABLE_Info_0_24;
#line 1014 "recompilation.usage.m"
    else
#line 1015 "recompilation.usage.m"
      {
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstances0_19;
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIds1_21;
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIds_22;
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstances_23;
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_26_26;
#line 1015 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_27_27;
#line 1425 "recompilation.usage.m"
        MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_26_26;
#line 1282 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_STATE_VARIABLE_Info_27_27;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_35_35;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_36_36;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_37_37;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_38_38;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_39_39;
#line 1017 "recompilation.usage.m"
        MR_Word recompilation__usage__V_40_40;
#line 1020 "recompilation.usage.m"
        MR_Word recompilation__usage__ClassIdsPrime_20;
#line 1018 "recompilation.usage.m"
        MR_Box recompilation__usage__conv4_ClassIdsPrime_20;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_41_41;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_42_42;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_43_43;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_45_45;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_46_46;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_47_47;
#line 1026 "recompilation.usage.m"
        MR_Word recompilation__usage__V_44_44;

#line 1425 "recompilation.usage.m"
        {
#line 1425 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[32], recompilation__usage__Constraints_13, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_24)), &recompilation__usage__conv1_STATE_VARIABLE_Info_26_26);
        }
#line 1425 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_26_26 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_26_26);
#line 1282 "recompilation.usage.m"
        {
#line 1282 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[33], recompilation__usage__ArgTypes_9, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_26_26)), &recompilation__usage__conv3_STATE_VARIABLE_Info_27_27);
        }
#line 1282 "recompilation.usage.m"
        recompilation__usage__STATE_VARIABLE_Info_27_27 = ((MR_Word) recompilation__usage__conv3_STATE_VARIABLE_Info_27_27);
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__ModuleInstances0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 5)));
#line 1017 "recompilation.usage.m"
        recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 6)));
#line 1018 "recompilation.usage.m"
        {
#line 1018 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__ModuleInstances0_19, ((MR_Box) (recompilation__usage__InstanceModuleName_8)), &recompilation__usage__conv4_ClassIdsPrime_20);
        }
#line 1018 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1018 "recompilation.usage.m"
          {
#line 1018 "recompilation.usage.m"
            recompilation__usage__ClassIdsPrime_20 = ((MR_Word) recompilation__usage__conv4_ClassIdsPrime_20);
#line 1018 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1018 "recompilation.usage.m"
          }
#line 1020 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1019 "recompilation.usage.m"
          recompilation__usage__ClassIds1_21 = recompilation__usage__ClassIdsPrime_20;
#line 1020 "recompilation.usage.m"
        else
#line 1021 "recompilation.usage.m"
          {
#line 1021 "recompilation.usage.m"
            {
#line 1021 "recompilation.usage.m"
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, &recompilation__usage__ClassIds1_21);
            }
#line 1021 "recompilation.usage.m"
          }
#line 1023 "recompilation.usage.m"
        {
#line 1023 "recompilation.usage.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, ((MR_Box) (recompilation__usage__ClassId_5)), recompilation__usage__ClassIds1_21, &recompilation__usage__ClassIds_22);
        }
#line 1024 "recompilation.usage.m"
        {
#line 1024 "recompilation.usage.m"
          mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[1], ((MR_Box) (recompilation__usage__InstanceModuleName_8)), ((MR_Box) (recompilation__usage__ClassIds_22)), recompilation__usage__ModuleInstances0_19, &recompilation__usage__ModuleInstances_23);
        }
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 5)));
#line 1026 "recompilation.usage.m"
        recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_27_27, (MR_Integer) 6)));
#line 1026 "recompilation.usage.m"
        {
#line 1026 "recompilation.usage.m"
          MR_Word base;
#line 1026 "recompilation.usage.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_25 = base;
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_41_41));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_42_42));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_43_43));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__ModuleInstances_23));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_45_45));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__V_46_46));
#line 1026 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_47_47));
#line 1026 "recompilation.usage.m"
        }
#line 1015 "recompilation.usage.m"
      }
#line 1004 "recompilation.usage.m"
  }
#line 1001 "recompilation.usage.m"
}

#line 995 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_2(
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 995 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 995 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 995 "recompilation.usage.m"
{
#line 995 "recompilation.usage.m"
  {
#line 995 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 995 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_STATE_VARIABLE_Info_25;

#line 995 "recompilation.usage.m"
    {
#line 995 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv3_STATE_VARIABLE_Info_25);
    }
#line 995 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv3_STATE_VARIABLE_Info_25));
#line 995 "recompilation.usage.m"
  }
#line 995 "recompilation.usage.m"
}

#line 1517 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0_1(
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 1517 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 1517 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 1517 "recompilation.usage.m"
{
#line 1517 "recompilation.usage.m"
  {
#line 1517 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 1517 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_9;

#line 1517 "recompilation.usage.m"
    {
#line 1517 "recompilation.usage.m"
      recompilation__usage__record_expanded_items_used_by_item_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_9);
    }
#line 1517 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_9));
#line 1517 "recompilation.usage.m"
  }
#line 1517 "recompilation.usage.m"
}

#line 986 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_instances_4_p_0(
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__ClassId_5,
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__InstanceDefns_6,
#line 986 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_11,
#line 986 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_12)
#line 986 "recompilation.usage.m"
{
#line 990 "recompilation.usage.m"
  {
#line 990 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 990 "recompilation.usage.m"
    MR_Word recompilation__usage__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_5, (MR_Integer) 0)));
#line 990 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_5, (MR_Integer) 1)));
#line 990 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassIdItem_10;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_24;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 1477 "recompilation.usage.m"
    MR_Word recompilation__usage__V_35_35;
#line 1478 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_26_26;
#line 1478 "recompilation.usage.m"
    MR_String recompilation__usage__V_25_25;
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

#line 992 "recompilation.usage.m"
    {
#line 992 "recompilation.usage.m"
      recompilation__usage__ClassIdItem_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, 0) = ((MR_Box) (recompilation__usage__Name_8));
#line 992 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, 1) = ((MR_Box) (recompilation__usage__Arity_9));
#line 992 "recompilation.usage.m"
    }
#line 1478 "recompilation.usage.m"
    recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, (MR_Integer) 0)));
#line 1478 "recompilation.usage.m"
    recompilation__usage__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassIdItem_10, (MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1478 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 1478 "recompilation.usage.m"
      {
#line 1478 "recompilation.usage.m"
        recompilation__usage__ModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__V_27_27, (MR_Integer) 0)));
#line 1478 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__usage__V_27_27, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1479 "recompilation.usage.m"
        recompilation__usage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1479 "recompilation.usage.m"
        {
#line 1479 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__V_28_28, &recompilation__usage__V_35_35);
        }
#line 1479 "recompilation.usage.m"
        {
#line 1479 "recompilation.usage.m"
          recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__ModuleName_24, recompilation__usage__V_35_35);
        }
#line 1478 "recompilation.usage.m"
      }
#line 997 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 994 "recompilation.usage.m"
      {
#line 994 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_14_14;
#line 994 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15;
#line 994 "recompilation.usage.m"
        MR_Word recompilation__usage__Dependencies_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 1513 "recompilation.usage.m"
        MR_Word recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 1519 "recompilation.usage.m"
        MR_Word recompilation__usage__EquivTypes_43;
#line 1515 "recompilation.usage.m"
        MR_Word recompilation__usage__V_44_44;
#line 1515 "recompilation.usage.m"
        MR_Box recompilation__usage__conv0_EquivTypes_43;
#line 995 "recompilation.usage.m"
        MR_Box recompilation__usage__conv4_STATE_VARIABLE_Info_12;

#line 1515 "recompilation.usage.m"
        {
#line 1515 "recompilation.usage.m"
          recompilation__usage__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_44_44, 0) = ((MR_Box) ((MR_Integer) 4));
#line 1515 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_44_44, 1) = ((MR_Box) (recompilation__usage__ClassIdItem_10));
#line 1515 "recompilation.usage.m"
        }
#line 1515 "recompilation.usage.m"
        {
#line 1515 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation__usage_scalar_common_2[10], recompilation__usage__Dependencies_42, ((MR_Box) (recompilation__usage__V_44_44)), &recompilation__usage__conv0_EquivTypes_43);
        }
#line 1515 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1515 "recompilation.usage.m"
          {
#line 1515 "recompilation.usage.m"
            recompilation__usage__EquivTypes_43 = ((MR_Word) recompilation__usage__conv0_EquivTypes_43);
#line 1515 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 1515 "recompilation.usage.m"
          }
#line 1519 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 1517 "recompilation.usage.m"
          {
#line 1517 "recompilation.usage.m"
            MR_Word recompilation__usage__TypeCtorInfo_27_59 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 1517 "recompilation.usage.m"
            MR_Word recompilation__usage__V_46_46;
#line 1517 "recompilation.usage.m"
            MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_14_14;

#line 1518 "recompilation.usage.m"
            {
#line 1518 "recompilation.usage.m"
              recompilation__usage__V_46_46 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_27_59, recompilation__usage__EquivTypes_43);
            }
#line 1517 "recompilation.usage.m"
            {
#line 1517 "recompilation.usage.m"
              mercury__list__foldl_4_p_0(recompilation__usage__TypeCtorInfo_27_59, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[31], recompilation__usage__V_46_46, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_11)), &recompilation__usage__conv2_STATE_VARIABLE_Info_14_14);
            }
#line 1517 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_14_14 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_14_14);
#line 1517 "recompilation.usage.m"
          }
#line 1519 "recompilation.usage.m"
        else
#line 1519 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_14_14 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 995 "recompilation.usage.m"
        {
#line 995 "recompilation.usage.m"
          recompilation__usage__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 995 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[2]));
#line 995 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_instances_4_p_0_2));
#line 995 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 995 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_15_15, 3) = ((MR_Box) (recompilation__usage__ClassIdItem_10));
#line 995 "recompilation.usage.m"
        }
#line 995 "recompilation.usage.m"
        {
#line 995 "recompilation.usage.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_15_15, recompilation__usage__InstanceDefns_6, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_14_14)), &recompilation__usage__conv4_STATE_VARIABLE_Info_12);
        }
#line 995 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_12 = ((MR_Word) recompilation__usage__conv4_STATE_VARIABLE_Info_12);
#line 994 "recompilation.usage.m"
      }
#line 997 "recompilation.usage.m"
    else
#line 997 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_12 = recompilation__usage__STATE_VARIABLE_Info_0_11;
#line 990 "recompilation.usage.m"
  }
#line 986 "recompilation.usage.m"
}

#line 968 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_2(
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 968 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 968 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 968 "recompilation.usage.m"
{
#line 968 "recompilation.usage.m"
  {
#line 968 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 968 "recompilation.usage.m"
    MR_Word recompilation__usage__conv6_STATE_VARIABLE_Info_25;

#line 968 "recompilation.usage.m"
    {
#line 968 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv6_STATE_VARIABLE_Info_25);
    }
#line 968 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv6_STATE_VARIABLE_Info_25));
#line 968 "recompilation.usage.m"
  }
#line 968 "recompilation.usage.m"
}

#line 964 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0_1(
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 964 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 964 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 964 "recompilation.usage.m"
{
#line 964 "recompilation.usage.m"
  {
#line 964 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 964 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_STATE_VARIABLE_Info_3;

#line 964 "recompilation.usage.m"
    {
#line 964 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_class_method_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv3_STATE_VARIABLE_Info_3);
    }
#line 964 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv3_STATE_VARIABLE_Info_3));
#line 964 "recompilation.usage.m"
  }
#line 964 "recompilation.usage.m"
}

#line 914 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_items_used_by_item_4_p_0(
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1,
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2,
#line 914 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_3,
#line 914 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_4)
#line 914 "recompilation.usage.m"
{
#line 917 "recompilation.usage.m"
  {
#line 917 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 917 "recompilation.usage.m"
#line 917 "recompilation.usage.m"
    switch (recompilation__usage__HeadVar__1_1) {
#line 917 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 917 "recompilation.usage.m"
      case (MR_Integer) 9:
#line 981 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 7:
#line 975 "recompilation.usage.m"
        {
#line 976 "recompilation.usage.m"
          {
#line 976 "recompilation.usage.m"
            recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 1, recompilation__usage__HeadVar__2_2, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 976 "recompilation.usage.m"
            return;
          }
#line 975 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 5:
#line 977 "recompilation.usage.m"
        {
#line 978 "recompilation.usage.m"
          {
#line 978 "recompilation.usage.m"
            mercury__require__unexpected_3_p_0((MR_String) "recompilation.usage", (MR_String) "predicate \140recompilation.usage.find_items_used_by_item\'/4", (MR_String) "functor");
#line 978 "recompilation.usage.m"
            return;
          }
#line 977 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 3:
#line 944 "recompilation.usage.m"
        {
#line 944 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 944 "recompilation.usage.m"
          MR_Word recompilation__usage__Insts_39;
#line 944 "recompilation.usage.m"
          MR_Word recompilation__usage__UserInstTable_40;
#line 944 "recompilation.usage.m"
          MR_Word recompilation__usage__InstId_41;
#line 944 "recompilation.usage.m"
          MR_Word recompilation__usage__InstDefn_42;
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 945 "recompilation.usage.m"
          MR_Word recompilation__usage__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 949 "recompilation.usage.m"
          MR_Box recompilation__usage__conv0_InstDefn_42;

#line 946 "recompilation.usage.m"
          {
#line 946 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_inst_table_2_p_0(recompilation__usage__ModuleInfo_38, &recompilation__usage__Insts_39);
          }
#line 947 "recompilation.usage.m"
          {
#line 947 "recompilation.usage.m"
            hlds__hlds_data__inst_table_get_user_insts_2_p_0(recompilation__usage__Insts_39, &recompilation__usage__UserInstTable_40);
          }
#line 948 "recompilation.usage.m"
          {
#line 948 "recompilation.usage.m"
            recompilation__usage__InstId_41 = recompilation__item_name_to_inst_id_1_f_0(recompilation__usage__HeadVar__2_2);
          }
#line 949 "recompilation.usage.m"
          {
#line 949 "recompilation.usage.m"
            mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, recompilation__usage__UserInstTable_40, ((MR_Box) (recompilation__usage__InstId_41)), &recompilation__usage__conv0_InstDefn_42);
          }
#line 949 "recompilation.usage.m"
          recompilation__usage__InstDefn_42 = ((MR_Word) recompilation__usage__conv0_InstDefn_42);
#line 950 "recompilation.usage.m"
          {
#line 950 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_inst_defn_3_p_0(recompilation__usage__InstDefn_42, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 950 "recompilation.usage.m"
            return;
          }
#line 944 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 2:
#line 937 "recompilation.usage.m"
        {
#line 937 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 937 "recompilation.usage.m"
          MR_Word recompilation__usage__Modes_29;
#line 937 "recompilation.usage.m"
          MR_Word recompilation__usage__ModeDefns_30;
#line 937 "recompilation.usage.m"
          MR_Word recompilation__usage__ModeId_31;
#line 937 "recompilation.usage.m"
          MR_Word recompilation__usage__ModeDefn_32;
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 938 "recompilation.usage.m"
          MR_Word recompilation__usage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 942 "recompilation.usage.m"
          MR_Box recompilation__usage__conv1_ModeDefn_32;

#line 939 "recompilation.usage.m"
          {
#line 939 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_mode_table_2_p_0(recompilation__usage__ModuleInfo_28, &recompilation__usage__Modes_29);
          }
#line 940 "recompilation.usage.m"
          {
#line 940 "recompilation.usage.m"
            hlds__hlds_data__mode_table_get_mode_defns_2_p_0(recompilation__usage__Modes_29, &recompilation__usage__ModeDefns_30);
          }
#line 941 "recompilation.usage.m"
          {
#line 941 "recompilation.usage.m"
            recompilation__usage__ModeId_31 = recompilation__item_name_to_mode_id_1_f_0(recompilation__usage__HeadVar__2_2);
          }
#line 942 "recompilation.usage.m"
          {
#line 942 "recompilation.usage.m"
            mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, recompilation__usage__ModeDefns_30, ((MR_Box) (recompilation__usage__ModeId_31)), &recompilation__usage__conv1_ModeDefn_32);
          }
#line 942 "recompilation.usage.m"
          recompilation__usage__ModeDefn_32 = ((MR_Word) recompilation__usage__conv1_ModeDefn_32);
#line 943 "recompilation.usage.m"
          {
#line 943 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_mode_defn_3_p_0(recompilation__usage__ModeDefn_32, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 943 "recompilation.usage.m"
            return;
          }
#line 937 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 8:
#line 979 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 6:
#line 973 "recompilation.usage.m"
        {
#line 974 "recompilation.usage.m"
          {
#line 974 "recompilation.usage.m"
            recompilation__usage__record_used_pred_or_func_4_p_0((MR_Integer) 0, recompilation__usage__HeadVar__2_2, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 974 "recompilation.usage.m"
            return;
          }
#line 973 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 917 "recompilation.usage.m"
        {
#line 917 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 917 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeTable_8;
#line 917 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtor_9;
#line 917 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeDefn_10;
#line 917 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeBody_11;
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 918 "recompilation.usage.m"
          MR_Word recompilation__usage__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 927 "recompilation.usage.m"
          MR_Word recompilation__usage__Type_12;

#line 919 "recompilation.usage.m"
          {
#line 919 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(recompilation__usage__ModuleInfo_7, &recompilation__usage__TypeTable_8);
          }
#line 920 "recompilation.usage.m"
          {
#line 920 "recompilation.usage.m"
            recompilation__usage__TypeCtor_9 = recompilation__item_name_to_type_ctor_1_f_0(recompilation__usage__HeadVar__2_2);
          }
#line 921 "recompilation.usage.m"
          {
#line 921 "recompilation.usage.m"
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(recompilation__usage__TypeTable_8, recompilation__usage__TypeCtor_9, &recompilation__usage__TypeDefn_10);
          }
#line 922 "recompilation.usage.m"
          {
#line 922 "recompilation.usage.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(recompilation__usage__TypeDefn_10, &recompilation__usage__TypeBody_11);
          }
#line 923 "recompilation.usage.m"
          recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__TypeBody_11)) == (MR_mktag((MR_Integer) 2)));
#line 923 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 923 "recompilation.usage.m"
            {
#line 923 "recompilation.usage.m"
              recompilation__usage__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__TypeBody_11, (MR_Integer) 0)));
#line 926 "recompilation.usage.m"
              {
#line 926 "recompilation.usage.m"
                recompilation__usage__find_items_used_by_type_3_p_0(recompilation__usage__Type_12, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 926 "recompilation.usage.m"
                return;
              }
#line 923 "recompilation.usage.m"
            }
#line 923 "recompilation.usage.m"
          else
#line 927 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_0_3;
#line 917 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 930 "recompilation.usage.m"
        {
#line 930 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 930 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeTable_19;
#line 930 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtor_20;
#line 930 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeDefn_21;
#line 930 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeBody_22;
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 931 "recompilation.usage.m"
          MR_Word recompilation__usage__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));

#line 932 "recompilation.usage.m"
          {
#line 932 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(recompilation__usage__ModuleInfo_18, &recompilation__usage__TypeTable_19);
          }
#line 933 "recompilation.usage.m"
          {
#line 933 "recompilation.usage.m"
            recompilation__usage__TypeCtor_20 = recompilation__item_name_to_type_ctor_1_f_0(recompilation__usage__HeadVar__2_2);
          }
#line 934 "recompilation.usage.m"
          {
#line 934 "recompilation.usage.m"
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(recompilation__usage__TypeTable_19, recompilation__usage__TypeCtor_20, &recompilation__usage__TypeDefn_21);
          }
#line 935 "recompilation.usage.m"
          {
#line 935 "recompilation.usage.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(recompilation__usage__TypeDefn_21, &recompilation__usage__TypeBody_22);
          }
#line 936 "recompilation.usage.m"
          {
#line 936 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_type_body_3_p_0(recompilation__usage__TypeBody_22, recompilation__usage__STATE_VARIABLE_Info_0_3, recompilation__usage__STATE_VARIABLE_Info_4);
#line 936 "recompilation.usage.m"
            return;
          }
#line 930 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
      case (MR_Integer) 4:
#line 951 "recompilation.usage.m"
        {
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeCtorInfo_145_145;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__ClassName_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 951 "recompilation.usage.m"
          MR_Integer recompilation__usage__ClassArity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__ClassId_50;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleInfo_51;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__Classes_52;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__ClassDefn_53;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__Constraints_54;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__ClassInterface_55;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__Instances_57;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__STATE_VARIABLE_Info_61_61;
#line 951 "recompilation.usage.m"
          MR_Word recompilation__usage__STATE_VARIABLE_Info_63_63;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_117_117;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_118_118;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_119_119;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_120_120;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_121_121;
#line 954 "recompilation.usage.m"
          MR_Word recompilation__usage__V_122_122;
#line 956 "recompilation.usage.m"
          MR_Box recompilation__usage__conv2_ClassDefn_53;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_123_123;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_124_124;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_125_125;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_126_126;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_127_127;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_129_129;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_130_130;
#line 957 "recompilation.usage.m"
          MR_Word recompilation__usage__V_131_131;
#line 970 "recompilation.usage.m"
          MR_Word recompilation__usage__InstanceDefns_58;
#line 967 "recompilation.usage.m"
          MR_Box recompilation__usage__conv5_InstanceDefns_58;

#line 953 "recompilation.usage.m"
          {
#line 953 "recompilation.usage.m"
            recompilation__usage__ClassId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_50, 0) = ((MR_Box) (recompilation__usage__ClassName_48));
#line 953 "recompilation.usage.m"
            MR_hl_field(MR_mktag(0), recompilation__usage__ClassId_50, 1) = ((MR_Box) (recompilation__usage__ClassArity_49));
#line 953 "recompilation.usage.m"
          }
#line 954 "recompilation.usage.m"
          recompilation__usage__ModuleInfo_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));
#line 954 "recompilation.usage.m"
          recompilation__usage__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
#line 955 "recompilation.usage.m"
          {
#line 955 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_class_table_2_p_0(recompilation__usage__ModuleInfo_51, &recompilation__usage__Classes_52);
          }
#line 14444 "recompilation.usage.c"
          recompilation__usage__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 956 "recompilation.usage.m"
          {
#line 956 "recompilation.usage.m"
            mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_145_145, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, recompilation__usage__Classes_52, ((MR_Box) (recompilation__usage__ClassId_50)), &recompilation__usage__conv2_ClassDefn_53);
          }
#line 956 "recompilation.usage.m"
          recompilation__usage__ClassDefn_53 = ((MR_Word) recompilation__usage__conv2_ClassDefn_53);
#line 957 "recompilation.usage.m"
          recompilation__usage__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 0)));
#line 957 "recompilation.usage.m"
          recompilation__usage__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 1)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 2)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 3)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 4)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 5)));
#line 957 "recompilation.usage.m"
          recompilation__usage__ClassInterface_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 6)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 7)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 8)));
#line 957 "recompilation.usage.m"
          recompilation__usage__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ClassDefn_53, (MR_Integer) 9)));
#line 959 "recompilation.usage.m"
          {
#line 959 "recompilation.usage.m"
            recompilation__usage__find_items_used_by_class_constraints_3_p_0(recompilation__usage__Constraints_54, recompilation__usage__STATE_VARIABLE_Info_0_3, &recompilation__usage__STATE_VARIABLE_Info_61_61);
          }
#line 962 "recompilation.usage.m"
          if ((recompilation__usage__ClassInterface_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "recompilation.usage.m"
            recompilation__usage__STATE_VARIABLE_Info_63_63 = recompilation__usage__STATE_VARIABLE_Info_61_61;
#line 962 "recompilation.usage.m"
          else
#line 963 "recompilation.usage.m"
            {
#line 963 "recompilation.usage.m"
              MR_Word recompilation__usage__Methods_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ClassInterface_55, (MR_Integer) 0)));
#line 964 "recompilation.usage.m"
              MR_Box recompilation__usage__conv4_STATE_VARIABLE_Info_63_63;

#line 964 "recompilation.usage.m"
              {
#line 964 "recompilation.usage.m"
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[30], recompilation__usage__Methods_56, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_61_61)), &recompilation__usage__conv4_STATE_VARIABLE_Info_63_63);
              }
#line 964 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_63_63 = ((MR_Word) recompilation__usage__conv4_STATE_VARIABLE_Info_63_63);
#line 963 "recompilation.usage.m"
            }
#line 966 "recompilation.usage.m"
          {
#line 966 "recompilation.usage.m"
            hlds__hlds_module__module_info_get_instance_table_2_p_0(recompilation__usage__ModuleInfo_51, &recompilation__usage__Instances_57);
          }
#line 967 "recompilation.usage.m"
          {
#line 967 "recompilation.usage.m"
            recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_145_145, (MR_Word) &recompilation__usage_scalar_common_2[6], recompilation__usage__Instances_57, ((MR_Box) (recompilation__usage__ClassId_50)), &recompilation__usage__conv5_InstanceDefns_58);
          }
#line 967 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 967 "recompilation.usage.m"
            {
#line 967 "recompilation.usage.m"
              recompilation__usage__InstanceDefns_58 = ((MR_Word) recompilation__usage__conv5_InstanceDefns_58);
#line 967 "recompilation.usage.m"
              recompilation__usage__succeeded = MR_TRUE;
#line 967 "recompilation.usage.m"
            }
#line 970 "recompilation.usage.m"
          if (recompilation__usage__succeeded)
#line 968 "recompilation.usage.m"
            {
#line 968 "recompilation.usage.m"
              MR_Word recompilation__usage__V_64_64;
#line 968 "recompilation.usage.m"
              MR_Box recompilation__usage__conv7_STATE_VARIABLE_Info_4;

#line 968 "recompilation.usage.m"
              {
#line 968 "recompilation.usage.m"
                recompilation__usage__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 968 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_64_64, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[2]));
#line 968 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_64_64, 1) = ((MR_Box) (recompilation__usage__find_items_used_by_item_4_p_0_2));
#line 968 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 968 "recompilation.usage.m"
                MR_hl_field(MR_mktag(0), recompilation__usage__V_64_64, 3) = ((MR_Box) (recompilation__usage__HeadVar__2_2));
#line 968 "recompilation.usage.m"
              }
#line 968 "recompilation.usage.m"
              {
#line 968 "recompilation.usage.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_64_64, recompilation__usage__InstanceDefns_58, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_63_63)), &recompilation__usage__conv7_STATE_VARIABLE_Info_4);
              }
#line 968 "recompilation.usage.m"
              *recompilation__usage__STATE_VARIABLE_Info_4 = ((MR_Word) recompilation__usage__conv7_STATE_VARIABLE_Info_4);
#line 968 "recompilation.usage.m"
            }
#line 970 "recompilation.usage.m"
          else
#line 970 "recompilation.usage.m"
            *recompilation__usage__STATE_VARIABLE_Info_4 = recompilation__usage__STATE_VARIABLE_Info_63_63;
#line 951 "recompilation.usage.m"
        }
#line 917 "recompilation.usage.m"
        break;
#line 917 "recompilation.usage.m"
    }
#line 917 "recompilation.usage.m"
  }
#line 914 "recompilation.usage.m"
}

#line 788 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__get_pred_or_func_ctors_4_f_0(
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage___SymName_7,
#line 788 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_8,
#line 788 "recompilation.usage.m"
  MR_Word recompilation__usage__PredId_9,
#line 788 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedCtor_10)
#line 788 "recompilation.usage.m"
{
#line 791 "recompilation.usage.m"
  {
#line 791 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 791 "recompilation.usage.m"
    {
#line 791 "recompilation.usage.m"
      return recompilation__usage__succeeded = recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_101_100_95_111_114_95_102_117_110_99_95_99_116_111_114_115_95_95_91_50_93_95_48_4_f_0(recompilation__usage__ModuleInfo_6, recompilation__usage__Arity_8, recompilation__usage__PredId_9, recompilation__usage__ResolvedCtor_10);
    }
#line 791 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 791 "recompilation.usage.m"
  }
#line 788 "recompilation.usage.m"
}

#line 769 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_3(
#line 769 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 769 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 769 "recompilation.usage.m"
{
#line 769 "recompilation.usage.m"
  {
#line 769 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 769 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 769 "recompilation.usage.m"
    MR_Word recompilation__usage__conv3_HeadVar__2_48;

#line 769 "recompilation.usage.m"
    {
#line 769 "recompilation.usage.m"
      recompilation__usage__conv3_HeadVar__2_48 = recompilation__usage__IntroducedFrom__func__find_matching_functors__769__1_1_f_0(((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 769 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv3_HeadVar__2_48));
#line 769 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 769 "recompilation.usage.m"
  }
#line 769 "recompilation.usage.m"
}

#line 759 "recompilation.usage.m"
static MR_bool MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_2(
#line 759 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 759 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 759 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_2)
#line 759 "recompilation.usage.m"
{
#line 759 "recompilation.usage.m"
  {
#line 759 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 759 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 759 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_ResolvedCtor_10;

#line 759 "recompilation.usage.m"
    {
#line 759 "recompilation.usage.m"
      recompilation__usage__succeeded = recompilation__usage__get_pred_or_func_ctors_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), &recompilation__usage__conv1_ResolvedCtor_10);
    }
#line 759 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 759 "recompilation.usage.m"
      {
#line 759 "recompilation.usage.m"
        *recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv1_ResolvedCtor_10));
#line 759 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 759 "recompilation.usage.m"
      }
#line 759 "recompilation.usage.m"
    return recompilation__usage__succeeded;
#line 759 "recompilation.usage.m"
  }
#line 759 "recompilation.usage.m"
}

#line 746 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__find_matching_functors_4_p_0_1(
#line 746 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 746 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 746 "recompilation.usage.m"
{
#line 746 "recompilation.usage.m"
  {
#line 746 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 746 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 746 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_HeadVar__2_42;

#line 746 "recompilation.usage.m"
    {
#line 746 "recompilation.usage.m"
      recompilation__usage__conv0_HeadVar__2_42 = recompilation__usage__IntroducedFrom__func__find_matching_functors__746__1_1_f_0(((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 746 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__2_42));
#line 746 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 746 "recompilation.usage.m"
  }
#line 746 "recompilation.usage.m"
}

#line 724 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_matching_functors_4_p_0(
#line 724 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_5,
#line 724 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_6,
#line 724 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_7,
#line 724 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedConstructors_8)
#line 724 "recompilation.usage.m"
{
#line 727 "recompilation.usage.m"
  {
#line 727 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_75_75;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__Ctors_9;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsId_10;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns1_12;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns_16;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingConstructors_17;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__PredicateTable_21;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__PredIds_22;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingPreds_23;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingFields_28;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 727 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 733 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns0_11;
#line 742 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsDefns2_15;
#line 737 "recompilation.usage.m"
    MR_Word recompilation__usage__SymNameMinusNew_13;
#line 737 "recompilation.usage.m"
    MR_Word recompilation__usage__ConsIdMinusNew_14;
#line 737 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39;
#line 782 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldDefns_27;
#line 765 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_79_79;
#line 765 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_80_80;
#line 765 "recompilation.usage.m"
    MR_Word recompilation__usage__FieldName_25;
#line 765 "recompilation.usage.m"
    MR_Word recompilation__usage__CtorFields_26;
#line 765 "recompilation.usage.m"
    MR_Integer recompilation__usage__V_82_82;
#line 764 "recompilation.usage.m"
    MR_Word recompilation__usage__V_24_24;
#line 767 "recompilation.usage.m"
    MR_Box recompilation__usage__conv2_FieldDefns_27;

#line 729 "recompilation.usage.m"
    {
#line 729 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__Ctors_9);
    }
#line 730 "recompilation.usage.m"
    {
#line 730 "recompilation.usage.m"
      recompilation__usage__V_38_38 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 730 "recompilation.usage.m"
    {
#line 730 "recompilation.usage.m"
      recompilation__usage__ConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 730 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 730 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 1) = ((MR_Box) (recompilation__usage__SymName_6));
#line 730 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 2) = ((MR_Box) (recompilation__usage__Arity_7));
#line 730 "recompilation.usage.m"
      MR_hl_field(MR_mktag(3), recompilation__usage__ConsId_10, 3) = ((MR_Box) (recompilation__usage__V_38_38));
#line 730 "recompilation.usage.m"
    }
#line 731 "recompilation.usage.m"
    {
#line 731 "recompilation.usage.m"
      recompilation__usage__succeeded = hlds__hlds_data__search_cons_table_3_p_0(recompilation__usage__Ctors_9, recompilation__usage__ConsId_10, &recompilation__usage__ConsDefns0_11);
    }
#line 733 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 732 "recompilation.usage.m"
      recompilation__usage__ConsDefns1_12 = recompilation__usage__ConsDefns0_11;
#line 733 "recompilation.usage.m"
    else
#line 734 "recompilation.usage.m"
      recompilation__usage__ConsDefns1_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "recompilation.usage.m"
    {
#line 737 "recompilation.usage.m"
      recompilation__usage__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(recompilation__usage__SymName_6, &recompilation__usage__SymNameMinusNew_13);
    }
#line 737 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 737 "recompilation.usage.m"
      {
#line 738 "recompilation.usage.m"
        {
#line 738 "recompilation.usage.m"
          recompilation__usage__V_39_39 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        }
#line 738 "recompilation.usage.m"
        {
#line 738 "recompilation.usage.m"
          recompilation__usage__ConsIdMinusNew_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 738 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 738 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 1) = ((MR_Box) (recompilation__usage__SymNameMinusNew_13));
#line 738 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 2) = ((MR_Box) (recompilation__usage__Arity_7));
#line 738 "recompilation.usage.m"
          MR_hl_field(MR_mktag(3), recompilation__usage__ConsIdMinusNew_14, 3) = ((MR_Box) (recompilation__usage__V_39_39));
#line 738 "recompilation.usage.m"
        }
#line 739 "recompilation.usage.m"
        {
#line 739 "recompilation.usage.m"
          recompilation__usage__succeeded = hlds__hlds_data__search_cons_table_3_p_0(recompilation__usage__Ctors_9, recompilation__usage__ConsIdMinusNew_14, &recompilation__usage__ConsDefns2_15);
        }
#line 737 "recompilation.usage.m"
      }
#line 742 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 741 "recompilation.usage.m"
      {
#line 741 "recompilation.usage.m"
        {
#line 741 "recompilation.usage.m"
          recompilation__usage__ConsDefns_16 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, recompilation__usage__ConsDefns1_12, recompilation__usage__ConsDefns2_15);
        }
#line 741 "recompilation.usage.m"
      }
#line 742 "recompilation.usage.m"
    else
#line 743 "recompilation.usage.m"
      recompilation__usage__ConsDefns_16 = recompilation__usage__ConsDefns1_12;
#line 14868 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_75_75 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 746 "recompilation.usage.m"
    {
#line 746 "recompilation.usage.m"
      recompilation__usage__MatchingConstructors_17 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, recompilation__usage__TypeCtorInfo_75_75, (MR_Word) &recompilation__usage_scalar_common_1[28], recompilation__usage__ConsDefns_16);
    }
#line 755 "recompilation.usage.m"
    {
#line 755 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__PredicateTable_21);
    }
#line 756 "recompilation.usage.m"
    {
#line 756 "recompilation.usage.m"
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(recompilation__usage__PredicateTable_21, (MR_Integer) 1, recompilation__usage__SymName_6, &recompilation__usage__PredIds_22);
    }
#line 759 "recompilation.usage.m"
    {
#line 759 "recompilation.usage.m"
      recompilation__usage__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[4]));
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 1) = ((MR_Box) (recompilation__usage__find_matching_functors_4_p_0_2));
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 3) = ((MR_Box) (recompilation__usage__ModuleInfo_5));
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 4) = ((MR_Box) (recompilation__usage__SymName_6));
#line 759 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_45_45, 5) = ((MR_Box) (recompilation__usage__Arity_7));
#line 759 "recompilation.usage.m"
    }
#line 758 "recompilation.usage.m"
    {
#line 758 "recompilation.usage.m"
      recompilation__usage__MatchingPreds_23 = mercury__list__filter_map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_45_45, recompilation__usage__PredIds_22);
    }
#line 764 "recompilation.usage.m"
    {
#line 764 "recompilation.usage.m"
      recompilation__usage__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(recompilation__usage__ModuleInfo_5, recompilation__usage__SymName_6, &recompilation__usage__V_82_82, &recompilation__usage__V_24_24, &recompilation__usage__FieldName_25);
    }
#line 765 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 765 "recompilation.usage.m"
      {
#line 764 "recompilation.usage.m"
        recompilation__usage__succeeded = (recompilation__usage__Arity_7 == recompilation__usage__V_82_82);
#line 765 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 765 "recompilation.usage.m"
          {
#line 766 "recompilation.usage.m"
            {
#line 766 "recompilation.usage.m"
              hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(recompilation__usage__ModuleInfo_5, &recompilation__usage__CtorFields_26);
            }
#line 14928 "recompilation.usage.c"
            recompilation__usage__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14930 "recompilation.usage.c"
            recompilation__usage__TypeInfo_80_80 = (MR_Word) &recompilation__usage_scalar_common_2[7];
#line 767 "recompilation.usage.m"
            {
#line 767 "recompilation.usage.m"
              recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_79_79, recompilation__usage__TypeInfo_80_80, recompilation__usage__CtorFields_26, ((MR_Box) (recompilation__usage__FieldName_25)), &recompilation__usage__conv2_FieldDefns_27);
            }
#line 767 "recompilation.usage.m"
            if (recompilation__usage__succeeded)
#line 767 "recompilation.usage.m"
              {
#line 767 "recompilation.usage.m"
                recompilation__usage__FieldDefns_27 = ((MR_Word) recompilation__usage__conv2_FieldDefns_27);
#line 767 "recompilation.usage.m"
                recompilation__usage__succeeded = MR_TRUE;
#line 767 "recompilation.usage.m"
              }
#line 765 "recompilation.usage.m"
          }
#line 765 "recompilation.usage.m"
      }
#line 782 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 769 "recompilation.usage.m"
      {
#line 769 "recompilation.usage.m"
        {
#line 769 "recompilation.usage.m"
          recompilation__usage__MatchingFields_28 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, recompilation__usage__TypeCtorInfo_75_75, (MR_Word) &recompilation__usage_scalar_common_1[29], recompilation__usage__FieldDefns_27);
        }
#line 769 "recompilation.usage.m"
      }
#line 782 "recompilation.usage.m"
    else
#line 783 "recompilation.usage.m"
      recompilation__usage__MatchingFields_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "recompilation.usage.m"
    {
#line 786 "recompilation.usage.m"
      recompilation__usage__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_57_57, 0) = ((MR_Box) (recompilation__usage__MatchingFields_28));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "recompilation.usage.m"
    }
#line 786 "recompilation.usage.m"
    {
#line 786 "recompilation.usage.m"
      recompilation__usage__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, 0) = ((MR_Box) (recompilation__usage__MatchingPreds_23));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_56_56, 1) = ((MR_Box) (recompilation__usage__V_57_57));
#line 786 "recompilation.usage.m"
    }
#line 786 "recompilation.usage.m"
    {
#line 786 "recompilation.usage.m"
      recompilation__usage__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_55_55, 0) = ((MR_Box) (recompilation__usage__MatchingConstructors_17));
#line 786 "recompilation.usage.m"
      MR_hl_field(MR_mktag(1), recompilation__usage__V_55_55, 1) = ((MR_Box) (recompilation__usage__V_56_56));
#line 786 "recompilation.usage.m"
    }
#line 785 "recompilation.usage.m"
    {
#line 785 "recompilation.usage.m"
      recompilation__usage__V_54_54 = mercury__list__condense_1_f_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_55_55);
    }
#line 785 "recompilation.usage.m"
    {
#line 785 "recompilation.usage.m"
      *recompilation__usage__ResolvedConstructors_8 = mercury__set__list_to_set_1_f_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__V_54_54);
    }
#line 727 "recompilation.usage.m"
  }
#line 724 "recompilation.usage.m"
}

#line 715 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0_1(
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 715 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 715 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 715 "recompilation.usage.m"
{
#line 715 "recompilation.usage.m"
  {
#line 715 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 715 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_5;

#line 715 "recompilation.usage.m"
    {
#line 715 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functor_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_Info_5);
    }
#line 715 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_5));
#line 715 "recompilation.usage.m"
  }
#line 715 "recompilation.usage.m"
}

#line 704 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_functor_8_p_0(
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_9,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_10,
#line 704 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_11,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_12,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19,
#line 704 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_20,
#line 704 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_21)
#line 704 "recompilation.usage.m"
{
#line 710 "recompilation.usage.m"
  {
#line 710 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 710 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_34_34;
#line 710 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 710 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingCtors_16;
#line 710 "recompilation.usage.m"
    MR_String recompilation__usage__Name_17;
#line 710 "recompilation.usage.m"
    MR_Word recompilation__usage__V_22_22;
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 711 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 715 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_21;

#line 713 "recompilation.usage.m"
    {
#line 713 "recompilation.usage.m"
      recompilation__usage__find_matching_functors_4_p_0(recompilation__usage__ModuleInfo_15, recompilation__usage__SymName_10, recompilation__usage__Arity_11, &recompilation__usage__MatchingCtors_16);
    }
#line 714 "recompilation.usage.m"
    {
#line 714 "recompilation.usage.m"
      recompilation__usage__Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_10);
    }
#line 715 "recompilation.usage.m"
    {
#line 715 "recompilation.usage.m"
      recompilation__usage__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 715 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[3]));
#line 715 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 1) = ((MR_Box) (recompilation__usage__do_record_used_functor_8_p_0_1));
#line 715 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 715 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 3) = ((MR_Box) (recompilation__usage__Name_17));
#line 715 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_22_22, 4) = ((MR_Box) (recompilation__usage__Arity_11));
#line 715 "recompilation.usage.m"
    }
#line 15119 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_34_34 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 715 "recompilation.usage.m"
    {
#line 715 "recompilation.usage.m"
      mercury__set__fold_4_p_0(recompilation__usage__TypeCtorInfo_34_34, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_22_22, recompilation__usage__MatchingCtors_16, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_20)), &recompilation__usage__conv1_STATE_VARIABLE_Info_21);
    }
#line 715 "recompilation.usage.m"
    *recompilation__usage__STATE_VARIABLE_Info_21 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_21);
#line 717 "recompilation.usage.m"
    {
#line 717 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__set__is_empty_1_p_0(recompilation__usage__TypeCtorInfo_34_34, recompilation__usage__MatchingCtors_16);
    }
#line 719 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 718 "recompilation.usage.m"
      {
#line 718 "recompilation.usage.m"
        *recompilation__usage__Recorded_12 = (MR_Integer) 0;
#line 718 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19 = recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18;
#line 718 "recompilation.usage.m"
      }
#line 719 "recompilation.usage.m"
    else
#line 720 "recompilation.usage.m"
      {
#line 720 "recompilation.usage.m"
        *recompilation__usage__Recorded_12 = (MR_Integer) 1;
#line 721 "recompilation.usage.m"
        {
#line 721 "recompilation.usage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[4], ((MR_Box) (recompilation__usage__ModuleQualifier_9)), ((MR_Box) (recompilation__usage__MatchingCtors_16)), recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_0_18, recompilation__usage__STATE_VARIABLE_ResolvedCtorMap_19);
#line 721 "recompilation.usage.m"
          return;
        }
#line 720 "recompilation.usage.m"
      }
#line 710 "recompilation.usage.m"
  }
#line 704 "recompilation.usage.m"
}

#line 684 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_2(
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 684 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 684 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 684 "recompilation.usage.m"
{
#line 684 "recompilation.usage.m"
  {
#line 684 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 684 "recompilation.usage.m"
    MR_Word recompilation__usage__conv1_STATE_VARIABLE_Info_35;

#line 684 "recompilation.usage.m"
    {
#line 684 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv1_STATE_VARIABLE_Info_35);
    }
#line 684 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv1_STATE_VARIABLE_Info_35));
#line 684 "recompilation.usage.m"
  }
#line 684 "recompilation.usage.m"
}

#line 676 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0_1(
#line 676 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 676 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1)
#line 676 "recompilation.usage.m"
{
#line 676 "recompilation.usage.m"
  {
#line 676 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_2;
#line 676 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 676 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_HeadVar__3_36;

#line 676 "recompilation.usage.m"
    {
#line 676 "recompilation.usage.m"
      recompilation__usage__conv0_HeadVar__3_36 = recompilation__usage__IntroducedFrom__func__do_record_used_pred_or_func__676__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1));
    }
#line 676 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_2 = ((MR_Box) (recompilation__usage__conv0_HeadVar__3_36));
#line 676 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_2;
#line 676 "recompilation.usage.m"
  }
#line 676 "recompilation.usage.m"
}

#line 661 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__do_record_used_pred_or_func_9_p_0(
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_10,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleQualifier_11,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__SymName_12,
#line 661 "recompilation.usage.m"
  MR_Integer recompilation__usage__Arity_13,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__Recorded_14,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_MatchingNames_0_28,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_MatchingNames_29,
#line 661 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_30,
#line 661 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_31)
#line 661 "recompilation.usage.m"
{
#line 667 "recompilation.usage.m"
  {
#line 667 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 667 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 667 "recompilation.usage.m"
    MR_Word recompilation__usage__PredTable_18;
#line 667 "recompilation.usage.m"
    MR_Integer recompilation__usage__OrigArity_19;
#line 667 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingPredIds_20;
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
#line 668 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));

#line 669 "recompilation.usage.m"
    {
#line 669 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(recompilation__usage__ModuleInfo_17, &recompilation__usage__PredTable_18);
    }
#line 670 "recompilation.usage.m"
    {
#line 670 "recompilation.usage.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(recompilation__usage__PredOrFunc_10, &recompilation__usage__OrigArity_19, recompilation__usage__Arity_13);
    }
#line 671 "recompilation.usage.m"
    {
#line 671 "recompilation.usage.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(recompilation__usage__PredTable_18, (MR_Integer) 1, recompilation__usage__PredOrFunc_10, recompilation__usage__SymName_12, recompilation__usage__OrigArity_19, &recompilation__usage__MatchingPredIds_20);
    }
#line 686 "recompilation.usage.m"
    if ((recompilation__usage__MatchingPredIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "recompilation.usage.m"
      {
#line 688 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 0;
#line 687 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_MatchingNames_29 = recompilation__usage__STATE_VARIABLE_MatchingNames_0_28;
#line 687 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_31 = recompilation__usage__STATE_VARIABLE_Info_0_30;
#line 687 "recompilation.usage.m"
      }
#line 686 "recompilation.usage.m"
    else
#line 674 "recompilation.usage.m"
      {
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_48_48;
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__PredModules_23;
#line 674 "recompilation.usage.m"
        MR_String recompilation__usage__Name_27;
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__V_33_33;
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__V_34_34;
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__V_38_38;
#line 674 "recompilation.usage.m"
        MR_Word recompilation__usage__V_40_40;
#line 684 "recompilation.usage.m"
        MR_Box recompilation__usage__conv2_STATE_VARIABLE_Info_31;

#line 675 "recompilation.usage.m"
        *recompilation__usage__Recorded_14 = (MR_Integer) 1;
#line 15325 "recompilation.usage.c"
        recompilation__usage__TypeInfo_48_48 = (MR_Word) &recompilation__usage_scalar_common_1[4];
#line 676 "recompilation.usage.m"
        {
#line 676 "recompilation.usage.m"
          recompilation__usage__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 0) = ((MR_Box) (&recompilation__usage_scalar_common_4[8]));
#line 676 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_1));
#line 676 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 676 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_34_34, 3) = ((MR_Box) (recompilation__usage__ModuleInfo_17));
#line 676 "recompilation.usage.m"
        }
#line 676 "recompilation.usage.m"
        {
#line 676 "recompilation.usage.m"
          recompilation__usage__V_33_33 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeInfo_48_48, recompilation__usage__V_34_34, recompilation__usage__MatchingPredIds_20);
        }
#line 676 "recompilation.usage.m"
        {
#line 676 "recompilation.usage.m"
          recompilation__usage__PredModules_23 = mercury__set__list_to_set_1_f_0(recompilation__usage__TypeInfo_48_48, recompilation__usage__V_33_33);
        }
#line 682 "recompilation.usage.m"
        {
#line 682 "recompilation.usage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_2[2], ((MR_Box) (recompilation__usage__ModuleQualifier_11)), ((MR_Box) (recompilation__usage__PredModules_23)), recompilation__usage__STATE_VARIABLE_MatchingNames_0_28, recompilation__usage__STATE_VARIABLE_MatchingNames_29);
        }
#line 683 "recompilation.usage.m"
        {
#line 683 "recompilation.usage.m"
          recompilation__usage__Name_27 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_12);
        }
#line 684 "recompilation.usage.m"
        {
#line 684 "recompilation.usage.m"
          recompilation__usage__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_40_40, 0) = ((MR_Box) (recompilation__usage__Name_27));
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_40_40, 1) = ((MR_Box) (recompilation__usage__Arity_13));
#line 684 "recompilation.usage.m"
        }
#line 684 "recompilation.usage.m"
        {
#line 684 "recompilation.usage.m"
          recompilation__usage__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[2]));
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 1) = ((MR_Box) (recompilation__usage__do_record_used_pred_or_func_9_p_0_2));
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 3) = ((MR_Box) (recompilation__usage__PredOrFunc_10));
#line 684 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_38_38, 4) = ((MR_Box) (recompilation__usage__V_40_40));
#line 684 "recompilation.usage.m"
        }
#line 684 "recompilation.usage.m"
        {
#line 684 "recompilation.usage.m"
          mercury__set__fold_4_p_0(recompilation__usage__TypeInfo_48_48, (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, recompilation__usage__V_38_38, recompilation__usage__PredModules_23, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_30)), &recompilation__usage__conv2_STATE_VARIABLE_Info_31);
        }
#line 684 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_Info_31 = ((MR_Word) recompilation__usage__conv2_STATE_VARIABLE_Info_31);
#line 674 "recompilation.usage.m"
      }
#line 667 "recompilation.usage.m"
  }
#line 661 "recompilation.usage.m"
}

#line 647 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__record_used_pred_or_func_4_p_0(
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__PredOrFunc_5,
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__Id_6,
#line 647 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_15,
#line 647 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_16)
#line 647 "recompilation.usage.m"
{
#line 650 "recompilation.usage.m"
  {
#line 650 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_33_33;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_34_34;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_35_35;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemType_8;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet0_9;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet0_10;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__SymName_11;
#line 650 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_12;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__IdSet_13;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemSet_14;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_18_18;
#line 650 "recompilation.usage.m"
    MR_String recompilation__usage__UnqualifiedName_54;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleQualifier_55;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames1_57;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__Recorded_58;
#line 650 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames_59;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_20_20;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_21_21;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_22_22;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_23_23;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_24_24;
#line 652 "recompilation.usage.m"
    MR_Word recompilation__usage__V_25_25;
#line 653 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_IdSet0_10;
#line 836 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingNames0_56;
#line 834 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_MatchingNames0_56;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_27_27;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 659 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;

#line 651 "recompilation.usage.m"
    {
#line 651 "recompilation.usage.m"
      recompilation__usage__ItemType_8 = recompilation__pred_or_func_to_item_type_1_f_0(recompilation__usage__PredOrFunc_5);
    }
#line 652 "recompilation.usage.m"
    recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 652 "recompilation.usage.m"
    recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 652 "recompilation.usage.m"
    recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 652 "recompilation.usage.m"
    recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 652 "recompilation.usage.m"
    recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 652 "recompilation.usage.m"
    recompilation__usage__ItemSet0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 652 "recompilation.usage.m"
    recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 15502 "recompilation.usage.c"
    recompilation__usage__TypeInfo_33_33 = (MR_Word) &recompilation__usage_scalar_common_1[3];
#line 15504 "recompilation.usage.c"
    recompilation__usage__TypeInfo_34_34 = (MR_Word) &recompilation__usage_scalar_common_1[7];
#line 15506 "recompilation.usage.c"
    recompilation__usage__TypeInfo_35_35 = (MR_Word) &recompilation__usage_scalar_common_1[10];
#line 653 "recompilation.usage.m"
    {
#line 653 "recompilation.usage.m"
      recompilation__usage__conv0_IdSet0_10 = recompilation__extract_pred_or_func_set_2_f_0(recompilation__usage__TypeInfo_33_33, recompilation__usage__TypeInfo_34_34, recompilation__usage__TypeInfo_35_35, recompilation__usage__ItemSet0_9, recompilation__usage__ItemType_8);
    }
#line 653 "recompilation.usage.m"
    recompilation__usage__IdSet0_10 = ((MR_Word) recompilation__usage__conv0_IdSet0_10);
#line 654 "recompilation.usage.m"
    recompilation__usage__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Id_6, (MR_Integer) 0)));
#line 654 "recompilation.usage.m"
    recompilation__usage__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__Id_6, (MR_Integer) 1)));
#line 832 "recompilation.usage.m"
    {
#line 832 "recompilation.usage.m"
      recompilation__usage__UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__usage__SymName_11);
    }
#line 833 "recompilation.usage.m"
    {
#line 833 "recompilation.usage.m"
      recompilation__usage__ModuleQualifier_55 = recompilation__find_module_qualifier_1_f_0(recompilation__usage__SymName_11);
    }
#line 834 "recompilation.usage.m"
    {
#line 834 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__IdSet0_10, ((MR_Box) (recompilation__usage__UnqualifiedName_54)), &recompilation__usage__conv1_MatchingNames0_56);
    }
#line 834 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 834 "recompilation.usage.m"
      {
#line 834 "recompilation.usage.m"
        recompilation__usage__MatchingNames0_56 = ((MR_Word) recompilation__usage__conv1_MatchingNames0_56);
#line 834 "recompilation.usage.m"
        recompilation__usage__succeeded = MR_TRUE;
#line 834 "recompilation.usage.m"
      }
#line 836 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 835 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_57 = recompilation__usage__MatchingNames0_56;
#line 836 "recompilation.usage.m"
    else
#line 837 "recompilation.usage.m"
      recompilation__usage__MatchingNames1_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "recompilation.usage.m"
    {
#line 839 "recompilation.usage.m"
      recompilation__usage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_50_95_95_104_111_53_95_95_91_53_93_95_48_9_p_0(recompilation__usage__PredOrFunc_5, recompilation__usage__ModuleQualifier_55, recompilation__usage__SymName_11, recompilation__usage__Arity_12, &recompilation__usage__Recorded_58, recompilation__usage__MatchingNames1_57, &recompilation__usage__MatchingNames_59, recompilation__usage__STATE_VARIABLE_Info_0_15, &recompilation__usage__STATE_VARIABLE_Info_18_18);
    }
#line 844 "recompilation.usage.m"
#line 844 "recompilation.usage.m"
    switch (recompilation__usage__Recorded_58) {
#line 844 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 844 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 845 "recompilation.usage.m"
        recompilation__usage__IdSet_13 = recompilation__usage__IdSet0_10;
#line 844 "recompilation.usage.m"
        break;
#line 844 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 842 "recompilation.usage.m"
        {
#line 843 "recompilation.usage.m"
          {
#line 843 "recompilation.usage.m"
            mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], ((MR_Box) (recompilation__usage__UnqualifiedName_54)), ((MR_Box) (recompilation__usage__MatchingNames_59)), recompilation__usage__IdSet0_10, &recompilation__usage__IdSet_13);
          }
#line 842 "recompilation.usage.m"
        }
#line 844 "recompilation.usage.m"
        break;
#line 844 "recompilation.usage.m"
    }
#line 658 "recompilation.usage.m"
    {
#line 658 "recompilation.usage.m"
      recompilation__update_pred_or_func_set_4_p_0(recompilation__usage__TypeInfo_34_34, recompilation__usage__TypeInfo_33_33, recompilation__usage__TypeInfo_35_35, recompilation__usage__ItemType_8, ((MR_Box) (recompilation__usage__IdSet_13)), recompilation__usage__ItemSet0_9, &recompilation__usage__ItemSet_14);
    }
#line 659 "recompilation.usage.m"
    recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 1)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
#line 659 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
#line 659 "recompilation.usage.m"
    {
#line 659 "recompilation.usage.m"
      MR_Word base;
#line 659 "recompilation.usage.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 659 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_Info_16 = base;
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__usage__V_26_26));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__usage__V_27_27));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__usage__V_28_28));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__usage__V_29_29));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (recompilation__usage__V_30_30));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (recompilation__usage__ItemSet_14));
#line 659 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (recompilation__usage__V_32_32));
#line 659 "recompilation.usage.m"
    }
#line 650 "recompilation.usage.m"
  }
#line 647 "recompilation.usage.m"
}

#line 632 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_3_p_0(
#line 632 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Queue_0_9,
#line 632 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_10,
#line 632 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_11)
#line 632 "recompilation.usage.m"
{
#line 641 "recompilation.usage.m"
  while (MR_TRUE)
#line 641 "recompilation.usage.m"
    {
#line 641 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 641 "recompilation.usage.m"
      {
#line 641 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;
#line 641 "recompilation.usage.m"
        MR_Word recompilation__usage__Item_6;
#line 641 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Queue_12_12;
#line 637 "recompilation.usage.m"
        MR_Box recompilation__usage__conv0_Item_6;

#line 637 "recompilation.usage.m"
        {
#line 637 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__queue__get_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__usage__conv0_Item_6, recompilation__usage__STATE_VARIABLE_Queue_0_9, &recompilation__usage__STATE_VARIABLE_Queue_12_12);
        }
#line 637 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 637 "recompilation.usage.m"
          {
#line 637 "recompilation.usage.m"
            recompilation__usage__Item_6 = ((MR_Word) recompilation__usage__conv0_Item_6);
#line 637 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 637 "recompilation.usage.m"
          }
#line 641 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 638 "recompilation.usage.m"
          {
#line 638 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_6, (MR_Integer) 0)));
#line 638 "recompilation.usage.m"
            MR_Word recompilation__usage__ItemId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Item_6, (MR_Integer) 1)));
#line 638 "recompilation.usage.m"
            MR_Word recompilation__usage__STATE_VARIABLE_Info_13_13;

#line 639 "recompilation.usage.m"
            {
#line 639 "recompilation.usage.m"
              recompilation__usage__find_items_used_by_item_4_p_0(recompilation__usage__ItemType_7, recompilation__usage__ItemId_8, recompilation__usage__STATE_VARIABLE_Info_0_10, &recompilation__usage__STATE_VARIABLE_Info_13_13);
            }
#line 640 "recompilation.usage.m"
            /* direct tailcall eliminated */
#line 640 "recompilation.usage.m"
            {
#line 640 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Queue_0__tmp_copy_9 = recompilation__usage__STATE_VARIABLE_Queue_12_12;
#line 640 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_10 = recompilation__usage__STATE_VARIABLE_Info_13_13;

#line 640 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_0_10 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_10;
#line 640 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Queue_0_9 = recompilation__usage__STATE_VARIABLE_Queue_0__tmp_copy_9;
#line 640 "recompilation.usage.m"
            }
#line 640 "recompilation.usage.m"
            continue;
#line 638 "recompilation.usage.m"
          }
#line 641 "recompilation.usage.m"
        else
#line 642 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_11 = recompilation__usage__STATE_VARIABLE_Info_0_10;
#line 641 "recompilation.usage.m"
      }
#line 641 "recompilation.usage.m"
      break;
#line 641 "recompilation.usage.m"
    }
#line 632 "recompilation.usage.m"
}

#line 618 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__process_imported_item_queue_2_p_0(
#line 618 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_6,
#line 618 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_7)
#line 618 "recompilation.usage.m"
{
#line 621 "recompilation.usage.m"
  while (MR_TRUE)
#line 621 "recompilation.usage.m"
    {
#line 621 "recompilation.usage.m"
      /* tailcall optimized into a loop */
#line 621 "recompilation.usage.m"
      {
#line 621 "recompilation.usage.m"
        MR_bool recompilation__usage__succeeded;
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_31_31 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__Queue0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__Queue_5;
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_8_8;
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__V_9_9;
#line 621 "recompilation.usage.m"
        MR_Word recompilation__usage__STATE_VARIABLE_Info_10_10;
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 622 "recompilation.usage.m"
        MR_Word recompilation__usage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_18_18;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_20_20;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_21_21;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_22_22;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_23_23;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_24_24;
#line 623 "recompilation.usage.m"
        MR_Word recompilation__usage__V_19_19;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_25_25;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_26_26;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_27_27;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_28_28;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_29_29;
#line 625 "recompilation.usage.m"
        MR_Word recompilation__usage__V_30_30;

#line 623 "recompilation.usage.m"
        {
#line 623 "recompilation.usage.m"
          recompilation__usage__V_9_9 = mercury__queue__init_0_f_0(recompilation__usage__TypeCtorInfo_31_31);
        }
#line 623 "recompilation.usage.m"
        recompilation__usage__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 623 "recompilation.usage.m"
        recompilation__usage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 623 "recompilation.usage.m"
        {
#line 623 "recompilation.usage.m"
          recompilation__usage__STATE_VARIABLE_Info_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 0) = ((MR_Box) (recompilation__usage__V_18_18));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 1) = ((MR_Box) (recompilation__usage__V_9_9));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 2) = ((MR_Box) (recompilation__usage__V_20_20));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 3) = ((MR_Box) (recompilation__usage__V_21_21));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 4) = ((MR_Box) (recompilation__usage__V_22_22));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 5) = ((MR_Box) (recompilation__usage__V_23_23));
#line 623 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_8_8, 6) = ((MR_Box) (recompilation__usage__V_24_24));
#line 623 "recompilation.usage.m"
        }
#line 624 "recompilation.usage.m"
        {
#line 624 "recompilation.usage.m"
          recompilation__usage__process_imported_item_queue_2_3_p_0(recompilation__usage__Queue0_4, recompilation__usage__STATE_VARIABLE_Info_8_8, &recompilation__usage__STATE_VARIABLE_Info_10_10);
        }
#line 625 "recompilation.usage.m"
        recompilation__usage__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 0)));
#line 625 "recompilation.usage.m"
        recompilation__usage__Queue_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 1)));
#line 625 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 2)));
#line 625 "recompilation.usage.m"
        recompilation__usage__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 3)));
#line 625 "recompilation.usage.m"
        recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 4)));
#line 625 "recompilation.usage.m"
        recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 5)));
#line 625 "recompilation.usage.m"
        recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_10_10, (MR_Integer) 6)));
#line 626 "recompilation.usage.m"
        {
#line 626 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__queue__is_empty_1_p_0(recompilation__usage__TypeCtorInfo_31_31, recompilation__usage__Queue_5);
        }
#line 628 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 628 "recompilation.usage.m"
          *recompilation__usage__STATE_VARIABLE_Info_7 = recompilation__usage__STATE_VARIABLE_Info_10_10;
#line 628 "recompilation.usage.m"
        else
#line 629 "recompilation.usage.m"
          {
#line 629 "recompilation.usage.m"
            /* direct tailcall eliminated */
#line 629 "recompilation.usage.m"
            {
#line 629 "recompilation.usage.m"
              MR_Word recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_6 = recompilation__usage__STATE_VARIABLE_Info_10_10;

#line 629 "recompilation.usage.m"
              recompilation__usage__STATE_VARIABLE_Info_0_6 = recompilation__usage__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 629 "recompilation.usage.m"
            }
#line 629 "recompilation.usage.m"
            continue;
#line 629 "recompilation.usage.m"
          }
#line 621 "recompilation.usage.m"
      }
#line 621 "recompilation.usage.m"
      break;
#line 621 "recompilation.usage.m"
    }
#line 618 "recompilation.usage.m"
}

#line 590 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0_1(
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 590 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 590 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 590 "recompilation.usage.m"
{
#line 590 "recompilation.usage.m"
  {
#line 590 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 590 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_Info_12;

#line 590 "recompilation.usage.m"
    {
#line 590 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_instances_4_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), ((MR_Word) recompilation__usage__wrapper_arg_3), &recompilation__usage__conv0_STATE_VARIABLE_Info_12);
    }
#line 590 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_4 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_Info_12));
#line 590 "recompilation.usage.m"
  }
#line 590 "recompilation.usage.m"
}

#line 583 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_2_3_p_0(
#line 583 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_4,
#line 583 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_Info_0_16,
#line 583 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_Info_17)
#line 583 "recompilation.usage.m"
{
#line 586 "recompilation.usage.m"
  {
#line 586 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Instances_7;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Predicates_8;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Functions_9;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Constructors_10;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Types_11;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeBodies_12;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Modes_13;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Classes_14;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__Insts_15;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_19_19;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_21_21;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_23_23;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_24_24;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_26_26;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_28_28;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_30_30;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_32_32;
#line 586 "recompilation.usage.m"
    MR_Word recompilation__usage__STATE_VARIABLE_Info_34_34;
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 588 "recompilation.usage.m"
    MR_Word recompilation__usage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 590 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_STATE_VARIABLE_Info_19_19;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_44_44;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_47_47;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_48_48;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_49_49;
#line 592 "recompilation.usage.m"
    MR_Word recompilation__usage__V_50_50;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_51_51;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_52_52;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_53_53;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_54_54;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_55_55;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_56_56;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_57_57;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_58_58;
#line 595 "recompilation.usage.m"
    MR_Word recompilation__usage__V_59_59;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_60_60;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_63_63;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_64_64;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_65_65;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_66_66;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_67_67;
#line 598 "recompilation.usage.m"
    MR_Word recompilation__usage__V_68_68;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_69_69;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_70_70;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_71_71;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_72_72;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_73_73;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_74_74;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_75_75;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_76_76;
#line 601 "recompilation.usage.m"
    MR_Word recompilation__usage__V_77_77;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_78_78;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_79_79;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_80_80;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_81_81;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_82_82;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_83_83;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_84_84;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_85_85;
#line 604 "recompilation.usage.m"
    MR_Word recompilation__usage__V_86_86;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_87_87;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_88_88;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_89_89;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_90_90;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_91_91;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_92_92;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_93_93;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_94_94;
#line 607 "recompilation.usage.m"
    MR_Word recompilation__usage__V_95_95;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_96_96;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_97_97;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_98_98;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_99_99;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_100_100;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_101_101;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_102_102;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_103_103;
#line 610 "recompilation.usage.m"
    MR_Word recompilation__usage__V_104_104;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_105_105;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_106_106;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_107_107;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_108_108;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_109_109;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_110_110;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_111_111;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_112_112;
#line 613 "recompilation.usage.m"
    MR_Word recompilation__usage__V_113_113;

#line 589 "recompilation.usage.m"
    {
#line 589 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__Instances_7);
    }
#line 590 "recompilation.usage.m"
    {
#line 590 "recompilation.usage.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &recompilation__usage_scalar_common_2[6], (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_recompilation_usage_info_0, (MR_Word) &recompilation__usage_scalar_common_1[27], recompilation__usage__Instances_7, ((MR_Box) (recompilation__usage__STATE_VARIABLE_Info_0_16)), &recompilation__usage__conv1_STATE_VARIABLE_Info_19_19);
    }
#line 590 "recompilation.usage.m"
    recompilation__usage__STATE_VARIABLE_Info_19_19 = ((MR_Word) recompilation__usage__conv1_STATE_VARIABLE_Info_19_19);
#line 592 "recompilation.usage.m"
    recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 592 "recompilation.usage.m"
    recompilation__usage__Predicates_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 592 "recompilation.usage.m"
    recompilation__usage__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 593 "recompilation.usage.m"
    {
#line 593 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 0, recompilation__usage__Predicates_8, recompilation__usage__STATE_VARIABLE_Info_19_19, &recompilation__usage__STATE_VARIABLE_Info_21_21);
    }
#line 595 "recompilation.usage.m"
    recompilation__usage__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 595 "recompilation.usage.m"
    recompilation__usage__Functions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 595 "recompilation.usage.m"
    recompilation__usage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 596 "recompilation.usage.m"
    {
#line 596 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_preds_4_p_0((MR_Integer) 1, recompilation__usage__Functions_9, recompilation__usage__STATE_VARIABLE_Info_21_21, &recompilation__usage__STATE_VARIABLE_Info_23_23);
    }
#line 598 "recompilation.usage.m"
    recompilation__usage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 598 "recompilation.usage.m"
    recompilation__usage__Constructors_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 598 "recompilation.usage.m"
    recompilation__usage__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 599 "recompilation.usage.m"
    {
#line 599 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_functors_3_p_0(recompilation__usage__Constructors_10, recompilation__usage__STATE_VARIABLE_Info_23_23, &recompilation__usage__STATE_VARIABLE_Info_24_24);
    }
#line 601 "recompilation.usage.m"
    recompilation__usage__Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 601 "recompilation.usage.m"
    recompilation__usage__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 602 "recompilation.usage.m"
    {
#line 602 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 0, recompilation__usage__Types_11, recompilation__usage__STATE_VARIABLE_Info_24_24, &recompilation__usage__STATE_VARIABLE_Info_26_26);
    }
#line 604 "recompilation.usage.m"
    recompilation__usage__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 604 "recompilation.usage.m"
    recompilation__usage__TypeBodies_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 604 "recompilation.usage.m"
    recompilation__usage__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 605 "recompilation.usage.m"
    {
#line 605 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 1, recompilation__usage__TypeBodies_12, recompilation__usage__STATE_VARIABLE_Info_26_26, &recompilation__usage__STATE_VARIABLE_Info_28_28);
    }
#line 607 "recompilation.usage.m"
    recompilation__usage__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 607 "recompilation.usage.m"
    recompilation__usage__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 607 "recompilation.usage.m"
    recompilation__usage__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 608 "recompilation.usage.m"
    {
#line 608 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 2, recompilation__usage__Modes_13, recompilation__usage__STATE_VARIABLE_Info_28_28, &recompilation__usage__STATE_VARIABLE_Info_30_30);
    }
#line 610 "recompilation.usage.m"
    recompilation__usage__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 610 "recompilation.usage.m"
    recompilation__usage__Classes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 610 "recompilation.usage.m"
    recompilation__usage__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 611 "recompilation.usage.m"
    {
#line 611 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 4, recompilation__usage__Classes_14, recompilation__usage__STATE_VARIABLE_Info_30_30, &recompilation__usage__STATE_VARIABLE_Info_32_32);
    }
#line 613 "recompilation.usage.m"
    recompilation__usage__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 0)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 1)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 2)));
#line 613 "recompilation.usage.m"
    recompilation__usage__Insts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 3)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 4)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 5)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 6)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 7)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 8)));
#line 613 "recompilation.usage.m"
    recompilation__usage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_4, (MR_Integer) 9)));
#line 614 "recompilation.usage.m"
    {
#line 614 "recompilation.usage.m"
      recompilation__usage__find_items_used_by_simple_item_set_4_p_0((MR_Integer) 3, recompilation__usage__Insts_15, recompilation__usage__STATE_VARIABLE_Info_32_32, &recompilation__usage__STATE_VARIABLE_Info_34_34);
    }
#line 616 "recompilation.usage.m"
    {
#line 616 "recompilation.usage.m"
      recompilation__usage__process_imported_item_queue_2_p_0(recompilation__usage__STATE_VARIABLE_Info_34_34, recompilation__usage__STATE_VARIABLE_Info_17);
#line 616 "recompilation.usage.m"
      return;
    }
#line 586 "recompilation.usage.m"
  }
#line 583 "recompilation.usage.m"
}

#line 554 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0_1(
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 554 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 554 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 554 "recompilation.usage.m"
{
#line 554 "recompilation.usage.m"
  {
#line 554 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 554 "recompilation.usage.m"
    MR_Word recompilation__usage__conv0_STATE_VARIABLE_ImportedItemsMap_8;

#line 554 "recompilation.usage.m"
    {
#line 554 "recompilation.usage.m"
      recompilation__usage__insert_into_imported_items_map_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2), &recompilation__usage__conv0_STATE_VARIABLE_ImportedItemsMap_8);
    }
#line 554 "recompilation.usage.m"
    *recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv0_STATE_VARIABLE_ImportedItemsMap_8));
#line 554 "recompilation.usage.m"
  }
#line 554 "recompilation.usage.m"
}

#line 537 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__find_all_used_imported_items_7_p_0(
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_8,
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_9,
#line 537 "recompilation.usage.m"
  MR_Word recompilation__usage__Dependencies_10,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ResolvedUsedItems_11,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__UsedTypeClasses_12,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ImportedItems_13,
#line 537 "recompilation.usage.m"
  MR_Word * recompilation__usage__ModuleInstances_14)
#line 537 "recompilation.usage.m"
{
#line 544 "recompilation.usage.m"
  {
#line 544 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_66_66;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_75_75;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_77_77;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__AllVisibleModules_15;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_16;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedVisibleModules_17;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems0_18;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ImportedItems1_19;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ItemsToProcess0_20;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleUsedClasses_21;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__UsedClasses0_22;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Types_23;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeBodies_24;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Modes_25;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Insts_26;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Classes_27;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedCtors_33;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedPreds_34;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedFuncs_35;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedMutables_36;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedForeignProcs_37;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__ResolvedUsedItems0_38;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Info0_39;
#line 544 "recompilation.usage.m"
    MR_Word recompilation__usage__Info_40;
#line 554 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ImportedItems1_19;
#line 561 "recompilation.usage.m"
    MR_Word recompilation__usage__V_28_28;
#line 561 "recompilation.usage.m"
    MR_Word recompilation__usage__V_29_29;
#line 561 "recompilation.usage.m"
    MR_Word recompilation__usage__V_30_30;
#line 561 "recompilation.usage.m"
    MR_Word recompilation__usage__V_31_31;
#line 561 "recompilation.usage.m"
    MR_Word recompilation__usage__V_32_32;
#line 578 "recompilation.usage.m"
    MR_Word recompilation__usage__V_42_42;
#line 578 "recompilation.usage.m"
    MR_Word recompilation__usage__V_43_43;
#line 578 "recompilation.usage.m"
    MR_Word recompilation__usage__V_45_45;

#line 549 "recompilation.usage.m"
    {
#line 549 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_visible_modules_2_p_0(recompilation__usage__ModuleInfo_8, &recompilation__usage__AllVisibleModules_15);
    }
#line 550 "recompilation.usage.m"
    {
#line 550 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_8, &recompilation__usage__ModuleName_16);
    }
#line 16489 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 551 "recompilation.usage.m"
    {
#line 551 "recompilation.usage.m"
      mercury__set__delete_3_p_0(recompilation__usage__TypeCtorInfo_66_66, ((MR_Box) (recompilation__usage__ModuleName_16)), recompilation__usage__AllVisibleModules_15, &recompilation__usage__ImportedVisibleModules_17);
    }
#line 553 "recompilation.usage.m"
    {
#line 553 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_66_66, (MR_Word) &recompilation__usage_scalar_common_3[0], &recompilation__usage__ImportedItems0_18);
    }
#line 554 "recompilation.usage.m"
    {
#line 554 "recompilation.usage.m"
      mercury__set__foldl_4_p_0(recompilation__usage__TypeCtorInfo_66_66, (MR_Word) &recompilation__usage_scalar_common_1[13], (MR_Word) &recompilation__usage_scalar_common_1[26], recompilation__usage__ImportedVisibleModules_17, ((MR_Box) (recompilation__usage__ImportedItems0_18)), &recompilation__usage__conv1_ImportedItems1_19);
    }
#line 554 "recompilation.usage.m"
    recompilation__usage__ImportedItems1_19 = ((MR_Word) recompilation__usage__conv1_ImportedItems1_19);
#line 557 "recompilation.usage.m"
    {
#line 557 "recompilation.usage.m"
      mercury__queue__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__usage__ItemsToProcess0_20);
    }
#line 558 "recompilation.usage.m"
    {
#line 558 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_66_66, (MR_Word) &recompilation__usage_scalar_common_2[1], &recompilation__usage__ModuleUsedClasses_21);
    }
#line 559 "recompilation.usage.m"
    {
#line 559 "recompilation.usage.m"
      mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, &recompilation__usage__UsedClasses0_22);
    }
#line 561 "recompilation.usage.m"
    recompilation__usage__Types_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 0)));
#line 561 "recompilation.usage.m"
    recompilation__usage__TypeBodies_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 1)));
#line 561 "recompilation.usage.m"
    recompilation__usage__Modes_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 2)));
#line 561 "recompilation.usage.m"
    recompilation__usage__Insts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 3)));
#line 561 "recompilation.usage.m"
    recompilation__usage__Classes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 4)));
#line 561 "recompilation.usage.m"
    recompilation__usage__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 5)));
#line 561 "recompilation.usage.m"
    recompilation__usage__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 6)));
#line 561 "recompilation.usage.m"
    recompilation__usage__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 7)));
#line 561 "recompilation.usage.m"
    recompilation__usage__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 8)));
#line 561 "recompilation.usage.m"
    recompilation__usage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__UsedItems_9, (MR_Integer) 9)));
#line 16543 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 563 "recompilation.usage.m"
    {
#line 563 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_75_75, (MR_Word) &recompilation__usage_scalar_common_2[5], &recompilation__usage__ResolvedCtors_33);
    }
#line 16550 "recompilation.usage.c"
    recompilation__usage__TypeInfo_77_77 = (MR_Word) &recompilation__usage_scalar_common_2[3];
#line 564 "recompilation.usage.m"
    {
#line 564 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__TypeInfo_77_77, &recompilation__usage__ResolvedPreds_34);
    }
#line 565 "recompilation.usage.m"
    {
#line 565 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__TypeInfo_77_77, &recompilation__usage__ResolvedFuncs_35);
    }
#line 566 "recompilation.usage.m"
    {
#line 566 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__TypeInfo_77_77, &recompilation__usage__ResolvedMutables_36);
    }
#line 567 "recompilation.usage.m"
    {
#line 567 "recompilation.usage.m"
      mercury__map__init_1_p_0(recompilation__usage__TypeCtorInfo_75_75, recompilation__usage__TypeInfo_77_77, &recompilation__usage__ResolvedForeignProcs_37);
    }
#line 568 "recompilation.usage.m"
    {
#line 568 "recompilation.usage.m"
      recompilation__usage__ResolvedUsedItems0_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 0) = ((MR_Box) (recompilation__usage__Types_23));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 1) = ((MR_Box) (recompilation__usage__TypeBodies_24));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 2) = ((MR_Box) (recompilation__usage__Modes_25));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 3) = ((MR_Box) (recompilation__usage__Insts_26));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 4) = ((MR_Box) (recompilation__usage__Classes_27));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 5) = ((MR_Box) (recompilation__usage__ResolvedCtors_33));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 6) = ((MR_Box) (recompilation__usage__ResolvedPreds_34));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 7) = ((MR_Box) (recompilation__usage__ResolvedFuncs_35));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 8) = ((MR_Box) (recompilation__usage__ResolvedMutables_36));
#line 568 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedUsedItems0_38, 9) = ((MR_Box) (recompilation__usage__ResolvedForeignProcs_37));
#line 568 "recompilation.usage.m"
    }
#line 572 "recompilation.usage.m"
    {
#line 572 "recompilation.usage.m"
      recompilation__usage__Info0_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 0) = ((MR_Box) (recompilation__usage__ModuleInfo_8));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 1) = ((MR_Box) (recompilation__usage__ItemsToProcess0_20));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 2) = ((MR_Box) (recompilation__usage__ImportedItems1_19));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 3) = ((MR_Box) (recompilation__usage__ModuleUsedClasses_21));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 4) = ((MR_Box) (recompilation__usage__Dependencies_10));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 5) = ((MR_Box) (recompilation__usage__ResolvedUsedItems0_38));
#line 572 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__Info0_39, 6) = ((MR_Box) (recompilation__usage__UsedClasses0_22));
#line 572 "recompilation.usage.m"
    }
#line 576 "recompilation.usage.m"
    {
#line 576 "recompilation.usage.m"
      recompilation__usage__find_all_used_imported_items_2_3_p_0(recompilation__usage__UsedItems_9, recompilation__usage__Info0_39, &recompilation__usage__Info_40);
    }
#line 578 "recompilation.usage.m"
    recompilation__usage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 0)));
#line 578 "recompilation.usage.m"
    recompilation__usage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 1)));
#line 578 "recompilation.usage.m"
    *recompilation__usage__ImportedItems_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 2)));
#line 578 "recompilation.usage.m"
    *recompilation__usage__ModuleInstances_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 3)));
#line 578 "recompilation.usage.m"
    recompilation__usage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 4)));
#line 578 "recompilation.usage.m"
    *recompilation__usage__ResolvedUsedItems_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 5)));
#line 578 "recompilation.usage.m"
    *recompilation__usage__UsedTypeClasses_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__Info_40, (MR_Integer) 6)));
#line 544 "recompilation.usage.m"
  }
#line 537 "recompilation.usage.m"
}

#line 523 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__insert_into_imported_items_map_3_p_0(
#line 523 "recompilation.usage.m"
  MR_Word recompilation__usage__VisibleModule_4,
#line 523 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7,
#line 523 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8)
#line 523 "recompilation.usage.m"
{
#line 526 "recompilation.usage.m"
  {
#line 526 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 526 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleItems_6;
#line 526 "recompilation.usage.m"
    MR_Word recompilation__usage__V_9_9;

#line 527 "recompilation.usage.m"
    {
#line 527 "recompilation.usage.m"
      recompilation__usage__V_9_9 = mercury__set__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0]);
    }
#line 527 "recompilation.usage.m"
    {
#line 527 "recompilation.usage.m"
      recompilation__usage__ModuleItems_6 = recompilation__init_item_id_set_1_f_0((MR_Word) &recompilation__usage_scalar_common_2[0], ((MR_Box) (recompilation__usage__V_9_9)));
    }
#line 532 "recompilation.usage.m"
    {
#line 532 "recompilation.usage.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__usage_scalar_common_3[0], ((MR_Box) (recompilation__usage__VisibleModule_4)), ((MR_Box) (recompilation__usage__ModuleItems_6)), recompilation__usage__STATE_VARIABLE_ImportedItemsMap_0_7, recompilation__usage__STATE_VARIABLE_ImportedItemsMap_8);
#line 532 "recompilation.usage.m"
      return;
    }
#line 526 "recompilation.usage.m"
  }
#line 523 "recompilation.usage.m"
}

#line 456 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_functor_3_p_0(
#line 456 "recompilation.usage.m"
  MR_Word recompilation__usage__ResolvedFunctor_4)
#line 456 "recompilation.usage.m"
{
#line 461 "recompilation.usage.m"
  {
#line 461 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 461 "recompilation.usage.m"
#line 461 "recompilation.usage.m"
    switch (MR_tag((MR_Word) recompilation__usage__ResolvedFunctor_4)) {
#line 461 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 461 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 461 "recompilation.usage.m"
        {
#line 461 "recompilation.usage.m"
          MR_Word recompilation__usage__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 1)));
#line 461 "recompilation.usage.m"
          MR_Word recompilation__usage__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 2)));
#line 461 "recompilation.usage.m"
          MR_Integer recompilation__usage__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 3)));
#line 460 "recompilation.usage.m"
          MR_Word recompilation__usage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));

#line 462 "recompilation.usage.m"
          {
#line 462 "recompilation.usage.m"
            parse_tree__prog_out__write_pred_or_func_3_p_0(recompilation__usage__PredOrFunc_8);
          }
#line 463 "recompilation.usage.m"
          {
#line 463 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
#line 464 "recompilation.usage.m"
          {
#line 464 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_7);
          }
#line 465 "recompilation.usage.m"
          {
#line 465 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 466 "recompilation.usage.m"
          {
#line 466 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__Arity_9);
          }
#line 467 "recompilation.usage.m"
          {
#line 467 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 467 "recompilation.usage.m"
            return;
          }
#line 461 "recompilation.usage.m"
        }
#line 461 "recompilation.usage.m"
        break;
#line 461 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 469 "recompilation.usage.m"
        {
#line 469 "recompilation.usage.m"
          MR_Word recompilation__usage__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));
#line 469 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_10, (MR_Integer) 0)));
#line 469 "recompilation.usage.m"
          MR_Integer recompilation__usage__Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ItemName_10, (MR_Integer) 1)));

#line 471 "recompilation.usage.m"
          {
#line 471 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "ctor(");
          }
#line 472 "recompilation.usage.m"
          {
#line 472 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__usage__TypeName_11);
          }
#line 474 "recompilation.usage.m"
          {
#line 474 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 475 "recompilation.usage.m"
          {
#line 475 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__Arity_53);
          }
#line 476 "recompilation.usage.m"
          {
#line 476 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 476 "recompilation.usage.m"
            return;
          }
#line 469 "recompilation.usage.m"
        }
#line 461 "recompilation.usage.m"
        break;
#line 461 "recompilation.usage.m"
      case (MR_Integer) 2:
#line 478 "recompilation.usage.m"
        {
#line 478 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeItemName_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 0)));
#line 478 "recompilation.usage.m"
          MR_Word recompilation__usage__ConsItemName_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), recompilation__usage__ResolvedFunctor_4, (MR_Integer) 1)));
#line 478 "recompilation.usage.m"
          MR_Integer recompilation__usage__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeItemName_12, (MR_Integer) 1)));
#line 478 "recompilation.usage.m"
          MR_Word recompilation__usage__ConsName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ConsItemName_13, (MR_Integer) 0)));
#line 478 "recompilation.usage.m"
          MR_Integer recompilation__usage__ConsArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__ConsItemName_13, (MR_Integer) 1)));
#line 478 "recompilation.usage.m"
          MR_Word recompilation__usage__TypeName_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__TypeItemName_12, (MR_Integer) 0)));

#line 481 "recompilation.usage.m"
          {
#line 481 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "field(");
          }
#line 482 "recompilation.usage.m"
          {
#line 482 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__usage__TypeName_54);
          }
#line 484 "recompilation.usage.m"
          {
#line 484 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 485 "recompilation.usage.m"
          {
#line 485 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__TypeArity_14);
          }
#line 486 "recompilation.usage.m"
          {
#line 486 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 487 "recompilation.usage.m"
          {
#line 487 "recompilation.usage.m"
            parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__usage__ConsName_15);
          }
#line 489 "recompilation.usage.m"
          {
#line 489 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) "/");
          }
#line 490 "recompilation.usage.m"
          {
#line 490 "recompilation.usage.m"
            mercury__io__write_int_3_p_0(recompilation__usage__ConsArity_16);
          }
#line 491 "recompilation.usage.m"
          {
#line 491 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
#line 491 "recompilation.usage.m"
            return;
          }
#line 478 "recompilation.usage.m"
        }
#line 461 "recompilation.usage.m"
        break;
#line 461 "recompilation.usage.m"
    }
#line 461 "recompilation.usage.m"
  }
#line 456 "recompilation.usage.m"
}

#line 445 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_3_4_p_0(
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_19,
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 445 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 445 "recompilation.usage.m"
{
#line 449 "recompilation.usage.m"
  {
#line 449 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 449 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_20_20;
#line 449 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_22_22;
#line 449 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 449 "recompilation.usage.m"
    MR_Word recompilation__usage__Matches_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 449 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchList_9;

#line 450 "recompilation.usage.m"
    {
#line 450 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__Arity_6);
    }
#line 451 "recompilation.usage.m"
    {
#line 451 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 16903 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_20_20 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 452 "recompilation.usage.m"
    {
#line 452 "recompilation.usage.m"
      mercury__map__to_assoc_list_2_p_0(recompilation__usage__TypeCtorInfo_20_20, recompilation__usage__TypeInfo_for_T_19, recompilation__usage__Matches_7, &recompilation__usage__MatchList_9);
    }
#line 16910 "recompilation.usage.c"
    {
#line 16912 "recompilation.usage.c"
      recompilation__usage__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16914 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 16916 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 1) = ((MR_Box) (recompilation__usage__TypeCtorInfo_20_20));
#line 16918 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_22_22, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_19));
#line 16920 "recompilation.usage.c"
    }
#line 453 "recompilation.usage.m"
    {
#line 453 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeInfo_22_22, (MR_Word) recompilation__usage__MatchList_9, (MR_String) ",\n\t\t\t\t", (MR_Word) recompilation__usage__WriteMatches_5);
    }
#line 454 "recompilation.usage.m"
    {
#line 454 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 454 "recompilation.usage.m"
      return;
    }
#line 449 "recompilation.usage.m"
  }
#line 445 "recompilation.usage.m"
}

#line 442 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0_1(
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 442 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 442 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 442 "recompilation.usage.m"
{
#line 442 "recompilation.usage.m"
  {
#line 442 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 442 "recompilation.usage.m"
    {
#line 442 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_3_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 442 "recompilation.usage.m"
      return;
    }
#line 442 "recompilation.usage.m"
  }
#line 442 "recompilation.usage.m"
}

#line 433 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_resolved_item_set_2_4_p_0(
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__TypeInfo_for_T_20,
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__WriteMatches_5,
#line 433 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__2_2)
#line 433 "recompilation.usage.m"
{
#line 438 "recompilation.usage.m"
  {
#line 438 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 438 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_27_27;
#line 438 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeInfo_29_29;
#line 438 "recompilation.usage.m"
    MR_String recompilation__usage__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 0)));
#line 438 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchesAL_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__2_2, (MR_Integer) 1)));
#line 438 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11;
#line 438 "recompilation.usage.m"
    MR_Word recompilation__usage__V_16_16;

#line 439 "recompilation.usage.m"
    {
#line 439 "recompilation.usage.m"
      recompilation__usage__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 439 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, 0) = ((MR_Box) (recompilation__usage__Name_6));
#line 439 "recompilation.usage.m"
    }
#line 439 "recompilation.usage.m"
    {
#line 439 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__V_11_11);
    }
#line 440 "recompilation.usage.m"
    {
#line 440 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 442 "recompilation.usage.m"
    {
#line 442 "recompilation.usage.m"
      recompilation__usage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 442 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 0) = ((MR_Box) (&recompilation__usage_scalar_common_8[1]));
#line 442 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 1) = ((MR_Box) (recompilation__usage__write_resolved_item_set_2_4_p_0_1));
#line 442 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 442 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 3) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_20));
#line 442 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_16_16, 4) = ((MR_Box) (recompilation__usage__WriteMatches_5));
#line 442 "recompilation.usage.m"
    }
#line 17031 "recompilation.usage.c"
    {
#line 17033 "recompilation.usage.c"
      recompilation__usage__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17035 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 17037 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
#line 17039 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_27_27, 2) = ((MR_Box) (recompilation__usage__TypeInfo_for_T_20));
#line 17041 "recompilation.usage.c"
    }
#line 17043 "recompilation.usage.c"
    {
#line 17045 "recompilation.usage.c"
      recompilation__usage__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 17047 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 17049 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 17051 "recompilation.usage.c"
      MR_hl_field(MR_mktag(0), recompilation__usage__TypeInfo_29_29, 2) = ((MR_Box) (recompilation__usage__TypeInfo_27_27));
#line 17053 "recompilation.usage.c"
    }
#line 441 "recompilation.usage.m"
    {
#line 441 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeInfo_29_29, (MR_Word) recompilation__usage__MatchesAL_7, (MR_String) ",\n\t\t\t", (MR_Word) recompilation__usage__V_16_16);
    }
#line 443 "recompilation.usage.m"
    {
#line 443 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 443 "recompilation.usage.m"
      return;
    }
#line 438 "recompilation.usage.m"
  }
#line 433 "recompilation.usage.m"
}

#line 414 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0_1(
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 414 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 414 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 414 "recompilation.usage.m"
{
#line 414 "recompilation.usage.m"
  {
#line 414 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 414 "recompilation.usage.m"
    {
#line 414 "recompilation.usage.m"
      recompilation__usage__write_resolved_functor_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 414 "recompilation.usage.m"
      return;
    }
#line 414 "recompilation.usage.m"
  }
#line 414 "recompilation.usage.m"
}

#line 407 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_2_3_p_0(
#line 407 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 407 "recompilation.usage.m"
{
#line 410 "recompilation.usage.m"
  {
#line 410 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 410 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_18_18;
#line 410 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchingCtors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;

#line 411 "recompilation.usage.m"
    {
#line 411 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 412 "recompilation.usage.m"
    {
#line 412 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " => (");
    }
#line 17132 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_18_18 = (MR_Word) &recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0;
#line 413 "recompilation.usage.m"
    {
#line 413 "recompilation.usage.m"
      recompilation__usage__V_12_12 = mercury__set__to_sorted_list_1_f_0(recompilation__usage__TypeCtorInfo_18_18, recompilation__usage__MatchingCtors_5);
    }
#line 413 "recompilation.usage.m"
    {
#line 413 "recompilation.usage.m"
      mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_18_18, recompilation__usage__V_12_12, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[25]);
    }
#line 415 "recompilation.usage.m"
    {
#line 415 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 415 "recompilation.usage.m"
      return;
    }
#line 410 "recompilation.usage.m"
  }
#line 407 "recompilation.usage.m"
}

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_2(
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 430 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 430 "recompilation.usage.m"
{
#line 430 "recompilation.usage.m"
  {
#line 430 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 430 "recompilation.usage.m"
    {
#line 430 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 430 "recompilation.usage.m"
      return;
    }
#line 430 "recompilation.usage.m"
  }
#line 430 "recompilation.usage.m"
}

#line 17186 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0_1(
#line 17189 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 17191 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 17193 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 17195 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 17197 "recompilation.usage.c"
{
#line 17199 "recompilation.usage.c"
  {
#line 17201 "recompilation.usage.c"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 17204 "recompilation.usage.c"
    {
#line 17206 "recompilation.usage.c"
      recompilation__usage__write_functor_matches_2_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 17208 "recompilation.usage.c"
      return;
    }
#line 17211 "recompilation.usage.c"
  }
#line 17213 "recompilation.usage.c"
}

#line 395 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_functor_matches_5_p_0(
#line 395 "recompilation.usage.m"
  MR_Word recompilation__usage__Ids_6,
#line 395 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_9,
#line 395 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_10)
#line 395 "recompilation.usage.m"
{
#line 401 "recompilation.usage.m"
  {
#line 401 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 399 "recompilation.usage.m"
    {
#line 399 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__Ids_6);
    }
#line 401 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 400 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_10 = recompilation__usage__STATE_VARIABLE_WriteComma_0_9;
#line 401 "recompilation.usage.m"
    else
#line 402 "recompilation.usage.m"
      {
#line 402 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_40;
#line 402 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_41;

#line 305 "recompilation.usage.m"
#line 305 "recompilation.usage.m"
        switch (recompilation__usage__STATE_VARIABLE_WriteComma_0_9) {
#line 305 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 305 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 306 "recompilation.usage.m"
            {
#line 306 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 303 "recompilation.usage.m"
            {
#line 304 "recompilation.usage.m"
              {
#line 304 "recompilation.usage.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t");
              }
#line 303 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
        }
#line 308 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_10 = (MR_Integer) 1;
#line 425 "recompilation.usage.m"
        {
#line 425 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_40, (MR_Integer) 5);
        }
#line 426 "recompilation.usage.m"
        {
#line 426 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_40);
        }
#line 427 "recompilation.usage.m"
        {
#line 427 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 428 "recompilation.usage.m"
        {
#line 428 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[5], recompilation__usage__Ids_6, &recompilation__usage__ItemList_41);
        }
#line 429 "recompilation.usage.m"
        {
#line 429 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[24], recompilation__usage__ItemList_41, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_9[1]);
        }
#line 431 "recompilation.usage.m"
        {
#line 431 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 431 "recompilation.usage.m"
          return;
        }
#line 402 "recompilation.usage.m"
      }
#line 401 "recompilation.usage.m"
  }
#line 395 "recompilation.usage.m"
}

#line 390 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0_1(
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 390 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 390 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 390 "recompilation.usage.m"
{
#line 390 "recompilation.usage.m"
  {
#line 390 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 390 "recompilation.usage.m"
    {
#line 390 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 390 "recompilation.usage.m"
      return;
    }
#line 390 "recompilation.usage.m"
  }
#line 390 "recompilation.usage.m"
}

#line 379 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_3_3_p_0(
#line 379 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 379 "recompilation.usage.m"
{
#line 383 "recompilation.usage.m"
  {
#line 383 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__PredIdModuleNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleNames_7;
#line 383 "recompilation.usage.m"
    MR_Word recompilation__usage__V_10_10;
#line 386 "recompilation.usage.m"
    MR_Word recompilation__usage__V_12_12;
#line 386 "recompilation.usage.m"
    MR_Word recompilation__usage__V_26_26;

#line 384 "recompilation.usage.m"
    {
#line 384 "recompilation.usage.m"
      recompilation__usage__V_10_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &recompilation__usage_scalar_common_1[4], recompilation__usage__PredIdModuleNames_5);
    }
#line 384 "recompilation.usage.m"
    {
#line 384 "recompilation.usage.m"
      recompilation__usage__ModuleNames_7 = mercury__assoc_list__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, recompilation__usage__TypeCtorInfo_21_21, recompilation__usage__V_10_10);
    }
#line 385 "recompilation.usage.m"
    {
#line 385 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 386 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__ModuleNames_7)) == (MR_mktag((MR_Integer) 1)));
#line 386 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 386 "recompilation.usage.m"
      {
#line 386 "recompilation.usage.m"
        recompilation__usage__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ModuleNames_7, (MR_Integer) 0)));
#line 386 "recompilation.usage.m"
        recompilation__usage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__ModuleNames_7, (MR_Integer) 1)));
#line 386 "recompilation.usage.m"
        {
#line 386 "recompilation.usage.m"
          recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__Qualifier_4, recompilation__usage__V_26_26);
        }
#line 386 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 386 "recompilation.usage.m"
          recompilation__usage__succeeded = (recompilation__usage__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "recompilation.usage.m"
      }
#line 388 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 388 "recompilation.usage.m"
      {
#line 388 "recompilation.usage.m"
      }
#line 388 "recompilation.usage.m"
    else
#line 389 "recompilation.usage.m"
      {
#line 389 "recompilation.usage.m"
        {
#line 389 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => (");
        }
#line 390 "recompilation.usage.m"
        {
#line 390 "recompilation.usage.m"
          mercury__io__write_list_5_p_0(recompilation__usage__TypeCtorInfo_21_21, recompilation__usage__ModuleNames_7, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[22]);
        }
#line 392 "recompilation.usage.m"
        {
#line 392 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 392 "recompilation.usage.m"
          return;
        }
#line 389 "recompilation.usage.m"
      }
#line 383 "recompilation.usage.m"
  }
#line 379 "recompilation.usage.m"
}

#line 430 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_2(
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 430 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 430 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 430 "recompilation.usage.m"
{
#line 430 "recompilation.usage.m"
  {
#line 430 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 430 "recompilation.usage.m"
    {
#line 430 "recompilation.usage.m"
      recompilation__usage__write_resolved_item_set_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) recompilation__usage__wrapper_arg_1));
#line 430 "recompilation.usage.m"
      return;
    }
#line 430 "recompilation.usage.m"
  }
#line 430 "recompilation.usage.m"
}

#line 17475 "recompilation.usage.c"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0_1(
#line 17478 "recompilation.usage.c"
  MR_Box recompilation__usage__closure_arg,
#line 17480 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 17482 "recompilation.usage.c"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 17484 "recompilation.usage.c"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 17486 "recompilation.usage.c"
{
#line 17488 "recompilation.usage.c"
  {
#line 17490 "recompilation.usage.c"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 17493 "recompilation.usage.c"
    {
#line 17495 "recompilation.usage.c"
      recompilation__usage__write_pred_or_func_matches_3_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 17497 "recompilation.usage.c"
      return;
    }
#line 17500 "recompilation.usage.c"
  }
#line 17502 "recompilation.usage.c"
}

#line 359 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_pred_or_func_matches_6_p_0(
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 359 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 359 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13)
#line 359 "recompilation.usage.m"
{
#line 363 "recompilation.usage.m"
  {
#line 363 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 363 "recompilation.usage.m"
    MR_Word recompilation__usage__Ids_11;
#line 364 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_Ids_11;

#line 364 "recompilation.usage.m"
    {
#line 364 "recompilation.usage.m"
      recompilation__usage__conv0_Ids_11 = recompilation__extract_pred_or_func_set_2_f_0((MR_Word) &recompilation__usage_scalar_common_1[3], (MR_Word) &recompilation__usage_scalar_common_1[7], (MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__UsedItems_8, recompilation__usage__ItemType_7);
    }
#line 364 "recompilation.usage.m"
    recompilation__usage__Ids_11 = ((MR_Word) recompilation__usage__conv0_Ids_11);
#line 365 "recompilation.usage.m"
    {
#line 365 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__Ids_11);
    }
#line 367 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 366 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_13 = recompilation__usage__STATE_VARIABLE_WriteComma_0_12;
#line 367 "recompilation.usage.m"
    else
#line 368 "recompilation.usage.m"
      {
#line 368 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_51;
#line 368 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_52;

#line 305 "recompilation.usage.m"
#line 305 "recompilation.usage.m"
        switch (recompilation__usage__STATE_VARIABLE_WriteComma_0_12) {
#line 305 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 305 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 306 "recompilation.usage.m"
            {
#line 306 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 303 "recompilation.usage.m"
            {
#line 304 "recompilation.usage.m"
              {
#line 304 "recompilation.usage.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t");
              }
#line 303 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
        }
#line 308 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
#line 425 "recompilation.usage.m"
        {
#line 425 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_51, recompilation__usage__ItemType_7);
        }
#line 426 "recompilation.usage.m"
        {
#line 426 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_51);
        }
#line 427 "recompilation.usage.m"
        {
#line 427 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 428 "recompilation.usage.m"
        {
#line 428 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recompilation__usage_scalar_common_2[3], recompilation__usage__Ids_11, &recompilation__usage__ItemList_52);
        }
#line 429 "recompilation.usage.m"
        {
#line 429 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[21], recompilation__usage__ItemList_52, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_9[0]);
        }
#line 431 "recompilation.usage.m"
        {
#line 431 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 431 "recompilation.usage.m"
          return;
        }
#line 368 "recompilation.usage.m"
      }
#line 363 "recompilation.usage.m"
  }
#line 359 "recompilation.usage.m"
}

#line 347 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_4_3_p_0(
#line 347 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 347 "recompilation.usage.m"
{
#line 350 "recompilation.usage.m"
  {
#line 350 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 350 "recompilation.usage.m"
    MR_Word recompilation__usage__Qualifier_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 350 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));

#line 351 "recompilation.usage.m"
    {
#line 351 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__Qualifier_4);
    }
#line 352 "recompilation.usage.m"
    {
#line 352 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__usage__Qualifier_4, recompilation__usage__ModuleName_5);
    }
#line 354 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 354 "recompilation.usage.m"
      {
#line 354 "recompilation.usage.m"
      }
#line 354 "recompilation.usage.m"
    else
#line 355 "recompilation.usage.m"
      {
#line 355 "recompilation.usage.m"
        {
#line 355 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 356 "recompilation.usage.m"
        {
#line 356 "recompilation.usage.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_5);
#line 356 "recompilation.usage.m"
          return;
        }
#line 355 "recompilation.usage.m"
      }
#line 350 "recompilation.usage.m"
  }
#line 347 "recompilation.usage.m"
}

#line 344 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0_1(
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 344 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 344 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 344 "recompilation.usage.m"
{
#line 344 "recompilation.usage.m"
  {
#line 344 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 344 "recompilation.usage.m"
    {
#line 344 "recompilation.usage.m"
      recompilation__usage__write_simple_item_matches_4_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 344 "recompilation.usage.m"
      return;
    }
#line 344 "recompilation.usage.m"
  }
#line 344 "recompilation.usage.m"
}

#line 333 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_3_3_p_0(
#line 333 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 333 "recompilation.usage.m"
{
#line 337 "recompilation.usage.m"
  {
#line 337 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 337 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_25_25;
#line 337 "recompilation.usage.m"
    MR_String recompilation__usage__Name_4;
#line 337 "recompilation.usage.m"
    MR_Integer recompilation__usage__Arity_5;
#line 337 "recompilation.usage.m"
    MR_Word recompilation__usage__Matches_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "recompilation.usage.m"
    MR_Word recompilation__usage__MatchList_8;
#line 337 "recompilation.usage.m"
    MR_Word recompilation__usage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 337 "recompilation.usage.m"
    MR_Word recompilation__usage__V_13_13;

#line 337 "recompilation.usage.m"
    recompilation__usage__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, (MR_Integer) 0)));
#line 337 "recompilation.usage.m"
    recompilation__usage__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__V_11_11, (MR_Integer) 1)));
#line 339 "recompilation.usage.m"
    {
#line 339 "recompilation.usage.m"
      recompilation__usage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 339 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_13_13, 0) = ((MR_Box) (recompilation__usage__Name_4));
#line 339 "recompilation.usage.m"
    }
#line 338 "recompilation.usage.m"
    {
#line 338 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, recompilation__usage__V_13_13);
    }
#line 340 "recompilation.usage.m"
    {
#line 340 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 341 "recompilation.usage.m"
    {
#line 341 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__Arity_5);
    }
#line 342 "recompilation.usage.m"
    {
#line 342 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) " - (");
    }
#line 17764 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 343 "recompilation.usage.m"
    {
#line 343 "recompilation.usage.m"
      mercury__map__to_assoc_list_2_p_0(recompilation__usage__TypeCtorInfo_25_25, recompilation__usage__TypeCtorInfo_25_25, recompilation__usage__Matches_6, &recompilation__usage__MatchList_8);
    }
#line 344 "recompilation.usage.m"
    {
#line 344 "recompilation.usage.m"
      mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[12], recompilation__usage__MatchList_8, (MR_String) ", ", (MR_Word) &recompilation__usage_scalar_common_1[19]);
    }
#line 345 "recompilation.usage.m"
    {
#line 345 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
#line 345 "recompilation.usage.m"
      return;
    }
#line 337 "recompilation.usage.m"
  }
#line 333 "recompilation.usage.m"
}

#line 330 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0_1(
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 330 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 330 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_3)
#line 330 "recompilation.usage.m"
{
#line 330 "recompilation.usage.m"
  {
#line 330 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 330 "recompilation.usage.m"
    {
#line 330 "recompilation.usage.m"
      recompilation__usage__write_simple_item_matches_3_3_p_0(((MR_Word) recompilation__usage__wrapper_arg_1));
#line 330 "recompilation.usage.m"
      return;
    }
#line 330 "recompilation.usage.m"
  }
#line 330 "recompilation.usage.m"
}

#line 310 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_simple_item_matches_6_p_0(
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__ItemType_7,
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__UsedItems_8,
#line 310 "recompilation.usage.m"
  MR_Word recompilation__usage__STATE_VARIABLE_WriteComma_0_12,
#line 310 "recompilation.usage.m"
  MR_Word * recompilation__usage__STATE_VARIABLE_WriteComma_13)
#line 310 "recompilation.usage.m"
{
#line 313 "recompilation.usage.m"
  {
#line 313 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 313 "recompilation.usage.m"
    MR_Word recompilation__usage__Ids_11;
#line 314 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_Ids_11;

#line 314 "recompilation.usage.m"
    {
#line 314 "recompilation.usage.m"
      recompilation__usage__conv0_Ids_11 = recompilation__extract_simple_item_set_2_f_0((MR_Word) &recompilation__usage_scalar_common_1[3], (MR_Word) &recompilation__usage_scalar_common_1[7], (MR_Word) &recompilation__usage_scalar_common_1[10], recompilation__usage__UsedItems_8, recompilation__usage__ItemType_7);
    }
#line 314 "recompilation.usage.m"
    recompilation__usage__Ids_11 = ((MR_Word) recompilation__usage__conv0_Ids_11);
#line 315 "recompilation.usage.m"
    {
#line 315 "recompilation.usage.m"
      recompilation__usage__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], recompilation__usage__Ids_11);
    }
#line 317 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 316 "recompilation.usage.m"
      *recompilation__usage__STATE_VARIABLE_WriteComma_13 = recompilation__usage__STATE_VARIABLE_WriteComma_0_12;
#line 317 "recompilation.usage.m"
    else
#line 318 "recompilation.usage.m"
      {
#line 318 "recompilation.usage.m"
        MR_String recompilation__usage__ItemTypeStr_38;
#line 318 "recompilation.usage.m"
        MR_Word recompilation__usage__ItemList_39;

#line 305 "recompilation.usage.m"
#line 305 "recompilation.usage.m"
        switch (recompilation__usage__STATE_VARIABLE_WriteComma_0_12) {
#line 305 "recompilation.usage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 305 "recompilation.usage.m"
          case (MR_Integer) 0:
#line 306 "recompilation.usage.m"
            {
#line 306 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
          case (MR_Integer) 1:
#line 303 "recompilation.usage.m"
            {
#line 304 "recompilation.usage.m"
              {
#line 304 "recompilation.usage.m"
                mercury__io__write_string_3_p_0((MR_String) ",\n\t");
              }
#line 303 "recompilation.usage.m"
            }
#line 305 "recompilation.usage.m"
            break;
#line 305 "recompilation.usage.m"
        }
#line 308 "recompilation.usage.m"
        *recompilation__usage__STATE_VARIABLE_WriteComma_13 = (MR_Integer) 1;
#line 326 "recompilation.usage.m"
        {
#line 326 "recompilation.usage.m"
          recompilation__string_to_item_type_2_p_1(&recompilation__usage__ItemTypeStr_38, recompilation__usage__ItemType_7);
        }
#line 327 "recompilation.usage.m"
        {
#line 327 "recompilation.usage.m"
          mercury__io__write_string_3_p_0(recompilation__usage__ItemTypeStr_38);
        }
#line 328 "recompilation.usage.m"
        {
#line 328 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "(\n\t\t");
        }
#line 329 "recompilation.usage.m"
        {
#line 329 "recompilation.usage.m"
          mercury__map__to_assoc_list_2_p_0((MR_Word) &recompilation__usage_scalar_common_1[0], (MR_Word) &recompilation__usage_scalar_common_1[2], recompilation__usage__Ids_11, &recompilation__usage__ItemList_39);
        }
#line 330 "recompilation.usage.m"
        {
#line 330 "recompilation.usage.m"
          mercury__io__write_list_5_p_0((MR_Word) &recompilation__usage_scalar_common_1[11], recompilation__usage__ItemList_39, (MR_String) ",\n\t\t", (MR_Word) &recompilation__usage_scalar_common_1[18]);
        }
#line 331 "recompilation.usage.m"
        {
#line 331 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t)");
#line 331 "recompilation.usage.m"
          return;
        }
#line 318 "recompilation.usage.m"
      }
#line 313 "recompilation.usage.m"
  }
#line 310 "recompilation.usage.m"
}

#line 292 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_classname_and_arity_3_p_0(
#line 292 "recompilation.usage.m"
  MR_Word recompilation__usage__HeadVar__1_1)
#line 292 "recompilation.usage.m"
{
#line 294 "recompilation.usage.m"
  {
#line 294 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 294 "recompilation.usage.m"
    MR_Word recompilation__usage__ClassName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 0)));
#line 294 "recompilation.usage.m"
    MR_Integer recompilation__usage__ClassArity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__usage__HeadVar__1_1, (MR_Integer) 1)));

#line 295 "recompilation.usage.m"
    {
#line 295 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ClassName_4);
    }
#line 296 "recompilation.usage.m"
    {
#line 296 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "/");
    }
#line 297 "recompilation.usage.m"
    {
#line 297 "recompilation.usage.m"
      mercury__io__write_int_3_p_0(recompilation__usage__ClassArity_5);
#line 297 "recompilation.usage.m"
      return;
    }
#line 294 "recompilation.usage.m"
  }
#line 292 "recompilation.usage.m"
}

#line 267 "recompilation.usage.m"
static MR_Box MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0_1(
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 267 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2)
#line 267 "recompilation.usage.m"
{
#line 267 "recompilation.usage.m"
  {
#line 267 "recompilation.usage.m"
    MR_Box recompilation__usage__wrapper_arg_3;
#line 267 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;
#line 267 "recompilation.usage.m"
    MR_Word recompilation__usage__conv2_HeadVar__4_50;

#line 267 "recompilation.usage.m"
    {
#line 267 "recompilation.usage.m"
      recompilation__usage__conv2_HeadVar__4_50 = recompilation__usage__IntroducedFrom__func__write_module_name_and_used_items__267__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
    }
#line 267 "recompilation.usage.m"
    recompilation__usage__wrapper_arg_3 = ((MR_Box) (recompilation__usage__conv2_HeadVar__4_50));
#line 267 "recompilation.usage.m"
    return recompilation__usage__wrapper_arg_3;
#line 267 "recompilation.usage.m"
  }
#line 267 "recompilation.usage.m"
}

#line 233 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_module_name_and_used_items_7_p_0(
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__RecompInfo_8,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__TimestampMap_9,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInstances_10,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleName_11,
#line 233 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleUsedItems_12)
#line 233 "recompilation.usage.m"
{
#line 239 "recompilation.usage.m"
  {
#line 239 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 239 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_64_64;
#line 239 "recompilation.usage.m"
    MR_Word recompilation__usage__FileKind_14;
#line 239 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleTimestamp_15;
#line 239 "recompilation.usage.m"
    MR_Word recompilation__usage__NeedQualifier_16;
#line 239 "recompilation.usage.m"
    MR_Word recompilation__usage__V_36_36;
#line 239 "recompilation.usage.m"
    MR_String recompilation__usage__V_37_37;
#line 244 "recompilation.usage.m"
    MR_Box recompilation__usage__conv0_V_36_36;
#line 286 "recompilation.usage.m"
    MR_Word recompilation__usage__ModuleVersions_17;
#line 259 "recompilation.usage.m"
    MR_Word recompilation__usage__TypeCtorInfo_66_66;
#line 259 "recompilation.usage.m"
    MR_Word recompilation__usage__V_46_46;
#line 260 "recompilation.usage.m"
    MR_Word recompilation__usage__V_61_61;
#line 260 "recompilation.usage.m"
    MR_Word recompilation__usage__V_62_62;
#line 260 "recompilation.usage.m"
    MR_Word recompilation__usage__V_63_63;
#line 260 "recompilation.usage.m"
    MR_Box recompilation__usage__conv1_ModuleVersions_17;

#line 240 "recompilation.usage.m"
    {
#line 240 "recompilation.usage.m"
      mercury__io__nl_2_p_0();
    }
#line 241 "recompilation.usage.m"
    {
#line 241 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 242 "recompilation.usage.m"
    {
#line 242 "recompilation.usage.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(recompilation__usage__ModuleName_11);
    }
#line 243 "recompilation.usage.m"
    {
#line 243 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 18074 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_64_64 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 244 "recompilation.usage.m"
    {
#line 244 "recompilation.usage.m"
      mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_64_64, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, recompilation__usage__TimestampMap_9, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv0_V_36_36);
    }
#line 244 "recompilation.usage.m"
    recompilation__usage__V_36_36 = ((MR_Word) recompilation__usage__conv0_V_36_36);
#line 245 "recompilation.usage.m"
    recompilation__usage__FileKind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 0)));
#line 245 "recompilation.usage.m"
    recompilation__usage__ModuleTimestamp_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 1)));
#line 245 "recompilation.usage.m"
    recompilation__usage__NeedQualifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_36_36, (MR_Integer) 2)));
#line 246 "recompilation.usage.m"
    {
#line 246 "recompilation.usage.m"
      recompilation__usage__V_37_37 = parse_tree__file_kind__file_kind_to_extension_1_f_0(recompilation__usage__FileKind_14);
    }
#line 246 "recompilation.usage.m"
    {
#line 246 "recompilation.usage.m"
      mercury__io__write_string_3_p_0(recompilation__usage__V_37_37);
    }
#line 247 "recompilation.usage.m"
    {
#line 247 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 248 "recompilation.usage.m"
    {
#line 248 "recompilation.usage.m"
      recompilation__write_version_number_3_p_0(recompilation__usage__ModuleTimestamp_15);
    }
#line 252 "recompilation.usage.m"
#line 252 "recompilation.usage.m"
    switch (recompilation__usage__NeedQualifier_16) {
#line 252 "recompilation.usage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 252 "recompilation.usage.m"
      case (MR_Integer) 1:
#line 253 "recompilation.usage.m"
        {
#line 254 "recompilation.usage.m"
          {
#line 254 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 253 "recompilation.usage.m"
        }
#line 252 "recompilation.usage.m"
        break;
#line 252 "recompilation.usage.m"
      case (MR_Integer) 0:
#line 250 "recompilation.usage.m"
        {
#line 251 "recompilation.usage.m"
          {
#line 251 "recompilation.usage.m"
            mercury__io__write_string_3_p_0((MR_String) ", used)");
          }
#line 250 "recompilation.usage.m"
        }
#line 252 "recompilation.usage.m"
        break;
#line 252 "recompilation.usage.m"
    }
#line 259 "recompilation.usage.m"
    {
#line 259 "recompilation.usage.m"
      recompilation__usage__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(recompilation__usage__ModuleName_11);
    }
#line 259 "recompilation.usage.m"
    recompilation__usage__succeeded = !(recompilation__usage__succeeded);
#line 259 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 259 "recompilation.usage.m"
      {
#line 260 "recompilation.usage.m"
        recompilation__usage__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 0)));
#line 260 "recompilation.usage.m"
        recompilation__usage__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 1)));
#line 260 "recompilation.usage.m"
        recompilation__usage__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 2)));
#line 260 "recompilation.usage.m"
        recompilation__usage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__RecompInfo_8, (MR_Integer) 3)));
#line 18161 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_66_66 = (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0;
#line 260 "recompilation.usage.m"
        {
#line 260 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_64_64, recompilation__usage__TypeCtorInfo_66_66, recompilation__usage__V_46_46, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv1_ModuleVersions_17);
        }
#line 260 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 260 "recompilation.usage.m"
          {
#line 260 "recompilation.usage.m"
            recompilation__usage__ModuleVersions_17 = ((MR_Word) recompilation__usage__conv1_ModuleVersions_17);
#line 260 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 260 "recompilation.usage.m"
          }
#line 259 "recompilation.usage.m"
      }
#line 286 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 266 "recompilation.usage.m"
      {
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeInfo_67_67 = (MR_Word) &recompilation__usage_scalar_common_1[1];
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__TypeCtorInfo_72_72;
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleItemVersions_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ModuleVersions_17, (MR_Integer) 0)));
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleInstanceVersions_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__ModuleVersions_17, (MR_Integer) 1)));
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedItemVersions_20;
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedInstanceVersions_26;
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedVersionNumbers_27;
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__V_47_47;
#line 266 "recompilation.usage.m"
        MR_Word recompilation__usage__V_51_51;
#line 276 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleUsedInstances_25;
#line 273 "recompilation.usage.m"
        MR_Box recompilation__usage__conv3_ModuleUsedInstances_25;

#line 267 "recompilation.usage.m"
        {
#line 267 "recompilation.usage.m"
          recompilation__usage__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 267 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_47_47, 0) = ((MR_Box) (&recompilation__usage_scalar_common_6[0]));
#line 267 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_47_47, 1) = ((MR_Box) (recompilation__usage__write_module_name_and_used_items_7_p_0_1));
#line 267 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 267 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__V_47_47, 3) = ((MR_Box) (recompilation__usage__ModuleUsedItems_12));
#line 267 "recompilation.usage.m"
        }
#line 18221 "recompilation.usage.c"
        recompilation__usage__TypeCtorInfo_72_72 = (MR_Word) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0;
#line 272 "recompilation.usage.m"
        {
#line 272 "recompilation.usage.m"
          recompilation__usage__V_51_51 = mercury__map__init_0_f_0((MR_Word) &recompilation__usage_scalar_common_1[0], recompilation__usage__TypeCtorInfo_72_72);
        }
#line 267 "recompilation.usage.m"
        {
#line 267 "recompilation.usage.m"
          recompilation__usage__ModuleUsedItemVersions_20 = recompilation__map_ids_3_f_0(recompilation__usage__TypeInfo_67_67, recompilation__usage__TypeInfo_67_67, recompilation__usage__V_47_47, recompilation__usage__ModuleItemVersions_18, ((MR_Box) (recompilation__usage__V_51_51)));
        }
#line 273 "recompilation.usage.m"
        {
#line 273 "recompilation.usage.m"
          recompilation__usage__succeeded = mercury__map__search_3_p_0(recompilation__usage__TypeCtorInfo_64_64, (MR_Word) &recompilation__usage_scalar_common_2[1], recompilation__usage__ModuleInstances_10, ((MR_Box) (recompilation__usage__ModuleName_11)), &recompilation__usage__conv3_ModuleUsedInstances_25);
        }
#line 273 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 273 "recompilation.usage.m"
          {
#line 273 "recompilation.usage.m"
            recompilation__usage__ModuleUsedInstances_25 = ((MR_Word) recompilation__usage__conv3_ModuleUsedInstances_25);
#line 273 "recompilation.usage.m"
            recompilation__usage__succeeded = MR_TRUE;
#line 273 "recompilation.usage.m"
          }
#line 276 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 274 "recompilation.usage.m"
          {
#line 274 "recompilation.usage.m"
            {
#line 274 "recompilation.usage.m"
              mercury__map__select_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__TypeCtorInfo_72_72, recompilation__usage__ModuleInstanceVersions_19, recompilation__usage__ModuleUsedInstances_25, &recompilation__usage__ModuleUsedInstanceVersions_26);
            }
#line 274 "recompilation.usage.m"
          }
#line 276 "recompilation.usage.m"
        else
#line 277 "recompilation.usage.m"
          {
#line 277 "recompilation.usage.m"
            {
#line 277 "recompilation.usage.m"
              mercury__map__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__TypeCtorInfo_72_72, &recompilation__usage__ModuleUsedInstanceVersions_26);
            }
#line 277 "recompilation.usage.m"
          }
#line 280 "recompilation.usage.m"
        {
#line 280 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) " => ");
        }
#line 281 "recompilation.usage.m"
        {
#line 281 "recompilation.usage.m"
          recompilation__usage__ModuleUsedVersionNumbers_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__ModuleUsedVersionNumbers_27, 0) = ((MR_Box) (recompilation__usage__ModuleUsedItemVersions_20));
#line 281 "recompilation.usage.m"
          MR_hl_field(MR_mktag(0), recompilation__usage__ModuleUsedVersionNumbers_27, 1) = ((MR_Box) (recompilation__usage__ModuleUsedInstanceVersions_26));
#line 281 "recompilation.usage.m"
        }
#line 284 "recompilation.usage.m"
        {
#line 284 "recompilation.usage.m"
          recompilation__version__write_version_numbers_3_p_0(recompilation__usage__ModuleUsedVersionNumbers_27);
        }
#line 285 "recompilation.usage.m"
        {
#line 285 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 285 "recompilation.usage.m"
          return;
        }
#line 266 "recompilation.usage.m"
      }
#line 286 "recompilation.usage.m"
    else
#line 289 "recompilation.usage.m"
      {
#line 289 "recompilation.usage.m"
        {
#line 289 "recompilation.usage.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 289 "recompilation.usage.m"
          return;
        }
#line 289 "recompilation.usage.m"
      }
#line 239 "recompilation.usage.m"
  }
#line 233 "recompilation.usage.m"
}

#line 224 "recompilation.usage.m"
static void MR_CALL 
recompilation__usage__write_usage_file_2_6_p_0_3(
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__closure_arg,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_1,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_2,
#line 224 "recompilation.usage.m"
  MR_Box recompilation__usage__wrapper_arg_3,
#line 224 "recompilation.usage.m"
  MR_Box * recompilation__usage__wrapper_arg_4)
#line 224 "recompilation.usage.m"
{
#line 224 "recompilation.usage.m"
  {
#line 224 "recompilation.usage.m"
    MR_Box recompilation__usage__closure = recompilation__usage__closure_arg;

#line 224 "recompilation.usage.m"
    {
#line 224 "recompilation.usage.m"
      recompilation__usage__write_module_name_and_used_items_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__closure, (MR_Integer) 5))), ((MR_Word) recompilation__usage__wrapper_arg_1), ((MR_Word) recompilation__usage__wrapper_arg_2));
#line 224 "recompilation.usage.m"
      return;
    }
#line 224 "recompilation.usage.m"
  }
#line 224 "recompilation.usage.m"
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
  MR_Word recompilation__usage__TimestampMap_10)
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
    MR_Word recompilation__usage__V_13_13;
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
#line 18502 "recompilation.usage.c"
    recompilation__usage__TypeCtorInfo_115_115 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 163 "recompilation.usage.m"
    {
#line 163 "recompilation.usage.m"
      mercury__map__lookup_3_p_0(recompilation__usage__TypeCtorInfo_115_115, (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_timestamp_0, recompilation__usage__TimestampMap_10, ((MR_Box) (recompilation__usage__ThisModuleName_12)), &recompilation__usage__conv0_V_35_35);
    }
#line 163 "recompilation.usage.m"
    recompilation__usage__V_35_35 = ((MR_Word) recompilation__usage__conv0_V_35_35);
#line 164 "recompilation.usage.m"
    recompilation__usage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__V_35_35, (MR_Integer) 0)));
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
      recompilation__usage__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_name_0, recompilation__usage__UsedClasses_20);
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
#line 18751 "recompilation.usage.c"
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
#line 224 "recompilation.usage.m"
    {
#line 224 "recompilation.usage.m"
      recompilation__usage__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 0) = ((MR_Box) (&recompilation__usage_scalar_common_5[0]));
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 1) = ((MR_Box) (recompilation__usage__write_usage_file_2_6_p_0_3));
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 3) = ((MR_Box) (recompilation__usage__RecompInfo_9));
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 4) = ((MR_Box) (recompilation__usage__TimestampMap_10));
#line 224 "recompilation.usage.m"
      MR_hl_field(MR_mktag(0), recompilation__usage__V_95_95, 5) = ((MR_Box) (recompilation__usage__ModuleInstances_22));
#line 224 "recompilation.usage.m"
    }
#line 223 "recompilation.usage.m"
    {
#line 223 "recompilation.usage.m"
      mercury__map__foldl_4_p_2(recompilation__usage__TypeCtorInfo_115_115, (MR_Word) &recompilation__usage_scalar_common_3[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, recompilation__usage__V_95_95, recompilation__usage__ImportedItems_21, ((MR_Box) ((MR_Integer) 0)), &recompilation__usage__conv1_STATE_VARIABLE_IO_96_96);
    }
#line 230 "recompilation.usage.m"
    {
#line 230 "recompilation.usage.m"
      mercury__io__nl_2_p_0();
    }
#line 231 "recompilation.usage.m"
    {
#line 231 "recompilation.usage.m"
      mercury__io__write_string_3_p_0((MR_String) "done.\n");
#line 231 "recompilation.usage.m"
      return;
    }
#line 156 "recompilation.usage.m"
  }
#line 151 "recompilation.usage.m"
}

#line 81 "recompilation.usage.m"
MR_Integer MR_CALL 
recompilation__usage__usage_file_version_number_0_f_0(void)
#line 81 "recompilation.usage.m"
{
#line 494 "recompilation.usage.m"
  {
#line 494 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;

#line 494 "recompilation.usage.m"
    return (MR_Integer) 2;
#line 494 "recompilation.usage.m"
  }
#line 81 "recompilation.usage.m"
}

#line 74 "recompilation.usage.m"
void MR_CALL 
recompilation__usage__write_usage_file_5_p_0(
#line 74 "recompilation.usage.m"
  MR_Word recompilation__usage__ModuleInfo_6,
#line 74 "recompilation.usage.m"
  MR_Word recompilation__usage__NestedSubModules_7,
#line 74 "recompilation.usage.m"
  MR_Word recompilation__usage__MaybeTimestampMap_8)
#line 74 "recompilation.usage.m"
{
#line 113 "recompilation.usage.m"
  {
#line 113 "recompilation.usage.m"
    MR_bool recompilation__usage__succeeded;
#line 113 "recompilation.usage.m"
    MR_Word recompilation__usage__MaybeRecompInfo_10;
#line 147 "recompilation.usage.m"
    MR_Word recompilation__usage__RecompInfo_11;
#line 147 "recompilation.usage.m"
    MR_Word recompilation__usage__TimestampMap_12;

#line 114 "recompilation.usage.m"
    {
#line 114 "recompilation.usage.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__MaybeRecompInfo_10);
    }
#line 116 "recompilation.usage.m"
    recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__MaybeRecompInfo_10)) == (MR_mktag((MR_Integer) 1)));
#line 116 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 116 "recompilation.usage.m"
      {
#line 116 "recompilation.usage.m"
        recompilation__usage__RecompInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeRecompInfo_10, (MR_Integer) 0)));
#line 117 "recompilation.usage.m"
        recompilation__usage__succeeded = ((MR_tag((MR_Word) recompilation__usage__MaybeTimestampMap_8)) == (MR_mktag((MR_Integer) 1)));
#line 117 "recompilation.usage.m"
        if (recompilation__usage__succeeded)
#line 117 "recompilation.usage.m"
          recompilation__usage__TimestampMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__usage__MaybeTimestampMap_8, (MR_Integer) 0)));
#line 116 "recompilation.usage.m"
      }
#line 147 "recompilation.usage.m"
    if (recompilation__usage__succeeded)
#line 119 "recompilation.usage.m"
      {
#line 119 "recompilation.usage.m"
        MR_Word recompilation__usage__Globals_13;
#line 119 "recompilation.usage.m"
        MR_Word recompilation__usage__Verbose_14;
#line 119 "recompilation.usage.m"
        MR_Word recompilation__usage__ModuleName_15;
#line 119 "recompilation.usage.m"
        MR_String recompilation__usage__FileName_16;
#line 119 "recompilation.usage.m"
        MR_Word recompilation__usage__FileResult_17;

#line 119 "recompilation.usage.m"
        {
#line 119 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__Globals_13);
        }
#line 120 "recompilation.usage.m"
        {
#line 120 "recompilation.usage.m"
          libs__globals__lookup_bool_option_3_p_0(recompilation__usage__Globals_13, (MR_Integer) 45, &recompilation__usage__Verbose_14);
        }
#line 121 "recompilation.usage.m"
        {
#line 121 "recompilation.usage.m"
          libs__file_util__maybe_write_string_4_p_0(recompilation__usage__Verbose_14, (MR_String) "% Writing recompilation compilation dependency information\n");
        }
#line 125 "recompilation.usage.m"
        {
#line 125 "recompilation.usage.m"
          hlds__hlds_module__module_info_get_name_2_p_0(recompilation__usage__ModuleInfo_6, &recompilation__usage__ModuleName_15);
        }
#line 126 "recompilation.usage.m"
        {
#line 126 "recompilation.usage.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(recompilation__usage__Globals_13, recompilation__usage__ModuleName_15, (MR_String) ".used", (MR_Integer) 0, &recompilation__usage__FileName_16);
        }
#line 128 "recompilation.usage.m"
        {
#line 128 "recompilation.usage.m"
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
#line 130 "recompilation.usage.m"
          {
#line 130 "recompilation.usage.m"
            MR_Word recompilation__usage__Stream0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__usage__FileResult_17, (MR_Integer) 0)));
#line 130 "recompilation.usage.m"
            MR_Word recompilation__usage__OldStream_19;
#line 130 "recompilation.usage.m"
            MR_Word recompilation__usage__Stream_20;
#line 130 "recompilation.usage.m"
            MR_Word recompilation__usage__V_43_43;

#line 131 "recompilation.usage.m"
            {
#line 131 "recompilation.usage.m"
              mercury__io__set_output_stream_4_p_0(recompilation__usage__Stream0_18, &recompilation__usage__OldStream_19);
            }
#line 133 "recompilation.usage.m"
            {
#line 133 "recompilation.usage.m"
              recompilation__usage__V_43_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, recompilation__usage__NestedSubModules_7);
            }
#line 132 "recompilation.usage.m"
            {
#line 132 "recompilation.usage.m"
              recompilation__usage__write_usage_file_2_6_p_0(recompilation__usage__ModuleInfo_6, recompilation__usage__V_43_43, recompilation__usage__RecompInfo_11, recompilation__usage__TimestampMap_12);
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
#line 130 "recompilation.usage.m"
          }
#line 119 "recompilation.usage.m"
      }
#line 147 "recompilation.usage.m"
    else
#line 147 "recompilation.usage.m"
      {
#line 147 "recompilation.usage.m"
      }
#line 113 "recompilation.usage.m"
  }
#line 74 "recompilation.usage.m"
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
