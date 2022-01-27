/*
** Automatically generated from `code_info.m'
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


/* :- module ll_backend.code_info. */
/* :- implementation. */

/*
INIT mercury__ll_backend__code_info__init
ENDINIT
*/

#include "ll_backend.code_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
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
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 156 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 162 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2];

#line 168 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2];

#line 171 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0;

#line 174 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1];

#line 177 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1];

#line 180 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1];

#line 183 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1];

#line 186 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 189 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0;

#line 192 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 195 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

#line 198 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

#line 201 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 204 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 207 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 210 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18];

#line 213 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0[18];

#line 216 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0;

#line 219 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1];

#line 222 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1];

#line 225 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1];

#line 228 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1];

#line 231 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 234 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 237 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0;

#line 240 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 243 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 246 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0;

#line 249 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[21];

#line 252 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[21];

#line 255 "ll_backend.code_info.c"
static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[21];

#line 258 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0;

#line 261 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1];

#line 264 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1];

#line 267 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1];

#line 270 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1];

#line 273 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
#line 276 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 278 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 281 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
#line 284 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 286 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 288 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 291 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
#line 294 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 296 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 299 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
#line 302 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 304 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 306 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 309 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
#line 312 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 314 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 317 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
#line 320 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 322 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 324 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 208 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
#line 208 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3);

#line 208 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2);

#line 274 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
#line 274 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3);

#line 274 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2);

#line 857 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
#line 857 "code_info.m"
  MR_Box ll_backend__code_info__closure_arg,
#line 857 "code_info.m"
  MR_Box ll_backend__code_info__wrapper_arg_1);

#line 535 "code_info.m"
static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__TraceLevel_9,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__Globals_10,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_11,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_12,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_13,
#line 535 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 535 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22);

#line 514 "code_info.m"
static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
#line 514 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 514 "code_info.m"
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
#line 514 "code_info.m"
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3);

#line 437 "code_info.m"
static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
#line 437 "code_info.m"
  MR_Word ll_backend__code_info__Globals_3);

#line 184 "code_info.m"
static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
#line 184 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 184 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 184 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7);


static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[10][2];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[5][3];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][5];




static /* final */ const MR_Box ll_backend__code_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_info_scalar_common_2[3]))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__code_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_3[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__code_info_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 547 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 555 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 564 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 572 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0
};

#line 578 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2] = {
  (MR_String) "code_info_static",
  (MR_String) "code_info_persistent"
};

#line 584 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0 = {
  (MR_String) "code_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0,
  NULL,
  NULL
};

#line 599 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

#line 604 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0
  }
};

#line 613 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

#line 618 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1] = {
  (MR_Integer) 0
};

#line 623 "ll_backend.code_info.c"
const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0
};

#line 640 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 649 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0
  }
};

#line 658 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 666 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

#line 674 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

#line 682 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 690 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 698 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 706 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

#line 728 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0[18] = {
  (MR_String) "cip_label_num_src",
  (MR_String) "cip_store_succip",
  (MR_String) "cip_label_layout_info",
  (MR_String) "cip_proc_trace_events",
  (MR_String) "cip_max_reg_r_used",
  (MR_String) "cip_max_reg_f_used",
  (MR_String) "cip_stackslot_max",
  (MR_String) "cip_temp_content_map",
  (MR_String) "cip_persistent_temps",
  (MR_String) "cip_closure_layout_seq",
  (MR_String) "cip_closure_layouts",
  (MR_String) "cip_created_temp_frame",
  (MR_String) "cip_static_cell_info",
  (MR_String) "cip_alloc_sites",
  (MR_String) "cip_used_env_vars",
  (MR_String) "cip_ts_string_table_size",
  (MR_String) "cip_ts_rev_string_table",
  (MR_String) "cip_out_of_line_code"
};

#line 750 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0 = {
  (MR_String) "code_info_persistent",
  (MR_Integer) 18,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0,
  NULL,
  NULL
};

#line 765 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

#line 770 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0
  }
};

#line 779 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

#line 784 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1] = {
  (MR_Integer) 0
};

#line 789 "ll_backend.code_info.c"
const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_persistent_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_persistent_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_persistent",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0
};

#line 806 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 814 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 823 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0
  }
};

#line 831 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 840 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 848 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 857 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[21] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_exprn_opts_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_add_trail_ops_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_add_region_ops_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0
};

#line 882 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[21] = {
  (MR_String) "cis_module_info",
  (MR_String) "cis_globals",
  (MR_String) "cis_exprn_opts",
  (MR_String) "cis_pred_id",
  (MR_String) "cis_proc_id",
  (MR_String) "cis_pred_info",
  (MR_String) "cis_proc_info",
  (MR_String) "cis_proc_label",
  (MR_String) "cis_varset",
  (MR_String) "cis_vartypes",
  (MR_String) "cis_var_slot_count",
  (MR_String) "cis_maybe_trace_info",
  (MR_String) "cis_opt_no_return_calls",
  (MR_String) "cis_emit_trail_ops",
  (MR_String) "cis_opt_trail_ops",
  (MR_String) "cis_emit_region_ops",
  (MR_String) "cis_opt_region_ops",
  (MR_String) "cis_auto_comments",
  (MR_String) "cis_lcmc_null",
  (MR_String) "cis_containing_goal_map",
  (MR_String) "cis_const_struct_map"
};

#line 907 "ll_backend.code_info.c"
static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[21] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 1016 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0 = {
  (MR_String) "code_info_static",
  (MR_Integer) 21,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0,
  ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0,
  NULL
};

#line 1031 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

#line 1036 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0
  }
};

#line 1045 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

#line 1050 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1] = {
  (MR_Integer) 0
};

#line 1055 "ll_backend.code_info.c"
const MR_TypeCtorInfo_Struct ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_info____Unify____code_info_static_0_0_10001)),
  ((MR_Box) (ll_backend__code_info____Compare____code_info_static_0_0_10001)),
  (MR_String) "ll_backend.code_info",
  (MR_String) "code_info_static",
  {     ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0 },
  {     ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0
};

#line 1072 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
#line 1075 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1077 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1079 "ll_backend.code_info.c"
{
#line 1081 "ll_backend.code_info.c"
  {
#line 1083 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1086 "ll_backend.code_info.c"
    {
#line 1088 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1091 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1093 "ll_backend.code_info.c"
  }
#line 1095 "ll_backend.code_info.c"
}

#line 1098 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
#line 1101 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1103 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1105 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1107 "ll_backend.code_info.c"
{
#line 1109 "ll_backend.code_info.c"
  {
#line 1111 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1114 "ll_backend.code_info.c"
    {
#line 1116 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1119 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1121 "ll_backend.code_info.c"
  }
#line 1123 "ll_backend.code_info.c"
}

#line 1126 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
#line 1129 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1131 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1133 "ll_backend.code_info.c"
{
#line 1135 "ll_backend.code_info.c"
  {
#line 1137 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1140 "ll_backend.code_info.c"
    {
#line 1142 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1145 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1147 "ll_backend.code_info.c"
  }
#line 1149 "ll_backend.code_info.c"
}

#line 1152 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
#line 1155 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1157 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1159 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1161 "ll_backend.code_info.c"
{
#line 1163 "ll_backend.code_info.c"
  {
#line 1165 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1168 "ll_backend.code_info.c"
    {
#line 1170 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_persistent_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1173 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1175 "ll_backend.code_info.c"
  }
#line 1177 "ll_backend.code_info.c"
}

#line 1180 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
#line 1183 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1185 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1187 "ll_backend.code_info.c"
{
#line 1189 "ll_backend.code_info.c"
  {
#line 1191 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1194 "ll_backend.code_info.c"
    {
#line 1196 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_static_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1199 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1201 "ll_backend.code_info.c"
  }
#line 1203 "ll_backend.code_info.c"
}

#line 1206 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
#line 1209 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1211 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1213 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1215 "ll_backend.code_info.c"
{
#line 1217 "ll_backend.code_info.c"
  {
#line 1219 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1222 "ll_backend.code_info.c"
    {
#line 1224 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1227 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1229 "ll_backend.code_info.c"
  }
#line 1231 "ll_backend.code_info.c"
}

#line 799 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
#line 799 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4)
#line 799 "code_info.m"
{
#line 594 "code_info.m"
  {
#line 594 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__AddRegionOps_6;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 595 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 595 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;

#line 595 "code_info.m"
    ll_backend__code_info__AddRegionOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 595 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 594 "code_info.m"
    return ll_backend__code_info__AddRegionOps_6;
#line 594 "code_info.m"
  }
#line 799 "code_info.m"
}

#line 794 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
#line 794 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4)
#line 794 "code_info.m"
{
#line 590 "code_info.m"
  {
#line 590 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__AddTrailOps_6;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 591 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 591 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;

#line 591 "code_info.m"
    ll_backend__code_info__AddTrailOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 591 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 590 "code_info.m"
    return ll_backend__code_info__AddTrailOps_6;
#line 590 "code_info.m"
  }
#line 794 "code_info.m"
}

#line 208 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
#line 208 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 208 "code_info.m"
{
#line 208 "code_info.m"
  {
#line 208 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 208 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 208 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 208 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
#line 208 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1416 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "code_info.m"
    else
#line 208 "code_info.m"
      {
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_46_46;

#line 208 "code_info.m"
        {
#line 208 "code_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
        }
#line 1514 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
#line 208 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
#line 208 "code_info.m"
        else
#line 208 "code_info.m"
          {
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_47_47;

#line 208 "code_info.m"
            {
#line 208 "code_info.m"
              libs__globals____Compare____globals_0_0(&ll_backend__code_info__V_47_47, ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
            }
#line 1534 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
#line 208 "code_info.m"
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
#line 208 "code_info.m"
            else
#line 208 "code_info.m"
              {
#line 208 "code_info.m"
                MR_Word ll_backend__code_info__V_48_48;

#line 208 "code_info.m"
                {
#line 208 "code_info.m"
                  ll_backend__llds____Compare____exprn_opts_0_0(&ll_backend__code_info__V_48_48, ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                }
#line 1554 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
#line 208 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
#line 208 "code_info.m"
                else
#line 208 "code_info.m"
                  {
#line 208 "code_info.m"
                    MR_Word ll_backend__code_info__V_49_49;

#line 208 "code_info.m"
                    {
#line 208 "code_info.m"
                      hlds__hlds_pred____Compare____pred_id_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_7_7, ll_backend__code_info__V_28_28);
                    }
#line 1574 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 208 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 208 "code_info.m"
                    else
#line 208 "code_info.m"
                      {
#line 208 "code_info.m"
                        MR_Word ll_backend__code_info__V_50_50;

#line 208 "code_info.m"
                        {
#line 208 "code_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                        }
#line 1594 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 208 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 208 "code_info.m"
                        else
#line 208 "code_info.m"
                          {
#line 208 "code_info.m"
                            MR_Word ll_backend__code_info__V_51_51;

#line 208 "code_info.m"
                            {
#line 208 "code_info.m"
                              hlds__hlds_pred____Compare____pred_info_0_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                            }
#line 1614 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 208 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 208 "code_info.m"
                            else
#line 208 "code_info.m"
                              {
#line 208 "code_info.m"
                                MR_Word ll_backend__code_info__V_52_52;

#line 208 "code_info.m"
                                {
#line 208 "code_info.m"
                                  hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                }
#line 1634 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 208 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 208 "code_info.m"
                                else
#line 208 "code_info.m"
                                  {
#line 208 "code_info.m"
                                    MR_Word ll_backend__code_info__V_53_53;

#line 208 "code_info.m"
                                    {
#line 208 "code_info.m"
                                      mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                                    }
#line 1654 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 208 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 208 "code_info.m"
                                    else
#line 208 "code_info.m"
                                      {
#line 208 "code_info.m"
                                        MR_Word ll_backend__code_info__V_54_54;

#line 208 "code_info.m"
                                        {
#line 208 "code_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[7], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                        }
#line 1674 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 208 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 208 "code_info.m"
                                        else
#line 208 "code_info.m"
                                          {
#line 208 "code_info.m"
                                            MR_Word ll_backend__code_info__V_55_55;

#line 208 "code_info.m"
                                            {
#line 208 "code_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[2], &ll_backend__code_info__V_55_55, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                            }
#line 1694 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 208 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 208 "code_info.m"
                                            else
#line 208 "code_info.m"
                                              {
#line 208 "code_info.m"
                                                MR_Word ll_backend__code_info__V_56_56;

#line 208 "code_info.m"
                                                {
#line 208 "code_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_56_56, ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                                }
#line 1714 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 208 "code_info.m"
                                                else
#line 208 "code_info.m"
                                                  {
#line 208 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_57_57;

#line 208 "code_info.m"
                                                    {
#line 208 "code_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[8], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                    }
#line 1734 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
#line 208 "code_info.m"
                                                    else
#line 208 "code_info.m"
                                                      {
#line 208 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_58_58;
#line 208 "code_info.m"
                                                        MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_16_16;
#line 208 "code_info.m"
                                                        MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_37_37;

#line 208 "code_info.m"
                                                        {
#line 208 "code_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_89_89, ll_backend__code_info__V_90_90);
                                                        }
#line 1758 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
#line 208 "code_info.m"
                                                        else
#line 208 "code_info.m"
                                                          {
#line 208 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_59_59;
#line 208 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_17_17;
#line 208 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_92_92 = (MR_Integer) ll_backend__code_info__V_38_38;

#line 208 "code_info.m"
                                                            {
#line 208 "code_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_59_59, ll_backend__code_info__V_91_91, ll_backend__code_info__V_92_92);
                                                            }
#line 1782 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
#line 208 "code_info.m"
                                                            else
#line 208 "code_info.m"
                                                              {
#line 208 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_60_60;
#line 208 "code_info.m"
                                                                MR_Integer ll_backend__code_info__V_93_93 = (MR_Integer) ll_backend__code_info__V_18_18;
#line 208 "code_info.m"
                                                                MR_Integer ll_backend__code_info__V_94_94 = (MR_Integer) ll_backend__code_info__V_39_39;

#line 208 "code_info.m"
                                                                {
#line 208 "code_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_93_93, ll_backend__code_info__V_94_94);
                                                                }
#line 1806 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
#line 208 "code_info.m"
                                                                else
#line 208 "code_info.m"
                                                                  {
#line 208 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_61_61;
#line 208 "code_info.m"
                                                                    MR_Integer ll_backend__code_info__V_95_95 = (MR_Integer) ll_backend__code_info__V_19_19;
#line 208 "code_info.m"
                                                                    MR_Integer ll_backend__code_info__V_96_96 = (MR_Integer) ll_backend__code_info__V_40_40;

#line 208 "code_info.m"
                                                                    {
#line 208 "code_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_95_95, ll_backend__code_info__V_96_96);
                                                                    }
#line 1830 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
#line 208 "code_info.m"
                                                                    else
#line 208 "code_info.m"
                                                                      {
#line 208 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_62_62;
#line 208 "code_info.m"
                                                                        MR_Integer ll_backend__code_info__V_97_97 = (MR_Integer) ll_backend__code_info__V_20_20;
#line 208 "code_info.m"
                                                                        MR_Integer ll_backend__code_info__V_98_98 = (MR_Integer) ll_backend__code_info__V_41_41;

#line 208 "code_info.m"
                                                                        {
#line 208 "code_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_62_62, ll_backend__code_info__V_97_97, ll_backend__code_info__V_98_98);
                                                                        }
#line 1854 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
#line 208 "code_info.m"
                                                                        else
#line 208 "code_info.m"
                                                                          {
#line 208 "code_info.m"
                                                                            MR_Word ll_backend__code_info__V_63_63;
#line 208 "code_info.m"
                                                                            MR_Integer ll_backend__code_info__V_99_99 = (MR_Integer) ll_backend__code_info__V_21_21;
#line 208 "code_info.m"
                                                                            MR_Integer ll_backend__code_info__V_100_100 = (MR_Integer) ll_backend__code_info__V_42_42;

#line 208 "code_info.m"
                                                                            {
#line 208 "code_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_63_63, ll_backend__code_info__V_99_99, ll_backend__code_info__V_100_100);
                                                                            }
#line 1878 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
#line 208 "code_info.m"
                                                                            else
#line 208 "code_info.m"
                                                                              {
#line 208 "code_info.m"
                                                                                MR_Word ll_backend__code_info__V_64_64;
#line 208 "code_info.m"
                                                                                MR_Integer ll_backend__code_info__V_101_101 = (MR_Integer) ll_backend__code_info__V_22_22;
#line 208 "code_info.m"
                                                                                MR_Integer ll_backend__code_info__V_102_102 = (MR_Integer) ll_backend__code_info__V_43_43;

#line 208 "code_info.m"
                                                                                {
#line 208 "code_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_101_101, ll_backend__code_info__V_102_102);
                                                                                }
#line 1902 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
#line 208 "code_info.m"
                                                                                else
#line 208 "code_info.m"
                                                                                  {
#line 208 "code_info.m"
                                                                                    MR_Word ll_backend__code_info__V_65_65;

#line 208 "code_info.m"
                                                                                    {
#line 208 "code_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[9], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                                    }
#line 1922 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
#line 208 "code_info.m"
                                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 208 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
#line 208 "code_info.m"
                                                                                    else
#line 208 "code_info.m"
                                                                                      {
#line 208 "code_info.m"
                                                                                        {
#line 208 "code_info.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[4], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_24_24)), ((MR_Box) (ll_backend__code_info__V_45_45)));
#line 208 "code_info.m"
                                                                                          return;
                                                                                        }
#line 208 "code_info.m"
                                                                                      }
#line 208 "code_info.m"
                                                                                  }
#line 208 "code_info.m"
                                                                              }
#line 208 "code_info.m"
                                                                          }
#line 208 "code_info.m"
                                                                      }
#line 208 "code_info.m"
                                                                  }
#line 208 "code_info.m"
                                                              }
#line 208 "code_info.m"
                                                          }
#line 208 "code_info.m"
                                                      }
#line 208 "code_info.m"
                                                  }
#line 208 "code_info.m"
                                              }
#line 208 "code_info.m"
                                          }
#line 208 "code_info.m"
                                      }
#line 208 "code_info.m"
                                  }
#line 208 "code_info.m"
                              }
#line 208 "code_info.m"
                          }
#line 208 "code_info.m"
                      }
#line 208 "code_info.m"
                  }
#line 208 "code_info.m"
              }
#line 208 "code_info.m"
          }
#line 208 "code_info.m"
      }
#line 208 "code_info.m"
  }
#line 208 "code_info.m"
}

#line 208 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 208 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 208 "code_info.m"
{
#line 208 "code_info.m"
  {
#line 208 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 208 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_45 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 208 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_46 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 208 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_45 == ll_backend__code_info__CastY_46);
#line 208 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 208 "code_info.m"
    else
#line 208 "code_info.m"
      {
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_54_54;
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_55_55;
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_56_56;
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_57_57;
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_58_58;
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 208 "code_info.m"
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));

#line 2111 "ll_backend.code_info.c"
        {
#line 2113 "ll_backend.code_info.c"
          ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_24_24);
        }
#line 208 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
          {
#line 2120 "ll_backend.code_info.c"
            {
#line 2122 "ll_backend.code_info.c"
              ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
            }
#line 208 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
              {
#line 2129 "ll_backend.code_info.c"
                {
#line 2131 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
                }
#line 208 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                  {
#line 2138 "ll_backend.code_info.c"
                    {
#line 2140 "ll_backend.code_info.c"
                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                    }
#line 208 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                      {
#line 2147 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_28_28);
#line 208 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                          {
#line 2153 "ll_backend.code_info.c"
                            {
#line 2155 "ll_backend.code_info.c"
                              ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                            }
#line 208 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                              {
#line 2162 "ll_backend.code_info.c"
                                {
#line 2164 "ll_backend.code_info.c"
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                                }
#line 208 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                  {
#line 2171 "ll_backend.code_info.c"
                                    {
#line 2173 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                    }
#line 208 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                      {
#line 2180 "ll_backend.code_info.c"
                                        ll_backend__code_info__TypeInfo_54_54 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
#line 2182 "ll_backend.code_info.c"
                                        {
#line 2184 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_54, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                        }
#line 208 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                          {
#line 2191 "ll_backend.code_info.c"
                                            ll_backend__code_info__TypeInfo_55_55 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
#line 2193 "ll_backend.code_info.c"
                                            {
#line 2195 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_55, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                            }
#line 208 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                              {
#line 2202 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
#line 208 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                  {
#line 2208 "ll_backend.code_info.c"
                                                    ll_backend__code_info__TypeInfo_56_56 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
#line 2210 "ll_backend.code_info.c"
                                                    {
#line 2212 "ll_backend.code_info.c"
                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_56, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                    }
#line 208 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                      {
#line 2219 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_15_15 == ll_backend__code_info__V_36_36);
#line 208 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                          {
#line 2225 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_16_16 == ll_backend__code_info__V_37_37);
#line 208 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                              {
#line 2231 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_17_17 == ll_backend__code_info__V_38_38);
#line 208 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                  {
#line 2237 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_39_39);
#line 208 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                      {
#line 2243 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
#line 208 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                          {
#line 2249 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_20_20 == ll_backend__code_info__V_41_41);
#line 208 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                              {
#line 2255 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
#line 208 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                  {
#line 2261 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__TypeInfo_57_57 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
#line 2263 "ll_backend.code_info.c"
                                                                                    {
#line 2265 "ll_backend.code_info.c"
                                                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_57, ((MR_Box) (ll_backend__code_info__V_22_22)), ((MR_Box) (ll_backend__code_info__V_43_43)));
                                                                                    }
#line 208 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                      {
#line 2272 "ll_backend.code_info.c"
                                                                                        ll_backend__code_info__TypeInfo_58_58 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
#line 2274 "ll_backend.code_info.c"
                                                                                        {
#line 2276 "ll_backend.code_info.c"
                                                                                          return ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_58, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                                        }
#line 208 "code_info.m"
                                                                                      }
#line 208 "code_info.m"
                                                                                  }
#line 208 "code_info.m"
                                                                              }
#line 208 "code_info.m"
                                                                          }
#line 208 "code_info.m"
                                                                      }
#line 208 "code_info.m"
                                                                  }
#line 208 "code_info.m"
                                                              }
#line 208 "code_info.m"
                                                          }
#line 208 "code_info.m"
                                                      }
#line 208 "code_info.m"
                                                  }
#line 208 "code_info.m"
                                              }
#line 208 "code_info.m"
                                          }
#line 208 "code_info.m"
                                      }
#line 208 "code_info.m"
                                  }
#line 208 "code_info.m"
                              }
#line 208 "code_info.m"
                          }
#line 208 "code_info.m"
                      }
#line 208 "code_info.m"
                  }
#line 208 "code_info.m"
              }
#line 208 "code_info.m"
          }
#line 208 "code_info.m"
      }
#line 208 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 208 "code_info.m"
  }
#line 208 "code_info.m"
}

#line 274 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
#line 274 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 274 "code_info.m"
{
#line 274 "code_info.m"
  {
#line 274 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 274 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_57 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 274 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_58 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 274 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_57 == ll_backend__code_info__CastY_58);
#line 274 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 2352 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "code_info.m"
    else
#line 274 "code_info.m"
      {
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 15)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 16)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 17)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40;

#line 274 "code_info.m"
        {
#line 274 "code_info.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_40_40, ll_backend__code_info__V_4_4, ll_backend__code_info__V_22_22);
        }
#line 2438 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_40_40 == (MR_Integer) 0);
#line 274 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_40_40;
#line 274 "code_info.m"
        else
#line 274 "code_info.m"
          {
#line 274 "code_info.m"
            MR_Word ll_backend__code_info__V_41_41;
#line 274 "code_info.m"
            MR_Integer ll_backend__code_info__V_77_77 = (MR_Integer) ll_backend__code_info__V_5_5;
#line 274 "code_info.m"
            MR_Integer ll_backend__code_info__V_78_78 = (MR_Integer) ll_backend__code_info__V_23_23;

#line 274 "code_info.m"
            {
#line 274 "code_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_41_41, ll_backend__code_info__V_77_77, ll_backend__code_info__V_78_78);
            }
#line 2462 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_41_41 == (MR_Integer) 0);
#line 274 "code_info.m"
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_41_41;
#line 274 "code_info.m"
            else
#line 274 "code_info.m"
              {
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_42_42;

#line 274 "code_info.m"
                {
#line 274 "code_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_42_42, ((MR_Box) (ll_backend__code_info__V_6_6)), ((MR_Box) (ll_backend__code_info__V_24_24)));
                }
#line 2482 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_42_42 == (MR_Integer) 0);
#line 274 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_42_42;
#line 274 "code_info.m"
                else
#line 274 "code_info.m"
                  {
#line 274 "code_info.m"
                    MR_Word ll_backend__code_info__V_43_43;
#line 274 "code_info.m"
                    MR_Integer ll_backend__code_info__V_79_79 = (MR_Integer) ll_backend__code_info__V_7_7;
#line 274 "code_info.m"
                    MR_Integer ll_backend__code_info__V_80_80 = (MR_Integer) ll_backend__code_info__V_25_25;

#line 274 "code_info.m"
                    {
#line 274 "code_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_43_43, ll_backend__code_info__V_79_79, ll_backend__code_info__V_80_80);
                    }
#line 2506 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_43_43 == (MR_Integer) 0);
#line 274 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_43_43;
#line 274 "code_info.m"
                    else
#line 274 "code_info.m"
                      {
#line 274 "code_info.m"
                        MR_Word ll_backend__code_info__V_44_44;

#line 274 "code_info.m"
                        {
#line 274 "code_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_44_44, ll_backend__code_info__V_8_8, ll_backend__code_info__V_26_26);
                        }
#line 2526 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_44_44 == (MR_Integer) 0);
#line 274 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_44_44;
#line 274 "code_info.m"
                        else
#line 274 "code_info.m"
                          {
#line 274 "code_info.m"
                            MR_Word ll_backend__code_info__V_45_45;

#line 274 "code_info.m"
                            {
#line 274 "code_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_45_45, ll_backend__code_info__V_9_9, ll_backend__code_info__V_27_27);
                            }
#line 2546 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_45_45 == (MR_Integer) 0);
#line 274 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_45_45;
#line 274 "code_info.m"
                            else
#line 274 "code_info.m"
                              {
#line 274 "code_info.m"
                                MR_Word ll_backend__code_info__V_46_46;

#line 274 "code_info.m"
                                {
#line 274 "code_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_10_10, ll_backend__code_info__V_28_28);
                                }
#line 2566 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
#line 274 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
#line 274 "code_info.m"
                                else
#line 274 "code_info.m"
                                  {
#line 274 "code_info.m"
                                    MR_Word ll_backend__code_info__V_47_47;

#line 274 "code_info.m"
                                    {
#line 274 "code_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_47_47, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                    }
#line 2586 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
#line 274 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
#line 274 "code_info.m"
                                    else
#line 274 "code_info.m"
                                      {
#line 274 "code_info.m"
                                        MR_Word ll_backend__code_info__V_48_48;

#line 274 "code_info.m"
                                        {
#line 274 "code_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_48_48, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_30_30)));
                                        }
#line 2606 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
#line 274 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
#line 274 "code_info.m"
                                        else
#line 274 "code_info.m"
                                          {
#line 274 "code_info.m"
                                            MR_Word ll_backend__code_info__V_49_49;

#line 274 "code_info.m"
                                            {
#line 274 "code_info.m"
                                              mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                                            }
#line 2626 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 274 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 274 "code_info.m"
                                            else
#line 274 "code_info.m"
                                              {
#line 274 "code_info.m"
                                                MR_Word ll_backend__code_info__V_50_50;

#line 274 "code_info.m"
                                                {
#line 274 "code_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_50_50, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                                }
#line 2646 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 274 "code_info.m"
                                                else
#line 274 "code_info.m"
                                                  {
#line 274 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_51_51;
#line 274 "code_info.m"
                                                    MR_Integer ll_backend__code_info__V_81_81 = (MR_Integer) ll_backend__code_info__V_15_15;
#line 274 "code_info.m"
                                                    MR_Integer ll_backend__code_info__V_82_82 = (MR_Integer) ll_backend__code_info__V_33_33;

#line 274 "code_info.m"
                                                    {
#line 274 "code_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_81_81, ll_backend__code_info__V_82_82);
                                                    }
#line 2670 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 274 "code_info.m"
                                                    else
#line 274 "code_info.m"
                                                      {
#line 274 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_52_52;

#line 274 "code_info.m"
                                                        {
#line 274 "code_info.m"
                                                          ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_16_16, ll_backend__code_info__V_34_34);
                                                        }
#line 2690 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 274 "code_info.m"
                                                        else
#line 274 "code_info.m"
                                                          {
#line 274 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_53_53;

#line 274 "code_info.m"
                                                            {
#line 274 "code_info.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_53_53, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                            }
#line 2710 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 274 "code_info.m"
                                                            else
#line 274 "code_info.m"
                                                              {
#line 274 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_54_54;

#line 274 "code_info.m"
                                                                {
#line 274 "code_info.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                                }
#line 2730 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 274 "code_info.m"
                                                                else
#line 274 "code_info.m"
                                                                  {
#line 274 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_55_55;

#line 274 "code_info.m"
                                                                    {
#line 274 "code_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                                                    }
#line 2750 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 274 "code_info.m"
                                                                    else
#line 274 "code_info.m"
                                                                      {
#line 274 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_56_56;

#line 274 "code_info.m"
                                                                        {
#line 274 "code_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                                                        }
#line 2770 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 274 "code_info.m"
                                                                        else
#line 274 "code_info.m"
                                                                          {
#line 274 "code_info.m"
                                                                            {
#line 274 "code_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
#line 274 "code_info.m"
                                                                              return;
                                                                            }
#line 274 "code_info.m"
                                                                          }
#line 274 "code_info.m"
                                                                      }
#line 274 "code_info.m"
                                                                  }
#line 274 "code_info.m"
                                                              }
#line 274 "code_info.m"
                                                          }
#line 274 "code_info.m"
                                                      }
#line 274 "code_info.m"
                                                  }
#line 274 "code_info.m"
                                              }
#line 274 "code_info.m"
                                          }
#line 274 "code_info.m"
                                      }
#line 274 "code_info.m"
                                  }
#line 274 "code_info.m"
                              }
#line 274 "code_info.m"
                          }
#line 274 "code_info.m"
                      }
#line 274 "code_info.m"
                  }
#line 274 "code_info.m"
              }
#line 274 "code_info.m"
          }
#line 274 "code_info.m"
      }
#line 274 "code_info.m"
  }
#line 274 "code_info.m"
}

#line 274 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 274 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 274 "code_info.m"
{
#line 274 "code_info.m"
  {
#line 274 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 274 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_39 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 274 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_40 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 274 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_39 == ll_backend__code_info__CastY_40);
#line 274 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 274 "code_info.m"
    else
#line 274 "code_info.m"
      {
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_42_42;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_43_43;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_44_44;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_46_46;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_48_48;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_49_49;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_50_50;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_51_51;
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 15)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 16)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 17)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 274 "code_info.m"
        MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
#line 274 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));

#line 2947 "ll_backend.code_info.c"
        {
#line 2949 "ll_backend.code_info.c"
          ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_21_21);
        }
#line 274 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
          {
#line 2956 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_4_4 == ll_backend__code_info__V_22_22);
#line 274 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
              {
#line 2962 "ll_backend.code_info.c"
                ll_backend__code_info__TypeInfo_42_42 = (MR_Word) &ll_backend__code_info_scalar_common_2[0];
#line 2964 "ll_backend.code_info.c"
                {
#line 2966 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_42_42, ((MR_Box) (ll_backend__code_info__V_5_5)), ((MR_Box) (ll_backend__code_info__V_23_23)));
                }
#line 274 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                  {
#line 2973 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_6_6 == ll_backend__code_info__V_24_24);
#line 274 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                      {
#line 2979 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_25_25);
#line 274 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                          {
#line 2985 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == ll_backend__code_info__V_26_26);
#line 274 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                              {
#line 2991 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_9_9 == ll_backend__code_info__V_27_27);
#line 274 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                  {
#line 2997 "ll_backend.code_info.c"
                                    ll_backend__code_info__TypeInfo_43_43 = (MR_Word) &ll_backend__code_info_scalar_common_2[1];
#line 2999 "ll_backend.code_info.c"
                                    {
#line 3001 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_43_43, ((MR_Box) (ll_backend__code_info__V_10_10)), ((MR_Box) (ll_backend__code_info__V_28_28)));
                                    }
#line 274 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                      {
#line 3008 "ll_backend.code_info.c"
                                        ll_backend__code_info__TypeInfo_44_44 = (MR_Word) &ll_backend__code_info_scalar_common_1[1];
#line 3010 "ll_backend.code_info.c"
                                        {
#line 3012 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_44_44, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                        }
#line 274 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                          {
#line 3019 "ll_backend.code_info.c"
                                            {
#line 3021 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_30_30);
                                            }
#line 274 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                              {
#line 3028 "ll_backend.code_info.c"
                                                ll_backend__code_info__TypeInfo_46_46 = (MR_Word) &ll_backend__code_info_scalar_common_1[2];
#line 3030 "ll_backend.code_info.c"
                                                {
#line 3032 "ll_backend.code_info.c"
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_46_46, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_31_31)));
                                                }
#line 274 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                  {
#line 3039 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_14_14 == ll_backend__code_info__V_32_32);
#line 274 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                      {
#line 3045 "ll_backend.code_info.c"
                                                        {
#line 3047 "ll_backend.code_info.c"
                                                          ll_backend__code_info__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_33_33);
                                                        }
#line 274 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                          {
#line 3054 "ll_backend.code_info.c"
                                                            ll_backend__code_info__TypeInfo_48_48 = (MR_Word) &ll_backend__code_info_scalar_common_1[3];
#line 3056 "ll_backend.code_info.c"
                                                            {
#line 3058 "ll_backend.code_info.c"
                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_48_48, ((MR_Box) (ll_backend__code_info__V_16_16)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                                            }
#line 274 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                              {
#line 3065 "ll_backend.code_info.c"
                                                                ll_backend__code_info__TypeInfo_49_49 = (MR_Word) &ll_backend__code_info_scalar_common_1[4];
#line 3067 "ll_backend.code_info.c"
                                                                {
#line 3069 "ll_backend.code_info.c"
                                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_49_49, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                                }
#line 274 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                  {
#line 3076 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_36_36);
#line 274 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                      {
#line 3082 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__TypeInfo_50_50 = (MR_Word) &ll_backend__code_info_scalar_common_1[5];
#line 3084 "ll_backend.code_info.c"
                                                                        {
#line 3086 "ll_backend.code_info.c"
                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_50_50, ((MR_Box) (ll_backend__code_info__V_19_19)), ((MR_Box) (ll_backend__code_info__V_37_37)));
                                                                        }
#line 274 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                          {
#line 3093 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__TypeInfo_51_51 = (MR_Word) &ll_backend__code_info_scalar_common_1[6];
#line 3095 "ll_backend.code_info.c"
                                                                            {
#line 3097 "ll_backend.code_info.c"
                                                                              return ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_51_51, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                                                            }
#line 274 "code_info.m"
                                                                          }
#line 274 "code_info.m"
                                                                      }
#line 274 "code_info.m"
                                                                  }
#line 274 "code_info.m"
                                                              }
#line 274 "code_info.m"
                                                          }
#line 274 "code_info.m"
                                                      }
#line 274 "code_info.m"
                                                  }
#line 274 "code_info.m"
                                              }
#line 274 "code_info.m"
                                          }
#line 274 "code_info.m"
                                      }
#line 274 "code_info.m"
                                  }
#line 274 "code_info.m"
                              }
#line 274 "code_info.m"
                          }
#line 274 "code_info.m"
                      }
#line 274 "code_info.m"
                  }
#line 274 "code_info.m"
              }
#line 274 "code_info.m"
          }
#line 274 "code_info.m"
      }
#line 274 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 274 "code_info.m"
  }
#line 274 "code_info.m"
}

#line 202 "code_info.m"
void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0(
#line 202 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 202 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 202 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 202 "code_info.m"
{
#line 202 "code_info.m"
  {
#line 202 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 202 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_9 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 202 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_10 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 202 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_9 == ll_backend__code_info__CastY_10);
#line 202 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 3167 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 202 "code_info.m"
    else
#line 202 "code_info.m"
      {
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_8_8;

#line 202 "code_info.m"
        {
#line 202 "code_info.m"
          ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__V_8_8, ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
        }
#line 3189 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 0);
#line 202 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 202 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 202 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_8_8;
#line 202 "code_info.m"
        else
#line 274 "code_info.m"
          {
#line 274 "code_info.m"
            MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__V_5_5;
#line 274 "code_info.m"
            MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__V_7_7;

#line 274 "code_info.m"
            ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
#line 274 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 3210 "ll_backend.code_info.c"
              *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "code_info.m"
            else
#line 274 "code_info.m"
              {
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 274 "code_info.m"
                MR_Integer ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 274 "code_info.m"
                MR_Word ll_backend__code_info__V_49_49;

#line 274 "code_info.m"
                {
#line 274 "code_info.m"
                  mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                }
#line 3296 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 274 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 274 "code_info.m"
                else
#line 274 "code_info.m"
                  {
#line 274 "code_info.m"
                    MR_Word ll_backend__code_info__V_50_50;
#line 274 "code_info.m"
                    MR_Integer ll_backend__code_info__V_86_86 = (MR_Integer) ll_backend__code_info__V_14_14;
#line 274 "code_info.m"
                    MR_Integer ll_backend__code_info__V_87_87 = (MR_Integer) ll_backend__code_info__V_32_32;

#line 274 "code_info.m"
                    {
#line 274 "code_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_86_86, ll_backend__code_info__V_87_87);
                    }
#line 3320 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 274 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 274 "code_info.m"
                    else
#line 274 "code_info.m"
                      {
#line 274 "code_info.m"
                        MR_Word ll_backend__code_info__V_51_51;

#line 274 "code_info.m"
                        {
#line 274 "code_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_51_51, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                        }
#line 3340 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 274 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 274 "code_info.m"
                        else
#line 274 "code_info.m"
                          {
#line 274 "code_info.m"
                            MR_Word ll_backend__code_info__V_52_52;
#line 274 "code_info.m"
                            MR_Integer ll_backend__code_info__V_88_88 = (MR_Integer) ll_backend__code_info__V_16_16;
#line 274 "code_info.m"
                            MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_34_34;

#line 274 "code_info.m"
                            {
#line 274 "code_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_88_88, ll_backend__code_info__V_89_89);
                            }
#line 3364 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 274 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 274 "code_info.m"
                            else
#line 274 "code_info.m"
                              {
#line 274 "code_info.m"
                                MR_Word ll_backend__code_info__V_53_53;

#line 274 "code_info.m"
                                {
#line 274 "code_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_17_17, ll_backend__code_info__V_35_35);
                                }
#line 3384 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 274 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 274 "code_info.m"
                                else
#line 274 "code_info.m"
                                  {
#line 274 "code_info.m"
                                    MR_Word ll_backend__code_info__V_54_54;

#line 274 "code_info.m"
                                    {
#line 274 "code_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_54_54, ll_backend__code_info__V_18_18, ll_backend__code_info__V_36_36);
                                    }
#line 3404 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 274 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 274 "code_info.m"
                                    else
#line 274 "code_info.m"
                                      {
#line 274 "code_info.m"
                                        MR_Word ll_backend__code_info__V_55_55;

#line 274 "code_info.m"
                                        {
#line 274 "code_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                        }
#line 3424 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 274 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 274 "code_info.m"
                                        else
#line 274 "code_info.m"
                                          {
#line 274 "code_info.m"
                                            MR_Word ll_backend__code_info__V_56_56;

#line 274 "code_info.m"
                                            {
#line 274 "code_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
#line 3444 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 274 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 274 "code_info.m"
                                            else
#line 274 "code_info.m"
                                              {
#line 274 "code_info.m"
                                                MR_Word ll_backend__code_info__V_57_57;

#line 274 "code_info.m"
                                                {
#line 274 "code_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
#line 3464 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
#line 274 "code_info.m"
                                                else
#line 274 "code_info.m"
                                                  {
#line 274 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_58_58;

#line 274 "code_info.m"
                                                    {
#line 274 "code_info.m"
                                                      mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_22_22, ll_backend__code_info__V_40_40);
                                                    }
#line 3484 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
#line 274 "code_info.m"
                                                    else
#line 274 "code_info.m"
                                                      {
#line 274 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_59_59;

#line 274 "code_info.m"
                                                        {
#line 274 "code_info.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_59_59, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
#line 3504 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
#line 274 "code_info.m"
                                                        else
#line 274 "code_info.m"
                                                          {
#line 274 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_60_60;
#line 274 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_24_24;
#line 274 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_42_42;

#line 274 "code_info.m"
                                                            {
#line 274 "code_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_90_90, ll_backend__code_info__V_91_91);
                                                            }
#line 3528 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
#line 274 "code_info.m"
                                                            else
#line 274 "code_info.m"
                                                              {
#line 274 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_61_61;

#line 274 "code_info.m"
                                                                {
#line 274 "code_info.m"
                                                                  ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_25_25, ll_backend__code_info__V_43_43);
                                                                }
#line 3548 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
#line 274 "code_info.m"
                                                                else
#line 274 "code_info.m"
                                                                  {
#line 274 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_62_62;

#line 274 "code_info.m"
                                                                    {
#line 274 "code_info.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_62_62, ((MR_Box) (ll_backend__code_info__V_26_26)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                    }
#line 3568 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
#line 274 "code_info.m"
                                                                    else
#line 274 "code_info.m"
                                                                      {
#line 274 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_63_63;

#line 274 "code_info.m"
                                                                        {
#line 274 "code_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_63_63, ((MR_Box) (ll_backend__code_info__V_27_27)), ((MR_Box) (ll_backend__code_info__V_45_45)));
                                                                        }
#line 3588 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
#line 274 "code_info.m"
                                                                        else
#line 274 "code_info.m"
                                                                          {
#line 274 "code_info.m"
                                                                            MR_Word ll_backend__code_info__V_64_64;

#line 274 "code_info.m"
                                                                            {
#line 274 "code_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_28_28, ll_backend__code_info__V_46_46);
                                                                            }
#line 3608 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
#line 274 "code_info.m"
                                                                            else
#line 274 "code_info.m"
                                                                              {
#line 274 "code_info.m"
                                                                                MR_Word ll_backend__code_info__V_65_65;

#line 274 "code_info.m"
                                                                                {
#line 274 "code_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_47_47)));
                                                                                }
#line 3628 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
#line 274 "code_info.m"
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 274 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 274 "code_info.m"
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
#line 274 "code_info.m"
                                                                                else
#line 274 "code_info.m"
                                                                                  {
#line 274 "code_info.m"
                                                                                    {
#line 274 "code_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_30_30)), ((MR_Box) (ll_backend__code_info__V_48_48)));
#line 274 "code_info.m"
                                                                                      return;
                                                                                    }
#line 274 "code_info.m"
                                                                                  }
#line 274 "code_info.m"
                                                                              }
#line 274 "code_info.m"
                                                                          }
#line 274 "code_info.m"
                                                                      }
#line 274 "code_info.m"
                                                                  }
#line 274 "code_info.m"
                                                              }
#line 274 "code_info.m"
                                                          }
#line 274 "code_info.m"
                                                      }
#line 274 "code_info.m"
                                                  }
#line 274 "code_info.m"
                                              }
#line 274 "code_info.m"
                                          }
#line 274 "code_info.m"
                                      }
#line 274 "code_info.m"
                                  }
#line 274 "code_info.m"
                              }
#line 274 "code_info.m"
                          }
#line 274 "code_info.m"
                      }
#line 274 "code_info.m"
                  }
#line 274 "code_info.m"
              }
#line 274 "code_info.m"
          }
#line 202 "code_info.m"
      }
#line 202 "code_info.m"
  }
#line 202 "code_info.m"
}

#line 202 "code_info.m"
MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0(
#line 202 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 202 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 202 "code_info.m"
{
#line 202 "code_info.m"
  {
#line 202 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 202 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_7 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 202 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_8 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 202 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_7 == ll_backend__code_info__CastY_8);
#line 202 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 202 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 202 "code_info.m"
    else
#line 202 "code_info.m"
      {
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__CastX_51 = (MR_Integer) ll_backend__code_info__V_3_3;
#line 208 "code_info.m"
        MR_Integer ll_backend__code_info__CastY_52 = (MR_Integer) ll_backend__code_info__V_5_5;

#line 208 "code_info.m"
        ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_51 == ll_backend__code_info__CastY_52);
#line 208 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
          ll_backend__code_info__succeeded = MR_TRUE;
#line 208 "code_info.m"
        else
#line 208 "code_info.m"
          {
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_54_60;
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_55_61;
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_56_62;
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_57_63;
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_58_64;
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 0)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 1)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 2)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 3)));
#line 208 "code_info.m"
            MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 4)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 5)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 6)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 7)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 8)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 9)));
#line 208 "code_info.m"
            MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 10)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 11)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 13)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 14)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 208 "code_info.m"
            MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 208 "code_info.m"
            MR_Integer ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 208 "code_info.m"
            MR_Word ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));

#line 3838 "ll_backend.code_info.c"
            {
#line 3840 "ll_backend.code_info.c"
              ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
            }
#line 208 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
              {
#line 3847 "ll_backend.code_info.c"
                {
#line 3849 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                }
#line 208 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                  {
#line 3856 "ll_backend.code_info.c"
                    {
#line 3858 "ll_backend.code_info.c"
                      ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                    }
#line 208 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                      {
#line 3865 "ll_backend.code_info.c"
                        {
#line 3867 "ll_backend.code_info.c"
                          ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_33_33);
                        }
#line 208 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                          {
#line 3874 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
#line 208 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                              {
#line 3880 "ll_backend.code_info.c"
                                {
#line 3882 "ll_backend.code_info.c"
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                }
#line 208 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                  {
#line 3889 "ll_backend.code_info.c"
                                    {
#line 3891 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_36_36);
                                    }
#line 208 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                      {
#line 3898 "ll_backend.code_info.c"
                                        {
#line 3900 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_16_16, ll_backend__code_info__V_37_37);
                                        }
#line 208 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                          {
#line 3907 "ll_backend.code_info.c"
                                            ll_backend__code_info__TypeInfo_54_60 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
#line 3909 "ll_backend.code_info.c"
                                            {
#line 3911 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_60, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
#line 208 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                              {
#line 3918 "ll_backend.code_info.c"
                                                ll_backend__code_info__TypeInfo_55_61 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
#line 3920 "ll_backend.code_info.c"
                                                {
#line 3922 "ll_backend.code_info.c"
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_61, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
#line 208 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                  {
#line 3929 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
#line 208 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                      {
#line 3935 "ll_backend.code_info.c"
                                                        ll_backend__code_info__TypeInfo_56_62 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
#line 3937 "ll_backend.code_info.c"
                                                        {
#line 3939 "ll_backend.code_info.c"
                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_62, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
#line 208 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                          {
#line 3946 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
#line 208 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                              {
#line 3952 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_22_22 == ll_backend__code_info__V_43_43);
#line 208 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                  {
#line 3958 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_23_23 == ll_backend__code_info__V_44_44);
#line 208 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                      {
#line 3964 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_24_24 == ll_backend__code_info__V_45_45);
#line 208 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                          {
#line 3970 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_25_25 == ll_backend__code_info__V_46_46);
#line 208 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                              {
#line 3976 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_26_26 == ll_backend__code_info__V_47_47);
#line 208 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                  {
#line 3982 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_27_27 == ll_backend__code_info__V_48_48);
#line 208 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                      {
#line 3988 "ll_backend.code_info.c"
                                                                                        ll_backend__code_info__TypeInfo_57_63 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
#line 3990 "ll_backend.code_info.c"
                                                                                        {
#line 3992 "ll_backend.code_info.c"
                                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_63, ((MR_Box) (ll_backend__code_info__V_28_28)), ((MR_Box) (ll_backend__code_info__V_49_49)));
                                                                                        }
#line 208 "code_info.m"
                                                                                        if (ll_backend__code_info__succeeded)
#line 208 "code_info.m"
                                                                                          {
#line 3999 "ll_backend.code_info.c"
                                                                                            ll_backend__code_info__TypeInfo_58_64 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
#line 4001 "ll_backend.code_info.c"
                                                                                            {
#line 4003 "ll_backend.code_info.c"
                                                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_64, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_50_50)));
                                                                                            }
#line 208 "code_info.m"
                                                                                          }
#line 208 "code_info.m"
                                                                                      }
#line 208 "code_info.m"
                                                                                  }
#line 208 "code_info.m"
                                                                              }
#line 208 "code_info.m"
                                                                          }
#line 208 "code_info.m"
                                                                      }
#line 208 "code_info.m"
                                                                  }
#line 208 "code_info.m"
                                                              }
#line 208 "code_info.m"
                                                          }
#line 208 "code_info.m"
                                                      }
#line 208 "code_info.m"
                                                  }
#line 208 "code_info.m"
                                              }
#line 208 "code_info.m"
                                          }
#line 208 "code_info.m"
                                      }
#line 208 "code_info.m"
                                  }
#line 208 "code_info.m"
                              }
#line 208 "code_info.m"
                          }
#line 208 "code_info.m"
                      }
#line 208 "code_info.m"
                  }
#line 208 "code_info.m"
              }
#line 208 "code_info.m"
          }
#line 202 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 4050 "ll_backend.code_info.c"
          {
#line 4052 "ll_backend.code_info.c"
            return ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
          }
#line 202 "code_info.m"
      }
#line 202 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 202 "code_info.m"
  }
#line 202 "code_info.m"
}

#line 1062 "code_info.m"
MR_Integer MR_CALL 
ll_backend__code_info__round_det_stack_frame_size_2_f_0(
#line 1062 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 1062 "code_info.m"
  MR_Integer ll_backend__code_info__NumSlots_5)
#line 1062 "code_info.m"
{
#line 1092 "code_info.m"
  {
#line 1092 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1092 "code_info.m"
    MR_Integer ll_backend__code_info__NumSlotsRoundup_6;
#line 1087 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_7;
#line 1087 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 1087 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 569 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 569 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;

#line 1087 "code_info.m"
    {
#line 1087 "code_info.m"
      ll_backend__code_info__succeeded = mercury__int__odd_1_p_0(ll_backend__code_info__NumSlots_5);
    }
#line 1087 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1087 "code_info.m"
      {
#line 569 "code_info.m"
        ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 569 "code_info.m"
        ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 569 "code_info.m"
        ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 569 "code_info.m"
        ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 569 "code_info.m"
        ll_backend__code_info__ExprnOpts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 569 "code_info.m"
        ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 569 "code_info.m"
        ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 569 "code_info.m"
        ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 569 "code_info.m"
        ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 569 "code_info.m"
        ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 569 "code_info.m"
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 569 "code_info.m"
        ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 569 "code_info.m"
        ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 569 "code_info.m"
        ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 569 "code_info.m"
        ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 569 "code_info.m"
        ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 569 "code_info.m"
        ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 1089 "code_info.m"
        {
#line 1089 "code_info.m"
          ll_backend__code_info__V_8_8 = ll_backend__llds__get_det_stack_float_width_1_f_0(ll_backend__code_info__ExprnOpts_7);
        }
#line 1089 "code_info.m"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 1);
#line 1087 "code_info.m"
      }
#line 1092 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1091 "code_info.m"
      {
#line 1091 "code_info.m"
        ll_backend__code_info__NumSlotsRoundup_6 = (ll_backend__code_info__NumSlots_5 + (MR_Integer) 1);
#line 1091 "code_info.m"
      }
#line 1092 "code_info.m"
    else
#line 1093 "code_info.m"
      ll_backend__code_info__NumSlotsRoundup_6 = ll_backend__code_info__NumSlots_5;
#line 1092 "code_info.m"
    return ll_backend__code_info__NumSlotsRoundup_6;
#line 1092 "code_info.m"
  }
#line 1062 "code_info.m"
}

#line 1057 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_total_stackslot_count_2_p_0(
#line 1057 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 1057 "code_info.m"
  MR_Integer * ll_backend__code_info__NumSlots_4)
#line 1057 "code_info.m"
{
#line 1080 "code_info.m"
  {
#line 1080 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1080 "code_info.m"
    MR_Integer ll_backend__code_info__SlotsForVars_5;
#line 1080 "code_info.m"
    MR_Integer ll_backend__code_info__SlotsForTemps_6;
#line 1080 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 1080 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 585 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_39_39;
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_40_40;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_49_49;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;

#line 585 "code_info.m"
    ll_backend__code_info__SlotsForVars_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 585 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 585 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 585 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 621 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 621 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 621 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 621 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 621 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 621 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 621 "code_info.m"
    ll_backend__code_info__SlotsForTemps_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 621 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 621 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 621 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 621 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 621 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 621 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
#line 621 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 621 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 621 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
#line 621 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
#line 621 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
#line 1083 "code_info.m"
    *ll_backend__code_info__NumSlots_4 = (ll_backend__code_info__SlotsForVars_5 + ll_backend__code_info__SlotsForTemps_6);
#line 1080 "code_info.m"
  }
#line 1057 "code_info.m"
}

#line 1051 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_variable_slot_3_p_0(
#line 1051 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 1051 "code_info.m"
  MR_Word ll_backend__code_info__Var_5,
#line 1051 "code_info.m"
  MR_Word * ll_backend__code_info__Slot_6)
#line 1051 "code_info.m"
{
#line 1068 "code_info.m"
  {
#line 1068 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1068 "code_info.m"
    MR_Word ll_backend__code_info__StackSlots_7;
#line 1068 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_28;
#line 1068 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 2)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 3)));
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 4)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 5)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_42_42;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 1072 "code_info.m"
    MR_Word ll_backend__code_info__SlotLocn_8;
#line 1070 "code_info.m"
    MR_Box ll_backend__code_info__conv0_SlotLocn_8;

#line 577 "code_info.m"
    ll_backend__code_info__ProcInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 6)));
#line 577 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 7)));
#line 577 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 8)));
#line 577 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 9)));
#line 577 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 10)));
#line 577 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 11)));
#line 577 "code_info.m"
    ll_backend__code_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 13)));
#line 577 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 14)));
#line 813 "code_info.m"
    {
#line 813 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_28, &ll_backend__code_info__StackSlots_7);
    }
#line 1070 "code_info.m"
    {
#line 1070 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_7, ((MR_Box) (ll_backend__code_info__Var_5)), &ll_backend__code_info__conv0_SlotLocn_8);
    }
#line 1070 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1070 "code_info.m"
      {
#line 1070 "code_info.m"
        ll_backend__code_info__SlotLocn_8 = ((MR_Word) ll_backend__code_info__conv0_SlotLocn_8);
#line 1070 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 1070 "code_info.m"
      }
#line 1072 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1071 "code_info.m"
      {
#line 1071 "code_info.m"
        *ll_backend__code_info__Slot_6 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__code_info__SlotLocn_8);
      }
#line 1072 "code_info.m"
    else
#line 1073 "code_info.m"
      {
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__Name_9;
#line 1073 "code_info.m"
        MR_Integer ll_backend__code_info__Num_10;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__NumStr_11;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__Str_12;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__V_14_14;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__V_15_15;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__V_17_17;
#line 1073 "code_info.m"
        MR_String ll_backend__code_info__V_19_19;
#line 1073 "code_info.m"
        MR_Word ll_backend__code_info__Varset_56;
#line 1073 "code_info.m"
        MR_Word ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 0)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 1)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 2)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 3)));
#line 581 "code_info.m"
        MR_Integer ll_backend__code_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 4)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 5)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 6)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 7)));
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_70_70;
#line 581 "code_info.m"
        MR_Integer ll_backend__code_info__V_71_71;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_72_72;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_73_73;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_74_74;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_75_75;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_76_76;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_77_77;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_78_78;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_79_79;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_80_80;
#line 581 "code_info.m"
        MR_Word ll_backend__code_info__V_81_81;

#line 581 "code_info.m"
        ll_backend__code_info__Varset_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 8)));
#line 581 "code_info.m"
        ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 9)));
#line 581 "code_info.m"
        ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 10)));
#line 581 "code_info.m"
        ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 11)));
#line 581 "code_info.m"
        ll_backend__code_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 581 "code_info.m"
        ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 13)));
#line 581 "code_info.m"
        ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 14)));
#line 885 "code_info.m"
        {
#line 885 "code_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_56, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_9);
        }
#line 1074 "code_info.m"
        {
#line 1074 "code_info.m"
          mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Var_5, &ll_backend__code_info__Num_10);
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          mercury__string__int_to_string_2_p_0(ll_backend__code_info__Num_10, &ll_backend__code_info__NumStr_11);
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          ll_backend__code_info__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__NumStr_11, (MR_String) ") not found");
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          ll_backend__code_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__code_info__V_19_19);
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          ll_backend__code_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' ", ll_backend__code_info__V_17_17);
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          ll_backend__code_info__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__Name_9, ll_backend__code_info__V_15_15);
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          ll_backend__code_info__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "variable \140", ll_backend__code_info__V_14_14);
        }
#line 1077 "code_info.m"
        {
#line 1077 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_variable_slot\'/3", ll_backend__code_info__Str_12);
#line 1077 "code_info.m"
          return;
        }
#line 1073 "code_info.m"
      }
#line 1068 "code_info.m"
  }
#line 1051 "code_info.m"
}

#line 804 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_out_of_line_code_3_p_0(
#line 804 "code_info.m"
  MR_Word ll_backend__code_info__NewCode_4,
#line 804 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 804 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 804 "code_info.m"
{
#line 1036 "code_info.m"
  {
#line 1036 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__Code0_6;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__Code_7;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 1037 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 1037 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 1037 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 1037 "code_info.m"
    MR_Integer ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
#line 1037 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 1039 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37;
#line 1039 "code_info.m"
    MR_Integer ll_backend__code_info__V_38_38;
#line 1039 "code_info.m"
    MR_Integer ll_backend__code_info__V_39_39;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 1039 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 1039 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;

#line 1037 "code_info.m"
    ll_backend__code_info__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
#line 1038 "code_info.m"
    {
#line 1038 "code_info.m"
      ll_backend__code_info__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_info__Code0_6, ll_backend__code_info__NewCode_4);
    }
#line 1039 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 15)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 16)));
#line 1039 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 17)));
#line 1039 "code_info.m"
    {
#line 1039 "code_info.m"
      ll_backend__code_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 1) = ((MR_Box) (ll_backend__code_info__V_34_34));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 2) = ((MR_Box) (ll_backend__code_info__V_35_35));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 3) = ((MR_Box) (ll_backend__code_info__V_36_36));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 4) = ((MR_Box) (ll_backend__code_info__V_37_37));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 5) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 6) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 7) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 8) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 9) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 10) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 11) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 12) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 13) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 14) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 15) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 16) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 17) = ((MR_Box) (ll_backend__code_info__Code_7));
#line 1039 "code_info.m"
    }
#line 1039 "code_info.m"
    {
#line 1039 "code_info.m"
      MR_Word base;
#line 1039 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 1039 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 1039 "code_info.m"
    }
#line 1036 "code_info.m"
  }
#line 804 "code_info.m"
}

#line 801 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_containing_goal_map_2_p_0(
#line 801 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 801 "code_info.m"
  MR_Word * ll_backend__code_info__ContainingGoalMap_4)
#line 801 "code_info.m"
{
#line 1027 "code_info.m"
  {
#line 1027 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1027 "code_info.m"
    MR_Word ll_backend__code_info__MaybeContainingGoalMap_5;
#line 1027 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 603 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 603 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;

#line 603 "code_info.m"
    ll_backend__code_info__MaybeContainingGoalMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 603 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 1031 "code_info.m"
    if ((ll_backend__code_info__MaybeContainingGoalMap_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "code_info.m"
      {
#line 1033 "code_info.m"
        {
#line 1033 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_containing_goal_map\'/2", (MR_String) "no map");
#line 1033 "code_info.m"
          return;
        }
#line 1032 "code_info.m"
      }
#line 1031 "code_info.m"
    else
#line 1030 "code_info.m"
      *ll_backend__code_info__ContainingGoalMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeContainingGoalMap_5, (MR_Integer) 0)));
#line 1027 "code_info.m"
  }
#line 801 "code_info.m"
}

#line 799 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__should_add_region_ops_2_f_0(
#line 799 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4,
#line 799 "code_info.m"
  MR_Word ll_backend__code_info___GoalInfo_5)
#line 799 "code_info.m"
{
#line 594 "code_info.m"
  {
#line 594 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__AddRegionOps_6;

#line 594 "code_info.m"
    {
#line 594 "code_info.m"
      return ll_backend__code_info__AddRegionOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
#line 594 "code_info.m"
    return ll_backend__code_info__AddRegionOps_6;
#line 594 "code_info.m"
  }
#line 799 "code_info.m"
}

#line 794 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__should_add_trail_ops_2_f_0(
#line 794 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4,
#line 794 "code_info.m"
  MR_Word ll_backend__code_info___GoalInfo_5)
#line 794 "code_info.m"
{
#line 590 "code_info.m"
  {
#line 590 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__AddTrailOps_6;

#line 590 "code_info.m"
    {
#line 590 "code_info.m"
      return ll_backend__code_info__AddTrailOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
#line 590 "code_info.m"
    return ll_backend__code_info__AddTrailOps_6;
#line 590 "code_info.m"
  }
#line 794 "code_info.m"
}

#line 788 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_alloc_site_info_6_p_0(
#line 788 "code_info.m"
  MR_Word ll_backend__code_info__Context_7,
#line 788 "code_info.m"
  MR_String ll_backend__code_info__Type_8,
#line 788 "code_info.m"
  MR_Integer ll_backend__code_info__Size_9,
#line 788 "code_info.m"
  MR_Word * ll_backend__code_info__AllocId_10,
#line 788 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_16,
#line 788 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_17)
#line 788 "code_info.m"
{
#line 1007 "code_info.m"
  {
#line 1007 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_12;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__AllocSite_13;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__AllocSites0_14;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__AllocSites_15;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 1007 "code_info.m"
    MR_Word ll_backend__code_info__V_72_72;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 0)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 1)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 2)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 3)));
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 4)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 5)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 6)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_33_33;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_52_52;
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_53_53;
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_54_54;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_62_62;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_77_77;
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_78_78;
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_79_79;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_81_81;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_83_83;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_84_84;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_85_85;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_87_87;
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_88_88;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_89_89;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_90_90;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_86_86;

#line 579 "code_info.m"
    ll_backend__code_info__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 7)));
#line 579 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 8)));
#line 579 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 9)));
#line 579 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 10)));
#line 579 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 11)));
#line 579 "code_info.m"
    ll_backend__code_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 13)));
#line 579 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 14)));
#line 1009 "code_info.m"
    {
#line 1009 "code_info.m"
      ll_backend__code_info__AllocSite_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 0) = ((MR_Box) (ll_backend__code_info__ProcLabel_12));
#line 1009 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 1) = ((MR_Box) (ll_backend__code_info__Context_7));
#line 1009 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 2) = ((MR_Box) (ll_backend__code_info__Type_8));
#line 1009 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 3) = ((MR_Box) (ll_backend__code_info__Size_9));
#line 1009 "code_info.m"
    }
#line 1010 "code_info.m"
    *ll_backend__code_info__AllocId_10 = (MR_Word) ll_backend__code_info__AllocSite_13;
#line 633 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
#line 633 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
#line 633 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
#line 633 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
#line 633 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
#line 633 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
#line 633 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
#line 633 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
#line 633 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
#line 633 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
#line 633 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
#line 633 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
#line 633 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)));
#line 633 "code_info.m"
    ll_backend__code_info__AllocSites0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
#line 633 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
#line 633 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 15)));
#line 633 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 16)));
#line 633 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 17)));
#line 1012 "code_info.m"
    {
#line 1012 "code_info.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ((MR_Box) (ll_backend__code_info__AllocSite_13)), ll_backend__code_info__AllocSites0_14, &ll_backend__code_info__AllocSites_15);
    }
#line 668 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
#line 668 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
#line 668 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 0)));
#line 668 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 1)));
#line 668 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 2)));
#line 668 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 3)));
#line 668 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 4)));
#line 668 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 5)));
#line 668 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 6)));
#line 668 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 7)));
#line 668 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 8)));
#line 668 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 9)));
#line 668 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 10)));
#line 668 "code_info.m"
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 11)));
#line 668 "code_info.m"
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 12)));
#line 668 "code_info.m"
    ll_backend__code_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 13)));
#line 668 "code_info.m"
    ll_backend__code_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 14)));
#line 668 "code_info.m"
    ll_backend__code_info__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 15)));
#line 668 "code_info.m"
    ll_backend__code_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 16)));
#line 668 "code_info.m"
    ll_backend__code_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 17)));
#line 668 "code_info.m"
    {
#line 668 "code_info.m"
      ll_backend__code_info__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 0) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 1) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 2) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 3) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 4) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 5) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 6) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 7) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 8) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 9) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 10) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 11) = ((MR_Box) (ll_backend__code_info__V_84_84));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 12) = ((MR_Box) (ll_backend__code_info__V_85_85));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 13) = ((MR_Box) (ll_backend__code_info__AllocSites_15));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 14) = ((MR_Box) (ll_backend__code_info__V_87_87));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 15) = ((MR_Box) (ll_backend__code_info__V_88_88));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 16) = ((MR_Box) (ll_backend__code_info__V_89_89));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 17) = ((MR_Box) (ll_backend__code_info__V_90_90));
#line 668 "code_info.m"
    }
#line 668 "code_info.m"
    {
#line 668 "code_info.m"
      MR_Word base;
#line 668 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_17 = base;
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 668 "code_info.m"
    }
#line 1007 "code_info.m"
  }
#line 788 "code_info.m"
}

#line 785 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_vector_static_cell_5_p_0(
#line 785 "code_info.m"
  MR_Word ll_backend__code_info__Types_6,
#line 785 "code_info.m"
  MR_Word ll_backend__code_info__Vector_7,
#line 785 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_8,
#line 785 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_12,
#line 785 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_13)
#line 785 "code_info.m"
{
#line 1001 "code_info.m"
  {
#line 1001 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_10;
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_11;
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 1001 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 1)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 2)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 3)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 4)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 5)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 6)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 7)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 8)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 9)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 10)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 11)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_33_33;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_49_49;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_50_50;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;

#line 631 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 12)));
#line 631 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 13)));
#line 631 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 14)));
#line 631 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 15)));
#line 631 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 16)));
#line 631 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 17)));
#line 1003 "code_info.m"
    {
#line 1003 "code_info.m"
      ll_backend__global_data__add_vector_static_cell_5_p_0(ll_backend__code_info__Types_6, ll_backend__code_info__Vector_7, ll_backend__code_info__DataAddr_8, ll_backend__code_info__StaticCellInfo0_10, &ll_backend__code_info__StaticCellInfo_11);
    }
#line 666 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
#line 666 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
#line 666 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
#line 666 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
#line 666 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
#line 666 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
#line 666 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
#line 666 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
#line 666 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
#line 666 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
#line 666 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
#line 666 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
#line 666 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
#line 666 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
#line 666 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
#line 666 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      ll_backend__code_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 0) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 1) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 2) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 3) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 4) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 5) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 6) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 7) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 8) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 9) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 10) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 11) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_11));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 13) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 14) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 15) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 16) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 17) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 666 "code_info.m"
    }
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      MR_Word base;
#line 666 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_13 = base;
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 666 "code_info.m"
    }
#line 1001 "code_info.m"
  }
#line 785 "code_info.m"
}

#line 782 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(
#line 782 "code_info.m"
  MR_Word ll_backend__code_info__Rvals_5,
#line 782 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_6,
#line 782 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 782 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 782 "code_info.m"
{
#line 995 "code_info.m"
  {
#line 995 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_9;
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 995 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;

#line 631 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
#line 631 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 631 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 631 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
#line 631 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
#line 631 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
#line 997 "code_info.m"
    {
#line 997 "code_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__code_info__Rvals_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
#line 666 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 666 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 666 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 666 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 666 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 666 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 666 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 666 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 666 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 666 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 666 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
#line 666 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 666 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 666 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
#line 666 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
#line 666 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 666 "code_info.m"
    }
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      MR_Word base;
#line 666 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 666 "code_info.m"
    }
#line 995 "code_info.m"
  }
#line 782 "code_info.m"
}

#line 779 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_4_p_0(
#line 779 "code_info.m"
  MR_Word ll_backend__code_info__RvalsTypes_5,
#line 779 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_6,
#line 779 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 779 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 779 "code_info.m"
{
#line 989 "code_info.m"
  {
#line 989 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_9;
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 989 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;

#line 631 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
#line 631 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 631 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 631 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
#line 631 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
#line 631 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
#line 991 "code_info.m"
    {
#line 991 "code_info.m"
      ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__code_info__RvalsTypes_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
#line 666 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 666 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 666 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 666 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 666 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 666 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 666 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 666 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 666 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 666 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 666 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 666 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 666 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
#line 666 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 666 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 666 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
#line 666 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
#line 666 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 666 "code_info.m"
    }
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      MR_Word base;
#line 666 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 666 "code_info.m"
    }
#line 989 "code_info.m"
  }
#line 779 "code_info.m"
}

#line 776 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(
#line 776 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 776 "code_info.m"
  MR_Word * ll_backend__code_info__RevTable_5,
#line 776 "code_info.m"
  MR_Integer * ll_backend__code_info__TableSize_6)
#line 776 "code_info.m"
{
#line 985 "code_info.m"
  {
#line 985 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 986 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 986 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 986 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 986 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 986 "code_info.m"
    *ll_backend__code_info__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 986 "code_info.m"
    *ll_backend__code_info__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 986 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 985 "code_info.m"
  }
#line 776 "code_info.m"
}

#line 773 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_threadscope_string_4_p_0(
#line 773 "code_info.m"
  MR_String ll_backend__code_info__String_5,
#line 773 "code_info.m"
  MR_Integer * ll_backend__code_info__SlotNum_6,
#line 773 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_15,
#line 773 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_16)
#line 773 "code_info.m"
{
#line 974 "code_info.m"
  {
#line 974 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__Persistent0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 1)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__RevTable0_10;
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__Size_11;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__RevTable_12;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__Persistent_14;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 0)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 0)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 1)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 2)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 3)));
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 4)));
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 5)));
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 6)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 7)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 8)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 9)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 10)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 11)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 12)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 13)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 14)));
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_58_58;
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 974 "code_info.m"
    MR_Integer ll_backend__code_info__V_60_60;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 974 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;

#line 976 "code_info.m"
    *ll_backend__code_info__SlotNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 15)));
#line 976 "code_info.m"
    ll_backend__code_info__RevTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 16)));
#line 976 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 17)));
#line 979 "code_info.m"
    ll_backend__code_info__Size_11 = (*ll_backend__code_info__SlotNum_6 + (MR_Integer) 1);
#line 980 "code_info.m"
    {
#line 980 "code_info.m"
      ll_backend__code_info__RevTable_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 0) = ((MR_Box) (ll_backend__code_info__String_5));
#line 980 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 1) = ((MR_Box) (ll_backend__code_info__RevTable0_10));
#line 980 "code_info.m"
    }
#line 981 "code_info.m"
    ll_backend__code_info__V_54_54 = ll_backend__code_info__V_20_20;
#line 981 "code_info.m"
    ll_backend__code_info__V_55_55 = ll_backend__code_info__V_21_21;
#line 981 "code_info.m"
    ll_backend__code_info__V_56_56 = ll_backend__code_info__V_22_22;
#line 981 "code_info.m"
    ll_backend__code_info__V_57_57 = ll_backend__code_info__V_23_23;
#line 981 "code_info.m"
    ll_backend__code_info__V_58_58 = ll_backend__code_info__V_24_24;
#line 981 "code_info.m"
    ll_backend__code_info__V_59_59 = ll_backend__code_info__V_25_25;
#line 981 "code_info.m"
    ll_backend__code_info__V_60_60 = ll_backend__code_info__V_26_26;
#line 981 "code_info.m"
    ll_backend__code_info__V_61_61 = ll_backend__code_info__V_27_27;
#line 981 "code_info.m"
    ll_backend__code_info__V_62_62 = ll_backend__code_info__V_28_28;
#line 981 "code_info.m"
    ll_backend__code_info__V_63_63 = ll_backend__code_info__V_29_29;
#line 981 "code_info.m"
    ll_backend__code_info__V_64_64 = ll_backend__code_info__V_30_30;
#line 981 "code_info.m"
    ll_backend__code_info__V_65_65 = ll_backend__code_info__V_31_31;
#line 981 "code_info.m"
    ll_backend__code_info__V_66_66 = ll_backend__code_info__V_32_32;
#line 981 "code_info.m"
    ll_backend__code_info__V_67_67 = ll_backend__code_info__V_33_33;
#line 981 "code_info.m"
    ll_backend__code_info__V_68_68 = ll_backend__code_info__V_34_34;
#line 981 "code_info.m"
    ll_backend__code_info__V_71_71 = ll_backend__code_info__V_36_36;
#line 982 "code_info.m"
    {
#line 982 "code_info.m"
      ll_backend__code_info__Persistent_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 0) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 1) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 2) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 3) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 4) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 5) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 6) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 7) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 8) = ((MR_Box) (ll_backend__code_info__V_62_62));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 9) = ((MR_Box) (ll_backend__code_info__V_63_63));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 10) = ((MR_Box) (ll_backend__code_info__V_64_64));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 11) = ((MR_Box) (ll_backend__code_info__V_65_65));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 12) = ((MR_Box) (ll_backend__code_info__V_66_66));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 13) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 14) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 15) = ((MR_Box) (ll_backend__code_info__Size_11));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 16) = ((MR_Box) (ll_backend__code_info__RevTable_12));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 17) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 982 "code_info.m"
    }
#line 983 "code_info.m"
    {
#line 983 "code_info.m"
      MR_Word base;
#line 983 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_16 = base;
#line 983 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 983 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__Persistent_14));
#line 983 "code_info.m"
    }
#line 974 "code_info.m"
  }
#line 773 "code_info.m"
}

#line 770 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_closure_layout_3_p_0(
#line 770 "code_info.m"
  MR_Word ll_backend__code_info__ClosureLayout_4,
#line 770 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_7,
#line 770 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_8)
#line 770 "code_info.m"
{
#line 970 "code_info.m"
  {
#line 970 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__ClosureLayouts_6;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 1)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 0)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 970 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 970 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 970 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 970 "code_info.m"
    MR_Integer ll_backend__code_info__V_29_29;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 970 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;

#line 629 "code_info.m"
    ll_backend__code_info__ClosureLayouts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 629 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 629 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 629 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 629 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 629 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 629 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 629 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 972 "code_info.m"
    {
#line 972 "code_info.m"
      ll_backend__code_info__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 0) = ((MR_Box) (ll_backend__code_info__ClosureLayout_4));
#line 972 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 1) = ((MR_Box) (ll_backend__code_info__ClosureLayouts_6));
#line 972 "code_info.m"
    }
#line 662 "code_info.m"
    {
#line 662 "code_info.m"
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_9_9));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 662 "code_info.m"
    }
#line 662 "code_info.m"
    {
#line 662 "code_info.m"
      MR_Word base;
#line 662 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 662 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_8 = base;
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 662 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 662 "code_info.m"
    }
#line 970 "code_info.m"
  }
#line 770 "code_info.m"
}

#line 767 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_resume_layout_for_label_4_p_0(
#line 767 "code_info.m"
  MR_Word ll_backend__code_info__Label_5,
#line 767 "code_info.m"
  MR_Word ll_backend__code_info__LayoutInfo_6,
#line 767 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 767 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
#line 767 "code_info.m"
{
#line 940 "code_info.m"
  {
#line 940 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__Internals0_8;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__Resume_9;
#line 940 "code_info.m"
    MR_Integer ll_backend__code_info__LabelNum_10;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__Internals_20;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 940 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 959 "code_info.m"
    MR_Word ll_backend__code_info__Internal0_14;
#line 949 "code_info.m"
    MR_Box ll_backend__code_info__conv0_Internal0_14;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_72_72;
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_73_73;
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_74_74;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_81_81;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_83_83;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_84_84;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_85_85;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;

#line 612 "code_info.m"
    ll_backend__code_info__Internals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
#line 612 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
#line 612 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
#line 612 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
#line 612 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
#line 612 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
#line 612 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
#line 612 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
#line 612 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
#line 612 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
#line 612 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
#line 612 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
#line 612 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
#line 612 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
#line 612 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
#line 612 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
#line 942 "code_info.m"
    {
#line 942 "code_info.m"
      ll_backend__code_info__Resume_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 942 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Resume_9, 0) = ((MR_Box) (ll_backend__code_info__LayoutInfo_6));
#line 942 "code_info.m"
    }
#line 945 "code_info.m"
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_5)) == (MR_mktag((MR_Integer) 1))))
#line 946 "code_info.m"
      {
#line 947 "code_info.m"
        {
#line 947 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "entry");
#line 947 "code_info.m"
          return;
        }
#line 946 "code_info.m"
      }
#line 945 "code_info.m"
    else
#line 944 "code_info.m"
      {
#line 944 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11;

#line 944 "code_info.m"
        ll_backend__code_info__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 0)));
#line 944 "code_info.m"
        ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 1)));
#line 944 "code_info.m"
      }
#line 949 "code_info.m"
    {
#line 949 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_8, ll_backend__code_info__LabelNum_10, &ll_backend__code_info__conv0_Internal0_14);
    }
#line 949 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 949 "code_info.m"
      {
#line 949 "code_info.m"
        ll_backend__code_info__Internal0_14 = ((MR_Word) ll_backend__code_info__conv0_Internal0_14);
#line 949 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 949 "code_info.m"
      }
#line 959 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 950 "code_info.m"
      {
#line 950 "code_info.m"
        MR_Word ll_backend__code_info__Exec_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 0)));
#line 950 "code_info.m"
        MR_Word ll_backend__code_info__Resume0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 1)));
#line 950 "code_info.m"
        MR_Word ll_backend__code_info__Return_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 2)));
#line 950 "code_info.m"
        MR_Word ll_backend__code_info__Internal_19;

#line 953 "code_info.m"
        if ((ll_backend__code_info__Resume0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "code_info.m"
          {
#line 952 "code_info.m"
          }
#line 953 "code_info.m"
        else
#line 954 "code_info.m"
          {
#line 955 "code_info.m"
            {
#line 955 "code_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "already known label");
#line 955 "code_info.m"
              return;
            }
#line 954 "code_info.m"
          }
#line 957 "code_info.m"
        {
#line 957 "code_info.m"
          ll_backend__code_info__Internal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 957 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 0) = ((MR_Box) (ll_backend__code_info__Exec_15));
#line 957 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
#line 957 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 2) = ((MR_Box) (ll_backend__code_info__Return_17));
#line 957 "code_info.m"
        }
#line 958 "code_info.m"
        {
#line 958 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_19)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
#line 950 "code_info.m"
      }
#line 959 "code_info.m"
    else
#line 960 "code_info.m"
      {
#line 960 "code_info.m"
        MR_Word ll_backend__code_info__Internal_32;

#line 960 "code_info.m"
        {
#line 960 "code_info.m"
          ll_backend__code_info__Internal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 960 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
#line 960 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "code_info.m"
        }
#line 961 "code_info.m"
        {
#line 961 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_32)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
#line 960 "code_info.m"
      }
#line 647 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
#line 647 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
#line 647 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 0)));
#line 647 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 1)));
#line 647 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 2)));
#line 647 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 3)));
#line 647 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 4)));
#line 647 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 5)));
#line 647 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 6)));
#line 647 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 7)));
#line 647 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 8)));
#line 647 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 9)));
#line 647 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 10)));
#line 647 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 11)));
#line 647 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 12)));
#line 647 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 13)));
#line 647 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 14)));
#line 647 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 15)));
#line 647 "code_info.m"
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 16)));
#line 647 "code_info.m"
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 17)));
#line 647 "code_info.m"
    {
#line 647 "code_info.m"
      ll_backend__code_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 0) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 1) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 2) = ((MR_Box) (ll_backend__code_info__Internals_20));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 3) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 4) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 5) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 6) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 7) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 8) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 9) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 10) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 11) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 12) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 13) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 14) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 15) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 16) = ((MR_Box) (ll_backend__code_info__V_84_84));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 17) = ((MR_Box) (ll_backend__code_info__V_85_85));
#line 647 "code_info.m"
    }
#line 647 "code_info.m"
    {
#line 647 "code_info.m"
      MR_Word base;
#line 647 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_66_66));
#line 647 "code_info.m"
    }
#line 940 "code_info.m"
  }
#line 767 "code_info.m"
}

#line 764 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_next_closure_seq_no_3_p_0(
#line 764 "code_info.m"
  MR_Integer * ll_backend__code_info__SeqNo_4,
#line 764 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 764 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 764 "code_info.m"
{
#line 965 "code_info.m"
  {
#line 965 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__C0_6;
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__C_7;
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 965 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 627 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 627 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 627 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 627 "code_info.m"
    MR_Integer ll_backend__code_info__V_29_29;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 660 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 660 "code_info.m"
    MR_Integer ll_backend__code_info__V_45_45;
#line 660 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 660 "code_info.m"
    MR_Integer ll_backend__code_info__V_55_55;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 660 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;

#line 627 "code_info.m"
    ll_backend__code_info__C0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 627 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 627 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 627 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 627 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 627 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 627 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 627 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 627 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 967 "code_info.m"
    {
#line 967 "code_info.m"
      mercury__counter__allocate_3_p_0(ll_backend__code_info__SeqNo_4, ll_backend__code_info__C0_6, &ll_backend__code_info__C_7);
    }
#line 660 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 660 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 660 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 0)));
#line 660 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 1)));
#line 660 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 2)));
#line 660 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 3)));
#line 660 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 4)));
#line 660 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 5)));
#line 660 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 6)));
#line 660 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 7)));
#line 660 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 8)));
#line 660 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 9)));
#line 660 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 10)));
#line 660 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 11)));
#line 660 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 12)));
#line 660 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 13)));
#line 660 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 14)));
#line 660 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 15)));
#line 660 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 16)));
#line 660 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 17)));
#line 660 "code_info.m"
    {
#line 660 "code_info.m"
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__C_7));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 660 "code_info.m"
    }
#line 660 "code_info.m"
    {
#line 660 "code_info.m"
      MR_Word base;
#line 660 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 660 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 660 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 660 "code_info.m"
    }
#line 965 "code_info.m"
  }
#line 764 "code_info.m"
}

#line 760 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_trace_layout_for_label_9_p_0(
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__Label_10,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__Context_11,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__Port_12,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__IsHidden_13,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__GoalPath_14,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__MaybeSolverEventInfo_15,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__Layout_16,
#line 760 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_31,
#line 760 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_32)
#line 760 "code_info.m"
{
#line 914 "code_info.m"
  {
#line 914 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 914 "code_info.m"
    MR_Word ll_backend__code_info__Internals0_18;
#line 914 "code_info.m"
    MR_Word ll_backend__code_info__Exec_19;
#line 914 "code_info.m"
    MR_Integer ll_backend__code_info__LabelNum_20;
#line 914 "code_info.m"
    MR_Word ll_backend__code_info__Internals_30;
#line 914 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 914 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 1)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 1)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_58_58;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_68_68;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;
#line 934 "code_info.m"
    MR_Word ll_backend__code_info__Internal0_24;
#line 924 "code_info.m"
    MR_Box ll_backend__code_info__conv0_Internal0_24;

#line 612 "code_info.m"
    ll_backend__code_info__Internals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 2)));
#line 612 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 3)));
#line 612 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 4)));
#line 612 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 5)));
#line 612 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 6)));
#line 612 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 7)));
#line 612 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 8)));
#line 612 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 9)));
#line 612 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 10)));
#line 612 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 11)));
#line 612 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 12)));
#line 612 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 13)));
#line 612 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 14)));
#line 612 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 15)));
#line 612 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 16)));
#line 612 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 17)));
#line 916 "code_info.m"
    {
#line 916 "code_info.m"
      ll_backend__code_info__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 0) = ((MR_Box) (ll_backend__code_info__Context_11));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 1) = ((MR_Box) (ll_backend__code_info__Port_12));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 2) = ((MR_Box) (ll_backend__code_info__IsHidden_13));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 3) = ((MR_Box) (ll_backend__code_info__GoalPath_14));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 4) = ((MR_Box) (ll_backend__code_info__MaybeSolverEventInfo_15));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 5) = ((MR_Box) (ll_backend__code_info__Layout_16));
#line 916 "code_info.m"
    }
#line 916 "code_info.m"
    {
#line 916 "code_info.m"
      ll_backend__code_info__Exec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Exec_19, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 916 "code_info.m"
    }
#line 920 "code_info.m"
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_10)) == (MR_mktag((MR_Integer) 1))))
#line 921 "code_info.m"
      {
#line 922 "code_info.m"
        {
#line 922 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "entry");
#line 922 "code_info.m"
          return;
        }
#line 921 "code_info.m"
      }
#line 920 "code_info.m"
    else
#line 919 "code_info.m"
      {
#line 919 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21;

#line 919 "code_info.m"
        ll_backend__code_info__LabelNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 0)));
#line 919 "code_info.m"
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 1)));
#line 919 "code_info.m"
      }
#line 924 "code_info.m"
    {
#line 924 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_18, ll_backend__code_info__LabelNum_20, &ll_backend__code_info__conv0_Internal0_24);
    }
#line 924 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 924 "code_info.m"
      {
#line 924 "code_info.m"
        ll_backend__code_info__Internal0_24 = ((MR_Word) ll_backend__code_info__conv0_Internal0_24);
#line 924 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 924 "code_info.m"
      }
#line 934 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 925 "code_info.m"
      {
#line 925 "code_info.m"
        MR_Word ll_backend__code_info__Exec0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 0)));
#line 925 "code_info.m"
        MR_Word ll_backend__code_info__Resume_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 1)));
#line 925 "code_info.m"
        MR_Word ll_backend__code_info__Return_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 2)));
#line 925 "code_info.m"
        MR_Word ll_backend__code_info__Internal_29;

#line 928 "code_info.m"
        if ((ll_backend__code_info__Exec0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "code_info.m"
          {
#line 927 "code_info.m"
          }
#line 928 "code_info.m"
        else
#line 929 "code_info.m"
          {
#line 930 "code_info.m"
            {
#line 930 "code_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "already known label");
#line 930 "code_info.m"
              return;
            }
#line 929 "code_info.m"
          }
#line 932 "code_info.m"
        {
#line 932 "code_info.m"
          ll_backend__code_info__Internal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 932 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
#line 932 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 1) = ((MR_Box) (ll_backend__code_info__Resume_26));
#line 932 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 2) = ((MR_Box) (ll_backend__code_info__Return_27));
#line 932 "code_info.m"
        }
#line 933 "code_info.m"
        {
#line 933 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_29)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
#line 925 "code_info.m"
      }
#line 934 "code_info.m"
    else
#line 935 "code_info.m"
      {
#line 935 "code_info.m"
        MR_Word ll_backend__code_info__Internal_43;

#line 935 "code_info.m"
        {
#line 935 "code_info.m"
          ll_backend__code_info__Internal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 935 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
#line 935 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "code_info.m"
        }
#line 936 "code_info.m"
        {
#line 936 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_43)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
#line 935 "code_info.m"
      }
#line 938 "code_info.m"
    {
#line 938 "code_info.m"
      ll_backend__code_info__set_layout_info_3_p_0(ll_backend__code_info__Internals_30, ll_backend__code_info__STATE_VARIABLE_CI_0_31, ll_backend__code_info__STATE_VARIABLE_CI_32);
#line 938 "code_info.m"
      return;
    }
#line 914 "code_info.m"
  }
#line 760 "code_info.m"
}

#line 758 "code_info.m"
void MR_CALL 
ll_backend__code_info__succip_is_used_2_p_0(
#line 758 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_4,
#line 758 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_5)
#line 758 "code_info.m"
{
#line 910 "code_info.m"
  {
#line 910 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 910 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 1)));
#line 910 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 910 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 0)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 645 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 645 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 645 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 645 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));

#line 645 "code_info.m"
    {
#line 645 "code_info.m"
      ll_backend__code_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 0) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 2) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 3) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 4) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 5) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 6) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 7) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 8) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 9) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 10) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 11) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 12) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 13) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 14) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 15) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 16) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 17) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 645 "code_info.m"
    }
#line 645 "code_info.m"
    {
#line 645 "code_info.m"
      MR_Word base;
#line 645 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_5 = base;
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 645 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 645 "code_info.m"
    }
#line 910 "code_info.m"
  }
#line 758 "code_info.m"
}

#line 753 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_next_label_3_p_0(
#line 753 "code_info.m"
  MR_Word * ll_backend__code_info__Label_4,
#line 753 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 753 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 753 "code_info.m"
{
#line 903 "code_info.m"
  {
#line 903 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_6;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__C0_7;
#line 903 "code_info.m"
    MR_Integer ll_backend__code_info__N_8;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__C_9;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 903 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_45_45;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_55_55;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 643 "code_info.m"
    MR_Integer ll_backend__code_info__V_70_70;
#line 643 "code_info.m"
    MR_Integer ll_backend__code_info__V_71_71;
#line 643 "code_info.m"
    MR_Integer ll_backend__code_info__V_72_72;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 643 "code_info.m"
    MR_Integer ll_backend__code_info__V_81_81;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_83_83;
#line 643 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;

#line 579 "code_info.m"
    ll_backend__code_info__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 579 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 579 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 579 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 579 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 579 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 579 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 608 "code_info.m"
    ll_backend__code_info__C0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 0)));
#line 608 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 1)));
#line 608 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 2)));
#line 608 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 3)));
#line 608 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 4)));
#line 608 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 5)));
#line 608 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 6)));
#line 608 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 7)));
#line 608 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 8)));
#line 608 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 9)));
#line 608 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 10)));
#line 608 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 11)));
#line 608 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 12)));
#line 608 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 13)));
#line 608 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 14)));
#line 608 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 15)));
#line 608 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 16)));
#line 608 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 17)));
#line 906 "code_info.m"
    {
#line 906 "code_info.m"
      mercury__counter__allocate_3_p_0(&ll_backend__code_info__N_8, ll_backend__code_info__C0_7, &ll_backend__code_info__C_9);
    }
#line 643 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 643 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 643 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 0)));
#line 643 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 1)));
#line 643 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 2)));
#line 643 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 3)));
#line 643 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 4)));
#line 643 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 5)));
#line 643 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 6)));
#line 643 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 7)));
#line 643 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 8)));
#line 643 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 9)));
#line 643 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 10)));
#line 643 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 11)));
#line 643 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 12)));
#line 643 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 13)));
#line 643 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 14)));
#line 643 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 15)));
#line 643 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 16)));
#line 643 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 17)));
#line 643 "code_info.m"
    {
#line 643 "code_info.m"
      ll_backend__code_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 0) = ((MR_Box) (ll_backend__code_info__C_9));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 1) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 2) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 3) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 4) = ((MR_Box) (ll_backend__code_info__V_70_70));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 5) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 6) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 7) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 8) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 9) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 10) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 11) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 12) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 13) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 14) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 15) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 16) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 17) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 643 "code_info.m"
    }
#line 643 "code_info.m"
    {
#line 643 "code_info.m"
      MR_Word base;
#line 643 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_65_65));
#line 643 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_64_64));
#line 643 "code_info.m"
    }
#line 908 "code_info.m"
    {
#line 908 "code_info.m"
      MR_Word base;
#line 908 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "code_info.m"
      *ll_backend__code_info__Label_4 = base;
#line 908 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__N_8));
#line 908 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__ProcLabel_6));
#line 908 "code_info.m"
    }
#line 903 "code_info.m"
  }
#line 753 "code_info.m"
}

#line 748 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__make_proc_entry_label_5_f_0(
#line 748 "code_info.m"
  MR_Word ll_backend__code_info__CI_7,
#line 748 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_8,
#line 748 "code_info.m"
  MR_Word ll_backend__code_info__PredId_9,
#line 748 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_10,
#line 748 "code_info.m"
  MR_Word ll_backend__code_info__Immed0_11)
#line 748 "code_info.m"
{
#line 889 "code_info.m"
  {
#line 889 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 889 "code_info.m"
    MR_Word ll_backend__code_info__CodeAddr_12;
#line 889 "code_info.m"
    MR_Word ll_backend__code_info__Immed_13;

#line 893 "code_info.m"
#line 893 "code_info.m"
    switch (ll_backend__code_info__Immed0_11) {
#line 893 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 893 "code_info.m"
      case (MR_Integer) 0:
#line 892 "code_info.m"
        ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "code_info.m"
        break;
#line 893 "code_info.m"
      case (MR_Integer) 1:
#line 894 "code_info.m"
        {
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__Globals_14;
#line 894 "code_info.m"
          MR_Integer ll_backend__code_info__ProcsPerFunc_15;
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__CurPredId_16;
#line 894 "code_info.m"
          MR_Integer ll_backend__code_info__CurProcId_17;
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__V_19_19;
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__V_20_20;
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
#line 894 "code_info.m"
          MR_Word ll_backend__code_info__V_47_47;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_26_26;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_27_27;
#line 567 "code_info.m"
          MR_Integer ll_backend__code_info__V_28_28;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_29_29;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_30_30;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_31_31;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_32_32;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_33_33;
#line 567 "code_info.m"
          MR_Integer ll_backend__code_info__V_34_34;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_35_35;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_36_36;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_37_37;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_38_38;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_39_39;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_40_40;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_41_41;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_42_42;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_43_43;
#line 567 "code_info.m"
          MR_Word ll_backend__code_info__V_44_44;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_48_48;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_49_49;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_50_50;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_51_51;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_53_53;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_54_54;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_55_55;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_56_56;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_57_57;
#line 571 "code_info.m"
          MR_Integer ll_backend__code_info__V_58_58;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_59_59;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_60_60;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_61_61;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_62_62;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_63_63;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_64_64;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_65_65;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_66_66;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_67_67;
#line 571 "code_info.m"
          MR_Word ll_backend__code_info__V_68_68;

#line 567 "code_info.m"
          ll_backend__code_info__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
#line 567 "code_info.m"
          ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
#line 567 "code_info.m"
          ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
#line 567 "code_info.m"
          ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
#line 567 "code_info.m"
          ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
#line 567 "code_info.m"
          ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
#line 567 "code_info.m"
          ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
#line 567 "code_info.m"
          ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
#line 567 "code_info.m"
          ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
#line 567 "code_info.m"
          ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
#line 567 "code_info.m"
          ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
#line 567 "code_info.m"
          ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 567 "code_info.m"
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
#line 567 "code_info.m"
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
#line 896 "code_info.m"
          {
#line 896 "code_info.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__code_info__Globals_14, (MR_Integer) 484, &ll_backend__code_info__ProcsPerFunc_15);
          }
#line 571 "code_info.m"
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
#line 571 "code_info.m"
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
#line 571 "code_info.m"
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 0)));
#line 571 "code_info.m"
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 1)));
#line 571 "code_info.m"
          ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 2)));
#line 571 "code_info.m"
          ll_backend__code_info__CurPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 3)));
#line 571 "code_info.m"
          ll_backend__code_info__CurProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 4)));
#line 571 "code_info.m"
          ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 5)));
#line 571 "code_info.m"
          ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 6)));
#line 571 "code_info.m"
          ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 7)));
#line 571 "code_info.m"
          ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 8)));
#line 571 "code_info.m"
          ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 9)));
#line 571 "code_info.m"
          ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 10)));
#line 571 "code_info.m"
          ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 11)));
#line 571 "code_info.m"
          ll_backend__code_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 571 "code_info.m"
          ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 13)));
#line 571 "code_info.m"
          ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 14)));
#line 899 "code_info.m"
          {
#line 899 "code_info.m"
            ll_backend__code_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 0) = ((MR_Box) (ll_backend__code_info__CurPredId_16));
#line 899 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 1) = ((MR_Box) (ll_backend__code_info__CurProcId_17));
#line 899 "code_info.m"
          }
#line 899 "code_info.m"
          {
#line 899 "code_info.m"
            ll_backend__code_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 0) = ((MR_Box) (ll_backend__code_info__ProcsPerFunc_15));
#line 899 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 1) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 899 "code_info.m"
          }
#line 899 "code_info.m"
          {
#line 899 "code_info.m"
            ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "code_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__code_info__Immed_13, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 899 "code_info.m"
          }
#line 894 "code_info.m"
        }
#line 893 "code_info.m"
        break;
#line 893 "code_info.m"
    }
#line 901 "code_info.m"
    {
#line 901 "code_info.m"
      return ll_backend__code_info__CodeAddr_12 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__PredId_9, ll_backend__code_info__ProcId_10, ll_backend__code_info__Immed_13);
    }
#line 889 "code_info.m"
    return ll_backend__code_info__CodeAddr_12;
#line 889 "code_info.m"
  }
#line 748 "code_info.m"
}

#line 728 "code_info.m"
MR_String MR_CALL 
ll_backend__code_info__variable_name_2_f_0(
#line 728 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 728 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 728 "code_info.m"
{
#line 883 "code_info.m"
  {
#line 883 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 883 "code_info.m"
    MR_String ll_backend__code_info__Name_6;
#line 883 "code_info.m"
    MR_Word ll_backend__code_info__Varset_7;
#line 883 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 581 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 581 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;

#line 581 "code_info.m"
    ll_backend__code_info__Varset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 581 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 581 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 581 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 581 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 581 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 885 "code_info.m"
    {
#line 885 "code_info.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_6);
    }
#line 883 "code_info.m"
    return ll_backend__code_info__Name_6;
#line 883 "code_info.m"
  }
#line 728 "code_info.m"
}

#line 726 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_pred_proc_arginfo_3_f_0(
#line 726 "code_info.m"
  MR_Word ll_backend__code_info__CI_5,
#line 726 "code_info.m"
  MR_Word ll_backend__code_info__PredId_6,
#line 726 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_7)
#line 726 "code_info.m"
{
#line 878 "code_info.m"
  {
#line 878 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 878 "code_info.m"
    MR_Word ll_backend__code_info__ArgInfo_8;
#line 878 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_9;
#line 878 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_11;
#line 878 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 880 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 14)));
#line 880 "code_info.m"
    {
#line 880 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_9, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_10_10, &ll_backend__code_info__ProcInfo_11);
    }
#line 881 "code_info.m"
    {
#line 881 "code_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_11, &ll_backend__code_info__ArgInfo_8);
    }
#line 878 "code_info.m"
    return ll_backend__code_info__ArgInfo_8;
#line 878 "code_info.m"
  }
#line 726 "code_info.m"
}

#line 722 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_arginfo_1_f_0(
#line 722 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 722 "code_info.m"
{
#line 873 "code_info.m"
  {
#line 873 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 873 "code_info.m"
    MR_Word ll_backend__code_info__ArgInfo_4;
#line 873 "code_info.m"
    MR_Word ll_backend__code_info__PredId_5;
#line 873 "code_info.m"
    MR_Integer ll_backend__code_info__ProcId_6;
#line 873 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 873 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 873 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_61;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 571 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 880 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;

#line 571 "code_info.m"
    ll_backend__code_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 571 "code_info.m"
    ll_backend__code_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 571 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 571 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 571 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 571 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 571 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 571 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 571 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 571 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 571 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 880 "code_info.m"
    {
#line 880 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_59, ll_backend__code_info__PredId_5, ll_backend__code_info__ProcId_6, &ll_backend__code_info__V_60_60, &ll_backend__code_info__ProcInfo_61);
    }
#line 881 "code_info.m"
    {
#line 881 "code_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_61, &ll_backend__code_info__ArgInfo_4);
    }
#line 873 "code_info.m"
    return ll_backend__code_info__ArgInfo_4;
#line 873 "code_info.m"
  }
#line 722 "code_info.m"
}

#line 718 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_headvars_1_f_0(
#line 718 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 718 "code_info.m"
{
#line 866 "code_info.m"
  {
#line 866 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 866 "code_info.m"
    MR_Word ll_backend__code_info__HeadVars_4;
#line 866 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_5;
#line 866 "code_info.m"
    MR_Word ll_backend__code_info__PredId_6;
#line 866 "code_info.m"
    MR_Integer ll_backend__code_info__ProcId_7;
#line 866 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_9;
#line 866 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 870 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 870 "code_info.m"
    {
#line 870 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_8_8, &ll_backend__code_info__ProcInfo_9);
    }
#line 871 "code_info.m"
    {
#line 871 "code_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__code_info__ProcInfo_9, &ll_backend__code_info__HeadVars_4);
    }
#line 866 "code_info.m"
    return ll_backend__code_info__HeadVars_4;
#line 866 "code_info.m"
  }
#line 718 "code_info.m"
}

#line 714 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_proc_model_1_f_0(
#line 714 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 714 "code_info.m"
{
#line 862 "code_info.m"
  {
#line 862 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 862 "code_info.m"
    MR_Word ll_backend__code_info__CodeModel_4;
#line 862 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_5;
#line 862 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;

#line 577 "code_info.m"
    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
#line 577 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
#line 577 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
#line 577 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
#line 577 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
#line 577 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
#line 577 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
#line 577 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
#line 864 "code_info.m"
    {
#line 864 "code_info.m"
      return ll_backend__code_info__CodeModel_4 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__code_info__ProcInfo_5);
    }
#line 862 "code_info.m"
    return ll_backend__code_info__CodeModel_4;
#line 862 "code_info.m"
  }
#line 714 "code_info.m"
}

#line 857 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
#line 857 "code_info.m"
  MR_Box ll_backend__code_info__closure_arg,
#line 857 "code_info.m"
  MR_Box ll_backend__code_info__wrapper_arg_1)
#line 857 "code_info.m"
{
#line 857 "code_info.m"
  {
#line 857 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 857 "code_info.m"
    MR_Box ll_backend__code_info__closure = ll_backend__code_info__closure_arg;

#line 857 "code_info.m"
    {
#line 857 "code_info.m"
      return ll_backend__code_info__succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__code_info__wrapper_arg_1));
    }
#line 857 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 857 "code_info.m"
  }
#line 857 "code_info.m"
}

#line 710 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0(
#line 710 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 710 "code_info.m"
  MR_Word ll_backend__code_info__ForwardLiveVarsBeforeGoal_5)
#line 710 "code_info.m"
{
#line 855 "code_info.m"
  {
#line 855 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 855 "code_info.m"
    MR_Word ll_backend__code_info__RegionVars_6;
#line 855 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_7;
#line 855 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 855 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;

#line 583 "code_info.m"
    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 583 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 583 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 583 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 583 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 857 "code_info.m"
    {
#line 857 "code_info.m"
      ll_backend__code_info__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 0) = ((MR_Box) (&ll_backend__code_info_scalar_common_4[0]));
#line 857 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 1) = ((MR_Box) (ll_backend__code_info__filter_region_vars_2_f_0_1));
#line 857 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 3) = ((MR_Box) (ll_backend__code_info__VarTypes_7));
#line 857 "code_info.m"
    }
#line 857 "code_info.m"
    {
#line 857 "code_info.m"
      ll_backend__code_info__RegionVars_6 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__V_8_8, ll_backend__code_info__ForwardLiveVarsBeforeGoal_5);
    }
#line 855 "code_info.m"
    return ll_backend__code_info__RegionVars_6;
#line 855 "code_info.m"
  }
#line 710 "code_info.m"
}

#line 708 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(
#line 708 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 708 "code_info.m"
  MR_Word ll_backend__code_info__Type_5)
#line 708 "code_info.m"
{
#line 851 "code_info.m"
  {
#line 851 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 851 "code_info.m"
    MR_Word ll_backend__code_info__CheaperTagTest_6;
#line 851 "code_info.m"
    MR_Word ll_backend__code_info__CheaperTagTestPrime_11;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefn_7;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__TypeBody_8;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_21;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_22;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_23;
#line 846 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 848 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 14)));
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_22);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_21, &ll_backend__code_info__TypeTable_23);
    }
#line 835 "code_info.m"
    {
#line 835 "code_info.m"
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_23, ll_backend__code_info__TypeCtor_22, &ll_backend__code_info__TypeDefn_7);
    }
#line 846 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 846 "code_info.m"
      {
#line 847 "code_info.m"
        {
#line 847 "code_info.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__code_info__TypeDefn_7, &ll_backend__code_info__TypeBody_8);
        }
#line 848 "code_info.m"
        ll_backend__code_info__succeeded = ((MR_tag((MR_Word) ll_backend__code_info__TypeBody_8)) == (MR_mktag((MR_Integer) 1)));
#line 848 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 848 "code_info.m"
          {
#line 848 "code_info.m"
            ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 0)));
#line 848 "code_info.m"
            ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 1)));
#line 848 "code_info.m"
            ll_backend__code_info__CheaperTagTestPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 2)));
#line 848 "code_info.m"
            ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 3)));
#line 848 "code_info.m"
            ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 4)));
#line 848 "code_info.m"
            ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 5)));
#line 848 "code_info.m"
            ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 848 "code_info.m"
            ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 848 "code_info.m"
            ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 7)));
#line 848 "code_info.m"
          }
#line 846 "code_info.m"
      }
#line 851 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 850 "code_info.m"
      ll_backend__code_info__CheaperTagTest_6 = ll_backend__code_info__CheaperTagTestPrime_11;
#line 851 "code_info.m"
    else
#line 852 "code_info.m"
      ll_backend__code_info__CheaperTagTest_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "code_info.m"
    return ll_backend__code_info__CheaperTagTest_6;
#line 851 "code_info.m"
  }
#line 708 "code_info.m"
}

#line 706 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__lookup_type_defn_2_f_0(
#line 706 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 706 "code_info.m"
  MR_Word ll_backend__code_info__Type_5)
#line 706 "code_info.m"
{
#line 840 "code_info.m"
  {
#line 840 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 840 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefn_6;
#line 840 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefnPrime_7;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_14;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_15;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_16;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 14)));
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_15);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__TypeTable_16);
    }
#line 835 "code_info.m"
    {
#line 835 "code_info.m"
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_16, ll_backend__code_info__TypeCtor_15, &ll_backend__code_info__TypeDefnPrime_7);
    }
#line 840 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 839 "code_info.m"
      ll_backend__code_info__TypeDefn_6 = ll_backend__code_info__TypeDefnPrime_7;
#line 840 "code_info.m"
    else
#line 841 "code_info.m"
      {
#line 841 "code_info.m"
        {
#line 841 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "function \140ll_backend.code_info.lookup_type_defn\'/2", (MR_String) "type ctor has no definition");
        }
#line 841 "code_info.m"
      }
#line 840 "code_info.m"
    return ll_backend__code_info__TypeDefn_6;
#line 840 "code_info.m"
  }
#line 706 "code_info.m"
}

#line 699 "code_info.m"
MR_bool MR_CALL 
ll_backend__code_info__search_type_defn_3_p_0(
#line 699 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 699 "code_info.m"
  MR_Word ll_backend__code_info__Type_5,
#line 699 "code_info.m"
  MR_Word * ll_backend__code_info__TypeDefn_6)
#line 699 "code_info.m"
{
#line 831 "code_info.m"
  {
#line 831 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_7;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_8;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_9;
#line 831 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_8);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_7, &ll_backend__code_info__TypeTable_9);
    }
#line 835 "code_info.m"
    {
#line 835 "code_info.m"
      return ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_9, ll_backend__code_info__TypeCtor_8, ll_backend__code_info__TypeDefn_6);
    }
#line 831 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 831 "code_info.m"
  }
#line 699 "code_info.m"
}

#line 692 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__variable_is_of_dummy_type_2_f_0(
#line 692 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 692 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 692 "code_info.m"
{
#line 826 "code_info.m"
  {
#line 826 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__IsDummy_6;
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__VarType_7;
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_8;
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_12;
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 826 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_50_50;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;

#line 583 "code_info.m"
    ll_backend__code_info__VarTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 583 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 583 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 583 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 583 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 824 "code_info.m"
    {
#line 824 "code_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_12, ll_backend__code_info__Var_5, &ll_backend__code_info__VarType_7);
    }
#line 565 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 829 "code_info.m"
    {
#line 829 "code_info.m"
      return ll_backend__code_info__IsDummy_6 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__VarType_7);
    }
#line 826 "code_info.m"
    return ll_backend__code_info__IsDummy_6;
#line 826 "code_info.m"
  }
#line 692 "code_info.m"
}

#line 690 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__variable_type_2_f_0(
#line 690 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 690 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 690 "code_info.m"
{
#line 822 "code_info.m"
  {
#line 822 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 822 "code_info.m"
    MR_Word ll_backend__code_info__Type_6;
#line 822 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_7;
#line 822 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;

#line 583 "code_info.m"
    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 583 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 583 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 583 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 583 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 824 "code_info.m"
    {
#line 824 "code_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Type_6);
    }
#line 822 "code_info.m"
    return ll_backend__code_info__Type_6;
#line 822 "code_info.m"
  }
#line 690 "code_info.m"
}

#line 686 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__body_typeinfo_liveness_1_f_0(
#line 686 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 686 "code_info.m"
{
#line 815 "code_info.m"
  {
#line 815 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__TypeInfoLiveness_4;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_5;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__PredId_6;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__PredInfo_7;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__Globals_8;
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 815 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 567 "code_info.m"
    MR_Integer ll_backend__code_info__V_64_64;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 567 "code_info.m"
    MR_Integer ll_backend__code_info__V_70_70;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_72_72;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;

#line 565 "code_info.m"
    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 818 "code_info.m"
    {
#line 818 "code_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, &ll_backend__code_info__PredInfo_7);
    }
#line 567 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 567 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 567 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 0)));
#line 567 "code_info.m"
    ll_backend__code_info__Globals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 1)));
#line 567 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 2)));
#line 567 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 3)));
#line 567 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 4)));
#line 567 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 5)));
#line 567 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 6)));
#line 567 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 7)));
#line 567 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 8)));
#line 567 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 9)));
#line 567 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 10)));
#line 567 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 11)));
#line 567 "code_info.m"
    ll_backend__code_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 13)));
#line 567 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 14)));
#line 820 "code_info.m"
    {
#line 820 "code_info.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__code_info__PredInfo_7, ll_backend__code_info__Globals_8, &ll_backend__code_info__TypeInfoLiveness_4);
    }
#line 815 "code_info.m"
    return ll_backend__code_info__TypeInfoLiveness_4;
#line 815 "code_info.m"
  }
#line 686 "code_info.m"
}

#line 681 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_stack_slots_2_p_0(
#line 681 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 681 "code_info.m"
  MR_Word * ll_backend__code_info__StackSlots_4)
#line 681 "code_info.m"
{
#line 811 "code_info.m"
  {
#line 811 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 811 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_5;
#line 811 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;

#line 577 "code_info.m"
    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
#line 577 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
#line 577 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
#line 577 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
#line 577 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
#line 577 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
#line 577 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
#line 577 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
#line 813 "code_info.m"
    {
#line 813 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_5, ll_backend__code_info__StackSlots_4);
#line 813 "code_info.m"
      return;
    }
#line 811 "code_info.m"
  }
#line 681 "code_info.m"
}

#line 535 "code_info.m"
static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__TraceLevel_9,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__Globals_10,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_11,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_12,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_13,
#line 535 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
#line 535 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 535 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
#line 535 "code_info.m"
{
#line 540 "code_info.m"
  {
#line 540 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 540 "code_info.m"
    MR_Word ll_backend__code_info__TraceLevelIsNone_16;

#line 541 "code_info.m"
    {
#line 541 "code_info.m"
      ll_backend__code_info__TraceLevelIsNone_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__TraceLevel_9);
    }
#line 557 "code_info.m"
#line 557 "code_info.m"
    switch (ll_backend__code_info__TraceLevelIsNone_16) {
#line 557 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 557 "code_info.m"
      case (MR_Integer) 0:
#line 544 "code_info.m"
        {
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__HasTailCallEvents_17;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__MaybeTailRecLabel_19;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__TraceInfo_20;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_29_29;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_30_30;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__V_31_31;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__V_38_38;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__V_39_39;
#line 544 "code_info.m"
          MR_Word ll_backend__code_info__V_40_40;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_41_41;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_42_42;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_43_43;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_44_44;
#line 640 "code_info.m"
          MR_Integer ll_backend__code_info__V_45_45;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_46_46;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_47_47;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_48_48;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_49_49;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_50_50;
#line 640 "code_info.m"
          MR_Integer ll_backend__code_info__V_51_51;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_53_53;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_54_54;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_55_55;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_56_56;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_57_57;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_58_58;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_59_59;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_60_60;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_61_61;
#line 640 "code_info.m"
          MR_Word ll_backend__code_info__V_52_52;

#line 545 "code_info.m"
          {
#line 545 "code_info.m"
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__code_info__ProcInfo_13, &ll_backend__code_info__HasTailCallEvents_17);
          }
#line 550 "code_info.m"
#line 550 "code_info.m"
          switch (ll_backend__code_info__HasTailCallEvents_17) {
#line 550 "code_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 550 "code_info.m"
            case (MR_Integer) 1:
#line 551 "code_info.m"
              {
#line 552 "code_info.m"
                ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "code_info.m"
                ll_backend__code_info__STATE_VARIABLE_CI_29_29 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
#line 551 "code_info.m"
              }
#line 550 "code_info.m"
              break;
#line 550 "code_info.m"
            case (MR_Integer) 0:
#line 547 "code_info.m"
              {
#line 547 "code_info.m"
                MR_Word ll_backend__code_info__TailRecLabel_18;

#line 548 "code_info.m"
                {
#line 548 "code_info.m"
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__code_info__TailRecLabel_18, ll_backend__code_info__STATE_VARIABLE_CI_0_21, &ll_backend__code_info__STATE_VARIABLE_CI_29_29);
                }
#line 549 "code_info.m"
                {
#line 549 "code_info.m"
                  ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "code_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeTailRecLabel_19, 0) = ((MR_Box) (ll_backend__code_info__TailRecLabel_18));
#line 549 "code_info.m"
                }
#line 547 "code_info.m"
              }
#line 550 "code_info.m"
              break;
#line 550 "code_info.m"
          }
#line 554 "code_info.m"
          {
#line 554 "code_info.m"
            ll_backend__trace_gen__trace_setup_9_p_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__Globals_10, ll_backend__code_info__MaybeTailRecLabel_19, ll_backend__code_info__TraceSlotInfo_14, &ll_backend__code_info__TraceInfo_20, ll_backend__code_info__STATE_VARIABLE_CI_29_29, &ll_backend__code_info__STATE_VARIABLE_CI_30_30);
          }
#line 556 "code_info.m"
          {
#line 556 "code_info.m"
            ll_backend__code_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "code_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__code_info__V_31_31, 0) = ((MR_Box) (ll_backend__code_info__TraceInfo_20));
#line 556 "code_info.m"
          }
#line 640 "code_info.m"
          ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 0)));
#line 640 "code_info.m"
          ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 1)));
#line 640 "code_info.m"
          ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 0)));
#line 640 "code_info.m"
          ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 1)));
#line 640 "code_info.m"
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 2)));
#line 640 "code_info.m"
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 3)));
#line 640 "code_info.m"
          ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 4)));
#line 640 "code_info.m"
          ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 5)));
#line 640 "code_info.m"
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 6)));
#line 640 "code_info.m"
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 7)));
#line 640 "code_info.m"
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 8)));
#line 640 "code_info.m"
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 9)));
#line 640 "code_info.m"
          ll_backend__code_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 10)));
#line 640 "code_info.m"
          ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 11)));
#line 640 "code_info.m"
          ll_backend__code_info__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 640 "code_info.m"
          ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 13)));
#line 640 "code_info.m"
          ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 14)));
#line 640 "code_info.m"
          {
#line 640 "code_info.m"
            ll_backend__code_info__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 2) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 3) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 4) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 5) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 6) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 7) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 8) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 9) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 10) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 11) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 12) = ((MR_Box) ((ll_backend__code_info__V_53_53 | ((((ll_backend__code_info__V_54_54 << (MR_Integer) 1)) | ((((ll_backend__code_info__V_55_55 << (MR_Integer) 2)) | ((((ll_backend__code_info__V_56_56 << (MR_Integer) 3)) | ((((ll_backend__code_info__V_57_57 << (MR_Integer) 4)) | ((((ll_backend__code_info__V_58_58 << (MR_Integer) 5)) | ((ll_backend__code_info__V_59_59 << (MR_Integer) 6)))))))))))))));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 13) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 14) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 640 "code_info.m"
          }
#line 640 "code_info.m"
          {
#line 640 "code_info.m"
            MR_Word base;
#line 640 "code_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "code_info.m"
            *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 640 "code_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 640 "code_info.m"
          }
#line 544 "code_info.m"
        }
#line 557 "code_info.m"
        break;
#line 557 "code_info.m"
      case (MR_Integer) 1:
#line 558 "code_info.m"
        {
#line 559 "code_info.m"
          *ll_backend__code_info__TraceSlotInfo_14 = (MR_Word) &ll_backend__code_info_scalar_common_3[0];
#line 558 "code_info.m"
          *ll_backend__code_info__STATE_VARIABLE_CI_22 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
#line 558 "code_info.m"
        }
#line 557 "code_info.m"
        break;
#line 557 "code_info.m"
    }
#line 540 "code_info.m"
  }
#line 535 "code_info.m"
}

#line 514 "code_info.m"
static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
#line 514 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 514 "code_info.m"
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
#line 514 "code_info.m"
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3)
#line 514 "code_info.m"
{
#line 516 "code_info.m"
  while (MR_TRUE)
#line 516 "code_info.m"
    {
#line 516 "code_info.m"
      /* tailcall optimized into a loop */
#line 516 "code_info.m"
      {
#line 516 "code_info.m"
        MR_bool ll_backend__code_info__succeeded;

#line 516 "code_info.m"
        if ((ll_backend__code_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "code_info.m"
          *ll_backend__code_info__STATE_VARIABLE_Max_3 = ll_backend__code_info__STATE_VARIABLE_Max_0_2;
#line 516 "code_info.m"
        else
#line 517 "code_info.m"
          {
#line 517 "code_info.m"
            MR_Word ll_backend__code_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 517 "code_info.m"
            MR_Word ll_backend__code_info__Slots_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "code_info.m"
            MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_17_17;

#line 10103 "ll_backend.code_info.c"
#line 10104 "ll_backend.code_info.c"
            switch (MR_tag((MR_Word) ll_backend__code_info__Slot_7)) {
#line 10106 "ll_backend.code_info.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 10108 "ll_backend.code_info.c"
              case (MR_Integer) 0:
#line 10110 "ll_backend.code_info.c"
                {
#line 10112 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
#line 10114 "ll_backend.code_info.c"
                  MR_Word ll_backend__code_info__Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

#line 529 "code_info.m"
#line 529 "code_info.m"
                  switch (ll_backend__code_info__Width_11) {
#line 529 "code_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 529 "code_info.m"
                    case (MR_Integer) 1:
#line 530 "code_info.m"
                      {
#line 530 "code_info.m"
                        MR_Integer ll_backend__code_info__V_14_14 = (ll_backend__code_info__N_10 + (MR_Integer) 1);

#line 531 "code_info.m"
                        {
#line 531 "code_info.m"
                          mercury__int__max_3_p_0(ll_backend__code_info__V_14_14, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
#line 530 "code_info.m"
                      }
#line 529 "code_info.m"
                      break;
#line 529 "code_info.m"
                    case (MR_Integer) 0:
#line 528 "code_info.m"
                      {
#line 528 "code_info.m"
                        mercury__int__max_3_p_0(ll_backend__code_info__N_10, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
#line 529 "code_info.m"
                      break;
#line 529 "code_info.m"
                  }
#line 10149 "ll_backend.code_info.c"
                }
#line 10151 "ll_backend.code_info.c"
                break;
#line 10153 "ll_backend.code_info.c"
              case (MR_Integer) 1:
#line 10155 "ll_backend.code_info.c"
                {
#line 10157 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
#line 10159 "ll_backend.code_info.c"
                  MR_Word ll_backend__code_info__Width_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

#line 529 "code_info.m"
#line 529 "code_info.m"
                  switch (ll_backend__code_info__Width_27) {
#line 529 "code_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 529 "code_info.m"
                    case (MR_Integer) 1:
#line 530 "code_info.m"
                      {
#line 530 "code_info.m"
                        MR_Integer ll_backend__code_info__V_22_22 = (ll_backend__code_info__N_26 + (MR_Integer) 1);

#line 531 "code_info.m"
                        {
#line 531 "code_info.m"
                          mercury__int__max_3_p_0(ll_backend__code_info__V_22_22, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
#line 530 "code_info.m"
                      }
#line 529 "code_info.m"
                      break;
#line 529 "code_info.m"
                    case (MR_Integer) 0:
#line 528 "code_info.m"
                      {
#line 528 "code_info.m"
                        mercury__int__max_3_p_0(ll_backend__code_info__N_26, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
#line 529 "code_info.m"
                      break;
#line 529 "code_info.m"
                  }
#line 10194 "ll_backend.code_info.c"
                }
#line 10196 "ll_backend.code_info.c"
                break;
#line 10198 "ll_backend.code_info.c"
              case (MR_Integer) 2:
#line 10200 "ll_backend.code_info.c"
                {
#line 10202 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_info__Slot_7, (MR_Integer) 0)));

#line 528 "code_info.m"
                  {
#line 528 "code_info.m"
                    mercury__int__max_3_p_0(ll_backend__code_info__N_20, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                  }
#line 10210 "ll_backend.code_info.c"
                }
#line 10212 "ll_backend.code_info.c"
                break;
#line 10214 "ll_backend.code_info.c"
            }
#line 533 "code_info.m"
            /* direct tailcall eliminated */
#line 533 "code_info.m"
            {
#line 533 "code_info.m"
              MR_Word ll_backend__code_info__HeadVar__1__tmp_copy_1 = ll_backend__code_info__Slots_8;
#line 533 "code_info.m"
              MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2 = ll_backend__code_info__STATE_VARIABLE_Max_17_17;

#line 533 "code_info.m"
              ll_backend__code_info__STATE_VARIABLE_Max_0_2 = ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2;
#line 533 "code_info.m"
              ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__HeadVar__1__tmp_copy_1;
#line 533 "code_info.m"
            }
#line 533 "code_info.m"
            continue;
#line 517 "code_info.m"
          }
#line 516 "code_info.m"
      }
#line 516 "code_info.m"
      break;
#line 516 "code_info.m"
    }
#line 514 "code_info.m"
}

#line 437 "code_info.m"
static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
#line 437 "code_info.m"
  MR_Word ll_backend__code_info__Globals_3)
#line 437 "code_info.m"
{
#line 439 "code_info.m"
  {
#line 439 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_4;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptNLG_5;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__NLG_6;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptASM_7;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__ASM_8;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptSGCell_9;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__SGCell_10;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptUBF_11;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__UBF_12;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptFloatRegs_13;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__UseFloatRegs_14;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__FloatDwords_15;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__DetStackFloatWidth_16;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptSGFloat_17;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__SGFloat_18;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__OptStaticCodeAddr_19;
#line 439 "code_info.m"
    MR_Word ll_backend__code_info__StaticCodeAddrs_20;

#line 440 "code_info.m"
    {
#line 440 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 250, &ll_backend__code_info__OptNLG_5);
    }
#line 444 "code_info.m"
#line 444 "code_info.m"
    switch (ll_backend__code_info__OptNLG_5) {
#line 444 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "code_info.m"
      case (MR_Integer) 0:
#line 446 "code_info.m"
        ll_backend__code_info__NLG_6 = (MR_Integer) 1;
#line 444 "code_info.m"
        break;
#line 444 "code_info.m"
      case (MR_Integer) 1:
#line 443 "code_info.m"
        ll_backend__code_info__NLG_6 = (MR_Integer) 0;
#line 444 "code_info.m"
        break;
#line 444 "code_info.m"
    }
#line 448 "code_info.m"
    {
#line 448 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 252, &ll_backend__code_info__OptASM_7);
    }
#line 452 "code_info.m"
#line 452 "code_info.m"
    switch (ll_backend__code_info__OptASM_7) {
#line 452 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 452 "code_info.m"
      case (MR_Integer) 0:
#line 454 "code_info.m"
        ll_backend__code_info__ASM_8 = (MR_Integer) 1;
#line 452 "code_info.m"
        break;
#line 452 "code_info.m"
      case (MR_Integer) 1:
#line 451 "code_info.m"
        ll_backend__code_info__ASM_8 = (MR_Integer) 0;
#line 452 "code_info.m"
        break;
#line 452 "code_info.m"
    }
#line 456 "code_info.m"
    {
#line 456 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 451, &ll_backend__code_info__OptSGCell_9);
    }
#line 460 "code_info.m"
#line 460 "code_info.m"
    switch (ll_backend__code_info__OptSGCell_9) {
#line 460 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 460 "code_info.m"
      case (MR_Integer) 0:
#line 462 "code_info.m"
        ll_backend__code_info__SGCell_10 = (MR_Integer) 1;
#line 460 "code_info.m"
        break;
#line 460 "code_info.m"
      case (MR_Integer) 1:
#line 459 "code_info.m"
        ll_backend__code_info__SGCell_10 = (MR_Integer) 0;
#line 460 "code_info.m"
        break;
#line 460 "code_info.m"
    }
#line 464 "code_info.m"
    {
#line 464 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 244, &ll_backend__code_info__OptUBF_11);
    }
#line 468 "code_info.m"
#line 468 "code_info.m"
    switch (ll_backend__code_info__OptUBF_11) {
#line 468 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 468 "code_info.m"
      case (MR_Integer) 0:
#line 470 "code_info.m"
        ll_backend__code_info__UBF_12 = (MR_Integer) 1;
#line 468 "code_info.m"
        break;
#line 468 "code_info.m"
      case (MR_Integer) 1:
#line 467 "code_info.m"
        ll_backend__code_info__UBF_12 = (MR_Integer) 0;
#line 468 "code_info.m"
        break;
#line 468 "code_info.m"
    }
#line 472 "code_info.m"
    {
#line 472 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 254, &ll_backend__code_info__OptFloatRegs_13);
    }
#line 476 "code_info.m"
#line 476 "code_info.m"
    switch (ll_backend__code_info__OptFloatRegs_13) {
#line 476 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 476 "code_info.m"
      case (MR_Integer) 0:
#line 478 "code_info.m"
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 1;
#line 476 "code_info.m"
        break;
#line 476 "code_info.m"
      case (MR_Integer) 1:
#line 475 "code_info.m"
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 0;
#line 476 "code_info.m"
        break;
#line 476 "code_info.m"
    }
#line 480 "code_info.m"
    {
#line 480 "code_info.m"
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__code_info__Globals_3, &ll_backend__code_info__FloatDwords_15);
    }
#line 484 "code_info.m"
#line 484 "code_info.m"
    switch (ll_backend__code_info__FloatDwords_15) {
#line 484 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 484 "code_info.m"
      case (MR_Integer) 0:
#line 486 "code_info.m"
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 0;
#line 484 "code_info.m"
        break;
#line 484 "code_info.m"
      case (MR_Integer) 1:
#line 483 "code_info.m"
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 1;
#line 484 "code_info.m"
        break;
#line 484 "code_info.m"
    }
#line 488 "code_info.m"
    {
#line 488 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 452, &ll_backend__code_info__OptSGFloat_17);
    }
#line 492 "code_info.m"
#line 492 "code_info.m"
    switch (ll_backend__code_info__OptSGFloat_17) {
#line 492 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 492 "code_info.m"
      case (MR_Integer) 0:
#line 494 "code_info.m"
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 1;
#line 492 "code_info.m"
        break;
#line 492 "code_info.m"
      case (MR_Integer) 1:
#line 491 "code_info.m"
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 0;
#line 492 "code_info.m"
        break;
#line 492 "code_info.m"
    }
#line 496 "code_info.m"
    {
#line 496 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 453, &ll_backend__code_info__OptStaticCodeAddr_19);
    }
#line 501 "code_info.m"
#line 501 "code_info.m"
    switch (ll_backend__code_info__OptStaticCodeAddr_19) {
#line 501 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 501 "code_info.m"
      case (MR_Integer) 0:
#line 503 "code_info.m"
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 1;
#line 501 "code_info.m"
        break;
#line 501 "code_info.m"
      case (MR_Integer) 1:
#line 500 "code_info.m"
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 0;
#line 501 "code_info.m"
        break;
#line 501 "code_info.m"
    }
#line 505 "code_info.m"
    {
#line 505 "code_info.m"
      ll_backend__code_info__ExprnOpts_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 505 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__ExprnOpts_4, 0) = ((MR_Box) ((ll_backend__code_info__NLG_6 | ((((ll_backend__code_info__ASM_8 << (MR_Integer) 1)) | ((((ll_backend__code_info__UBF_12 << (MR_Integer) 2)) | ((((ll_backend__code_info__UseFloatRegs_14 << (MR_Integer) 3)) | ((((ll_backend__code_info__DetStackFloatWidth_16 << (MR_Integer) 4)) | ((((ll_backend__code_info__SGCell_10 << (MR_Integer) 5)) | ((((ll_backend__code_info__SGFloat_18 << (MR_Integer) 6)) | ((ll_backend__code_info__StaticCodeAddrs_20 << (MR_Integer) 7)))))))))))))))));
#line 505 "code_info.m"
    }
#line 439 "code_info.m"
    return ll_backend__code_info__ExprnOpts_4;
#line 439 "code_info.m"
  }
#line 437 "code_info.m"
}

#line 184 "code_info.m"
static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
#line 184 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 184 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 184 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 184 "code_info.m"
{
#line 646 "code_info.m"
  {
#line 646 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 647 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));

#line 647 "code_info.m"
    {
#line 647 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__X_4));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 647 "code_info.m"
    }
#line 647 "code_info.m"
    {
#line 647 "code_info.m"
      MR_Word base;
#line 647 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 647 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 647 "code_info.m"
    }
#line 646 "code_info.m"
  }
#line 184 "code_info.m"
}

#line 168 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_used_env_vars_3_p_0(
#line 168 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 168 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 168 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 168 "code_info.m"
{
#line 669 "code_info.m"
  {
#line 669 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 670 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 670 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 670 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 670 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 670 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));

#line 670 "code_info.m"
    {
#line 670 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__X_4));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 670 "code_info.m"
    }
#line 670 "code_info.m"
    {
#line 670 "code_info.m"
      MR_Word base;
#line 670 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 670 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 670 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 670 "code_info.m"
    }
#line 669 "code_info.m"
  }
#line 168 "code_info.m"
}

#line 166 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_alloc_sites_3_p_0(
#line 166 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 166 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 166 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 166 "code_info.m"
{
#line 667 "code_info.m"
  {
#line 667 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 668 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));

#line 668 "code_info.m"
    {
#line 668 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__X_4));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 668 "code_info.m"
    }
#line 668 "code_info.m"
    {
#line 668 "code_info.m"
      MR_Word base;
#line 668 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 668 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 668 "code_info.m"
    }
#line 667 "code_info.m"
  }
#line 166 "code_info.m"
}

#line 164 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_static_cell_info_3_p_0(
#line 164 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 164 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 164 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 164 "code_info.m"
{
#line 665 "code_info.m"
  {
#line 665 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 666 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));

#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__X_4));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 666 "code_info.m"
    }
#line 666 "code_info.m"
    {
#line 666 "code_info.m"
      MR_Word base;
#line 666 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 666 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 666 "code_info.m"
    }
#line 665 "code_info.m"
  }
#line 164 "code_info.m"
}

#line 162 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_created_temp_frame_3_p_0(
#line 162 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 162 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 162 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 162 "code_info.m"
{
#line 663 "code_info.m"
  {
#line 663 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 664 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 664 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 664 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 664 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));

#line 664 "code_info.m"
    {
#line 664 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__X_4));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 664 "code_info.m"
    }
#line 664 "code_info.m"
    {
#line 664 "code_info.m"
      MR_Word base;
#line 664 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 664 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 664 "code_info.m"
    }
#line 663 "code_info.m"
  }
#line 162 "code_info.m"
}

#line 158 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_persistent_temps_3_p_0(
#line 158 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 158 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 158 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 158 "code_info.m"
{
#line 657 "code_info.m"
  {
#line 657 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 658 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 658 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 658 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 658 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 658 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));

#line 658 "code_info.m"
    {
#line 658 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__X_4));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 658 "code_info.m"
    }
#line 658 "code_info.m"
    {
#line 658 "code_info.m"
      MR_Word base;
#line 658 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 658 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 658 "code_info.m"
    }
#line 657 "code_info.m"
  }
#line 158 "code_info.m"
}

#line 156 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_temp_content_map_3_p_0(
#line 156 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 156 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 156 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 156 "code_info.m"
{
#line 655 "code_info.m"
  {
#line 655 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 656 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 656 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 656 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 656 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));

#line 656 "code_info.m"
    {
#line 656 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__X_4));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 656 "code_info.m"
    }
#line 656 "code_info.m"
    {
#line 656 "code_info.m"
      MR_Word base;
#line 656 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 656 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 656 "code_info.m"
    }
#line 655 "code_info.m"
  }
#line 156 "code_info.m"
}

#line 154 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_max_temp_slot_count_3_p_0(
#line 154 "code_info.m"
  MR_Integer ll_backend__code_info__X_4,
#line 154 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 154 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 154 "code_info.m"
{
#line 653 "code_info.m"
  {
#line 653 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 654 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 654 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 654 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 654 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));

#line 654 "code_info.m"
    {
#line 654 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__X_4));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 654 "code_info.m"
    }
#line 654 "code_info.m"
    {
#line 654 "code_info.m"
      MR_Word base;
#line 654 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 654 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 654 "code_info.m"
    }
#line 653 "code_info.m"
  }
#line 154 "code_info.m"
}

#line 152 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(
#line 152 "code_info.m"
  MR_Integer ll_backend__code_info__MR_5,
#line 152 "code_info.m"
  MR_Integer ll_backend__code_info__MF_6,
#line 152 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 152 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 152 "code_info.m"
{
#line 650 "code_info.m"
  {
#line 650 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 650 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 650 "code_info.m"
    MR_Integer ll_backend__code_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 15)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 16)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 17)));
#line 650 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35 = ll_backend__code_info__V_16_16;
#line 651 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 651 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));

#line 652 "code_info.m"
    {
#line 652 "code_info.m"
      ll_backend__code_info__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 0) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 1) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 2) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 3) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 4) = ((MR_Box) (ll_backend__code_info__MR_5));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 5) = ((MR_Box) (ll_backend__code_info__MF_6));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 6) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 7) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 8) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 9) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 10) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 11) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 12) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 13) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 14) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 15) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 16) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 17) = ((MR_Box) (ll_backend__code_info__V_34_34));
#line 652 "code_info.m"
    }
#line 652 "code_info.m"
    {
#line 652 "code_info.m"
      MR_Word base;
#line 652 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_35_35));
#line 652 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 652 "code_info.m"
    }
#line 650 "code_info.m"
  }
#line 152 "code_info.m"
}

#line 150 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_proc_trace_events_3_p_0(
#line 150 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 150 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 150 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 150 "code_info.m"
{
#line 648 "code_info.m"
  {
#line 648 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));

#line 649 "code_info.m"
    {
#line 649 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__X_4));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 649 "code_info.m"
    }
#line 649 "code_info.m"
    {
#line 649 "code_info.m"
      MR_Word base;
#line 649 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 649 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 649 "code_info.m"
    }
#line 648 "code_info.m"
  }
#line 150 "code_info.m"
}

#line 143 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_out_of_line_code_2_p_0(
#line 143 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 143 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 143 "code_info.m"
{
#line 636 "code_info.m"
  {
#line 636 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 637 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 637 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 637 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 637 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 637 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));

#line 637 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 636 "code_info.m"
  }
#line 143 "code_info.m"
}

#line 142 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_used_env_vars_2_p_0(
#line 142 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 142 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 142 "code_info.m"
{
#line 634 "code_info.m"
  {
#line 634 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 635 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 635 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 635 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 635 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 635 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 635 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 635 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 635 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 634 "code_info.m"
  }
#line 142 "code_info.m"
}

#line 140 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_alloc_sites_2_p_0(
#line 140 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 140 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 140 "code_info.m"
{
#line 632 "code_info.m"
  {
#line 632 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 633 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 633 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 633 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 633 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 633 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 633 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 632 "code_info.m"
  }
#line 140 "code_info.m"
}

#line 139 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_static_cell_info_2_p_0(
#line 139 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 139 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 139 "code_info.m"
{
#line 630 "code_info.m"
  {
#line 630 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 631 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 631 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 631 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 631 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 631 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 631 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 631 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 630 "code_info.m"
  }
#line 139 "code_info.m"
}

#line 137 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_closure_layouts_2_p_0(
#line 137 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 137 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 137 "code_info.m"
{
#line 628 "code_info.m"
  {
#line 628 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 629 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 629 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 629 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 629 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 629 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 629 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 629 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 629 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 629 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 629 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 629 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 629 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 628 "code_info.m"
  }
#line 137 "code_info.m"
}

#line 135 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_persistent_temps_2_p_0(
#line 135 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 135 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 135 "code_info.m"
{
#line 624 "code_info.m"
  {
#line 624 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 625 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 625 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 625 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 625 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 625 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 625 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 625 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 625 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 625 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 625 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 625 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 625 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 625 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 625 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 625 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 624 "code_info.m"
  }
#line 135 "code_info.m"
}

#line 133 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_temp_content_map_2_p_0(
#line 133 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 133 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 133 "code_info.m"
{
#line 622 "code_info.m"
  {
#line 622 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 623 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 623 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 623 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 623 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 623 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 623 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 623 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 623 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 623 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 623 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 623 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 623 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 623 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 623 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 623 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 622 "code_info.m"
  }
#line 133 "code_info.m"
}

#line 132 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_max_temp_slot_count_2_p_0(
#line 132 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 132 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 132 "code_info.m"
{
#line 620 "code_info.m"
  {
#line 620 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 621 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 621 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 621 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 621 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 621 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 621 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 621 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 621 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 621 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 621 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 621 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 621 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 621 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 620 "code_info.m"
  }
#line 132 "code_info.m"
}

#line 131 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_created_temp_frame_2_p_0(
#line 131 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 131 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 131 "code_info.m"
{
#line 618 "code_info.m"
  {
#line 618 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 619 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 619 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 619 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 619 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 619 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 619 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 619 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 619 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 619 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 619 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 619 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 618 "code_info.m"
  }
#line 131 "code_info.m"
}

#line 130 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(
#line 130 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 130 "code_info.m"
  MR_Integer * ll_backend__code_info__MaxRegR_5,
#line 130 "code_info.m"
  MR_Integer * ll_backend__code_info__MaxRegF_6)
#line 130 "code_info.m"
{
#line 615 "code_info.m"
  {
#line 615 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 616 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 616 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 616 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 616 "code_info.m"
    *ll_backend__code_info__MaxRegR_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 616 "code_info.m"
    *ll_backend__code_info__MaxRegF_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 616 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 616 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 616 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 616 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 616 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 616 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 616 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 616 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 616 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 616 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 616 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 616 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 615 "code_info.m"
  }
#line 130 "code_info.m"
}

#line 129 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_trace_events_2_p_0(
#line 129 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 129 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 129 "code_info.m"
{
#line 613 "code_info.m"
  {
#line 613 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 614 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 614 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 614 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 614 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 614 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 614 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 614 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 614 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 614 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 614 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 614 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 614 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 614 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 614 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 614 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 614 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 614 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 614 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 614 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 613 "code_info.m"
  }
#line 129 "code_info.m"
}

#line 128 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_layout_info_2_p_0(
#line 128 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 128 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 128 "code_info.m"
{
#line 611 "code_info.m"
  {
#line 611 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 612 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 612 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 612 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 612 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 612 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 612 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 612 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 612 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 612 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 612 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 612 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 612 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 612 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 612 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 612 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 612 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 612 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 611 "code_info.m"
  }
#line 128 "code_info.m"
}

#line 127 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_succip_used_2_p_0(
#line 127 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 127 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 127 "code_info.m"
{
#line 609 "code_info.m"
  {
#line 609 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 610 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 610 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 610 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 610 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 610 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 610 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 610 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 610 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 610 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 610 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 610 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 610 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 610 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 610 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 610 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 610 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 610 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 610 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 610 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 610 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 610 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 609 "code_info.m"
  }
#line 127 "code_info.m"
}

#line 126 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_label_counter_2_p_0(
#line 126 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 126 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 126 "code_info.m"
{
#line 607 "code_info.m"
  {
#line 607 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 608 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 608 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 608 "code_info.m"
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 608 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 608 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 608 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 608 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 608 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 608 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 608 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 608 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 608 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 608 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 608 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 608 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 608 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 608 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 608 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 608 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 607 "code_info.m"
  }
#line 126 "code_info.m"
}

#line 124 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_const_struct_map_2_p_0(
#line 124 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 124 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 124 "code_info.m"
{
#line 604 "code_info.m"
  {
#line 604 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 605 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 605 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 605 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));

#line 605 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 604 "code_info.m"
  }
#line 124 "code_info.m"
}

#line 122 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(
#line 122 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 122 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 122 "code_info.m"
{
#line 602 "code_info.m"
  {
#line 602 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 603 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 603 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 603 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 603 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 602 "code_info.m"
  }
#line 122 "code_info.m"
}

#line 121 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_lcmc_null_2_p_0(
#line 121 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 121 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 121 "code_info.m"
{
#line 600 "code_info.m"
  {
#line 600 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 601 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 601 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 601 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 601 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 601 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 600 "code_info.m"
  }
#line 121 "code_info.m"
}

#line 120 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_auto_comments_2_p_0(
#line 120 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 120 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 120 "code_info.m"
{
#line 598 "code_info.m"
  {
#line 598 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 599 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 599 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 599 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 599 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 599 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 599 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 598 "code_info.m"
  }
#line 120 "code_info.m"
}

#line 119 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_region_ops_2_p_0(
#line 119 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 119 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 119 "code_info.m"
{
#line 596 "code_info.m"
  {
#line 596 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 597 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 597 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 597 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 597 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 597 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 597 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 596 "code_info.m"
  }
#line 119 "code_info.m"
}

#line 118 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_emit_region_ops_2_p_0(
#line 118 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 118 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 118 "code_info.m"
{
#line 594 "code_info.m"
  {
#line 594 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 595 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 595 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 595 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 595 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 595 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 594 "code_info.m"
  }
#line 118 "code_info.m"
}

#line 117 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_trail_ops_2_p_0(
#line 117 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 117 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 117 "code_info.m"
{
#line 592 "code_info.m"
  {
#line 592 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 593 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 593 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 593 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 593 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 593 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 593 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 592 "code_info.m"
  }
#line 117 "code_info.m"
}

#line 116 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_emit_trail_ops_2_p_0(
#line 116 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 116 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 116 "code_info.m"
{
#line 590 "code_info.m"
  {
#line 590 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 591 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 591 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 591 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 591 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 591 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 590 "code_info.m"
  }
#line 116 "code_info.m"
}

#line 115 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_no_return_calls_2_p_0(
#line 115 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 115 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 115 "code_info.m"
{
#line 588 "code_info.m"
  {
#line 588 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 589 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 589 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 589 "code_info.m"
    *ll_backend__code_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 589 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 589 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 588 "code_info.m"
  }
#line 115 "code_info.m"
}

#line 114 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_maybe_trace_info_2_p_0(
#line 114 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 114 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 114 "code_info.m"
{
#line 586 "code_info.m"
  {
#line 586 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 587 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 587 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 587 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 587 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 587 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 587 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 586 "code_info.m"
  }
#line 114 "code_info.m"
}

#line 113 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_var_slot_count_2_p_0(
#line 113 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 113 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 113 "code_info.m"
{
#line 584 "code_info.m"
  {
#line 584 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 585 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 585 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 585 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 585 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 585 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 585 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 584 "code_info.m"
  }
#line 113 "code_info.m"
}

#line 112 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_vartypes_2_p_0(
#line 112 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 112 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 112 "code_info.m"
{
#line 582 "code_info.m"
  {
#line 582 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 583 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 583 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 583 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 583 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 583 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 583 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 583 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 582 "code_info.m"
  }
#line 112 "code_info.m"
}

#line 111 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_varset_2_p_0(
#line 111 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 111 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 111 "code_info.m"
{
#line 580 "code_info.m"
  {
#line 580 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 581 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 581 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 581 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 581 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 581 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 581 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 581 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 581 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 581 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 580 "code_info.m"
  }
#line 111 "code_info.m"
}

#line 110 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_label_2_p_0(
#line 110 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 110 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 110 "code_info.m"
{
#line 578 "code_info.m"
  {
#line 578 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 579 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 579 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 579 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 579 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 579 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 579 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 579 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 579 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 579 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 578 "code_info.m"
  }
#line 110 "code_info.m"
}

#line 109 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_info_2_p_0(
#line 109 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 109 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 109 "code_info.m"
{
#line 576 "code_info.m"
  {
#line 576 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 577 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 577 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 577 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 577 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 577 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 577 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 577 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 577 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 577 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 577 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 576 "code_info.m"
  }
#line 109 "code_info.m"
}

#line 108 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_pred_info_2_p_0(
#line 108 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 108 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 108 "code_info.m"
{
#line 574 "code_info.m"
  {
#line 574 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 575 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 575 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 575 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 575 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 575 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 575 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 575 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 575 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 575 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 575 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 575 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 575 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 574 "code_info.m"
  }
#line 108 "code_info.m"
}

#line 107 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_id_2_p_0(
#line 107 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 107 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 107 "code_info.m"
{
#line 572 "code_info.m"
  {
#line 572 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 573 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 573 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 573 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 573 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 573 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 573 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 573 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 573 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 573 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 573 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 573 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 573 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 572 "code_info.m"
  }
#line 107 "code_info.m"
}

#line 106 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_pred_id_2_p_0(
#line 106 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 106 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 106 "code_info.m"
{
#line 570 "code_info.m"
  {
#line 570 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 571 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 571 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 571 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 571 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 571 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 571 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 571 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 571 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 571 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 571 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 571 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 571 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 571 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 571 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 570 "code_info.m"
  }
#line 106 "code_info.m"
}

#line 105 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_exprn_opts_2_p_0(
#line 105 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 105 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 105 "code_info.m"
{
#line 568 "code_info.m"
  {
#line 568 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 569 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 569 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 569 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 569 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 569 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 569 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 569 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 569 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 569 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 569 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 569 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 569 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 569 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 569 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 569 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 568 "code_info.m"
  }
#line 105 "code_info.m"
}

#line 104 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_globals_2_p_0(
#line 104 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 104 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 104 "code_info.m"
{
#line 566 "code_info.m"
  {
#line 566 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 567 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 567 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 567 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 567 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 567 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 567 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 567 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 567 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 567 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 567 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 567 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 567 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 567 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 567 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 567 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 567 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 566 "code_info.m"
  }
#line 104 "code_info.m"
}

#line 103 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_module_info_2_p_0(
#line 103 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 103 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 103 "code_info.m"
{
#line 564 "code_info.m"
  {
#line 564 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 565 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 565 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 565 "code_info.m"
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 565 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 565 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 565 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 565 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 565 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 565 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 565 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 565 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 565 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 565 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 565 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 565 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 565 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 564 "code_info.m"
  }
#line 103 "code_info.m"
}

#line 98 "code_info.m"
void MR_CALL 
ll_backend__code_info__code_info_init_13_p_0(
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_14,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__PredId_15,
#line 98 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_16,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_17,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_18,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__SaveSuccip_19,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__StaticCellInfo_20,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__ConstStructMap_21,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__MaybeContainingGoalMap_22,
#line 98 "code_info.m"
  MR_Word ll_backend__code_info__TSRevStringTable_23,
#line 98 "code_info.m"
  MR_Integer ll_backend__code_info__TSStringTableSize_24,
#line 98 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_25,
#line 98 "code_info.m"
  MR_Word * ll_backend__code_info__CodeInfo_26)
#line 98 "code_info.m"
{
#line 349 "code_info.m"
  {
#line 349 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtorInfo_76_76;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__Globals_27;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_28;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__VarSet_29;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_30;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__StackSlots_31;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_32;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__TraceLevel_33;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__TempContentMap_34;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__PersistentTemps_35;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__LayoutMap_36;
#line 349 "code_info.m"
    MR_Integer ll_backend__code_info__VarSlotMax_37;
#line 349 "code_info.m"
    MR_Integer ll_backend__code_info__FixedSlots_38;
#line 349 "code_info.m"
    MR_Integer ll_backend__code_info__SlotMax_40;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__OptNoReturnCalls_41;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__UseTrail_42;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__DisableTrailOps_43;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__EmitTrailOps_44;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__OptTrailOps_45;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__OptRegionOps_46;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__UseRegions_47;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__EmitRegionOps_48;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__AutoComments_49;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__LCMCNull_50;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__CodeInfo0_51;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 349 "code_info.m"
    MR_Word ll_backend__code_info__StackSlotList_85;
#line 361 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;

#line 350 "code_info.m"
    {
#line 350 "code_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__Globals_27);
    }
#line 351 "code_info.m"
    {
#line 351 "code_info.m"
      ll_backend__code_info__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredId_15, ll_backend__code_info__ProcId_16);
    }
#line 352 "code_info.m"
    {
#line 352 "code_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarSet_29);
    }
#line 353 "code_info.m"
    {
#line 353 "code_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarTypes_30);
    }
#line 354 "code_info.m"
    {
#line 354 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__StackSlots_31);
    }
#line 355 "code_info.m"
    {
#line 355 "code_info.m"
      ll_backend__code_info__ExprnOpts_32 = ll_backend__code_info__init_exprn_opts_1_f_0(ll_backend__code_info__Globals_27);
    }
#line 356 "code_info.m"
    {
#line 356 "code_info.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__code_info__Globals_27, &ll_backend__code_info__TraceLevel_33);
    }
#line 14701 "ll_backend.code_info.c"
    ll_backend__code_info__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 357 "code_info.m"
    {
#line 357 "code_info.m"
      mercury__map__init_1_p_0(ll_backend__code_info__TypeCtorInfo_76_76, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, &ll_backend__code_info__TempContentMap_34);
    }
#line 358 "code_info.m"
    {
#line 358 "code_info.m"
      mercury__set__init_1_p_0(ll_backend__code_info__TypeCtorInfo_76_76, &ll_backend__code_info__PersistentTemps_35);
    }
#line 359 "code_info.m"
    {
#line 359 "code_info.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, &ll_backend__code_info__LayoutMap_36);
    }
#line 511 "code_info.m"
    {
#line 511 "code_info.m"
      mercury__map__values_2_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_31, &ll_backend__code_info__StackSlotList_85);
    }
#line 512 "code_info.m"
    {
#line 512 "code_info.m"
      ll_backend__code_info__max_var_slot_2_3_p_0(ll_backend__code_info__StackSlotList_85, (MR_Integer) 0, &ll_backend__code_info__VarSlotMax_37);
    }
#line 361 "code_info.m"
    {
#line 361 "code_info.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__Globals_27, &ll_backend__code_info__FixedSlots_38, &ll_backend__code_info__V_39_39);
    }
#line 363 "code_info.m"
    {
#line 363 "code_info.m"
      mercury__int__max_3_p_0(ll_backend__code_info__VarSlotMax_37, ll_backend__code_info__FixedSlots_38, &ll_backend__code_info__SlotMax_40);
    }
#line 364 "code_info.m"
    {
#line 364 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 325, &ll_backend__code_info__OptNoReturnCalls_41);
    }
#line 366 "code_info.m"
    {
#line 366 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 219, &ll_backend__code_info__UseTrail_42);
    }
#line 367 "code_info.m"
    {
#line 367 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 289, &ll_backend__code_info__DisableTrailOps_43);
    }
#line 369 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__UseTrail_42 == (MR_Integer) 1);
#line 369 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 370 "code_info.m"
      ll_backend__code_info__succeeded = (ll_backend__code_info__DisableTrailOps_43 == (MR_Integer) 0);
#line 373 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 372 "code_info.m"
      ll_backend__code_info__EmitTrailOps_44 = (MR_Integer) 0;
#line 373 "code_info.m"
    else
#line 374 "code_info.m"
      ll_backend__code_info__EmitTrailOps_44 = (MR_Integer) 1;
#line 376 "code_info.m"
    {
#line 376 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 397, &ll_backend__code_info__OptTrailOps_45);
    }
#line 377 "code_info.m"
    {
#line 377 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 398, &ll_backend__code_info__OptRegionOps_46);
    }
#line 378 "code_info.m"
    {
#line 378 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 408, &ll_backend__code_info__UseRegions_47);
    }
#line 382 "code_info.m"
#line 382 "code_info.m"
    switch (ll_backend__code_info__UseRegions_47) {
#line 382 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "code_info.m"
      case (MR_Integer) 0:
#line 384 "code_info.m"
        ll_backend__code_info__EmitRegionOps_48 = (MR_Integer) 1;
#line 382 "code_info.m"
        break;
#line 382 "code_info.m"
      case (MR_Integer) 1:
#line 381 "code_info.m"
        ll_backend__code_info__EmitRegionOps_48 = (MR_Integer) 0;
#line 382 "code_info.m"
        break;
#line 382 "code_info.m"
    }
#line 386 "code_info.m"
    {
#line 386 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 140, &ll_backend__code_info__AutoComments_49);
    }
#line 387 "code_info.m"
    {
#line 387 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 366, &ll_backend__code_info__LCMCNull_50);
    }
#line 390 "code_info.m"
    {
#line 390 "code_info.m"
      ll_backend__code_info__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 0) = ((MR_Box) (ll_backend__code_info__ModuleInfo_14));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 1) = ((MR_Box) (ll_backend__code_info__Globals_27));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 2) = ((MR_Box) (ll_backend__code_info__ExprnOpts_32));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 3) = ((MR_Box) (ll_backend__code_info__PredId_15));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 4) = ((MR_Box) (ll_backend__code_info__ProcId_16));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 5) = ((MR_Box) (ll_backend__code_info__PredInfo_17));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 6) = ((MR_Box) (ll_backend__code_info__ProcInfo_18));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 7) = ((MR_Box) (ll_backend__code_info__ProcLabel_28));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 8) = ((MR_Box) (ll_backend__code_info__VarSet_29));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 9) = ((MR_Box) (ll_backend__code_info__VarTypes_30));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 10) = ((MR_Box) (ll_backend__code_info__SlotMax_40));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 12) = ((MR_Box) ((ll_backend__code_info__OptNoReturnCalls_41 | ((((ll_backend__code_info__EmitTrailOps_44 << (MR_Integer) 1)) | ((((ll_backend__code_info__OptTrailOps_45 << (MR_Integer) 2)) | ((((ll_backend__code_info__EmitRegionOps_48 << (MR_Integer) 3)) | ((((ll_backend__code_info__OptRegionOps_46 << (MR_Integer) 4)) | ((((ll_backend__code_info__AutoComments_49 << (MR_Integer) 5)) | ((ll_backend__code_info__LCMCNull_50 << (MR_Integer) 6)))))))))))))));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 13) = ((MR_Box) (ll_backend__code_info__MaybeContainingGoalMap_22));
#line 390 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 14) = ((MR_Box) (ll_backend__code_info__ConstStructMap_21));
#line 390 "code_info.m"
    }
#line 414 "code_info.m"
    {
#line 414 "code_info.m"
      ll_backend__code_info__V_63_63 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 423 "code_info.m"
    {
#line 423 "code_info.m"
      ll_backend__code_info__V_69_69 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 427 "code_info.m"
    {
#line 427 "code_info.m"
      ll_backend__code_info__V_73_73 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    }
#line 428 "code_info.m"
    {
#line 428 "code_info.m"
      ll_backend__code_info__V_74_74 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 431 "code_info.m"
    {
#line 431 "code_info.m"
      ll_backend__code_info__V_75_75 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
#line 413 "code_info.m"
    {
#line 413 "code_info.m"
      ll_backend__code_info__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 0) = ((MR_Box) (ll_backend__code_info__V_63_63));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 1) = ((MR_Box) (ll_backend__code_info__SaveSuccip_19));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 2) = ((MR_Box) (ll_backend__code_info__LayoutMap_36));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 3) = ((MR_Box) ((MR_Integer) 0));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 4) = ((MR_Box) ((MR_Integer) -1));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 5) = ((MR_Box) ((MR_Integer) -1));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 6) = ((MR_Box) ((MR_Integer) 0));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 7) = ((MR_Box) (ll_backend__code_info__TempContentMap_34));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 8) = ((MR_Box) (ll_backend__code_info__PersistentTemps_35));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 9) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 11) = ((MR_Box) ((MR_Integer) 0));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_20));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 13) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 14) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 15) = ((MR_Box) (ll_backend__code_info__TSStringTableSize_24));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 16) = ((MR_Box) (ll_backend__code_info__TSRevStringTable_23));
#line 413 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 17) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 413 "code_info.m"
    }
#line 389 "code_info.m"
    {
#line 389 "code_info.m"
      ll_backend__code_info__CodeInfo0_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_51, 0) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_51, 1) = ((MR_Box) (ll_backend__code_info__V_62_62));
#line 389 "code_info.m"
    }
#line 434 "code_info.m"
    {
#line 434 "code_info.m"
      ll_backend__code_info__init_maybe_trace_info_8_p_0(ll_backend__code_info__TraceLevel_33, ll_backend__code_info__Globals_27, ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__TraceSlotInfo_25, ll_backend__code_info__CodeInfo0_51, ll_backend__code_info__CodeInfo_26);
#line 434 "code_info.m"
      return;
    }
#line 349 "code_info.m"
  }
#line 98 "code_info.m"
}

void mercury__ll_backend__code_info__init(void)
{
}

void mercury__ll_backend__code_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0);
	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0);
	MR_register_type_ctor_info(&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0);
}

void mercury__ll_backend__code_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.code_info. */
