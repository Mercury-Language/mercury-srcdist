/*
** Automatically generated from `llds_out_global.m'
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


/* :- module ll_backend.llds_out.llds_out_global. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_global__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_global.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "counter.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 156 "ll_backend.llds_out.llds_out_global.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 686 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
#line 686 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 686 "llds_out_global.m"
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3);

#line 657 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
#line 657 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 642 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3);

#line 607 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
#line 607 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 607 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 607 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2);

#line 598 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
#line 598 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 598 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

#line 575 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
#line 575 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 575 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

#line 558 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
#line 558 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
#line 558 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6);

#line 536 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
#line 536 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 536 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 536 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

#line 519 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
#line 519 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 519 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 519 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

#line 514 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
#line 514 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 510 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
#line 510 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 510 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 502 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
#line 502 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Value_3);

#line 384 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
#line 384 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 369 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8);

#line 354 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
#line 354 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 354 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
#line 354 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8);

#line 333 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
#line 333 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 322 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8);

#line 141 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
#line 141 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 95 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
#line 95 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 499 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 499 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

#line 488 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
#line 488 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 488 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 481 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 481 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

#line 470 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
#line 470 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 470 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 132 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
#line 132 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 132 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[2][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 506 "ll_backend.llds_out.llds_out_global.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 686 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
#line 686 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 686 "llds_out_global.m"
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3)
#line 686 "llds_out_global.m"
{
#line 688 "llds_out_global.m"
  {
#line 688 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 688 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_4_4;

#line 688 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 688 "llds_out_global.m"
      {
#line 688 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 688 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_4_4)) == (MR_mktag((MR_Integer) 1)));
#line 688 "llds_out_global.m"
        if (ll_backend__llds_out__llds_out_global__succeeded)
#line 688 "llds_out_global.m"
          *ll_backend__llds_out__llds_out_global__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_4_4, (MR_Integer) 0)));
#line 688 "llds_out_global.m"
      }
#line 688 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 688 "llds_out_global.m"
  }
#line 686 "llds_out_global.m"
}

#line 657 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
#line 657 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 657 "llds_out_global.m"
{
#line 659 "llds_out_global.m"
  while (MR_TRUE)
#line 659 "llds_out_global.m"
    {
#line 659 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 659 "llds_out_global.m"
      {
#line 659 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 659 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "llds_out_global.m"
          {
#line 659 "llds_out_global.m"
          }
#line 659 "llds_out_global.m"
        else
#line 660 "llds_out_global.m"
          {
#line 660 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 660 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Ints_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

#line 661 "llds_out_global.m"
            {
#line 661 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_7);
            }
#line 666 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Ints_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "llds_out_global.m"
              {
#line 668 "llds_out_global.m"
                {
#line 668 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 667 "llds_out_global.m"
              }
#line 666 "llds_out_global.m"
            else
#line 663 "llds_out_global.m"
              {
#line 663 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__Int_23;
#line 663 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Ints_24;

#line 664 "llds_out_global.m"
                {
#line 664 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 660 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Int_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 0)));
#line 660 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Ints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 1)));
#line 661 "llds_out_global.m"
                {
#line 661 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_23);
                }
#line 666 "llds_out_global.m"
                if ((ll_backend__llds_out__llds_out_global__Ints_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "llds_out_global.m"
                  {
#line 668 "llds_out_global.m"
                    {
#line 668 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 667 "llds_out_global.m"
                  }
#line 666 "llds_out_global.m"
                else
#line 663 "llds_out_global.m"
                  {
#line 664 "llds_out_global.m"
                    {
#line 664 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
#line 665 "llds_out_global.m"
                    /* direct tailcall eliminated */
#line 665 "llds_out_global.m"
                    {
#line 665 "llds_out_global.m"
                      MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Ints_24;

#line 665 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 665 "llds_out_global.m"
                    }
#line 665 "llds_out_global.m"
                    continue;
#line 663 "llds_out_global.m"
                  }
#line 663 "llds_out_global.m"
              }
#line 660 "llds_out_global.m"
          }
#line 659 "llds_out_global.m"
      }
#line 659 "llds_out_global.m"
      break;
#line 659 "llds_out_global.m"
    }
#line 657 "llds_out_global.m"
}

#line 642 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
#line 642 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3)
#line 642 "llds_out_global.m"
{
#line 645 "llds_out_global.m"
  while (MR_TRUE)
#line 645 "llds_out_global.m"
    {
#line 645 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 645 "llds_out_global.m"
      {
#line 645 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 645 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "llds_out_global.m"
          {
#line 645 "llds_out_global.m"
          }
#line 645 "llds_out_global.m"
        else
#line 646 "llds_out_global.m"
          {
#line 646 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 0)));
#line 646 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 1)));

#line 647 "llds_out_global.m"
            {
#line 647 "llds_out_global.m"
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_2);
            }
#line 652 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Rvals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "llds_out_global.m"
              {
#line 654 "llds_out_global.m"
                {
#line 654 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 653 "llds_out_global.m"
              }
#line 652 "llds_out_global.m"
            else
#line 649 "llds_out_global.m"
              {
#line 649 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rval_33;
#line 649 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_34;

#line 650 "llds_out_global.m"
                {
#line 650 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 646 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Rval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 0)));
#line 646 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Rvals_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 1)));
#line 647 "llds_out_global.m"
                {
#line 647 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_33, ll_backend__llds_out__llds_out_global__Type_2);
                }
#line 652 "llds_out_global.m"
                if ((ll_backend__llds_out__llds_out_global__Rvals_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "llds_out_global.m"
                  {
#line 654 "llds_out_global.m"
                    {
#line 654 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 653 "llds_out_global.m"
                  }
#line 652 "llds_out_global.m"
                else
#line 649 "llds_out_global.m"
                  {
#line 650 "llds_out_global.m"
                    {
#line 650 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
#line 651 "llds_out_global.m"
                    /* direct tailcall eliminated */
#line 651 "llds_out_global.m"
                    {
#line 651 "llds_out_global.m"
                      MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_global__Rvals_34;

#line 651 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__HeadVar__3_3 = ll_backend__llds_out__llds_out_global__HeadVar__3__tmp_copy_3;
#line 651 "llds_out_global.m"
                    }
#line 651 "llds_out_global.m"
                    continue;
#line 649 "llds_out_global.m"
                  }
#line 649 "llds_out_global.m"
              }
#line 646 "llds_out_global.m"
          }
#line 645 "llds_out_global.m"
      }
#line 645 "llds_out_global.m"
      break;
#line 645 "llds_out_global.m"
    }
#line 642 "llds_out_global.m"
}

#line 607 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
#line 607 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 607 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 607 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2)
#line 607 "llds_out_global.m"
{
#line 607 "llds_out_global.m"
  {
#line 607 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 607 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 607 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__conv0_N_3;

#line 607 "llds_out_global.m"
    {
#line 607 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1), &ll_backend__llds_out__llds_out_global__conv0_N_3);
    }
#line 607 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 607 "llds_out_global.m"
      {
#line 607 "llds_out_global.m"
        *ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_N_3));
#line 607 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__succeeded = MR_TRUE;
#line 607 "llds_out_global.m"
      }
#line 607 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 607 "llds_out_global.m"
  }
#line 607 "llds_out_global.m"
}

#line 598 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
#line 598 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 598 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
#line 598 "llds_out_global.m"
{
#line 601 "llds_out_global.m"
  while (MR_TRUE)
#line 601 "llds_out_global.m"
    {
#line 601 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 601 "llds_out_global.m"
      {
#line 601 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 601 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "llds_out_global.m"
          {
#line 601 "llds_out_global.m"
          }
#line 601 "llds_out_global.m"
        else
#line 602 "llds_out_global.m"
          {
#line 602 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Group_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Groups_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));

#line 622 "llds_out_global.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Group_10)) == (MR_mktag((MR_Integer) 0))))
#line 604 "llds_out_global.m"
              {
#line 604 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
#line 604 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 2)));
#line 604 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
#line 606 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Ints_16;
#line 607 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_30_30;

#line 605 "llds_out_global.m"
                {
#line 605 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                }
#line 607 "llds_out_global.m"
                {
#line 607 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__succeeded = mercury__list__map_3_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[4], ll_backend__llds_out__llds_out_global__Rvals_15, &ll_backend__llds_out__llds_out_global__Ints_16);
                }
#line 607 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 607 "llds_out_global.m"
                  {
#line 608 "llds_out_global.m"
                    {
#line 608 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__V_30_30 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_13);
                    }
#line 608 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_30_30 == (MR_Integer) 1);
#line 607 "llds_out_global.m"
                  }
#line 606 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 613 "llds_out_global.m"
                  {
#line 613 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(ll_backend__llds_out__llds_out_global__Ints_16);
                  }
#line 606 "llds_out_global.m"
                else
#line 619 "llds_out_global.m"
                  {
#line 619 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Type_13, ll_backend__llds_out__llds_out_global__Rvals_15);
                  }
#line 621 "llds_out_global.m"
                {
#line 621 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "}");
                }
#line 604 "llds_out_global.m"
              }
#line 622 "llds_out_global.m"
            else
#line 623 "llds_out_global.m"
              {
#line 623 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
#line 623 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
#line 624 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__Int_19;
#line 625 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_24_24;
#line 625 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_47_47;

#line 688 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 688 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 688 "llds_out_global.m"
                  {
#line 688 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 1)));
#line 688 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 688 "llds_out_global.m"
                    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 688 "llds_out_global.m"
                      {
#line 688 "llds_out_global.m"
                        ll_backend__llds_out__llds_out_global__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_47_47, (MR_Integer) 0)));
#line 626 "llds_out_global.m"
                        {
#line 626 "llds_out_global.m"
                          ll_backend__llds_out__llds_out_global__V_24_24 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_41);
                        }
#line 626 "llds_out_global.m"
                        ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_24_24 == (MR_Integer) 1);
#line 688 "llds_out_global.m"
                      }
#line 688 "llds_out_global.m"
                  }
#line 624 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 712 "llds_out_global.m"
                  {
#line 712 "llds_out_global.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_19);
                  }
#line 624 "llds_out_global.m"
                else
#line 630 "llds_out_global.m"
                  {
#line 630 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_18, ll_backend__llds_out__llds_out_global__Type_41);
                  }
#line 623 "llds_out_global.m"
              }
#line 637 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Groups_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 638 "llds_out_global.m"
              {
#line 639 "llds_out_global.m"
                {
#line 639 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 638 "llds_out_global.m"
              }
#line 637 "llds_out_global.m"
            else
#line 634 "llds_out_global.m"
              {
#line 635 "llds_out_global.m"
                {
#line 635 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 636 "llds_out_global.m"
                /* direct tailcall eliminated */
#line 636 "llds_out_global.m"
                {
#line 636 "llds_out_global.m"
                  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_global__Groups_11;

#line 636 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2;
#line 636 "llds_out_global.m"
                }
#line 636 "llds_out_global.m"
                continue;
#line 634 "llds_out_global.m"
              }
#line 602 "llds_out_global.m"
          }
#line 601 "llds_out_global.m"
      }
#line 601 "llds_out_global.m"
      break;
#line 601 "llds_out_global.m"
    }
#line 598 "llds_out_global.m"
}

#line 575 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
#line 575 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 575 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
#line 575 "llds_out_global.m"
{
#line 578 "llds_out_global.m"
  while (MR_TRUE)
#line 578 "llds_out_global.m"
    {
#line 578 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 578 "llds_out_global.m"
      {
#line 578 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 578 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "llds_out_global.m"
          {
#line 578 "llds_out_global.m"
          }
#line 578 "llds_out_global.m"
        else
#line 579 "llds_out_global.m"
          {
#line 579 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypedRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
#line 579 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));
#line 579 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 0)));
#line 579 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 1)));
#line 581 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__N_15;
#line 582 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__V_20_20;
#line 582 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__V_21_21;

#line 582 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 582 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 582 "llds_out_global.m"
              {
#line 582 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 1)));
#line 582 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 582 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 582 "llds_out_global.m"
                  {
#line 582 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_20_20, (MR_Integer) 0)));
#line 583 "llds_out_global.m"
                    {
#line 583 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__V_21_21 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_14);
                    }
#line 583 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_21_21 == (MR_Integer) 1);
#line 582 "llds_out_global.m"
                  }
#line 582 "llds_out_global.m"
              }
#line 581 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 712 "llds_out_global.m"
              {
#line 712 "llds_out_global.m"
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__N_15);
              }
#line 581 "llds_out_global.m"
            else
#line 587 "llds_out_global.m"
              {
#line 587 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_14);
              }
#line 593 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__TypedRvals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "llds_out_global.m"
              {
#line 595 "llds_out_global.m"
                {
#line 595 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
#line 594 "llds_out_global.m"
              }
#line 593 "llds_out_global.m"
            else
#line 590 "llds_out_global.m"
              {
#line 591 "llds_out_global.m"
                {
#line 591 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 592 "llds_out_global.m"
                /* direct tailcall eliminated */
#line 592 "llds_out_global.m"
                {
#line 592 "llds_out_global.m"
                  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_global__TypedRvals_11;

#line 592 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2;
#line 592 "llds_out_global.m"
                }
#line 592 "llds_out_global.m"
                continue;
#line 590 "llds_out_global.m"
              }
#line 579 "llds_out_global.m"
          }
#line 578 "llds_out_global.m"
      }
#line 578 "llds_out_global.m"
      break;
#line 578 "llds_out_global.m"
    }
#line 575 "llds_out_global.m"
}

#line 558 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
#line 558 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
#line 558 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6)
#line 558 "llds_out_global.m"
{
#line 561 "llds_out_global.m"
  {
#line 561 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 562 "llds_out_global.m"
    {
#line 562 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 566 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellValue_6)) == (MR_mktag((MR_Integer) 1))))
#line 567 "llds_out_global.m"
      {
#line 567 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

#line 568 "llds_out_global.m"
        {
#line 568 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__ArgGroups_9);
        }
#line 567 "llds_out_global.m"
      }
#line 566 "llds_out_global.m"
    else
#line 564 "llds_out_global.m"
      {
#line 564 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__TypedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

#line 565 "llds_out_global.m"
        {
#line 565 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__TypedArgs_8);
        }
#line 564 "llds_out_global.m"
      }
#line 570 "llds_out_global.m"
    {
#line 570 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
#line 561 "llds_out_global.m"
  }
#line 558 "llds_out_global.m"
}

#line 536 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
#line 536 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 536 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 536 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
#line 536 "llds_out_global.m"
{
#line 539 "llds_out_global.m"
  while (MR_TRUE)
#line 539 "llds_out_global.m"
    {
#line 539 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 539 "llds_out_global.m"
      {
#line 539 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 539 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "llds_out_global.m"
          {
#line 539 "llds_out_global.m"
          }
#line 539 "llds_out_global.m"
        else
#line 540 "llds_out_global.m"
          {
#line 540 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Group_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 540 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Groups_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 540 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_16;
#line 540 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ArraySize_17;
#line 540 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_36_36;

#line 541 "llds_out_global.m"
            {
#line 541 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
#line 542 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 0)));
#line 542 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__ArraySize_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 1)));
#line 543 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__ArraySize_17 == (MR_Integer) 1);
#line 543 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 544 "llds_out_global.m"
              {
#line 544 "llds_out_global.m"
                {
#line 544 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
#line 545 "llds_out_global.m"
                {
#line 545 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
#line 546 "llds_out_global.m"
                {
#line 546 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
#line 547 "llds_out_global.m"
                {
#line 547 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 544 "llds_out_global.m"
              }
#line 543 "llds_out_global.m"
            else
#line 549 "llds_out_global.m"
              {
#line 549 "llds_out_global.m"
                {
#line 549 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
#line 550 "llds_out_global.m"
                {
#line 550 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
#line 551 "llds_out_global.m"
                {
#line 551 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
#line 552 "llds_out_global.m"
                {
#line 552 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
#line 553 "llds_out_global.m"
                {
#line 553 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArraySize_17);
                }
#line 554 "llds_out_global.m"
                {
#line 554 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "];\n");
                }
#line 549 "llds_out_global.m"
              }
#line 556 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__V_36_36 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
#line 556 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 556 "llds_out_global.m"
            {
#line 556 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Groups_12;
#line 556 "llds_out_global.m"
              MR_Integer ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3 = ll_backend__llds_out__llds_out_global__V_36_36;

#line 556 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3;
#line 556 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 556 "llds_out_global.m"
            }
#line 556 "llds_out_global.m"
            continue;
#line 540 "llds_out_global.m"
          }
#line 539 "llds_out_global.m"
      }
#line 539 "llds_out_global.m"
      break;
#line 539 "llds_out_global.m"
    }
#line 536 "llds_out_global.m"
}

#line 519 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
#line 519 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 519 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 519 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
#line 519 "llds_out_global.m"
{
#line 522 "llds_out_global.m"
  while (MR_TRUE)
#line 522 "llds_out_global.m"
    {
#line 522 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 522 "llds_out_global.m"
      {
#line 522 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 522 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "llds_out_global.m"
          {
#line 522 "llds_out_global.m"
          }
#line 522 "llds_out_global.m"
        else
#line 523 "llds_out_global.m"
          {
#line 523 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 523 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 523 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_27_27;

#line 524 "llds_out_global.m"
            {
#line 524 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
#line 525 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Type_11 == (MR_Integer) 9);
#line 525 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 527 "llds_out_global.m"
              {
#line 527 "llds_out_global.m"
                {
#line 527 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_Float_Aligned");
                }
#line 527 "llds_out_global.m"
              }
#line 525 "llds_out_global.m"
            else
#line 529 "llds_out_global.m"
              {
#line 529 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_11);
              }
#line 531 "llds_out_global.m"
            {
#line 531 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " f");
            }
#line 532 "llds_out_global.m"
            {
#line 532 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
            }
#line 533 "llds_out_global.m"
            {
#line 533 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 534 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__V_27_27 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
#line 534 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 534 "llds_out_global.m"
            {
#line 534 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Types_12;
#line 534 "llds_out_global.m"
              MR_Integer ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3 = ll_backend__llds_out__llds_out_global__V_27_27;

#line 534 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3;
#line 534 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 534 "llds_out_global.m"
            }
#line 534 "llds_out_global.m"
            continue;
#line 523 "llds_out_global.m"
          }
#line 522 "llds_out_global.m"
      }
#line 522 "llds_out_global.m"
      break;
#line 522 "llds_out_global.m"
    }
#line 519 "llds_out_global.m"
}

#line 514 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
#line 514 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 514 "llds_out_global.m"
{
#line 516 "llds_out_global.m"
  {
#line 516 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 516 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2;

#line 516 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 516 "llds_out_global.m"
      {
#line 516 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

#line 516 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 2)));
#line 516 "llds_out_global.m"
      }
#line 516 "llds_out_global.m"
    else
#line 517 "llds_out_global.m"
      {
#line 517 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

#line 517 "llds_out_global.m"
        {
#line 517 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "llds_out_global.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Rval_7));
#line 517 "llds_out_global.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "llds_out_global.m"
        }
#line 517 "llds_out_global.m"
      }
#line 516 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__HeadVar__2_2;
#line 516 "llds_out_global.m"
  }
#line 514 "llds_out_global.m"
}

#line 510 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
#line 510 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 510 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 510 "llds_out_global.m"
{
#line 510 "llds_out_global.m"
  {
#line 510 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 510 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 510 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2;

#line 510 "llds_out_global.m"
    {
#line 510 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 510 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2));
#line 510 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 510 "llds_out_global.m"
  }
#line 510 "llds_out_global.m"
}

#line 502 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
#line 502 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Value_3)
#line 502 "llds_out_global.m"
{
#line 506 "llds_out_global.m"
  {
#line 506 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 506 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Rvals_4;

#line 506 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Value_3)) == (MR_mktag((MR_Integer) 1))))
#line 509 "llds_out_global.m"
      {
#line 509 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__Groups_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));
#line 509 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__RvalLists_7;

#line 510 "llds_out_global.m"
        {
#line 510 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__RvalLists_7 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[3], ll_backend__llds_out__llds_out_global__Groups_6);
        }
#line 511 "llds_out_global.m"
        {
#line 511 "llds_out_global.m"
          mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__RvalLists_7, &ll_backend__llds_out__llds_out_global__Rvals_4);
        }
#line 509 "llds_out_global.m"
      }
#line 506 "llds_out_global.m"
    else
#line 506 "llds_out_global.m"
      {
#line 506 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));

#line 507 "llds_out_global.m"
        {
#line 507 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__Rvals_4 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__llds_out__llds_out_global__TypedRvals_5);
        }
#line 506 "llds_out_global.m"
      }
#line 506 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__Rvals_4;
#line 506 "llds_out_global.m"
  }
#line 502 "llds_out_global.m"
}

#line 384 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
#line 384 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 384 "llds_out_global.m"
{
#line 387 "llds_out_global.m"
  while (MR_TRUE)
#line 387 "llds_out_global.m"
    {
#line 387 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 387 "llds_out_global.m"
      {
#line 387 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 387 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "llds_out_global.m"
          {
#line 387 "llds_out_global.m"
          }
#line 387 "llds_out_global.m"
        else
#line 388 "llds_out_global.m"
          {
#line 388 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 388 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 388 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
#line 388 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__KindStr_12;
#line 389 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global___VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));

#line 390 "llds_out_global.m"
            {
#line 390 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ 0, 0, ");
            }
#line 391 "llds_out_global.m"
            {
#line 391 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__KindStr_12 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ll_backend__llds_out__llds_out_global__Step_11);
            }
#line 392 "llds_out_global.m"
            {
#line 392 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__KindStr_12);
            }
#line 393 "llds_out_global.m"
            {
#line 393 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
#line 395 "llds_out_global.m"
            {
#line 395 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, 0, 0, 0, 0, 0, ");
            }
#line 397 "llds_out_global.m"
            {
#line 397 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, ");
            }
#line 399 "llds_out_global.m"
            {
#line 399 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, ");
            }
#line 401 "llds_out_global.m"
            {
#line 401 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0 },\n");
            }
#line 402 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 402 "llds_out_global.m"
            {
#line 402 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

#line 402 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 402 "llds_out_global.m"
            }
#line 402 "llds_out_global.m"
            continue;
#line 388 "llds_out_global.m"
          }
#line 387 "llds_out_global.m"
      }
#line 387 "llds_out_global.m"
      break;
#line 387 "llds_out_global.m"
    }
#line 384 "llds_out_global.m"
}

#line 369 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 369 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8)
#line 369 "llds_out_global.m"
{
#line 372 "llds_out_global.m"
  {
#line 372 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 376 "llds_out_global.m"
    {
#line 376 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 377 "llds_out_global.m"
    {
#line 377 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static MR_TableStepStats ");
    }
#line 378 "llds_out_global.m"
    {
#line 378 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
#line 379 "llds_out_global.m"
    {
#line 379 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[] = \n");
    }
#line 380 "llds_out_global.m"
    {
#line 380 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 381 "llds_out_global.m"
    {
#line 381 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(ll_backend__llds_out__llds_out_global__Steps_8);
    }
#line 382 "llds_out_global.m"
    {
#line 382 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 372 "llds_out_global.m"
  }
#line 369 "llds_out_global.m"
}

#line 354 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
#line 354 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 354 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
#line 354 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8)
#line 354 "llds_out_global.m"
{
#line 357 "llds_out_global.m"
  {
#line 357 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 357 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__DataId_10;

#line 361 "llds_out_global.m"
    {
#line 361 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__DataId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_7));
#line 361 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 361 "llds_out_global.m"
    }
#line 362 "llds_out_global.m"
    {
#line 362 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 363 "llds_out_global.m"
    {
#line 363 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static MR_TrieNode ");
    }
#line 364 "llds_out_global.m"
    {
#line 364 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_10);
    }
#line 365 "llds_out_global.m"
    {
#line 365 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 366 "llds_out_global.m"
    {
#line 366 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit_8);
    }
#line 367 "llds_out_global.m"
    {
#line 367 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "];\n");
    }
#line 357 "llds_out_global.m"
  }
#line 354 "llds_out_global.m"
}

#line 333 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
#line 333 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 333 "llds_out_global.m"
{
#line 335 "llds_out_global.m"
  while (MR_TRUE)
#line 335 "llds_out_global.m"
    {
#line 335 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 335 "llds_out_global.m"
      {
#line 335 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 335 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "llds_out_global.m"
          {
#line 335 "llds_out_global.m"
          }
#line 335 "llds_out_global.m"
        else
#line 336 "llds_out_global.m"
          {
#line 336 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));
#line 336 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
#line 336 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__StepType_12;
#line 336 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__MaybeEnumRange_13;

#line 338 "llds_out_global.m"
            {
#line 338 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ \"");
            }
#line 339 "llds_out_global.m"
            {
#line 339 "llds_out_global.m"
              backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_global__VarName_10);
            }
#line 340 "llds_out_global.m"
            {
#line 340 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 341 "llds_out_global.m"
            {
#line 341 "llds_out_global.m"
              backend_libs__rtti__table_trie_step_to_c_3_p_0(ll_backend__llds_out__llds_out_global__Step_11, &ll_backend__llds_out__llds_out_global__StepType_12, &ll_backend__llds_out__llds_out_global__MaybeEnumRange_13);
            }
#line 342 "llds_out_global.m"
            {
#line 342 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__StepType_12);
            }
#line 343 "llds_out_global.m"
            {
#line 343 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 347 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__MaybeEnumRange_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "llds_out_global.m"
              {
#line 346 "llds_out_global.m"
                {
#line 346 "llds_out_global.m"
                  mercury__io__write_int_3_p_0((MR_Integer) -1);
                }
#line 345 "llds_out_global.m"
              }
#line 347 "llds_out_global.m"
            else
#line 348 "llds_out_global.m"
              {
#line 348 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__EnumRange_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeEnumRange_13, (MR_Integer) 0)));

#line 349 "llds_out_global.m"
                {
#line 349 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__EnumRange_14);
                }
#line 348 "llds_out_global.m"
              }
#line 351 "llds_out_global.m"
            {
#line 351 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
#line 352 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 352 "llds_out_global.m"
            {
#line 352 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

#line 352 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 352 "llds_out_global.m"
            }
#line 352 "llds_out_global.m"
            continue;
#line 336 "llds_out_global.m"
          }
#line 335 "llds_out_global.m"
      }
#line 335 "llds_out_global.m"
      break;
#line 335 "llds_out_global.m"
    }
#line 333 "llds_out_global.m"
}

#line 322 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 322 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8)
#line 322 "llds_out_global.m"
{
#line 325 "llds_out_global.m"
  {
#line 325 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 326 "llds_out_global.m"
    {
#line 326 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 327 "llds_out_global.m"
    {
#line 327 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const MR_TableStepDesc ");
    }
#line 328 "llds_out_global.m"
    {
#line 328 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
#line 329 "llds_out_global.m"
    {
#line 329 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    }
#line 330 "llds_out_global.m"
    {
#line 330 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(ll_backend__llds_out__llds_out_global__StepDescs_8);
    }
#line 331 "llds_out_global.m"
    {
#line 331 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 325 "llds_out_global.m"
  }
#line 322 "llds_out_global.m"
}

#line 141 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
#line 141 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 141 "llds_out_global.m"
{
#line 143 "llds_out_global.m"
  {
#line 143 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 143 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Kind_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

#line 144 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Kind_3 == (MR_Integer) 0);
#line 143 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 143 "llds_out_global.m"
  }
#line 141 "llds_out_global.m"
}

#line 95 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
#line 95 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 95 "llds_out_global.m"
{
#line 98 "llds_out_global.m"
  while (MR_TRUE)
#line 98 "llds_out_global.m"
    {
#line 98 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 98 "llds_out_global.m"
      {
#line 98 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 98 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 98 "llds_out_global.m"
          {
#line 98 "llds_out_global.m"
          }
#line 98 "llds_out_global.m"
        else
#line 99 "llds_out_global.m"
          {
#line 99 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 99 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 99 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__MaybeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 0)));
#line 99 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 1)));

#line 101 "llds_out_global.m"
            {
#line 101 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ ");
            }
#line 107 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__MaybeName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "llds_out_global.m"
              {
#line 109 "llds_out_global.m"
                {
#line 109 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "NULL, ");
                }
#line 108 "llds_out_global.m"
              }
#line 107 "llds_out_global.m"
            else
#line 103 "llds_out_global.m"
              {
#line 103 "llds_out_global.m"
                MR_String ll_backend__llds_out__llds_out_global__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeName_10, (MR_Integer) 0)));

#line 104 "llds_out_global.m"
                {
#line 104 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\"");
                }
#line 105 "llds_out_global.m"
                {
#line 105 "llds_out_global.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Name_12);
                }
#line 106 "llds_out_global.m"
                {
#line 106 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\", ");
                }
#line 103 "llds_out_global.m"
              }
#line 114 "llds_out_global.m"
#line 114 "llds_out_global.m"
            switch (ll_backend__llds_out__llds_out_global__Kind_11) {
#line 114 "llds_out_global.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 114 "llds_out_global.m"
              case (MR_Integer) 1:
#line 115 "llds_out_global.m"
                {
#line 116 "llds_out_global.m"
                  {
#line 116 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_FIX_SIZE");
                  }
#line 115 "llds_out_global.m"
                }
#line 114 "llds_out_global.m"
                break;
#line 114 "llds_out_global.m"
              case (MR_Integer) 0:
#line 112 "llds_out_global.m"
                {
#line 113 "llds_out_global.m"
                  {
#line 113 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_VAR_SIZE");
                  }
#line 112 "llds_out_global.m"
                }
#line 114 "llds_out_global.m"
                break;
#line 114 "llds_out_global.m"
              case (MR_Integer) 2:
#line 118 "llds_out_global.m"
                {
#line 119 "llds_out_global.m"
                  {
#line 119 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_OUTPUT");
                  }
#line 118 "llds_out_global.m"
                }
#line 114 "llds_out_global.m"
                break;
#line 114 "llds_out_global.m"
            }
#line 121 "llds_out_global.m"
            {
#line 121 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
#line 122 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 122 "llds_out_global.m"
            {
#line 122 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Args_8;

#line 122 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 122 "llds_out_global.m"
            }
#line 122 "llds_out_global.m"
            continue;
#line 99 "llds_out_global.m"
          }
#line 98 "llds_out_global.m"
      }
#line 98 "llds_out_global.m"
      break;
#line 98 "llds_out_global.m"
    }
#line 95 "llds_out_global.m"
}

#line 499 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 499 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 499 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
#line 499 "llds_out_global.m"
{
#line 499 "llds_out_global.m"
  {
#line 499 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 499 "llds_out_global.m"
    {
#line 499 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 499 "llds_out_global.m"
  }
#line 499 "llds_out_global.m"
}

#line 488 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
#line 488 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 488 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 488 "llds_out_global.m"
{
#line 488 "llds_out_global.m"
  {
#line 488 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 488 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 488 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

#line 488 "llds_out_global.m"
    {
#line 488 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 488 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
#line 488 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 488 "llds_out_global.m"
  }
#line 488 "llds_out_global.m"
}

#line 46 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(
#line 46 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 46 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8,
#line 46 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17,
#line 46 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18)
#line 46 "llds_out_global.m"
{
#line 484 "llds_out_global.m"
  {
#line 484 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42;
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 1)));
#line 484 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 2)));
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Values_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 3)));
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_15;
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Args_16;
#line 484 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__V_34_34;
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_38_38;
#line 484 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_53;
#line 484 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_55_55;
#line 485 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 0)));
#line 499 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39;

#line 487 "llds_out_global.m"
    {
#line 487 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 2304 "ll_backend.llds_out.llds_out_global.c"
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 488 "llds_out_global.m"
    {
#line 488 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__ArgLists_15 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[2], ll_backend__llds_out__llds_out_global__Values_14);
    }
#line 489 "llds_out_global.m"
    {
#line 489 "llds_out_global.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_15, &ll_backend__llds_out__llds_out_global__Args_16);
    }
#line 490 "llds_out_global.m"
    {
#line 490 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18);
    }
#line 492 "llds_out_global.m"
    {
#line 492 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
#line 411 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_53 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_55_55 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_55_55);
    }
#line 413 "llds_out_global.m"
    {
#line 413 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_53);
    }
#line 494 "llds_out_global.m"
    {
#line 494 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 495 "llds_out_global.m"
    {
#line 495 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12, ll_backend__llds_out__llds_out_global__CellNum_13);
    }
#line 496 "llds_out_global.m"
    {
#line 496 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 497 "llds_out_global.m"
    {
#line 497 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_34_34 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_global__Values_14);
    }
#line 497 "llds_out_global.m"
    {
#line 497 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_34_34);
    }
#line 498 "llds_out_global.m"
    {
#line 498 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
#line 499 "llds_out_global.m"
    {
#line 499 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 499 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
#line 499 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2));
#line 499 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
#line 499 "llds_out_global.m"
    }
#line 499 "llds_out_global.m"
    {
#line 499 "llds_out_global.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__V_38_38, ll_backend__llds_out__llds_out_global__Values_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39);
    }
#line 500 "llds_out_global.m"
    {
#line 500 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 484 "llds_out_global.m"
  }
#line 46 "llds_out_global.m"
}

#line 481 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 481 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 481 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
#line 481 "llds_out_global.m"
{
#line 481 "llds_out_global.m"
  {
#line 481 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 481 "llds_out_global.m"
    {
#line 481 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 481 "llds_out_global.m"
  }
#line 481 "llds_out_global.m"
}

#line 470 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
#line 470 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 470 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 470 "llds_out_global.m"
{
#line 470 "llds_out_global.m"
  {
#line 470 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 470 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 470 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

#line 470 "llds_out_global.m"
    {
#line 470 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 470 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
#line 470 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 470 "llds_out_global.m"
  }
#line 470 "llds_out_global.m"
}

#line 42 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(
#line 42 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 42 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8,
#line 42 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16,
#line 42 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17)
#line 42 "llds_out_global.m"
{
#line 466 "llds_out_global.m"
  {
#line 466 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41;
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 1)));
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 2)));
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_14;
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Args_15;
#line 466 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__V_33_33;
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_37_37;
#line 466 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_52;
#line 466 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_54_54;
#line 467 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 0)));
#line 481 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38;

#line 469 "llds_out_global.m"
    {
#line 469 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 2507 "ll_backend.llds_out.llds_out_global.c"
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 470 "llds_out_global.m"
    {
#line 470 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__ArgLists_14 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[1], ll_backend__llds_out__llds_out_global__Values_13);
    }
#line 471 "llds_out_global.m"
    {
#line 471 "llds_out_global.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_14, &ll_backend__llds_out__llds_out_global__Args_15);
    }
#line 472 "llds_out_global.m"
    {
#line 472 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_15, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17);
    }
#line 474 "llds_out_global.m"
    {
#line 474 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
#line 411 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_52 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_54_54 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_54_54);
    }
#line 413 "llds_out_global.m"
    {
#line 413 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_52);
    }
#line 476 "llds_out_global.m"
    {
#line 476 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 477 "llds_out_global.m"
    {
#line 477 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12);
    }
#line 478 "llds_out_global.m"
    {
#line 478 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 479 "llds_out_global.m"
    {
#line 479 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_33_33 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, ll_backend__llds_out__llds_out_global__Values_13);
    }
#line 479 "llds_out_global.m"
    {
#line 479 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_33_33);
    }
#line 480 "llds_out_global.m"
    {
#line 480 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
#line 481 "llds_out_global.m"
    {
#line 481 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 481 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
#line 481 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2));
#line 481 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 481 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
#line 481 "llds_out_global.m"
    }
#line 481 "llds_out_global.m"
    {
#line 481 "llds_out_global.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__V_37_37, ll_backend__llds_out__llds_out_global__Values_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38);
    }
#line 482 "llds_out_global.m"
    {
#line 482 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 466 "llds_out_global.m"
  }
#line 42 "llds_out_global.m"
}

#line 39 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(
#line 39 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6,
#line 39 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13,
#line 39 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14)
#line 39 "llds_out_global.m"
{
#line 450 "llds_out_global.m"
  {
#line 450 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 450 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 0)));
#line 450 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 1)));
#line 450 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 2)));
#line 450 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_37;
#line 450 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_65;
#line 450 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_67_67;
#line 451 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___Values_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 3)));

#line 453 "llds_out_global.m"
    {
#line 453 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 419 "llds_out_global.m"
    {
#line 419 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TypeDeclId_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
#line 419 "llds_out_global.m"
    }
#line 420 "llds_out_global.m"
    {
#line 420 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13);
    }
#line 420 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 421 "llds_out_global.m"
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13;
#line 420 "llds_out_global.m"
    else
#line 423 "llds_out_global.m"
      {
#line 423 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_58;
#line 423 "llds_out_global.m"
        MR_String ll_backend__llds_out__llds_out_global__V_60_60;

#line 423 "llds_out_global.m"
        {
#line 423 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
#line 424 "llds_out_global.m"
        {
#line 424 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
#line 411 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__TypeNum_58 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 412 "llds_out_global.m"
        {
#line 412 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__V_60_60 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
#line 412 "llds_out_global.m"
        {
#line 412 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_60_60);
        }
#line 413 "llds_out_global.m"
        {
#line 413 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_58);
        }
#line 426 "llds_out_global.m"
        {
#line 426 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
#line 430 "llds_out_global.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
#line 431 "llds_out_global.m"
          {
#line 431 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 432 "llds_out_global.m"
            {
#line 432 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_39, (MR_String) "\t", (MR_Integer) 1);
            }
#line 431 "llds_out_global.m"
          }
#line 430 "llds_out_global.m"
        else
#line 428 "llds_out_global.m"
          {
#line 428 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 429 "llds_out_global.m"
            {
#line 429 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_38, (MR_String) "\t", (MR_Integer) 1);
            }
#line 428 "llds_out_global.m"
          }
#line 434 "llds_out_global.m"
        {
#line 434 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 435 "llds_out_global.m"
        {
#line 435 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
#line 436 "llds_out_global.m"
        {
#line 436 "llds_out_global.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14);
        }
#line 423 "llds_out_global.m"
      }
#line 455 "llds_out_global.m"
    {
#line 455 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
#line 411 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_65 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_67_67 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_67_67);
    }
#line 413 "llds_out_global.m"
    {
#line 413 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_65);
    }
#line 457 "llds_out_global.m"
    {
#line 457 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 458 "llds_out_global.m"
    {
#line 458 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10, ll_backend__llds_out__llds_out_global__CellNum_11);
    }
#line 459 "llds_out_global.m"
    {
#line 459 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
#line 450 "llds_out_global.m"
  }
#line 39 "llds_out_global.m"
}

#line 36 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(
#line 36 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6,
#line 36 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12,
#line 36 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13)
#line 36 "llds_out_global.m"
{
#line 439 "llds_out_global.m"
  {
#line 439 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 439 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 0)));
#line 439 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 1)));
#line 439 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_36;
#line 439 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_64;
#line 439 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_66_66;
#line 440 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 2)));

#line 442 "llds_out_global.m"
    {
#line 442 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 419 "llds_out_global.m"
    {
#line 419 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TypeDeclId_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_36, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
#line 419 "llds_out_global.m"
    }
#line 420 "llds_out_global.m"
    {
#line 420 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12);
    }
#line 420 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 421 "llds_out_global.m"
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12;
#line 420 "llds_out_global.m"
    else
#line 423 "llds_out_global.m"
      {
#line 423 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_57;
#line 423 "llds_out_global.m"
        MR_String ll_backend__llds_out__llds_out_global__V_59_59;

#line 423 "llds_out_global.m"
        {
#line 423 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
#line 424 "llds_out_global.m"
        {
#line 424 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
#line 411 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__TypeNum_57 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 412 "llds_out_global.m"
        {
#line 412 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__V_59_59 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
#line 412 "llds_out_global.m"
        {
#line 412 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_59_59);
        }
#line 413 "llds_out_global.m"
        {
#line 413 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_57);
        }
#line 426 "llds_out_global.m"
        {
#line 426 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
#line 430 "llds_out_global.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
#line 431 "llds_out_global.m"
          {
#line 431 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 432 "llds_out_global.m"
            {
#line 432 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_38, (MR_String) "\t", (MR_Integer) 1);
            }
#line 431 "llds_out_global.m"
          }
#line 430 "llds_out_global.m"
        else
#line 428 "llds_out_global.m"
          {
#line 428 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 429 "llds_out_global.m"
            {
#line 429 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_37, (MR_String) "\t", (MR_Integer) 1);
            }
#line 428 "llds_out_global.m"
          }
#line 434 "llds_out_global.m"
        {
#line 434 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 435 "llds_out_global.m"
        {
#line 435 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
#line 436 "llds_out_global.m"
        {
#line 436 "llds_out_global.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13);
        }
#line 423 "llds_out_global.m"
      }
#line 444 "llds_out_global.m"
    {
#line 444 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
#line 411 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_64 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_66_66 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 412 "llds_out_global.m"
    {
#line 412 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_66_66);
    }
#line 413 "llds_out_global.m"
    {
#line 413 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_64);
    }
#line 446 "llds_out_global.m"
    {
#line 446 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 447 "llds_out_global.m"
    {
#line 447 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10);
    }
#line 448 "llds_out_global.m"
    {
#line 448 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
#line 439 "llds_out_global.m"
  }
#line 36 "llds_out_global.m"
}

#line 33 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(
#line 33 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 33 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__TablingInfoStruct_8,
#line 33 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37,
#line 33 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38)
#line 33 "llds_out_global.m"
{
#line 151 "llds_out_global.m"
  {
#line 151 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 0)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__EvalMethod_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 1)));
#line 151 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__NumInputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 2)));
#line 151 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__NumOutputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 3)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 4)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 5)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PTIVectorRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 6)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeParamsRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 7)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 8)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Stats_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 9)));
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InfoDataId_21;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InputStepsDataId_22;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__OutputStepsDataId_23;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TipsDataId_24;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CallStatsDataId_25;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__DeclId_36;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
#line 151 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63;
#line 151 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_75_75;

#line 157 "llds_out_global.m"
    {
#line 157 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__InfoDataId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 157 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "llds_out_global.m"
    }
#line 159 "llds_out_global.m"
    {
#line 159 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__InputStepsDataId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 159 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[0])));
#line 159 "llds_out_global.m"
    }
#line 161 "llds_out_global.m"
    {
#line 161 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__OutputStepsDataId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 161 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[1])));
#line 161 "llds_out_global.m"
    }
#line 163 "llds_out_global.m"
    {
#line 163 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TipsDataId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 163 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 163 "llds_out_global.m"
    }
#line 166 "llds_out_global.m"
    {
#line 166 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__CallStatsDataId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 166 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[1])));
#line 166 "llds_out_global.m"
    }
#line 169 "llds_out_global.m"
    {
#line 169 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 169 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[2])));
#line 169 "llds_out_global.m"
    }
#line 173 "llds_out_global.m"
    {
#line 173 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 173 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[3])));
#line 173 "llds_out_global.m"
    }
#line 176 "llds_out_global.m"
    {
#line 176 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 176 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[4])));
#line 176 "llds_out_global.m"
    }
#line 179 "llds_out_global.m"
    {
#line 179 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22, ll_backend__llds_out__llds_out_global__InputSteps_15);
    }
#line 180 "llds_out_global.m"
    {
#line 180 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60);
    }
#line 217 "llds_out_global.m"
    {
#line 217 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_75_75 = parse_tree__prog_data__eval_method_to_table_type_1_f_0(ll_backend__llds_out__llds_out_global__EvalMethod_12);
    }
#line 3120 "ll_backend.llds_out.llds_out_global.c"
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3122 "ll_backend.llds_out.llds_out_global.c"
      {
#line 183 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
#line 192 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "llds_out_global.m"
          {
#line 191 "llds_out_global.m"
          }
#line 192 "llds_out_global.m"
        else
#line 193 "llds_out_global.m"
          {
#line 193 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 194 "llds_out_global.m"
            {
#line 194 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_30);
            }
#line 193 "llds_out_global.m"
          }
#line 199 "llds_out_global.m"
#line 199 "llds_out_global.m"
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 199 "llds_out_global.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 199 "llds_out_global.m"
          case (MR_Integer) 1:
#line 198 "llds_out_global.m"
            {
#line 198 "llds_out_global.m"
            }
#line 199 "llds_out_global.m"
            break;
#line 199 "llds_out_global.m"
          case (MR_Integer) 0:
#line 200 "llds_out_global.m"
            {
#line 201 "llds_out_global.m"
              {
#line 201 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 202 "llds_out_global.m"
              {
#line 202 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 200 "llds_out_global.m"
            }
#line 199 "llds_out_global.m"
            break;
#line 199 "llds_out_global.m"
        }
#line 214 "llds_out_global.m"
        {
#line 214 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
#line 215 "llds_out_global.m"
        {
#line 215 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
#line 216 "llds_out_global.m"
        {
#line 216 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 217 "llds_out_global.m"
        {
#line 217 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_75_75);
        }
#line 218 "llds_out_global.m"
        {
#line 218 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 219 "llds_out_global.m"
        {
#line 219 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
#line 220 "llds_out_global.m"
        {
#line 220 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 221 "llds_out_global.m"
        {
#line 221 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
#line 222 "llds_out_global.m"
        {
#line 222 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 225 "llds_out_global.m"
        {
#line 225 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 3229 "ll_backend.llds_out.llds_out_global.c"
      }
#line 3231 "ll_backend.llds_out.llds_out_global.c"
    else
#line 3233 "ll_backend.llds_out.llds_out_global.c"
      {
#line 3235 "ll_backend.llds_out.llds_out_global.c"
        MR_Word ll_backend__llds_out__llds_out_global__OutputStepsA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16, (MR_Integer) 0)));

#line 186 "llds_out_global.m"
        {
#line 186 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
        }
#line 187 "llds_out_global.m"
        {
#line 187 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63);
        }
#line 192 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "llds_out_global.m"
          {
#line 191 "llds_out_global.m"
          }
#line 192 "llds_out_global.m"
        else
#line 193 "llds_out_global.m"
          {
#line 193 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_219 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 194 "llds_out_global.m"
            {
#line 194 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_219);
            }
#line 193 "llds_out_global.m"
          }
#line 199 "llds_out_global.m"
#line 199 "llds_out_global.m"
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 199 "llds_out_global.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 199 "llds_out_global.m"
          case (MR_Integer) 1:
#line 198 "llds_out_global.m"
            {
#line 198 "llds_out_global.m"
            }
#line 199 "llds_out_global.m"
            break;
#line 199 "llds_out_global.m"
          case (MR_Integer) 0:
#line 200 "llds_out_global.m"
            {
#line 201 "llds_out_global.m"
              {
#line 201 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 202 "llds_out_global.m"
              {
#line 202 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 207 "llds_out_global.m"
              {
#line 207 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
#line 209 "llds_out_global.m"
              {
#line 209 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
#line 200 "llds_out_global.m"
            }
#line 199 "llds_out_global.m"
            break;
#line 199 "llds_out_global.m"
        }
#line 214 "llds_out_global.m"
        {
#line 214 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
#line 215 "llds_out_global.m"
        {
#line 215 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
#line 216 "llds_out_global.m"
        {
#line 216 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 217 "llds_out_global.m"
        {
#line 217 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_75_75);
        }
#line 218 "llds_out_global.m"
        {
#line 218 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 219 "llds_out_global.m"
        {
#line 219 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
#line 220 "llds_out_global.m"
        {
#line 220 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 221 "llds_out_global.m"
        {
#line 221 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
#line 222 "llds_out_global.m"
        {
#line 222 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 228 "llds_out_global.m"
        {
#line 228 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "1,\n");
        }
#line 3361 "ll_backend.llds_out.llds_out_global.c"
      }
#line 230 "llds_out_global.m"
    {
#line 230 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "(const MR_PseudoTypeInfo *) ");
    }
#line 231 "llds_out_global.m"
    {
#line 231 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17);
    }
#line 232 "llds_out_global.m"
    {
#line 232 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 233 "llds_out_global.m"
    {
#line 233 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
    }
#line 234 "llds_out_global.m"
    {
#line 234 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TypeParamsRval_18);
    }
#line 235 "llds_out_global.m"
    {
#line 235 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 236 "llds_out_global.m"
    {
#line 236 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{ 0 },\n");
    }
#line 237 "llds_out_global.m"
    {
#line 237 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 238 "llds_out_global.m"
    {
#line 238 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22);
    }
#line 239 "llds_out_global.m"
    {
#line 239 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 243 "llds_out_global.m"
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "llds_out_global.m"
      {
#line 242 "llds_out_global.m"
        {
#line 242 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
#line 241 "llds_out_global.m"
      }
#line 243 "llds_out_global.m"
    else
#line 244 "llds_out_global.m"
      {
#line 245 "llds_out_global.m"
        {
#line 245 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23);
        }
#line 246 "llds_out_global.m"
        {
#line 246 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 244 "llds_out_global.m"
      }
#line 248 "llds_out_global.m"
    {
#line 248 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
#line 268 "llds_out_global.m"
#line 268 "llds_out_global.m"
    switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 268 "llds_out_global.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 268 "llds_out_global.m"
      case (MR_Integer) 1:
#line 250 "llds_out_global.m"
        {
#line 251 "llds_out_global.m"
          {
#line 251 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
#line 252 "llds_out_global.m"
          {
#line 252 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 253 "llds_out_global.m"
          {
#line 253 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 254 "llds_out_global.m"
          {
#line 254 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
#line 255 "llds_out_global.m"
          {
#line 255 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
#line 256 "llds_out_global.m"
          {
#line 256 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 257 "llds_out_global.m"
          {
#line 257 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 258 "llds_out_global.m"
          {
#line 258 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
#line 259 "llds_out_global.m"
          {
#line 259 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          }
#line 260 "llds_out_global.m"
          {
#line 260 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 261 "llds_out_global.m"
          {
#line 261 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 262 "llds_out_global.m"
          {
#line 262 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
#line 263 "llds_out_global.m"
          {
#line 263 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
#line 264 "llds_out_global.m"
          {
#line 264 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 265 "llds_out_global.m"
          {
#line 265 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 266 "llds_out_global.m"
          {
#line 266 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
#line 267 "llds_out_global.m"
          {
#line 267 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
#line 250 "llds_out_global.m"
        }
#line 268 "llds_out_global.m"
        break;
#line 268 "llds_out_global.m"
      case (MR_Integer) 0:
#line 269 "llds_out_global.m"
        {
#line 270 "llds_out_global.m"
          {
#line 270 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
#line 271 "llds_out_global.m"
          {
#line 271 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 272 "llds_out_global.m"
          {
#line 272 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 273 "llds_out_global.m"
          {
#line 273 "llds_out_global.m"
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25);
          }
#line 274 "llds_out_global.m"
          {
#line 274 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 275 "llds_out_global.m"
          {
#line 275 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
#line 276 "llds_out_global.m"
          {
#line 276 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 277 "llds_out_global.m"
          {
#line 277 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 278 "llds_out_global.m"
          {
#line 278 "llds_out_global.m"
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26);
          }
#line 279 "llds_out_global.m"
          {
#line 279 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 280 "llds_out_global.m"
          {
#line 280 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          }
#line 290 "llds_out_global.m"
          if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "llds_out_global.m"
            {
#line 283 "llds_out_global.m"
              {
#line 283 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 284 "llds_out_global.m"
              {
#line 284 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 285 "llds_out_global.m"
              {
#line 285 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "NULL\n");
              }
#line 286 "llds_out_global.m"
              {
#line 286 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
#line 287 "llds_out_global.m"
              {
#line 287 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 288 "llds_out_global.m"
              {
#line 288 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 289 "llds_out_global.m"
              {
#line 289 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "NULL\n");
              }
#line 282 "llds_out_global.m"
            }
#line 290 "llds_out_global.m"
          else
#line 291 "llds_out_global.m"
            {
#line 292 "llds_out_global.m"
              {
#line 292 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 293 "llds_out_global.m"
              {
#line 293 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 294 "llds_out_global.m"
              {
#line 294 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27);
              }
#line 295 "llds_out_global.m"
              {
#line 295 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 296 "llds_out_global.m"
              {
#line 296 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
#line 297 "llds_out_global.m"
              {
#line 297 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 298 "llds_out_global.m"
              {
#line 298 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 299 "llds_out_global.m"
              {
#line 299 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28);
              }
#line 300 "llds_out_global.m"
              {
#line 300 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 291 "llds_out_global.m"
            }
#line 302 "llds_out_global.m"
          {
#line 302 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
#line 269 "llds_out_global.m"
        }
#line 268 "llds_out_global.m"
        break;
#line 268 "llds_out_global.m"
    }
#line 310 "llds_out_global.m"
    if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "llds_out_global.m"
      {
#line 306 "llds_out_global.m"
        {
#line 306 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "-1,\n");
        }
#line 307 "llds_out_global.m"
        {
#line 307 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
#line 308 "llds_out_global.m"
        {
#line 308 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 309 "llds_out_global.m"
        {
#line 309 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
#line 305 "llds_out_global.m"
      }
#line 310 "llds_out_global.m"
    else
#line 311 "llds_out_global.m"
      {
#line 311 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit2_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 312 "llds_out_global.m"
        {
#line 312 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit2_35);
        }
#line 313 "llds_out_global.m"
        {
#line 313 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 314 "llds_out_global.m"
        {
#line 314 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TipsDataId_24);
        }
#line 315 "llds_out_global.m"
        {
#line 315 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 316 "llds_out_global.m"
        {
#line 316 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
#line 311 "llds_out_global.m"
      }
#line 318 "llds_out_global.m"
    {
#line 318 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 319 "llds_out_global.m"
    {
#line 319 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__DeclId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 319 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 319 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "llds_out_global.m"
    }
#line 320 "llds_out_global.m"
    {
#line 320 "llds_out_global.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__DeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38);
    }
#line 151 "llds_out_global.m"
  }
#line 33 "llds_out_global.m"
}

#line 132 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
#line 132 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 132 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 132 "llds_out_global.m"
{
#line 132 "llds_out_global.m"
  {
#line 132 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 132 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 132 "llds_out_global.m"
    {
#line 132 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 132 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 132 "llds_out_global.m"
  }
#line 132 "llds_out_global.m"
}

#line 30 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(
#line 30 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 30 "llds_out_global.m"
{
#line 124 "llds_out_global.m"
  while (MR_TRUE)
#line 124 "llds_out_global.m"
    {
#line 124 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 124 "llds_out_global.m"
      {
#line 124 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 124 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 124 "llds_out_global.m"
          {
#line 124 "llds_out_global.m"
          }
#line 124 "llds_out_global.m"
        else
#line 125 "llds_out_global.m"
          {
#line 125 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39;
#line 125 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 125 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
#line 125 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__FullProcName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));
#line 125 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
#line 125 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13;
#line 125 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_25_25;
#line 125 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_29_29;
#line 125 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_33_33;
#line 125 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_42_42;

#line 127 "llds_out_global.m"
            {
#line 127 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\tMR_init_complexity_proc(");
            }
#line 128 "llds_out_global.m"
            {
#line 128 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 129 "llds_out_global.m"
            {
#line 129 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", \"");
            }
#line 130 "llds_out_global.m"
            {
#line 130 "llds_out_global.m"
              backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_global__FullProcName_11);
            }
#line 131 "llds_out_global.m"
            {
#line 131 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 3896 "ll_backend.llds_out.llds_out_global.c"
            ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
#line 132 "llds_out_global.m"
            {
#line 132 "llds_out_global.m"
              mercury__list__filter_3_p_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[0], ll_backend__llds_out__llds_out_global__ArgInfos_12, &ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
#line 133 "llds_out_global.m"
            {
#line 133 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_25_25 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
#line 133 "llds_out_global.m"
            {
#line 133 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_25_25);
            }
#line 134 "llds_out_global.m"
            {
#line 134 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 135 "llds_out_global.m"
            {
#line 135 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_29_29 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ArgInfos_12);
            }
#line 135 "llds_out_global.m"
            {
#line 135 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_29_29);
            }
#line 136 "llds_out_global.m"
            {
#line 136 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 81 "llds_out_global.m"
            {
#line 81 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 81 "llds_out_global.m"
            {
#line 81 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__V_42_42);
            }
#line 137 "llds_out_global.m"
            {
#line 137 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_33_33);
            }
#line 138 "llds_out_global.m"
            {
#line 138 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
#line 139 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 139 "llds_out_global.m"
            {
#line 139 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Infos_8;

#line 139 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 139 "llds_out_global.m"
            }
#line 139 "llds_out_global.m"
            continue;
#line 125 "llds_out_global.m"
          }
#line 124 "llds_out_global.m"
      }
#line 124 "llds_out_global.m"
      break;
#line 124 "llds_out_global.m"
    }
#line 30 "llds_out_global.m"
}

#line 27 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(
#line 27 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 27 "llds_out_global.m"
{
#line 83 "llds_out_global.m"
  while (MR_TRUE)
#line 83 "llds_out_global.m"
    {
#line 83 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 83 "llds_out_global.m"
      {
#line 83 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 83 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "llds_out_global.m"
          {
#line 83 "llds_out_global.m"
          }
#line 83 "llds_out_global.m"
        else
#line 84 "llds_out_global.m"
          {
#line 84 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 84 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 84 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
#line 84 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
#line 84 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_17_17;
#line 84 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_21_21;
#line 84 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_32_32;
#line 85 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));

#line 86 "llds_out_global.m"
            {
#line 86 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\nMR_ComplexityArgInfo ");
            }
#line 81 "llds_out_global.m"
            {
#line 81 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 81 "llds_out_global.m"
            {
#line 81 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__V_32_32);
            }
#line 87 "llds_out_global.m"
            {
#line 87 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_17_17);
            }
#line 88 "llds_out_global.m"
            {
#line 88 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
#line 89 "llds_out_global.m"
            {
#line 89 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_21_21 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, ll_backend__llds_out__llds_out_global__Args_12);
            }
#line 89 "llds_out_global.m"
            {
#line 89 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_21_21);
            }
#line 90 "llds_out_global.m"
            {
#line 90 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "] = {\n");
            }
#line 91 "llds_out_global.m"
            {
#line 91 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(ll_backend__llds_out__llds_out_global__Args_12);
            }
#line 92 "llds_out_global.m"
            {
#line 92 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "};\n");
            }
#line 93 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 93 "llds_out_global.m"
            {
#line 93 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Infos_8;

#line 93 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 93 "llds_out_global.m"
            }
#line 93 "llds_out_global.m"
            continue;
#line 84 "llds_out_global.m"
          }
#line 83 "llds_out_global.m"
      }
#line 83 "llds_out_global.m"
      break;
#line 83 "llds_out_global.m"
    }
#line 27 "llds_out_global.m"
}

void mercury__ll_backend__llds_out__llds_out_global__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_global__init_type_tables(void)
{
}

void mercury__ll_backend__llds_out__llds_out_global__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_global. */
