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




#line 155 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 161 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2];

#line 167 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2];

#line 170 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0;

#line 173 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1];

#line 176 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1];

#line 179 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1];

#line 182 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1];

#line 185 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;

#line 188 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0;

#line 191 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 194 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

#line 197 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

#line 200 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 203 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0;

#line 206 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

#line 209 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_persistent_0_0[18];

#line 212 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_persistent_0_0[18];

#line 215 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0;

#line 218 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1];

#line 221 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1];

#line 224 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1];

#line 227 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1];

#line 230 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 233 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 236 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0;

#line 239 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 242 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 245 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0;

#line 248 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_static_0_0[21];

#line 251 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_static_0_0[21];

#line 254 "ll_backend.code_info.c"
static const MR_DuArgLocn ll_backend__code_info__ll_backend__code_info__field_locns_code_info_static_0_0[21];

#line 257 "ll_backend.code_info.c"
static const MR_DuFunctorDesc ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0;

#line 260 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1];

#line 263 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1];

#line 266 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1];

#line 269 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1];

#line 272 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
#line 275 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 277 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 280 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
#line 283 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 285 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 287 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 290 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
#line 293 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 295 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 298 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
#line 301 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 303 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 305 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 308 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
#line 311 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 313 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2);

#line 316 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
#line 319 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 321 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 323 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3);

#line 207 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
#line 207 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3);

#line 207 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2);

#line 273 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
#line 273 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3);

#line 273 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2);

#line 856 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
#line 856 "code_info.m"
  MR_Box ll_backend__code_info__closure_arg,
#line 856 "code_info.m"
  MR_Box ll_backend__code_info__wrapper_arg_1);

#line 534 "code_info.m"
static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__TraceLevel_9,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__Globals_10,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_11,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_12,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_13,
#line 534 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 534 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22);

#line 513 "code_info.m"
static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
#line 513 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 513 "code_info.m"
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
#line 513 "code_info.m"
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3);

#line 436 "code_info.m"
static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
#line 436 "code_info.m"
  MR_Word ll_backend__code_info__Globals_3);

#line 183 "code_info.m"
static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
#line 183 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 183 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 183 "code_info.m"
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



#line 546 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 554 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 563 "ll_backend.code_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 571 "ll_backend.code_info.c"
static const MR_PseudoTypeInfo ll_backend__code_info__ll_backend__code_info__field_types_code_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_static_0,
  (MR_PseudoTypeInfo) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_persistent_0
};

#line 577 "ll_backend.code_info.c"
static const MR_ConstString ll_backend__code_info__ll_backend__code_info__field_names_code_info_0_0[2] = {
  (MR_String) "code_info_static",
  (MR_String) "code_info_persistent"
};

#line 583 "ll_backend.code_info.c"
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

#line 598 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

#line 603 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_0_0
  }
};

#line 612 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_0_0
};

#line 617 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_0[1] = {
  (MR_Integer) 0
};

#line 622 "ll_backend.code_info.c"
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

#line 639 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__continuation_info__type_ctor_info_internal_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0
  }
};

#line 648 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__continuation_info__type_ctor_info_slot_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0
  }
};

#line 657 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 665 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

#line 673 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

#line 681 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 689 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 697 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 705 "ll_backend.code_info.c"
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

#line 727 "ll_backend.code_info.c"
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

#line 749 "ll_backend.code_info.c"
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

#line 764 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

#line 769 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_persistent_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_persistent_0_0
  }
};

#line 778 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_persistent_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_persistent_0_0
};

#line 783 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_persistent_0[1] = {
  (MR_Integer) 0
};

#line 788 "ll_backend.code_info.c"
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

#line 805 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 813 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__code_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 822 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0
  }
};

#line 830 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 839 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_info__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_info__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 847 "ll_backend.code_info.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 856 "ll_backend.code_info.c"
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

#line 881 "ll_backend.code_info.c"
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

#line 906 "ll_backend.code_info.c"
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

#line 1015 "ll_backend.code_info.c"
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

#line 1030 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

#line 1035 "ll_backend.code_info.c"
static const MR_DuPtagLayout ll_backend__code_info__ll_backend__code_info__du_ptag_ordered_code_info_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__code_info__ll_backend__code_info__du_stag_ordered_code_info_static_0_0
  }
};

#line 1044 "ll_backend.code_info.c"
static const MR_DuFunctorDescPtr ll_backend__code_info__ll_backend__code_info__du_name_ordered_code_info_static_0[1] = {
  &ll_backend__code_info__ll_backend__code_info__du_functor_desc_code_info_static_0_0
};

#line 1049 "ll_backend.code_info.c"
static const MR_Integer ll_backend__code_info__ll_backend__code_info__functor_number_map_code_info_static_0[1] = {
  (MR_Integer) 0
};

#line 1054 "ll_backend.code_info.c"
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

#line 1071 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0_10001(
#line 1074 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1076 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1078 "ll_backend.code_info.c"
{
#line 1080 "ll_backend.code_info.c"
  {
#line 1082 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1085 "ll_backend.code_info.c"
    {
#line 1087 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1090 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1092 "ll_backend.code_info.c"
  }
#line 1094 "ll_backend.code_info.c"
}

#line 1097 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0_10001(
#line 1100 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1102 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1104 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1106 "ll_backend.code_info.c"
{
#line 1108 "ll_backend.code_info.c"
  {
#line 1110 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1113 "ll_backend.code_info.c"
    {
#line 1115 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1118 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1120 "ll_backend.code_info.c"
  }
#line 1122 "ll_backend.code_info.c"
}

#line 1125 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0_10001(
#line 1128 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1130 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1132 "ll_backend.code_info.c"
{
#line 1134 "ll_backend.code_info.c"
  {
#line 1136 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1139 "ll_backend.code_info.c"
    {
#line 1141 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1144 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1146 "ll_backend.code_info.c"
  }
#line 1148 "ll_backend.code_info.c"
}

#line 1151 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0_10001(
#line 1154 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1156 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1158 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1160 "ll_backend.code_info.c"
{
#line 1162 "ll_backend.code_info.c"
  {
#line 1164 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1167 "ll_backend.code_info.c"
    {
#line 1169 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_persistent_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1172 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1174 "ll_backend.code_info.c"
  }
#line 1176 "ll_backend.code_info.c"
}

#line 1179 "ll_backend.code_info.c"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0_10001(
#line 1182 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_1,
#line 1184 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2)
#line 1186 "ll_backend.code_info.c"
{
#line 1188 "ll_backend.code_info.c"
  {
#line 1190 "ll_backend.code_info.c"
    MR_bool ll_backend__code_info__succeeded;

#line 1193 "ll_backend.code_info.c"
    {
#line 1195 "ll_backend.code_info.c"
      ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_static_0_0(((MR_Word) ll_backend__code_info__wrapper_arg_1), ((MR_Word) ll_backend__code_info__wrapper_arg_2));
    }
#line 1198 "ll_backend.code_info.c"
    return ll_backend__code_info__succeeded;
#line 1200 "ll_backend.code_info.c"
  }
#line 1202 "ll_backend.code_info.c"
}

#line 1205 "ll_backend.code_info.c"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0_10001(
#line 1208 "ll_backend.code_info.c"
  MR_Box * ll_backend__code_info__wrapper_arg_1,
#line 1210 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_2,
#line 1212 "ll_backend.code_info.c"
  MR_Box ll_backend__code_info__wrapper_arg_3)
#line 1214 "ll_backend.code_info.c"
{
#line 1216 "ll_backend.code_info.c"
  {
#line 1218 "ll_backend.code_info.c"
    MR_Word ll_backend__code_info__conv0_HeadVar__1_1;

#line 1221 "ll_backend.code_info.c"
    {
#line 1223 "ll_backend.code_info.c"
      ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_info__wrapper_arg_2), ((MR_Word) ll_backend__code_info__wrapper_arg_3));
    }
#line 1226 "ll_backend.code_info.c"
    *ll_backend__code_info__wrapper_arg_1 = ((MR_Box) (ll_backend__code_info__conv0_HeadVar__1_1));
#line 1228 "ll_backend.code_info.c"
  }
#line 1230 "ll_backend.code_info.c"
}

#line 798 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
#line 798 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4)
#line 798 "code_info.m"
{
#line 593 "code_info.m"
  {
#line 593 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__AddRegionOps_6;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 594 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 594 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;

#line 594 "code_info.m"
    ll_backend__code_info__AddRegionOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 594 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 593 "code_info.m"
    return ll_backend__code_info__AddRegionOps_6;
#line 593 "code_info.m"
  }
#line 798 "code_info.m"
}

#line 793 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(
#line 793 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4)
#line 793 "code_info.m"
{
#line 589 "code_info.m"
  {
#line 589 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__AddTrailOps_6;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 0)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo_4, (MR_Integer) 1)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 590 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 590 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;

#line 590 "code_info.m"
    ll_backend__code_info__AddTrailOps_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 590 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 589 "code_info.m"
    return ll_backend__code_info__AddTrailOps_6;
#line 589 "code_info.m"
  }
#line 793 "code_info.m"
}

#line 207 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_static_0_0(
#line 207 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 207 "code_info.m"
{
#line 207 "code_info.m"
  {
#line 207 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 207 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 207 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 207 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
#line 207 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1415 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 207 "code_info.m"
    else
#line 207 "code_info.m"
      {
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_46_46;

#line 207 "code_info.m"
        {
#line 207 "code_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
        }
#line 1513 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
#line 207 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
#line 207 "code_info.m"
        else
#line 207 "code_info.m"
          {
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_47_47;

#line 207 "code_info.m"
            {
#line 207 "code_info.m"
              libs__globals____Compare____globals_0_0(&ll_backend__code_info__V_47_47, ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
            }
#line 1533 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
#line 207 "code_info.m"
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
#line 207 "code_info.m"
            else
#line 207 "code_info.m"
              {
#line 207 "code_info.m"
                MR_Word ll_backend__code_info__V_48_48;

#line 207 "code_info.m"
                {
#line 207 "code_info.m"
                  ll_backend__llds____Compare____exprn_opts_0_0(&ll_backend__code_info__V_48_48, ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                }
#line 1553 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
#line 207 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
#line 207 "code_info.m"
                else
#line 207 "code_info.m"
                  {
#line 207 "code_info.m"
                    MR_Word ll_backend__code_info__V_49_49;

#line 207 "code_info.m"
                    {
#line 207 "code_info.m"
                      hlds__hlds_pred____Compare____pred_id_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_7_7, ll_backend__code_info__V_28_28);
                    }
#line 1573 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 207 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 207 "code_info.m"
                    else
#line 207 "code_info.m"
                      {
#line 207 "code_info.m"
                        MR_Word ll_backend__code_info__V_50_50;

#line 207 "code_info.m"
                        {
#line 207 "code_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                        }
#line 1593 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 207 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 207 "code_info.m"
                        else
#line 207 "code_info.m"
                          {
#line 207 "code_info.m"
                            MR_Word ll_backend__code_info__V_51_51;

#line 207 "code_info.m"
                            {
#line 207 "code_info.m"
                              hlds__hlds_pred____Compare____pred_info_0_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                            }
#line 1613 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 207 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 207 "code_info.m"
                            else
#line 207 "code_info.m"
                              {
#line 207 "code_info.m"
                                MR_Word ll_backend__code_info__V_52_52;

#line 207 "code_info.m"
                                {
#line 207 "code_info.m"
                                  hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                }
#line 1633 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 207 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 207 "code_info.m"
                                else
#line 207 "code_info.m"
                                  {
#line 207 "code_info.m"
                                    MR_Word ll_backend__code_info__V_53_53;

#line 207 "code_info.m"
                                    {
#line 207 "code_info.m"
                                      mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                                    }
#line 1653 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 207 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 207 "code_info.m"
                                    else
#line 207 "code_info.m"
                                      {
#line 207 "code_info.m"
                                        MR_Word ll_backend__code_info__V_54_54;

#line 207 "code_info.m"
                                        {
#line 207 "code_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[7], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                        }
#line 1673 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 207 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 207 "code_info.m"
                                        else
#line 207 "code_info.m"
                                          {
#line 207 "code_info.m"
                                            MR_Word ll_backend__code_info__V_55_55;

#line 207 "code_info.m"
                                            {
#line 207 "code_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[2], &ll_backend__code_info__V_55_55, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                            }
#line 1693 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 207 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 207 "code_info.m"
                                            else
#line 207 "code_info.m"
                                              {
#line 207 "code_info.m"
                                                MR_Word ll_backend__code_info__V_56_56;

#line 207 "code_info.m"
                                                {
#line 207 "code_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_56_56, ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                                }
#line 1713 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 207 "code_info.m"
                                                else
#line 207 "code_info.m"
                                                  {
#line 207 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_57_57;

#line 207 "code_info.m"
                                                    {
#line 207 "code_info.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[8], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                    }
#line 1733 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
#line 207 "code_info.m"
                                                    else
#line 207 "code_info.m"
                                                      {
#line 207 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_58_58;
#line 207 "code_info.m"
                                                        MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_16_16;
#line 207 "code_info.m"
                                                        MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_37_37;

#line 207 "code_info.m"
                                                        {
#line 207 "code_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_89_89, ll_backend__code_info__V_90_90);
                                                        }
#line 1757 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
#line 207 "code_info.m"
                                                        else
#line 207 "code_info.m"
                                                          {
#line 207 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_59_59;
#line 207 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_17_17;
#line 207 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_92_92 = (MR_Integer) ll_backend__code_info__V_38_38;

#line 207 "code_info.m"
                                                            {
#line 207 "code_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_59_59, ll_backend__code_info__V_91_91, ll_backend__code_info__V_92_92);
                                                            }
#line 1781 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
#line 207 "code_info.m"
                                                            else
#line 207 "code_info.m"
                                                              {
#line 207 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_60_60;
#line 207 "code_info.m"
                                                                MR_Integer ll_backend__code_info__V_93_93 = (MR_Integer) ll_backend__code_info__V_18_18;
#line 207 "code_info.m"
                                                                MR_Integer ll_backend__code_info__V_94_94 = (MR_Integer) ll_backend__code_info__V_39_39;

#line 207 "code_info.m"
                                                                {
#line 207 "code_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_93_93, ll_backend__code_info__V_94_94);
                                                                }
#line 1805 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
#line 207 "code_info.m"
                                                                else
#line 207 "code_info.m"
                                                                  {
#line 207 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_61_61;
#line 207 "code_info.m"
                                                                    MR_Integer ll_backend__code_info__V_95_95 = (MR_Integer) ll_backend__code_info__V_19_19;
#line 207 "code_info.m"
                                                                    MR_Integer ll_backend__code_info__V_96_96 = (MR_Integer) ll_backend__code_info__V_40_40;

#line 207 "code_info.m"
                                                                    {
#line 207 "code_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_95_95, ll_backend__code_info__V_96_96);
                                                                    }
#line 1829 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
#line 207 "code_info.m"
                                                                    else
#line 207 "code_info.m"
                                                                      {
#line 207 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_62_62;
#line 207 "code_info.m"
                                                                        MR_Integer ll_backend__code_info__V_97_97 = (MR_Integer) ll_backend__code_info__V_20_20;
#line 207 "code_info.m"
                                                                        MR_Integer ll_backend__code_info__V_98_98 = (MR_Integer) ll_backend__code_info__V_41_41;

#line 207 "code_info.m"
                                                                        {
#line 207 "code_info.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_62_62, ll_backend__code_info__V_97_97, ll_backend__code_info__V_98_98);
                                                                        }
#line 1853 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
#line 207 "code_info.m"
                                                                        else
#line 207 "code_info.m"
                                                                          {
#line 207 "code_info.m"
                                                                            MR_Word ll_backend__code_info__V_63_63;
#line 207 "code_info.m"
                                                                            MR_Integer ll_backend__code_info__V_99_99 = (MR_Integer) ll_backend__code_info__V_21_21;
#line 207 "code_info.m"
                                                                            MR_Integer ll_backend__code_info__V_100_100 = (MR_Integer) ll_backend__code_info__V_42_42;

#line 207 "code_info.m"
                                                                            {
#line 207 "code_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_63_63, ll_backend__code_info__V_99_99, ll_backend__code_info__V_100_100);
                                                                            }
#line 1877 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
#line 207 "code_info.m"
                                                                            else
#line 207 "code_info.m"
                                                                              {
#line 207 "code_info.m"
                                                                                MR_Word ll_backend__code_info__V_64_64;
#line 207 "code_info.m"
                                                                                MR_Integer ll_backend__code_info__V_101_101 = (MR_Integer) ll_backend__code_info__V_22_22;
#line 207 "code_info.m"
                                                                                MR_Integer ll_backend__code_info__V_102_102 = (MR_Integer) ll_backend__code_info__V_43_43;

#line 207 "code_info.m"
                                                                                {
#line 207 "code_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_101_101, ll_backend__code_info__V_102_102);
                                                                                }
#line 1901 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
#line 207 "code_info.m"
                                                                                else
#line 207 "code_info.m"
                                                                                  {
#line 207 "code_info.m"
                                                                                    MR_Word ll_backend__code_info__V_65_65;

#line 207 "code_info.m"
                                                                                    {
#line 207 "code_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[9], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                                    }
#line 1921 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
#line 207 "code_info.m"
                                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 207 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
#line 207 "code_info.m"
                                                                                    else
#line 207 "code_info.m"
                                                                                      {
#line 207 "code_info.m"
                                                                                        {
#line 207 "code_info.m"
                                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[4], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_24_24)), ((MR_Box) (ll_backend__code_info__V_45_45)));
#line 207 "code_info.m"
                                                                                          return;
                                                                                        }
#line 207 "code_info.m"
                                                                                      }
#line 207 "code_info.m"
                                                                                  }
#line 207 "code_info.m"
                                                                              }
#line 207 "code_info.m"
                                                                          }
#line 207 "code_info.m"
                                                                      }
#line 207 "code_info.m"
                                                                  }
#line 207 "code_info.m"
                                                              }
#line 207 "code_info.m"
                                                          }
#line 207 "code_info.m"
                                                      }
#line 207 "code_info.m"
                                                  }
#line 207 "code_info.m"
                                              }
#line 207 "code_info.m"
                                          }
#line 207 "code_info.m"
                                      }
#line 207 "code_info.m"
                                  }
#line 207 "code_info.m"
                              }
#line 207 "code_info.m"
                          }
#line 207 "code_info.m"
                      }
#line 207 "code_info.m"
                  }
#line 207 "code_info.m"
              }
#line 207 "code_info.m"
          }
#line 207 "code_info.m"
      }
#line 207 "code_info.m"
  }
#line 207 "code_info.m"
}

#line 207 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_static_0_0(
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 207 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 207 "code_info.m"
{
#line 207 "code_info.m"
  {
#line 207 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 207 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_45 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 207 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_46 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 207 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_45 == ll_backend__code_info__CastY_46);
#line 207 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 207 "code_info.m"
    else
#line 207 "code_info.m"
      {
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_54_54;
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_55_55;
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_56_56;
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_57_57;
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_58_58;
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 207 "code_info.m"
        MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));

#line 2110 "ll_backend.code_info.c"
        {
#line 2112 "ll_backend.code_info.c"
          ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_24_24);
        }
#line 207 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
          {
#line 2119 "ll_backend.code_info.c"
            {
#line 2121 "ll_backend.code_info.c"
              ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_25_25);
            }
#line 207 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
              {
#line 2128 "ll_backend.code_info.c"
                {
#line 2130 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_5_5, ll_backend__code_info__V_26_26);
                }
#line 207 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                  {
#line 2137 "ll_backend.code_info.c"
                    {
#line 2139 "ll_backend.code_info.c"
                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_6_6, ll_backend__code_info__V_27_27);
                    }
#line 207 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                      {
#line 2146 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_28_28);
#line 207 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                          {
#line 2152 "ll_backend.code_info.c"
                            {
#line 2154 "ll_backend.code_info.c"
                              ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_8_8, ll_backend__code_info__V_29_29);
                            }
#line 207 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                              {
#line 2161 "ll_backend.code_info.c"
                                {
#line 2163 "ll_backend.code_info.c"
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
                                }
#line 207 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                  {
#line 2170 "ll_backend.code_info.c"
                                    {
#line 2172 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                                    }
#line 207 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                      {
#line 2179 "ll_backend.code_info.c"
                                        ll_backend__code_info__TypeInfo_54_54 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
#line 2181 "ll_backend.code_info.c"
                                        {
#line 2183 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_54, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                        }
#line 207 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                          {
#line 2190 "ll_backend.code_info.c"
                                            ll_backend__code_info__TypeInfo_55_55 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
#line 2192 "ll_backend.code_info.c"
                                            {
#line 2194 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_55, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                                            }
#line 207 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                              {
#line 2201 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
#line 207 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                  {
#line 2207 "ll_backend.code_info.c"
                                                    ll_backend__code_info__TypeInfo_56_56 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
#line 2209 "ll_backend.code_info.c"
                                                    {
#line 2211 "ll_backend.code_info.c"
                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_56, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                    }
#line 207 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                      {
#line 2218 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_15_15 == ll_backend__code_info__V_36_36);
#line 207 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                          {
#line 2224 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_16_16 == ll_backend__code_info__V_37_37);
#line 207 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                              {
#line 2230 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_17_17 == ll_backend__code_info__V_38_38);
#line 207 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                  {
#line 2236 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_39_39);
#line 207 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                      {
#line 2242 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
#line 207 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                          {
#line 2248 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_20_20 == ll_backend__code_info__V_41_41);
#line 207 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                              {
#line 2254 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
#line 207 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                  {
#line 2260 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__TypeInfo_57_57 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
#line 2262 "ll_backend.code_info.c"
                                                                                    {
#line 2264 "ll_backend.code_info.c"
                                                                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_57, ((MR_Box) (ll_backend__code_info__V_22_22)), ((MR_Box) (ll_backend__code_info__V_43_43)));
                                                                                    }
#line 207 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                      {
#line 2271 "ll_backend.code_info.c"
                                                                                        ll_backend__code_info__TypeInfo_58_58 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
#line 2273 "ll_backend.code_info.c"
                                                                                        {
#line 2275 "ll_backend.code_info.c"
                                                                                          return ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_58, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                                        }
#line 207 "code_info.m"
                                                                                      }
#line 207 "code_info.m"
                                                                                  }
#line 207 "code_info.m"
                                                                              }
#line 207 "code_info.m"
                                                                          }
#line 207 "code_info.m"
                                                                      }
#line 207 "code_info.m"
                                                                  }
#line 207 "code_info.m"
                                                              }
#line 207 "code_info.m"
                                                          }
#line 207 "code_info.m"
                                                      }
#line 207 "code_info.m"
                                                  }
#line 207 "code_info.m"
                                              }
#line 207 "code_info.m"
                                          }
#line 207 "code_info.m"
                                      }
#line 207 "code_info.m"
                                  }
#line 207 "code_info.m"
                              }
#line 207 "code_info.m"
                          }
#line 207 "code_info.m"
                      }
#line 207 "code_info.m"
                  }
#line 207 "code_info.m"
              }
#line 207 "code_info.m"
          }
#line 207 "code_info.m"
      }
#line 207 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 207 "code_info.m"
  }
#line 207 "code_info.m"
}

#line 273 "code_info.m"
static void MR_CALL 
ll_backend__code_info____Compare____code_info_persistent_0_0(
#line 273 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 273 "code_info.m"
{
#line 273 "code_info.m"
  {
#line 273 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 273 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_57 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 273 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_58 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 273 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_57 == ll_backend__code_info__CastY_58);
#line 273 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 2351 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "code_info.m"
    else
#line 273 "code_info.m"
      {
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 2)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 3)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 4)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 5)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 6)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 7)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 8)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 9)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 10)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 11)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 12)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 13)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 14)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 15)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 16)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 17)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_40_40;

#line 273 "code_info.m"
        {
#line 273 "code_info.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_40_40, ll_backend__code_info__V_4_4, ll_backend__code_info__V_22_22);
        }
#line 2437 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_40_40 == (MR_Integer) 0);
#line 273 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_40_40;
#line 273 "code_info.m"
        else
#line 273 "code_info.m"
          {
#line 273 "code_info.m"
            MR_Word ll_backend__code_info__V_41_41;
#line 273 "code_info.m"
            MR_Integer ll_backend__code_info__V_77_77 = (MR_Integer) ll_backend__code_info__V_5_5;
#line 273 "code_info.m"
            MR_Integer ll_backend__code_info__V_78_78 = (MR_Integer) ll_backend__code_info__V_23_23;

#line 273 "code_info.m"
            {
#line 273 "code_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_41_41, ll_backend__code_info__V_77_77, ll_backend__code_info__V_78_78);
            }
#line 2461 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_41_41 == (MR_Integer) 0);
#line 273 "code_info.m"
            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_41_41;
#line 273 "code_info.m"
            else
#line 273 "code_info.m"
              {
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_42_42;

#line 273 "code_info.m"
                {
#line 273 "code_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_42_42, ((MR_Box) (ll_backend__code_info__V_6_6)), ((MR_Box) (ll_backend__code_info__V_24_24)));
                }
#line 2481 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_42_42 == (MR_Integer) 0);
#line 273 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_42_42;
#line 273 "code_info.m"
                else
#line 273 "code_info.m"
                  {
#line 273 "code_info.m"
                    MR_Word ll_backend__code_info__V_43_43;
#line 273 "code_info.m"
                    MR_Integer ll_backend__code_info__V_79_79 = (MR_Integer) ll_backend__code_info__V_7_7;
#line 273 "code_info.m"
                    MR_Integer ll_backend__code_info__V_80_80 = (MR_Integer) ll_backend__code_info__V_25_25;

#line 273 "code_info.m"
                    {
#line 273 "code_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_43_43, ll_backend__code_info__V_79_79, ll_backend__code_info__V_80_80);
                    }
#line 2505 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_43_43 == (MR_Integer) 0);
#line 273 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_43_43;
#line 273 "code_info.m"
                    else
#line 273 "code_info.m"
                      {
#line 273 "code_info.m"
                        MR_Word ll_backend__code_info__V_44_44;

#line 273 "code_info.m"
                        {
#line 273 "code_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_44_44, ll_backend__code_info__V_8_8, ll_backend__code_info__V_26_26);
                        }
#line 2525 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_44_44 == (MR_Integer) 0);
#line 273 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_44_44;
#line 273 "code_info.m"
                        else
#line 273 "code_info.m"
                          {
#line 273 "code_info.m"
                            MR_Word ll_backend__code_info__V_45_45;

#line 273 "code_info.m"
                            {
#line 273 "code_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_45_45, ll_backend__code_info__V_9_9, ll_backend__code_info__V_27_27);
                            }
#line 2545 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_45_45 == (MR_Integer) 0);
#line 273 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_45_45;
#line 273 "code_info.m"
                            else
#line 273 "code_info.m"
                              {
#line 273 "code_info.m"
                                MR_Word ll_backend__code_info__V_46_46;

#line 273 "code_info.m"
                                {
#line 273 "code_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_46_46, ll_backend__code_info__V_10_10, ll_backend__code_info__V_28_28);
                                }
#line 2565 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_46_46 == (MR_Integer) 0);
#line 273 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_46_46;
#line 273 "code_info.m"
                                else
#line 273 "code_info.m"
                                  {
#line 273 "code_info.m"
                                    MR_Word ll_backend__code_info__V_47_47;

#line 273 "code_info.m"
                                    {
#line 273 "code_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_47_47, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                    }
#line 2585 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_47_47 == (MR_Integer) 0);
#line 273 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_47_47;
#line 273 "code_info.m"
                                    else
#line 273 "code_info.m"
                                      {
#line 273 "code_info.m"
                                        MR_Word ll_backend__code_info__V_48_48;

#line 273 "code_info.m"
                                        {
#line 273 "code_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_48_48, ((MR_Box) (ll_backend__code_info__V_12_12)), ((MR_Box) (ll_backend__code_info__V_30_30)));
                                        }
#line 2605 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_48_48 == (MR_Integer) 0);
#line 273 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_48_48;
#line 273 "code_info.m"
                                        else
#line 273 "code_info.m"
                                          {
#line 273 "code_info.m"
                                            MR_Word ll_backend__code_info__V_49_49;

#line 273 "code_info.m"
                                            {
#line 273 "code_info.m"
                                              mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                                            }
#line 2625 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 273 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 273 "code_info.m"
                                            else
#line 273 "code_info.m"
                                              {
#line 273 "code_info.m"
                                                MR_Word ll_backend__code_info__V_50_50;

#line 273 "code_info.m"
                                                {
#line 273 "code_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_50_50, ((MR_Box) (ll_backend__code_info__V_14_14)), ((MR_Box) (ll_backend__code_info__V_32_32)));
                                                }
#line 2645 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 273 "code_info.m"
                                                else
#line 273 "code_info.m"
                                                  {
#line 273 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_51_51;
#line 273 "code_info.m"
                                                    MR_Integer ll_backend__code_info__V_81_81 = (MR_Integer) ll_backend__code_info__V_15_15;
#line 273 "code_info.m"
                                                    MR_Integer ll_backend__code_info__V_82_82 = (MR_Integer) ll_backend__code_info__V_33_33;

#line 273 "code_info.m"
                                                    {
#line 273 "code_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_51_51, ll_backend__code_info__V_81_81, ll_backend__code_info__V_82_82);
                                                    }
#line 2669 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 273 "code_info.m"
                                                    else
#line 273 "code_info.m"
                                                      {
#line 273 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_52_52;

#line 273 "code_info.m"
                                                        {
#line 273 "code_info.m"
                                                          ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_16_16, ll_backend__code_info__V_34_34);
                                                        }
#line 2689 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 273 "code_info.m"
                                                        else
#line 273 "code_info.m"
                                                          {
#line 273 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_53_53;

#line 273 "code_info.m"
                                                            {
#line 273 "code_info.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_53_53, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                            }
#line 2709 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 273 "code_info.m"
                                                            else
#line 273 "code_info.m"
                                                              {
#line 273 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_54_54;

#line 273 "code_info.m"
                                                                {
#line 273 "code_info.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_54_54, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_36_36)));
                                                                }
#line 2729 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 273 "code_info.m"
                                                                else
#line 273 "code_info.m"
                                                                  {
#line 273 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_55_55;

#line 273 "code_info.m"
                                                                    {
#line 273 "code_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                                                    }
#line 2749 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 273 "code_info.m"
                                                                    else
#line 273 "code_info.m"
                                                                      {
#line 273 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_56_56;

#line 273 "code_info.m"
                                                                        {
#line 273 "code_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                                                        }
#line 2769 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 273 "code_info.m"
                                                                        else
#line 273 "code_info.m"
                                                                          {
#line 273 "code_info.m"
                                                                            {
#line 273 "code_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
#line 273 "code_info.m"
                                                                              return;
                                                                            }
#line 273 "code_info.m"
                                                                          }
#line 273 "code_info.m"
                                                                      }
#line 273 "code_info.m"
                                                                  }
#line 273 "code_info.m"
                                                              }
#line 273 "code_info.m"
                                                          }
#line 273 "code_info.m"
                                                      }
#line 273 "code_info.m"
                                                  }
#line 273 "code_info.m"
                                              }
#line 273 "code_info.m"
                                          }
#line 273 "code_info.m"
                                      }
#line 273 "code_info.m"
                                  }
#line 273 "code_info.m"
                              }
#line 273 "code_info.m"
                          }
#line 273 "code_info.m"
                      }
#line 273 "code_info.m"
                  }
#line 273 "code_info.m"
              }
#line 273 "code_info.m"
          }
#line 273 "code_info.m"
      }
#line 273 "code_info.m"
  }
#line 273 "code_info.m"
}

#line 273 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_persistent_0_0(
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 273 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 273 "code_info.m"
{
#line 273 "code_info.m"
  {
#line 273 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 273 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_39 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 273 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_40 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 273 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_39 == ll_backend__code_info__CastY_40);
#line 273 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 273 "code_info.m"
    else
#line 273 "code_info.m"
      {
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_42_42;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_43_43;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_44_44;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_46_46;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_48_48;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_49_49;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_50_50;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__TypeInfo_51_51;
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 2)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 3)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 4)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 5)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 6)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 7)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 8)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 9)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 10)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 11)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 12)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 13)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 14)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 15)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 16)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 17)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 2)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 3)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 4)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 5)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 6)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 7)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 8)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 9)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 10)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 11)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 12)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 13)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 14)));
#line 273 "code_info.m"
        MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 15)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 16)));
#line 273 "code_info.m"
        MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 17)));

#line 2946 "ll_backend.code_info.c"
        {
#line 2948 "ll_backend.code_info.c"
          ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_3_3, ll_backend__code_info__V_21_21);
        }
#line 273 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
          {
#line 2955 "ll_backend.code_info.c"
            ll_backend__code_info__succeeded = (ll_backend__code_info__V_4_4 == ll_backend__code_info__V_22_22);
#line 273 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
              {
#line 2961 "ll_backend.code_info.c"
                ll_backend__code_info__TypeInfo_42_42 = (MR_Word) &ll_backend__code_info_scalar_common_2[0];
#line 2963 "ll_backend.code_info.c"
                {
#line 2965 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_42_42, ((MR_Box) (ll_backend__code_info__V_5_5)), ((MR_Box) (ll_backend__code_info__V_23_23)));
                }
#line 273 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                  {
#line 2972 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_6_6 == ll_backend__code_info__V_24_24);
#line 273 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                      {
#line 2978 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_7_7 == ll_backend__code_info__V_25_25);
#line 273 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                          {
#line 2984 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == ll_backend__code_info__V_26_26);
#line 273 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                              {
#line 2990 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_9_9 == ll_backend__code_info__V_27_27);
#line 273 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                  {
#line 2996 "ll_backend.code_info.c"
                                    ll_backend__code_info__TypeInfo_43_43 = (MR_Word) &ll_backend__code_info_scalar_common_2[1];
#line 2998 "ll_backend.code_info.c"
                                    {
#line 3000 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_43_43, ((MR_Box) (ll_backend__code_info__V_10_10)), ((MR_Box) (ll_backend__code_info__V_28_28)));
                                    }
#line 273 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                      {
#line 3007 "ll_backend.code_info.c"
                                        ll_backend__code_info__TypeInfo_44_44 = (MR_Word) &ll_backend__code_info_scalar_common_1[1];
#line 3009 "ll_backend.code_info.c"
                                        {
#line 3011 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_44_44, ((MR_Box) (ll_backend__code_info__V_11_11)), ((MR_Box) (ll_backend__code_info__V_29_29)));
                                        }
#line 273 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                          {
#line 3018 "ll_backend.code_info.c"
                                            {
#line 3020 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_30_30);
                                            }
#line 273 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                              {
#line 3027 "ll_backend.code_info.c"
                                                ll_backend__code_info__TypeInfo_46_46 = (MR_Word) &ll_backend__code_info_scalar_common_1[2];
#line 3029 "ll_backend.code_info.c"
                                                {
#line 3031 "ll_backend.code_info.c"
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_46_46, ((MR_Box) (ll_backend__code_info__V_13_13)), ((MR_Box) (ll_backend__code_info__V_31_31)));
                                                }
#line 273 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                  {
#line 3038 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_14_14 == ll_backend__code_info__V_32_32);
#line 273 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                      {
#line 3044 "ll_backend.code_info.c"
                                                        {
#line 3046 "ll_backend.code_info.c"
                                                          ll_backend__code_info__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_33_33);
                                                        }
#line 273 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                          {
#line 3053 "ll_backend.code_info.c"
                                                            ll_backend__code_info__TypeInfo_48_48 = (MR_Word) &ll_backend__code_info_scalar_common_1[3];
#line 3055 "ll_backend.code_info.c"
                                                            {
#line 3057 "ll_backend.code_info.c"
                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_48_48, ((MR_Box) (ll_backend__code_info__V_16_16)), ((MR_Box) (ll_backend__code_info__V_34_34)));
                                                            }
#line 273 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                              {
#line 3064 "ll_backend.code_info.c"
                                                                ll_backend__code_info__TypeInfo_49_49 = (MR_Word) &ll_backend__code_info_scalar_common_1[4];
#line 3066 "ll_backend.code_info.c"
                                                                {
#line 3068 "ll_backend.code_info.c"
                                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_49_49, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_35_35)));
                                                                }
#line 273 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                  {
#line 3075 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_18_18 == ll_backend__code_info__V_36_36);
#line 273 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                      {
#line 3081 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__TypeInfo_50_50 = (MR_Word) &ll_backend__code_info_scalar_common_1[5];
#line 3083 "ll_backend.code_info.c"
                                                                        {
#line 3085 "ll_backend.code_info.c"
                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_50_50, ((MR_Box) (ll_backend__code_info__V_19_19)), ((MR_Box) (ll_backend__code_info__V_37_37)));
                                                                        }
#line 273 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                          {
#line 3092 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__TypeInfo_51_51 = (MR_Word) &ll_backend__code_info_scalar_common_1[6];
#line 3094 "ll_backend.code_info.c"
                                                                            {
#line 3096 "ll_backend.code_info.c"
                                                                              return ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_51_51, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                                                            }
#line 273 "code_info.m"
                                                                          }
#line 273 "code_info.m"
                                                                      }
#line 273 "code_info.m"
                                                                  }
#line 273 "code_info.m"
                                                              }
#line 273 "code_info.m"
                                                          }
#line 273 "code_info.m"
                                                      }
#line 273 "code_info.m"
                                                  }
#line 273 "code_info.m"
                                              }
#line 273 "code_info.m"
                                          }
#line 273 "code_info.m"
                                      }
#line 273 "code_info.m"
                                  }
#line 273 "code_info.m"
                              }
#line 273 "code_info.m"
                          }
#line 273 "code_info.m"
                      }
#line 273 "code_info.m"
                  }
#line 273 "code_info.m"
              }
#line 273 "code_info.m"
          }
#line 273 "code_info.m"
      }
#line 273 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 273 "code_info.m"
  }
#line 273 "code_info.m"
}

#line 201 "code_info.m"
void MR_CALL 
ll_backend__code_info____Compare____code_info_0_0(
#line 201 "code_info.m"
  MR_Word * ll_backend__code_info__HeadVar__1_1,
#line 201 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2,
#line 201 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__3_3)
#line 201 "code_info.m"
{
#line 201 "code_info.m"
  {
#line 201 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 201 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_9 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;
#line 201 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_10 = (MR_Integer) ll_backend__code_info__HeadVar__3_3;

#line 201 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_9 == ll_backend__code_info__CastY_10);
#line 201 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 3166 "ll_backend.code_info.c"
      *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "code_info.m"
    else
#line 201 "code_info.m"
      {
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_8_8;

#line 201 "code_info.m"
        {
#line 201 "code_info.m"
          ll_backend__code_info____Compare____code_info_static_0_0(&ll_backend__code_info__V_8_8, ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
        }
#line 3188 "ll_backend.code_info.c"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 0);
#line 201 "code_info.m"
        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 201 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 201 "code_info.m"
          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_8_8;
#line 201 "code_info.m"
        else
#line 273 "code_info.m"
          {
#line 273 "code_info.m"
            MR_Integer ll_backend__code_info__CastX_66 = (MR_Integer) ll_backend__code_info__V_5_5;
#line 273 "code_info.m"
            MR_Integer ll_backend__code_info__CastY_67 = (MR_Integer) ll_backend__code_info__V_7_7;

#line 273 "code_info.m"
            ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_66 == ll_backend__code_info__CastY_67);
#line 273 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 3209 "ll_backend.code_info.c"
              *ll_backend__code_info__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "code_info.m"
            else
#line 273 "code_info.m"
              {
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 273 "code_info.m"
                MR_Integer ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 273 "code_info.m"
                MR_Word ll_backend__code_info__V_49_49;

#line 273 "code_info.m"
                {
#line 273 "code_info.m"
                  mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_49_49, ll_backend__code_info__V_13_13, ll_backend__code_info__V_31_31);
                }
#line 3295 "ll_backend.code_info.c"
                ll_backend__code_info__succeeded = (ll_backend__code_info__V_49_49 == (MR_Integer) 0);
#line 273 "code_info.m"
                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_49_49;
#line 273 "code_info.m"
                else
#line 273 "code_info.m"
                  {
#line 273 "code_info.m"
                    MR_Word ll_backend__code_info__V_50_50;
#line 273 "code_info.m"
                    MR_Integer ll_backend__code_info__V_86_86 = (MR_Integer) ll_backend__code_info__V_14_14;
#line 273 "code_info.m"
                    MR_Integer ll_backend__code_info__V_87_87 = (MR_Integer) ll_backend__code_info__V_32_32;

#line 273 "code_info.m"
                    {
#line 273 "code_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_50_50, ll_backend__code_info__V_86_86, ll_backend__code_info__V_87_87);
                    }
#line 3319 "ll_backend.code_info.c"
                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_50_50 == (MR_Integer) 0);
#line 273 "code_info.m"
                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_50_50;
#line 273 "code_info.m"
                    else
#line 273 "code_info.m"
                      {
#line 273 "code_info.m"
                        MR_Word ll_backend__code_info__V_51_51;

#line 273 "code_info.m"
                        {
#line 273 "code_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[0], &ll_backend__code_info__V_51_51, ((MR_Box) (ll_backend__code_info__V_15_15)), ((MR_Box) (ll_backend__code_info__V_33_33)));
                        }
#line 3339 "ll_backend.code_info.c"
                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_51_51 == (MR_Integer) 0);
#line 273 "code_info.m"
                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_51_51;
#line 273 "code_info.m"
                        else
#line 273 "code_info.m"
                          {
#line 273 "code_info.m"
                            MR_Word ll_backend__code_info__V_52_52;
#line 273 "code_info.m"
                            MR_Integer ll_backend__code_info__V_88_88 = (MR_Integer) ll_backend__code_info__V_16_16;
#line 273 "code_info.m"
                            MR_Integer ll_backend__code_info__V_89_89 = (MR_Integer) ll_backend__code_info__V_34_34;

#line 273 "code_info.m"
                            {
#line 273 "code_info.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_52_52, ll_backend__code_info__V_88_88, ll_backend__code_info__V_89_89);
                            }
#line 3363 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_52_52 == (MR_Integer) 0);
#line 273 "code_info.m"
                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_52_52;
#line 273 "code_info.m"
                            else
#line 273 "code_info.m"
                              {
#line 273 "code_info.m"
                                MR_Word ll_backend__code_info__V_53_53;

#line 273 "code_info.m"
                                {
#line 273 "code_info.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_53_53, ll_backend__code_info__V_17_17, ll_backend__code_info__V_35_35);
                                }
#line 3383 "ll_backend.code_info.c"
                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_53_53 == (MR_Integer) 0);
#line 273 "code_info.m"
                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_53_53;
#line 273 "code_info.m"
                                else
#line 273 "code_info.m"
                                  {
#line 273 "code_info.m"
                                    MR_Word ll_backend__code_info__V_54_54;

#line 273 "code_info.m"
                                    {
#line 273 "code_info.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_54_54, ll_backend__code_info__V_18_18, ll_backend__code_info__V_36_36);
                                    }
#line 3403 "ll_backend.code_info.c"
                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_54_54 == (MR_Integer) 0);
#line 273 "code_info.m"
                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_54_54;
#line 273 "code_info.m"
                                    else
#line 273 "code_info.m"
                                      {
#line 273 "code_info.m"
                                        MR_Word ll_backend__code_info__V_55_55;

#line 273 "code_info.m"
                                        {
#line 273 "code_info.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_55_55, ll_backend__code_info__V_19_19, ll_backend__code_info__V_37_37);
                                        }
#line 3423 "ll_backend.code_info.c"
                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_55_55 == (MR_Integer) 0);
#line 273 "code_info.m"
                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_55_55;
#line 273 "code_info.m"
                                        else
#line 273 "code_info.m"
                                          {
#line 273 "code_info.m"
                                            MR_Word ll_backend__code_info__V_56_56;

#line 273 "code_info.m"
                                            {
#line 273 "code_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_2[1], &ll_backend__code_info__V_56_56, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
#line 3443 "ll_backend.code_info.c"
                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_56_56 == (MR_Integer) 0);
#line 273 "code_info.m"
                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_56_56;
#line 273 "code_info.m"
                                            else
#line 273 "code_info.m"
                                              {
#line 273 "code_info.m"
                                                MR_Word ll_backend__code_info__V_57_57;

#line 273 "code_info.m"
                                                {
#line 273 "code_info.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[1], &ll_backend__code_info__V_57_57, ((MR_Box) (ll_backend__code_info__V_21_21)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
#line 3463 "ll_backend.code_info.c"
                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_57_57 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_57_57;
#line 273 "code_info.m"
                                                else
#line 273 "code_info.m"
                                                  {
#line 273 "code_info.m"
                                                    MR_Word ll_backend__code_info__V_58_58;

#line 273 "code_info.m"
                                                    {
#line 273 "code_info.m"
                                                      mercury__counter____Compare____counter_0_0(&ll_backend__code_info__V_58_58, ll_backend__code_info__V_22_22, ll_backend__code_info__V_40_40);
                                                    }
#line 3483 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_58_58 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_58_58;
#line 273 "code_info.m"
                                                    else
#line 273 "code_info.m"
                                                      {
#line 273 "code_info.m"
                                                        MR_Word ll_backend__code_info__V_59_59;

#line 273 "code_info.m"
                                                        {
#line 273 "code_info.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[2], &ll_backend__code_info__V_59_59, ((MR_Box) (ll_backend__code_info__V_23_23)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
#line 3503 "ll_backend.code_info.c"
                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_59_59 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_59_59;
#line 273 "code_info.m"
                                                        else
#line 273 "code_info.m"
                                                          {
#line 273 "code_info.m"
                                                            MR_Word ll_backend__code_info__V_60_60;
#line 273 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_90_90 = (MR_Integer) ll_backend__code_info__V_24_24;
#line 273 "code_info.m"
                                                            MR_Integer ll_backend__code_info__V_91_91 = (MR_Integer) ll_backend__code_info__V_42_42;

#line 273 "code_info.m"
                                                            {
#line 273 "code_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_60_60, ll_backend__code_info__V_90_90, ll_backend__code_info__V_91_91);
                                                            }
#line 3527 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_60_60 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_60_60;
#line 273 "code_info.m"
                                                            else
#line 273 "code_info.m"
                                                              {
#line 273 "code_info.m"
                                                                MR_Word ll_backend__code_info__V_61_61;

#line 273 "code_info.m"
                                                                {
#line 273 "code_info.m"
                                                                  ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__code_info__V_61_61, ll_backend__code_info__V_25_25, ll_backend__code_info__V_43_43);
                                                                }
#line 3547 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_61_61 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_61_61;
#line 273 "code_info.m"
                                                                else
#line 273 "code_info.m"
                                                                  {
#line 273 "code_info.m"
                                                                    MR_Word ll_backend__code_info__V_62_62;

#line 273 "code_info.m"
                                                                    {
#line 273 "code_info.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[3], &ll_backend__code_info__V_62_62, ((MR_Box) (ll_backend__code_info__V_26_26)), ((MR_Box) (ll_backend__code_info__V_44_44)));
                                                                    }
#line 3567 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_62_62 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                    ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                      *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_62_62;
#line 273 "code_info.m"
                                                                    else
#line 273 "code_info.m"
                                                                      {
#line 273 "code_info.m"
                                                                        MR_Word ll_backend__code_info__V_63_63;

#line 273 "code_info.m"
                                                                        {
#line 273 "code_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[4], &ll_backend__code_info__V_63_63, ((MR_Box) (ll_backend__code_info__V_27_27)), ((MR_Box) (ll_backend__code_info__V_45_45)));
                                                                        }
#line 3587 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_63_63 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                        ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                          *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_63_63;
#line 273 "code_info.m"
                                                                        else
#line 273 "code_info.m"
                                                                          {
#line 273 "code_info.m"
                                                                            MR_Word ll_backend__code_info__V_64_64;

#line 273 "code_info.m"
                                                                            {
#line 273 "code_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__code_info__V_64_64, ll_backend__code_info__V_28_28, ll_backend__code_info__V_46_46);
                                                                            }
#line 3607 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_64_64 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                            ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                              *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_64_64;
#line 273 "code_info.m"
                                                                            else
#line 273 "code_info.m"
                                                                              {
#line 273 "code_info.m"
                                                                                MR_Word ll_backend__code_info__V_65_65;

#line 273 "code_info.m"
                                                                                {
#line 273 "code_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[5], &ll_backend__code_info__V_65_65, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_47_47)));
                                                                                }
#line 3627 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_65_65 == (MR_Integer) 0);
#line 273 "code_info.m"
                                                                                ll_backend__code_info__succeeded = !(ll_backend__code_info__succeeded);
#line 273 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 273 "code_info.m"
                                                                                  *ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__V_65_65;
#line 273 "code_info.m"
                                                                                else
#line 273 "code_info.m"
                                                                                  {
#line 273 "code_info.m"
                                                                                    {
#line 273 "code_info.m"
                                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[6], ll_backend__code_info__HeadVar__1_1, ((MR_Box) (ll_backend__code_info__V_30_30)), ((MR_Box) (ll_backend__code_info__V_48_48)));
#line 273 "code_info.m"
                                                                                      return;
                                                                                    }
#line 273 "code_info.m"
                                                                                  }
#line 273 "code_info.m"
                                                                              }
#line 273 "code_info.m"
                                                                          }
#line 273 "code_info.m"
                                                                      }
#line 273 "code_info.m"
                                                                  }
#line 273 "code_info.m"
                                                              }
#line 273 "code_info.m"
                                                          }
#line 273 "code_info.m"
                                                      }
#line 273 "code_info.m"
                                                  }
#line 273 "code_info.m"
                                              }
#line 273 "code_info.m"
                                          }
#line 273 "code_info.m"
                                      }
#line 273 "code_info.m"
                                  }
#line 273 "code_info.m"
                              }
#line 273 "code_info.m"
                          }
#line 273 "code_info.m"
                      }
#line 273 "code_info.m"
                  }
#line 273 "code_info.m"
              }
#line 273 "code_info.m"
          }
#line 201 "code_info.m"
      }
#line 201 "code_info.m"
  }
#line 201 "code_info.m"
}

#line 201 "code_info.m"
MR_bool MR_CALL 
ll_backend__code_info____Unify____code_info_0_0(
#line 201 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 201 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__2_2)
#line 201 "code_info.m"
{
#line 201 "code_info.m"
  {
#line 201 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 201 "code_info.m"
    MR_Integer ll_backend__code_info__CastX_7 = (MR_Integer) ll_backend__code_info__HeadVar__1_1;
#line 201 "code_info.m"
    MR_Integer ll_backend__code_info__CastY_8 = (MR_Integer) ll_backend__code_info__HeadVar__2_2;

#line 201 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_7 == ll_backend__code_info__CastY_8);
#line 201 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 201 "code_info.m"
      ll_backend__code_info__succeeded = MR_TRUE;
#line 201 "code_info.m"
    else
#line 201 "code_info.m"
      {
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "code_info.m"
        MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__CastX_51 = (MR_Integer) ll_backend__code_info__V_3_3;
#line 207 "code_info.m"
        MR_Integer ll_backend__code_info__CastY_52 = (MR_Integer) ll_backend__code_info__V_5_5;

#line 207 "code_info.m"
        ll_backend__code_info__succeeded = (ll_backend__code_info__CastX_51 == ll_backend__code_info__CastY_52);
#line 207 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
          ll_backend__code_info__succeeded = MR_TRUE;
#line 207 "code_info.m"
        else
#line 207 "code_info.m"
          {
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_54_60;
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_55_61;
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_56_62;
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_57_63;
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__TypeInfo_58_64;
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 0)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 1)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 2)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 3)));
#line 207 "code_info.m"
            MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 4)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 5)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 6)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 7)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 8)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 9)));
#line 207 "code_info.m"
            MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 10)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 11)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 13)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_3_3, (MR_Integer) 14)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 207 "code_info.m"
            MR_Integer ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 207 "code_info.m"
            MR_Integer ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 207 "code_info.m"
            MR_Word ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));

#line 3837 "ll_backend.code_info.c"
            {
#line 3839 "ll_backend.code_info.c"
              ll_backend__code_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__code_info__V_9_9, ll_backend__code_info__V_30_30);
            }
#line 207 "code_info.m"
            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
              {
#line 3846 "ll_backend.code_info.c"
                {
#line 3848 "ll_backend.code_info.c"
                  ll_backend__code_info__succeeded = libs__globals____Unify____globals_0_0(ll_backend__code_info__V_10_10, ll_backend__code_info__V_31_31);
                }
#line 207 "code_info.m"
                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                  {
#line 3855 "ll_backend.code_info.c"
                    {
#line 3857 "ll_backend.code_info.c"
                      ll_backend__code_info__succeeded = ll_backend__llds____Unify____exprn_opts_0_0(ll_backend__code_info__V_11_11, ll_backend__code_info__V_32_32);
                    }
#line 207 "code_info.m"
                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                      {
#line 3864 "ll_backend.code_info.c"
                        {
#line 3866 "ll_backend.code_info.c"
                          ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_info__V_12_12, ll_backend__code_info__V_33_33);
                        }
#line 207 "code_info.m"
                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                          {
#line 3873 "ll_backend.code_info.c"
                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_13_13 == ll_backend__code_info__V_34_34);
#line 207 "code_info.m"
                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                              {
#line 3879 "ll_backend.code_info.c"
                                {
#line 3881 "ll_backend.code_info.c"
                                  ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ll_backend__code_info__V_14_14, ll_backend__code_info__V_35_35);
                                }
#line 207 "code_info.m"
                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                  {
#line 3888 "ll_backend.code_info.c"
                                    {
#line 3890 "ll_backend.code_info.c"
                                      ll_backend__code_info__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__code_info__V_15_15, ll_backend__code_info__V_36_36);
                                    }
#line 207 "code_info.m"
                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                      {
#line 3897 "ll_backend.code_info.c"
                                        {
#line 3899 "ll_backend.code_info.c"
                                          ll_backend__code_info__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__code_info__V_16_16, ll_backend__code_info__V_37_37);
                                        }
#line 207 "code_info.m"
                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                          {
#line 3906 "ll_backend.code_info.c"
                                            ll_backend__code_info__TypeInfo_54_60 = (MR_Word) &ll_backend__code_info_scalar_common_1[7];
#line 3908 "ll_backend.code_info.c"
                                            {
#line 3910 "ll_backend.code_info.c"
                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_54_60, ((MR_Box) (ll_backend__code_info__V_17_17)), ((MR_Box) (ll_backend__code_info__V_38_38)));
                                            }
#line 207 "code_info.m"
                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                              {
#line 3917 "ll_backend.code_info.c"
                                                ll_backend__code_info__TypeInfo_55_61 = (MR_Word) &ll_backend__code_info_scalar_common_2[2];
#line 3919 "ll_backend.code_info.c"
                                                {
#line 3921 "ll_backend.code_info.c"
                                                  ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_55_61, ((MR_Box) (ll_backend__code_info__V_18_18)), ((MR_Box) (ll_backend__code_info__V_39_39)));
                                                }
#line 207 "code_info.m"
                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                  {
#line 3928 "ll_backend.code_info.c"
                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_19_19 == ll_backend__code_info__V_40_40);
#line 207 "code_info.m"
                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                      {
#line 3934 "ll_backend.code_info.c"
                                                        ll_backend__code_info__TypeInfo_56_62 = (MR_Word) &ll_backend__code_info_scalar_common_1[8];
#line 3936 "ll_backend.code_info.c"
                                                        {
#line 3938 "ll_backend.code_info.c"
                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_56_62, ((MR_Box) (ll_backend__code_info__V_20_20)), ((MR_Box) (ll_backend__code_info__V_41_41)));
                                                        }
#line 207 "code_info.m"
                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                          {
#line 3945 "ll_backend.code_info.c"
                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_21_21 == ll_backend__code_info__V_42_42);
#line 207 "code_info.m"
                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                              {
#line 3951 "ll_backend.code_info.c"
                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_22_22 == ll_backend__code_info__V_43_43);
#line 207 "code_info.m"
                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                  {
#line 3957 "ll_backend.code_info.c"
                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_23_23 == ll_backend__code_info__V_44_44);
#line 207 "code_info.m"
                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                      {
#line 3963 "ll_backend.code_info.c"
                                                                        ll_backend__code_info__succeeded = (ll_backend__code_info__V_24_24 == ll_backend__code_info__V_45_45);
#line 207 "code_info.m"
                                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                          {
#line 3969 "ll_backend.code_info.c"
                                                                            ll_backend__code_info__succeeded = (ll_backend__code_info__V_25_25 == ll_backend__code_info__V_46_46);
#line 207 "code_info.m"
                                                                            if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                              {
#line 3975 "ll_backend.code_info.c"
                                                                                ll_backend__code_info__succeeded = (ll_backend__code_info__V_26_26 == ll_backend__code_info__V_47_47);
#line 207 "code_info.m"
                                                                                if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                  {
#line 3981 "ll_backend.code_info.c"
                                                                                    ll_backend__code_info__succeeded = (ll_backend__code_info__V_27_27 == ll_backend__code_info__V_48_48);
#line 207 "code_info.m"
                                                                                    if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                      {
#line 3987 "ll_backend.code_info.c"
                                                                                        ll_backend__code_info__TypeInfo_57_63 = (MR_Word) &ll_backend__code_info_scalar_common_1[9];
#line 3989 "ll_backend.code_info.c"
                                                                                        {
#line 3991 "ll_backend.code_info.c"
                                                                                          ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_57_63, ((MR_Box) (ll_backend__code_info__V_28_28)), ((MR_Box) (ll_backend__code_info__V_49_49)));
                                                                                        }
#line 207 "code_info.m"
                                                                                        if (ll_backend__code_info__succeeded)
#line 207 "code_info.m"
                                                                                          {
#line 3998 "ll_backend.code_info.c"
                                                                                            ll_backend__code_info__TypeInfo_58_64 = (MR_Word) &ll_backend__code_info_scalar_common_2[4];
#line 4000 "ll_backend.code_info.c"
                                                                                            {
#line 4002 "ll_backend.code_info.c"
                                                                                              ll_backend__code_info__succeeded = mercury__builtin__unify_2_p_0(ll_backend__code_info__TypeInfo_58_64, ((MR_Box) (ll_backend__code_info__V_29_29)), ((MR_Box) (ll_backend__code_info__V_50_50)));
                                                                                            }
#line 207 "code_info.m"
                                                                                          }
#line 207 "code_info.m"
                                                                                      }
#line 207 "code_info.m"
                                                                                  }
#line 207 "code_info.m"
                                                                              }
#line 207 "code_info.m"
                                                                          }
#line 207 "code_info.m"
                                                                      }
#line 207 "code_info.m"
                                                                  }
#line 207 "code_info.m"
                                                              }
#line 207 "code_info.m"
                                                          }
#line 207 "code_info.m"
                                                      }
#line 207 "code_info.m"
                                                  }
#line 207 "code_info.m"
                                              }
#line 207 "code_info.m"
                                          }
#line 207 "code_info.m"
                                      }
#line 207 "code_info.m"
                                  }
#line 207 "code_info.m"
                              }
#line 207 "code_info.m"
                          }
#line 207 "code_info.m"
                      }
#line 207 "code_info.m"
                  }
#line 207 "code_info.m"
              }
#line 207 "code_info.m"
          }
#line 201 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 4049 "ll_backend.code_info.c"
          {
#line 4051 "ll_backend.code_info.c"
            return ll_backend__code_info__succeeded = ll_backend__code_info____Unify____code_info_persistent_0_0(ll_backend__code_info__V_4_4, ll_backend__code_info__V_6_6);
          }
#line 201 "code_info.m"
      }
#line 201 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 201 "code_info.m"
  }
#line 201 "code_info.m"
}

#line 1061 "code_info.m"
MR_Integer MR_CALL 
ll_backend__code_info__round_det_stack_frame_size_2_f_0(
#line 1061 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 1061 "code_info.m"
  MR_Integer ll_backend__code_info__NumSlots_5)
#line 1061 "code_info.m"
{
#line 1091 "code_info.m"
  {
#line 1091 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1091 "code_info.m"
    MR_Integer ll_backend__code_info__NumSlotsRoundup_6;
#line 1086 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_7;
#line 1086 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 1086 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 568 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 568 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;

#line 1086 "code_info.m"
    {
#line 1086 "code_info.m"
      ll_backend__code_info__succeeded = mercury__int__odd_1_p_0(ll_backend__code_info__NumSlots_5);
    }
#line 1086 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1086 "code_info.m"
      {
#line 568 "code_info.m"
        ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 568 "code_info.m"
        ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 568 "code_info.m"
        ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 568 "code_info.m"
        ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 568 "code_info.m"
        ll_backend__code_info__ExprnOpts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 568 "code_info.m"
        ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 568 "code_info.m"
        ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 568 "code_info.m"
        ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 568 "code_info.m"
        ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 568 "code_info.m"
        ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 568 "code_info.m"
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 568 "code_info.m"
        ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 568 "code_info.m"
        ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 568 "code_info.m"
        ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 568 "code_info.m"
        ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 568 "code_info.m"
        ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 568 "code_info.m"
        ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 1088 "code_info.m"
        {
#line 1088 "code_info.m"
          ll_backend__code_info__V_8_8 = ll_backend__llds__get_det_stack_float_width_1_f_0(ll_backend__code_info__ExprnOpts_7);
        }
#line 1088 "code_info.m"
        ll_backend__code_info__succeeded = (ll_backend__code_info__V_8_8 == (MR_Integer) 1);
#line 1086 "code_info.m"
      }
#line 1091 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1090 "code_info.m"
      {
#line 1090 "code_info.m"
        ll_backend__code_info__NumSlotsRoundup_6 = (ll_backend__code_info__NumSlots_5 + (MR_Integer) 1);
#line 1090 "code_info.m"
      }
#line 1091 "code_info.m"
    else
#line 1092 "code_info.m"
      ll_backend__code_info__NumSlotsRoundup_6 = ll_backend__code_info__NumSlots_5;
#line 1091 "code_info.m"
    return ll_backend__code_info__NumSlotsRoundup_6;
#line 1091 "code_info.m"
  }
#line 1061 "code_info.m"
}

#line 1056 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_total_stackslot_count_2_p_0(
#line 1056 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 1056 "code_info.m"
  MR_Integer * ll_backend__code_info__NumSlots_4)
#line 1056 "code_info.m"
{
#line 1079 "code_info.m"
  {
#line 1079 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1079 "code_info.m"
    MR_Integer ll_backend__code_info__SlotsForVars_5;
#line 1079 "code_info.m"
    MR_Integer ll_backend__code_info__SlotsForTemps_6;
#line 1079 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 1079 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 584 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_39_39;
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_40_40;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_49_49;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;

#line 584 "code_info.m"
    ll_backend__code_info__SlotsForVars_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 584 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 584 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 584 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 620 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 620 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 620 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 620 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 620 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 620 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 620 "code_info.m"
    ll_backend__code_info__SlotsForTemps_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 620 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 620 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 620 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 620 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 620 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 620 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
#line 620 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 620 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 620 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
#line 620 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
#line 620 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
#line 1082 "code_info.m"
    *ll_backend__code_info__NumSlots_4 = (ll_backend__code_info__SlotsForVars_5 + ll_backend__code_info__SlotsForTemps_6);
#line 1079 "code_info.m"
  }
#line 1056 "code_info.m"
}

#line 1050 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_variable_slot_3_p_0(
#line 1050 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 1050 "code_info.m"
  MR_Word ll_backend__code_info__Var_5,
#line 1050 "code_info.m"
  MR_Word * ll_backend__code_info__Slot_6)
#line 1050 "code_info.m"
{
#line 1067 "code_info.m"
  {
#line 1067 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1067 "code_info.m"
    MR_Word ll_backend__code_info__StackSlots_7;
#line 1067 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_28;
#line 1067 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 2)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 3)));
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 4)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 5)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_42_42;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 1071 "code_info.m"
    MR_Word ll_backend__code_info__SlotLocn_8;
#line 1069 "code_info.m"
    MR_Box ll_backend__code_info__conv0_SlotLocn_8;

#line 576 "code_info.m"
    ll_backend__code_info__ProcInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 6)));
#line 576 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 7)));
#line 576 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 8)));
#line 576 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 9)));
#line 576 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 10)));
#line 576 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 11)));
#line 576 "code_info.m"
    ll_backend__code_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 13)));
#line 576 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_31_31, (MR_Integer) 14)));
#line 812 "code_info.m"
    {
#line 812 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_28, &ll_backend__code_info__StackSlots_7);
    }
#line 1069 "code_info.m"
    {
#line 1069 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_7, ((MR_Box) (ll_backend__code_info__Var_5)), &ll_backend__code_info__conv0_SlotLocn_8);
    }
#line 1069 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1069 "code_info.m"
      {
#line 1069 "code_info.m"
        ll_backend__code_info__SlotLocn_8 = ((MR_Word) ll_backend__code_info__conv0_SlotLocn_8);
#line 1069 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 1069 "code_info.m"
      }
#line 1071 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 1070 "code_info.m"
      {
#line 1070 "code_info.m"
        *ll_backend__code_info__Slot_6 = ll_backend__llds__stack_slot_to_lval_1_f_0(ll_backend__code_info__SlotLocn_8);
      }
#line 1071 "code_info.m"
    else
#line 1072 "code_info.m"
      {
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__Name_9;
#line 1072 "code_info.m"
        MR_Integer ll_backend__code_info__Num_10;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__NumStr_11;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__Str_12;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__V_14_14;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__V_15_15;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__V_17_17;
#line 1072 "code_info.m"
        MR_String ll_backend__code_info__V_19_19;
#line 1072 "code_info.m"
        MR_Word ll_backend__code_info__Varset_56;
#line 1072 "code_info.m"
        MR_Word ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 0)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 1)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 2)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 3)));
#line 580 "code_info.m"
        MR_Integer ll_backend__code_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 4)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 5)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 6)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 7)));
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_70_70;
#line 580 "code_info.m"
        MR_Integer ll_backend__code_info__V_71_71;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_72_72;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_73_73;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_74_74;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_75_75;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_76_76;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_77_77;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_78_78;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_79_79;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_80_80;
#line 580 "code_info.m"
        MR_Word ll_backend__code_info__V_81_81;

#line 580 "code_info.m"
        ll_backend__code_info__Varset_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 8)));
#line 580 "code_info.m"
        ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 9)));
#line 580 "code_info.m"
        ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 10)));
#line 580 "code_info.m"
        ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 11)));
#line 580 "code_info.m"
        ll_backend__code_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 580 "code_info.m"
        ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 13)));
#line 580 "code_info.m"
        ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, (MR_Integer) 14)));
#line 884 "code_info.m"
        {
#line 884 "code_info.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_56, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_9);
        }
#line 1073 "code_info.m"
        {
#line 1073 "code_info.m"
          mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Var_5, &ll_backend__code_info__Num_10);
        }
#line 1074 "code_info.m"
        {
#line 1074 "code_info.m"
          mercury__string__int_to_string_2_p_0(ll_backend__code_info__Num_10, &ll_backend__code_info__NumStr_11);
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          ll_backend__code_info__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__NumStr_11, (MR_String) ") not found");
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          ll_backend__code_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__code_info__V_19_19);
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          ll_backend__code_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\' ", ll_backend__code_info__V_17_17);
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          ll_backend__code_info__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__code_info__Name_9, ll_backend__code_info__V_15_15);
        }
#line 1075 "code_info.m"
        {
#line 1075 "code_info.m"
          ll_backend__code_info__Str_12 = mercury__string__f_43_43_2_f_0((MR_String) "variable \140", ll_backend__code_info__V_14_14);
        }
#line 1076 "code_info.m"
        {
#line 1076 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_variable_slot\'/3", ll_backend__code_info__Str_12);
#line 1076 "code_info.m"
          return;
        }
#line 1072 "code_info.m"
      }
#line 1067 "code_info.m"
  }
#line 1050 "code_info.m"
}

#line 803 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_out_of_line_code_3_p_0(
#line 803 "code_info.m"
  MR_Word ll_backend__code_info__NewCode_4,
#line 803 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 803 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 803 "code_info.m"
{
#line 1035 "code_info.m"
  {
#line 1035 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__Code0_6;
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__Code_7;
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 1035 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 1036 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 1036 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 1036 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 1036 "code_info.m"
    MR_Integer ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 15)));
#line 1036 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 16)));
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 1038 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37;
#line 1038 "code_info.m"
    MR_Integer ll_backend__code_info__V_38_38;
#line 1038 "code_info.m"
    MR_Integer ll_backend__code_info__V_39_39;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 1038 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 1038 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;

#line 1036 "code_info.m"
    ll_backend__code_info__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 17)));
#line 1037 "code_info.m"
    {
#line 1037 "code_info.m"
      ll_backend__code_info__Code_7 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__code_info__Code0_6, ll_backend__code_info__NewCode_4);
    }
#line 1038 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 15)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 16)));
#line 1038 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 17)));
#line 1038 "code_info.m"
    {
#line 1038 "code_info.m"
      ll_backend__code_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 1) = ((MR_Box) (ll_backend__code_info__V_34_34));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 2) = ((MR_Box) (ll_backend__code_info__V_35_35));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 3) = ((MR_Box) (ll_backend__code_info__V_36_36));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 4) = ((MR_Box) (ll_backend__code_info__V_37_37));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 5) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 6) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 7) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 8) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 9) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 10) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 11) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 12) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 13) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 14) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 15) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 16) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, 17) = ((MR_Box) (ll_backend__code_info__Code_7));
#line 1038 "code_info.m"
    }
#line 1038 "code_info.m"
    {
#line 1038 "code_info.m"
      MR_Word base;
#line 1038 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 1038 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 1038 "code_info.m"
    }
#line 1035 "code_info.m"
  }
#line 803 "code_info.m"
}

#line 800 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_containing_goal_map_2_p_0(
#line 800 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 800 "code_info.m"
  MR_Word * ll_backend__code_info__ContainingGoalMap_4)
#line 800 "code_info.m"
{
#line 1026 "code_info.m"
  {
#line 1026 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1026 "code_info.m"
    MR_Word ll_backend__code_info__MaybeContainingGoalMap_5;
#line 1026 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 602 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 602 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;

#line 602 "code_info.m"
    ll_backend__code_info__MaybeContainingGoalMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 602 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 1030 "code_info.m"
    if ((ll_backend__code_info__MaybeContainingGoalMap_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "code_info.m"
      {
#line 1032 "code_info.m"
        {
#line 1032 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.get_containing_goal_map\'/2", (MR_String) "no map");
#line 1032 "code_info.m"
          return;
        }
#line 1031 "code_info.m"
      }
#line 1030 "code_info.m"
    else
#line 1029 "code_info.m"
      *ll_backend__code_info__ContainingGoalMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeContainingGoalMap_5, (MR_Integer) 0)));
#line 1026 "code_info.m"
  }
#line 800 "code_info.m"
}

#line 798 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__should_add_region_ops_2_f_0(
#line 798 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4,
#line 798 "code_info.m"
  MR_Word ll_backend__code_info___GoalInfo_5)
#line 798 "code_info.m"
{
#line 593 "code_info.m"
  {
#line 593 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__AddRegionOps_6;

#line 593 "code_info.m"
    {
#line 593 "code_info.m"
      return ll_backend__code_info__AddRegionOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_114_101_103_105_111_110_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
#line 593 "code_info.m"
    return ll_backend__code_info__AddRegionOps_6;
#line 593 "code_info.m"
  }
#line 798 "code_info.m"
}

#line 793 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__should_add_trail_ops_2_f_0(
#line 793 "code_info.m"
  MR_Word ll_backend__code_info__CodeInfo_4,
#line 793 "code_info.m"
  MR_Word ll_backend__code_info___GoalInfo_5)
#line 793 "code_info.m"
{
#line 589 "code_info.m"
  {
#line 589 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__AddTrailOps_6;

#line 589 "code_info.m"
    {
#line 589 "code_info.m"
      return ll_backend__code_info__AddTrailOps_6 = ll_backend__code_info__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_104_111_117_108_100_95_97_100_100_95_116_114_97_105_108_95_111_112_115_95_95_91_50_93_95_48_2_f_0(ll_backend__code_info__CodeInfo_4);
    }
#line 589 "code_info.m"
    return ll_backend__code_info__AddTrailOps_6;
#line 589 "code_info.m"
  }
#line 793 "code_info.m"
}

#line 787 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_alloc_site_info_6_p_0(
#line 787 "code_info.m"
  MR_Word ll_backend__code_info__Context_7,
#line 787 "code_info.m"
  MR_String ll_backend__code_info__Type_8,
#line 787 "code_info.m"
  MR_Integer ll_backend__code_info__Size_9,
#line 787 "code_info.m"
  MR_Word * ll_backend__code_info__AllocId_10,
#line 787 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_16,
#line 787 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_17)
#line 787 "code_info.m"
{
#line 1006 "code_info.m"
  {
#line 1006 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_12;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__AllocSite_13;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__AllocSites0_14;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__AllocSites_15;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 1006 "code_info.m"
    MR_Word ll_backend__code_info__V_72_72;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 0)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 1)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 2)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 3)));
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 4)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 5)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 6)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_33_33;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_52_52;
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_53_53;
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_54_54;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_62_62;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_77_77;
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_78_78;
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_79_79;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_81_81;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_83_83;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_84_84;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_85_85;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_87_87;
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_88_88;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_89_89;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_90_90;
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_86_86;

#line 578 "code_info.m"
    ll_backend__code_info__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 7)));
#line 578 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 8)));
#line 578 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 9)));
#line 578 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 10)));
#line 578 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 11)));
#line 578 "code_info.m"
    ll_backend__code_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 13)));
#line 578 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_22_22, (MR_Integer) 14)));
#line 1008 "code_info.m"
    {
#line 1008 "code_info.m"
      ll_backend__code_info__AllocSite_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 0) = ((MR_Box) (ll_backend__code_info__ProcLabel_12));
#line 1008 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 1) = ((MR_Box) (ll_backend__code_info__Context_7));
#line 1008 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 2) = ((MR_Box) (ll_backend__code_info__Type_8));
#line 1008 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__AllocSite_13, 3) = ((MR_Box) (ll_backend__code_info__Size_9));
#line 1008 "code_info.m"
    }
#line 1009 "code_info.m"
    *ll_backend__code_info__AllocId_10 = (MR_Word) ll_backend__code_info__AllocSite_13;
#line 632 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
#line 632 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
#line 632 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
#line 632 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
#line 632 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
#line 632 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
#line 632 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
#line 632 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
#line 632 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
#line 632 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
#line 632 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
#line 632 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
#line 632 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)));
#line 632 "code_info.m"
    ll_backend__code_info__AllocSites0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
#line 632 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
#line 632 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 15)));
#line 632 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 16)));
#line 632 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 17)));
#line 1011 "code_info.m"
    {
#line 1011 "code_info.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ((MR_Box) (ll_backend__code_info__AllocSite_13)), ll_backend__code_info__AllocSites0_14, &ll_backend__code_info__AllocSites_15);
    }
#line 667 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 0)));
#line 667 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_16, (MR_Integer) 1)));
#line 667 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 0)));
#line 667 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 1)));
#line 667 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 2)));
#line 667 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 3)));
#line 667 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 4)));
#line 667 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 5)));
#line 667 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 6)));
#line 667 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 7)));
#line 667 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 8)));
#line 667 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 9)));
#line 667 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 10)));
#line 667 "code_info.m"
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 11)));
#line 667 "code_info.m"
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 12)));
#line 667 "code_info.m"
    ll_backend__code_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 13)));
#line 667 "code_info.m"
    ll_backend__code_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 14)));
#line 667 "code_info.m"
    ll_backend__code_info__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 15)));
#line 667 "code_info.m"
    ll_backend__code_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 16)));
#line 667 "code_info.m"
    ll_backend__code_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_70_70, (MR_Integer) 17)));
#line 667 "code_info.m"
    {
#line 667 "code_info.m"
      ll_backend__code_info__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 0) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 1) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 2) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 3) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 4) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 5) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 6) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 7) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 8) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 9) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 10) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 11) = ((MR_Box) (ll_backend__code_info__V_84_84));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 12) = ((MR_Box) (ll_backend__code_info__V_85_85));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 13) = ((MR_Box) (ll_backend__code_info__AllocSites_15));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 14) = ((MR_Box) (ll_backend__code_info__V_87_87));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 15) = ((MR_Box) (ll_backend__code_info__V_88_88));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 16) = ((MR_Box) (ll_backend__code_info__V_89_89));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_71_71, 17) = ((MR_Box) (ll_backend__code_info__V_90_90));
#line 667 "code_info.m"
    }
#line 667 "code_info.m"
    {
#line 667 "code_info.m"
      MR_Word base;
#line 667 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_17 = base;
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 667 "code_info.m"
    }
#line 1006 "code_info.m"
  }
#line 787 "code_info.m"
}

#line 784 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_vector_static_cell_5_p_0(
#line 784 "code_info.m"
  MR_Word ll_backend__code_info__Types_6,
#line 784 "code_info.m"
  MR_Word ll_backend__code_info__Vector_7,
#line 784 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_8,
#line 784 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_12,
#line 784 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_13)
#line 784 "code_info.m"
{
#line 1000 "code_info.m"
  {
#line 1000 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_10;
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_11;
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 1000 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 1)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 2)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 3)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 4)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 5)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 6)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 7)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 8)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 9)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 10)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 11)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_33_33;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_49_49;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_50_50;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;

#line 630 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 12)));
#line 630 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 13)));
#line 630 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 14)));
#line 630 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 15)));
#line 630 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 16)));
#line 630 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_17_17, (MR_Integer) 17)));
#line 1002 "code_info.m"
    {
#line 1002 "code_info.m"
      ll_backend__global_data__add_vector_static_cell_5_p_0(ll_backend__code_info__Types_6, ll_backend__code_info__Vector_7, ll_backend__code_info__DataAddr_8, ll_backend__code_info__StaticCellInfo0_10, &ll_backend__code_info__StaticCellInfo_11);
    }
#line 665 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_12, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
#line 665 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
#line 665 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
#line 665 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
#line 665 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
#line 665 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
#line 665 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
#line 665 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
#line 665 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
#line 665 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
#line 665 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
#line 665 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
#line 665 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
#line 665 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
#line 665 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
#line 665 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      ll_backend__code_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 0) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 1) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 2) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 3) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 4) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 5) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 6) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 7) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 8) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 9) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 10) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 11) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_11));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 13) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 14) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 15) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 16) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_42_42, 17) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 665 "code_info.m"
    }
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      MR_Word base;
#line 665 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_13 = base;
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 665 "code_info.m"
    }
#line 1000 "code_info.m"
  }
#line 784 "code_info.m"
}

#line 781 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_natural_types_4_p_0(
#line 781 "code_info.m"
  MR_Word ll_backend__code_info__Rvals_5,
#line 781 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_6,
#line 781 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 781 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 781 "code_info.m"
{
#line 994 "code_info.m"
  {
#line 994 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_9;
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 994 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;

#line 630 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
#line 630 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 630 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 630 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
#line 630 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
#line 630 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
#line 996 "code_info.m"
    {
#line 996 "code_info.m"
      ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(ll_backend__code_info__Rvals_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
#line 665 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 665 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 665 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 665 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 665 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 665 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 665 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 665 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 665 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 665 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 665 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
#line 665 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 665 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 665 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
#line 665 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
#line 665 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 665 "code_info.m"
    }
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      MR_Word base;
#line 665 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 665 "code_info.m"
    }
#line 994 "code_info.m"
  }
#line 781 "code_info.m"
}

#line 778 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_scalar_static_cell_4_p_0(
#line 778 "code_info.m"
  MR_Word ll_backend__code_info__RvalsTypes_5,
#line 778 "code_info.m"
  MR_Word * ll_backend__code_info__DataAddr_6,
#line 778 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 778 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 778 "code_info.m"
{
#line 988 "code_info.m"
  {
#line 988 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo0_8;
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__StaticCellInfo_9;
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 988 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;

#line 630 "code_info.m"
    ll_backend__code_info__StaticCellInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)));
#line 630 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 630 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 630 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 15)));
#line 630 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 16)));
#line 630 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 17)));
#line 990 "code_info.m"
    {
#line 990 "code_info.m"
      ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__code_info__RvalsTypes_5, ll_backend__code_info__DataAddr_6, ll_backend__code_info__StaticCellInfo0_8, &ll_backend__code_info__StaticCellInfo_9);
    }
#line 665 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 665 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 665 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 665 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 665 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 665 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 665 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 665 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 665 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 665 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 665 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 665 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 665 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)));
#line 665 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 665 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 665 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 15)));
#line 665 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 16)));
#line 665 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 17)));
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      ll_backend__code_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 0) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 1) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 2) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 3) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 4) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 5) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 6) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 7) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 8) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 9) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 10) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 11) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_9));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 13) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 14) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 15) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 16) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_40_40, 17) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 665 "code_info.m"
    }
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      MR_Word base;
#line 665 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 665 "code_info.m"
    }
#line 988 "code_info.m"
  }
#line 778 "code_info.m"
}

#line 775 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_threadscope_rev_string_table_3_p_0(
#line 775 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 775 "code_info.m"
  MR_Word * ll_backend__code_info__RevTable_5,
#line 775 "code_info.m"
  MR_Integer * ll_backend__code_info__TableSize_6)
#line 775 "code_info.m"
{
#line 984 "code_info.m"
  {
#line 984 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 984 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 985 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 985 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 985 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 985 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 985 "code_info.m"
    *ll_backend__code_info__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 985 "code_info.m"
    *ll_backend__code_info__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 985 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 984 "code_info.m"
  }
#line 775 "code_info.m"
}

#line 772 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_threadscope_string_4_p_0(
#line 772 "code_info.m"
  MR_String ll_backend__code_info__String_5,
#line 772 "code_info.m"
  MR_Integer * ll_backend__code_info__SlotNum_6,
#line 772 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_15,
#line 772 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_16)
#line 772 "code_info.m"
{
#line 973 "code_info.m"
  {
#line 973 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__Persistent0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 1)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__RevTable0_10;
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__Size_11;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__RevTable_12;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__Persistent_14;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_15, (MR_Integer) 0)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 0)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 1)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 2)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 3)));
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 4)));
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 5)));
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 6)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 7)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 8)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 9)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 10)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 11)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 12)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 13)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 14)));
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_58_58;
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 973 "code_info.m"
    MR_Integer ll_backend__code_info__V_60_60;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 973 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;

#line 975 "code_info.m"
    *ll_backend__code_info__SlotNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 15)));
#line 975 "code_info.m"
    ll_backend__code_info__RevTable0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 16)));
#line 975 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent0_8, (MR_Integer) 17)));
#line 978 "code_info.m"
    ll_backend__code_info__Size_11 = (*ll_backend__code_info__SlotNum_6 + (MR_Integer) 1);
#line 979 "code_info.m"
    {
#line 979 "code_info.m"
      ll_backend__code_info__RevTable_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 0) = ((MR_Box) (ll_backend__code_info__String_5));
#line 979 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__RevTable_12, 1) = ((MR_Box) (ll_backend__code_info__RevTable0_10));
#line 979 "code_info.m"
    }
#line 980 "code_info.m"
    ll_backend__code_info__V_54_54 = ll_backend__code_info__V_20_20;
#line 980 "code_info.m"
    ll_backend__code_info__V_55_55 = ll_backend__code_info__V_21_21;
#line 980 "code_info.m"
    ll_backend__code_info__V_56_56 = ll_backend__code_info__V_22_22;
#line 980 "code_info.m"
    ll_backend__code_info__V_57_57 = ll_backend__code_info__V_23_23;
#line 980 "code_info.m"
    ll_backend__code_info__V_58_58 = ll_backend__code_info__V_24_24;
#line 980 "code_info.m"
    ll_backend__code_info__V_59_59 = ll_backend__code_info__V_25_25;
#line 980 "code_info.m"
    ll_backend__code_info__V_60_60 = ll_backend__code_info__V_26_26;
#line 980 "code_info.m"
    ll_backend__code_info__V_61_61 = ll_backend__code_info__V_27_27;
#line 980 "code_info.m"
    ll_backend__code_info__V_62_62 = ll_backend__code_info__V_28_28;
#line 980 "code_info.m"
    ll_backend__code_info__V_63_63 = ll_backend__code_info__V_29_29;
#line 980 "code_info.m"
    ll_backend__code_info__V_64_64 = ll_backend__code_info__V_30_30;
#line 980 "code_info.m"
    ll_backend__code_info__V_65_65 = ll_backend__code_info__V_31_31;
#line 980 "code_info.m"
    ll_backend__code_info__V_66_66 = ll_backend__code_info__V_32_32;
#line 980 "code_info.m"
    ll_backend__code_info__V_67_67 = ll_backend__code_info__V_33_33;
#line 980 "code_info.m"
    ll_backend__code_info__V_68_68 = ll_backend__code_info__V_34_34;
#line 980 "code_info.m"
    ll_backend__code_info__V_71_71 = ll_backend__code_info__V_36_36;
#line 981 "code_info.m"
    {
#line 981 "code_info.m"
      ll_backend__code_info__Persistent_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 0) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 1) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 2) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 3) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 4) = ((MR_Box) (ll_backend__code_info__V_58_58));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 5) = ((MR_Box) (ll_backend__code_info__V_59_59));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 6) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 7) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 8) = ((MR_Box) (ll_backend__code_info__V_62_62));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 9) = ((MR_Box) (ll_backend__code_info__V_63_63));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 10) = ((MR_Box) (ll_backend__code_info__V_64_64));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 11) = ((MR_Box) (ll_backend__code_info__V_65_65));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 12) = ((MR_Box) (ll_backend__code_info__V_66_66));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 13) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 14) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 15) = ((MR_Box) (ll_backend__code_info__Size_11));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 16) = ((MR_Box) (ll_backend__code_info__RevTable_12));
#line 981 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__Persistent_14, 17) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 981 "code_info.m"
    }
#line 982 "code_info.m"
    {
#line 982 "code_info.m"
      MR_Word base;
#line 982 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 982 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_16 = base;
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 982 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__Persistent_14));
#line 982 "code_info.m"
    }
#line 973 "code_info.m"
  }
#line 772 "code_info.m"
}

#line 769 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_closure_layout_3_p_0(
#line 769 "code_info.m"
  MR_Word ll_backend__code_info__ClosureLayout_4,
#line 769 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_7,
#line 769 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_8)
#line 769 "code_info.m"
{
#line 969 "code_info.m"
  {
#line 969 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__ClosureLayouts_6;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 1)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_7, (MR_Integer) 0)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 969 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 969 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 969 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 969 "code_info.m"
    MR_Integer ll_backend__code_info__V_29_29;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 969 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;

#line 628 "code_info.m"
    ll_backend__code_info__ClosureLayouts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 628 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 628 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 628 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 628 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 628 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 628 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 628 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 971 "code_info.m"
    {
#line 971 "code_info.m"
      ll_backend__code_info__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 0) = ((MR_Box) (ll_backend__code_info__ClosureLayout_4));
#line 971 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__V_9_9, 1) = ((MR_Box) (ll_backend__code_info__ClosureLayouts_6));
#line 971 "code_info.m"
    }
#line 661 "code_info.m"
    {
#line 661 "code_info.m"
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_9_9));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 661 "code_info.m"
    }
#line 661 "code_info.m"
    {
#line 661 "code_info.m"
      MR_Word base;
#line 661 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_8 = base;
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 661 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 661 "code_info.m"
    }
#line 969 "code_info.m"
  }
#line 769 "code_info.m"
}

#line 766 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_resume_layout_for_label_4_p_0(
#line 766 "code_info.m"
  MR_Word ll_backend__code_info__Label_5,
#line 766 "code_info.m"
  MR_Word ll_backend__code_info__LayoutInfo_6,
#line 766 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 766 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
#line 766 "code_info.m"
{
#line 939 "code_info.m"
  {
#line 939 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__Internals0_8;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__Resume_9;
#line 939 "code_info.m"
    MR_Integer ll_backend__code_info__LabelNum_10;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__Internals_20;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 939 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 1)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_47_47;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_48_48;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 958 "code_info.m"
    MR_Word ll_backend__code_info__Internal0_14;
#line 948 "code_info.m"
    MR_Box ll_backend__code_info__conv0_Internal0_14;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_72_72;
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_73_73;
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_74_74;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_81_81;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_83_83;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_84_84;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_85_85;
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;

#line 611 "code_info.m"
    ll_backend__code_info__Internals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 2)));
#line 611 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 3)));
#line 611 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 4)));
#line 611 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 5)));
#line 611 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 6)));
#line 611 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 7)));
#line 611 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 8)));
#line 611 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 9)));
#line 611 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 10)));
#line 611 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 11)));
#line 611 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 12)));
#line 611 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 13)));
#line 611 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 14)));
#line 611 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 15)));
#line 611 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 16)));
#line 611 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_41_41, (MR_Integer) 17)));
#line 941 "code_info.m"
    {
#line 941 "code_info.m"
      ll_backend__code_info__Resume_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 941 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Resume_9, 0) = ((MR_Box) (ll_backend__code_info__LayoutInfo_6));
#line 941 "code_info.m"
    }
#line 944 "code_info.m"
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_5)) == (MR_mktag((MR_Integer) 1))))
#line 945 "code_info.m"
      {
#line 946 "code_info.m"
        {
#line 946 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "entry");
#line 946 "code_info.m"
          return;
        }
#line 945 "code_info.m"
      }
#line 944 "code_info.m"
    else
#line 943 "code_info.m"
      {
#line 943 "code_info.m"
        MR_Word ll_backend__code_info__V_11_11;

#line 943 "code_info.m"
        ll_backend__code_info__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 0)));
#line 943 "code_info.m"
        ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_5, (MR_Integer) 1)));
#line 943 "code_info.m"
      }
#line 948 "code_info.m"
    {
#line 948 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_8, ll_backend__code_info__LabelNum_10, &ll_backend__code_info__conv0_Internal0_14);
    }
#line 948 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 948 "code_info.m"
      {
#line 948 "code_info.m"
        ll_backend__code_info__Internal0_14 = ((MR_Word) ll_backend__code_info__conv0_Internal0_14);
#line 948 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 948 "code_info.m"
      }
#line 958 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 949 "code_info.m"
      {
#line 949 "code_info.m"
        MR_Word ll_backend__code_info__Exec_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 0)));
#line 949 "code_info.m"
        MR_Word ll_backend__code_info__Resume0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 1)));
#line 949 "code_info.m"
        MR_Word ll_backend__code_info__Return_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_14, (MR_Integer) 2)));
#line 949 "code_info.m"
        MR_Word ll_backend__code_info__Internal_19;

#line 952 "code_info.m"
        if ((ll_backend__code_info__Resume0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "code_info.m"
          {
#line 951 "code_info.m"
          }
#line 952 "code_info.m"
        else
#line 953 "code_info.m"
          {
#line 954 "code_info.m"
            {
#line 954 "code_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_resume_layout_for_label\'/4", (MR_String) "already known label");
#line 954 "code_info.m"
              return;
            }
#line 953 "code_info.m"
          }
#line 956 "code_info.m"
        {
#line 956 "code_info.m"
          ll_backend__code_info__Internal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 956 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 0) = ((MR_Box) (ll_backend__code_info__Exec_15));
#line 956 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
#line 956 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_19, 2) = ((MR_Box) (ll_backend__code_info__Return_17));
#line 956 "code_info.m"
        }
#line 957 "code_info.m"
        {
#line 957 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_19)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
#line 949 "code_info.m"
      }
#line 958 "code_info.m"
    else
#line 959 "code_info.m"
      {
#line 959 "code_info.m"
        MR_Word ll_backend__code_info__Internal_32;

#line 959 "code_info.m"
        {
#line 959 "code_info.m"
          ll_backend__code_info__Internal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 959 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 1) = ((MR_Box) (ll_backend__code_info__Resume_9));
#line 959 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "code_info.m"
        }
#line 960 "code_info.m"
        {
#line 960 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_10, ((MR_Box) (ll_backend__code_info__Internal_32)), ll_backend__code_info__Internals0_8, &ll_backend__code_info__Internals_20);
        }
#line 959 "code_info.m"
      }
#line 646 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 0)));
#line 646 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_21, (MR_Integer) 1)));
#line 646 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 0)));
#line 646 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 1)));
#line 646 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 2)));
#line 646 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 3)));
#line 646 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 4)));
#line 646 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 5)));
#line 646 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 6)));
#line 646 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 7)));
#line 646 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 8)));
#line 646 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 9)));
#line 646 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 10)));
#line 646 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 11)));
#line 646 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 12)));
#line 646 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 13)));
#line 646 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 14)));
#line 646 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 15)));
#line 646 "code_info.m"
    ll_backend__code_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 16)));
#line 646 "code_info.m"
    ll_backend__code_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_65_65, (MR_Integer) 17)));
#line 646 "code_info.m"
    {
#line 646 "code_info.m"
      ll_backend__code_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 0) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 1) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 2) = ((MR_Box) (ll_backend__code_info__Internals_20));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 3) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 4) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 5) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 6) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 7) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 8) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 9) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 10) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 11) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 12) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 13) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 14) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 15) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 16) = ((MR_Box) (ll_backend__code_info__V_84_84));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_66_66, 17) = ((MR_Box) (ll_backend__code_info__V_85_85));
#line 646 "code_info.m"
    }
#line 646 "code_info.m"
    {
#line 646 "code_info.m"
      MR_Word base;
#line 646 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_66_66));
#line 646 "code_info.m"
    }
#line 939 "code_info.m"
  }
#line 766 "code_info.m"
}

#line 763 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_next_closure_seq_no_3_p_0(
#line 763 "code_info.m"
  MR_Integer * ll_backend__code_info__SeqNo_4,
#line 763 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 763 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 763 "code_info.m"
{
#line 964 "code_info.m"
  {
#line 964 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__C0_6;
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__C_7;
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 964 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 626 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 626 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 626 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 626 "code_info.m"
    MR_Integer ll_backend__code_info__V_29_29;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 626 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 659 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 659 "code_info.m"
    MR_Integer ll_backend__code_info__V_45_45;
#line 659 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 659 "code_info.m"
    MR_Integer ll_backend__code_info__V_55_55;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 659 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;

#line 626 "code_info.m"
    ll_backend__code_info__C0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 626 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 626 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 626 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 626 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 626 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 626 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 626 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 626 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 966 "code_info.m"
    {
#line 966 "code_info.m"
      mercury__counter__allocate_3_p_0(ll_backend__code_info__SeqNo_4, ll_backend__code_info__C0_6, &ll_backend__code_info__C_7);
    }
#line 659 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 659 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 659 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 0)));
#line 659 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 1)));
#line 659 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 2)));
#line 659 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 3)));
#line 659 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 4)));
#line 659 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 5)));
#line 659 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 6)));
#line 659 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 7)));
#line 659 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 8)));
#line 659 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 9)));
#line 659 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 10)));
#line 659 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 11)));
#line 659 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 12)));
#line 659 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 13)));
#line 659 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 14)));
#line 659 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 15)));
#line 659 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 16)));
#line 659 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_37_37, (MR_Integer) 17)));
#line 659 "code_info.m"
    {
#line 659 "code_info.m"
      ll_backend__code_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 0) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 1) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 2) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 3) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 4) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 5) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 6) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 7) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 8) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 9) = ((MR_Box) (ll_backend__code_info__C_7));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 10) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 11) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 12) = ((MR_Box) (ll_backend__code_info__V_52_52));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 13) = ((MR_Box) (ll_backend__code_info__V_53_53));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 14) = ((MR_Box) (ll_backend__code_info__V_54_54));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 15) = ((MR_Box) (ll_backend__code_info__V_55_55));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 16) = ((MR_Box) (ll_backend__code_info__V_56_56));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, 17) = ((MR_Box) (ll_backend__code_info__V_57_57));
#line 659 "code_info.m"
    }
#line 659 "code_info.m"
    {
#line 659 "code_info.m"
      MR_Word base;
#line 659 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 659 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_38_38));
#line 659 "code_info.m"
    }
#line 964 "code_info.m"
  }
#line 763 "code_info.m"
}

#line 759 "code_info.m"
void MR_CALL 
ll_backend__code_info__add_trace_layout_for_label_9_p_0(
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__Label_10,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__Context_11,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__Port_12,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__IsHidden_13,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__GoalPath_14,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__MaybeSolverEventInfo_15,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__Layout_16,
#line 759 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_31,
#line 759 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_32)
#line 759 "code_info.m"
{
#line 913 "code_info.m"
  {
#line 913 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 913 "code_info.m"
    MR_Word ll_backend__code_info__Internals0_18;
#line 913 "code_info.m"
    MR_Word ll_backend__code_info__Exec_19;
#line 913 "code_info.m"
    MR_Integer ll_backend__code_info__LabelNum_20;
#line 913 "code_info.m"
    MR_Word ll_backend__code_info__Internals_30;
#line 913 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 913 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 1)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_31, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 1)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_57_57;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_58_58;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_59_59;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_68_68;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_70_70;
#line 933 "code_info.m"
    MR_Word ll_backend__code_info__Internal0_24;
#line 923 "code_info.m"
    MR_Box ll_backend__code_info__conv0_Internal0_24;

#line 611 "code_info.m"
    ll_backend__code_info__Internals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 2)));
#line 611 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 3)));
#line 611 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 4)));
#line 611 "code_info.m"
    ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 5)));
#line 611 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 6)));
#line 611 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 7)));
#line 611 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 8)));
#line 611 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 9)));
#line 611 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 10)));
#line 611 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 11)));
#line 611 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 12)));
#line 611 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 13)));
#line 611 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 14)));
#line 611 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 15)));
#line 611 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 16)));
#line 611 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_52_52, (MR_Integer) 17)));
#line 915 "code_info.m"
    {
#line 915 "code_info.m"
      ll_backend__code_info__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 0) = ((MR_Box) (ll_backend__code_info__Context_11));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 1) = ((MR_Box) (ll_backend__code_info__Port_12));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 2) = ((MR_Box) (ll_backend__code_info__IsHidden_13));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 3) = ((MR_Box) (ll_backend__code_info__GoalPath_14));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 4) = ((MR_Box) (ll_backend__code_info__MaybeSolverEventInfo_15));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_33_33, 5) = ((MR_Box) (ll_backend__code_info__Layout_16));
#line 915 "code_info.m"
    }
#line 915 "code_info.m"
    {
#line 915 "code_info.m"
      ll_backend__code_info__Exec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 915 "code_info.m"
      MR_hl_field(MR_mktag(1), ll_backend__code_info__Exec_19, 0) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 915 "code_info.m"
    }
#line 919 "code_info.m"
    if (((MR_tag((MR_Word) ll_backend__code_info__Label_10)) == (MR_mktag((MR_Integer) 1))))
#line 920 "code_info.m"
      {
#line 921 "code_info.m"
        {
#line 921 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "entry");
#line 921 "code_info.m"
          return;
        }
#line 920 "code_info.m"
      }
#line 919 "code_info.m"
    else
#line 918 "code_info.m"
      {
#line 918 "code_info.m"
        MR_Word ll_backend__code_info__V_21_21;

#line 918 "code_info.m"
        ll_backend__code_info__LabelNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 0)));
#line 918 "code_info.m"
        ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Label_10, (MR_Integer) 1)));
#line 918 "code_info.m"
      }
#line 923 "code_info.m"
    {
#line 923 "code_info.m"
      ll_backend__code_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__Internals0_18, ll_backend__code_info__LabelNum_20, &ll_backend__code_info__conv0_Internal0_24);
    }
#line 923 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 923 "code_info.m"
      {
#line 923 "code_info.m"
        ll_backend__code_info__Internal0_24 = ((MR_Word) ll_backend__code_info__conv0_Internal0_24);
#line 923 "code_info.m"
        ll_backend__code_info__succeeded = MR_TRUE;
#line 923 "code_info.m"
      }
#line 933 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 924 "code_info.m"
      {
#line 924 "code_info.m"
        MR_Word ll_backend__code_info__Exec0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 0)));
#line 924 "code_info.m"
        MR_Word ll_backend__code_info__Resume_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 1)));
#line 924 "code_info.m"
        MR_Word ll_backend__code_info__Return_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal0_24, (MR_Integer) 2)));
#line 924 "code_info.m"
        MR_Word ll_backend__code_info__Internal_29;

#line 927 "code_info.m"
        if ((ll_backend__code_info__Exec0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "code_info.m"
          {
#line 926 "code_info.m"
          }
#line 927 "code_info.m"
        else
#line 928 "code_info.m"
          {
#line 929 "code_info.m"
            {
#line 929 "code_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "predicate \140ll_backend.code_info.add_trace_layout_for_label\'/9", (MR_String) "already known label");
#line 929 "code_info.m"
              return;
            }
#line 928 "code_info.m"
          }
#line 931 "code_info.m"
        {
#line 931 "code_info.m"
          ll_backend__code_info__Internal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 931 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
#line 931 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 1) = ((MR_Box) (ll_backend__code_info__Resume_26));
#line 931 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_29, 2) = ((MR_Box) (ll_backend__code_info__Return_27));
#line 931 "code_info.m"
        }
#line 932 "code_info.m"
        {
#line 932 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_29)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
#line 924 "code_info.m"
      }
#line 933 "code_info.m"
    else
#line 934 "code_info.m"
      {
#line 934 "code_info.m"
        MR_Word ll_backend__code_info__Internal_43;

#line 934 "code_info.m"
        {
#line 934 "code_info.m"
          ll_backend__code_info__Internal_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 934 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 0) = ((MR_Box) (ll_backend__code_info__Exec_19));
#line 934 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "code_info.m"
          MR_hl_field(MR_mktag(0), ll_backend__code_info__Internal_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "code_info.m"
        }
#line 935 "code_info.m"
        {
#line 935 "code_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, ll_backend__code_info__LabelNum_20, ((MR_Box) (ll_backend__code_info__Internal_43)), ll_backend__code_info__Internals0_18, &ll_backend__code_info__Internals_30);
        }
#line 934 "code_info.m"
      }
#line 937 "code_info.m"
    {
#line 937 "code_info.m"
      ll_backend__code_info__set_layout_info_3_p_0(ll_backend__code_info__Internals_30, ll_backend__code_info__STATE_VARIABLE_CI_0_31, ll_backend__code_info__STATE_VARIABLE_CI_32);
#line 937 "code_info.m"
      return;
    }
#line 913 "code_info.m"
  }
#line 759 "code_info.m"
}

#line 757 "code_info.m"
void MR_CALL 
ll_backend__code_info__succip_is_used_2_p_0(
#line 757 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_4,
#line 757 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_5)
#line 757 "code_info.m"
{
#line 909 "code_info.m"
  {
#line 909 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 909 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 1)));
#line 909 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 909 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_4, (MR_Integer) 0)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 644 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 644 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 644 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 644 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 15)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 16)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 17)));
#line 644 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));

#line 644 "code_info.m"
    {
#line 644 "code_info.m"
      ll_backend__code_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 0) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 2) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 3) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 4) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 5) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 6) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 7) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 8) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 9) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 10) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 11) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 12) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 13) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 14) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 15) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 16) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, 17) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 644 "code_info.m"
    }
#line 644 "code_info.m"
    {
#line 644 "code_info.m"
      MR_Word base;
#line 644 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_5 = base;
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 644 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 644 "code_info.m"
    }
#line 909 "code_info.m"
  }
#line 757 "code_info.m"
}

#line 752 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_next_label_3_p_0(
#line 752 "code_info.m"
  MR_Word * ll_backend__code_info__Label_4,
#line 752 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_10,
#line 752 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_11)
#line 752 "code_info.m"
{
#line 902 "code_info.m"
  {
#line 902 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_6;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__C0_7;
#line 902 "code_info.m"
    MR_Integer ll_backend__code_info__N_8;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__C_9;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__V_64_64;
#line 902 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_45_45;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_46_46;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_50_50;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_55_55;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 642 "code_info.m"
    MR_Integer ll_backend__code_info__V_70_70;
#line 642 "code_info.m"
    MR_Integer ll_backend__code_info__V_71_71;
#line 642 "code_info.m"
    MR_Integer ll_backend__code_info__V_72_72;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;
#line 642 "code_info.m"
    MR_Integer ll_backend__code_info__V_81_81;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_82_82;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_83_83;
#line 642 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;

#line 578 "code_info.m"
    ll_backend__code_info__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 578 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 578 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 578 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 578 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 578 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 578 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 607 "code_info.m"
    ll_backend__code_info__C0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 0)));
#line 607 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 1)));
#line 607 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 2)));
#line 607 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 3)));
#line 607 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 4)));
#line 607 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 5)));
#line 607 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 6)));
#line 607 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 7)));
#line 607 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 8)));
#line 607 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 9)));
#line 607 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 10)));
#line 607 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 11)));
#line 607 "code_info.m"
    ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 12)));
#line 607 "code_info.m"
    ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 13)));
#line 607 "code_info.m"
    ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 14)));
#line 607 "code_info.m"
    ll_backend__code_info__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 15)));
#line 607 "code_info.m"
    ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 16)));
#line 607 "code_info.m"
    ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_16_16, (MR_Integer) 17)));
#line 905 "code_info.m"
    {
#line 905 "code_info.m"
      mercury__counter__allocate_3_p_0(&ll_backend__code_info__N_8, ll_backend__code_info__C0_7, &ll_backend__code_info__C_9);
    }
#line 642 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 0)));
#line 642 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_10, (MR_Integer) 1)));
#line 642 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 0)));
#line 642 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 1)));
#line 642 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 2)));
#line 642 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 3)));
#line 642 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 4)));
#line 642 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 5)));
#line 642 "code_info.m"
    ll_backend__code_info__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 6)));
#line 642 "code_info.m"
    ll_backend__code_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 7)));
#line 642 "code_info.m"
    ll_backend__code_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 8)));
#line 642 "code_info.m"
    ll_backend__code_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 9)));
#line 642 "code_info.m"
    ll_backend__code_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 10)));
#line 642 "code_info.m"
    ll_backend__code_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 11)));
#line 642 "code_info.m"
    ll_backend__code_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 12)));
#line 642 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 13)));
#line 642 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 14)));
#line 642 "code_info.m"
    ll_backend__code_info__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 15)));
#line 642 "code_info.m"
    ll_backend__code_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 16)));
#line 642 "code_info.m"
    ll_backend__code_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_63_63, (MR_Integer) 17)));
#line 642 "code_info.m"
    {
#line 642 "code_info.m"
      ll_backend__code_info__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 0) = ((MR_Box) (ll_backend__code_info__C_9));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 1) = ((MR_Box) (ll_backend__code_info__V_67_67));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 2) = ((MR_Box) (ll_backend__code_info__V_68_68));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 3) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 4) = ((MR_Box) (ll_backend__code_info__V_70_70));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 5) = ((MR_Box) (ll_backend__code_info__V_71_71));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 6) = ((MR_Box) (ll_backend__code_info__V_72_72));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 7) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 8) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 9) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 10) = ((MR_Box) (ll_backend__code_info__V_76_76));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 11) = ((MR_Box) (ll_backend__code_info__V_77_77));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 12) = ((MR_Box) (ll_backend__code_info__V_78_78));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 13) = ((MR_Box) (ll_backend__code_info__V_79_79));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 14) = ((MR_Box) (ll_backend__code_info__V_80_80));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 15) = ((MR_Box) (ll_backend__code_info__V_81_81));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 16) = ((MR_Box) (ll_backend__code_info__V_82_82));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_64_64, 17) = ((MR_Box) (ll_backend__code_info__V_83_83));
#line 642 "code_info.m"
    }
#line 642 "code_info.m"
    {
#line 642 "code_info.m"
      MR_Word base;
#line 642 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_11 = base;
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_65_65));
#line 642 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_64_64));
#line 642 "code_info.m"
    }
#line 907 "code_info.m"
    {
#line 907 "code_info.m"
      MR_Word base;
#line 907 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "code_info.m"
      *ll_backend__code_info__Label_4 = base;
#line 907 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__N_8));
#line 907 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__ProcLabel_6));
#line 907 "code_info.m"
    }
#line 902 "code_info.m"
  }
#line 752 "code_info.m"
}

#line 747 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__make_proc_entry_label_5_f_0(
#line 747 "code_info.m"
  MR_Word ll_backend__code_info__CI_7,
#line 747 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_8,
#line 747 "code_info.m"
  MR_Word ll_backend__code_info__PredId_9,
#line 747 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_10,
#line 747 "code_info.m"
  MR_Word ll_backend__code_info__Immed0_11)
#line 747 "code_info.m"
{
#line 888 "code_info.m"
  {
#line 888 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 888 "code_info.m"
    MR_Word ll_backend__code_info__CodeAddr_12;
#line 888 "code_info.m"
    MR_Word ll_backend__code_info__Immed_13;

#line 892 "code_info.m"
#line 892 "code_info.m"
    switch (ll_backend__code_info__Immed0_11) {
#line 892 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 892 "code_info.m"
      case (MR_Integer) 0:
#line 891 "code_info.m"
        ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "code_info.m"
        break;
#line 892 "code_info.m"
      case (MR_Integer) 1:
#line 893 "code_info.m"
        {
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__Globals_14;
#line 893 "code_info.m"
          MR_Integer ll_backend__code_info__ProcsPerFunc_15;
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__CurPredId_16;
#line 893 "code_info.m"
          MR_Integer ll_backend__code_info__CurProcId_17;
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__V_19_19;
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__V_20_20;
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
#line 893 "code_info.m"
          MR_Word ll_backend__code_info__V_47_47;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 0)));
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_26_26;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_27_27;
#line 566 "code_info.m"
          MR_Integer ll_backend__code_info__V_28_28;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_29_29;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_30_30;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_31_31;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_32_32;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_33_33;
#line 566 "code_info.m"
          MR_Integer ll_backend__code_info__V_34_34;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_35_35;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_36_36;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_37_37;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_38_38;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_39_39;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_40_40;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_41_41;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_42_42;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_43_43;
#line 566 "code_info.m"
          MR_Word ll_backend__code_info__V_44_44;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_48_48;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_49_49;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_50_50;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_51_51;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_53_53;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_54_54;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_55_55;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_56_56;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_57_57;
#line 570 "code_info.m"
          MR_Integer ll_backend__code_info__V_58_58;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_59_59;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_60_60;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_61_61;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_62_62;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_63_63;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_64_64;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_65_65;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_66_66;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_67_67;
#line 570 "code_info.m"
          MR_Word ll_backend__code_info__V_68_68;

#line 566 "code_info.m"
          ll_backend__code_info__Globals_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 1)));
#line 566 "code_info.m"
          ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 2)));
#line 566 "code_info.m"
          ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 3)));
#line 566 "code_info.m"
          ll_backend__code_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 4)));
#line 566 "code_info.m"
          ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 5)));
#line 566 "code_info.m"
          ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 6)));
#line 566 "code_info.m"
          ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 7)));
#line 566 "code_info.m"
          ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 8)));
#line 566 "code_info.m"
          ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 9)));
#line 566 "code_info.m"
          ll_backend__code_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 10)));
#line 566 "code_info.m"
          ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 11)));
#line 566 "code_info.m"
          ll_backend__code_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 566 "code_info.m"
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 13)));
#line 566 "code_info.m"
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_23_23, (MR_Integer) 14)));
#line 895 "code_info.m"
          {
#line 895 "code_info.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__code_info__Globals_14, (MR_Integer) 484, &ll_backend__code_info__ProcsPerFunc_15);
          }
#line 570 "code_info.m"
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 0)));
#line 570 "code_info.m"
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_7, (MR_Integer) 1)));
#line 570 "code_info.m"
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 0)));
#line 570 "code_info.m"
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 1)));
#line 570 "code_info.m"
          ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 2)));
#line 570 "code_info.m"
          ll_backend__code_info__CurPredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 3)));
#line 570 "code_info.m"
          ll_backend__code_info__CurProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 4)));
#line 570 "code_info.m"
          ll_backend__code_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 5)));
#line 570 "code_info.m"
          ll_backend__code_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 6)));
#line 570 "code_info.m"
          ll_backend__code_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 7)));
#line 570 "code_info.m"
          ll_backend__code_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 8)));
#line 570 "code_info.m"
          ll_backend__code_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 9)));
#line 570 "code_info.m"
          ll_backend__code_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 10)));
#line 570 "code_info.m"
          ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 11)));
#line 570 "code_info.m"
          ll_backend__code_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 570 "code_info.m"
          ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 13)));
#line 570 "code_info.m"
          ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_47_47, (MR_Integer) 14)));
#line 898 "code_info.m"
          {
#line 898 "code_info.m"
            ll_backend__code_info__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 0) = ((MR_Box) (ll_backend__code_info__CurPredId_16));
#line 898 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_20_20, 1) = ((MR_Box) (ll_backend__code_info__CurProcId_17));
#line 898 "code_info.m"
          }
#line 898 "code_info.m"
          {
#line 898 "code_info.m"
            ll_backend__code_info__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 898 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 0) = ((MR_Box) (ll_backend__code_info__ProcsPerFunc_15));
#line 898 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, 1) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 898 "code_info.m"
          }
#line 898 "code_info.m"
          {
#line 898 "code_info.m"
            ll_backend__code_info__Immed_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "code_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__code_info__Immed_13, 0) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 898 "code_info.m"
          }
#line 893 "code_info.m"
        }
#line 892 "code_info.m"
        break;
#line 892 "code_info.m"
    }
#line 900 "code_info.m"
    {
#line 900 "code_info.m"
      return ll_backend__code_info__CodeAddr_12 = ll_backend__code_util__make_entry_label_4_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__PredId_9, ll_backend__code_info__ProcId_10, ll_backend__code_info__Immed_13);
    }
#line 888 "code_info.m"
    return ll_backend__code_info__CodeAddr_12;
#line 888 "code_info.m"
  }
#line 747 "code_info.m"
}

#line 727 "code_info.m"
MR_String MR_CALL 
ll_backend__code_info__variable_name_2_f_0(
#line 727 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 727 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 727 "code_info.m"
{
#line 882 "code_info.m"
  {
#line 882 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 882 "code_info.m"
    MR_String ll_backend__code_info__Name_6;
#line 882 "code_info.m"
    MR_Word ll_backend__code_info__Varset_7;
#line 882 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 580 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 580 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;

#line 580 "code_info.m"
    ll_backend__code_info__Varset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 580 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 580 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 580 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 580 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 580 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 884 "code_info.m"
    {
#line 884 "code_info.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__Varset_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Name_6);
    }
#line 882 "code_info.m"
    return ll_backend__code_info__Name_6;
#line 882 "code_info.m"
  }
#line 727 "code_info.m"
}

#line 725 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_pred_proc_arginfo_3_f_0(
#line 725 "code_info.m"
  MR_Word ll_backend__code_info__CI_5,
#line 725 "code_info.m"
  MR_Word ll_backend__code_info__PredId_6,
#line 725 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_7)
#line 725 "code_info.m"
{
#line 877 "code_info.m"
  {
#line 877 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 877 "code_info.m"
    MR_Word ll_backend__code_info__ArgInfo_8;
#line 877 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_9;
#line 877 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_11;
#line 877 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_5, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 879 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_14_14, (MR_Integer) 14)));
#line 879 "code_info.m"
    {
#line 879 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_9, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_10_10, &ll_backend__code_info__ProcInfo_11);
    }
#line 880 "code_info.m"
    {
#line 880 "code_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_11, &ll_backend__code_info__ArgInfo_8);
    }
#line 877 "code_info.m"
    return ll_backend__code_info__ArgInfo_8;
#line 877 "code_info.m"
  }
#line 725 "code_info.m"
}

#line 721 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_arginfo_1_f_0(
#line 721 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 721 "code_info.m"
{
#line 872 "code_info.m"
  {
#line 872 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 872 "code_info.m"
    MR_Word ll_backend__code_info__ArgInfo_4;
#line 872 "code_info.m"
    MR_Word ll_backend__code_info__PredId_5;
#line 872 "code_info.m"
    MR_Integer ll_backend__code_info__ProcId_6;
#line 872 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 872 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 872 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_61;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 570 "code_info.m"
    MR_Integer ll_backend__code_info__V_20_20;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 879 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;

#line 570 "code_info.m"
    ll_backend__code_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 570 "code_info.m"
    ll_backend__code_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 570 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 570 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 570 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 570 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 570 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 570 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 570 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 570 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 570 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 879 "code_info.m"
    {
#line 879 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_59, ll_backend__code_info__PredId_5, ll_backend__code_info__ProcId_6, &ll_backend__code_info__V_60_60, &ll_backend__code_info__ProcInfo_61);
    }
#line 880 "code_info.m"
    {
#line 880 "code_info.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_info__ProcInfo_61, &ll_backend__code_info__ArgInfo_4);
    }
#line 872 "code_info.m"
    return ll_backend__code_info__ArgInfo_4;
#line 872 "code_info.m"
  }
#line 721 "code_info.m"
}

#line 717 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_headvars_1_f_0(
#line 717 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 717 "code_info.m"
{
#line 865 "code_info.m"
  {
#line 865 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 865 "code_info.m"
    MR_Word ll_backend__code_info__HeadVars_4;
#line 865 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_5;
#line 865 "code_info.m"
    MR_Word ll_backend__code_info__PredId_6;
#line 865 "code_info.m"
    MR_Integer ll_backend__code_info__ProcId_7;
#line 865 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_9;
#line 865 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 869 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 869 "code_info.m"
    {
#line 869 "code_info.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, ll_backend__code_info__ProcId_7, &ll_backend__code_info__V_8_8, &ll_backend__code_info__ProcInfo_9);
    }
#line 870 "code_info.m"
    {
#line 870 "code_info.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__code_info__ProcInfo_9, &ll_backend__code_info__HeadVars_4);
    }
#line 865 "code_info.m"
    return ll_backend__code_info__HeadVars_4;
#line 865 "code_info.m"
  }
#line 717 "code_info.m"
}

#line 713 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__get_proc_model_1_f_0(
#line 713 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 713 "code_info.m"
{
#line 861 "code_info.m"
  {
#line 861 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 861 "code_info.m"
    MR_Word ll_backend__code_info__CodeModel_4;
#line 861 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_5;
#line 861 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;

#line 576 "code_info.m"
    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
#line 576 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
#line 576 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
#line 576 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
#line 576 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
#line 576 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
#line 576 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
#line 576 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
#line 863 "code_info.m"
    {
#line 863 "code_info.m"
      return ll_backend__code_info__CodeModel_4 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__code_info__ProcInfo_5);
    }
#line 861 "code_info.m"
    return ll_backend__code_info__CodeModel_4;
#line 861 "code_info.m"
  }
#line 713 "code_info.m"
}

#line 856 "code_info.m"
static MR_bool MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0_1(
#line 856 "code_info.m"
  MR_Box ll_backend__code_info__closure_arg,
#line 856 "code_info.m"
  MR_Box ll_backend__code_info__wrapper_arg_1)
#line 856 "code_info.m"
{
#line 856 "code_info.m"
  {
#line 856 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 856 "code_info.m"
    MR_Box ll_backend__code_info__closure = ll_backend__code_info__closure_arg;

#line 856 "code_info.m"
    {
#line 856 "code_info.m"
      return ll_backend__code_info__succeeded = check_hlds__type_util__is_region_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__code_info__wrapper_arg_1));
    }
#line 856 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 856 "code_info.m"
  }
#line 856 "code_info.m"
}

#line 709 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__filter_region_vars_2_f_0(
#line 709 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 709 "code_info.m"
  MR_Word ll_backend__code_info__ForwardLiveVarsBeforeGoal_5)
#line 709 "code_info.m"
{
#line 854 "code_info.m"
  {
#line 854 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 854 "code_info.m"
    MR_Word ll_backend__code_info__RegionVars_6;
#line 854 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_7;
#line 854 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 854 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 2)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 3)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 4)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 5)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 6)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 7)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 8)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;

#line 582 "code_info.m"
    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 9)));
#line 582 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 10)));
#line 582 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 11)));
#line 582 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 13)));
#line 582 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_13_13, (MR_Integer) 14)));
#line 856 "code_info.m"
    {
#line 856 "code_info.m"
      ll_backend__code_info__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 856 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 0) = ((MR_Box) (&ll_backend__code_info_scalar_common_4[0]));
#line 856 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 1) = ((MR_Box) (ll_backend__code_info__filter_region_vars_2_f_0_1));
#line 856 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 856 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, 3) = ((MR_Box) (ll_backend__code_info__VarTypes_7));
#line 856 "code_info.m"
    }
#line 856 "code_info.m"
    {
#line 856 "code_info.m"
      ll_backend__code_info__RegionVars_6 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__code_info__V_8_8, ll_backend__code_info__ForwardLiveVarsBeforeGoal_5);
    }
#line 854 "code_info.m"
    return ll_backend__code_info__RegionVars_6;
#line 854 "code_info.m"
  }
#line 709 "code_info.m"
}

#line 707 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(
#line 707 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 707 "code_info.m"
  MR_Word ll_backend__code_info__Type_5)
#line 707 "code_info.m"
{
#line 850 "code_info.m"
  {
#line 850 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 850 "code_info.m"
    MR_Word ll_backend__code_info__CheaperTagTest_6;
#line 850 "code_info.m"
    MR_Word ll_backend__code_info__CheaperTagTestPrime_11;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefn_7;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__TypeBody_8;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_21;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_22;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_23;
#line 845 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_37_37;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_44_44;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 847 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_26_26, (MR_Integer) 14)));
#line 832 "code_info.m"
    {
#line 832 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_22);
    }
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_21, &ll_backend__code_info__TypeTable_23);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_23, ll_backend__code_info__TypeCtor_22, &ll_backend__code_info__TypeDefn_7);
    }
#line 845 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 845 "code_info.m"
      {
#line 846 "code_info.m"
        {
#line 846 "code_info.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ll_backend__code_info__TypeDefn_7, &ll_backend__code_info__TypeBody_8);
        }
#line 847 "code_info.m"
        ll_backend__code_info__succeeded = ((MR_tag((MR_Word) ll_backend__code_info__TypeBody_8)) == (MR_mktag((MR_Integer) 1)));
#line 847 "code_info.m"
        if (ll_backend__code_info__succeeded)
#line 847 "code_info.m"
          {
#line 847 "code_info.m"
            ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 0)));
#line 847 "code_info.m"
            ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 1)));
#line 847 "code_info.m"
            ll_backend__code_info__CheaperTagTestPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 2)));
#line 847 "code_info.m"
            ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 3)));
#line 847 "code_info.m"
            ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 4)));
#line 847 "code_info.m"
            ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 5)));
#line 847 "code_info.m"
            ll_backend__code_info__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 847 "code_info.m"
            ll_backend__code_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 847 "code_info.m"
            ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__TypeBody_8, (MR_Integer) 7)));
#line 847 "code_info.m"
          }
#line 845 "code_info.m"
      }
#line 850 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 849 "code_info.m"
      ll_backend__code_info__CheaperTagTest_6 = ll_backend__code_info__CheaperTagTestPrime_11;
#line 850 "code_info.m"
    else
#line 851 "code_info.m"
      ll_backend__code_info__CheaperTagTest_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "code_info.m"
    return ll_backend__code_info__CheaperTagTest_6;
#line 850 "code_info.m"
  }
#line 707 "code_info.m"
}

#line 705 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__lookup_type_defn_2_f_0(
#line 705 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 705 "code_info.m"
  MR_Word ll_backend__code_info__Type_5)
#line 705 "code_info.m"
{
#line 839 "code_info.m"
  {
#line 839 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 839 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefn_6;
#line 839 "code_info.m"
    MR_Word ll_backend__code_info__TypeDefnPrime_7;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_14;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_15;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_16;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_37_37;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_38_38;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_19_19, (MR_Integer) 14)));
#line 832 "code_info.m"
    {
#line 832 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_15);
    }
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__TypeTable_16);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_16, ll_backend__code_info__TypeCtor_15, &ll_backend__code_info__TypeDefnPrime_7);
    }
#line 839 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 838 "code_info.m"
      ll_backend__code_info__TypeDefn_6 = ll_backend__code_info__TypeDefnPrime_7;
#line 839 "code_info.m"
    else
#line 840 "code_info.m"
      {
#line 840 "code_info.m"
        {
#line 840 "code_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_info", (MR_String) "function \140ll_backend.code_info.lookup_type_defn\'/2", (MR_String) "type ctor has no definition");
        }
#line 840 "code_info.m"
      }
#line 839 "code_info.m"
    return ll_backend__code_info__TypeDefn_6;
#line 839 "code_info.m"
  }
#line 705 "code_info.m"
}

#line 698 "code_info.m"
MR_bool MR_CALL 
ll_backend__code_info__search_type_defn_3_p_0(
#line 698 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 698 "code_info.m"
  MR_Word ll_backend__code_info__Type_5,
#line 698 "code_info.m"
  MR_Word * ll_backend__code_info__TypeDefn_6)
#line 698 "code_info.m"
{
#line 830 "code_info.m"
  {
#line 830 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_7;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtor_8;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__TypeTable_9;
#line 830 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_12_12, (MR_Integer) 14)));
#line 832 "code_info.m"
    {
#line 832 "code_info.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__code_info__Type_5, &ll_backend__code_info__TypeCtor_8);
    }
#line 833 "code_info.m"
    {
#line 833 "code_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ll_backend__code_info__ModuleInfo_7, &ll_backend__code_info__TypeTable_9);
    }
#line 834 "code_info.m"
    {
#line 834 "code_info.m"
      return ll_backend__code_info__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(ll_backend__code_info__TypeTable_9, ll_backend__code_info__TypeCtor_8, ll_backend__code_info__TypeDefn_6);
    }
#line 830 "code_info.m"
    return ll_backend__code_info__succeeded;
#line 830 "code_info.m"
  }
#line 698 "code_info.m"
}

#line 691 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__variable_is_of_dummy_type_2_f_0(
#line 691 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 691 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 691 "code_info.m"
{
#line 825 "code_info.m"
  {
#line 825 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__IsDummy_6;
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__VarType_7;
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_8;
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_12;
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 825 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 2)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 3)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 4)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 5)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 6)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 7)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 8)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_26_26;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_36_36;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_40_40;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_41_41;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_42_42;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_43_43;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_44_44;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_45_45;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_46_46;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_47_47;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_48_48;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_49_49;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_50_50;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_51_51;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_52_52;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_53_53;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_54_54;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_55_55;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_56_56;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_57_57;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_58_58;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;

#line 582 "code_info.m"
    ll_backend__code_info__VarTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 9)));
#line 582 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 10)));
#line 582 "code_info.m"
    ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 11)));
#line 582 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 13)));
#line 582 "code_info.m"
    ll_backend__code_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, (MR_Integer) 14)));
#line 823 "code_info.m"
    {
#line 823 "code_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_12, ll_backend__code_info__Var_5, &ll_backend__code_info__VarType_7);
    }
#line 564 "code_info.m"
    ll_backend__code_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, (MR_Integer) 14)));
#line 828 "code_info.m"
    {
#line 828 "code_info.m"
      return ll_backend__code_info__IsDummy_6 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__code_info__ModuleInfo_8, ll_backend__code_info__VarType_7);
    }
#line 825 "code_info.m"
    return ll_backend__code_info__IsDummy_6;
#line 825 "code_info.m"
  }
#line 691 "code_info.m"
}

#line 689 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__variable_type_2_f_0(
#line 689 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 689 "code_info.m"
  MR_Word ll_backend__code_info__Var_5)
#line 689 "code_info.m"
{
#line 821 "code_info.m"
  {
#line 821 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 821 "code_info.m"
    MR_Word ll_backend__code_info__Type_6;
#line 821 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_7;
#line 821 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 2)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 3)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 4)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 5)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 6)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 7)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 8)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;

#line 582 "code_info.m"
    ll_backend__code_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 9)));
#line 582 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 10)));
#line 582 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 11)));
#line 582 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 13)));
#line 582 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, (MR_Integer) 14)));
#line 823 "code_info.m"
    {
#line 823 "code_info.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__code_info__VarTypes_7, ll_backend__code_info__Var_5, &ll_backend__code_info__Type_6);
    }
#line 821 "code_info.m"
    return ll_backend__code_info__Type_6;
#line 821 "code_info.m"
  }
#line 689 "code_info.m"
}

#line 685 "code_info.m"
MR_Word MR_CALL 
ll_backend__code_info__body_typeinfo_liveness_1_f_0(
#line 685 "code_info.m"
  MR_Word ll_backend__code_info__CI_3)
#line 685 "code_info.m"
{
#line 814 "code_info.m"
  {
#line 814 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__TypeInfoLiveness_4;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__ModuleInfo_5;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__PredId_6;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__PredInfo_7;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__Globals_8;
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 814 "code_info.m"
    MR_Word ll_backend__code_info__V_59_59;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_32_32;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_61_61;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 566 "code_info.m"
    MR_Integer ll_backend__code_info__V_64_64;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_65_65;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_66_66;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_67_67;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_68_68;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 566 "code_info.m"
    MR_Integer ll_backend__code_info__V_70_70;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_71_71;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_72_72;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_76_76;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_77_77;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_78_78;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_79_79;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_80_80;

#line 564 "code_info.m"
    ll_backend__code_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 817 "code_info.m"
    {
#line 817 "code_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__code_info__ModuleInfo_5, ll_backend__code_info__PredId_6, &ll_backend__code_info__PredInfo_7);
    }
#line 566 "code_info.m"
    ll_backend__code_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 566 "code_info.m"
    ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 566 "code_info.m"
    ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 0)));
#line 566 "code_info.m"
    ll_backend__code_info__Globals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 1)));
#line 566 "code_info.m"
    ll_backend__code_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 2)));
#line 566 "code_info.m"
    ll_backend__code_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 3)));
#line 566 "code_info.m"
    ll_backend__code_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 4)));
#line 566 "code_info.m"
    ll_backend__code_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 5)));
#line 566 "code_info.m"
    ll_backend__code_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 6)));
#line 566 "code_info.m"
    ll_backend__code_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 7)));
#line 566 "code_info.m"
    ll_backend__code_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 8)));
#line 566 "code_info.m"
    ll_backend__code_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 9)));
#line 566 "code_info.m"
    ll_backend__code_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 10)));
#line 566 "code_info.m"
    ll_backend__code_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 11)));
#line 566 "code_info.m"
    ll_backend__code_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 13)));
#line 566 "code_info.m"
    ll_backend__code_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_59_59, (MR_Integer) 14)));
#line 819 "code_info.m"
    {
#line 819 "code_info.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__code_info__PredInfo_7, ll_backend__code_info__Globals_8, &ll_backend__code_info__TypeInfoLiveness_4);
    }
#line 814 "code_info.m"
    return ll_backend__code_info__TypeInfoLiveness_4;
#line 814 "code_info.m"
  }
#line 685 "code_info.m"
}

#line 680 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_stack_slots_2_p_0(
#line 680 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 680 "code_info.m"
  MR_Word * ll_backend__code_info__StackSlots_4)
#line 680 "code_info.m"
{
#line 810 "code_info.m"
  {
#line 810 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 810 "code_info.m"
    MR_Word ll_backend__code_info__ProcInfo_5;
#line 810 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 2)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 3)));
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 4)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 5)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_19_19;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29;

#line 576 "code_info.m"
    ll_backend__code_info__ProcInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 6)));
#line 576 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 7)));
#line 576 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 8)));
#line 576 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 9)));
#line 576 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 10)));
#line 576 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 11)));
#line 576 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 13)));
#line 576 "code_info.m"
    ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_8_8, (MR_Integer) 14)));
#line 812 "code_info.m"
    {
#line 812 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_5, ll_backend__code_info__StackSlots_4);
#line 812 "code_info.m"
      return;
    }
#line 810 "code_info.m"
  }
#line 680 "code_info.m"
}

#line 534 "code_info.m"
static void MR_CALL 
ll_backend__code_info__init_maybe_trace_info_8_p_0(
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__TraceLevel_9,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__Globals_10,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_11,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_12,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_13,
#line 534 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_14,
#line 534 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_21,
#line 534 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_22)
#line 534 "code_info.m"
{
#line 539 "code_info.m"
  {
#line 539 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 539 "code_info.m"
    MR_Word ll_backend__code_info__TraceLevelIsNone_16;

#line 540 "code_info.m"
    {
#line 540 "code_info.m"
      ll_backend__code_info__TraceLevelIsNone_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__TraceLevel_9);
    }
#line 556 "code_info.m"
#line 556 "code_info.m"
    switch (ll_backend__code_info__TraceLevelIsNone_16) {
#line 556 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 556 "code_info.m"
      case (MR_Integer) 0:
#line 543 "code_info.m"
        {
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__HasTailCallEvents_17;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__MaybeTailRecLabel_19;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__TraceInfo_20;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_29_29;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__STATE_VARIABLE_CI_30_30;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__V_31_31;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__V_38_38;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__V_39_39;
#line 543 "code_info.m"
          MR_Word ll_backend__code_info__V_40_40;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_41_41;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_42_42;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_43_43;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_44_44;
#line 639 "code_info.m"
          MR_Integer ll_backend__code_info__V_45_45;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_46_46;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_47_47;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_48_48;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_49_49;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_50_50;
#line 639 "code_info.m"
          MR_Integer ll_backend__code_info__V_51_51;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_53_53;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_54_54;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_55_55;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_56_56;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_57_57;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_58_58;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_59_59;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_60_60;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_61_61;
#line 639 "code_info.m"
          MR_Word ll_backend__code_info__V_52_52;

#line 544 "code_info.m"
          {
#line 544 "code_info.m"
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__code_info__ProcInfo_13, &ll_backend__code_info__HasTailCallEvents_17);
          }
#line 549 "code_info.m"
#line 549 "code_info.m"
          switch (ll_backend__code_info__HasTailCallEvents_17) {
#line 549 "code_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 549 "code_info.m"
            case (MR_Integer) 1:
#line 550 "code_info.m"
              {
#line 551 "code_info.m"
                ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "code_info.m"
                ll_backend__code_info__STATE_VARIABLE_CI_29_29 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
#line 550 "code_info.m"
              }
#line 549 "code_info.m"
              break;
#line 549 "code_info.m"
            case (MR_Integer) 0:
#line 546 "code_info.m"
              {
#line 546 "code_info.m"
                MR_Word ll_backend__code_info__TailRecLabel_18;

#line 547 "code_info.m"
                {
#line 547 "code_info.m"
                  ll_backend__code_info__get_next_label_3_p_0(&ll_backend__code_info__TailRecLabel_18, ll_backend__code_info__STATE_VARIABLE_CI_0_21, &ll_backend__code_info__STATE_VARIABLE_CI_29_29);
                }
#line 548 "code_info.m"
                {
#line 548 "code_info.m"
                  ll_backend__code_info__MaybeTailRecLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "code_info.m"
                  MR_hl_field(MR_mktag(1), ll_backend__code_info__MaybeTailRecLabel_19, 0) = ((MR_Box) (ll_backend__code_info__TailRecLabel_18));
#line 548 "code_info.m"
                }
#line 546 "code_info.m"
              }
#line 549 "code_info.m"
              break;
#line 549 "code_info.m"
          }
#line 553 "code_info.m"
          {
#line 553 "code_info.m"
            ll_backend__trace_gen__trace_setup_9_p_0(ll_backend__code_info__ModuleInfo_11, ll_backend__code_info__PredInfo_12, ll_backend__code_info__ProcInfo_13, ll_backend__code_info__Globals_10, ll_backend__code_info__MaybeTailRecLabel_19, ll_backend__code_info__TraceSlotInfo_14, &ll_backend__code_info__TraceInfo_20, ll_backend__code_info__STATE_VARIABLE_CI_29_29, &ll_backend__code_info__STATE_VARIABLE_CI_30_30);
          }
#line 555 "code_info.m"
          {
#line 555 "code_info.m"
            ll_backend__code_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "code_info.m"
            MR_hl_field(MR_mktag(1), ll_backend__code_info__V_31_31, 0) = ((MR_Box) (ll_backend__code_info__TraceInfo_20));
#line 555 "code_info.m"
          }
#line 639 "code_info.m"
          ll_backend__code_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 0)));
#line 639 "code_info.m"
          ll_backend__code_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_30_30, (MR_Integer) 1)));
#line 639 "code_info.m"
          ll_backend__code_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 0)));
#line 639 "code_info.m"
          ll_backend__code_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 1)));
#line 639 "code_info.m"
          ll_backend__code_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 2)));
#line 639 "code_info.m"
          ll_backend__code_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 3)));
#line 639 "code_info.m"
          ll_backend__code_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 4)));
#line 639 "code_info.m"
          ll_backend__code_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 5)));
#line 639 "code_info.m"
          ll_backend__code_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 6)));
#line 639 "code_info.m"
          ll_backend__code_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 7)));
#line 639 "code_info.m"
          ll_backend__code_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 8)));
#line 639 "code_info.m"
          ll_backend__code_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 9)));
#line 639 "code_info.m"
          ll_backend__code_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 10)));
#line 639 "code_info.m"
          ll_backend__code_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 11)));
#line 639 "code_info.m"
          ll_backend__code_info__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 639 "code_info.m"
          ll_backend__code_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 13)));
#line 639 "code_info.m"
          ll_backend__code_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_38_38, (MR_Integer) 14)));
#line 639 "code_info.m"
          {
#line 639 "code_info.m"
            ll_backend__code_info__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 0) = ((MR_Box) (ll_backend__code_info__V_41_41));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 1) = ((MR_Box) (ll_backend__code_info__V_42_42));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 2) = ((MR_Box) (ll_backend__code_info__V_43_43));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 3) = ((MR_Box) (ll_backend__code_info__V_44_44));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 4) = ((MR_Box) (ll_backend__code_info__V_45_45));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 5) = ((MR_Box) (ll_backend__code_info__V_46_46));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 6) = ((MR_Box) (ll_backend__code_info__V_47_47));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 7) = ((MR_Box) (ll_backend__code_info__V_48_48));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 8) = ((MR_Box) (ll_backend__code_info__V_49_49));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 9) = ((MR_Box) (ll_backend__code_info__V_50_50));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 10) = ((MR_Box) (ll_backend__code_info__V_51_51));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 11) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 12) = ((MR_Box) ((ll_backend__code_info__V_53_53 | ((((ll_backend__code_info__V_54_54 << (MR_Integer) 1)) | ((((ll_backend__code_info__V_55_55 << (MR_Integer) 2)) | ((((ll_backend__code_info__V_56_56 << (MR_Integer) 3)) | ((((ll_backend__code_info__V_57_57 << (MR_Integer) 4)) | ((((ll_backend__code_info__V_58_58 << (MR_Integer) 5)) | ((ll_backend__code_info__V_59_59 << (MR_Integer) 6)))))))))))))));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 13) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), ll_backend__code_info__V_39_39, 14) = ((MR_Box) (ll_backend__code_info__V_61_61));
#line 639 "code_info.m"
          }
#line 639 "code_info.m"
          {
#line 639 "code_info.m"
            MR_Word base;
#line 639 "code_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "code_info.m"
            *ll_backend__code_info__STATE_VARIABLE_CI_22 = base;
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_39_39));
#line 639 "code_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_40_40));
#line 639 "code_info.m"
          }
#line 543 "code_info.m"
        }
#line 556 "code_info.m"
        break;
#line 556 "code_info.m"
      case (MR_Integer) 1:
#line 557 "code_info.m"
        {
#line 558 "code_info.m"
          *ll_backend__code_info__TraceSlotInfo_14 = (MR_Word) &ll_backend__code_info_scalar_common_3[0];
#line 557 "code_info.m"
          *ll_backend__code_info__STATE_VARIABLE_CI_22 = ll_backend__code_info__STATE_VARIABLE_CI_0_21;
#line 557 "code_info.m"
        }
#line 556 "code_info.m"
        break;
#line 556 "code_info.m"
    }
#line 539 "code_info.m"
  }
#line 534 "code_info.m"
}

#line 513 "code_info.m"
static void MR_CALL 
ll_backend__code_info__max_var_slot_2_3_p_0(
#line 513 "code_info.m"
  MR_Word ll_backend__code_info__HeadVar__1_1,
#line 513 "code_info.m"
  MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0_2,
#line 513 "code_info.m"
  MR_Integer * ll_backend__code_info__STATE_VARIABLE_Max_3)
#line 513 "code_info.m"
{
#line 515 "code_info.m"
  while (MR_TRUE)
#line 515 "code_info.m"
    {
#line 515 "code_info.m"
      /* tailcall optimized into a loop */
#line 515 "code_info.m"
      {
#line 515 "code_info.m"
        MR_bool ll_backend__code_info__succeeded;

#line 515 "code_info.m"
        if ((ll_backend__code_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "code_info.m"
          *ll_backend__code_info__STATE_VARIABLE_Max_3 = ll_backend__code_info__STATE_VARIABLE_Max_0_2;
#line 515 "code_info.m"
        else
#line 516 "code_info.m"
          {
#line 516 "code_info.m"
            MR_Word ll_backend__code_info__Slot_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "code_info.m"
            MR_Word ll_backend__code_info__Slots_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "code_info.m"
            MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_17_17;

#line 10102 "ll_backend.code_info.c"
#line 10103 "ll_backend.code_info.c"
            switch (MR_tag((MR_Word) ll_backend__code_info__Slot_7)) {
#line 10105 "ll_backend.code_info.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 10107 "ll_backend.code_info.c"
              case (MR_Integer) 0:
#line 10109 "ll_backend.code_info.c"
                {
#line 10111 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
#line 10113 "ll_backend.code_info.c"
                  MR_Word ll_backend__code_info__Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

#line 528 "code_info.m"
#line 528 "code_info.m"
                  switch (ll_backend__code_info__Width_11) {
#line 528 "code_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 528 "code_info.m"
                    case (MR_Integer) 1:
#line 529 "code_info.m"
                      {
#line 529 "code_info.m"
                        MR_Integer ll_backend__code_info__V_14_14 = (ll_backend__code_info__N_10 + (MR_Integer) 1);

#line 530 "code_info.m"
                        {
#line 530 "code_info.m"
                          mercury__int__max_3_p_0(ll_backend__code_info__V_14_14, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
#line 529 "code_info.m"
                      }
#line 528 "code_info.m"
                      break;
#line 528 "code_info.m"
                    case (MR_Integer) 0:
#line 527 "code_info.m"
                      {
#line 527 "code_info.m"
                        mercury__int__max_3_p_0(ll_backend__code_info__N_10, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
#line 528 "code_info.m"
                      break;
#line 528 "code_info.m"
                  }
#line 10148 "ll_backend.code_info.c"
                }
#line 10150 "ll_backend.code_info.c"
                break;
#line 10152 "ll_backend.code_info.c"
              case (MR_Integer) 1:
#line 10154 "ll_backend.code_info.c"
                {
#line 10156 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 0)));
#line 10158 "ll_backend.code_info.c"
                  MR_Word ll_backend__code_info__Width_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_info__Slot_7, (MR_Integer) 1)));

#line 528 "code_info.m"
#line 528 "code_info.m"
                  switch (ll_backend__code_info__Width_27) {
#line 528 "code_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 528 "code_info.m"
                    case (MR_Integer) 1:
#line 529 "code_info.m"
                      {
#line 529 "code_info.m"
                        MR_Integer ll_backend__code_info__V_22_22 = (ll_backend__code_info__N_26 + (MR_Integer) 1);

#line 530 "code_info.m"
                        {
#line 530 "code_info.m"
                          mercury__int__max_3_p_0(ll_backend__code_info__V_22_22, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                        }
#line 529 "code_info.m"
                      }
#line 528 "code_info.m"
                      break;
#line 528 "code_info.m"
                    case (MR_Integer) 0:
#line 527 "code_info.m"
                      {
#line 527 "code_info.m"
                        mercury__int__max_3_p_0(ll_backend__code_info__N_26, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                      }
#line 528 "code_info.m"
                      break;
#line 528 "code_info.m"
                  }
#line 10193 "ll_backend.code_info.c"
                }
#line 10195 "ll_backend.code_info.c"
                break;
#line 10197 "ll_backend.code_info.c"
              case (MR_Integer) 2:
#line 10199 "ll_backend.code_info.c"
                {
#line 10201 "ll_backend.code_info.c"
                  MR_Integer ll_backend__code_info__N_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_info__Slot_7, (MR_Integer) 0)));

#line 527 "code_info.m"
                  {
#line 527 "code_info.m"
                    mercury__int__max_3_p_0(ll_backend__code_info__N_20, ll_backend__code_info__STATE_VARIABLE_Max_0_2, &ll_backend__code_info__STATE_VARIABLE_Max_17_17);
                  }
#line 10209 "ll_backend.code_info.c"
                }
#line 10211 "ll_backend.code_info.c"
                break;
#line 10213 "ll_backend.code_info.c"
            }
#line 532 "code_info.m"
            /* direct tailcall eliminated */
#line 532 "code_info.m"
            {
#line 532 "code_info.m"
              MR_Word ll_backend__code_info__HeadVar__1__tmp_copy_1 = ll_backend__code_info__Slots_8;
#line 532 "code_info.m"
              MR_Integer ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2 = ll_backend__code_info__STATE_VARIABLE_Max_17_17;

#line 532 "code_info.m"
              ll_backend__code_info__STATE_VARIABLE_Max_0_2 = ll_backend__code_info__STATE_VARIABLE_Max_0__tmp_copy_2;
#line 532 "code_info.m"
              ll_backend__code_info__HeadVar__1_1 = ll_backend__code_info__HeadVar__1__tmp_copy_1;
#line 532 "code_info.m"
            }
#line 532 "code_info.m"
            continue;
#line 516 "code_info.m"
          }
#line 515 "code_info.m"
      }
#line 515 "code_info.m"
      break;
#line 515 "code_info.m"
    }
#line 513 "code_info.m"
}

#line 436 "code_info.m"
static MR_Word MR_CALL 
ll_backend__code_info__init_exprn_opts_1_f_0(
#line 436 "code_info.m"
  MR_Word ll_backend__code_info__Globals_3)
#line 436 "code_info.m"
{
#line 438 "code_info.m"
  {
#line 438 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_4;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptNLG_5;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__NLG_6;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptASM_7;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__ASM_8;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptSGCell_9;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__SGCell_10;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptUBF_11;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__UBF_12;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptFloatRegs_13;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__UseFloatRegs_14;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__FloatDwords_15;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__DetStackFloatWidth_16;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptSGFloat_17;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__SGFloat_18;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__OptStaticCodeAddr_19;
#line 438 "code_info.m"
    MR_Word ll_backend__code_info__StaticCodeAddrs_20;

#line 439 "code_info.m"
    {
#line 439 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 250, &ll_backend__code_info__OptNLG_5);
    }
#line 443 "code_info.m"
#line 443 "code_info.m"
    switch (ll_backend__code_info__OptNLG_5) {
#line 443 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 443 "code_info.m"
      case (MR_Integer) 0:
#line 445 "code_info.m"
        ll_backend__code_info__NLG_6 = (MR_Integer) 1;
#line 443 "code_info.m"
        break;
#line 443 "code_info.m"
      case (MR_Integer) 1:
#line 442 "code_info.m"
        ll_backend__code_info__NLG_6 = (MR_Integer) 0;
#line 443 "code_info.m"
        break;
#line 443 "code_info.m"
    }
#line 447 "code_info.m"
    {
#line 447 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 252, &ll_backend__code_info__OptASM_7);
    }
#line 451 "code_info.m"
#line 451 "code_info.m"
    switch (ll_backend__code_info__OptASM_7) {
#line 451 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 451 "code_info.m"
      case (MR_Integer) 0:
#line 453 "code_info.m"
        ll_backend__code_info__ASM_8 = (MR_Integer) 1;
#line 451 "code_info.m"
        break;
#line 451 "code_info.m"
      case (MR_Integer) 1:
#line 450 "code_info.m"
        ll_backend__code_info__ASM_8 = (MR_Integer) 0;
#line 451 "code_info.m"
        break;
#line 451 "code_info.m"
    }
#line 455 "code_info.m"
    {
#line 455 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 451, &ll_backend__code_info__OptSGCell_9);
    }
#line 459 "code_info.m"
#line 459 "code_info.m"
    switch (ll_backend__code_info__OptSGCell_9) {
#line 459 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "code_info.m"
      case (MR_Integer) 0:
#line 461 "code_info.m"
        ll_backend__code_info__SGCell_10 = (MR_Integer) 1;
#line 459 "code_info.m"
        break;
#line 459 "code_info.m"
      case (MR_Integer) 1:
#line 458 "code_info.m"
        ll_backend__code_info__SGCell_10 = (MR_Integer) 0;
#line 459 "code_info.m"
        break;
#line 459 "code_info.m"
    }
#line 463 "code_info.m"
    {
#line 463 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 244, &ll_backend__code_info__OptUBF_11);
    }
#line 467 "code_info.m"
#line 467 "code_info.m"
    switch (ll_backend__code_info__OptUBF_11) {
#line 467 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 467 "code_info.m"
      case (MR_Integer) 0:
#line 469 "code_info.m"
        ll_backend__code_info__UBF_12 = (MR_Integer) 1;
#line 467 "code_info.m"
        break;
#line 467 "code_info.m"
      case (MR_Integer) 1:
#line 466 "code_info.m"
        ll_backend__code_info__UBF_12 = (MR_Integer) 0;
#line 467 "code_info.m"
        break;
#line 467 "code_info.m"
    }
#line 471 "code_info.m"
    {
#line 471 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 254, &ll_backend__code_info__OptFloatRegs_13);
    }
#line 475 "code_info.m"
#line 475 "code_info.m"
    switch (ll_backend__code_info__OptFloatRegs_13) {
#line 475 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "code_info.m"
      case (MR_Integer) 0:
#line 477 "code_info.m"
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 1;
#line 475 "code_info.m"
        break;
#line 475 "code_info.m"
      case (MR_Integer) 1:
#line 474 "code_info.m"
        ll_backend__code_info__UseFloatRegs_14 = (MR_Integer) 0;
#line 475 "code_info.m"
        break;
#line 475 "code_info.m"
    }
#line 479 "code_info.m"
    {
#line 479 "code_info.m"
      libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__code_info__Globals_3, &ll_backend__code_info__FloatDwords_15);
    }
#line 483 "code_info.m"
#line 483 "code_info.m"
    switch (ll_backend__code_info__FloatDwords_15) {
#line 483 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 483 "code_info.m"
      case (MR_Integer) 0:
#line 485 "code_info.m"
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 0;
#line 483 "code_info.m"
        break;
#line 483 "code_info.m"
      case (MR_Integer) 1:
#line 482 "code_info.m"
        ll_backend__code_info__DetStackFloatWidth_16 = (MR_Integer) 1;
#line 483 "code_info.m"
        break;
#line 483 "code_info.m"
    }
#line 487 "code_info.m"
    {
#line 487 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 452, &ll_backend__code_info__OptSGFloat_17);
    }
#line 491 "code_info.m"
#line 491 "code_info.m"
    switch (ll_backend__code_info__OptSGFloat_17) {
#line 491 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 491 "code_info.m"
      case (MR_Integer) 0:
#line 493 "code_info.m"
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 1;
#line 491 "code_info.m"
        break;
#line 491 "code_info.m"
      case (MR_Integer) 1:
#line 490 "code_info.m"
        ll_backend__code_info__SGFloat_18 = (MR_Integer) 0;
#line 491 "code_info.m"
        break;
#line 491 "code_info.m"
    }
#line 495 "code_info.m"
    {
#line 495 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_3, (MR_Integer) 453, &ll_backend__code_info__OptStaticCodeAddr_19);
    }
#line 500 "code_info.m"
#line 500 "code_info.m"
    switch (ll_backend__code_info__OptStaticCodeAddr_19) {
#line 500 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 500 "code_info.m"
      case (MR_Integer) 0:
#line 502 "code_info.m"
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 1;
#line 500 "code_info.m"
        break;
#line 500 "code_info.m"
      case (MR_Integer) 1:
#line 499 "code_info.m"
        ll_backend__code_info__StaticCodeAddrs_20 = (MR_Integer) 0;
#line 500 "code_info.m"
        break;
#line 500 "code_info.m"
    }
#line 504 "code_info.m"
    {
#line 504 "code_info.m"
      ll_backend__code_info__ExprnOpts_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 504 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__ExprnOpts_4, 0) = ((MR_Box) ((ll_backend__code_info__NLG_6 | ((((ll_backend__code_info__ASM_8 << (MR_Integer) 1)) | ((((ll_backend__code_info__UBF_12 << (MR_Integer) 2)) | ((((ll_backend__code_info__UseFloatRegs_14 << (MR_Integer) 3)) | ((((ll_backend__code_info__DetStackFloatWidth_16 << (MR_Integer) 4)) | ((((ll_backend__code_info__SGCell_10 << (MR_Integer) 5)) | ((((ll_backend__code_info__SGFloat_18 << (MR_Integer) 6)) | ((ll_backend__code_info__StaticCodeAddrs_20 << (MR_Integer) 7)))))))))))))))));
#line 504 "code_info.m"
    }
#line 438 "code_info.m"
    return ll_backend__code_info__ExprnOpts_4;
#line 438 "code_info.m"
  }
#line 436 "code_info.m"
}

#line 183 "code_info.m"
static void MR_CALL 
ll_backend__code_info__set_layout_info_3_p_0(
#line 183 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 183 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 183 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 183 "code_info.m"
{
#line 645 "code_info.m"
  {
#line 645 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 645 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 646 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 646 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));

#line 646 "code_info.m"
    {
#line 646 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__X_4));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 646 "code_info.m"
    }
#line 646 "code_info.m"
    {
#line 646 "code_info.m"
      MR_Word base;
#line 646 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 646 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 646 "code_info.m"
    }
#line 645 "code_info.m"
  }
#line 183 "code_info.m"
}

#line 167 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_used_env_vars_3_p_0(
#line 167 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 167 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 167 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 167 "code_info.m"
{
#line 668 "code_info.m"
  {
#line 668 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 668 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 669 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 669 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 669 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 669 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 669 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));

#line 669 "code_info.m"
    {
#line 669 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__X_4));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 669 "code_info.m"
    }
#line 669 "code_info.m"
    {
#line 669 "code_info.m"
      MR_Word base;
#line 669 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 669 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 669 "code_info.m"
    }
#line 668 "code_info.m"
  }
#line 167 "code_info.m"
}

#line 165 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_alloc_sites_3_p_0(
#line 165 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 165 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 165 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 165 "code_info.m"
{
#line 666 "code_info.m"
  {
#line 666 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 666 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 667 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 667 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));

#line 667 "code_info.m"
    {
#line 667 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__X_4));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 667 "code_info.m"
    }
#line 667 "code_info.m"
    {
#line 667 "code_info.m"
      MR_Word base;
#line 667 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 667 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 667 "code_info.m"
    }
#line 666 "code_info.m"
  }
#line 165 "code_info.m"
}

#line 163 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_static_cell_info_3_p_0(
#line 163 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 163 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 163 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 163 "code_info.m"
{
#line 664 "code_info.m"
  {
#line 664 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 664 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 665 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 665 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));

#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__X_4));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 665 "code_info.m"
    }
#line 665 "code_info.m"
    {
#line 665 "code_info.m"
      MR_Word base;
#line 665 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 665 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 665 "code_info.m"
    }
#line 664 "code_info.m"
  }
#line 163 "code_info.m"
}

#line 161 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_created_temp_frame_3_p_0(
#line 161 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 161 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 161 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 161 "code_info.m"
{
#line 662 "code_info.m"
  {
#line 662 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 662 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 662 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 662 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 663 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 663 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 663 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 663 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 663 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));

#line 663 "code_info.m"
    {
#line 663 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__X_4));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 663 "code_info.m"
    }
#line 663 "code_info.m"
    {
#line 663 "code_info.m"
      MR_Word base;
#line 663 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 663 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 663 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 663 "code_info.m"
    }
#line 662 "code_info.m"
  }
#line 161 "code_info.m"
}

#line 157 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_persistent_temps_3_p_0(
#line 157 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 157 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 157 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 157 "code_info.m"
{
#line 656 "code_info.m"
  {
#line 656 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 656 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 657 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 657 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 657 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 657 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 657 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));

#line 657 "code_info.m"
    {
#line 657 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__X_4));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 657 "code_info.m"
    }
#line 657 "code_info.m"
    {
#line 657 "code_info.m"
      MR_Word base;
#line 657 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 657 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 657 "code_info.m"
    }
#line 656 "code_info.m"
  }
#line 157 "code_info.m"
}

#line 155 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_temp_content_map_3_p_0(
#line 155 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 155 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 155 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 155 "code_info.m"
{
#line 654 "code_info.m"
  {
#line 654 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 654 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 655 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 655 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 655 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 655 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 655 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));

#line 655 "code_info.m"
    {
#line 655 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__X_4));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 655 "code_info.m"
    }
#line 655 "code_info.m"
    {
#line 655 "code_info.m"
      MR_Word base;
#line 655 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 655 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 655 "code_info.m"
    }
#line 654 "code_info.m"
  }
#line 155 "code_info.m"
}

#line 153 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_max_temp_slot_count_3_p_0(
#line 153 "code_info.m"
  MR_Integer ll_backend__code_info__X_4,
#line 153 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 153 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 153 "code_info.m"
{
#line 652 "code_info.m"
  {
#line 652 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 652 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 652 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 652 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));
#line 653 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 653 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 653 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 653 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 653 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));

#line 653 "code_info.m"
    {
#line 653 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__X_4));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 653 "code_info.m"
    }
#line 653 "code_info.m"
    {
#line 653 "code_info.m"
      MR_Word base;
#line 653 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 653 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 653 "code_info.m"
    }
#line 652 "code_info.m"
  }
#line 153 "code_info.m"
}

#line 151 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(
#line 151 "code_info.m"
  MR_Integer ll_backend__code_info__MR_5,
#line 151 "code_info.m"
  MR_Integer ll_backend__code_info__MF_6,
#line 151 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_8,
#line 151 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_9)
#line 151 "code_info.m"
{
#line 649 "code_info.m"
  {
#line 649 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 1)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_8, (MR_Integer) 0)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 0)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 1)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 2)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 3)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 6)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 7)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 8)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 9)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 10)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 11)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 12)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 13)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 14)));
#line 649 "code_info.m"
    MR_Integer ll_backend__code_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 15)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 16)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 17)));
#line 649 "code_info.m"
    MR_Word ll_backend__code_info__V_35_35 = ll_backend__code_info__V_16_16;
#line 650 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 4)));
#line 650 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_11_11, (MR_Integer) 5)));

#line 651 "code_info.m"
    {
#line 651 "code_info.m"
      ll_backend__code_info__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 0) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 1) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 2) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 3) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 4) = ((MR_Box) (ll_backend__code_info__MR_5));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 5) = ((MR_Box) (ll_backend__code_info__MF_6));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 6) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 7) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 8) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 9) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 10) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 11) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 12) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 13) = ((MR_Box) (ll_backend__code_info__V_30_30));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 14) = ((MR_Box) (ll_backend__code_info__V_31_31));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 15) = ((MR_Box) (ll_backend__code_info__V_32_32));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 16) = ((MR_Box) (ll_backend__code_info__V_33_33));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_15_15, 17) = ((MR_Box) (ll_backend__code_info__V_34_34));
#line 651 "code_info.m"
    }
#line 651 "code_info.m"
    {
#line 651 "code_info.m"
      MR_Word base;
#line 651 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_9 = base;
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_35_35));
#line 651 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_15_15));
#line 651 "code_info.m"
    }
#line 649 "code_info.m"
  }
#line 151 "code_info.m"
}

#line 149 "code_info.m"
void MR_CALL 
ll_backend__code_info__set_proc_trace_events_3_p_0(
#line 149 "code_info.m"
  MR_Word ll_backend__code_info__X_4,
#line 149 "code_info.m"
  MR_Word ll_backend__code_info__STATE_VARIABLE_CI_0_6,
#line 149 "code_info.m"
  MR_Word * ll_backend__code_info__STATE_VARIABLE_CI_7)
#line 149 "code_info.m"
{
#line 647 "code_info.m"
  {
#line 647 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 1)));
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10;
#line 647 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__STATE_VARIABLE_CI_0_6, (MR_Integer) 0)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 0)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 1)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 2)));
#line 648 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 4)));
#line 648 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 5)));
#line 648 "code_info.m"
    MR_Integer ll_backend__code_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 6)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 7)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 8)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 9)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 10)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 11)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 12)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 13)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 14)));
#line 648 "code_info.m"
    MR_Integer ll_backend__code_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 15)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 16)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 17)));
#line 648 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_9_9, (MR_Integer) 3)));

#line 648 "code_info.m"
    {
#line 648 "code_info.m"
      ll_backend__code_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 0) = ((MR_Box) (ll_backend__code_info__V_12_12));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 1) = ((MR_Box) (ll_backend__code_info__V_13_13));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 2) = ((MR_Box) (ll_backend__code_info__V_14_14));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 3) = ((MR_Box) (ll_backend__code_info__X_4));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 4) = ((MR_Box) (ll_backend__code_info__V_16_16));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 5) = ((MR_Box) (ll_backend__code_info__V_17_17));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 6) = ((MR_Box) (ll_backend__code_info__V_18_18));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 7) = ((MR_Box) (ll_backend__code_info__V_19_19));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 8) = ((MR_Box) (ll_backend__code_info__V_20_20));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 9) = ((MR_Box) (ll_backend__code_info__V_21_21));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 10) = ((MR_Box) (ll_backend__code_info__V_22_22));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 11) = ((MR_Box) (ll_backend__code_info__V_23_23));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 12) = ((MR_Box) (ll_backend__code_info__V_24_24));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 13) = ((MR_Box) (ll_backend__code_info__V_25_25));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 14) = ((MR_Box) (ll_backend__code_info__V_26_26));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 15) = ((MR_Box) (ll_backend__code_info__V_27_27));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 16) = ((MR_Box) (ll_backend__code_info__V_28_28));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_10_10, 17) = ((MR_Box) (ll_backend__code_info__V_29_29));
#line 648 "code_info.m"
    }
#line 648 "code_info.m"
    {
#line 648 "code_info.m"
      MR_Word base;
#line 648 "code_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "code_info.m"
      *ll_backend__code_info__STATE_VARIABLE_CI_7 = base;
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__code_info__V_11_11));
#line 648 "code_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__code_info__V_10_10));
#line 648 "code_info.m"
    }
#line 647 "code_info.m"
  }
#line 149 "code_info.m"
}

#line 142 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_out_of_line_code_2_p_0(
#line 142 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 142 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 142 "code_info.m"
{
#line 635 "code_info.m"
  {
#line 635 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 635 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 636 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 636 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 636 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 636 "code_info.m"
    MR_Integer ll_backend__code_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 636 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));

#line 636 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 635 "code_info.m"
  }
#line 142 "code_info.m"
}

#line 141 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_used_env_vars_2_p_0(
#line 141 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 141 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 141 "code_info.m"
{
#line 633 "code_info.m"
  {
#line 633 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 633 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 634 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 634 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 634 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 634 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 634 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 634 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 634 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 634 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 634 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 633 "code_info.m"
  }
#line 141 "code_info.m"
}

#line 139 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_alloc_sites_2_p_0(
#line 139 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 139 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 139 "code_info.m"
{
#line 631 "code_info.m"
  {
#line 631 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 631 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 632 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 632 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 632 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 632 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 632 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 632 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 632 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 631 "code_info.m"
  }
#line 139 "code_info.m"
}

#line 138 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_static_cell_info_2_p_0(
#line 138 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 138 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 138 "code_info.m"
{
#line 629 "code_info.m"
  {
#line 629 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 629 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 630 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 630 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 630 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 630 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 630 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 630 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 630 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 630 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 629 "code_info.m"
  }
#line 138 "code_info.m"
}

#line 136 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_closure_layouts_2_p_0(
#line 136 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 136 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 136 "code_info.m"
{
#line 627 "code_info.m"
  {
#line 627 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 627 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 628 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 628 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 628 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 628 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 628 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 628 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 628 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 628 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 628 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 628 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 628 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 628 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 628 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 627 "code_info.m"
  }
#line 136 "code_info.m"
}

#line 134 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_persistent_temps_2_p_0(
#line 134 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 134 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 134 "code_info.m"
{
#line 623 "code_info.m"
  {
#line 623 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 623 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 624 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 624 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 624 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 624 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 624 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 624 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 624 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 624 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 624 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 624 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 624 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 624 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 624 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 624 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 624 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 623 "code_info.m"
  }
#line 134 "code_info.m"
}

#line 132 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_temp_content_map_2_p_0(
#line 132 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 132 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 132 "code_info.m"
{
#line 621 "code_info.m"
  {
#line 621 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 621 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 622 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 622 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 622 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 622 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 622 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 622 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 622 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 622 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 622 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 622 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 622 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 622 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 622 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 622 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 622 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 622 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 621 "code_info.m"
  }
#line 132 "code_info.m"
}

#line 131 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_max_temp_slot_count_2_p_0(
#line 131 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 131 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 131 "code_info.m"
{
#line 619 "code_info.m"
  {
#line 619 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 619 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 620 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 620 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 620 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 620 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 620 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 620 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 620 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 620 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 620 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 620 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 620 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 620 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 620 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 620 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 619 "code_info.m"
  }
#line 131 "code_info.m"
}

#line 130 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_created_temp_frame_2_p_0(
#line 130 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 130 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 130 "code_info.m"
{
#line 617 "code_info.m"
  {
#line 617 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 617 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 618 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 618 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 618 "code_info.m"
    MR_Integer ll_backend__code_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 618 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 618 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 618 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 618 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 618 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 618 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 618 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 618 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 618 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 617 "code_info.m"
  }
#line 130 "code_info.m"
}

#line 129 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(
#line 129 "code_info.m"
  MR_Word ll_backend__code_info__CI_4,
#line 129 "code_info.m"
  MR_Integer * ll_backend__code_info__MaxRegR_5,
#line 129 "code_info.m"
  MR_Integer * ll_backend__code_info__MaxRegF_6)
#line 129 "code_info.m"
{
#line 614 "code_info.m"
  {
#line 614 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 614 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 1)));
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_4, (MR_Integer) 0)));
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 0)));
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 1)));
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 2)));
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 3)));
#line 615 "code_info.m"
    MR_Integer ll_backend__code_info__V_15_15;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 615 "code_info.m"
    MR_Integer ll_backend__code_info__V_24_24;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 615 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 615 "code_info.m"
    *ll_backend__code_info__MaxRegR_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 4)));
#line 615 "code_info.m"
    *ll_backend__code_info__MaxRegF_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 5)));
#line 615 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 6)));
#line 615 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 7)));
#line 615 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 8)));
#line 615 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 9)));
#line 615 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 10)));
#line 615 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 11)));
#line 615 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 12)));
#line 615 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 13)));
#line 615 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 14)));
#line 615 "code_info.m"
    ll_backend__code_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 15)));
#line 615 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 16)));
#line 615 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_7_7, (MR_Integer) 17)));
#line 614 "code_info.m"
  }
#line 129 "code_info.m"
}

#line 128 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_trace_events_2_p_0(
#line 128 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 128 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 128 "code_info.m"
{
#line 612 "code_info.m"
  {
#line 612 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 612 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 613 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 613 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 613 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 613 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 613 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 613 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 613 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 613 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 613 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 613 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 613 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 613 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 613 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 613 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 613 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 613 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 613 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 613 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 613 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 613 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 612 "code_info.m"
  }
#line 128 "code_info.m"
}

#line 127 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_layout_info_2_p_0(
#line 127 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 127 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 127 "code_info.m"
{
#line 610 "code_info.m"
  {
#line 610 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 610 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 611 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 611 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 611 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 611 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 611 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 611 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 611 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 611 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 611 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 611 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 611 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 611 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 611 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 611 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 611 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 611 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 611 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 611 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 610 "code_info.m"
  }
#line 127 "code_info.m"
}

#line 126 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_succip_used_2_p_0(
#line 126 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 126 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 126 "code_info.m"
{
#line 608 "code_info.m"
  {
#line 608 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 608 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 609 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 609 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 609 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 609 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 609 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 609 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 609 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 609 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 609 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 609 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 609 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 609 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 609 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 609 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 609 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 609 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 609 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 609 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 609 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 609 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 609 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 609 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 608 "code_info.m"
  }
#line 126 "code_info.m"
}

#line 125 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_label_counter_2_p_0(
#line 125 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 125 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 125 "code_info.m"
{
#line 606 "code_info.m"
  {
#line 606 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 606 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_12_12;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 607 "code_info.m"
    MR_Integer ll_backend__code_info__V_21_21;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 607 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;

#line 607 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 607 "code_info.m"
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 607 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 607 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 607 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 607 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 607 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 607 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 607 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 607 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 607 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 607 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 607 "code_info.m"
    ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)));
#line 607 "code_info.m"
    ll_backend__code_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 607 "code_info.m"
    ll_backend__code_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 607 "code_info.m"
    ll_backend__code_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 15)));
#line 607 "code_info.m"
    ll_backend__code_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 16)));
#line 607 "code_info.m"
    ll_backend__code_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 17)));
#line 606 "code_info.m"
  }
#line 125 "code_info.m"
}

#line 123 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_const_struct_map_2_p_0(
#line 123 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 123 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 123 "code_info.m"
{
#line 603 "code_info.m"
  {
#line 603 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 603 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 604 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 604 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 604 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));

#line 604 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 603 "code_info.m"
  }
#line 123 "code_info.m"
}

#line 121 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(
#line 121 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 121 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 121 "code_info.m"
{
#line 601 "code_info.m"
  {
#line 601 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 601 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 602 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 602 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 602 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 602 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 602 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 601 "code_info.m"
  }
#line 121 "code_info.m"
}

#line 120 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_lcmc_null_2_p_0(
#line 120 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 120 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 120 "code_info.m"
{
#line 599 "code_info.m"
  {
#line 599 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 599 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 600 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 600 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 600 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 600 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 600 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 600 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 599 "code_info.m"
  }
#line 120 "code_info.m"
}

#line 119 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_auto_comments_2_p_0(
#line 119 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 119 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 119 "code_info.m"
{
#line 597 "code_info.m"
  {
#line 597 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 597 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 598 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 598 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 598 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 598 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 598 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 598 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 598 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 597 "code_info.m"
  }
#line 119 "code_info.m"
}

#line 118 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_region_ops_2_p_0(
#line 118 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 118 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 118 "code_info.m"
{
#line 595 "code_info.m"
  {
#line 595 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 595 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 596 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 596 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 596 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 596 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 596 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 596 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 596 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 596 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 595 "code_info.m"
  }
#line 118 "code_info.m"
}

#line 117 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_emit_region_ops_2_p_0(
#line 117 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 117 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 117 "code_info.m"
{
#line 593 "code_info.m"
  {
#line 593 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 593 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 594 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 594 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 594 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 594 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 594 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 594 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 593 "code_info.m"
  }
#line 117 "code_info.m"
}

#line 116 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_trail_ops_2_p_0(
#line 116 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 116 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 116 "code_info.m"
{
#line 591 "code_info.m"
  {
#line 591 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 591 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 592 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 592 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 592 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 592 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 592 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 592 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 592 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 592 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 592 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 591 "code_info.m"
  }
#line 116 "code_info.m"
}

#line 115 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_emit_trail_ops_2_p_0(
#line 115 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 115 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 115 "code_info.m"
{
#line 589 "code_info.m"
  {
#line 589 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 589 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 590 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 590 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 590 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 590 "code_info.m"
    *ll_backend__code_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 590 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 590 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 589 "code_info.m"
  }
#line 115 "code_info.m"
}

#line 114 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_opt_no_return_calls_2_p_0(
#line 114 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 114 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 114 "code_info.m"
{
#line 587 "code_info.m"
  {
#line 587 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 587 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 588 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 588 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 588 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 588 "code_info.m"
    *ll_backend__code_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 588 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 588 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 587 "code_info.m"
  }
#line 114 "code_info.m"
}

#line 113 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_maybe_trace_info_2_p_0(
#line 113 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 113 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 113 "code_info.m"
{
#line 585 "code_info.m"
  {
#line 585 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 585 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 586 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 586 "code_info.m"
    MR_Integer ll_backend__code_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 586 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 586 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 586 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 586 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 586 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 585 "code_info.m"
  }
#line 113 "code_info.m"
}

#line 112 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_var_slot_count_2_p_0(
#line 112 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 112 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 112 "code_info.m"
{
#line 583 "code_info.m"
  {
#line 583 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 583 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 584 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 584 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 584 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 584 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 584 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 584 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 584 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 583 "code_info.m"
  }
#line 112 "code_info.m"
}

#line 111 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_vartypes_2_p_0(
#line 111 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 111 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 111 "code_info.m"
{
#line 581 "code_info.m"
  {
#line 581 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 581 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 582 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 582 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 582 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 582 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 582 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 582 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 582 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 582 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 581 "code_info.m"
  }
#line 111 "code_info.m"
}

#line 110 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_varset_2_p_0(
#line 110 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 110 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 110 "code_info.m"
{
#line 579 "code_info.m"
  {
#line 579 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 579 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 580 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 580 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 580 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 580 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 580 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 580 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 580 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 580 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 580 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 580 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 579 "code_info.m"
  }
#line 110 "code_info.m"
}

#line 109 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_label_2_p_0(
#line 109 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 109 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 109 "code_info.m"
{
#line 577 "code_info.m"
  {
#line 577 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 577 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 578 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 578 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 578 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 578 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 578 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 578 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 578 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 578 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 578 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 578 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 577 "code_info.m"
  }
#line 109 "code_info.m"
}

#line 108 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_info_2_p_0(
#line 108 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 108 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 108 "code_info.m"
{
#line 575 "code_info.m"
  {
#line 575 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 575 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 576 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 576 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 576 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 576 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 576 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 576 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 576 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 576 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 576 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 576 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 576 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 575 "code_info.m"
  }
#line 108 "code_info.m"
}

#line 107 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_pred_info_2_p_0(
#line 107 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 107 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 107 "code_info.m"
{
#line 573 "code_info.m"
  {
#line 573 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 573 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 574 "code_info.m"
    MR_Integer ll_backend__code_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 574 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 574 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 574 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 574 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 574 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 574 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 574 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 574 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 574 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 574 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 574 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 574 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 573 "code_info.m"
  }
#line 107 "code_info.m"
}

#line 106 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_proc_id_2_p_0(
#line 106 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 106 "code_info.m"
  MR_Integer * ll_backend__code_info__X_4)
#line 106 "code_info.m"
{
#line 571 "code_info.m"
  {
#line 571 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 571 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 572 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 572 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 572 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 572 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 572 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 572 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 572 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 572 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 572 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 572 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 572 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 572 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 572 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 571 "code_info.m"
  }
#line 106 "code_info.m"
}

#line 105 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_pred_id_2_p_0(
#line 105 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 105 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 105 "code_info.m"
{
#line 569 "code_info.m"
  {
#line 569 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 569 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 570 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 570 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 570 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 570 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 570 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 570 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 570 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 570 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 570 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 570 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 570 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 570 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 570 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 570 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 570 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 569 "code_info.m"
  }
#line 105 "code_info.m"
}

#line 104 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_exprn_opts_2_p_0(
#line 104 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 104 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 104 "code_info.m"
{
#line 567 "code_info.m"
  {
#line 567 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 567 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 568 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 568 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 568 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 568 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 568 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 568 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 568 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 568 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 568 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 568 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 568 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 568 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 568 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 568 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 568 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 568 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 567 "code_info.m"
  }
#line 104 "code_info.m"
}

#line 103 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_globals_2_p_0(
#line 103 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 103 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 103 "code_info.m"
{
#line 565 "code_info.m"
  {
#line 565 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 565 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 566 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 566 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 566 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 566 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 566 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 566 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 566 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 566 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 566 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 566 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 566 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 566 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 566 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 566 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 566 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 566 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 566 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 565 "code_info.m"
  }
#line 103 "code_info.m"
}

#line 102 "code_info.m"
void MR_CALL 
ll_backend__code_info__get_module_info_2_p_0(
#line 102 "code_info.m"
  MR_Word ll_backend__code_info__CI_3,
#line 102 "code_info.m"
  MR_Word * ll_backend__code_info__X_4)
#line 102 "code_info.m"
{
#line 563 "code_info.m"
  {
#line 563 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 563 "code_info.m"
    MR_Word ll_backend__code_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 0)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__CI_3, (MR_Integer) 1)));
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_7_7;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_8_8;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_9_9;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_10_10;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_11_11;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_12_12;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_13_13;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_14_14;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_15_15;
#line 564 "code_info.m"
    MR_Integer ll_backend__code_info__V_16_16;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_17_17;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_18_18;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_19_19;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_20_20;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_21_21;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_22_22;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_23_23;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_24_24;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_25_25;
#line 564 "code_info.m"
    MR_Word ll_backend__code_info__V_26_26;

#line 564 "code_info.m"
    *ll_backend__code_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 0)));
#line 564 "code_info.m"
    ll_backend__code_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 1)));
#line 564 "code_info.m"
    ll_backend__code_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 2)));
#line 564 "code_info.m"
    ll_backend__code_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 3)));
#line 564 "code_info.m"
    ll_backend__code_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 4)));
#line 564 "code_info.m"
    ll_backend__code_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 5)));
#line 564 "code_info.m"
    ll_backend__code_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 6)));
#line 564 "code_info.m"
    ll_backend__code_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 7)));
#line 564 "code_info.m"
    ll_backend__code_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 8)));
#line 564 "code_info.m"
    ll_backend__code_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 9)));
#line 564 "code_info.m"
    ll_backend__code_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 10)));
#line 564 "code_info.m"
    ll_backend__code_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 11)));
#line 564 "code_info.m"
    ll_backend__code_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 564 "code_info.m"
    ll_backend__code_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 13)));
#line 564 "code_info.m"
    ll_backend__code_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_info__V_5_5, (MR_Integer) 14)));
#line 563 "code_info.m"
  }
#line 102 "code_info.m"
}

#line 97 "code_info.m"
void MR_CALL 
ll_backend__code_info__code_info_init_13_p_0(
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__ModuleInfo_14,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__PredId_15,
#line 97 "code_info.m"
  MR_Integer ll_backend__code_info__ProcId_16,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__PredInfo_17,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__ProcInfo_18,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__SaveSuccip_19,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__StaticCellInfo_20,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__ConstStructMap_21,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__MaybeContainingGoalMap_22,
#line 97 "code_info.m"
  MR_Word ll_backend__code_info__TSRevStringTable_23,
#line 97 "code_info.m"
  MR_Integer ll_backend__code_info__TSStringTableSize_24,
#line 97 "code_info.m"
  MR_Word * ll_backend__code_info__TraceSlotInfo_25,
#line 97 "code_info.m"
  MR_Word * ll_backend__code_info__CodeInfo_26)
#line 97 "code_info.m"
{
#line 348 "code_info.m"
  {
#line 348 "code_info.m"
    MR_bool ll_backend__code_info__succeeded;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__TypeCtorInfo_76_76;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__Globals_27;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__ProcLabel_28;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__VarSet_29;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__VarTypes_30;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__StackSlots_31;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__ExprnOpts_32;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__TraceLevel_33;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__TempContentMap_34;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__PersistentTemps_35;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__LayoutMap_36;
#line 348 "code_info.m"
    MR_Integer ll_backend__code_info__VarSlotMax_37;
#line 348 "code_info.m"
    MR_Integer ll_backend__code_info__FixedSlots_38;
#line 348 "code_info.m"
    MR_Integer ll_backend__code_info__SlotMax_40;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__OptNoReturnCalls_41;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__UseTrail_42;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__DisableTrailOps_43;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__EmitTrailOps_44;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__OptTrailOps_45;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__OptRegionOps_46;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__UseRegions_47;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__EmitRegionOps_48;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__AutoComments_49;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__LCMCNull_50;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__CodeInfo0_51;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_60_60;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_62_62;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_63_63;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_69_69;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_73_73;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_74_74;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__V_75_75;
#line 348 "code_info.m"
    MR_Word ll_backend__code_info__StackSlotList_85;
#line 360 "code_info.m"
    MR_Word ll_backend__code_info__V_39_39;

#line 349 "code_info.m"
    {
#line 349 "code_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__code_info__ModuleInfo_14, &ll_backend__code_info__Globals_27);
    }
#line 350 "code_info.m"
    {
#line 350 "code_info.m"
      ll_backend__code_info__ProcLabel_28 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredId_15, ll_backend__code_info__ProcId_16);
    }
#line 351 "code_info.m"
    {
#line 351 "code_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarSet_29);
    }
#line 352 "code_info.m"
    {
#line 352 "code_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__VarTypes_30);
    }
#line 353 "code_info.m"
    {
#line 353 "code_info.m"
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__code_info__ProcInfo_18, &ll_backend__code_info__StackSlots_31);
    }
#line 354 "code_info.m"
    {
#line 354 "code_info.m"
      ll_backend__code_info__ExprnOpts_32 = ll_backend__code_info__init_exprn_opts_1_f_0(ll_backend__code_info__Globals_27);
    }
#line 355 "code_info.m"
    {
#line 355 "code_info.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__code_info__Globals_27, &ll_backend__code_info__TraceLevel_33);
    }
#line 14700 "ll_backend.code_info.c"
    ll_backend__code_info__TypeCtorInfo_76_76 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 356 "code_info.m"
    {
#line 356 "code_info.m"
      mercury__map__init_1_p_0(ll_backend__code_info__TypeCtorInfo_76_76, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0, &ll_backend__code_info__TempContentMap_34);
    }
#line 357 "code_info.m"
    {
#line 357 "code_info.m"
      mercury__set__init_1_p_0(ll_backend__code_info__TypeCtorInfo_76_76, &ll_backend__code_info__PersistentTemps_35);
    }
#line 358 "code_info.m"
    {
#line 358 "code_info.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_internal_layout_info_0, &ll_backend__code_info__LayoutMap_36);
    }
#line 510 "code_info.m"
    {
#line 510 "code_info.m"
      mercury__map__values_2_p_0((MR_Word) &ll_backend__code_info_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__code_info__StackSlots_31, &ll_backend__code_info__StackSlotList_85);
    }
#line 511 "code_info.m"
    {
#line 511 "code_info.m"
      ll_backend__code_info__max_var_slot_2_3_p_0(ll_backend__code_info__StackSlotList_85, (MR_Integer) 0, &ll_backend__code_info__VarSlotMax_37);
    }
#line 360 "code_info.m"
    {
#line 360 "code_info.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__Globals_27, &ll_backend__code_info__FixedSlots_38, &ll_backend__code_info__V_39_39);
    }
#line 362 "code_info.m"
    {
#line 362 "code_info.m"
      mercury__int__max_3_p_0(ll_backend__code_info__VarSlotMax_37, ll_backend__code_info__FixedSlots_38, &ll_backend__code_info__SlotMax_40);
    }
#line 363 "code_info.m"
    {
#line 363 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 325, &ll_backend__code_info__OptNoReturnCalls_41);
    }
#line 365 "code_info.m"
    {
#line 365 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 219, &ll_backend__code_info__UseTrail_42);
    }
#line 366 "code_info.m"
    {
#line 366 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 289, &ll_backend__code_info__DisableTrailOps_43);
    }
#line 368 "code_info.m"
    ll_backend__code_info__succeeded = (ll_backend__code_info__UseTrail_42 == (MR_Integer) 1);
#line 368 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 369 "code_info.m"
      ll_backend__code_info__succeeded = (ll_backend__code_info__DisableTrailOps_43 == (MR_Integer) 0);
#line 372 "code_info.m"
    if (ll_backend__code_info__succeeded)
#line 371 "code_info.m"
      ll_backend__code_info__EmitTrailOps_44 = (MR_Integer) 0;
#line 372 "code_info.m"
    else
#line 373 "code_info.m"
      ll_backend__code_info__EmitTrailOps_44 = (MR_Integer) 1;
#line 375 "code_info.m"
    {
#line 375 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 397, &ll_backend__code_info__OptTrailOps_45);
    }
#line 376 "code_info.m"
    {
#line 376 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 398, &ll_backend__code_info__OptRegionOps_46);
    }
#line 377 "code_info.m"
    {
#line 377 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 408, &ll_backend__code_info__UseRegions_47);
    }
#line 381 "code_info.m"
#line 381 "code_info.m"
    switch (ll_backend__code_info__UseRegions_47) {
#line 381 "code_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 381 "code_info.m"
      case (MR_Integer) 0:
#line 383 "code_info.m"
        ll_backend__code_info__EmitRegionOps_48 = (MR_Integer) 1;
#line 381 "code_info.m"
        break;
#line 381 "code_info.m"
      case (MR_Integer) 1:
#line 380 "code_info.m"
        ll_backend__code_info__EmitRegionOps_48 = (MR_Integer) 0;
#line 381 "code_info.m"
        break;
#line 381 "code_info.m"
    }
#line 385 "code_info.m"
    {
#line 385 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 140, &ll_backend__code_info__AutoComments_49);
    }
#line 386 "code_info.m"
    {
#line 386 "code_info.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__code_info__Globals_27, (MR_Integer) 366, &ll_backend__code_info__LCMCNull_50);
    }
#line 389 "code_info.m"
    {
#line 389 "code_info.m"
      ll_backend__code_info__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 0) = ((MR_Box) (ll_backend__code_info__ModuleInfo_14));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 1) = ((MR_Box) (ll_backend__code_info__Globals_27));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 2) = ((MR_Box) (ll_backend__code_info__ExprnOpts_32));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 3) = ((MR_Box) (ll_backend__code_info__PredId_15));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 4) = ((MR_Box) (ll_backend__code_info__ProcId_16));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 5) = ((MR_Box) (ll_backend__code_info__PredInfo_17));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 6) = ((MR_Box) (ll_backend__code_info__ProcInfo_18));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 7) = ((MR_Box) (ll_backend__code_info__ProcLabel_28));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 8) = ((MR_Box) (ll_backend__code_info__VarSet_29));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 9) = ((MR_Box) (ll_backend__code_info__VarTypes_30));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 10) = ((MR_Box) (ll_backend__code_info__SlotMax_40));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 12) = ((MR_Box) ((ll_backend__code_info__OptNoReturnCalls_41 | ((((ll_backend__code_info__EmitTrailOps_44 << (MR_Integer) 1)) | ((((ll_backend__code_info__OptTrailOps_45 << (MR_Integer) 2)) | ((((ll_backend__code_info__EmitRegionOps_48 << (MR_Integer) 3)) | ((((ll_backend__code_info__OptRegionOps_46 << (MR_Integer) 4)) | ((((ll_backend__code_info__AutoComments_49 << (MR_Integer) 5)) | ((ll_backend__code_info__LCMCNull_50 << (MR_Integer) 6)))))))))))))));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 13) = ((MR_Box) (ll_backend__code_info__MaybeContainingGoalMap_22));
#line 389 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_60_60, 14) = ((MR_Box) (ll_backend__code_info__ConstStructMap_21));
#line 389 "code_info.m"
    }
#line 413 "code_info.m"
    {
#line 413 "code_info.m"
      ll_backend__code_info__V_63_63 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 422 "code_info.m"
    {
#line 422 "code_info.m"
      ll_backend__code_info__V_69_69 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 426 "code_info.m"
    {
#line 426 "code_info.m"
      ll_backend__code_info__V_73_73 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    }
#line 427 "code_info.m"
    {
#line 427 "code_info.m"
      ll_backend__code_info__V_74_74 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 430 "code_info.m"
    {
#line 430 "code_info.m"
      ll_backend__code_info__V_75_75 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
#line 412 "code_info.m"
    {
#line 412 "code_info.m"
      ll_backend__code_info__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 18 * sizeof(MR_Word)), NULL, NULL);
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 0) = ((MR_Box) (ll_backend__code_info__V_63_63));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 1) = ((MR_Box) (ll_backend__code_info__SaveSuccip_19));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 2) = ((MR_Box) (ll_backend__code_info__LayoutMap_36));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 3) = ((MR_Box) ((MR_Integer) 0));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 4) = ((MR_Box) ((MR_Integer) -1));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 5) = ((MR_Box) ((MR_Integer) -1));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 6) = ((MR_Box) ((MR_Integer) 0));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 7) = ((MR_Box) (ll_backend__code_info__TempContentMap_34));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 8) = ((MR_Box) (ll_backend__code_info__PersistentTemps_35));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 9) = ((MR_Box) (ll_backend__code_info__V_69_69));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 11) = ((MR_Box) ((MR_Integer) 0));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 12) = ((MR_Box) (ll_backend__code_info__StaticCellInfo_20));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 13) = ((MR_Box) (ll_backend__code_info__V_73_73));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 14) = ((MR_Box) (ll_backend__code_info__V_74_74));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 15) = ((MR_Box) (ll_backend__code_info__TSStringTableSize_24));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 16) = ((MR_Box) (ll_backend__code_info__TSRevStringTable_23));
#line 412 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__V_62_62, 17) = ((MR_Box) (ll_backend__code_info__V_75_75));
#line 412 "code_info.m"
    }
#line 388 "code_info.m"
    {
#line 388 "code_info.m"
      ll_backend__code_info__CodeInfo0_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_51, 0) = ((MR_Box) (ll_backend__code_info__V_60_60));
#line 388 "code_info.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_info__CodeInfo0_51, 1) = ((MR_Box) (ll_backend__code_info__V_62_62));
#line 388 "code_info.m"
    }
#line 433 "code_info.m"
    {
#line 433 "code_info.m"
      ll_backend__code_info__init_maybe_trace_info_8_p_0(ll_backend__code_info__TraceLevel_33, ll_backend__code_info__Globals_27, ll_backend__code_info__ModuleInfo_14, ll_backend__code_info__PredInfo_17, ll_backend__code_info__ProcInfo_18, ll_backend__code_info__TraceSlotInfo_25, ll_backend__code_info__CodeInfo0_51, ll_backend__code_info__CodeInfo_26);
#line 433 "code_info.m"
      return;
    }
#line 348 "code_info.m"
  }
#line 97 "code_info.m"
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
