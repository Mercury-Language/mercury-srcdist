/*
** Automatically generated from `llds_out_global.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "ll_backend.llds_out.llds_out_global.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 682 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
#line 682 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 682 "llds_out_global.m"
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3);

#line 653 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
#line 653 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 638 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3);

#line 603 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
#line 603 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 603 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 603 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2);

#line 594 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
#line 594 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 594 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

#line 571 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
#line 571 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 571 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

#line 554 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
#line 554 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
#line 554 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6);

#line 532 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
#line 532 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 532 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 532 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

#line 515 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
#line 515 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 515 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 515 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

#line 510 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
#line 510 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 506 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
#line 506 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 506 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 498 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
#line 498 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Value_3);

#line 380 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
#line 380 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 365 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8);

#line 350 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
#line 350 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 350 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
#line 350 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8);

#line 329 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
#line 329 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 318 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8);

#line 137 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
#line 137 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 91 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
#line 91 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

#line 495 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 495 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

#line 484 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
#line 484 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 484 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 477 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 477 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

#line 466 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
#line 466 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 466 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

#line 128 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
#line 128 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 128 "llds_out_global.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 505 "ll_backend.llds_out.llds_out_global.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 682 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
#line 682 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 682 "llds_out_global.m"
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3)
#line 682 "llds_out_global.m"
{
#line 684 "llds_out_global.m"
  {
#line 684 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 684 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_4_4;

#line 684 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 684 "llds_out_global.m"
      {
#line 684 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 684 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_4_4)) == (MR_mktag((MR_Integer) 1)));
#line 684 "llds_out_global.m"
        if (ll_backend__llds_out__llds_out_global__succeeded)
#line 684 "llds_out_global.m"
          *ll_backend__llds_out__llds_out_global__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_4_4, (MR_Integer) 0)));
#line 684 "llds_out_global.m"
      }
#line 684 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 684 "llds_out_global.m"
  }
#line 682 "llds_out_global.m"
}

#line 653 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
#line 653 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 653 "llds_out_global.m"
{
#line 655 "llds_out_global.m"
  while (MR_TRUE)
#line 655 "llds_out_global.m"
    {
#line 655 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 655 "llds_out_global.m"
      {
#line 655 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 655 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 655 "llds_out_global.m"
          {
#line 655 "llds_out_global.m"
          }
#line 655 "llds_out_global.m"
        else
#line 656 "llds_out_global.m"
          {
#line 656 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 656 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Ints_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

#line 657 "llds_out_global.m"
            {
#line 657 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_7);
            }
#line 662 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Ints_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "llds_out_global.m"
              {
#line 664 "llds_out_global.m"
                {
#line 664 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 664 "llds_out_global.m"
                  return;
                }
#line 663 "llds_out_global.m"
              }
#line 662 "llds_out_global.m"
            else
#line 659 "llds_out_global.m"
              {
#line 659 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__Int_23;
#line 659 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Ints_24;

#line 660 "llds_out_global.m"
                {
#line 660 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 656 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Int_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 0)));
#line 656 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Ints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 1)));
#line 657 "llds_out_global.m"
                {
#line 657 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_23);
                }
#line 662 "llds_out_global.m"
                if ((ll_backend__llds_out__llds_out_global__Ints_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "llds_out_global.m"
                  {
#line 664 "llds_out_global.m"
                    {
#line 664 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 664 "llds_out_global.m"
                      return;
                    }
#line 663 "llds_out_global.m"
                  }
#line 662 "llds_out_global.m"
                else
#line 659 "llds_out_global.m"
                  {
#line 660 "llds_out_global.m"
                    {
#line 660 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
#line 661 "llds_out_global.m"
                    /* direct tailcall eliminated */
#line 661 "llds_out_global.m"
                    {
#line 661 "llds_out_global.m"
                      MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Ints_24;

#line 661 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 661 "llds_out_global.m"
                    }
#line 661 "llds_out_global.m"
                    continue;
#line 659 "llds_out_global.m"
                  }
#line 659 "llds_out_global.m"
              }
#line 656 "llds_out_global.m"
          }
#line 655 "llds_out_global.m"
      }
#line 655 "llds_out_global.m"
      break;
#line 655 "llds_out_global.m"
    }
#line 653 "llds_out_global.m"
}

#line 638 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
#line 638 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3)
#line 638 "llds_out_global.m"
{
#line 641 "llds_out_global.m"
  while (MR_TRUE)
#line 641 "llds_out_global.m"
    {
#line 641 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 641 "llds_out_global.m"
      {
#line 641 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 641 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 641 "llds_out_global.m"
          {
#line 641 "llds_out_global.m"
          }
#line 641 "llds_out_global.m"
        else
#line 642 "llds_out_global.m"
          {
#line 642 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 0)));
#line 642 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 1)));

#line 643 "llds_out_global.m"
            {
#line 643 "llds_out_global.m"
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_2);
            }
#line 648 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Rvals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "llds_out_global.m"
              {
#line 650 "llds_out_global.m"
                {
#line 650 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 650 "llds_out_global.m"
                  return;
                }
#line 649 "llds_out_global.m"
              }
#line 648 "llds_out_global.m"
            else
#line 645 "llds_out_global.m"
              {
#line 645 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rval_33;
#line 645 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_34;

#line 646 "llds_out_global.m"
                {
#line 646 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 642 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Rval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 0)));
#line 642 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__Rvals_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 1)));
#line 643 "llds_out_global.m"
                {
#line 643 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_33, ll_backend__llds_out__llds_out_global__Type_2);
                }
#line 648 "llds_out_global.m"
                if ((ll_backend__llds_out__llds_out_global__Rvals_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "llds_out_global.m"
                  {
#line 650 "llds_out_global.m"
                    {
#line 650 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 650 "llds_out_global.m"
                      return;
                    }
#line 649 "llds_out_global.m"
                  }
#line 648 "llds_out_global.m"
                else
#line 645 "llds_out_global.m"
                  {
#line 646 "llds_out_global.m"
                    {
#line 646 "llds_out_global.m"
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
#line 647 "llds_out_global.m"
                    /* direct tailcall eliminated */
#line 647 "llds_out_global.m"
                    {
#line 647 "llds_out_global.m"
                      MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3__tmp_copy_3 = ll_backend__llds_out__llds_out_global__Rvals_34;

#line 647 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__HeadVar__3_3 = ll_backend__llds_out__llds_out_global__HeadVar__3__tmp_copy_3;
#line 647 "llds_out_global.m"
                    }
#line 647 "llds_out_global.m"
                    continue;
#line 645 "llds_out_global.m"
                  }
#line 645 "llds_out_global.m"
              }
#line 642 "llds_out_global.m"
          }
#line 641 "llds_out_global.m"
      }
#line 641 "llds_out_global.m"
      break;
#line 641 "llds_out_global.m"
    }
#line 638 "llds_out_global.m"
}

#line 603 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
#line 603 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 603 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 603 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2)
#line 603 "llds_out_global.m"
{
#line 603 "llds_out_global.m"
  {
#line 603 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 603 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 603 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__conv0_N_3;

#line 603 "llds_out_global.m"
    {
#line 603 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1), &ll_backend__llds_out__llds_out_global__conv0_N_3);
    }
#line 603 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 603 "llds_out_global.m"
      {
#line 603 "llds_out_global.m"
        *ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_N_3));
#line 603 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__succeeded = MR_TRUE;
#line 603 "llds_out_global.m"
      }
#line 603 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 603 "llds_out_global.m"
  }
#line 603 "llds_out_global.m"
}

#line 594 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
#line 594 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 594 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
#line 594 "llds_out_global.m"
{
#line 597 "llds_out_global.m"
  while (MR_TRUE)
#line 597 "llds_out_global.m"
    {
#line 597 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 597 "llds_out_global.m"
      {
#line 597 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 597 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "llds_out_global.m"
          {
#line 597 "llds_out_global.m"
          }
#line 597 "llds_out_global.m"
        else
#line 598 "llds_out_global.m"
          {
#line 598 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Group_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
#line 598 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Groups_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));

#line 618 "llds_out_global.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Group_10)) == (MR_mktag((MR_Integer) 0))))
#line 600 "llds_out_global.m"
              {
#line 600 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
#line 600 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 2)));
#line 600 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
#line 614 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Ints_16;
#line 603 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_30_30;

#line 601 "llds_out_global.m"
                {
#line 601 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                }
#line 603 "llds_out_global.m"
                {
#line 603 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__succeeded = mercury__list__map_3_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[4], ll_backend__llds_out__llds_out_global__Rvals_15, &ll_backend__llds_out__llds_out_global__Ints_16);
                }
#line 603 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 603 "llds_out_global.m"
                  {
#line 604 "llds_out_global.m"
                    {
#line 604 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__V_30_30 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_13);
                    }
#line 604 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_30_30 == (MR_Integer) 1);
#line 603 "llds_out_global.m"
                  }
#line 614 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 609 "llds_out_global.m"
                  {
#line 609 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(ll_backend__llds_out__llds_out_global__Ints_16);
                  }
#line 614 "llds_out_global.m"
                else
#line 615 "llds_out_global.m"
                  {
#line 615 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Type_13, ll_backend__llds_out__llds_out_global__Rvals_15);
                  }
#line 617 "llds_out_global.m"
                {
#line 617 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "}");
                }
#line 600 "llds_out_global.m"
              }
#line 618 "llds_out_global.m"
            else
#line 619 "llds_out_global.m"
              {
#line 619 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
#line 619 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
#line 625 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__Int_19;
#line 621 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_24_24;
#line 621 "llds_out_global.m"
                MR_Word ll_backend__llds_out__llds_out_global__V_47_47;

#line 684 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 684 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 684 "llds_out_global.m"
                  {
#line 684 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 1)));
#line 684 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 684 "llds_out_global.m"
                    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 684 "llds_out_global.m"
                      {
#line 684 "llds_out_global.m"
                        ll_backend__llds_out__llds_out_global__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_47_47, (MR_Integer) 0)));
#line 622 "llds_out_global.m"
                        {
#line 622 "llds_out_global.m"
                          ll_backend__llds_out__llds_out_global__V_24_24 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_41);
                        }
#line 622 "llds_out_global.m"
                        ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_24_24 == (MR_Integer) 1);
#line 684 "llds_out_global.m"
                      }
#line 684 "llds_out_global.m"
                  }
#line 625 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 708 "llds_out_global.m"
                  {
#line 708 "llds_out_global.m"
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_19);
                  }
#line 625 "llds_out_global.m"
                else
#line 626 "llds_out_global.m"
                  {
#line 626 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_18, ll_backend__llds_out__llds_out_global__Type_41);
                  }
#line 619 "llds_out_global.m"
              }
#line 633 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__Groups_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "llds_out_global.m"
              {
#line 635 "llds_out_global.m"
                {
#line 635 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 635 "llds_out_global.m"
                  return;
                }
#line 634 "llds_out_global.m"
              }
#line 633 "llds_out_global.m"
            else
#line 630 "llds_out_global.m"
              {
#line 631 "llds_out_global.m"
                {
#line 631 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 632 "llds_out_global.m"
                /* direct tailcall eliminated */
#line 632 "llds_out_global.m"
                {
#line 632 "llds_out_global.m"
                  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_global__Groups_11;

#line 632 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2;
#line 632 "llds_out_global.m"
                }
#line 632 "llds_out_global.m"
                continue;
#line 630 "llds_out_global.m"
              }
#line 598 "llds_out_global.m"
          }
#line 597 "llds_out_global.m"
      }
#line 597 "llds_out_global.m"
      break;
#line 597 "llds_out_global.m"
    }
#line 594 "llds_out_global.m"
}

#line 571 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
#line 571 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
#line 571 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
#line 571 "llds_out_global.m"
{
#line 574 "llds_out_global.m"
  while (MR_TRUE)
#line 574 "llds_out_global.m"
    {
#line 574 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 574 "llds_out_global.m"
      {
#line 574 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 574 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "llds_out_global.m"
          {
#line 574 "llds_out_global.m"
          }
#line 574 "llds_out_global.m"
        else
#line 575 "llds_out_global.m"
          {
#line 575 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypedRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
#line 575 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 0)));
#line 575 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 1)));
#line 582 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__N_15;
#line 578 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__V_20_20;
#line 578 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__V_21_21;

#line 578 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 578 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 578 "llds_out_global.m"
              {
#line 578 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 1)));
#line 578 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 578 "llds_out_global.m"
                if (ll_backend__llds_out__llds_out_global__succeeded)
#line 578 "llds_out_global.m"
                  {
#line 578 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__V_20_20, (MR_Integer) 0)));
#line 579 "llds_out_global.m"
                    {
#line 579 "llds_out_global.m"
                      ll_backend__llds_out__llds_out_global__V_21_21 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_14);
                    }
#line 579 "llds_out_global.m"
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__V_21_21 == (MR_Integer) 1);
#line 578 "llds_out_global.m"
                  }
#line 578 "llds_out_global.m"
              }
#line 582 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 708 "llds_out_global.m"
              {
#line 708 "llds_out_global.m"
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__N_15);
              }
#line 582 "llds_out_global.m"
            else
#line 583 "llds_out_global.m"
              {
#line 583 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_14);
              }
#line 589 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__TypedRvals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "llds_out_global.m"
              {
#line 591 "llds_out_global.m"
                {
#line 591 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\n");
#line 591 "llds_out_global.m"
                  return;
                }
#line 590 "llds_out_global.m"
              }
#line 589 "llds_out_global.m"
            else
#line 586 "llds_out_global.m"
              {
#line 587 "llds_out_global.m"
                {
#line 587 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
#line 588 "llds_out_global.m"
                /* direct tailcall eliminated */
#line 588 "llds_out_global.m"
                {
#line 588 "llds_out_global.m"
                  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_global__TypedRvals_11;

#line 588 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__HeadVar__2__tmp_copy_2;
#line 588 "llds_out_global.m"
                }
#line 588 "llds_out_global.m"
                continue;
#line 586 "llds_out_global.m"
              }
#line 575 "llds_out_global.m"
          }
#line 574 "llds_out_global.m"
      }
#line 574 "llds_out_global.m"
      break;
#line 574 "llds_out_global.m"
    }
#line 571 "llds_out_global.m"
}

#line 554 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
#line 554 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
#line 554 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6)
#line 554 "llds_out_global.m"
{
#line 557 "llds_out_global.m"
  {
#line 557 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 558 "llds_out_global.m"
    {
#line 558 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 562 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellValue_6)) == (MR_mktag((MR_Integer) 1))))
#line 563 "llds_out_global.m"
      {
#line 563 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

#line 564 "llds_out_global.m"
        {
#line 564 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__ArgGroups_9);
        }
#line 563 "llds_out_global.m"
      }
#line 562 "llds_out_global.m"
    else
#line 560 "llds_out_global.m"
      {
#line 560 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__TypedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

#line 561 "llds_out_global.m"
        {
#line 561 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__TypedArgs_8);
        }
#line 560 "llds_out_global.m"
      }
#line 566 "llds_out_global.m"
    {
#line 566 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n");
#line 566 "llds_out_global.m"
      return;
    }
#line 557 "llds_out_global.m"
  }
#line 554 "llds_out_global.m"
}

#line 532 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
#line 532 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 532 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 532 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
#line 532 "llds_out_global.m"
{
#line 535 "llds_out_global.m"
  while (MR_TRUE)
#line 535 "llds_out_global.m"
    {
#line 535 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 535 "llds_out_global.m"
      {
#line 535 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 535 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "llds_out_global.m"
          {
#line 535 "llds_out_global.m"
          }
#line 535 "llds_out_global.m"
        else
#line 536 "llds_out_global.m"
          {
#line 536 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Group_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 536 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Groups_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 536 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_16;
#line 536 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ArraySize_17;
#line 536 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_36_36;

#line 537 "llds_out_global.m"
            {
#line 537 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
#line 538 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 0)));
#line 538 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__ArraySize_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 1)));
#line 539 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__ArraySize_17 == (MR_Integer) 1);
#line 544 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 540 "llds_out_global.m"
              {
#line 540 "llds_out_global.m"
                {
#line 540 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
#line 541 "llds_out_global.m"
                {
#line 541 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
#line 542 "llds_out_global.m"
                {
#line 542 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
#line 543 "llds_out_global.m"
                {
#line 543 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
#line 540 "llds_out_global.m"
              }
#line 544 "llds_out_global.m"
            else
#line 545 "llds_out_global.m"
              {
#line 545 "llds_out_global.m"
                {
#line 545 "llds_out_global.m"
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
#line 546 "llds_out_global.m"
                {
#line 546 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
#line 547 "llds_out_global.m"
                {
#line 547 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
#line 548 "llds_out_global.m"
                {
#line 548 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
#line 549 "llds_out_global.m"
                {
#line 549 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArraySize_17);
                }
#line 550 "llds_out_global.m"
                {
#line 550 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "];\n");
                }
#line 545 "llds_out_global.m"
              }
#line 552 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__V_36_36 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
#line 552 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 552 "llds_out_global.m"
            {
#line 552 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Groups_12;
#line 552 "llds_out_global.m"
              MR_Integer ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3 = ll_backend__llds_out__llds_out_global__V_36_36;

#line 552 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3;
#line 552 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 552 "llds_out_global.m"
            }
#line 552 "llds_out_global.m"
            continue;
#line 536 "llds_out_global.m"
          }
#line 535 "llds_out_global.m"
      }
#line 535 "llds_out_global.m"
      break;
#line 535 "llds_out_global.m"
    }
#line 532 "llds_out_global.m"
}

#line 515 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
#line 515 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
#line 515 "llds_out_global.m"
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
#line 515 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
#line 515 "llds_out_global.m"
{
#line 518 "llds_out_global.m"
  while (MR_TRUE)
#line 518 "llds_out_global.m"
    {
#line 518 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 518 "llds_out_global.m"
      {
#line 518 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 518 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "llds_out_global.m"
          {
#line 518 "llds_out_global.m"
          }
#line 518 "llds_out_global.m"
        else
#line 519 "llds_out_global.m"
          {
#line 519 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_27_27;

#line 520 "llds_out_global.m"
            {
#line 520 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
#line 521 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Type_11 == (MR_Integer) 9);
#line 524 "llds_out_global.m"
            if (ll_backend__llds_out__llds_out_global__succeeded)
#line 523 "llds_out_global.m"
              {
#line 523 "llds_out_global.m"
                {
#line 523 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "MR_Float_Aligned");
                }
#line 523 "llds_out_global.m"
              }
#line 524 "llds_out_global.m"
            else
#line 525 "llds_out_global.m"
              {
#line 525 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_11);
              }
#line 527 "llds_out_global.m"
            {
#line 527 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " f");
            }
#line 528 "llds_out_global.m"
            {
#line 528 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
            }
#line 529 "llds_out_global.m"
            {
#line 529 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
#line 530 "llds_out_global.m"
            ll_backend__llds_out__llds_out_global__V_27_27 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
#line 530 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 530 "llds_out_global.m"
            {
#line 530 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Types_12;
#line 530 "llds_out_global.m"
              MR_Integer ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3 = ll_backend__llds_out__llds_out_global__V_27_27;

#line 530 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__ArgNum__tmp_copy_3;
#line 530 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 530 "llds_out_global.m"
            }
#line 530 "llds_out_global.m"
            continue;
#line 519 "llds_out_global.m"
          }
#line 518 "llds_out_global.m"
      }
#line 518 "llds_out_global.m"
      break;
#line 518 "llds_out_global.m"
    }
#line 515 "llds_out_global.m"
}

#line 510 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
#line 510 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 510 "llds_out_global.m"
{
#line 512 "llds_out_global.m"
  {
#line 512 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 512 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2;

#line 512 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 512 "llds_out_global.m"
      {
#line 512 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 512 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

#line 512 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 2)));
#line 512 "llds_out_global.m"
      }
#line 512 "llds_out_global.m"
    else
#line 513 "llds_out_global.m"
      {
#line 513 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

#line 513 "llds_out_global.m"
        {
#line 513 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "llds_out_global.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Rval_7));
#line 513 "llds_out_global.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "llds_out_global.m"
        }
#line 513 "llds_out_global.m"
      }
#line 512 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__HeadVar__2_2;
#line 512 "llds_out_global.m"
  }
#line 510 "llds_out_global.m"
}

#line 506 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
#line 506 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 506 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 506 "llds_out_global.m"
{
#line 506 "llds_out_global.m"
  {
#line 506 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 506 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 506 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2;

#line 506 "llds_out_global.m"
    {
#line 506 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 506 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2));
#line 506 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 506 "llds_out_global.m"
  }
#line 506 "llds_out_global.m"
}

#line 498 "llds_out_global.m"
static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
#line 498 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Value_3)
#line 498 "llds_out_global.m"
{
#line 502 "llds_out_global.m"
  {
#line 502 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 502 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Rvals_4;

#line 502 "llds_out_global.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Value_3)) == (MR_mktag((MR_Integer) 1))))
#line 505 "llds_out_global.m"
      {
#line 505 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__Groups_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));
#line 505 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__RvalLists_7;

#line 506 "llds_out_global.m"
        {
#line 506 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__RvalLists_7 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[3], ll_backend__llds_out__llds_out_global__Groups_6);
        }
#line 507 "llds_out_global.m"
        {
#line 507 "llds_out_global.m"
          mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__RvalLists_7, &ll_backend__llds_out__llds_out_global__Rvals_4);
        }
#line 505 "llds_out_global.m"
      }
#line 502 "llds_out_global.m"
    else
#line 502 "llds_out_global.m"
      {
#line 502 "llds_out_global.m"
        MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));

#line 503 "llds_out_global.m"
        {
#line 503 "llds_out_global.m"
          return ll_backend__llds_out__llds_out_global__Rvals_4 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__llds_out__llds_out_global__TypedRvals_5);
        }
#line 502 "llds_out_global.m"
      }
#line 502 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__Rvals_4;
#line 502 "llds_out_global.m"
  }
#line 498 "llds_out_global.m"
}

#line 380 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
#line 380 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 380 "llds_out_global.m"
{
#line 383 "llds_out_global.m"
  while (MR_TRUE)
#line 383 "llds_out_global.m"
    {
#line 383 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 383 "llds_out_global.m"
      {
#line 383 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 383 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "llds_out_global.m"
          {
#line 383 "llds_out_global.m"
          }
#line 383 "llds_out_global.m"
        else
#line 384 "llds_out_global.m"
          {
#line 384 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
#line 384 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__KindStr_12;
#line 385 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global___VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));

#line 386 "llds_out_global.m"
            {
#line 386 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ 0, 0, ");
            }
#line 387 "llds_out_global.m"
            {
#line 387 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__KindStr_12 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ll_backend__llds_out__llds_out_global__Step_11);
            }
#line 388 "llds_out_global.m"
            {
#line 388 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__KindStr_12);
            }
#line 389 "llds_out_global.m"
            {
#line 389 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
#line 391 "llds_out_global.m"
            {
#line 391 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, 0, 0, 0, 0, 0, ");
            }
#line 393 "llds_out_global.m"
            {
#line 393 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, ");
            }
#line 395 "llds_out_global.m"
            {
#line 395 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, ");
            }
#line 397 "llds_out_global.m"
            {
#line 397 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "0, 0 },\n");
            }
#line 398 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 398 "llds_out_global.m"
            {
#line 398 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

#line 398 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 398 "llds_out_global.m"
            }
#line 398 "llds_out_global.m"
            continue;
#line 384 "llds_out_global.m"
          }
#line 383 "llds_out_global.m"
      }
#line 383 "llds_out_global.m"
      break;
#line 383 "llds_out_global.m"
    }
#line 380 "llds_out_global.m"
}

#line 365 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 365 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8)
#line 365 "llds_out_global.m"
{
#line 368 "llds_out_global.m"
  {
#line 368 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 372 "llds_out_global.m"
    {
#line 372 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 373 "llds_out_global.m"
    {
#line 373 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static MR_TableStepStats ");
    }
#line 374 "llds_out_global.m"
    {
#line 374 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
#line 375 "llds_out_global.m"
    {
#line 375 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[] = \n");
    }
#line 376 "llds_out_global.m"
    {
#line 376 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 377 "llds_out_global.m"
    {
#line 377 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(ll_backend__llds_out__llds_out_global__Steps_8);
    }
#line 378 "llds_out_global.m"
    {
#line 378 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 378 "llds_out_global.m"
      return;
    }
#line 368 "llds_out_global.m"
  }
#line 365 "llds_out_global.m"
}

#line 350 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
#line 350 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 350 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
#line 350 "llds_out_global.m"
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8)
#line 350 "llds_out_global.m"
{
#line 353 "llds_out_global.m"
  {
#line 353 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 353 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__DataId_10;

#line 357 "llds_out_global.m"
    {
#line 357 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__DataId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_7));
#line 357 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 357 "llds_out_global.m"
    }
#line 358 "llds_out_global.m"
    {
#line 358 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 359 "llds_out_global.m"
    {
#line 359 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static MR_TrieNode ");
    }
#line 360 "llds_out_global.m"
    {
#line 360 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_10);
    }
#line 361 "llds_out_global.m"
    {
#line 361 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 362 "llds_out_global.m"
    {
#line 362 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit_8);
    }
#line 363 "llds_out_global.m"
    {
#line 363 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "];\n");
#line 363 "llds_out_global.m"
      return;
    }
#line 353 "llds_out_global.m"
  }
#line 350 "llds_out_global.m"
}

#line 329 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
#line 329 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 329 "llds_out_global.m"
{
#line 331 "llds_out_global.m"
  while (MR_TRUE)
#line 331 "llds_out_global.m"
    {
#line 331 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 331 "llds_out_global.m"
      {
#line 331 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 331 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "llds_out_global.m"
          {
#line 331 "llds_out_global.m"
          }
#line 331 "llds_out_global.m"
        else
#line 332 "llds_out_global.m"
          {
#line 332 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 332 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));
#line 332 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
#line 332 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__StepType_12;
#line 332 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__MaybeEnumRange_13;

#line 334 "llds_out_global.m"
            {
#line 334 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ \"");
            }
#line 335 "llds_out_global.m"
            {
#line 335 "llds_out_global.m"
              backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_global__VarName_10);
            }
#line 336 "llds_out_global.m"
            {
#line 336 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 337 "llds_out_global.m"
            {
#line 337 "llds_out_global.m"
              backend_libs__rtti__table_trie_step_to_c_3_p_0(ll_backend__llds_out__llds_out_global__Step_11, &ll_backend__llds_out__llds_out_global__StepType_12, &ll_backend__llds_out__llds_out_global__MaybeEnumRange_13);
            }
#line 338 "llds_out_global.m"
            {
#line 338 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__StepType_12);
            }
#line 339 "llds_out_global.m"
            {
#line 339 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 343 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__MaybeEnumRange_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "llds_out_global.m"
              {
#line 342 "llds_out_global.m"
                {
#line 342 "llds_out_global.m"
                  mercury__io__write_int_3_p_0((MR_Integer) -1);
                }
#line 341 "llds_out_global.m"
              }
#line 343 "llds_out_global.m"
            else
#line 344 "llds_out_global.m"
              {
#line 344 "llds_out_global.m"
                MR_Integer ll_backend__llds_out__llds_out_global__EnumRange_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeEnumRange_13, (MR_Integer) 0)));

#line 345 "llds_out_global.m"
                {
#line 345 "llds_out_global.m"
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__EnumRange_14);
                }
#line 344 "llds_out_global.m"
              }
#line 347 "llds_out_global.m"
            {
#line 347 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
#line 348 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 348 "llds_out_global.m"
            {
#line 348 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

#line 348 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 348 "llds_out_global.m"
            }
#line 348 "llds_out_global.m"
            continue;
#line 332 "llds_out_global.m"
          }
#line 331 "llds_out_global.m"
      }
#line 331 "llds_out_global.m"
      break;
#line 331 "llds_out_global.m"
    }
#line 329 "llds_out_global.m"
}

#line 318 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
#line 318 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8)
#line 318 "llds_out_global.m"
{
#line 321 "llds_out_global.m"
  {
#line 321 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 322 "llds_out_global.m"
    {
#line 322 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 323 "llds_out_global.m"
    {
#line 323 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const MR_TableStepDesc ");
    }
#line 324 "llds_out_global.m"
    {
#line 324 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
#line 325 "llds_out_global.m"
    {
#line 325 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    }
#line 326 "llds_out_global.m"
    {
#line 326 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(ll_backend__llds_out__llds_out_global__StepDescs_8);
    }
#line 327 "llds_out_global.m"
    {
#line 327 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 327 "llds_out_global.m"
      return;
    }
#line 321 "llds_out_global.m"
  }
#line 318 "llds_out_global.m"
}

#line 137 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
#line 137 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 137 "llds_out_global.m"
{
#line 139 "llds_out_global.m"
  {
#line 139 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 139 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Kind_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 139 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

#line 140 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Kind_3 == (MR_Integer) 0);
#line 139 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 139 "llds_out_global.m"
  }
#line 137 "llds_out_global.m"
}

#line 91 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
#line 91 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 91 "llds_out_global.m"
{
#line 94 "llds_out_global.m"
  while (MR_TRUE)
#line 94 "llds_out_global.m"
    {
#line 94 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 94 "llds_out_global.m"
      {
#line 94 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 94 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 94 "llds_out_global.m"
          {
#line 94 "llds_out_global.m"
          }
#line 94 "llds_out_global.m"
        else
#line 95 "llds_out_global.m"
          {
#line 95 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__MaybeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 0)));
#line 95 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 1)));

#line 97 "llds_out_global.m"
            {
#line 97 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "{ ");
            }
#line 103 "llds_out_global.m"
            if ((ll_backend__llds_out__llds_out_global__MaybeName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "llds_out_global.m"
              {
#line 105 "llds_out_global.m"
                {
#line 105 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "NULL, ");
                }
#line 104 "llds_out_global.m"
              }
#line 103 "llds_out_global.m"
            else
#line 99 "llds_out_global.m"
              {
#line 99 "llds_out_global.m"
                MR_String ll_backend__llds_out__llds_out_global__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeName_10, (MR_Integer) 0)));

#line 100 "llds_out_global.m"
                {
#line 100 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\"");
                }
#line 101 "llds_out_global.m"
                {
#line 101 "llds_out_global.m"
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Name_12);
                }
#line 102 "llds_out_global.m"
                {
#line 102 "llds_out_global.m"
                  mercury__io__write_string_3_p_0((MR_String) "\", ");
                }
#line 99 "llds_out_global.m"
              }
#line 110 "llds_out_global.m"
#line 110 "llds_out_global.m"
            switch (ll_backend__llds_out__llds_out_global__Kind_11) {
#line 110 "llds_out_global.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "llds_out_global.m"
              case (MR_Integer) 1:
#line 111 "llds_out_global.m"
                {
#line 112 "llds_out_global.m"
                  {
#line 112 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_FIX_SIZE");
                  }
#line 111 "llds_out_global.m"
                }
#line 110 "llds_out_global.m"
                break;
#line 110 "llds_out_global.m"
              case (MR_Integer) 0:
#line 108 "llds_out_global.m"
                {
#line 109 "llds_out_global.m"
                  {
#line 109 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_VAR_SIZE");
                  }
#line 108 "llds_out_global.m"
                }
#line 110 "llds_out_global.m"
                break;
#line 110 "llds_out_global.m"
              case (MR_Integer) 2:
#line 114 "llds_out_global.m"
                {
#line 115 "llds_out_global.m"
                  {
#line 115 "llds_out_global.m"
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_OUTPUT");
                  }
#line 114 "llds_out_global.m"
                }
#line 110 "llds_out_global.m"
                break;
#line 110 "llds_out_global.m"
            }
#line 117 "llds_out_global.m"
            {
#line 117 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
#line 118 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 118 "llds_out_global.m"
            {
#line 118 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Args_8;

#line 118 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 118 "llds_out_global.m"
            }
#line 118 "llds_out_global.m"
            continue;
#line 95 "llds_out_global.m"
          }
#line 94 "llds_out_global.m"
      }
#line 94 "llds_out_global.m"
      break;
#line 94 "llds_out_global.m"
    }
#line 91 "llds_out_global.m"
}

#line 495 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 495 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 495 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
#line 495 "llds_out_global.m"
{
#line 495 "llds_out_global.m"
  {
#line 495 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 495 "llds_out_global.m"
    {
#line 495 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
#line 495 "llds_out_global.m"
      return;
    }
#line 495 "llds_out_global.m"
  }
#line 495 "llds_out_global.m"
}

#line 484 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
#line 484 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 484 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 484 "llds_out_global.m"
{
#line 484 "llds_out_global.m"
  {
#line 484 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 484 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 484 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

#line 484 "llds_out_global.m"
    {
#line 484 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 484 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
#line 484 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 484 "llds_out_global.m"
  }
#line 484 "llds_out_global.m"
}

#line 45 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(
#line 45 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 45 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8,
#line 45 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17,
#line 45 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18)
#line 45 "llds_out_global.m"
{
#line 480 "llds_out_global.m"
  {
#line 480 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42;
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 1)));
#line 480 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 2)));
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Values_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 3)));
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_15;
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Args_16;
#line 480 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__V_34_34;
#line 480 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_38_38;
#line 480 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_53;
#line 480 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_55_55;
#line 481 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 0)));
#line 495 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39;

#line 483 "llds_out_global.m"
    {
#line 483 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 2325 "ll_backend.llds_out.llds_out_global.c"
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 484 "llds_out_global.m"
    {
#line 484 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__ArgLists_15 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[2], ll_backend__llds_out__llds_out_global__Values_14);
    }
#line 485 "llds_out_global.m"
    {
#line 485 "llds_out_global.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_15, &ll_backend__llds_out__llds_out_global__Args_16);
    }
#line 486 "llds_out_global.m"
    {
#line 486 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18);
    }
#line 488 "llds_out_global.m"
    {
#line 488 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
#line 407 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_53 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_55_55 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_55_55);
    }
#line 409 "llds_out_global.m"
    {
#line 409 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_53);
    }
#line 490 "llds_out_global.m"
    {
#line 490 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 491 "llds_out_global.m"
    {
#line 491 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12, ll_backend__llds_out__llds_out_global__CellNum_13);
    }
#line 492 "llds_out_global.m"
    {
#line 492 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 493 "llds_out_global.m"
    {
#line 493 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_34_34 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_global__Values_14);
    }
#line 493 "llds_out_global.m"
    {
#line 493 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_34_34);
    }
#line 494 "llds_out_global.m"
    {
#line 494 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
#line 495 "llds_out_global.m"
    {
#line 495 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
#line 495 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2));
#line 495 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_38_38, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
#line 495 "llds_out_global.m"
    }
#line 495 "llds_out_global.m"
    {
#line 495 "llds_out_global.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__V_38_38, ll_backend__llds_out__llds_out_global__Values_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39);
    }
#line 496 "llds_out_global.m"
    {
#line 496 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 496 "llds_out_global.m"
      return;
    }
#line 480 "llds_out_global.m"
  }
#line 45 "llds_out_global.m"
}

#line 477 "llds_out_global.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
#line 477 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
#line 477 "llds_out_global.m"
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
#line 477 "llds_out_global.m"
{
#line 477 "llds_out_global.m"
  {
#line 477 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 477 "llds_out_global.m"
    {
#line 477 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
#line 477 "llds_out_global.m"
      return;
    }
#line 477 "llds_out_global.m"
  }
#line 477 "llds_out_global.m"
}

#line 466 "llds_out_global.m"
static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
#line 466 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 466 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 466 "llds_out_global.m"
{
#line 466 "llds_out_global.m"
  {
#line 466 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 466 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
#line 466 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

#line 466 "llds_out_global.m"
    {
#line 466 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 466 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
#line 466 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
#line 466 "llds_out_global.m"
  }
#line 466 "llds_out_global.m"
}

#line 41 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(
#line 41 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 41 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8,
#line 41 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16,
#line 41 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17)
#line 41 "llds_out_global.m"
{
#line 462 "llds_out_global.m"
  {
#line 462 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41;
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 1)));
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 2)));
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_14;
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Args_15;
#line 462 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__V_33_33;
#line 462 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__V_37_37;
#line 462 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_52;
#line 462 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_54_54;
#line 463 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 0)));
#line 477 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38;

#line 465 "llds_out_global.m"
    {
#line 465 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 2532 "ll_backend.llds_out.llds_out_global.c"
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 466 "llds_out_global.m"
    {
#line 466 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__ArgLists_14 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[1], ll_backend__llds_out__llds_out_global__Values_13);
    }
#line 467 "llds_out_global.m"
    {
#line 467 "llds_out_global.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_14, &ll_backend__llds_out__llds_out_global__Args_15);
    }
#line 468 "llds_out_global.m"
    {
#line 468 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_15, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17);
    }
#line 470 "llds_out_global.m"
    {
#line 470 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
#line 407 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_52 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_54_54 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_54_54);
    }
#line 409 "llds_out_global.m"
    {
#line 409 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_52);
    }
#line 472 "llds_out_global.m"
    {
#line 472 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 473 "llds_out_global.m"
    {
#line 473 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12);
    }
#line 474 "llds_out_global.m"
    {
#line 474 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
#line 475 "llds_out_global.m"
    {
#line 475 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_33_33 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, ll_backend__llds_out__llds_out_global__Values_13);
    }
#line 475 "llds_out_global.m"
    {
#line 475 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_33_33);
    }
#line 476 "llds_out_global.m"
    {
#line 476 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
#line 477 "llds_out_global.m"
    {
#line 477 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 477 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
#line 477 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2));
#line 477 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 477 "llds_out_global.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__V_37_37, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
#line 477 "llds_out_global.m"
    }
#line 477 "llds_out_global.m"
    {
#line 477 "llds_out_global.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__V_37_37, ll_backend__llds_out__llds_out_global__Values_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38);
    }
#line 478 "llds_out_global.m"
    {
#line 478 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
#line 478 "llds_out_global.m"
      return;
    }
#line 462 "llds_out_global.m"
  }
#line 41 "llds_out_global.m"
}

#line 38 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(
#line 38 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6,
#line 38 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13,
#line 38 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14)
#line 38 "llds_out_global.m"
{
#line 446 "llds_out_global.m"
  {
#line 446 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 446 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 0)));
#line 446 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 1)));
#line 446 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 2)));
#line 446 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_37;
#line 446 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_65;
#line 446 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_67_67;
#line 447 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___Values_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 3)));

#line 449 "llds_out_global.m"
    {
#line 449 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 415 "llds_out_global.m"
    {
#line 415 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TypeDeclId_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
#line 415 "llds_out_global.m"
    }
#line 416 "llds_out_global.m"
    {
#line 416 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13);
    }
#line 418 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 417 "llds_out_global.m"
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13;
#line 418 "llds_out_global.m"
    else
#line 419 "llds_out_global.m"
      {
#line 419 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_58;
#line 419 "llds_out_global.m"
        MR_String ll_backend__llds_out__llds_out_global__V_60_60;

#line 419 "llds_out_global.m"
        {
#line 419 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
#line 420 "llds_out_global.m"
        {
#line 420 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
#line 407 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__TypeNum_58 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 408 "llds_out_global.m"
        {
#line 408 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__V_60_60 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
#line 408 "llds_out_global.m"
        {
#line 408 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_60_60);
        }
#line 409 "llds_out_global.m"
        {
#line 409 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_58);
        }
#line 422 "llds_out_global.m"
        {
#line 422 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
#line 426 "llds_out_global.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
#line 427 "llds_out_global.m"
          {
#line 427 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 428 "llds_out_global.m"
            {
#line 428 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_39, (MR_String) "\t", (MR_Integer) 1);
            }
#line 427 "llds_out_global.m"
          }
#line 426 "llds_out_global.m"
        else
#line 424 "llds_out_global.m"
          {
#line 424 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 425 "llds_out_global.m"
            {
#line 425 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_38, (MR_String) "\t", (MR_Integer) 1);
            }
#line 424 "llds_out_global.m"
          }
#line 430 "llds_out_global.m"
        {
#line 430 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 431 "llds_out_global.m"
        {
#line 431 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
#line 432 "llds_out_global.m"
        {
#line 432 "llds_out_global.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14);
        }
#line 419 "llds_out_global.m"
      }
#line 451 "llds_out_global.m"
    {
#line 451 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
#line 407 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_65 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_67_67 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_67_67);
    }
#line 409 "llds_out_global.m"
    {
#line 409 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_65);
    }
#line 453 "llds_out_global.m"
    {
#line 453 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 454 "llds_out_global.m"
    {
#line 454 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10, ll_backend__llds_out__llds_out_global__CellNum_11);
    }
#line 455 "llds_out_global.m"
    {
#line 455 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
#line 455 "llds_out_global.m"
      return;
    }
#line 446 "llds_out_global.m"
  }
#line 38 "llds_out_global.m"
}

#line 35 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(
#line 35 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6,
#line 35 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12,
#line 35 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13)
#line 35 "llds_out_global.m"
{
#line 435 "llds_out_global.m"
  {
#line 435 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 435 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 0)));
#line 435 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 1)));
#line 435 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_36;
#line 435 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_64;
#line 435 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_66_66;
#line 436 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global___Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 2)));

#line 438 "llds_out_global.m"
    {
#line 438 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 415 "llds_out_global.m"
    {
#line 415 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TypeDeclId_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_36, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
#line 415 "llds_out_global.m"
    }
#line 416 "llds_out_global.m"
    {
#line 416 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12);
    }
#line 418 "llds_out_global.m"
    if (ll_backend__llds_out__llds_out_global__succeeded)
#line 417 "llds_out_global.m"
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12;
#line 418 "llds_out_global.m"
    else
#line 419 "llds_out_global.m"
      {
#line 419 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_57;
#line 419 "llds_out_global.m"
        MR_String ll_backend__llds_out__llds_out_global__V_59_59;

#line 419 "llds_out_global.m"
        {
#line 419 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
#line 420 "llds_out_global.m"
        {
#line 420 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
#line 407 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__TypeNum_57 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 408 "llds_out_global.m"
        {
#line 408 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__V_59_59 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
#line 408 "llds_out_global.m"
        {
#line 408 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_59_59);
        }
#line 409 "llds_out_global.m"
        {
#line 409 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_57);
        }
#line 422 "llds_out_global.m"
        {
#line 422 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
#line 426 "llds_out_global.m"
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
#line 427 "llds_out_global.m"
          {
#line 427 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 428 "llds_out_global.m"
            {
#line 428 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_38, (MR_String) "\t", (MR_Integer) 1);
            }
#line 427 "llds_out_global.m"
          }
#line 426 "llds_out_global.m"
        else
#line 424 "llds_out_global.m"
          {
#line 424 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Types_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

#line 425 "llds_out_global.m"
            {
#line 425 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_37, (MR_String) "\t", (MR_Integer) 1);
            }
#line 424 "llds_out_global.m"
          }
#line 430 "llds_out_global.m"
        {
#line 430 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
#line 431 "llds_out_global.m"
        {
#line 431 "llds_out_global.m"
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
#line 432 "llds_out_global.m"
        {
#line 432 "llds_out_global.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13);
        }
#line 419 "llds_out_global.m"
      }
#line 440 "llds_out_global.m"
    {
#line 440 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
#line 407 "llds_out_global.m"
    ll_backend__llds_out__llds_out_global__TypeNum_64 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_66_66 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
#line 408 "llds_out_global.m"
    {
#line 408 "llds_out_global.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_66_66);
    }
#line 409 "llds_out_global.m"
    {
#line 409 "llds_out_global.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_64);
    }
#line 442 "llds_out_global.m"
    {
#line 442 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
#line 443 "llds_out_global.m"
    {
#line 443 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10);
    }
#line 444 "llds_out_global.m"
    {
#line 444 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
#line 444 "llds_out_global.m"
      return;
    }
#line 435 "llds_out_global.m"
  }
#line 35 "llds_out_global.m"
}

#line 32 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(
#line 32 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
#line 32 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__TablingInfoStruct_8,
#line 32 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37,
#line 32 "llds_out_global.m"
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38)
#line 32 "llds_out_global.m"
{
#line 147 "llds_out_global.m"
  {
#line 147 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 0)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__EvalMethod_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 1)));
#line 147 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__NumInputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 2)));
#line 147 "llds_out_global.m"
    MR_Integer ll_backend__llds_out__llds_out_global__NumOutputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 3)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 4)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 5)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PTIVectorRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 6)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TypeParamsRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 7)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 8)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__Stats_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 9)));
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InfoDataId_21;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__InputStepsDataId_22;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__OutputStepsDataId_23;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__TipsDataId_24;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__CallStatsDataId_25;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__DeclId_36;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
#line 147 "llds_out_global.m"
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63;
#line 147 "llds_out_global.m"
    MR_String ll_backend__llds_out__llds_out_global__V_75_75;

#line 153 "llds_out_global.m"
    {
#line 153 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__InfoDataId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 153 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "llds_out_global.m"
    }
#line 155 "llds_out_global.m"
    {
#line 155 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__InputStepsDataId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 155 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[0])));
#line 155 "llds_out_global.m"
    }
#line 157 "llds_out_global.m"
    {
#line 157 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__OutputStepsDataId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 157 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[1])));
#line 157 "llds_out_global.m"
    }
#line 159 "llds_out_global.m"
    {
#line 159 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__TipsDataId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 159 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 159 "llds_out_global.m"
    }
#line 162 "llds_out_global.m"
    {
#line 162 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__CallStatsDataId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 162 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[1])));
#line 162 "llds_out_global.m"
    }
#line 165 "llds_out_global.m"
    {
#line 165 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 165 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[2])));
#line 165 "llds_out_global.m"
    }
#line 169 "llds_out_global.m"
    {
#line 169 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 169 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[3])));
#line 169 "llds_out_global.m"
    }
#line 172 "llds_out_global.m"
    {
#line 172 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 172 "llds_out_global.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[4])));
#line 172 "llds_out_global.m"
    }
#line 175 "llds_out_global.m"
    {
#line 175 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22, ll_backend__llds_out__llds_out_global__InputSteps_15);
    }
#line 176 "llds_out_global.m"
    {
#line 176 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60);
    }
#line 213 "llds_out_global.m"
    {
#line 213 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__V_75_75 = parse_tree__prog_data__eval_method_to_table_type_1_f_0(ll_backend__llds_out__llds_out_global__EvalMethod_12);
    }
#line 3151 "ll_backend.llds_out.llds_out_global.c"
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3153 "ll_backend.llds_out.llds_out_global.c"
      {
#line 179 "llds_out_global.m"
        ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
#line 188 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "llds_out_global.m"
          {
#line 187 "llds_out_global.m"
          }
#line 188 "llds_out_global.m"
        else
#line 189 "llds_out_global.m"
          {
#line 189 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 190 "llds_out_global.m"
            {
#line 190 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_30);
            }
#line 189 "llds_out_global.m"
          }
#line 195 "llds_out_global.m"
#line 195 "llds_out_global.m"
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 195 "llds_out_global.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 195 "llds_out_global.m"
          case (MR_Integer) 1:
#line 194 "llds_out_global.m"
            {
#line 194 "llds_out_global.m"
            }
#line 195 "llds_out_global.m"
            break;
#line 195 "llds_out_global.m"
          case (MR_Integer) 0:
#line 196 "llds_out_global.m"
            {
#line 197 "llds_out_global.m"
              {
#line 197 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 198 "llds_out_global.m"
              {
#line 198 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 196 "llds_out_global.m"
            }
#line 195 "llds_out_global.m"
            break;
#line 195 "llds_out_global.m"
        }
#line 210 "llds_out_global.m"
        {
#line 210 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
#line 211 "llds_out_global.m"
        {
#line 211 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
#line 212 "llds_out_global.m"
        {
#line 212 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 213 "llds_out_global.m"
        {
#line 213 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_75_75);
        }
#line 214 "llds_out_global.m"
        {
#line 214 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 215 "llds_out_global.m"
        {
#line 215 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
#line 216 "llds_out_global.m"
        {
#line 216 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 217 "llds_out_global.m"
        {
#line 217 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
#line 218 "llds_out_global.m"
        {
#line 218 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 221 "llds_out_global.m"
        {
#line 221 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 3260 "ll_backend.llds_out.llds_out_global.c"
      }
#line 3262 "ll_backend.llds_out.llds_out_global.c"
    else
#line 3264 "ll_backend.llds_out.llds_out_global.c"
      {
#line 3266 "ll_backend.llds_out.llds_out_global.c"
        MR_Word ll_backend__llds_out__llds_out_global__OutputStepsA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16, (MR_Integer) 0)));

#line 182 "llds_out_global.m"
        {
#line 182 "llds_out_global.m"
          ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
        }
#line 183 "llds_out_global.m"
        {
#line 183 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63);
        }
#line 188 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "llds_out_global.m"
          {
#line 187 "llds_out_global.m"
          }
#line 188 "llds_out_global.m"
        else
#line 189 "llds_out_global.m"
          {
#line 189 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_219 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 190 "llds_out_global.m"
            {
#line 190 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_219);
            }
#line 189 "llds_out_global.m"
          }
#line 195 "llds_out_global.m"
#line 195 "llds_out_global.m"
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 195 "llds_out_global.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 195 "llds_out_global.m"
          case (MR_Integer) 1:
#line 194 "llds_out_global.m"
            {
#line 194 "llds_out_global.m"
            }
#line 195 "llds_out_global.m"
            break;
#line 195 "llds_out_global.m"
          case (MR_Integer) 0:
#line 196 "llds_out_global.m"
            {
#line 197 "llds_out_global.m"
              {
#line 197 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 198 "llds_out_global.m"
              {
#line 198 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
#line 203 "llds_out_global.m"
              {
#line 203 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
#line 205 "llds_out_global.m"
              {
#line 205 "llds_out_global.m"
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
#line 196 "llds_out_global.m"
            }
#line 195 "llds_out_global.m"
            break;
#line 195 "llds_out_global.m"
        }
#line 210 "llds_out_global.m"
        {
#line 210 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
#line 211 "llds_out_global.m"
        {
#line 211 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
#line 212 "llds_out_global.m"
        {
#line 212 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
#line 213 "llds_out_global.m"
        {
#line 213 "llds_out_global.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_75_75);
        }
#line 214 "llds_out_global.m"
        {
#line 214 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 215 "llds_out_global.m"
        {
#line 215 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
#line 216 "llds_out_global.m"
        {
#line 216 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 217 "llds_out_global.m"
        {
#line 217 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
#line 218 "llds_out_global.m"
        {
#line 218 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 224 "llds_out_global.m"
        {
#line 224 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "1,\n");
        }
#line 3392 "ll_backend.llds_out.llds_out_global.c"
      }
#line 226 "llds_out_global.m"
    {
#line 226 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "(const MR_PseudoTypeInfo *) ");
    }
#line 227 "llds_out_global.m"
    {
#line 227 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17);
    }
#line 228 "llds_out_global.m"
    {
#line 228 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 229 "llds_out_global.m"
    {
#line 229 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
    }
#line 230 "llds_out_global.m"
    {
#line 230 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TypeParamsRval_18);
    }
#line 231 "llds_out_global.m"
    {
#line 231 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 232 "llds_out_global.m"
    {
#line 232 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{ 0 },\n");
    }
#line 233 "llds_out_global.m"
    {
#line 233 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 234 "llds_out_global.m"
    {
#line 234 "llds_out_global.m"
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22);
    }
#line 235 "llds_out_global.m"
    {
#line 235 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
#line 239 "llds_out_global.m"
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "llds_out_global.m"
      {
#line 238 "llds_out_global.m"
        {
#line 238 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
#line 237 "llds_out_global.m"
      }
#line 239 "llds_out_global.m"
    else
#line 240 "llds_out_global.m"
      {
#line 241 "llds_out_global.m"
        {
#line 241 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23);
        }
#line 242 "llds_out_global.m"
        {
#line 242 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 240 "llds_out_global.m"
      }
#line 244 "llds_out_global.m"
    {
#line 244 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
#line 264 "llds_out_global.m"
#line 264 "llds_out_global.m"
    switch (ll_backend__llds_out__llds_out_global__Stats_20) {
#line 264 "llds_out_global.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 264 "llds_out_global.m"
      case (MR_Integer) 1:
#line 246 "llds_out_global.m"
        {
#line 247 "llds_out_global.m"
          {
#line 247 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
#line 248 "llds_out_global.m"
          {
#line 248 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 249 "llds_out_global.m"
          {
#line 249 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 250 "llds_out_global.m"
          {
#line 250 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
#line 251 "llds_out_global.m"
          {
#line 251 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
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
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
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
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
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
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
#line 246 "llds_out_global.m"
        }
#line 264 "llds_out_global.m"
        break;
#line 264 "llds_out_global.m"
      case (MR_Integer) 0:
#line 265 "llds_out_global.m"
        {
#line 266 "llds_out_global.m"
          {
#line 266 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
#line 267 "llds_out_global.m"
          {
#line 267 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 268 "llds_out_global.m"
          {
#line 268 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 269 "llds_out_global.m"
          {
#line 269 "llds_out_global.m"
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25);
          }
#line 270 "llds_out_global.m"
          {
#line 270 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 271 "llds_out_global.m"
          {
#line 271 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
#line 272 "llds_out_global.m"
          {
#line 272 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 273 "llds_out_global.m"
          {
#line 273 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
#line 274 "llds_out_global.m"
          {
#line 274 "llds_out_global.m"
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26);
          }
#line 275 "llds_out_global.m"
          {
#line 275 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 276 "llds_out_global.m"
          {
#line 276 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          }
#line 286 "llds_out_global.m"
          if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "llds_out_global.m"
            {
#line 279 "llds_out_global.m"
              {
#line 279 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 280 "llds_out_global.m"
              {
#line 280 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 281 "llds_out_global.m"
              {
#line 281 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "NULL\n");
              }
#line 282 "llds_out_global.m"
              {
#line 282 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
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
#line 278 "llds_out_global.m"
            }
#line 286 "llds_out_global.m"
          else
#line 287 "llds_out_global.m"
            {
#line 288 "llds_out_global.m"
              {
#line 288 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 289 "llds_out_global.m"
              {
#line 289 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 290 "llds_out_global.m"
              {
#line 290 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27);
              }
#line 291 "llds_out_global.m"
              {
#line 291 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 292 "llds_out_global.m"
              {
#line 292 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
#line 293 "llds_out_global.m"
              {
#line 293 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 294 "llds_out_global.m"
              {
#line 294 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
#line 295 "llds_out_global.m"
              {
#line 295 "llds_out_global.m"
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28);
              }
#line 296 "llds_out_global.m"
              {
#line 296 "llds_out_global.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 287 "llds_out_global.m"
            }
#line 298 "llds_out_global.m"
          {
#line 298 "llds_out_global.m"
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
#line 265 "llds_out_global.m"
        }
#line 264 "llds_out_global.m"
        break;
#line 264 "llds_out_global.m"
    }
#line 306 "llds_out_global.m"
    if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "llds_out_global.m"
      {
#line 302 "llds_out_global.m"
        {
#line 302 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "-1,\n");
        }
#line 303 "llds_out_global.m"
        {
#line 303 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
#line 304 "llds_out_global.m"
        {
#line 304 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 305 "llds_out_global.m"
        {
#line 305 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
#line 301 "llds_out_global.m"
      }
#line 306 "llds_out_global.m"
    else
#line 307 "llds_out_global.m"
      {
#line 307 "llds_out_global.m"
        MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit2_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

#line 308 "llds_out_global.m"
        {
#line 308 "llds_out_global.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit2_35);
        }
#line 309 "llds_out_global.m"
        {
#line 309 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
#line 310 "llds_out_global.m"
        {
#line 310 "llds_out_global.m"
          ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TipsDataId_24);
        }
#line 311 "llds_out_global.m"
        {
#line 311 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
#line 312 "llds_out_global.m"
        {
#line 312 "llds_out_global.m"
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
#line 307 "llds_out_global.m"
      }
#line 314 "llds_out_global.m"
    {
#line 314 "llds_out_global.m"
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
#line 315 "llds_out_global.m"
    {
#line 315 "llds_out_global.m"
      ll_backend__llds_out__llds_out_global__DeclId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 315 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 315 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
#line 315 "llds_out_global.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "llds_out_global.m"
    }
#line 316 "llds_out_global.m"
    {
#line 316 "llds_out_global.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__DeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38);
#line 316 "llds_out_global.m"
      return;
    }
#line 147 "llds_out_global.m"
  }
#line 32 "llds_out_global.m"
}

#line 128 "llds_out_global.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
#line 128 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
#line 128 "llds_out_global.m"
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
#line 128 "llds_out_global.m"
{
#line 128 "llds_out_global.m"
  {
#line 128 "llds_out_global.m"
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
#line 128 "llds_out_global.m"
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

#line 128 "llds_out_global.m"
    {
#line 128 "llds_out_global.m"
      return ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
#line 128 "llds_out_global.m"
    return ll_backend__llds_out__llds_out_global__succeeded;
#line 128 "llds_out_global.m"
  }
#line 128 "llds_out_global.m"
}

#line 29 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(
#line 29 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 29 "llds_out_global.m"
{
#line 120 "llds_out_global.m"
  while (MR_TRUE)
#line 120 "llds_out_global.m"
    {
#line 120 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 120 "llds_out_global.m"
      {
#line 120 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 120 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "llds_out_global.m"
          {
#line 120 "llds_out_global.m"
          }
#line 120 "llds_out_global.m"
        else
#line 121 "llds_out_global.m"
          {
#line 121 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39;
#line 121 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
#line 121 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__FullProcName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));
#line 121 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ArgInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
#line 121 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13;
#line 121 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_25_25;
#line 121 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_29_29;
#line 121 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_33_33;
#line 121 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_42_42;

#line 123 "llds_out_global.m"
            {
#line 123 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\tMR_init_complexity_proc(");
            }
#line 124 "llds_out_global.m"
            {
#line 124 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 125 "llds_out_global.m"
            {
#line 125 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", \"");
            }
#line 126 "llds_out_global.m"
            {
#line 126 "llds_out_global.m"
              backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_global__FullProcName_11);
            }
#line 127 "llds_out_global.m"
            {
#line 127 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 3929 "ll_backend.llds_out.llds_out_global.c"
            ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
#line 128 "llds_out_global.m"
            {
#line 128 "llds_out_global.m"
              mercury__list__filter_3_p_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[0], ll_backend__llds_out__llds_out_global__ArgInfos_12, &ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
#line 129 "llds_out_global.m"
            {
#line 129 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_25_25 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
#line 129 "llds_out_global.m"
            {
#line 129 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_25_25);
            }
#line 130 "llds_out_global.m"
            {
#line 130 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 131 "llds_out_global.m"
            {
#line 131 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_29_29 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ArgInfos_12);
            }
#line 131 "llds_out_global.m"
            {
#line 131 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_29_29);
            }
#line 132 "llds_out_global.m"
            {
#line 132 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 77 "llds_out_global.m"
            {
#line 77 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 77 "llds_out_global.m"
            {
#line 77 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__V_42_42);
            }
#line 133 "llds_out_global.m"
            {
#line 133 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_33_33);
            }
#line 134 "llds_out_global.m"
            {
#line 134 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
#line 135 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 135 "llds_out_global.m"
            {
#line 135 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Infos_8;

#line 135 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 135 "llds_out_global.m"
            }
#line 135 "llds_out_global.m"
            continue;
#line 121 "llds_out_global.m"
          }
#line 120 "llds_out_global.m"
      }
#line 120 "llds_out_global.m"
      break;
#line 120 "llds_out_global.m"
    }
#line 29 "llds_out_global.m"
}

#line 26 "llds_out_global.m"
void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(
#line 26 "llds_out_global.m"
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
#line 26 "llds_out_global.m"
{
#line 79 "llds_out_global.m"
  while (MR_TRUE)
#line 79 "llds_out_global.m"
    {
#line 79 "llds_out_global.m"
      /* tailcall optimized into a loop */
#line 79 "llds_out_global.m"
      {
#line 79 "llds_out_global.m"
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

#line 79 "llds_out_global.m"
        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "llds_out_global.m"
          {
#line 79 "llds_out_global.m"
          }
#line 79 "llds_out_global.m"
        else
#line 80 "llds_out_global.m"
          {
#line 80 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
#line 80 "llds_out_global.m"
            MR_Word ll_backend__llds_out__llds_out_global__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
#line 80 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_17_17;
#line 80 "llds_out_global.m"
            MR_Integer ll_backend__llds_out__llds_out_global__V_21_21;
#line 80 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_32_32;
#line 81 "llds_out_global.m"
            MR_String ll_backend__llds_out__llds_out_global__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));

#line 82 "llds_out_global.m"
            {
#line 82 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "\nMR_ComplexityArgInfo ");
            }
#line 77 "llds_out_global.m"
            {
#line 77 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
#line 77 "llds_out_global.m"
            {
#line 77 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__V_32_32);
            }
#line 83 "llds_out_global.m"
            {
#line 83 "llds_out_global.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__V_17_17);
            }
#line 84 "llds_out_global.m"
            {
#line 84 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
#line 85 "llds_out_global.m"
            {
#line 85 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__V_21_21 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, ll_backend__llds_out__llds_out_global__Args_12);
            }
#line 85 "llds_out_global.m"
            {
#line 85 "llds_out_global.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__V_21_21);
            }
#line 86 "llds_out_global.m"
            {
#line 86 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "] = {\n");
            }
#line 87 "llds_out_global.m"
            {
#line 87 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(ll_backend__llds_out__llds_out_global__Args_12);
            }
#line 88 "llds_out_global.m"
            {
#line 88 "llds_out_global.m"
              mercury__io__write_string_3_p_0((MR_String) "};\n");
            }
#line 89 "llds_out_global.m"
            /* direct tailcall eliminated */
#line 89 "llds_out_global.m"
            {
#line 89 "llds_out_global.m"
              MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_global__Infos_8;

#line 89 "llds_out_global.m"
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__HeadVar__1__tmp_copy_1;
#line 89 "llds_out_global.m"
            }
#line 89 "llds_out_global.m"
            continue;
#line 80 "llds_out_global.m"
          }
#line 79 "llds_out_global.m"
      }
#line 79 "llds_out_global.m"
      break;
#line 79 "llds_out_global.m"
    }
#line 26 "llds_out_global.m"
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
